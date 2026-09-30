/*
FUNCTION_NAME: OVRPlugin$$GetNodeOrientationTracked
ENTRY_POINT: 01d7d670
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodeOrientationTracked(void)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  int unaff_w19;
  long unaff_x20;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  puVar4 = PTR_DAT_023520f0;
  puVar3 = PTR_DAT_0234bc58;
  lVar6 = FUN_01ca1f10();
  plVar11 = (long *)(unaff_x20 + 0x10);
  *plVar11 = lVar6;
  thunk_FUN_0106e12c(plVar11,lVar6);
  uVar7 = FUN_01ca1f10();
  *(undefined8 *)(unaff_x20 + 0x18) = uVar7;
  thunk_FUN_0106e12c();
  uVar7 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  FUN_01d5e86c(uVar7,0);
  lVar6 = System_ValueType__GetHashCode();
  puVar3 = PTR_DAT_0234c3b0;
  if (lVar6 == 0) {
    lVar8 = 0;
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
  }
  else {
    uVar7 = *(undefined8 *)PTR_DAT_0234c3b0;
    lVar8 = thunk_FUN_0103ffe0(lVar6,uVar7);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0(lVar6,uVar7);
    }
    *(long *)(unaff_x20 + 0x20) = lVar8;
    uVar7 = *(undefined8 *)puVar3;
    lVar8 = thunk_FUN_0103ffe0(lVar6,uVar7);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0(lVar6,uVar7);
    }
  }
  puVar3 = PTR_DAT_02358f60;
  thunk_FUN_0106e12c(unaff_x20 + 0x20,lVar8);
  FUN_01d5e86c(*(undefined8 *)puVar3,0);
  plVar9 = (long *)FUN_01c9f7dc();
  if (plVar9 == (long *)0x0) {
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
LAB_01d7d814:
    puVar3 = PTR_DAT_02352ac8;
    thunk_FUN_0106e12c(unaff_x20 + 0x28,plVar9);
    uVar7 = FUN_01ca1f10();
    *(undefined8 *)(unaff_x20 + 0x30) = uVar7;
    thunk_FUN_0106e12c();
    uVar7 = FUN_01ca1f10();
    puVar12 = (undefined8 *)(unaff_x20 + 0x40);
    *puVar12 = uVar7;
    thunk_FUN_0106e12c(puVar12,uVar7);
    uVar7 = FUN_01ca1f10();
    puVar13 = (undefined8 *)(unaff_x20 + 0x48);
    *puVar13 = uVar7;
    thunk_FUN_0106e12c(puVar13,uVar7);
    uVar5 = FUN_01ca1ab4();
    *(undefined4 *)(unaff_x20 + 0x50) = uVar5;
    uVar5 = FUN_01ca1ab4();
    *(undefined4 *)(unaff_x20 + 0x60) = uVar5;
    uVar7 = FUN_01ca1f10();
    *(undefined8 *)(unaff_x20 + 0x68) = uVar7;
    thunk_FUN_0106e12c();
    FUN_01d5e86c(*(undefined8 *)puVar3,0);
    plVar9 = (long *)System_ValueType__GetHashCode();
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)0x0;
      *(undefined8 *)(unaff_x20 + 0x70) = 0;
    }
    else {
      lVar6 = *(long *)PTR_DAT_02358f58;
      plVar1 = plVar9;
      if (*plVar9 != lVar6) {
        plVar1 = (long *)0x0;
      }
      *(long **)(unaff_x20 + 0x70) = plVar1;
      if (*plVar9 != lVar6) {
        plVar9 = (long *)0x0;
      }
    }
    thunk_FUN_0106e12c(unaff_x20 + 0x70,plVar9);
    if ((*plVar11 != 0) && (*(int *)(unaff_x20 + 0x60) != 0)) {
      if (unaff_w19 != 0x80) {
        return;
      }
      uVar7 = FUN_01c45a74(*puVar13,*puVar12,0);
      *puVar13 = uVar7;
      thunk_FUN_0106e12c(puVar13,uVar7);
      *puVar12 = 0;
      thunk_FUN_0106e12c(puVar12,0);
      return;
    }
    uVar7 = thunk_FUN_010303a8(PTR_DAT_02353b00);
    thunk_FUN_010303a8(PTR_DAT_0234d110);
    uVar10 = thunk_FUN_010400dc();
    FUN_01c96740(uVar10,uVar7,0);
    uVar7 = thunk_FUN_010303a8(PTR_DAT_02358fb0);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar10,uVar7);
  }
  lVar6 = *(long *)PTR_DAT_0234bbd0;
  bVar2 = *(byte *)(lVar6 + 0x130);
  if ((bVar2 <= *(byte *)(*plVar9 + 0x130)) &&
     (*(long *)(*(long *)(*plVar9 + 200) + ((ulong)bVar2 - 1) * 8) == lVar6)) {
    *(long **)(unaff_x20 + 0x28) = plVar9;
    if ((bVar2 <= *(byte *)(*plVar9 + 0x130)) &&
       (*(long *)(*(long *)(*plVar9 + 200) + ((ulong)bVar2 - 1) * 8) == lVar6)) goto LAB_01d7d814;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc8d0(plVar9);
}


