/*
FUNCTION_NAME: OVRPlugin$$RetrieveSpaceDiscoveryResults
ENTRY_POINT: 06955d8c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__RetrieveSpaceDiscoveryResults(undefined8 param_1,float param_2,float param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long lVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float unaff_s11;
  float fVar10;
  undefined8 uStack0000000000000008;
  undefined1 *puStack0000000000000010;
  long in_stack_00000018;
  undefined8 uStack0000000000000020;
  long lStack0000000000000030;
  
  puVar1 = PTR_DAT_084b6a80;
  puStack0000000000000010 = (undefined1 *)&stack0x00000020;
  lStack0000000000000030 = in_stack_00000018;
  uStack0000000000000008 = 0;
  uStack0000000000000020 = param_1;
  while( true ) {
    uVar3 = FUN_061c1964(&stack0x00000020,*(undefined8 *)puVar1);
    lVar2 = lStack0000000000000030;
    if ((uVar3 & 1) == 0) {
      FUN_061c1960(&stack0x00000020,*(undefined8 *)PTR_DAT_084b6a78);
      return;
    }
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (lStack0000000000000030 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar5 = *(long *)(lVar4 + 0x20);
    fVar10 = *(float *)(lStack0000000000000030 + 0x10);
    lVar4 = FUN_07c98f88(lVar4,0);
    if (lVar4 == 0) break;
    fVar6 = (float)FUN_07cac824(lVar4,0);
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar4 = FUN_07c98f88(*(long *)(unaff_x19 + 0x10),0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar8 = *(undefined4 *)(lVar2 + 0x18);
    uVar9 = *(undefined4 *)(lVar2 + 0x1c);
    uVar7 = FUN_07cade68(*(undefined4 *)(lVar2 + 0x14),uVar8,uVar9,lVar4,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    fVar10 = unaff_s11 * fVar10;
    param_2 = -(param_2 * fVar10);
    param_3 = -(param_3 * fVar10);
    FUN_07d32a2c(-(fVar6 * fVar10),param_2,param_3,uVar7,uVar8,uVar9,lVar5,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


