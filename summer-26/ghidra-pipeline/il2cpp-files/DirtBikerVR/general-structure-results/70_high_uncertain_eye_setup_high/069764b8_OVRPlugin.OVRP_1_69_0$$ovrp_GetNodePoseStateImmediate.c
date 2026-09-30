/*
FUNCTION_NAME: OVRPlugin.OVRP_1_69_0$$ovrp_GetNodePoseStateImmediate
ENTRY_POINT: 069764b8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_69_0__ovrp_GetNodePoseStateImmediate(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  int in_w8;
  long unaff_x19;
  undefined8 *puVar3;
  long unaff_x20;
  int iVar4;
  long lVar5;
  long unaff_x23;
  undefined8 *puVar6;
  long unaff_x25;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  float unaff_s11;
  undefined8 *in_stack_00000008;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  undefined4 uStack00000000000000c0;
  undefined8 uStack00000000000000c4;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  
  puVar3 = *(undefined8 **)(unaff_x19 + 0x460);
  puVar6 = *(undefined8 **)(unaff_x23 + 0xe38);
                    /* try { // try from 069764c8 to 06a764d3 has its CatchHandler @ 0697673c */
  if (in_w8 < 1) {
    return 0;
  }
  fVar9 = 3.4028235e+38;
                    /* try { // try from 069764e0 to 06a764e7 has its CatchHandler @ 06976738 */
  iVar4 = 0;
  uStack00000000000000c4 = 0;
  uStack00000000000000c0 = 0;
  uStack00000000000000a8 = 0;
  uStack00000000000000a0 = 0;
  uStack00000000000000b8 = 0;
  uStack00000000000000bc = 0;
  uStack00000000000000b0 = 0;
  do {
    if (*(int *)(param_1 + 0x18) <= iVar4) {
      if (fVar9 == 3.4028235e+38) {
        return 0;
      }
      in_stack_00000008[1] = uStack00000000000000a8;
      *in_stack_00000008 = uStack00000000000000a0;
      in_stack_00000008[3] = CONCAT44(uStack00000000000000bc,uStack00000000000000b8);
      in_stack_00000008[2] = uStack00000000000000b0;
      *(undefined8 *)((long)in_stack_00000008 + 0x24) = uStack00000000000000c4;
      *(ulong *)((long)in_stack_00000008 + 0x1c) =
           CONCAT44(uStack00000000000000c0,uStack00000000000000bc);
      return 1;
    }
    FUN_04e28000(&stack0x00000100,param_1,iVar4,*puVar3);
    uStack0000000000000094 = *(undefined8 *)(unaff_x25 + 0x24);
    uVar12 = *(undefined8 *)(unaff_x25 + 0x1c);
    in_stack_00000078 = in_stack_00000108;
    in_stack_00000070 = in_stack_00000100;
    uStack0000000000000088 = (undefined4)in_stack_00000118;
    in_stack_00000080 = in_stack_00000110;
    uStack000000000000008c = (undefined4)uVar12;
    uStack0000000000000090 = (undefined4)((ulong)uVar12 >> 0x20);
    if (*(long *)(unaff_x20 + 0x50) == 0) break;
                    /* try { // try from 06976520 to 06a76527 has its CatchHandler @ 06976734 */
    lVar5 = *(long *)(*(long *)(unaff_x20 + 0x50) + 0xd0);
    uVar10 = in_stack_00000110;
    uVar1 = FUN_07d2fce4(&stack0x00000070,0);
    fVar11 = (float)uVar12;
    fVar8 = (float)uVar10;
    if (lVar5 == 0) break;
    uVar2 = FUN_049d96b4(lVar5,uVar1,*puVar6);
    if ((uVar2 & 1) == 0) {
      fVar7 = (float)FUN_07d2fd90(&stack0x00000070,0);
      if (*(long *)(unaff_x20 + 0x58) == 0) break;
      fVar11 = fVar11 - fStack0000000000000068;
      fVar8 = (float)FUN_07cadd74(fVar7 - fStack0000000000000060,fVar8 - fStack0000000000000064,
                                  *(long *)(unaff_x20 + 0x58),0);
      if ((((-fStack000000000000006c <= fVar8) && (fVar8 <= fStack000000000000006c)) &&
          (fVar11 <= unaff_s11)) &&
         ((-unaff_s11 <= fVar11 && (fVar8 = (float)FUN_07d2fdc0(&stack0x00000070,0), fVar8 < fVar9))
         )) {
        fVar9 = (float)FUN_07d2fdc0(&stack0x00000070,0);
        uStack00000000000000a8 = in_stack_00000078;
        uStack00000000000000a0 = in_stack_00000070;
        uStack00000000000000b0 = in_stack_00000080;
        uStack00000000000000c4 = uStack0000000000000094;
        uStack00000000000000b8 = uStack0000000000000088;
        uStack00000000000000bc = uStack000000000000008c;
        uStack00000000000000c0 = uStack0000000000000090;
      }
    }
    param_1 = *(long *)(unaff_x20 + 0x70);
    iVar4 = iVar4 + 1;
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


