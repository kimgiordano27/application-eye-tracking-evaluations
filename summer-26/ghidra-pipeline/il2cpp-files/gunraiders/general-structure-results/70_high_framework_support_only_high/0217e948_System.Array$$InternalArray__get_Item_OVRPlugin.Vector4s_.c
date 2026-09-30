/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.Vector4s>
ENTRY_POINT: 0217e948
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__get_Item<OVRPlugin_Vector4s>(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  int in_w8;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  
  if (in_w8 == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar1 = FUN_03562cf4(0);
  uVar1 = CrescentProjectile_<AfterHit>d__47__System_Collections_IEnumerator_Reset(uVar1,0);
  uVar2 = thunk_FUN_03152714(uVar1,*(undefined8 *)OVR_OpenVR_EVRApplicationProperty_TypeInfo,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 8);
    if (lVar3 == 0) goto LAB_0217ea48;
    uVar2 = FUN_021c1478(lVar3,0);
    if ((uVar2 & 1) != 0) goto LAB_0217e9e8;
  }
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar1 = FUN_03562cf4(0);
  uVar1 = CrescentProjectile_<AfterHit>d__47__System_Collections_IEnumerator_Reset(uVar1,0);
  uVar2 = thunk_FUN_03152714(uVar1,*(undefined8 *)System_Action<JsonResponseInfoAll>_TypeInfo,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 8);
    if (lVar3 == 0) {
LAB_0217ea48:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar2 = FUN_021c1478(lVar3,0);
    if ((uVar2 & 1) != 0) {
LAB_0217e9e8:
      if (*(char *)(unaff_x19 + 0x38) == '\0') {
        *(undefined1 *)(unaff_x19 + 0x38) = 1;
        FUN_0217ea4c();
        FUN_0217ea80();
        uVar1 = FUN_03d4b1bc();
        *(undefined8 *)(unaff_x19 + 0x40) = uVar1;
      }
      return;
    }
  }
  FUN_0217ea4c();
  *(undefined2 *)(unaff_x19 + 0x38) = 0;
  FUN_0217e3e4();
  return;
}


