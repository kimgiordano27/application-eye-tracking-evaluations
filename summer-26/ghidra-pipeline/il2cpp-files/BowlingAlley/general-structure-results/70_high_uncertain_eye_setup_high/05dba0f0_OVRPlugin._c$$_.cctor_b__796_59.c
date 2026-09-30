/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__796_59
ENTRY_POINT: 05dba0f0
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


long OVRPlugin_<>c__<_cctor>b__796_59(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool in_ZR;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *unaff_x22;
  long *unaff_x23;
  
  if (!in_ZR) {
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    iVar4 = FUN_06bacab8(0);
    if (iVar4 != 2) {
      thunk_FUN_032e1da0(PTR_DAT_07282510);
      uVar6 = thunk_FUN_032a56a0();
      uVar7 = thunk_FUN_032e1da0(PTR_DAT_072b2530);
      FUN_05925e0c(uVar6,uVar7,0);
      goto LAB_05dba27c;
    }
  }
  lVar5 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b24c8);
  FUN_059660a0(lVar5,0);
  if (lVar5 != 0) {
    lVar5 = FUN_05dba294();
    lVar8 = *unaff_x23;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar8);
      lVar8 = *unaff_x23;
    }
    lVar9 = *(long *)(lVar8 + 0xb8);
    *(bool *)lVar9 = lVar5 != 0;
    if (lVar5 == 0) {
      thunk_FUN_032e1da0(PTR_DAT_072816d0);
      uVar6 = thunk_FUN_032a56a0();
      uVar7 = thunk_FUN_032e1da0(PTR_DAT_072b2528);
      FUN_06bea858(uVar6,uVar7,0);
LAB_05dba27c:
      uVar7 = thunk_FUN_032e1da0(PTR_DAT_072b2538);
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar6,uVar7);
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar8);
      lVar9 = *(long *)(*unaff_x23 + 0xb8);
    }
    puVar3 = PTR_DAT_072b24e0;
    puVar2 = PTR_DAT_072b24d8;
    puVar1 = PTR_DAT_0727b958;
    if (*(char *)(lVar9 + 1) != '\0') {
      if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_06bb2f68(*(undefined8 *)puVar2,0);
    }
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
    FUN_06be9c64(lVar8,*(undefined8 *)puVar3,0);
    if (lVar8 != 0) {
      FUN_039efc38(lVar8,*(undefined8 *)PTR_DAT_072b24c0);
      return lVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


