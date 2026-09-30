/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.Vector4f>
ENTRY_POINT: 0217e8ac
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_01c5d288();
  FUN_01c5d288(OVR_OpenVR_EVRApplicationProperty_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0xd39) = 1;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar2 = FUN_03568cd0(0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (((*(long *)(unaff_x19 + 0x70) != 0) &&
      (lVar4 = *(long *)(*(long *)(*(long *)PTR_DAT_042392c0 + 0xb8) + 0x58), lVar4 != 0)) &&
     (lVar4 = *(long *)(lVar4 + 0x58), lVar4 != 0)) {
    if (*(int *)(*(long *)(unaff_x19 + 0x70) + 0x18) != *(int *)(lVar4 + 0x18)) {
      *(long *)(unaff_x19 + 0x70) = lVar4;
    }
    puVar1 = PTR_DAT_04239378;
    lVar4 = *(long *)(*(long *)(*(long *)PTR_DAT_04239378 + 0xb8) + 8);
    if (lVar4 != 0) {
      uVar2 = FUN_021c1478(lVar4,0);
      if ((uVar2 & 1) != 0) {
LAB_0217e9e8:
        if (*(char *)(unaff_x19 + 0x38) == '\0') {
          *(undefined1 *)(unaff_x19 + 0x38) = 1;
          FUN_0217ea4c();
          FUN_0217ea80();
          uVar3 = FUN_03d4b1bc();
          *(undefined8 *)(unaff_x19 + 0x40) = uVar3;
        }
        return;
      }
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar3 = FUN_03562cf4(0);
      uVar3 = CrescentProjectile_<AfterHit>d__47__System_Collections_IEnumerator_Reset(uVar3,0);
      uVar2 = thunk_FUN_03152714(uVar3,*(undefined8 *)OVR_OpenVR_EVRApplicationProperty_TypeInfo,0);
      if ((uVar2 & 1) != 0) {
        lVar4 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
        if (lVar4 == 0) goto LAB_0217ea48;
        uVar2 = FUN_021c1478(lVar4,0);
        if ((uVar2 & 1) != 0) goto LAB_0217e9e8;
      }
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar3 = FUN_03562cf4(0);
      uVar3 = CrescentProjectile_<AfterHit>d__47__System_Collections_IEnumerator_Reset(uVar3,0);
      uVar2 = thunk_FUN_03152714(uVar3,*(undefined8 *)System_Action<JsonResponseInfoAll>_TypeInfo,0)
      ;
      if ((uVar2 & 1) != 0) {
        lVar4 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
        if (lVar4 == 0) goto LAB_0217ea48;
        uVar2 = FUN_021c1478(lVar4,0);
        if ((uVar2 & 1) != 0) goto LAB_0217e9e8;
      }
      FUN_0217ea4c();
      *(undefined2 *)(unaff_x19 + 0x38) = 0;
      FUN_0217e3e4();
      return;
    }
  }
LAB_0217ea48:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


