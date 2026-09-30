/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 02bf26d0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector4f>___ctor(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  if (*(long *)(*unaff_x20 + 0x40) == *(long *)(param_2 + 0x40)) {
    puVar2 = (undefined8 *)thunk_FUN_01afac30();
    uVar3 = puVar2[2];
    uVar6 = puVar2[1];
    uVar5 = *puVar2;
    lVar4 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
        lVar4 = lVar4 + (long)(int)uVar1 * 0x18;
        *(undefined8 *)(lVar4 + 0x30) = uVar3;
        *(undefined8 *)(lVar4 + 0x28) = uVar6;
        *(undefined8 *)(lVar4 + 0x20) = uVar5;
        thunk_FUN_01b4f09c(lVar4 + 0x20,0);
      }
      else {
        FUN_02bf25d0();
      }
      return *(int *)(unaff_x19 + 0x18) + -1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b4841c();
}


