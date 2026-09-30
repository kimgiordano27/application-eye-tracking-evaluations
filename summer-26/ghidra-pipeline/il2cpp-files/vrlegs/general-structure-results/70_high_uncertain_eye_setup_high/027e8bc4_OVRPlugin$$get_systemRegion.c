/*
FUNCTION_NAME: OVRPlugin$$get_systemRegion
ENTRY_POINT: 027e8bc4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__get_systemRegion(long param_1)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x19;
  long unaff_x20;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  undefined1 uStack0000000000000008;
  undefined7 uStack0000000000000009;
  
  FUN_01ab69ac(*(undefined8 *)(param_1 + 0x308));
  FUN_01ab69ac(PTR_DAT_03cfd310);
  FUN_01ab69ac(PTR_DAT_03cfd318);
  FUN_01ab69ac(PTR_DAT_03cbdee0);
  FUN_01ab69ac(PTR_DAT_03cfd320);
  *(undefined1 *)(unaff_x20 + 0xf3) = 1;
  puVar4 = PTR_DAT_03cfd320;
  puVar3 = PTR_DAT_03cfd300;
  lVar8 = thunk_FUN_01a4a3e0();
  cVar1 = *(char *)(unaff_x19 + 0x10);
  thunk_FUN_01a4b338();
  if (cVar1 != '\0') {
    lVar10 = *(long *)(unaff_x19 + 0x18);
    uStack0000000000000008 = 0;
    uVar9 = thunk_FUN_01a89a98(*(undefined8 *)puVar4,&stack0x00000008);
    if (lVar10 == 0) goto LAB_027e8e9c;
    FUN_02219450(lVar10,uVar9,*(undefined8 *)puVar3);
    thunk_FUN_01a4b338();
    *(undefined1 *)(unaff_x19 + 0x10) = 0;
  }
  puVar6 = PTR_DAT_03cfd318;
  puVar5 = PTR_DAT_03cfd310;
  puVar4 = PTR_DAT_03cfd2f8;
  puVar3 = PTR_DAT_03cbdee0;
  lVar10 = *(long *)(unaff_x19 + 0x18);
  if (lVar10 != 0) {
    iVar12 = 0;
    lVar11 = 0x7fffffffffffffff;
    do {
      if (*(int *)(lVar10 + 0x18) <= iVar12) {
        if (*(int *)(lVar10 + 0x18) < 1) goto LAB_027e8dd4;
        iVar12 = 0;
        goto LAB_027e8d2c;
      }
      uVar9 = FUN_02215a88(lVar10,iVar12,&stack0x00000008,*(undefined8 *)puVar5);
      lVar10 = CONCAT71(uStack0000000000000009,uStack0000000000000008);
      if (lVar10 == 0) break;
      if (*(char *)(lVar10 + 0x41) == '\0') {
        lVar13 = *(long *)(lVar10 + 0x38);
        if (lVar13 <= lVar8) {
          FUN_027e90ec(uVar9,lVar10);
          lVar13 = *(long *)(lVar10 + 0x38);
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        lVar11 = FUN_0276c220(lVar11,lVar13,0);
        if ((lVar8 < *(long *)(lVar10 + 0x38)) && (*(long *)(lVar10 + 0x38) != 0x7fffffffffffffff))
        {
          *(undefined1 *)(lVar10 + 0x41) = 0;
        }
      }
      lVar10 = *(long *)(unaff_x19 + 0x18);
      iVar12 = iVar12 + 1;
    } while (lVar10 != 0);
  }
LAB_027e8e9c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
  while (iVar12 = iVar12 + 1, iVar12 < *(int *)(lVar10 + 0x18)) {
LAB_027e8d2c:
    FUN_02215a88(lVar10,iVar12,&stack0x00000008,*(undefined8 *)puVar5);
    lVar8 = CONCAT71(uStack0000000000000009,uStack0000000000000008);
    if (lVar8 == 0) goto LAB_027e8e9c;
    if (*(char *)(lVar8 + 0x41) == '\0') {
      lVar10 = *(long *)(unaff_x19 + 0x18);
      if (lVar10 == 0) goto LAB_027e8e9c;
    }
    else {
      *(undefined1 *)(lVar8 + 0x42) = 0;
      thunk_FUN_01a4b338();
      lVar8 = *(long *)(unaff_x19 + 0x18);
      *(undefined1 *)(unaff_x19 + 0x10) = 1;
      if (lVar8 == 0) goto LAB_027e8e9c;
      FUN_02215a88(lVar8,*(int *)(lVar8 + 0x18) + -1,&stack0x00000008,*(undefined8 *)puVar5);
      FUN_02215b6c(lVar8,iVar12,CONCAT71(uStack0000000000000009,uStack0000000000000008),
                   *(undefined8 *)puVar6);
      lVar8 = *(long *)(unaff_x19 + 0x18);
      if (lVar8 == 0) goto LAB_027e8e9c;
      FUN_022190f4(lVar8,*(int *)(lVar8 + 0x18) + -1,*(undefined8 *)puVar4);
      lVar10 = *(long *)(unaff_x19 + 0x18);
      if (lVar10 == 0) goto LAB_027e8e9c;
      if (*(int *)(lVar10 + 0x18) == 0) break;
      iVar12 = iVar12 + -1;
    }
  }
LAB_027e8dd4:
  cVar1 = *(char *)(unaff_x19 + 0x10);
  thunk_FUN_01a4b338();
  if (cVar1 != '\0') {
    lVar8 = *(long *)(unaff_x19 + 0x18);
    uStack0000000000000008 = 0;
    uVar9 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cfd320,&stack0x00000008);
    if (lVar8 == 0) goto LAB_027e8e9c;
    FUN_02219450(lVar8,uVar9,*(undefined8 *)PTR_DAT_03cfd300);
    thunk_FUN_01a4b338();
    *(undefined1 *)(unaff_x19 + 0x10) = 0;
  }
  *(long *)(unaff_x19 + 0x20) = lVar11;
  if (lVar11 == 0x7fffffffffffffff) {
    uVar7 = 0xffffffff;
  }
  else {
    lVar8 = thunk_FUN_01a4a3e0();
    if (lVar11 - lVar8 < 0x138800000000) {
      auVar2 = SEXT816(lVar11 - lVar8) * SEXT816(0x346dc5d63886594b);
      uVar7 = (int)(auVar2._8_8_ >> 0xb) - (auVar2._12_4_ >> 0x1f);
      uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
    }
    else {
      uVar7 = 0x7ffffffe;
    }
  }
  return uVar7;
}


