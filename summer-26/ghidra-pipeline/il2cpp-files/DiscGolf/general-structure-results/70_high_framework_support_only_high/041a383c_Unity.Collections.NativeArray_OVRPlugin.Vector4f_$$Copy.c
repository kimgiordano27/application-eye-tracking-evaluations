/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 041a383c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((*(ushort *)(param_2 + 0x135) & 1) == 0) {
    param_2 = FUN_02dcfd18(param_2);
  }
  if (unaff_x20 != (long *)0x0) {
    if (*(long *)(*unaff_x20 + 0x40) != *(long *)(param_2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0();
    }
    puVar2 = (undefined4 *)thunk_FUN_02dd328c();
    uVar4 = *puVar2;
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    lVar3 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        lVar3 = lVar3 + (long)(int)uVar1 * 0x10;
        *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar3 + 0x20) = uVar4;
        *(undefined4 *)(lVar3 + 0x24) = uVar5;
        *(undefined4 *)(lVar3 + 0x28) = uVar6;
        *(undefined4 *)(lVar3 + 0x2c) = uVar7;
      }
      else {
        FUN_041a3780();
      }
      return *(int *)(unaff_x19 + 0x18) + -1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


