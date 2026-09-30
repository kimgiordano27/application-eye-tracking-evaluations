/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.ProxyInputModule$$SetupEventSystem
ENTRY_POINT: 063673bc
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_ProxyInputModule__SetupEventSystem(long param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long in_x9;
  byte *pbVar14;
  ulong uVar15;
  int *piVar16;
  long unaff_x19;
  ulong unaff_x23;
  long unaff_x24;
  ulong uVar17;
  long unaff_x25;
  long unaff_x27;
  uint uVar18;
  byte *in_stack_00000018;
  uint in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000058;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined4 uStack0000000000000080;
  long in_stack_00000088;
  
  iVar9 = *(int *)(param_1 + 4);
  puVar1 = (undefined4 *)(in_x9 + (long)iVar9 * 0x40);
  uStack0000000000000078 = *(undefined8 *)(puVar1 + 5);
  uStack0000000000000080 = puVar1[7];
  uVar3 = puVar1[8];
  uVar2 = *puVar1;
  uVar18 = puVar1[2];
  uVar4 = puVar1[3];
  uVar8 = puVar1[4];
                    /* try { // try from 063673d8 to 064673df has its CatchHandler @ 06367670 */
  uStack0000000000000070 = puVar1[0xb];
  uVar5 = puVar1[0xc];
  uStack0000000000000068 = *(undefined8 *)(puVar1 + 9);
  uStack0000000000000060 = puVar1[0xf];
  uStack0000000000000058 = *(undefined8 *)(puVar1 + 0xd);
  if (puVar1[1] == 1) {
    lVar12 = *(long *)(unaff_x19 + 0xe0);
    if (lVar12 == 0) goto LAB_06367628;
    FUN_0405d744(*(undefined8 *)(lVar12 + 0x10),*(undefined8 *)(lVar12 + 0x18),uVar8);
    if ((unaff_x25 != 0) && (*(long *)(unaff_x25 + 0x18) != 0)) {
      lVar12 = *(long *)(unaff_x19 + 0xe8);
      if (lVar12 == 0) goto LAB_06367628;
                    /* try { // try from 0636744c to 06467453 has its CatchHandler @ 06367678 */
      FUN_0405d744(*(undefined8 *)(lVar12 + 0x10),*(undefined8 *)(lVar12 + 0x18),uVar8);
      uVar18 = uVar18 | 0x10000;
    }
    if ((unaff_x24 != 0) && (*(long *)(unaff_x24 + 0x18) != 0)) {
      lVar12 = *(long *)(unaff_x19 + 0xf0);
      if (lVar12 == 0) goto LAB_06367628;
      FUN_0405d814(*(undefined8 *)(lVar12 + 0x10),*(undefined8 *)(lVar12 + 0x18),uVar8);
      uVar18 = uVar18 | 0x20000;
    }
    if (((unaff_x23 & 1) != 0) && (uVar17 = (ulong)in_stack_00000020, 0 < (int)in_stack_00000020)) {
      lVar12 = FUN_03398188(DAT_083c7838,uVar17);
      if (lVar12 == 0) goto LAB_06367628;
      uVar15 = (ulong)*(uint *)(lVar12 + 0x18);
      iVar11 = 0;
                    /* try { // try from 063674bc to 064674c3 has its CatchHandler @ 06367674 */
      pbVar14 = in_stack_00000018;
      piVar16 = (int *)(lVar12 + 0x20);
      do {
        if (uVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d44();
        }
        *piVar16 = iVar11;
        uVar17 = uVar17 - 1;
        uVar15 = uVar15 - 1;
        iVar11 = iVar11 + (uint)*pbVar14;
        pbVar14 = pbVar14 + 1;
        piVar16 = piVar16 + 1;
      } while (uVar17 != 0);
      lVar13 = *(long *)(unaff_x19 + 0xf8);
                    /* try { // try from 063674e0 to 064674eb has its CatchHandler @ 063676a8 */
      if (lVar13 == 0) goto LAB_06367628;
      uVar6 = *(undefined8 *)(lVar13 + 0x10);
      uVar7 = *(undefined8 *)(lVar13 + 0x18);
      uVar10 = FUN_04da576c(&stack0x00000018,DAT_083f8d28);
                    /* try { // try from 06367500 to 06467507 has its CatchHandler @ 0636760c */
      FUN_0405d4b4(uVar6,uVar7,uVar3,uVar10,DAT_08412d20);
      lVar13 = *(long *)(unaff_x19 + 0x100);
      if (lVar13 == 0) goto LAB_06367628;
                    /* try { // try from 06367524 to 0646752f has its CatchHandler @ 06367604 */
      FUN_0405d51c(*(undefined8 *)(lVar13 + 0x10),*(undefined8 *)(lVar13 + 0x18),uVar3,lVar12,
                   DAT_08412d28);
      lVar12 = *(long *)(unaff_x19 + 0x108);
      if (lVar12 == 0) goto LAB_06367628;
      uVar6 = *(undefined8 *)(lVar12 + 0x10);
      uVar7 = *(undefined8 *)(lVar12 + 0x18);
      uVar10 = FUN_04da14d0(&stack0x00000008,DAT_083f8c48);
      FUN_0405d44c(uVar6,uVar7,uVar5,uVar10,DAT_08412d18);
    }
    in_stack_00000048 = uStack0000000000000078;
    in_stack_00000050 = uStack0000000000000080;
    in_stack_00000038 = uStack0000000000000068;
    in_stack_00000040 = uStack0000000000000070;
    in_stack_00000028 = uStack0000000000000058;
    in_stack_00000030 = uStack0000000000000060;
    if (*(long *)(unaff_x19 + 0xd0) == 0) {
LAB_06367628:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    puVar1 = (undefined4 *)(*(long *)(*(long *)(unaff_x19 + 0xd0) + 0x10) + (long)iVar9 * 0x40);
    *puVar1 = uVar2;
    puVar1[1] = 1;
    puVar1[4] = uVar8;
    puVar1[2] = uVar18;
    puVar1[3] = uVar4;
    *(undefined8 *)(puVar1 + 5) = uStack0000000000000078;
    puVar1[7] = uStack0000000000000080;
    puVar1[8] = uVar3;
    *(undefined8 *)(puVar1 + 9) = uStack0000000000000068;
    puVar1[0xb] = uStack0000000000000070;
    puVar1[0xc] = uVar5;
    puVar1[0xf] = uStack0000000000000060;
    *(undefined8 *)(puVar1 + 0xd) = uStack0000000000000058;
  }
  if (*(long *)(unaff_x27 + 0x28) == in_stack_00000088) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


