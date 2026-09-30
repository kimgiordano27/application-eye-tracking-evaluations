/*
FUNCTION_NAME: OVRManager$$set_trackingOriginType
ENTRY_POINT: 0636a644
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x0636a818) */
/* WARNING: Removing unreachable block (ram,0x0636a834) */
/* WARNING: Removing unreachable block (ram,0x0636a92c) */

void OVRManager__set_trackingOriginType(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *in_x10;
  int *piVar7;
  long unaff_x19;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)in_x10[4] * 0x10 + 0x138);
      goto LAB_0636a6b8;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar3 = (undefined8 *)FUN_0377596c();
LAB_0636a6b8:
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar2 = PTR_DAT_07db52f8;
  puVar1 = PTR_DAT_07d89700;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  do {
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0636a728;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(plVar4,*(long *)puVar1,0);
LAB_0636a728:
    uVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar6 & 1) == 0) break;
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0636a784;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(plVar4,*(long *)puVar2,0);
LAB_0636a784:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
    FUN_06369b34();
  } while( true );
                    /* catch() { ... } // from try @ 0636a7fc with catch @ 0636a7a0
                       catch() { ... } // from try @ 0636a834 with catch @ 0636a7a0
                       catch() { ... } // from try @ 0636a868 with catch @ 0636a7a0
                       catch() { ... } // from try @ 0636a8e8 with catch @ 0636a7a0 */
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
                    /* try { // try from 0636a7c4 to 0646a7cb has its CatchHandler @ 0636a7fc */
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
                    /* try { // try from 0636a7cc to 0646a7eb has its CatchHandler @ 0636a804 */
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07d896f8) {
                    /* try { // try from 0636a7f8 to 0646a7fb has its CatchHandler @ 0636a800 */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 0636a7c4 with catch @ 0636a7fc
                       try { // try from 0636a7fc to 0646a81b has its CatchHandler @ 0636a7a0 */
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0636a800;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07d896f8,0);
LAB_0636a800:
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 0636a7f8 with catch @ 0636a800
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 0636a7cc with catch @ 0636a804
                        */
    (*(code *)*puVar3)(plVar4,puVar3[1]);
  }
                    /* try { // try from 0636a81c to 0646a833 has its CatchHandler @ 0636a8e0 */
  plVar4 = *(long **)(unaff_x19 + 0x10);
  if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0636a8ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x5a8))(plVar4,*(undefined8 *)(*plVar4 + 0x5b0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


