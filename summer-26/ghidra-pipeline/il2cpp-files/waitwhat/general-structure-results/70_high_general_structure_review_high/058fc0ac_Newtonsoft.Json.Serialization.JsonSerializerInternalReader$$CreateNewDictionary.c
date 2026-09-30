/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewDictionary
ENTRY_POINT: 058fc0ac
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewDictionary(uint *param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint *puVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined8 in_stack_00000008;
  undefined1 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  ulong in_stack_00000038;
  undefined8 in_stack_00000040;
  ulong in_stack_00000048;
  uint uStack000000000000005c;
  uint *in_stack_00000068;
  
  puVar8 = param_1;
  if ((DAT_0754c801 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f6598);
    FUN_03188a78(PTR_DAT_070f65b0);
    FUN_03188a78(PTR_DAT_07104d18);
    FUN_03188a78(PTR_DAT_07104d20);
    FUN_03188a78(PTR_DAT_070c21b8);
    FUN_03188a78(PTR_DAT_070f5c78);
    FUN_03188a78(PTR_DAT_070f5c80);
    FUN_03188a78(PTR_DAT_070f5c88);
    FUN_03188a78(PTR_DAT_07104750);
    FUN_03188a78(PTR_DAT_070fcb30);
    FUN_03188a78(PTR_DAT_070f5ca8);
    puVar8 = (uint *)FUN_03188a78(PTR_DAT_070f5948);
    DAT_0754c801 = 1;
  }
  uStack000000000000005c = *param_1;
  plVar12 = *(long **)(param_1 + 10);
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000028 = 0;
  if (1 < uStack000000000000005c) {
    if (*(int *)(*(long *)PTR_DAT_070f65b0 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar13 = *(long *)PTR_DAT_070f6598;
    lVar9 = *(long *)(lVar13 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_031c09d4();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_031c09d4();
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar9 = *(long *)(lVar13 + 0x20);
                    /* try { // try from 058fc1dc to 059fc1f7 has its CatchHandler @ 058fcda4 */
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_031c09d4();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_031c09d4();
    }
    plVar10 = (long *)**(long **)(lVar9 + 0xb8);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    puVar8 = (uint *)(**(code **)(*plVar10 + 0x178))
                               (plVar10,in_stack_00000068[8],*(undefined8 *)(*plVar10 + 0x180));
    *(uint **)(in_stack_00000068 + 0x10) = puVar8;
    param_1 = in_stack_00000068;
  }
  puVar7 = PTR_DAT_070f5ca8;
  puVar6 = PTR_DAT_070f5c88;
  puVar5 = PTR_DAT_070f5c80;
  puVar4 = PTR_DAT_070f5c78;
  puVar3 = PTR_DAT_070f5948;
  puVar2 = PTR_DAT_070c21b8;
                    /* try { // try from 058fc234 to 059fc23f has its CatchHandler @ 058fcd9c */
                    /* try { // try from 058fc248 to 059fc253 has its CatchHandler @ 058fcd0c */
                    /* try { // try from 058fc254 to 059fc2cf has its CatchHandler @ 058faf8c */
  in_stack_00000010 = (undefined1 *)&stack0x0000005c;
  in_stack_00000008 = 0;
  in_stack_00000018 = &stack0x00000068;
  if (uStack000000000000005c == 0) {
    in_stack_00000048 = *(ulong *)(param_1 + 0x14);
    in_stack_00000040 = *(undefined8 *)(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    uStack000000000000005c = 0xffffffff;
    *param_1 = 0xffffffff;
    goto LAB_058fc370;
  }
  if (uStack000000000000005c != 1) goto LAB_058fc2c4;
  in_stack_00000038 = *(ulong *)(param_1 + 0x18);
  in_stack_00000030 = *(undefined8 *)(param_1 + 0x16);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  uStack000000000000005c = 0xffffffff;
  *param_1 = 0xffffffff;
  do {
    puVar8 = (uint *)FUN_05869164(&stack0x00000030,0);
    param_1 = in_stack_00000068;
LAB_058fc2c4:
    lVar9 = *(long *)(param_1 + 0x10);
    lVar13 = 0;
    if (lVar9 != 0) {
                    /* try { // try from 058fc2d0 to 059fc2df has its CatchHandler @ 058fcde0 */
      lVar13 = *(long *)(lVar9 + 0x18) << 0x20;
    }
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8(puVar8,lVar9,lVar13);
    }
    auVar15 = (**(code **)(*plVar12 + 0x2e8))
                        (plVar12,lVar9,lVar13,*(undefined8 *)(param_1 + 0xc),
                         *(undefined8 *)(*plVar12 + 0x2f0));
    lVar9 = *(long *)puVar7;
    uVar1 = *(ushort *)(*(long *)(lVar9 + 0x20) + 0x135);
    if ((uVar1 & 1) == 0) {
      FUN_031c09d4();
      uVar1 = *(ushort *)(*(long *)(lVar9 + 0x20) + 0x135);
    }
    if ((uVar1 & 1) == 0) {
      FUN_031c09d4();
    }
    uVar14 = auVar15._8_8_ & 0xffffffffffff;
    if ((*(ushort *)(*(long *)(*(long *)puVar4 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    lVar9 = *(long *)(*(long *)puVar6 + 0x20);
    in_stack_00000040 = auVar15._0_8_;
    in_stack_00000048 = uVar14;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_031c09d4();
    }
    auVar15 = FUN_04daa5a8(&stack0x00000040,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x10));
    puVar8 = in_stack_00000068;
    if ((auVar15._0_8_ & 1) == 0) {
      uStack000000000000005c = 0;
      lVar9 = *(long *)puVar2;
      *in_stack_00000068 = 0;
      *(ulong *)(in_stack_00000068 + 0x14) = in_stack_00000048;
      *(undefined8 *)(in_stack_00000068 + 0x12) = in_stack_00000040;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_031e5338(lVar9,auVar15._8_8_,in_stack_00000068);
      }
      FUN_039cc4f0(puVar8 + 2,&stack0x00000040,in_stack_00000068,*(undefined8 *)PTR_DAT_07104d20);
      goto LAB_058fc4d4;
    }
LAB_058fc370:
    lVar9 = *(long *)(*(long *)puVar5 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_031c09d4();
    }
    auVar15 = FUN_04daa6d4(&stack0x00000040,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x20));
    lVar9 = auVar15._0_8_;
    if (auVar15._0_4_ == 0) {
      iVar11 = 10;
      goto LAB_058fc4d8;
    }
    plVar10 = *(long **)(in_stack_00000068 + 0xe);
    lVar13 = *(long *)(in_stack_00000068 + 0x10);
    if (lVar13 == 0) {
      auVar15 = FUN_05950030(0);
      lVar9 = 0;
    }
    else {
      if (*(uint *)(lVar13 + 0x18) < auVar15._0_4_) {
        auVar15 = FUN_05950030(0);
      }
      lVar9 = lVar9 << 0x20;
    }
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8(auVar15._0_8_,auVar15._8_8_,lVar9);
    }
    auVar15 = (**(code **)(*plVar10 + 0x328))
                        (plVar10,lVar13,lVar9,*(undefined8 *)(in_stack_00000068 + 0xc),
                         *(undefined8 *)(*plVar10 + 0x330));
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    in_stack_00000038 = auVar15._8_8_ & 0xffff;
    in_stack_00000030 = auVar15._0_8_;
    auVar15 = FUN_05869024(&stack0x00000030,0);
    puVar8 = in_stack_00000068;
  } while ((auVar15._0_8_ & 1) != 0);
  lVar9 = *(long *)puVar2;
  uStack000000000000005c = 1;
  *in_stack_00000068 = 1;
  *(ulong *)(in_stack_00000068 + 0x18) = in_stack_00000038;
  *(undefined8 *)(in_stack_00000068 + 0x16) = in_stack_00000030;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_031e5338(lVar9,auVar15._8_8_,in_stack_00000068);
  }
  FUN_039cf374(puVar8 + 2,&stack0x00000030,in_stack_00000068,*(undefined8 *)PTR_DAT_07104d18);
LAB_058fc4d4:
  iVar11 = 7;
LAB_058fc4d8:
  FUN_030e54b4(&stack0x00000008);
  puVar8 = in_stack_00000068;
  if ((iVar11 == 0) || (iVar11 == 10)) {
    iVar11 = *(int *)(*(long *)puVar2 + 0xe4);
    *in_stack_00000068 = 0xfffffffe;
    in_stack_00000068[0x10] = 0;
    in_stack_00000068[0x11] = 0;
    if (iVar11 == 0) {
      thunk_FUN_031e5338();
    }
    FUN_0585acf4(puVar8 + 2,0);
  }
  return;
}


