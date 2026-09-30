/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetNodePositionValid
ENTRY_POINT: 01db5b68
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


uint OVRPlugin_OVRP_1_38_0__ovrp_GetNodePositionValid(long param_1)

{
  char cVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x19;
  long unaff_x20;
  int iVar7;
  long unaff_x21;
  int unaff_w22;
  long unaff_x23;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  do {
    if ((unaff_x21 < param_1) && (param_1 != unaff_x27)) {
      *(undefined1 *)(unaff_x23 + 0x41) = 0;
    }
    do {
      lVar4 = *(long *)(unaff_x19 + 0x18);
      unaff_w22 = unaff_w22 + 1;
      if (lVar4 == 0) goto LAB_01db5d34;
      if (*(int *)(lVar4 + 0x18) <= unaff_w22) {
        if (*(int *)(lVar4 + 0x18) < 1) goto LAB_01db5c38;
        iVar7 = 0;
        goto LAB_01db5b9c;
      }
      unaff_x23 = FUN_017d2d60(lVar4,unaff_w22,*unaff_x28);
      if (unaff_x23 == 0) goto LAB_01db5d34;
    } while (*(char *)(unaff_x23 + 0x41) != '\0');
    lVar4 = *(long *)(unaff_x23 + 0x38);
    if (lVar4 <= unaff_x21) {
      FUN_01db5fd4(unaff_x23,unaff_x23);
      lVar4 = *(long *)(unaff_x23 + 0x38);
    }
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    unaff_x20 = FUN_01d4b068(unaff_x20,lVar4,0);
    param_1 = *(long *)(unaff_x23 + 0x38);
  } while( true );
  while (iVar7 = iVar7 + 1, iVar7 < *(int *)(lVar4 + 0x18)) {
LAB_01db5b9c:
    lVar4 = FUN_017d2d60(lVar4,iVar7,*unaff_x28);
    if (lVar4 == 0) goto LAB_01db5d34;
    if (*(char *)(lVar4 + 0x41) == '\0') {
      lVar4 = *(long *)(unaff_x19 + 0x18);
      if (lVar4 == 0) goto LAB_01db5d34;
    }
    else {
      *(undefined1 *)(lVar4 + 0x42) = 0;
      thunk_FUN_00ffe618();
      lVar4 = *(long *)(unaff_x19 + 0x18);
      *(undefined1 *)(unaff_x19 + 0x10) = 1;
      if (lVar4 == 0) goto LAB_01db5d34;
      uVar5 = FUN_017d2d60(lVar4,*(int *)(lVar4 + 0x18) + -1,*unaff_x28);
      FUN_017d2db4(lVar4,iVar7,uVar5,*unaff_x29);
      lVar4 = *(long *)(unaff_x19 + 0x18);
      if (lVar4 == 0) goto LAB_01db5d34;
      FUN_017d4638(lVar4,*(int *)(lVar4 + 0x18) + -1,*unaff_x25);
      lVar4 = *(long *)(unaff_x19 + 0x18);
      if (lVar4 == 0) goto LAB_01db5d34;
      if (*(int *)(lVar4 + 0x18) == 0) break;
      iVar7 = iVar7 + -1;
    }
  }
LAB_01db5c38:
  cVar1 = *(char *)(unaff_x19 + 0x10);
  thunk_FUN_00ffe618();
  if (cVar1 != '\0') {
    lVar4 = *(long *)(unaff_x19 + 0x18);
    plVar6 = (long *)thunk_FUN_0103fd0c(*(undefined8 *)PTR_DAT_0235a5f0);
    uVar5 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0235a5c0);
    if ((plVar6 == (long *)0x0) ||
       (FUN_01359ba8(uVar5,plVar6,*(undefined8 *)(*plVar6 + 400),0), lVar4 == 0)) {
LAB_01db5d34:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    FUN_017d4928(lVar4,uVar5,*(undefined8 *)PTR_DAT_0235a5d0);
    thunk_FUN_00ffe618();
    *(undefined1 *)(unaff_x19 + 0x10) = 0;
  }
  *(long *)(unaff_x19 + 0x20) = unaff_x20;
  if (unaff_x20 == 0x7fffffffffffffff) {
    uVar3 = 0xffffffff;
  }
  else {
    lVar4 = thunk_FUN_01027094();
    if (unaff_x20 - lVar4 < 0x138800000000) {
      auVar2 = SEXT816(unaff_x20 - lVar4) * SEXT816(0x346dc5d63886594b);
      uVar3 = (int)(auVar2._8_8_ >> 0xb) - (auVar2._12_4_ >> 0x1f);
      uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
    }
    else {
      uVar3 = 0x7ffffffe;
    }
  }
  return uVar3;
}


