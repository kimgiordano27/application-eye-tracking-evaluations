/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$GetSubArray
ENTRY_POINT: 036dab90
PROGRAM: vrfs-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__GetSubArray(long *param_1,ulong param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  long in_x9;
  code *in_x10;
  long unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  
  while (plVar4 = (long *)(*in_x10)(param_1,param_2,*(undefined8 *)(in_x9 + 0x2f0)), unaff_x23 != 0)
  {
    if (plVar4 != (long *)0x0) {
      bVar2 = *(byte *)(*unaff_x24 + 300);
      if ((*(byte *)(*plVar4 + 300) < bVar2) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(plVar4);
      }
    }
    FUN_036ef950(unaff_x23,plVar4,0);
    plVar4 = *(long **)(unaff_x20 + 0x38);
    uVar1 = (int)unaff_x22 + 1;
    param_2 = (ulong)uVar1;
    if (plVar4 == (long *)0x0) break;
    iVar3 = (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
    if (iVar3 <= (int)uVar1) {
      FUN_03fbbd88();
      FUN_03fbbec4();
      FUN_036dac4c();
      return;
    }
    unaff_x23 = (**(code **)(*unaff_x21 + 0x238))();
    param_1 = *(long **)(unaff_x20 + 0x38);
    if (param_1 == (long *)0x0) break;
    in_x9 = *param_1;
    in_x10 = *(code **)(in_x9 + 0x2e8);
    unaff_x22 = param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


