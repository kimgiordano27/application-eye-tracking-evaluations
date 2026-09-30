/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.Quatf>
ENTRY_POINT: 0217e4f8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__get_Item<OVRPlugin_Quatf>(ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x21;
  undefined8 *puVar7;
  long *unaff_x22;
  long unaff_x23;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  
  plVar8 = *(long **)(unaff_x23 + 0xad8);
  puVar7 = *(undefined8 **)(unaff_x21 + 0xc38);
  if ((param_1 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422fad8);
    FUN_01c5d288(OVR_OpenVR_ETrackedPropertyError_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_ETrackingUniverseOrigin_TypeInfo);
    FUN_01c5d288(PTR_DAT_04239678);
    FUN_01c5d288(PTR_DAT_042392c0);
    *(undefined1 *)(unaff_x20 + 0xd36) = 1;
  }
  uVar6 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8);
  uVar2 = thunk_FUN_01c496e0(*plVar8);
  FUN_03245f44(uVar2,param_2,*puVar7,0);
  plVar3 = (long *)FUN_03316eac(uVar6,uVar2,0);
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar8;
    if (*plVar3 == lVar5) {
      *(long **)(*(long *)(*unaff_x22 + 0xb8) + 8) = plVar3;
      if (*plVar3 == lVar5) goto LAB_0217e5c0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5d748();
  }
  *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8) = 0;
LAB_0217e5c0:
  if (*(long *)(param_2 + 0x28) != 0) {
    uVar2 = FUN_01c5d2fc(*(undefined8 *)OVR_OpenVR_ETrackingUniverseOrigin_TypeInfo,
                         *(undefined4 *)(*(long *)(param_2 + 0x28) + 0x18));
    lVar5 = *(long *)(param_2 + 0x28);
    *(undefined8 *)(param_2 + 0x30) = uVar2;
    puVar1 = PTR_DAT_04239678;
    if (lVar5 != 0) {
      lVar9 = 4;
      do {
        uVar10 = lVar9 - 4;
        if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar10) {
          return;
        }
        if (*(uint *)(lVar5 + 0x18) <= uVar10) {
LAB_0217e67c:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        plVar8 = *(long **)(param_2 + 0x30);
        uVar2 = *(undefined8 *)(lVar5 + lVar9 * 8);
        lVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
        FUN_020f0a84(lVar5,uVar2,0);
        if (plVar8 == (long *)0x0) break;
        if ((lVar5 != 0) &&
           (lVar4 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar4 == 0)) {
          uVar2 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar2,0);
        }
        if (*(uint *)(plVar8 + 3) <= uVar10) goto LAB_0217e67c;
        plVar8[lVar9] = lVar5;
        lVar5 = *(long *)(param_2 + 0x28);
        lVar9 = lVar9 + 1;
      } while (lVar5 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


