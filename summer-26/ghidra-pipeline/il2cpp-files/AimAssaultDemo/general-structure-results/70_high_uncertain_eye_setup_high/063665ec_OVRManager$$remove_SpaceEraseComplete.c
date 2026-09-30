/*
FUNCTION_NAME: OVRManager$$remove_SpaceEraseComplete
ENTRY_POINT: 063665ec
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__remove_SpaceEraseComplete(long *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  int *piVar3;
  long unaff_x19;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  if (*(int *)(*param_1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
                    /* try { // try from 063665fc to 06466737 has its CatchHandler @ 063665fc
                       catch() { ... } // from try @ 063665fc with catch @ 063665fc
                       catch() { ... } // from try @ 0636685c with catch @ 063665fc
                       catch() { ... } // from try @ 063669a0 with catch @ 063665fc
                       catch() { ... } // from try @ 063669d0 with catch @ 063665fc
                       catch() { ... } // from try @ 06366a04 with catch @ 063665fc
                       catch() { ... } // from try @ 06366a84 with catch @ 063665fc */
  uVar1 = FUN_06331088();
  if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70(*(long *)(PTR_DAT_07d86548 + 0xe0));
  }
  uVar2 = FUN_0625b9c4(uVar1,0,0);
  if ((uVar2 & 1) != 0) {
    lVar4 = *(long *)(unaff_x19 + 0x30);
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db52a0);
    FUN_049ce6c0(uVar1,*(undefined8 *)PTR_DAT_07db52a8);
    if (lVar4 == 0) goto LAB_06366490;
    puVar5 = (undefined8 *)(lVar4 + 0x98);
    *puVar5 = uVar1;
    thunk_FUN_037aeb94(puVar5,uVar1);
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_06366490;
    plVar6 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0x98);
    uVar1 = FUN_06365b68();
    if (plVar6 == (long *)0x0) goto LAB_06366490;
    lVar4 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar3 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == *(long *)PTR_DAT_07db52e0) {
          puVar5 = (undefined8 *)(lVar4 + (long)(*piVar3 + 2) * 0x10 + 0x138);
          goto LAB_06366754;
        }
        uVar2 = uVar2 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar2 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(plVar6,*(long *)PTR_DAT_07db52e0,2);
LAB_06366754:
    (*(code *)*puVar5)(plVar6,uVar1,puVar5[1]);
  }
  lVar4 = FUN_0636579c();
  if (lVar4 != 0) {
    return *(undefined8 *)(lVar4 + 0x18);
  }
LAB_06366490:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


