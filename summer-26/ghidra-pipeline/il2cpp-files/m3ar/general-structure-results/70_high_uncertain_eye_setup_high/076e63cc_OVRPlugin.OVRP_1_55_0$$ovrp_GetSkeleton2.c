/*
FUNCTION_NAME: OVRPlugin.OVRP_1_55_0$$ovrp_GetSkeleton2
ENTRY_POINT: 076e63cc
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_55_0__ovrp_GetSkeleton2(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  undefined4 uVar7;
  undefined4 unaff_s11;
  
  plVar6 = *(long **)(unaff_x19 + 0x48);
  lVar2 = *(long *)(unaff_x19 + 0x28);
  if (plVar6 == (long *)0x0) {
    uVar7 = 0;
  }
  else {
    lVar3 = *plVar6;
                    /* try { // try from 076e63e8 to 077e63f7 has its CatchHandler @ 076e63f8 */
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
                    /* catch() { ... } // from try @ 076e6350 with catch @ 076e63f8
                       catch() { ... } // from try @ 076e63e8 with catch @ 076e63f8 */
                    /* try { // try from 076e63fc to 077e63ff has its CatchHandler @ 076e6408 */
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
                    /* try { // try from 076e6400 to 077e640b has its CatchHandler @ 076e604c */
                    /* catch() { ... } // from try @ 076e63fc with catch @ 076e6408 */
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08fab668) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_076e6440;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0406ae20(plVar6,*(long *)PTR_DAT_08fab668,0);
LAB_076e6440:
    uVar7 = (*(code *)*puVar1)(plVar6,puVar1[1]);
  }
  if (lVar2 != 0) {
    lVar3 = *(long *)(unaff_x19 + 0x28);
    *(undefined4 *)(lVar2 + 0x78) = uVar7;
    if (lVar3 != 0) {
      FUN_076502cc(lVar3,*(undefined8 *)(unaff_x19 + 0x68),0,0);
      FUN_076e6b00(unaff_s11);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


