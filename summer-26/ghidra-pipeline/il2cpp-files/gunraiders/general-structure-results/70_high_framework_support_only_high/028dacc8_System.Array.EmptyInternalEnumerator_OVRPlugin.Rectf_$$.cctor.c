/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Rectf>$$.cctor
ENTRY_POINT: 028dacc8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Rectf>___cctor(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *unaff_x25;
  long *unaff_x26;
  long in_stack_00000048;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x180);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar3 = FUN_032e04b8(uVar3,0);
  if (in_stack_00000048 != 0) {
    lVar1 = FUN_031e5740(in_stack_00000048,*(undefined8 *)PhotonManager_TypeInfo,uVar3,0);
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01c72394(lVar4);
    }
    if (lVar1 == 0) {
      FUN_032f25c4(0x10,0);
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar2 = thunk_FUN_01c495e4(lVar1,lVar4);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(lVar1,lVar4);
    }
    if (0 < *(int *)(lVar2 + 0x18)) {
      uVar5 = 0;
      do {
        if (*(uint *)(lVar2 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        FUN_028da600();
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)*(int *)(lVar2 + 0x18));
    }
    *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar1 = FUN_0329f684(0);
    if (lVar1 != 0) {
      FUN_0282be2c();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


