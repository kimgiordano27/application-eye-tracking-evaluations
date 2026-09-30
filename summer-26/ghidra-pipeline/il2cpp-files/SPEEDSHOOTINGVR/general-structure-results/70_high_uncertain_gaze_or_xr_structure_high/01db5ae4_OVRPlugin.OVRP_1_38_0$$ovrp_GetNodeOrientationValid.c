/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetNodeOrientationValid
ENTRY_POINT: 01db5ae4
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


uint OVRPlugin_OVRP_1_38_0__ovrp_GetNodeOrientationValid(long param_1)

{
  char cVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  long lVar6;
  long unaff_x21;
  int iVar7;
  long lVar8;
  long unaff_x25;
  undefined8 *puVar9;
  long unaff_x26;
  long *plVar10;
  long unaff_x28;
  undefined8 *puVar11;
  long unaff_x29;
  undefined8 *puVar12;
  
  puVar11 = *(undefined8 **)(unaff_x28 + 0x5e0);
  plVar10 = *(long **)(unaff_x26 + 0xe70);
  puVar12 = *(undefined8 **)(unaff_x29 + 0x5e8);
  puVar9 = *(undefined8 **)(unaff_x25 + 0x5c8);
  iVar7 = 0;
  lVar6 = 0x7fffffffffffffff;
  do {
    if (*(int *)(param_1 + 0x18) <= iVar7) {
      if (*(int *)(param_1 + 0x18) < 1) goto LAB_01db5c38;
      iVar7 = 0;
      goto LAB_01db5b9c;
    }
    lVar4 = FUN_017d2d60(param_1,iVar7,*puVar11);
    if (lVar4 == 0) break;
    if (*(char *)(lVar4 + 0x41) == '\0') {
      lVar8 = *(long *)(lVar4 + 0x38);
      if (lVar8 <= unaff_x21) {
        FUN_01db5fd4(lVar4,lVar4);
        lVar8 = *(long *)(lVar4 + 0x38);
      }
      if (*(int *)(*plVar10 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      lVar6 = FUN_01d4b068(lVar6,lVar8,0);
      if ((unaff_x21 < *(long *)(lVar4 + 0x38)) && (*(long *)(lVar4 + 0x38) != 0x7fffffffffffffff))
      {
        *(undefined1 *)(lVar4 + 0x41) = 0;
      }
    }
    param_1 = *(long *)(unaff_x19 + 0x18);
    iVar7 = iVar7 + 1;
  } while (param_1 != 0);
LAB_01db5d34:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
  while (iVar7 = iVar7 + 1, iVar7 < *(int *)(param_1 + 0x18)) {
LAB_01db5b9c:
    lVar4 = FUN_017d2d60(param_1,iVar7,*puVar11);
    if (lVar4 == 0) goto LAB_01db5d34;
    if (*(char *)(lVar4 + 0x41) == '\0') {
      param_1 = *(long *)(unaff_x19 + 0x18);
      if (param_1 == 0) goto LAB_01db5d34;
    }
    else {
      *(undefined1 *)(lVar4 + 0x42) = 0;
      thunk_FUN_00ffe618();
      lVar4 = *(long *)(unaff_x19 + 0x18);
      *(undefined1 *)(unaff_x19 + 0x10) = 1;
      if (lVar4 == 0) goto LAB_01db5d34;
      uVar5 = FUN_017d2d60(lVar4,*(int *)(lVar4 + 0x18) + -1,*puVar11);
      FUN_017d2db4(lVar4,iVar7,uVar5,*puVar12);
      lVar4 = *(long *)(unaff_x19 + 0x18);
      if (lVar4 == 0) goto LAB_01db5d34;
      FUN_017d4638(lVar4,*(int *)(lVar4 + 0x18) + -1,*puVar9);
      param_1 = *(long *)(unaff_x19 + 0x18);
      if (param_1 == 0) goto LAB_01db5d34;
      if (*(int *)(param_1 + 0x18) == 0) break;
      iVar7 = iVar7 + -1;
    }
  }
LAB_01db5c38:
  cVar1 = *(char *)(unaff_x19 + 0x10);
  thunk_FUN_00ffe618();
  if (cVar1 != '\0') {
    lVar4 = *(long *)(unaff_x19 + 0x18);
    plVar10 = (long *)thunk_FUN_0103fd0c(*(undefined8 *)PTR_DAT_0235a5f0);
    uVar5 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0235a5c0);
    if ((plVar10 == (long *)0x0) ||
       (FUN_01359ba8(uVar5,plVar10,*(undefined8 *)(*plVar10 + 400),0), lVar4 == 0))
    goto LAB_01db5d34;
    FUN_017d4928(lVar4,uVar5,*(undefined8 *)PTR_DAT_0235a5d0);
    thunk_FUN_00ffe618();
    *(undefined1 *)(unaff_x19 + 0x10) = 0;
  }
  *(long *)(unaff_x19 + 0x20) = lVar6;
  if (lVar6 == 0x7fffffffffffffff) {
    uVar3 = 0xffffffff;
  }
  else {
    lVar4 = thunk_FUN_01027094();
    if (lVar6 - lVar4 < 0x138800000000) {
      auVar2 = SEXT816(lVar6 - lVar4) * SEXT816(0x346dc5d63886594b);
      uVar3 = (int)(auVar2._8_8_ >> 0xb) - (auVar2._12_4_ >> 0x1f);
      uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
    }
    else {
      uVar3 = 0x7ffffffe;
    }
  }
  return uVar3;
}


