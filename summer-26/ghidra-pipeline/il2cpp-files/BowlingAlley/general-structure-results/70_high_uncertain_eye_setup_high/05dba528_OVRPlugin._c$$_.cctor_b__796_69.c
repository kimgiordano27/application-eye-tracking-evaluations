/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__796_69
ENTRY_POINT: 05dba528
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__796_69(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool in_ZR;
  byte bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  long *unaff_x20;
  long *unaff_x21;
  
  if (in_ZR) {
    lVar6 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b24d0);
    FUN_059660a0(lVar6,0);
    if (lVar6 == 0) goto LAB_05dba6a0;
    FUN_05dba720(lVar6);
    lVar6 = *unaff_x21;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar6);
      lVar6 = *unaff_x21;
    }
    **(undefined1 **)(lVar6 + 0xb8) = 1;
  }
  else {
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    iVar5 = FUN_06bacab8(0);
    if (iVar5 != 0xb) {
      thunk_FUN_032e1da0(PTR_DAT_07282510);
      uVar7 = thunk_FUN_032a56a0();
      uVar8 = thunk_FUN_032e1da0(PTR_DAT_072b24f8);
      FUN_05925e0c(uVar7,uVar8,0);
      goto LAB_05dba6d4;
    }
    lVar6 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b24b8);
    FUN_059660a0(lVar6,0);
    if (lVar6 == 0) goto LAB_05dba6a0;
    bVar4 = FUN_05d90000();
    lVar6 = *unaff_x21;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar6);
      lVar6 = *unaff_x21;
    }
    **(byte **)(lVar6 + 0xb8) = bVar4 & 1;
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(lVar6);
    lVar6 = *unaff_x21;
  }
  pcVar9 = *(char **)(lVar6 + 0xb8);
  if (*pcVar9 == '\0') {
    thunk_FUN_032e1da0(PTR_DAT_072816d0);
    uVar7 = thunk_FUN_032a56a0();
    uVar8 = thunk_FUN_032e1da0(PTR_DAT_072b24e8);
    FUN_06bea858(uVar7,uVar8,0);
LAB_05dba6d4:
    uVar8 = thunk_FUN_032e1da0(PTR_DAT_072b2540);
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar7,uVar8);
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(lVar6);
    pcVar9 = *(char **)(*unaff_x21 + 0xb8);
  }
  puVar3 = PTR_DAT_072b24e0;
  puVar2 = PTR_DAT_072b24d8;
  puVar1 = PTR_DAT_0727b958;
  if (pcVar9[1] != '\0') {
    if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_06bb2f68(*(undefined8 *)puVar2,0);
  }
  lVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
  FUN_06be9c64(lVar6,*(undefined8 *)puVar3,0);
  if (lVar6 != 0) {
    FUN_039efc38(lVar6,*(undefined8 *)PTR_DAT_072b24c0);
    return;
  }
LAB_05dba6a0:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


