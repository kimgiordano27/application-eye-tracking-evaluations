/*
FUNCTION_NAME: OVRPlugin.OVRP_1_55_0$$.cctor
ENTRY_POINT: 01f9c714
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_55_0___cctor(void)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int unaff_w19;
  long unaff_x20;
  long *unaff_x22;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  lVar5 = thunk_FUN_0124baac();
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01f9ca74 to 0209cab3 has its CatchHandler @ 01f9ca74
                       catch() { ... } // from try @ 01f9ca74 with catch @ 01f9ca74
                       catch() { ... } // from try @ 01f9cac0 with catch @ 01f9ca74
                       catch() { ... } // from try @ 01f9caf0 with catch @ 01f9ca74
                       catch() { ... } // from try @ 01f9cb2c with catch @ 01f9ca74 */
    FUN_01230f60();
  }
  *(long *)(unaff_x20 + 0x20) = lVar5;
  lVar5 = thunk_FUN_0124baac();
  puVar3 = PTR_DAT_027c1df0;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230f60();
  }
  thunk_FUN_01286abc((long *)(unaff_x20 + 0x20),lVar5);
  FUN_01f7d8a0(*(undefined8 *)puVar3,0);
  plVar6 = (long *)FUN_01ebc848();
  if (plVar6 == (long *)0x0) {
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
LAB_01f9c800:
    puVar3 = PTR_DAT_027bbb00;
    thunk_FUN_01286abc(unaff_x20 + 0x28,plVar6);
    uVar7 = FUN_01ebed78();
    *(undefined8 *)(unaff_x20 + 0x30) = uVar7;
    thunk_FUN_01286abc();
    uVar7 = FUN_01ebed78();
    puVar9 = (undefined8 *)(unaff_x20 + 0x40);
    *puVar9 = uVar7;
    thunk_FUN_01286abc(puVar9,uVar7);
    uVar7 = FUN_01ebed78();
    puVar10 = (undefined8 *)(unaff_x20 + 0x48);
    *puVar10 = uVar7;
    thunk_FUN_01286abc(puVar10,uVar7);
    uVar4 = FUN_01ebe91c();
    *(undefined4 *)(unaff_x20 + 0x50) = uVar4;
    uVar4 = FUN_01ebe91c();
    *(undefined4 *)(unaff_x20 + 0x60) = uVar4;
    uVar7 = FUN_01ebed78();
    *(undefined8 *)(unaff_x20 + 0x68) = uVar7;
    thunk_FUN_01286abc();
    FUN_01f7d8a0(*(undefined8 *)puVar3,0);
    plVar6 = (long *)FUN_01ebc740();
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x0;
      *(undefined8 *)(unaff_x20 + 0x70) = 0;
    }
    else {
      lVar5 = *(long *)PTR_DAT_027c1de8;
      plVar1 = plVar6;
      if (*plVar6 != lVar5) {
        plVar1 = (long *)0x0;
      }
      *(long **)(unaff_x20 + 0x70) = plVar1;
      if (*plVar6 != lVar5) {
        plVar6 = (long *)0x0;
      }
    }
    thunk_FUN_01286abc(unaff_x20 + 0x70,plVar6);
    if ((*unaff_x22 != 0) && (*(int *)(unaff_x20 + 0x60) != 0)) {
      if (unaff_w19 != 0x80) {
        return;
      }
      uVar7 = FUN_01e5d260(*puVar10,*puVar9,0);
      *puVar10 = uVar7;
      thunk_FUN_01286abc(puVar10,uVar7);
      *puVar9 = 0;
      thunk_FUN_01286abc(puVar9,0);
      return;
    }
    uVar7 = thunk_FUN_01279b34(PTR_DAT_027bcb38);
    thunk_FUN_01279b34(PTR_DAT_027b5260);
    uVar8 = thunk_FUN_0124bba8();
    FUN_01eb38e0(uVar8,uVar7,0);
    uVar7 = thunk_FUN_01279b34(PTR_DAT_027c1e40);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar8,uVar7);
  }
  lVar5 = *(long *)PTR_DAT_027b1d70;
  bVar2 = *(byte *)(lVar5 + 0x130);
  if ((bVar2 <= *(byte *)(*plVar6 + 0x130)) &&
     (*(long *)(*(long *)(*plVar6 + 200) + ((ulong)bVar2 - 1) * 8) == lVar5)) {
    *(long **)(unaff_x20 + 0x28) = plVar6;
    if ((bVar2 <= *(byte *)(*plVar6 + 0x130)) &&
       (*(long *)(*(long *)(*plVar6 + 200) + ((ulong)bVar2 - 1) * 8) == lVar5)) goto LAB_01f9c800;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230f60(plVar6);
}


