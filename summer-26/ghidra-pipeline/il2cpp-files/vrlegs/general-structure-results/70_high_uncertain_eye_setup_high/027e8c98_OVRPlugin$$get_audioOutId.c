/*
FUNCTION_NAME: OVRPlugin$$get_audioOutId
ENTRY_POINT: 027e8c98
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__get_audioOutId(long param_1)

{
  char cVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  int iVar5;
  long unaff_x21;
  int unaff_w22;
  long lVar6;
  long lVar7;
  long *unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 uStack0000000000000008;
  undefined7 uStack0000000000000009;
  
  do {
    uVar4 = FUN_02215a88(param_1,unaff_w22,&stack0x00000008,*unaff_x27);
    lVar6 = CONCAT71(uStack0000000000000009,uStack0000000000000008);
    if (lVar6 == 0) goto LAB_027e8e9c;
    if (*(char *)(lVar6 + 0x41) == '\0') {
      lVar7 = *(long *)(lVar6 + 0x38);
      if (lVar7 <= unaff_x21) {
        FUN_027e90ec(uVar4,lVar6);
        lVar7 = *(long *)(lVar6 + 0x38);
      }
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      unaff_x20 = FUN_0276c220(unaff_x20,lVar7,0);
      if ((unaff_x21 < *(long *)(lVar6 + 0x38)) && (*(long *)(lVar6 + 0x38) != unaff_x26)) {
        *(undefined1 *)(lVar6 + 0x41) = 0;
      }
    }
    param_1 = *(long *)(unaff_x19 + 0x18);
    unaff_w22 = unaff_w22 + 1;
    if (param_1 == 0) goto LAB_027e8e9c;
  } while (unaff_w22 < *(int *)(param_1 + 0x18));
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar5 = 0;
    do {
      FUN_02215a88(param_1,iVar5,&stack0x00000008,*unaff_x27);
      lVar6 = CONCAT71(uStack0000000000000009,uStack0000000000000008);
      if (lVar6 == 0) goto LAB_027e8e9c;
      if (*(char *)(lVar6 + 0x41) == '\0') {
        param_1 = *(long *)(unaff_x19 + 0x18);
        if (param_1 == 0) goto LAB_027e8e9c;
      }
      else {
        *(undefined1 *)(lVar6 + 0x42) = 0;
        thunk_FUN_01a4b338();
        lVar6 = *(long *)(unaff_x19 + 0x18);
        *(undefined1 *)(unaff_x19 + 0x10) = 1;
        if (lVar6 == 0) goto LAB_027e8e9c;
        FUN_02215a88(lVar6,*(int *)(lVar6 + 0x18) + -1,&stack0x00000008,*unaff_x27);
        FUN_02215b6c(lVar6,iVar5,CONCAT71(uStack0000000000000009,uStack0000000000000008),*unaff_x28)
        ;
        lVar6 = *(long *)(unaff_x19 + 0x18);
        if (lVar6 == 0) goto LAB_027e8e9c;
        FUN_022190f4(lVar6,*(int *)(lVar6 + 0x18) + -1,*unaff_x29);
        param_1 = *(long *)(unaff_x19 + 0x18);
        if (param_1 == 0) goto LAB_027e8e9c;
        if (*(int *)(param_1 + 0x18) == 0) break;
        iVar5 = iVar5 + -1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x18));
  }
  cVar1 = *(char *)(unaff_x19 + 0x10);
  thunk_FUN_01a4b338();
  if (cVar1 != '\0') {
    lVar6 = *(long *)(unaff_x19 + 0x18);
    uStack0000000000000008 = 0;
    uVar4 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cfd320,&stack0x00000008);
    if (lVar6 == 0) {
LAB_027e8e9c:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02219450(lVar6,uVar4,*(undefined8 *)PTR_DAT_03cfd300);
    thunk_FUN_01a4b338();
    *(undefined1 *)(unaff_x19 + 0x10) = 0;
  }
  *(long *)(unaff_x19 + 0x20) = unaff_x20;
  if (unaff_x20 == 0x7fffffffffffffff) {
    uVar3 = 0xffffffff;
  }
  else {
    lVar6 = thunk_FUN_01a4a3e0();
    if (unaff_x20 - lVar6 < 0x138800000000) {
      auVar2 = SEXT816(unaff_x20 - lVar6) * SEXT816(0x346dc5d63886594b);
      uVar3 = (int)(auVar2._8_8_ >> 0xb) - (auVar2._12_4_ >> 0x1f);
      uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
    }
    else {
      uVar3 = 0x7ffffffe;
    }
  }
  return uVar3;
}


