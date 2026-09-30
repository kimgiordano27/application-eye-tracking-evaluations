/*
FUNCTION_NAME: OVRPlugin.Sizef$$.cctor
ENTRY_POINT: 01f8f3a4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01f8f4f4) */

undefined8 OVRPlugin_Sizef___cctor(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  char cStack000000000000000c;
  
  thunk_FUN_01279b34(*(undefined8 *)(param_1 + 0xaa0));
  *(undefined1 *)(unaff_x21 + 0xee2) = 1;
  cStack000000000000000c = '\0';
  FUN_01edc21c(0);
                    /* try { // try from 01f8f3cc to 0208f3cf has its CatchHandler @ 01f8f490 */
  FUN_01fc6790(*(undefined8 *)(unaff_x19 + 0x18),&stack0x0000000c,0);
                    /* try { // try from 01f8f3d0 to 0208f3d3 has its CatchHandler @ 01f8f48c */
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
                    /* try { // try from 01f8f3d4 to 0208f3d7 has its CatchHandler @ 01f8f478 */
  uVar1 = *(uint *)(unaff_x20 + 0x18);
                    /* try { // try from 01f8f3d8 to 0208f3db has its CatchHandler @ 01f8f468 */
  if ((int)uVar1 < 0) {
    uVar7 = thunk_FUN_01279b34(PTR_DAT_027c1a78);
    uVar7 = FUN_01f942e0(uVar7,0);
    thunk_FUN_01279b34(PTR_DAT_027b4020);
    uVar3 = thunk_FUN_0124bba8();
    FUN_01f68e18(uVar3,uVar7,0);
    uVar7 = thunk_FUN_01279b34(PTR_DAT_027c1aa8);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar3,uVar7);
  }
                    /* try { // try from 01f8f3dc to 0208f3df has its CatchHandler @ 01f8f484 */
                    /* try { // try from 01f8f3e0 to 0208f3e3 has its CatchHandler @ 01f8f498 */
  plVar4 = (long *)(unaff_x19 + 0x10);
  lVar6 = *plVar4;
                    /* try { // try from 01f8f3e4 to 0208f3e7 has its CatchHandler @ 01f8f484 */
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
                    /* try { // try from 01f8f3e8 to 0208f3eb has its CatchHandler @ 01f8f498 */
  if (*(int *)(lVar6 + 0x18) <= (int)uVar1) {
    if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    lVar6 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    lVar6 = FUN_01230af8(*(undefined8 *)PTR_DAT_027c1a68,*(undefined4 *)(lVar6 + 0x18));
    lVar2 = *plVar4;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    FUN_01f8ac34(lVar2,lVar6,*(undefined4 *)(lVar2 + 0x18));
    *plVar4 = lVar6;
    thunk_FUN_01286abc(plVar4,lVar6);
    lVar6 = *plVar4;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
  }
  if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca8();
  }
  plVar5 = (long *)(lVar6 + (ulong)uVar1 * 8 + 0x20);
  if (*plVar5 == 0) {
    uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
    lVar2 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c1aa0);
    FUN_01fab77c(lVar2,0);
    *(undefined8 *)(lVar2 + 0x18) = uVar7;
    if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
    *plVar5 = lVar2;
    thunk_FUN_01286abc(plVar5,lVar2);
    lVar6 = *plVar4;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
  }
  if (uVar1 < *(uint *)(lVar6 + 0x18)) {
    uVar7 = *(undefined8 *)(lVar6 + (ulong)uVar1 * 8 + 0x20);
    if (cStack000000000000000c != '\0') {
      thunk_FUN_0125a7c4(*(undefined8 *)(unaff_x19 + 0x18),0);
    }
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


