/*
FUNCTION_NAME: OVRPlugin.OVRP_1_55_0$$ovrp_GetNativeOpenXRHandles
ENTRY_POINT: 01f9c690
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_55_0__ovrp_GetNativeOpenXRHandles(void)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  int unaff_w19;
  long unaff_x20;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *unaff_x25;
  long *unaff_x26;
  
  lVar5 = FUN_01ebed78();
  plVar10 = (long *)(unaff_x20 + 0x10);
  *plVar10 = lVar5;
  thunk_FUN_01286abc(plVar10,lVar5);
  uVar6 = FUN_01ebed78();
  *(undefined8 *)(unaff_x20 + 0x18) = uVar6;
  thunk_FUN_01286abc();
  uVar6 = *unaff_x25;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  FUN_01f7d8a0(uVar6,0);
  lVar5 = FUN_01ebc740();
  puVar3 = PTR_DAT_027b3a00;
  if (lVar5 == 0) {
    lVar7 = 0;
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
  }
  else {
    uVar6 = *(undefined8 *)PTR_DAT_027b3a00;
    lVar7 = thunk_FUN_0124baac(lVar5,uVar6);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230f60(lVar5,uVar6);
    }
    *(long *)(unaff_x20 + 0x20) = lVar7;
    uVar6 = *(undefined8 *)puVar3;
    lVar7 = thunk_FUN_0124baac(lVar5,uVar6);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230f60(lVar5,uVar6);
    }
  }
  puVar3 = PTR_DAT_027c1df0;
  thunk_FUN_01286abc(unaff_x20 + 0x20,lVar7);
  FUN_01f7d8a0(*(undefined8 *)puVar3,0);
  plVar8 = (long *)FUN_01ebc848();
  if (plVar8 == (long *)0x0) {
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
LAB_01f9c800:
    puVar3 = PTR_DAT_027bbb00;
    thunk_FUN_01286abc(unaff_x20 + 0x28,plVar8);
    uVar6 = FUN_01ebed78();
    *(undefined8 *)(unaff_x20 + 0x30) = uVar6;
    thunk_FUN_01286abc();
    uVar6 = FUN_01ebed78();
    puVar11 = (undefined8 *)(unaff_x20 + 0x40);
    *puVar11 = uVar6;
    thunk_FUN_01286abc(puVar11,uVar6);
    uVar6 = FUN_01ebed78();
    puVar12 = (undefined8 *)(unaff_x20 + 0x48);
    *puVar12 = uVar6;
    thunk_FUN_01286abc(puVar12,uVar6);
    uVar4 = FUN_01ebe91c();
    *(undefined4 *)(unaff_x20 + 0x50) = uVar4;
    uVar4 = FUN_01ebe91c();
    *(undefined4 *)(unaff_x20 + 0x60) = uVar4;
    uVar6 = FUN_01ebed78();
    *(undefined8 *)(unaff_x20 + 0x68) = uVar6;
    thunk_FUN_01286abc();
    FUN_01f7d8a0(*(undefined8 *)puVar3,0);
    plVar8 = (long *)FUN_01ebc740();
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
      *(undefined8 *)(unaff_x20 + 0x70) = 0;
    }
    else {
      lVar5 = *(long *)PTR_DAT_027c1de8;
      plVar1 = plVar8;
      if (*plVar8 != lVar5) {
        plVar1 = (long *)0x0;
      }
      *(long **)(unaff_x20 + 0x70) = plVar1;
      if (*plVar8 != lVar5) {
        plVar8 = (long *)0x0;
      }
    }
    thunk_FUN_01286abc(unaff_x20 + 0x70,plVar8);
    if ((*plVar10 != 0) && (*(int *)(unaff_x20 + 0x60) != 0)) {
      if (unaff_w19 != 0x80) {
        return;
      }
      uVar6 = FUN_01e5d260(*puVar12,*puVar11,0);
      *puVar12 = uVar6;
      thunk_FUN_01286abc(puVar12,uVar6);
      *puVar11 = 0;
      thunk_FUN_01286abc(puVar11,0);
      return;
    }
    uVar6 = thunk_FUN_01279b34(PTR_DAT_027bcb38);
    thunk_FUN_01279b34(PTR_DAT_027b5260);
    uVar9 = thunk_FUN_0124bba8();
    FUN_01eb38e0(uVar9,uVar6,0);
    uVar6 = thunk_FUN_01279b34(PTR_DAT_027c1e40);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar9,uVar6);
  }
  lVar5 = *(long *)PTR_DAT_027b1d70;
  bVar2 = *(byte *)(lVar5 + 0x130);
  if ((bVar2 <= *(byte *)(*plVar8 + 0x130)) &&
     (*(long *)(*(long *)(*plVar8 + 200) + ((ulong)bVar2 - 1) * 8) == lVar5)) {
    *(long **)(unaff_x20 + 0x28) = plVar8;
    if ((bVar2 <= *(byte *)(*plVar8 + 0x130)) &&
       (*(long *)(*(long *)(*plVar8 + 200) + ((ulong)bVar2 - 1) * 8) == lVar5)) goto LAB_01f9c800;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230f60(plVar8);
}


