/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.InstanceCache$$UnregisterHandle
ENTRY_POINT: 076d0704
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_ImmersiveDebugger_Utils_InstanceCache__UnregisterHandle
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
               undefined4 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  int *piVar10;
  long *unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  long *plVar11;
  long unaff_x23;
  long lVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 extraout_d0;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 extraout_d0_00;
  undefined1 auVar21 [16];
  undefined8 extraout_var;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 extraout_var_00;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uVar26;
  undefined4 uVar27;
  undefined8 uVar28;
  float fVar29;
  ulong in_stack_00000010;
  char cStack0000000000000018;
  undefined8 in_stack_00000020;
  ulong in_stack_00000028;
  ulong in_stack_00000058;
  
  uVar28 = param_3._8_8_;
  uVar20 = param_3._0_8_;
  uVar26 = param_2._8_8_;
  uVar19 = param_2._0_8_;
  FUN_04447ba8(*(undefined8 *)(param_5 + 0x4a8));
  FUN_04447ba8(PTR_DAT_09f2e4b0);
  FUN_04447ba8(PTR_DAT_09f2e4b8);
  FUN_04447ba8(PTR_DAT_09f1e538);
  FUN_04447ba8(PTR_DAT_09f2e380);
  FUN_04447ba8(PTR_DAT_09f2e4c0);
  FUN_04447ba8(PTR_DAT_09f2e4c8);
  FUN_04447ba8(PTR_DAT_09f2e4d0);
  FUN_04447ba8(PTR_DAT_09f2e4d8);
  FUN_04447ba8(PTR_DAT_09f2e4e0);
  lVar5 = FUN_04447ba8(PTR_DAT_09f2e4e8);
  *(undefined1 *)(unaff_x23 + 0xdea) = 1;
  in_stack_00000058 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  _cStack0000000000000018 = 0;
  if (((unaff_x22 & 1) != 0) && (plVar11 = (long *)unaff_x20[2], plVar11 != (long *)0x0)) {
    lVar12 = *(long *)PTR_DAT_09f24cf0;
    lVar5 = *(long *)(lVar12 + 0x38);
    if (lVar5 == 0) {
      FUN_04482014(lVar12);
      lVar5 = *(long *)(lVar12 + 0x38);
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04481fb8();
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    lVar5 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04481fb8();
    }
    lVar12 = *plVar11;
    uVar13 = **(undefined8 **)(lVar5 + 0xb8);
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09f2ac68) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_076d0854;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_044822ac(plVar11,*(long *)PTR_DAT_09f2ac68,1);
LAB_076d0854:
    lVar5 = (*(code *)*puVar6)(plVar11,0x2f,uVar13,puVar6[1]);
  }
  if (unaff_x21 == (long *)0x0) goto LAB_076d12e4;
  lVar5 = (**(code **)(*unaff_x21 + 0x178))();
  puVar2 = PTR_DAT_09f2e4a0;
  puVar1 = PTR_DAT_09f1e538;
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x18);
  }
  lVar12 = (**(code **)(*unaff_x21 + 0x178))();
  if (lVar12 == 0) {
    if (lVar5 != 0) goto LAB_076d090c;
    uVar13 = *(undefined8 *)puVar2;
LAB_076d0944:
    FUN_0613ca18(&stack0x00000058,0,uVar13);
    uVar3 = FUN_076d1478();
    lVar12 = FUN_076d0594();
    uVar3 = uVar3 & 3;
  }
  else if (lVar5 == 0) {
    uVar13 = *(undefined8 *)puVar2;
    if (*(long *)(lVar12 + 0x10) == 0) goto LAB_076d0944;
    FUN_0613ca18(&stack0x00000058,1,uVar13);
    if (*(int *)(*(long *)PTR_DAT_09f2e380 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar3 = FUN_076d1394();
    lVar12 = FUN_076d13cc();
    uVar3 = uVar3 >> 1 & 1;
  }
  else {
LAB_076d090c:
    lVar12 = FUN_076d12e8();
    FUN_0613ca18(&stack0x00000058,2,*(undefined8 *)puVar2);
    iVar4 = FUN_076c7d28();
    uVar3 = (uint)(iVar4 == 2);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar8 = FUN_0952c404(lVar12,0,0);
  lVar5 = 0;
  if ((uVar8 & 1) != 0) {
    return 0;
  }
  if (lVar12 == 0) goto LAB_076d12e4;
  thunk_FUN_09530084(lVar12,unaff_x21[2],0);
  auVar21 = NEON_fmov(0x3f800000,4);
  _cStack0000000000000018 = 0;
  in_stack_00000028 = auVar21._8_8_;
  in_stack_00000020 = auVar21._0_8_;
  lVar5 = (**(code **)(*unaff_x21 + 0x178))();
  if (lVar5 != 0) {
    lVar7 = (**(code **)(*unaff_x21 + 0x178))();
    lVar5 = 0;
    if (lVar7 == 0) goto LAB_076d12e4;
    lVar5 = *(long *)(lVar7 + 0x10);
    if (lVar5 != 0) {
      uVar14 = FUN_076ca670(lVar5);
      puVar1 = PTR_DAT_09f2cf40;
      in_stack_00000020 = CONCAT44((int)uVar19,uVar14);
      in_stack_00000028 = CONCAT44(param_4,(int)uVar20);
      lVar7 = *(long *)PTR_DAT_09f2cf40;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar7 = *(long *)puVar1;
      }
      uVar14 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x24);
      FUN_076ca670(lVar5);
      FUN_09517a40(0);
      auVar21._8_8_ = uVar26;
      auVar21._0_8_ = uVar19;
      uVar26 = extraout_var;
      uVar19 = FUN_09517a40(auVar21,0);
      auVar22._8_8_ = uVar28;
      auVar22._0_8_ = uVar20;
      uVar20 = FUN_09517a40(auVar22,0);
      auVar23._8_8_ = uVar26;
      auVar23._0_8_ = extraout_d0;
      thunk_FUN_094e65c8(auVar23,lVar12,uVar14,0);
      uVar14 = *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x90);
      FUN_076ca6b4(lVar5);
      thunk_FUN_094e65c8(lVar12,uVar14,0);
      thunk_FUN_094e64b8(lVar12,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x4c),0);
      FUN_076cf434();
      FUN_076cf434();
    }
  }
  uVar27 = (undefined4)uVar20;
  uVar14 = (undefined4)uVar19;
  lVar5 = (**(code **)(*unaff_x21 + 0x198))();
  if ((lVar5 != 0) &&
     ((lVar5 = (**(code **)(*unaff_x21 + 0x178))(), lVar5 == 0 || (*(long *)(lVar5 + 0x10) == 0))))
  {
    lVar7 = (**(code **)(*unaff_x21 + 0x198))();
    lVar5 = 0;
    if (lVar7 == 0) goto LAB_076d12e4;
    uVar15 = FUN_076c8adc();
    in_stack_00000020 = CONCAT44(uVar14,uVar15);
    in_stack_00000028 = CONCAT44(param_4,uVar27);
    if ((in_stack_00000058 >> 0x20 != 1) || ((in_stack_00000058 & 0xff) == 0)) {
      plVar11 = (long *)(**(code **)(*unaff_x21 + 0x198))();
      lVar5 = 0;
      if (plVar11 == (long *)0x0) goto LAB_076d12e4;
      (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
      if (*(int *)(*(long *)PTR_DAT_09f2e380 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f2e380);
      }
      FUN_076cf434();
      puVar1 = PTR_DAT_09f2cf40;
      if ((in_stack_00000058 >> 0x20 == 0) && ((in_stack_00000058 & 0xff) != 0)) {
        lVar5 = *(long *)PTR_DAT_09f2cf40;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar5 = *(long *)puVar1;
        }
        uVar14 = *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 100);
        lVar7 = (**(code **)(*unaff_x21 + 0x198))();
        lVar5 = 0;
        if (lVar7 == 0) goto LAB_076d12e4;
        thunk_FUN_094e64b8(lVar12,uVar14,0);
        uVar14 = *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x8c);
        lVar7 = (**(code **)(*unaff_x21 + 0x198))();
        lVar5 = 0;
        if (lVar7 == 0) goto LAB_076d12e4;
        thunk_FUN_094e64b8(lVar12,uVar14,0);
        plVar11 = (long *)(**(code **)(*unaff_x21 + 0x198))();
        lVar5 = 0;
        if (plVar11 == (long *)0x0) goto LAB_076d12e4;
        (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
        FUN_076cf434();
      }
    }
  }
  (**(code **)(*unaff_x21 + 0x1a8))();
  puVar1 = PTR_DAT_09f2cf40;
  if (*(int *)(*(long *)PTR_DAT_09f2cf40 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*(long *)PTR_DAT_09f2cf40);
  }
  uVar8 = FUN_076cf434();
  if ((uVar8 & 1) != 0) {
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar5 = *(long *)puVar1;
    }
    uVar14 = *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x60);
    lVar7 = (**(code **)(*unaff_x21 + 0x1a8))();
    lVar5 = 0;
    if (lVar7 == 0) goto LAB_076d12e4;
    thunk_FUN_094e64b8(lVar12,uVar14,0);
  }
  (**(code **)(*unaff_x21 + 0x1b8))();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*(long *)puVar1);
  }
  uVar8 = FUN_076cf434();
  if ((uVar8 & 1) != 0) {
    FUN_094e3620(lVar12,*(undefined8 *)PTR_DAT_09f2e4d0,0);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar5 = *(long *)puVar1;
    }
    uVar14 = *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x7c);
    lVar7 = (**(code **)(*unaff_x21 + 0x1b8))();
    lVar5 = 0;
    if (lVar7 == 0) goto LAB_076d12e4;
    thunk_FUN_094e64b8(lVar12,uVar14,0);
  }
  (**(code **)(*unaff_x21 + 0x1c8))();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*(long *)puVar1);
  }
  uVar8 = FUN_076cf434();
  if ((uVar8 & 1) != 0) {
    FUN_094e3620(lVar12,*(undefined8 *)PTR_DAT_09f2e4c8,0);
  }
  lVar5 = (**(code **)(*unaff_x21 + 0x178))();
  if (lVar5 != 0) {
    lVar7 = (**(code **)(*unaff_x21 + 0x178))();
    lVar5 = 0;
    if (lVar7 == 0) goto LAB_076d12e4;
    if (*(long *)(lVar7 + 0x20) != 0) {
      _cStack0000000000000018 = (**(code **)(*unaff_x20 + 0x228))();
    }
  }
  iVar4 = FUN_076c7d28();
  if (iVar4 == 1) {
    (**(code **)(*unaff_x20 + 0x1e8))();
    FUN_0613ca18(&stack0x00000018,0x992,*(undefined8 *)PTR_DAT_09f2e498);
  }
  else {
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar5 = *(long *)puVar1;
    }
    thunk_FUN_094e64b8(lVar12,**(undefined4 **)(lVar5 + 0xb8),0);
    FUN_094e4ffc(lVar12,*(undefined8 *)PTR_DAT_09f2e4e0,*(undefined8 *)PTR_DAT_09f2e4c0,0);
    FUN_094e4830(lVar12,*(undefined8 *)PTR_DAT_09f2e4d8,0,0);
  }
  if (cStack0000000000000018 == '\0') {
    if (uVar3 == 0) {
      iVar4 = FUN_076c7d28();
      uVar19 = *(undefined8 *)PTR_DAT_09f2e498;
      uVar14 = 0x992;
      if (iVar4 != 1) {
        uVar14 = 2000;
      }
    }
    else {
      uVar14 = 3000;
      uVar19 = *(undefined8 *)PTR_DAT_09f2e498;
    }
    FUN_0613ca18(&stack0x00000018,uVar14,uVar19);
  }
  uVar14 = FUN_0613ca30(&stack0x00000018,*(undefined8 *)PTR_DAT_09f2e4b8);
  FUN_094e3458(lVar12,uVar14,0);
  if (*(char *)((long)unaff_x21 + 0x34) != '\0') {
    (**(code **)(*unaff_x20 + 0x1d8))();
  }
  if (uVar3 == 2) {
    pcVar9 = *(code **)(*unaff_x20 + 0x218);
LAB_076d1048:
    (*pcVar9)();
  }
  else {
    if (uVar3 == 1) {
      pcVar9 = *(code **)(*unaff_x20 + 0x208);
      goto LAB_076d1048;
    }
    if (uVar3 == 0) {
      pcVar9 = *(code **)(*unaff_x20 + 0x1f8);
      goto LAB_076d1048;
    }
  }
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar5 = *(long *)puVar1;
  }
  uVar14 = *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 4);
  FUN_09517a40(0);
  uVar19 = extraout_var_00;
  fVar16 = (float)FUN_09517a40(in_stack_00000020._4_4_,0);
  auVar24._8_8_ = 0;
  auVar24._0_8_ = in_stack_00000028 & 0xffffffff;
  fVar17 = (float)FUN_09517a40(auVar24,0);
  fVar29 = (float)(in_stack_00000028 >> 0x20);
  auVar25._8_8_ = uVar19;
  auVar25._0_8_ = extraout_d0_00;
  thunk_FUN_094e65c8(auVar25,lVar12,uVar14,0);
  fVar18 = (float)FUN_076c7c44();
  if (DAT_01c759c8 <=
      (fVar29 + -1.0) * (fVar29 + -1.0) + fVar17 * fVar17 + fVar18 * fVar18 + fVar16 * fVar16) {
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar5 = *(long *)puVar1;
    }
    uVar14 = *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x38);
    FUN_076c7c44();
    thunk_FUN_094e65c8(lVar12,uVar14,0);
    FUN_094e3620(lVar12,*(undefined8 *)PTR_DAT_09f2e4c8,0);
  }
  lVar5 = (**(code **)(*unaff_x21 + 0x178))();
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x28) != 0)) {
    in_stack_00000010 = 0;
    FUN_06145494(&stack0x00000010,*(undefined8 *)PTR_DAT_09f2cd78);
    if ((0.0 < in_stack_00000010._4_4_) && ((in_stack_00000010 & 0xff) != 0)) {
      lVar5 = (**(code **)(*unaff_x21 + 0x178))();
      puVar1 = PTR_DAT_09f2e380;
      if (lVar5 != 0) {
        lVar7 = *(long *)(lVar5 + 0x28);
        if (*(int *)(*(long *)PTR_DAT_09f2e380 + 0xe4) == 0) {
          lVar5 = thunk_FUN_044a54b4(*(long *)PTR_DAT_09f2e380);
        }
        if (lVar7 != 0) {
          thunk_FUN_094e64b8(lVar12,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18),0);
          FUN_076cf434();
          thunk_FUN_094e64b8(lVar12,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x2c),0);
          FUN_094e3620(lVar12,*(undefined8 *)PTR_DAT_09f2e4e8,0);
          FUN_076cf434();
          lVar5 = FUN_076cf434();
          if (*(long *)(lVar7 + 0x30) != 0) {
            thunk_FUN_094e64b8(lVar12,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x44),0);
            return lVar12;
          }
        }
      }
LAB_076d12e4:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44(lVar5);
    }
  }
  return lVar12;
}


