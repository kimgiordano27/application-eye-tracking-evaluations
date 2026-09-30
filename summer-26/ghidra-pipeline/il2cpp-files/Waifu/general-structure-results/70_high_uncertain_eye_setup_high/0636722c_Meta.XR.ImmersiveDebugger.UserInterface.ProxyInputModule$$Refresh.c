/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.ProxyInputModule$$Refresh
ENTRY_POINT: 0636722c
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_ProxyInputModule__Refresh
               (long param_1,long param_2,int param_3,ulong param_4,undefined8 param_5,long param_6,
               undefined8 param_7,byte *param_8,ulong param_9)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  byte *pbVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x21;
  long unaff_x24;
  ulong uVar16;
  long unaff_x27;
  uint uVar17;
  long lVar18;
  byte *pbStack0000000000000018;
  int iStack0000000000000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined4 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 in_stack_00000080;
  long lStack0000000000000088;
  
  pbStack0000000000000018 = param_8;
  _iStack0000000000000020 = param_9;
  lStack0000000000000088 = param_1;
  if ((*(byte *)(unaff_x21 + 0x919) & 1) == 0) {
    FUN_0335b6c8(&DAT_083eaf80,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eb008,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eb1a8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eaf48,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eb160,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083ebb90,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083ebc10,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083ebc18,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083c7838,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08412d18,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08412d20,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08412d28,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08412d48,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08412d58,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f8d28,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f8c48,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x21 + 0x919) = 1;
  }
  if ((*(long *)(param_2 + 0x110) == 0) || (*(long *)(param_2 + 0xd0) == 0)) goto LAB_06367628;
  lVar18 = (long)*(int *)(*(long *)(*(long *)(param_2 + 0x110) + 0x10) + (long)param_3 * 0x88 + 4);
  puVar1 = (undefined4 *)(*(long *)(*(long *)(param_2 + 0xd0) + 0x10) + lVar18 * 0x40);
  in_stack_00000078 = *(undefined8 *)(puVar1 + 5);
  in_stack_00000080 = puVar1[7];
  uVar3 = puVar1[8];
  uVar2 = *puVar1;
  uVar17 = puVar1[2];
  uVar4 = puVar1[3];
  uVar8 = puVar1[4];
  in_stack_00000070 = puVar1[0xb];
  uVar5 = puVar1[0xc];
  in_stack_00000068 = *(undefined8 *)(puVar1 + 9);
  in_stack_00000060 = puVar1[0xf];
  in_stack_00000058 = *(undefined8 *)(puVar1 + 0xd);
  if (puVar1[1] == 1) {
    lVar11 = *(long *)(param_2 + 0xe0);
    if (lVar11 == 0) goto LAB_06367628;
    FUN_0405d744(*(undefined8 *)(lVar11 + 0x10),*(undefined8 *)(lVar11 + 0x18),uVar8,param_5,
                 DAT_08412d48);
    if ((param_6 != 0) && (*(long *)(param_6 + 0x18) != 0)) {
      lVar11 = *(long *)(param_2 + 0xe8);
      if (lVar11 == 0) goto LAB_06367628;
      FUN_0405d744(*(undefined8 *)(lVar11 + 0x10),*(undefined8 *)(lVar11 + 0x18),uVar8,param_6,
                   DAT_08412d48);
      uVar17 = uVar17 | 0x10000;
    }
    if ((unaff_x24 != 0) && (*(long *)(unaff_x24 + 0x18) != 0)) {
      lVar11 = *(long *)(param_2 + 0xf0);
      if (lVar11 == 0) goto LAB_06367628;
      FUN_0405d814(*(undefined8 *)(lVar11 + 0x10),*(undefined8 *)(lVar11 + 0x18),uVar8);
      uVar17 = uVar17 | 0x20000;
    }
    if (((param_4 & 1) != 0) &&
       (uVar16 = _iStack0000000000000020 & 0xffffffff, 0 < iStack0000000000000020)) {
      lVar11 = FUN_03398188(DAT_083c7838,uVar16);
      if (lVar11 == 0) goto LAB_06367628;
      uVar14 = (ulong)*(uint *)(lVar11 + 0x18);
      iVar10 = 0;
      pbVar13 = pbStack0000000000000018;
      piVar15 = (int *)(lVar11 + 0x20);
      do {
        if (uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d44();
        }
        *piVar15 = iVar10;
        uVar16 = uVar16 - 1;
        uVar14 = uVar14 - 1;
        iVar10 = iVar10 + (uint)*pbVar13;
        pbVar13 = pbVar13 + 1;
        piVar15 = piVar15 + 1;
      } while (uVar16 != 0);
      lVar12 = *(long *)(param_2 + 0xf8);
      if (lVar12 == 0) goto LAB_06367628;
      uVar6 = *(undefined8 *)(lVar12 + 0x10);
      uVar7 = *(undefined8 *)(lVar12 + 0x18);
      uVar9 = FUN_04da576c(&stack0x00000018,DAT_083f8d28);
      FUN_0405d4b4(uVar6,uVar7,uVar3,uVar9,DAT_08412d20);
      lVar12 = *(long *)(param_2 + 0x100);
      if (lVar12 == 0) goto LAB_06367628;
      FUN_0405d51c(*(undefined8 *)(lVar12 + 0x10),*(undefined8 *)(lVar12 + 0x18),uVar3,lVar11,
                   DAT_08412d28);
      lVar11 = *(long *)(param_2 + 0x108);
      if (lVar11 == 0) goto LAB_06367628;
      uVar6 = *(undefined8 *)(lVar11 + 0x10);
      uVar7 = *(undefined8 *)(lVar11 + 0x18);
      uVar9 = FUN_04da14d0(&stack0x00000008,DAT_083f8c48);
      FUN_0405d44c(uVar6,uVar7,uVar5,uVar9,DAT_08412d18);
    }
    in_stack_00000048 = in_stack_00000078;
    in_stack_00000050 = in_stack_00000080;
    in_stack_00000038 = in_stack_00000068;
    in_stack_00000040 = in_stack_00000070;
    in_stack_00000028 = in_stack_00000058;
    in_stack_00000030 = in_stack_00000060;
    if (*(long *)(param_2 + 0xd0) == 0) {
LAB_06367628:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    puVar1 = (undefined4 *)(*(long *)(*(long *)(param_2 + 0xd0) + 0x10) + lVar18 * 0x40);
    *puVar1 = uVar2;
    puVar1[1] = 1;
    puVar1[4] = uVar8;
    puVar1[2] = uVar17;
    puVar1[3] = uVar4;
    *(undefined8 *)(puVar1 + 5) = in_stack_00000078;
    puVar1[7] = in_stack_00000080;
    puVar1[8] = uVar3;
    *(undefined8 *)(puVar1 + 9) = in_stack_00000068;
    puVar1[0xb] = in_stack_00000070;
    puVar1[0xc] = uVar5;
    puVar1[0xf] = in_stack_00000060;
    *(undefined8 *)(puVar1 + 0xd) = in_stack_00000058;
  }
  if (*(long *)(unaff_x27 + 0x28) == lStack0000000000000088) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


