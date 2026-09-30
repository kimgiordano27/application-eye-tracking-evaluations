/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager$$UpdateCategory
ENTRY_POINT: 076d0680
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_ImmersiveDebugger_DebugInspectorManager__UpdateCategory
               (ulong param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16],undefined4 param_5,long *param_6,long *param_7,
               undefined8 param_8,ulong param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  ulong uVar10;
  code *pcVar11;
  int *piVar12;
  long *plVar13;
  long unaff_x23;
  long lVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 extraout_d0;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 extraout_d0_00;
  undefined1 auVar23 [16];
  undefined8 extraout_var;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 extraout_var_00;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  float fVar31;
  ulong in_stack_00000010;
  char cStack0000000000000018;
  undefined8 in_stack_00000020;
  ulong in_stack_00000028;
  ulong in_stack_00000058;
  
  uVar30 = param_4._8_8_;
  uVar22 = param_4._0_8_;
  uVar28 = param_3._8_8_;
  uVar21 = param_3._0_8_;
  plVar5 = param_6;
  if ((param_1 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f24cf0);
    FUN_04447ba8(PTR_DAT_09f2ac68);
    FUN_04447ba8(PTR_DAT_09f2cf40);
    FUN_04447ba8(PTR_DAT_09f2e490);
    FUN_04447ba8(PTR_DAT_09f2cd80);
    FUN_04447ba8(PTR_DAT_09f2e498);
    FUN_04447ba8(PTR_DAT_09f2e4a0);
    FUN_04447ba8(PTR_DAT_09f2cd78);
    FUN_04447ba8(PTR_DAT_09f203d8);
    FUN_04447ba8(PTR_DAT_09f2e4a8);
    FUN_04447ba8(PTR_DAT_09f2e4b0);
    FUN_04447ba8(PTR_DAT_09f2e4b8);
    FUN_04447ba8(PTR_DAT_09f1e538);
    FUN_04447ba8(PTR_DAT_09f2e380);
    FUN_04447ba8(PTR_DAT_09f2e4c0);
    FUN_04447ba8(PTR_DAT_09f2e4c8);
    FUN_04447ba8(PTR_DAT_09f2e4d0);
    FUN_04447ba8(PTR_DAT_09f2e4d8);
    FUN_04447ba8(PTR_DAT_09f2e4e0);
    plVar5 = (long *)FUN_04447ba8(PTR_DAT_09f2e4e8);
    *(undefined1 *)(unaff_x23 + 0xdea) = 1;
  }
  in_stack_00000058 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  _cStack0000000000000018 = 0;
  if (((param_9 & 1) != 0) && (plVar13 = (long *)param_6[2], plVar13 != (long *)0x0)) {
    lVar14 = *(long *)PTR_DAT_09f24cf0;
    lVar8 = *(long *)(lVar14 + 0x38);
    if (lVar8 == 0) {
      FUN_04482014(lVar14);
      lVar8 = *(long *)(lVar14 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_04481fb8();
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    lVar8 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_04481fb8();
    }
    lVar14 = *plVar13;
    uVar15 = **(undefined8 **)(lVar8 + 0xb8);
    uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_09f2ac68) {
          puVar6 = (undefined8 *)(lVar14 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_076d0854;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_044822ac(plVar13,*(long *)PTR_DAT_09f2ac68,1);
LAB_076d0854:
    plVar5 = (long *)(*(code *)*puVar6)(plVar13,0x2f,uVar15,puVar6[1]);
  }
  if (param_7 == (long *)0x0) goto LAB_076d12e4;
  lVar8 = (**(code **)(*param_7 + 0x178))(param_7,*(undefined8 *)(*param_7 + 0x180));
  puVar2 = PTR_DAT_09f2e4a0;
  puVar1 = PTR_DAT_09f1e538;
  if (lVar8 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x18);
  }
  lVar14 = (**(code **)(*param_7 + 0x178))(param_7,*(undefined8 *)(*param_7 + 0x180));
  if (lVar14 == 0) {
    if (lVar8 != 0) goto LAB_076d090c;
    uVar15 = *(undefined8 *)puVar2;
LAB_076d0944:
    FUN_0613ca18(&stack0x00000058,0,uVar15);
    uVar3 = FUN_076d1478(param_6,param_7);
    lVar8 = FUN_076d0594(param_6,uVar3);
    uVar3 = uVar3 & 3;
  }
  else if (lVar8 == 0) {
    uVar15 = *(undefined8 *)puVar2;
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_076d0944;
    FUN_0613ca18(&stack0x00000058,1,uVar15);
    if (*(int *)(*(long *)PTR_DAT_09f2e380 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar3 = FUN_076d1394(param_7);
    lVar8 = FUN_076d13cc(param_6,uVar3);
    uVar3 = uVar3 >> 1 & 1;
  }
  else {
LAB_076d090c:
    lVar8 = FUN_076d12e8(param_6,param_7);
    FUN_0613ca18(&stack0x00000058,2,*(undefined8 *)puVar2);
    iVar4 = FUN_076c7d28(param_7);
    uVar3 = (uint)(iVar4 == 2);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar10 = FUN_0952c404(lVar8,0,0);
  plVar5 = (long *)0x0;
  if ((uVar10 & 1) != 0) {
    return 0;
  }
  if (lVar8 == 0) goto LAB_076d12e4;
  thunk_FUN_09530084(lVar8,param_7[2],0);
  auVar23 = NEON_fmov(0x3f800000,4);
  _cStack0000000000000018 = 0;
  in_stack_00000028 = auVar23._8_8_;
  in_stack_00000020 = auVar23._0_8_;
  lVar14 = (**(code **)(*param_7 + 0x178))(param_7,*(undefined8 *)(*param_7 + 0x180));
  if (lVar14 != 0) {
    lVar14 = (**(code **)(*param_7 + 0x178))(param_7,*(undefined8 *)(*param_7 + 0x180));
    plVar5 = (long *)0x0;
    if (lVar14 == 0) goto LAB_076d12e4;
    lVar14 = *(long *)(lVar14 + 0x10);
    if (lVar14 != 0) {
      uVar16 = FUN_076ca670(lVar14);
      puVar1 = PTR_DAT_09f2cf40;
      in_stack_00000020 = CONCAT44((int)uVar21,uVar16);
      in_stack_00000028 = CONCAT44(param_5,(int)uVar22);
      lVar7 = *(long *)PTR_DAT_09f2cf40;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar7 = *(long *)puVar1;
      }
      uVar16 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x24);
      FUN_076ca670(lVar14);
      FUN_09517a40(0);
      auVar23._8_8_ = uVar28;
      auVar23._0_8_ = uVar21;
      uVar28 = extraout_var;
      uVar21 = FUN_09517a40(auVar23,0);
      auVar24._8_8_ = uVar30;
      auVar24._0_8_ = uVar22;
      uVar22 = FUN_09517a40(auVar24,0);
      auVar25._8_8_ = uVar28;
      auVar25._0_8_ = extraout_d0;
      thunk_FUN_094e65c8(auVar25,lVar8,uVar16,0);
      uVar16 = *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x90);
      FUN_076ca6b4(lVar14);
      thunk_FUN_094e65c8(lVar8,uVar16,0);
      thunk_FUN_094e64b8(lVar8,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x4c),0);
      lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
      FUN_076cf434(param_6,*(undefined8 *)(lVar14 + 0x18),lVar8,param_8,
                   *(undefined4 *)(lVar7 + 0x28),*(undefined4 *)(lVar7 + 0x2c),
                   *(undefined4 *)(lVar7 + 0x30),*(undefined4 *)(lVar7 + 0x34));
      lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
      FUN_076cf434(param_6,*(undefined8 *)(lVar14 + 0x30),lVar8,param_8,
                   *(undefined4 *)(lVar7 + 0x94),*(undefined4 *)(lVar7 + 0x98),
                   *(undefined4 *)(lVar7 + 0x9c),*(undefined4 *)(lVar7 + 0xa0));
    }
  }
  uVar29 = (undefined4)uVar22;
  uVar16 = (undefined4)uVar21;
  lVar14 = (**(code **)(*param_7 + 0x198))(param_7,*(undefined8 *)(*param_7 + 0x1a0));
  if ((lVar14 != 0) &&
     ((lVar14 = (**(code **)(*param_7 + 0x178))(param_7,*(undefined8 *)(*param_7 + 0x180)),
      lVar14 == 0 || (*(long *)(lVar14 + 0x10) == 0)))) {
    lVar14 = (**(code **)(*param_7 + 0x198))(param_7,*(undefined8 *)(*param_7 + 0x1a0));
    plVar5 = (long *)0x0;
    if (lVar14 == 0) goto LAB_076d12e4;
    uVar17 = FUN_076c8adc();
    in_stack_00000020 = CONCAT44(uVar16,uVar17);
    in_stack_00000028 = CONCAT44(param_5,uVar29);
    if ((in_stack_00000058 >> 0x20 != 1) || ((in_stack_00000058 & 0xff) == 0)) {
      plVar13 = (long *)(**(code **)(*param_7 + 0x198))(param_7,*(undefined8 *)(*param_7 + 0x1a0));
      plVar5 = (long *)0x0;
      if (plVar13 == (long *)0x0) goto LAB_076d12e4;
      uVar21 = (**(code **)(*plVar13 + 0x178))(plVar13,*(undefined8 *)(*plVar13 + 0x180));
      puVar1 = PTR_DAT_09f2e380;
      lVar14 = *(long *)PTR_DAT_09f2e380;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_044a54b4(lVar14);
        lVar14 = *(long *)puVar1;
      }
      puVar9 = *(undefined4 **)(lVar14 + 0xb8);
      FUN_076cf434(param_6,uVar21,lVar8,param_8,*puVar9,puVar9[1],puVar9[2],puVar9[3]);
      puVar1 = PTR_DAT_09f2cf40;
      if ((in_stack_00000058 >> 0x20 == 0) && ((in_stack_00000058 & 0xff) != 0)) {
        lVar14 = *(long *)PTR_DAT_09f2cf40;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar14 = *(long *)puVar1;
        }
        uVar16 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 100);
        lVar14 = (**(code **)(*param_7 + 0x198))(param_7,*(undefined8 *)(*param_7 + 0x1a0));
        plVar5 = (long *)0x0;
        if (lVar14 == 0) goto LAB_076d12e4;
        thunk_FUN_094e64b8(lVar8,uVar16,0);
        uVar16 = *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x8c);
        lVar14 = (**(code **)(*param_7 + 0x198))(param_7,*(undefined8 *)(*param_7 + 0x1a0));
        plVar5 = (long *)0x0;
        if (lVar14 == 0) goto LAB_076d12e4;
        thunk_FUN_094e64b8(lVar8,uVar16,0);
        plVar13 = (long *)(**(code **)(*param_7 + 0x198))(param_7,*(undefined8 *)(*param_7 + 0x1a0))
        ;
        plVar5 = (long *)0x0;
        if (plVar13 == (long *)0x0) goto LAB_076d12e4;
        uVar21 = (**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400));
        lVar14 = *(long *)(*(long *)puVar1 + 0xb8);
        FUN_076cf434(param_6,uVar21,lVar8,param_8,*(undefined4 *)(lVar14 + 0x68),
                     *(undefined4 *)(lVar14 + 0x6c),*(undefined4 *)(lVar14 + 0x70),
                     *(undefined4 *)(lVar14 + 0x74));
      }
    }
  }
  uVar21 = (**(code **)(*param_7 + 0x1a8))(param_7,*(undefined8 *)(*param_7 + 0x1b0));
  puVar1 = PTR_DAT_09f2cf40;
  lVar14 = *(long *)PTR_DAT_09f2cf40;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_044a54b4(lVar14);
    lVar14 = *(long *)puVar1;
  }
  lVar14 = *(long *)(lVar14 + 0xb8);
  uVar10 = FUN_076cf434(param_6,uVar21,lVar8,param_8,*(undefined4 *)(lVar14 + 0x50),
                        *(undefined4 *)(lVar14 + 0x58),*(undefined4 *)(lVar14 + 0x54),
                        *(undefined4 *)(lVar14 + 0x5c));
  if ((uVar10 & 1) != 0) {
    lVar14 = *(long *)puVar1;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar14 = *(long *)puVar1;
    }
    uVar16 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 0x60);
    lVar14 = (**(code **)(*param_7 + 0x1a8))(param_7,*(undefined8 *)(*param_7 + 0x1b0));
    plVar5 = (long *)0x0;
    if (lVar14 == 0) goto LAB_076d12e4;
    thunk_FUN_094e64b8(lVar8,uVar16,0);
  }
  uVar21 = (**(code **)(*param_7 + 0x1b8))(param_7,*(undefined8 *)(*param_7 + 0x1c0));
  lVar14 = *(long *)puVar1;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_044a54b4(lVar14);
    lVar14 = *(long *)puVar1;
  }
  lVar14 = *(long *)(lVar14 + 0xb8);
  uVar10 = FUN_076cf434(param_6,uVar21,lVar8,param_8,*(undefined4 *)(lVar14 + 0x78),
                        *(undefined4 *)(lVar14 + 0x84),*(undefined4 *)(lVar14 + 0x80),
                        *(undefined4 *)(lVar14 + 0x88));
  if ((uVar10 & 1) != 0) {
    FUN_094e3620(lVar8,*(undefined8 *)PTR_DAT_09f2e4d0,0);
    lVar14 = *(long *)puVar1;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar14 = *(long *)puVar1;
    }
    uVar16 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 0x7c);
    lVar14 = (**(code **)(*param_7 + 0x1b8))(param_7,*(undefined8 *)(*param_7 + 0x1c0));
    plVar5 = (long *)0x0;
    if (lVar14 == 0) goto LAB_076d12e4;
    thunk_FUN_094e64b8(lVar8,uVar16,0);
  }
  uVar21 = (**(code **)(*param_7 + 0x1c8))(param_7,*(undefined8 *)(*param_7 + 0x1d0));
  lVar14 = *(long *)puVar1;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_044a54b4(lVar14);
    lVar14 = *(long *)puVar1;
  }
  lVar14 = *(long *)(lVar14 + 0xb8);
  uVar10 = FUN_076cf434(param_6,uVar21,lVar8,param_8,*(undefined4 *)(lVar14 + 0x3c),
                        *(undefined4 *)(lVar14 + 0x44),*(undefined4 *)(lVar14 + 0x40),
                        *(undefined4 *)(lVar14 + 0x48));
  if ((uVar10 & 1) != 0) {
    FUN_094e3620(lVar8,*(undefined8 *)PTR_DAT_09f2e4c8,0);
  }
  lVar14 = (**(code **)(*param_7 + 0x178))(param_7,*(undefined8 *)(*param_7 + 0x180));
  if (lVar14 != 0) {
    lVar14 = (**(code **)(*param_7 + 0x178))(param_7,*(undefined8 *)(*param_7 + 0x180));
    plVar5 = (long *)0x0;
    if (lVar14 == 0) goto LAB_076d12e4;
    if (*(long *)(lVar14 + 0x20) != 0) {
      _cStack0000000000000018 =
           (**(code **)(*param_6 + 0x228))
                     (param_6,&stack0x00000020,param_8,*(long *)(lVar14 + 0x20),lVar8,0,
                      *(undefined8 *)(*param_6 + 0x230));
    }
  }
  iVar4 = FUN_076c7d28(param_7);
  if (iVar4 == 1) {
    (**(code **)(*param_6 + 0x1e8))(param_6,param_7,lVar8,*(undefined8 *)(*param_6 + 0x1f0));
    FUN_0613ca18(&stack0x00000018,0x992,*(undefined8 *)PTR_DAT_09f2e498);
  }
  else {
    lVar14 = *(long *)puVar1;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar14 = *(long *)puVar1;
    }
    thunk_FUN_094e64b8(lVar8,**(undefined4 **)(lVar14 + 0xb8),0);
    FUN_094e4ffc(lVar8,*(undefined8 *)PTR_DAT_09f2e4e0,*(undefined8 *)PTR_DAT_09f2e4c0,0);
    FUN_094e4830(lVar8,*(undefined8 *)PTR_DAT_09f2e4d8,0,0);
  }
  if (cStack0000000000000018 == '\0') {
    if (uVar3 == 0) {
      iVar4 = FUN_076c7d28(param_7);
      uVar21 = *(undefined8 *)PTR_DAT_09f2e498;
      uVar16 = 0x992;
      if (iVar4 != 1) {
        uVar16 = 2000;
      }
    }
    else {
      uVar16 = 3000;
      uVar21 = *(undefined8 *)PTR_DAT_09f2e498;
    }
    FUN_0613ca18(&stack0x00000018,uVar16,uVar21);
  }
  uVar16 = FUN_0613ca30(&stack0x00000018,*(undefined8 *)PTR_DAT_09f2e4b8);
  FUN_094e3458(lVar8,uVar16,0);
  if (*(char *)((long)param_7 + 0x34) != '\0') {
    (**(code **)(*param_6 + 0x1d8))(param_6,param_7,lVar8,*(undefined8 *)(*param_6 + 0x1e0));
  }
  if (uVar3 == 2) {
    pcVar11 = *(code **)(*param_6 + 0x218);
    uVar21 = *(undefined8 *)(*param_6 + 0x220);
LAB_076d1048:
    (*pcVar11)(param_6,param_7,lVar8,uVar21);
  }
  else {
    if (uVar3 == 1) {
      pcVar11 = *(code **)(*param_6 + 0x208);
      uVar21 = *(undefined8 *)(*param_6 + 0x210);
      goto LAB_076d1048;
    }
    if (uVar3 == 0) {
      pcVar11 = *(code **)(*param_6 + 0x1f8);
      uVar21 = *(undefined8 *)(*param_6 + 0x200);
      goto LAB_076d1048;
    }
  }
  lVar14 = *(long *)puVar1;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar14 = *(long *)puVar1;
  }
  uVar16 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 4);
  FUN_09517a40(0);
  uVar21 = extraout_var_00;
  fVar18 = (float)FUN_09517a40(in_stack_00000020._4_4_,0);
  auVar26._8_8_ = 0;
  auVar26._0_8_ = in_stack_00000028 & 0xffffffff;
  fVar19 = (float)FUN_09517a40(auVar26,0);
  fVar31 = (float)(in_stack_00000028 >> 0x20);
  auVar27._8_8_ = uVar21;
  auVar27._0_8_ = extraout_d0_00;
  thunk_FUN_094e65c8(auVar27,lVar8,uVar16,0);
  fVar20 = (float)FUN_076c7c44(param_7);
  if (DAT_01c759c8 <=
      (fVar31 + -1.0) * (fVar31 + -1.0) + fVar19 * fVar19 + fVar20 * fVar20 + fVar18 * fVar18) {
    lVar14 = *(long *)puVar1;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar14 = *(long *)puVar1;
    }
    uVar16 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 0x38);
    FUN_076c7c44(param_7);
    thunk_FUN_094e65c8(lVar8,uVar16,0);
    FUN_094e3620(lVar8,*(undefined8 *)PTR_DAT_09f2e4c8,0);
  }
  lVar14 = (**(code **)(*param_7 + 0x178))(param_7,*(undefined8 *)(*param_7 + 0x180));
  if ((lVar14 != 0) && (*(long *)(lVar14 + 0x28) != 0)) {
    in_stack_00000010 = 0;
    FUN_06145494(&stack0x00000010,*(undefined8 *)PTR_DAT_09f2cd78);
    if ((0.0 < in_stack_00000010._4_4_) && ((in_stack_00000010 & 0xff) != 0)) {
      plVar5 = (long *)(**(code **)(*param_7 + 0x178))(param_7,*(undefined8 *)(*param_7 + 0x180));
      puVar1 = PTR_DAT_09f2e380;
      if (plVar5 != (long *)0x0) {
        lVar14 = plVar5[5];
        if (*(int *)(*(long *)PTR_DAT_09f2e380 + 0xe4) == 0) {
          plVar5 = (long *)thunk_FUN_044a54b4(*(long *)PTR_DAT_09f2e380);
        }
        if (lVar14 != 0) {
          thunk_FUN_094e64b8(lVar8,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18),0);
          lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
          FUN_076cf434(param_6,*(undefined8 *)(lVar14 + 0x18),lVar8,param_8,
                       *(undefined4 *)(lVar7 + 0x1c),*(undefined4 *)(lVar7 + 0x20),
                       *(undefined4 *)(lVar7 + 0x24),*(undefined4 *)(lVar7 + 0x28));
          thunk_FUN_094e64b8(lVar8,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x2c),0);
          FUN_094e3620(lVar8,*(undefined8 *)PTR_DAT_09f2e4e8,0);
          lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
          FUN_076cf434(param_6,*(undefined8 *)(lVar14 + 0x28),lVar8,param_8,
                       *(undefined4 *)(lVar7 + 0x30),*(undefined4 *)(lVar7 + 0x34),
                       *(undefined4 *)(lVar7 + 0x38),*(undefined4 *)(lVar7 + 0x3c));
          lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
          plVar5 = (long *)FUN_076cf434(param_6,*(undefined8 *)(lVar14 + 0x30),lVar8,param_8,
                                        *(undefined4 *)(lVar7 + 0x40),*(undefined4 *)(lVar7 + 0x48),
                                        *(undefined4 *)(lVar7 + 0x4c),*(undefined4 *)(lVar7 + 0x50))
          ;
          if (*(long *)(lVar14 + 0x30) != 0) {
            thunk_FUN_094e64b8(lVar8,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x44),0);
            return lVar8;
          }
        }
      }
LAB_076d12e4:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44(plVar5);
    }
  }
  return lVar8;
}


