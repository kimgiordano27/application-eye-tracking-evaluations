/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_SetDeveloperMode
ENTRY_POINT: 01db5a68
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_OVRP_1_38_0__ovrp_SetDeveloperMode(void)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x19;
  int unaff_w20;
  long lVar10;
  long lVar11;
  long unaff_x21;
  int iVar12;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long lVar13;
  undefined1 in_stack_00000008;
  
  thunk_FUN_00ffe618();
  if (unaff_w20 != 0) {
    lVar10 = *(long *)(unaff_x19 + 0x18);
    in_stack_00000008 = 0;
    plVar8 = (long *)thunk_FUN_0103fd0c(*unaff_x23,&stack0x00000008);
    uVar9 = thunk_FUN_010400dc(*unaff_x22);
    if ((plVar8 == (long *)0x0) ||
       (FUN_01359ba8(uVar9,plVar8,*(undefined8 *)(*plVar8 + 400),0), lVar10 == 0))
    goto LAB_01db5d34;
    FUN_017d4928(lVar10,uVar9,*unaff_x24);
    thunk_FUN_00ffe618();
    *(undefined1 *)(unaff_x19 + 0x10) = 0;
  }
  puVar6 = PTR_DAT_0235a5e8;
  puVar5 = PTR_DAT_0235a5e0;
  puVar4 = PTR_DAT_0235a5c8;
  puVar3 = PTR_DAT_0234be70;
  lVar10 = *(long *)(unaff_x19 + 0x18);
  if (lVar10 != 0) {
    iVar12 = 0;
    lVar11 = 0x7fffffffffffffff;
    do {
      if (*(int *)(lVar10 + 0x18) <= iVar12) {
        if (*(int *)(lVar10 + 0x18) < 1) goto LAB_01db5c38;
        iVar12 = 0;
        goto LAB_01db5b9c;
      }
      lVar10 = FUN_017d2d60(lVar10,iVar12,*(undefined8 *)puVar5);
      if (lVar10 == 0) break;
      if (*(char *)(lVar10 + 0x41) == '\0') {
        lVar13 = *(long *)(lVar10 + 0x38);
        if (lVar13 <= unaff_x21) {
          FUN_01db5fd4(lVar10,lVar10);
          lVar13 = *(long *)(lVar10 + 0x38);
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        lVar11 = FUN_01d4b068(lVar11,lVar13,0);
        if ((unaff_x21 < *(long *)(lVar10 + 0x38)) &&
           (*(long *)(lVar10 + 0x38) != 0x7fffffffffffffff)) {
          *(undefined1 *)(lVar10 + 0x41) = 0;
        }
      }
      lVar10 = *(long *)(unaff_x19 + 0x18);
      iVar12 = iVar12 + 1;
    } while (lVar10 != 0);
  }
LAB_01db5d34:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
  while (iVar12 = iVar12 + 1, iVar12 < *(int *)(lVar10 + 0x18)) {
LAB_01db5b9c:
    lVar10 = FUN_017d2d60(lVar10,iVar12,*(undefined8 *)puVar5);
    if (lVar10 == 0) goto LAB_01db5d34;
    if (*(char *)(lVar10 + 0x41) == '\0') {
      lVar10 = *(long *)(unaff_x19 + 0x18);
      if (lVar10 == 0) goto LAB_01db5d34;
    }
    else {
      *(undefined1 *)(lVar10 + 0x42) = 0;
      thunk_FUN_00ffe618();
      lVar10 = *(long *)(unaff_x19 + 0x18);
      *(undefined1 *)(unaff_x19 + 0x10) = 1;
      if (lVar10 == 0) goto LAB_01db5d34;
      uVar9 = FUN_017d2d60(lVar10,*(int *)(lVar10 + 0x18) + -1,*(undefined8 *)puVar5);
      FUN_017d2db4(lVar10,iVar12,uVar9,*(undefined8 *)puVar6);
      lVar10 = *(long *)(unaff_x19 + 0x18);
      if (lVar10 == 0) goto LAB_01db5d34;
      FUN_017d4638(lVar10,*(int *)(lVar10 + 0x18) + -1,*(undefined8 *)puVar4);
      lVar10 = *(long *)(unaff_x19 + 0x18);
      if (lVar10 == 0) goto LAB_01db5d34;
      if (*(int *)(lVar10 + 0x18) == 0) break;
      iVar12 = iVar12 + -1;
    }
  }
LAB_01db5c38:
  cVar1 = *(char *)(unaff_x19 + 0x10);
  thunk_FUN_00ffe618();
  if (cVar1 != '\0') {
    lVar10 = *(long *)(unaff_x19 + 0x18);
    plVar8 = (long *)thunk_FUN_0103fd0c(*(undefined8 *)PTR_DAT_0235a5f0);
    uVar9 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0235a5c0);
    if ((plVar8 == (long *)0x0) ||
       (FUN_01359ba8(uVar9,plVar8,*(undefined8 *)(*plVar8 + 400),0), lVar10 == 0))
    goto LAB_01db5d34;
    FUN_017d4928(lVar10,uVar9,*(undefined8 *)PTR_DAT_0235a5d0);
    thunk_FUN_00ffe618();
    *(undefined1 *)(unaff_x19 + 0x10) = 0;
  }
  *(long *)(unaff_x19 + 0x20) = lVar11;
  if (lVar11 == 0x7fffffffffffffff) {
    uVar7 = 0xffffffff;
  }
  else {
    lVar10 = thunk_FUN_01027094();
    if (lVar11 - lVar10 < 0x138800000000) {
      auVar2 = SEXT816(lVar11 - lVar10) * SEXT816(0x346dc5d63886594b);
      uVar7 = (int)(auVar2._8_8_ >> 0xb) - (auVar2._12_4_ >> 0x1f);
      uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
    }
    else {
      uVar7 = 0x7ffffffe;
    }
  }
  return uVar7;
}


