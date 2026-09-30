/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$ToArray
ENTRY_POINT: 03c69400
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ToArray
               (code *param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16],undefined1 param_5 [16])

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  
  uVar5 = param_5._8_8_;
  uVar4 = param_5._0_8_;
  uVar7 = param_4._8_8_;
  uVar6 = param_4._0_8_;
  uVar9 = param_3._8_8_;
  uVar8 = param_3._0_8_;
  uVar11 = param_2._8_8_;
  uVar10 = param_2._0_8_;
  while( true ) {
    uStack0000000000000040 = uVar10;
    uStack0000000000000048 = uVar11;
    uStack0000000000000050 = uVar8;
    uStack0000000000000058 = uVar9;
    uStack0000000000000060 = uVar6;
    uStack0000000000000068 = uVar7;
    uStack0000000000000070 = uVar4;
    uStack0000000000000078 = uVar5;
    uVar2 = (*param_1)(*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                       *(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar2 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 + 1;
    unaff_x23 = unaff_x23 + -1;
    unaff_x22 = unaff_x22 + 0x40;
    if (unaff_x23 == 0) {
      return 0xffffffff;
    }
    lVar3 = *(long *)(unaff_x21 + 0x10);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    puVar1 = (undefined8 *)(lVar3 + unaff_x22);
    uVar7 = puVar1[5];
    uVar6 = puVar1[4];
    uVar5 = puVar1[7];
    uVar4 = puVar1[6];
    uVar11 = puVar1[1];
    uVar10 = *puVar1;
    uVar9 = puVar1[3];
    uVar8 = puVar1[2];
    if (unaff_x20 == 0) break;
    param_1 = *(code **)(unaff_x20 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


