/*
FUNCTION_NAME: OVRPlugin$$GetNodeOrientationValid
ENTRY_POINT: 01d7d6d4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetNodeOrientationValid(long param_1,undefined8 param_2)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  int unaff_w19;
  long unaff_x20;
  long *unaff_x22;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *unaff_x25;
  long *unaff_x26;
  
  *(undefined8 *)(param_1 + 0x18) = param_2;
  thunk_FUN_0106e12c();
  uVar9 = *unaff_x25;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  FUN_01d5e86c(uVar9,0);
  lVar5 = System_ValueType__GetHashCode();
  puVar3 = PTR_DAT_0234c3b0;
  if (lVar5 == 0) {
    lVar6 = 0;
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
  }
  else {
    uVar9 = *(undefined8 *)PTR_DAT_0234c3b0;
    lVar6 = thunk_FUN_0103ffe0(lVar5,uVar9);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0(lVar5,uVar9);
    }
    *(long *)(unaff_x20 + 0x20) = lVar6;
    uVar9 = *(undefined8 *)puVar3;
    lVar6 = thunk_FUN_0103ffe0(lVar5,uVar9);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0(lVar5,uVar9);
    }
  }
  puVar3 = PTR_DAT_02358f60;
  thunk_FUN_0106e12c(unaff_x20 + 0x20,lVar6);
  FUN_01d5e86c(*(undefined8 *)puVar3,0);
  plVar7 = (long *)FUN_01c9f7dc();
  if (plVar7 == (long *)0x0) {
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
LAB_01d7d814:
    puVar3 = PTR_DAT_02352ac8;
    thunk_FUN_0106e12c(unaff_x20 + 0x28,plVar7);
    uVar9 = FUN_01ca1f10();
    *(undefined8 *)(unaff_x20 + 0x30) = uVar9;
    thunk_FUN_0106e12c();
    uVar9 = FUN_01ca1f10();
    puVar10 = (undefined8 *)(unaff_x20 + 0x40);
    *puVar10 = uVar9;
    thunk_FUN_0106e12c(puVar10,uVar9);
    uVar9 = FUN_01ca1f10();
    puVar11 = (undefined8 *)(unaff_x20 + 0x48);
    *puVar11 = uVar9;
    thunk_FUN_0106e12c(puVar11,uVar9);
    uVar4 = FUN_01ca1ab4();
    *(undefined4 *)(unaff_x20 + 0x50) = uVar4;
    uVar4 = FUN_01ca1ab4();
    *(undefined4 *)(unaff_x20 + 0x60) = uVar4;
    uVar9 = FUN_01ca1f10();
    *(undefined8 *)(unaff_x20 + 0x68) = uVar9;
    thunk_FUN_0106e12c();
    FUN_01d5e86c(*(undefined8 *)puVar3,0);
    plVar7 = (long *)System_ValueType__GetHashCode();
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
      *(undefined8 *)(unaff_x20 + 0x70) = 0;
    }
    else {
      lVar5 = *(long *)PTR_DAT_02358f58;
      plVar1 = plVar7;
      if (*plVar7 != lVar5) {
        plVar1 = (long *)0x0;
      }
      *(long **)(unaff_x20 + 0x70) = plVar1;
      if (*plVar7 != lVar5) {
        plVar7 = (long *)0x0;
      }
    }
    thunk_FUN_0106e12c(unaff_x20 + 0x70,plVar7);
    if ((*unaff_x22 != 0) && (*(int *)(unaff_x20 + 0x60) != 0)) {
      if (unaff_w19 != 0x80) {
        return;
      }
      uVar9 = FUN_01c45a74(*puVar11,*puVar10,0);
      *puVar11 = uVar9;
      thunk_FUN_0106e12c(puVar11,uVar9);
      *puVar10 = 0;
      thunk_FUN_0106e12c(puVar10,0);
      return;
    }
    uVar9 = thunk_FUN_010303a8(PTR_DAT_02353b00);
    thunk_FUN_010303a8(PTR_DAT_0234d110);
    uVar8 = thunk_FUN_010400dc();
    FUN_01c96740(uVar8,uVar9,0);
    uVar9 = thunk_FUN_010303a8(PTR_DAT_02358fb0);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar8,uVar9);
  }
  lVar5 = *(long *)PTR_DAT_0234bbd0;
  bVar2 = *(byte *)(lVar5 + 0x130);
  if ((bVar2 <= *(byte *)(*plVar7 + 0x130)) &&
     (*(long *)(*(long *)(*plVar7 + 200) + ((ulong)bVar2 - 1) * 8) == lVar5)) {
    *(long **)(unaff_x20 + 0x28) = plVar7;
    if ((bVar2 <= *(byte *)(*plVar7 + 0x130)) &&
       (*(long *)(*(long *)(*plVar7 + 200) + ((ulong)bVar2 - 1) * 8) == lVar5)) goto LAB_01d7d814;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc8d0(plVar7);
}


