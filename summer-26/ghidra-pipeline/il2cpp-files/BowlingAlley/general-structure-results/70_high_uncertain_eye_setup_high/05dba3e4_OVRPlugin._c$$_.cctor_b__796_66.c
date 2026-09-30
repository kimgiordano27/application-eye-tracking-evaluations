/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__796_66
ENTRY_POINT: 05dba3e4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__796_66(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  char *pcVar12;
  long unaff_x20;
  long *unaff_x21;
  
  thunk_FUN_032e1da0(PTR_DAT_0727a1d8);
  thunk_FUN_032e1da0(PTR_DAT_072798f8);
  thunk_FUN_032e1da0(PTR_DAT_072b24c0);
  thunk_FUN_032e1da0(PTR_DAT_0727b958);
  thunk_FUN_032e1da0(PTR_DAT_072b24c8);
  thunk_FUN_032e1da0(PTR_DAT_072b24d0);
  thunk_FUN_032e1da0(PTR_DAT_072b24d8);
  thunk_FUN_032e1da0(PTR_DAT_072b24e0);
  *(undefined1 *)(unaff_x20 + 0x85f) = 1;
  puVar1 = PTR_DAT_07279480;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar7 = FUN_05db97ac();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar1);
  }
  uVar8 = FUN_06bae618(0);
  if (((uVar8 & 1) == 0) || (uVar8 = FUN_05db9d14(), (uVar8 & 1) == 0)) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    iVar6 = FUN_06bacab8(0);
    if (iVar6 == 7) {
LAB_05dba52c:
      lVar9 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b24d0);
      FUN_059660a0(lVar9,0);
      if (lVar9 == 0) goto LAB_05dba6a0;
      FUN_05dba720(lVar9,uVar7);
      lVar9 = *unaff_x21;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(lVar9);
        lVar9 = *unaff_x21;
      }
      uVar7 = *(undefined8 *)(lVar9 + 0xb8);
      bVar4 = true;
      goto LAB_05dba578;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    iVar6 = FUN_06bacab8(0);
    if (iVar6 == 2) goto LAB_05dba52c;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    iVar6 = FUN_06bacab8(0);
    if (iVar6 != 0xb) {
      thunk_FUN_032e1da0(PTR_DAT_07282510);
      uVar7 = thunk_FUN_032a56a0();
      uVar11 = thunk_FUN_032e1da0(PTR_DAT_072b24f8);
      FUN_05925e0c(uVar7,uVar11,0);
      goto LAB_05dba6d4;
    }
    lVar9 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b24b8);
    uVar11 = FUN_059660a0(lVar9,0);
    if (lVar9 == 0) goto LAB_05dba6a0;
    bVar5 = FUN_05d90000(uVar11,uVar7);
    lVar9 = *unaff_x21;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar9);
      lVar9 = *unaff_x21;
    }
    **(byte **)(lVar9 + 0xb8) = bVar5 & 1;
  }
  else {
    lVar9 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b24c8);
    FUN_059660a0(lVar9,0);
    if (lVar9 == 0) goto LAB_05dba6a0;
    lVar10 = FUN_05db9d38(lVar9);
    lVar9 = *unaff_x21;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar9);
      lVar9 = *unaff_x21;
    }
    uVar7 = *(undefined8 *)(lVar9 + 0xb8);
    bVar4 = lVar10 != 0;
LAB_05dba578:
    *(bool *)uVar7 = bVar4;
  }
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(lVar9);
    lVar9 = *unaff_x21;
  }
  pcVar12 = *(char **)(lVar9 + 0xb8);
  if (*pcVar12 == '\0') {
    thunk_FUN_032e1da0(PTR_DAT_072816d0);
    uVar7 = thunk_FUN_032a56a0();
    uVar11 = thunk_FUN_032e1da0(PTR_DAT_072b24e8);
    FUN_06bea858(uVar7,uVar11,0);
LAB_05dba6d4:
    uVar11 = thunk_FUN_032e1da0(PTR_DAT_072b2540);
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar7,uVar11);
  }
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(lVar9);
    pcVar12 = *(char **)(*unaff_x21 + 0xb8);
  }
  puVar3 = PTR_DAT_072b24e0;
  puVar2 = PTR_DAT_072b24d8;
  puVar1 = PTR_DAT_0727b958;
  if (pcVar12[1] != '\0') {
    if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_06bb2f68(*(undefined8 *)puVar2,0);
  }
  lVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
  FUN_06be9c64(lVar9,*(undefined8 *)puVar3,0);
  if (lVar9 != 0) {
    FUN_039efc38(lVar9,*(undefined8 *)PTR_DAT_072b24c0);
    return;
  }
LAB_05dba6a0:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


