/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__710_149
ENTRY_POINT: 02821d24
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_<>c__<_cctor>b__710_149(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x19;
  int unaff_w21;
  int unaff_w22;
  int unaff_w23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long unaff_x26;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  FUN_01ab69ac();
  FUN_01ab69ac(PTR_DAT_03cf5f08);
  FUN_01ab69ac(PTR_DAT_03cfe828);
  FUN_01ab69ac(PTR_DAT_03cfe830);
  *(undefined1 *)(unaff_x26 + 0x3c9) = 1;
  puVar2 = PTR_DAT_03cfdb18;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000008 = 0;
  if (unaff_w23 != 1) {
    if (*(int *)(*(long *)PTR_DAT_03cfdb18 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar3 = FUN_02822238();
    if (unaff_w21 != 1) {
      if (unaff_w21 != 2) {
        return uVar3;
      }
      lVar5 = *(long *)(*(long *)PTR_DAT_03cf5f08 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01a46ff8();
      }
      pcVar6 = (char *)thunk_FUN_01a59484(&stack0x00000008,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x80));
      if (*pcVar6 == '\0') {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0281f99c();
      }
      else {
        FUN_01ba9478(&stack0x00000008,&stack0x00000028,*(undefined8 *)PTR_DAT_03cfe558);
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar3 = FUN_02822080();
      return uVar3;
    }
    if (unaff_x19 != 0) {
      if (uVar3 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined2 *)(unaff_x19 + (long)(int)uVar3 * 2 + 0x20) = 0x5a;
        return uVar3 + 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    goto LAB_02822078;
  }
  lVar5 = *(long *)(*(long *)PTR_DAT_03cf5f08 + 0x20);
  in_stack_00000008 = unaff_x25;
  in_stack_00000010 = unaff_x24;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01a46ff8();
  }
  pcVar6 = (char *)thunk_FUN_01a59484(&stack0x00000008,
                                      *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x80)
                                     );
  if (*pcVar6 == '\0') {
    if (*(int *)(*(long *)PTR_DAT_03cfdb18 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_0281f99c();
  }
  else {
    FUN_01ba9478(&stack0x00000008,&stack0x00000028,*(undefined8 *)PTR_DAT_03cfe558);
  }
  puVar2 = PTR_DAT_03cfdb18;
  if (*(int *)(*(long *)PTR_DAT_03cfdb18 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  in_stack_00000018 = FUN_0281ffa0();
  if (*(long *)PTR_DAT_03cfe830 == 0) goto LAB_02822078;
  FUN_025c5094(*(long *)PTR_DAT_03cfe830,0);
  if (*(int *)(*(long *)PTR_DAT_03cc41f8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar7 = FUN_0271c480(0);
  lVar5 = FUN_02768e08(&stack0x00000018,uVar7,0);
  if (lVar5 == 0) goto LAB_02822078;
  FUN_025c5094(lVar5,0);
  puVar1 = PTR_DAT_03cbeeb0;
  iVar4 = *(int *)(lVar5 + 0x10) + unaff_w22 + 7;
  if (unaff_w21 == 2) {
LAB_02821f98:
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    iVar4 = FUN_02822080();
  }
  else if (unaff_w21 == 0) {
    if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar8 = FUN_027486b4();
    if ((uVar8 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar8 = FUN_027486b4();
      if ((uVar8 & 1) != 0) goto LAB_02821f98;
    }
  }
  if (*(long *)PTR_DAT_03cfe828 != 0) {
    FUN_025c5094(*(long *)PTR_DAT_03cfe828,0);
    return iVar4 + 3;
  }
LAB_02822078:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


