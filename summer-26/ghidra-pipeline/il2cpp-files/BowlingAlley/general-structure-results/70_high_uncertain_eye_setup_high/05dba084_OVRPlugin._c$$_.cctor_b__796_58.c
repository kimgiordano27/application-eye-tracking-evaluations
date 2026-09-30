/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__796_58
ENTRY_POINT: 05dba084
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_<>c__<_cctor>b__796_58(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long unaff_x22;
  long *unaff_x23;
  
  thunk_FUN_032e1da0();
  *(undefined1 *)(unaff_x22 + 0x85e) = 1;
  puVar1 = PTR_DAT_07279480;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar5 = FUN_05db97ac();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar1);
  }
  uVar6 = FUN_06bae618(0);
  if ((uVar6 & 1) == 0) {
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
        thunk_FUN_032e1da0(PTR_DAT_07282510);
        uVar5 = thunk_FUN_032a56a0();
        uVar8 = thunk_FUN_032e1da0(PTR_DAT_072b2530);
        FUN_05925e0c(uVar5,uVar8,0);
        goto LAB_05dba27c;
      }
    }
  }
  lVar7 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b24c8);
  uVar8 = FUN_059660a0(lVar7,0);
  if (lVar7 != 0) {
    lVar7 = FUN_05dba294(uVar8,uVar5);
    lVar9 = *unaff_x23;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar9);
      lVar9 = *unaff_x23;
    }
    lVar10 = *(long *)(lVar9 + 0xb8);
    *(bool *)lVar10 = lVar7 != 0;
    if (lVar7 == 0) {
      thunk_FUN_032e1da0(PTR_DAT_072816d0);
      uVar5 = thunk_FUN_032a56a0();
      uVar8 = thunk_FUN_032e1da0(PTR_DAT_072b2528);
      FUN_06bea858(uVar5,uVar8,0);
LAB_05dba27c:
      uVar8 = thunk_FUN_032e1da0(PTR_DAT_072b2538);
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar5,uVar8);
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar9);
      lVar10 = *(long *)(*unaff_x23 + 0xb8);
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
    lVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
    FUN_06be9c64(lVar9,*(undefined8 *)puVar3,0);
    if (lVar9 != 0) {
      FUN_039efc38(lVar9,*(undefined8 *)PTR_DAT_072b24c0);
      return lVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


