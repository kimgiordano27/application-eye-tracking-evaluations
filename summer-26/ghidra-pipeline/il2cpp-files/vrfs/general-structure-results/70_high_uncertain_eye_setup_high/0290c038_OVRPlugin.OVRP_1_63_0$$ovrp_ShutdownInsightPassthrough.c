/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_ShutdownInsightPassthrough
ENTRY_POINT: 0290c038
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_63_0__ovrp_ShutdownInsightPassthrough(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long unaff_x20;
  
  thunk_FUN_0159f088(*(undefined8 *)(param_1 + 0x688));
  thunk_FUN_0159f088(PTR_DAT_06e406b0);
  *(undefined1 *)(unaff_x19 + 0xcce) = 1;
  puVar1 = PTR_DAT_06da5688;
  plVar7 = (long *)(unaff_x20 + 0x18);
  if (*plVar7 == 0) {
    plVar2 = (long *)thunk_FUN_015d0480(*(undefined8 *)(unaff_x20 + 0x10),
                                        *(undefined8 *)PTR_DAT_06da5688);
                    /* try { // try from 0290c074 to 02a0c0c7 has its CatchHandler @ 0290c074
                       catch() { ... } // from try @ 0290c074 with catch @ 0290c074
                       catch() { ... } // from try @ 0290c12c with catch @ 0290c074
                       catch() { ... } // from try @ 0290c15c with catch @ 0290c074
                       catch() { ... } // from try @ 0290c1d8 with catch @ 0290c074 */
    if (plVar2 == (long *)0x0) {
      lVar4 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e406b0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 0290c0c8 with catch @ 0290c12c
                       try { // try from 0290c12c to 02a0c143 has its CatchHandler @ 0290c074 */
        FUN_0160eeb4();
      }
      FUN_02d76b34(lVar4,0);
      FUN_01600498(plVar7,lVar4,0);
    }
    else {
      lVar4 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_0290c100;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_015c2a80(plVar2,*(long *)puVar1,2);
LAB_0290c100:
      lVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      *plVar7 = lVar4;
      thunk_FUN_01656ef8(plVar7,lVar4);
    }
  }
  return *plVar7;
}


