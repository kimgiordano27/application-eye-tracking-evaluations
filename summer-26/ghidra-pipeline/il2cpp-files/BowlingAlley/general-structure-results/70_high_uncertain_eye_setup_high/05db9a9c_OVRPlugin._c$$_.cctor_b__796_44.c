/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__796_44
ENTRY_POINT: 05db9a9c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_<>c__<_cctor>b__796_44(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *unaff_x21;
  
  puVar1 = PTR_DAT_07279480;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar5 = FUN_05db97ac();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar1);
  }
  uVar6 = FUN_06bae618(0);
  if (((uVar6 & 1) == 0) || (uVar6 = FUN_05db9d14(), (uVar6 & 1) == 0)) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    iVar4 = FUN_06bacab8(0);
    if (iVar4 != 7) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      iVar4 = FUN_06bacab8(0);
      if (iVar4 != 2) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        iVar4 = FUN_06bacab8(0);
        if (iVar4 != 0xb) {
          thunk_FUN_032e1da0(PTR_DAT_07282510);
          uVar5 = thunk_FUN_032a56a0();
          uVar9 = thunk_FUN_032e1da0(PTR_DAT_072b24f8);
          FUN_05925e0c(uVar5,uVar9,0);
          goto LAB_05db9cc8;
        }
        lVar7 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b24b8);
        uVar9 = FUN_059660a0(lVar7,0);
        if (lVar7 == 0) goto LAB_05db9c94;
        lVar7 = FUN_05d90144(uVar9,uVar5);
        goto LAB_05db9bcc;
      }
    }
    lVar7 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b24d0);
    FUN_059660a0(lVar7,0);
    if (lVar7 == 0) goto LAB_05db9c94;
    lVar7 = FUN_05db9e60(lVar7,uVar5);
  }
  else {
    lVar7 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b24c8);
    FUN_059660a0(lVar7,0);
    if (lVar7 == 0) goto LAB_05db9c94;
    lVar7 = FUN_05db9d38(lVar7);
  }
LAB_05db9bcc:
  lVar8 = *unaff_x21;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar8 = *unaff_x21;
  }
  lVar10 = *(long *)(lVar8 + 0xb8);
  *(bool *)lVar10 = lVar7 != 0;
  if (lVar7 == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072816d0);
    uVar5 = thunk_FUN_032a56a0();
    uVar9 = thunk_FUN_032e1da0(PTR_DAT_072b24e8);
    FUN_06bea858(uVar5,uVar9,0);
LAB_05db9cc8:
    uVar9 = thunk_FUN_032e1da0(PTR_DAT_072b24f0);
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar5,uVar9);
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar10 = *(long *)(*unaff_x21 + 0xb8);
  }
  puVar3 = PTR_DAT_072b24e0;
  puVar2 = PTR_DAT_072b24d8;
  puVar1 = PTR_DAT_0727b958;
  if (*(char *)(lVar10 + 1) != '\0') {
    if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_06bb2f68(*(undefined8 *)puVar2,0);
  }
  lVar8 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
  FUN_06be9c64(lVar8,*(undefined8 *)puVar3,0);
  if (lVar8 != 0) {
    FUN_039efc38(lVar8,*(undefined8 *)PTR_DAT_072b24c0);
    return lVar7;
  }
LAB_05db9c94:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


