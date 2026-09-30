/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Allocate
ENTRY_POINT: 04c3fbfc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Allocate
               (ulong param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long *param_6,long param_7,long param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uStack000000000000005c;
  
  if ((param_1 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d98f00);
    *(undefined1 *)(unaff_x22 + 0x7b2) = 1;
  }
  puVar2 = PTR_DAT_07d98f00;
  if (param_7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uStack000000000000005c =
       FUN_03fe04dc(param_7,param_6[0x12],
                    *(undefined8 *)(*(long *)(*(long *)(param_8 + 0x20) + 0xc0) + 0x88));
  uVar3 = param_3;
  uVar4 = param_4;
  uVar5 = param_5;
                    /* try { // try from 04c3fc68 to 04d3fcaf has its CatchHandler @ 04c3fc68
                       catch() { ... } // from try @ 04c3fc68 with catch @ 04c3fc68
                       catch() { ... } // from try @ 04c3fd08 with catch @ 04c3fc68
                       catch() { ... } // from try @ 04c3fd38 with catch @ 04c3fc68
                       catch() { ... } // from try @ 04c3fdb4 with catch @ 04c3fc68 */
  uVar1 = FUN_03fe04dc(param_7,param_6[0x13],
                       *(undefined8 *)(*(long *)(*(long *)(param_8 + 0x20) + 0xc0) + 0x88));
  FUN_03fe028c(param_7,param_6[0x14],*(undefined8 *)puVar2);
  if ((char)param_6[0x16] != '\0') {
    FUN_075b6260(0);
  }
  (**(code **)(*param_6 + 0x5f8))
            (uStack000000000000005c,param_3,param_4,param_5,uVar1,uVar3,uVar4,uVar5,param_6,
             *(undefined8 *)(*param_6 + 0x600));
  return;
}


