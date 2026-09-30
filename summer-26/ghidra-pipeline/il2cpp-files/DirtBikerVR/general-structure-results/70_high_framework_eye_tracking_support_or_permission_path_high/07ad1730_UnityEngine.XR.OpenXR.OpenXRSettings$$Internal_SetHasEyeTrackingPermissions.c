/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_SetHasEyeTrackingPermissions
ENTRY_POINT: 07ad1730
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_6;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup
*/


void UnityEngine_XR_OpenXR_OpenXRSettings__Internal_SetHasEyeTrackingPermissions(void)

{
  bool in_CY;
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  undefined4 unaff_w22;
  
  if (in_CY) {
    thunk_FUN_03af1434(PTR_DAT_08491280);
    uVar3 = thunk_FUN_03ac74bc();
    uVar5 = thunk_FUN_03af1434(UnityEngine_Debug_TypeInfo);
    FUN_066b7618(uVar3,uVar5,0);
    uVar5 = thunk_FUN_03af1434(Meta_XR_ImmersiveDebugger_DebugGizmoType_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar3,uVar5);
  }
  if (*(int *)(unaff_x20 + 0x2c) == unaff_w21) {
    return;
  }
  lVar1 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_Rendering_DebugFrameTiming_TypeInfo);
  FUN_07a6a994(lVar1,0);
  if (lVar1 != 0) {
    FUN_07a6a8c4(lVar1,unaff_w22,0);
    plVar2 = *(long **)(unaff_x20 + 0x40);
    if (plVar2 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
      FUN_07a6a7f4(lVar1,uVar3,0);
      plVar2 = *(long **)(unaff_x20 + 0x10);
      if (plVar2 != (long *)0x0) {
        lVar6 = *plVar2;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) ==
                *(long *)System_Runtime_Serialization_AttributeData_TypeInfo) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_07ad1800;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_03ac43c4(plVar2,*(long *)System_Runtime_Serialization_AttributeData_TypeInfo,0)
        ;
LAB_07ad1800:
        uVar3 = (*(code *)*puVar4)(plVar2,puVar4[1]);
        FUN_07a6a724(lVar1,uVar3,0);
        plVar2 = (long *)(unaff_x19 + 0x18);
        *plVar2 = lVar1;
        thunk_FUN_03afed3c(plVar2,lVar1);
        lVar1 = FUN_07aebb08(0);
        if (*plVar2 != 0) {
          uVar3 = FUN_07a6a5fc(*plVar2,0);
          uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08491c78);
          FUN_066b7b48();
          if (lVar1 != 0) {
            FUN_07aef90c(lVar1,uVar3,uVar5,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


