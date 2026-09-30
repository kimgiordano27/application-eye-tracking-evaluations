/*
FUNCTION_NAME: OVRManager$$get_suggestedCpuPerfLevel
ENTRY_POINT: 0745c438
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_suggestedCpuPerfLevel(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *plVar4;
  long unaff_x21;
  undefined8 uVar5;
  
  FUN_03d2d2b0(*(undefined8 *)(param_1 + 0xa38));
  *(undefined1 *)(unaff_x21 + 0x7e7) = 1;
  plVar4 = (long *)(unaff_x19 + 0x68);
  lVar2 = FUN_071bfe60(*plVar4);
  puVar1 = PTR_StringLiteral_51754_09222a38;
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)PTR_StringLiteral_51754_09222a38;
                    /* try { // try from 0745c470 to 0755c477 has its CatchHandler @ 0745c4a4 */
    lVar3 = thunk_FUN_03d2ee44(lVar2,uVar5);
    if (lVar3 != 0) {
                    /* try { // try from 0745c478 to 0755c47b has its CatchHandler @ 0745c214 */
      *plVar4 = lVar3;
                    /* try { // try from 0745c47c to 0755c47f has its CatchHandler @ 0745c488 */
      uVar5 = *(undefined8 *)puVar1;
                    /* try { // try from 0745c480 to 0755c4bb has its CatchHandler @ 0745c214 */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0745c47c with catch @ 0745c488
                        */
      lVar3 = thunk_FUN_03d2ee44(lVar2,uVar5);
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0745c3c0 with catch @ 0745c48c
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0745c3d4 with catch @ 0745c490
                        */
      if (lVar3 != 0) goto LAB_0745c4a8;
    }
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0745c3c4 with catch @ 0745c494
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0745c3ac with catch @ 0745c498
                        */
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0745c34c with catch @ 0745c49c
                        */
    FUN_03d2d8e4(lVar2,uVar5);
  }
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0745c2f0 with catch @ 0745c4a0
                        */
  lVar3 = 0;
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0745c470 with catch @ 0745c4a4
                        */
  *plVar4 = 0;
LAB_0745c4a8:
  thunk_FUN_03d1023c(plVar4,lVar3);
  return;
}


