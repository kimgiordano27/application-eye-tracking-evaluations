/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$GetEnumerator
ENTRY_POINT: 03cb7d0c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__GetEnumerator
               (code *param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16],undefined1 param_5 [16],undefined8 param_6,
               undefined8 *param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  
  uStack0000000000000078 = param_5._8_8_;
  uStack0000000000000070 = param_5._0_8_;
  uStack0000000000000068 = param_4._8_8_;
  uStack0000000000000060 = param_4._0_8_;
  while( true ) {
    (*param_1)(param_6,param_7,param_8);
    unaff_x22 = unaff_x22 + 1;
    unaff_x23 = unaff_x23 + 0x40;
    if ((long)*(int *)(unaff_x19 + 0x18) <= (long)unaff_x22) break;
    iVar2 = *(int *)(unaff_x19 + 0x1c);
    if (unaff_w21 != iVar2) goto LAB_03cb7d2c;
    lVar3 = *(long *)(unaff_x19 + 0x10);
    if (lVar3 == 0) {
LAB_03cb7d50:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(uint *)(lVar3 + 0x18) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (unaff_x20 == 0) goto LAB_03cb7d50;
    puVar1 = (undefined8 *)(lVar3 + unaff_x23);
    param_6 = *(undefined8 *)(unaff_x20 + 0x40);
    param_8 = *(undefined8 *)(unaff_x20 + 0x28);
    in_stack_00000048 = puVar1[1];
    in_stack_00000040 = *puVar1;
    in_stack_00000058 = puVar1[3];
    in_stack_00000050 = puVar1[2];
    param_7 = &stack0x00000040;
    uStack0000000000000068 = puVar1[5];
    uStack0000000000000060 = puVar1[4];
    uStack0000000000000078 = puVar1[7];
    uStack0000000000000070 = puVar1[6];
    param_1 = *(code **)(unaff_x20 + 0x18);
  }
  iVar2 = *(int *)(unaff_x19 + 0x1c);
LAB_03cb7d2c:
  if (unaff_w21 != iVar2) {
    FUN_050f6190(0);
  }
  return;
}


