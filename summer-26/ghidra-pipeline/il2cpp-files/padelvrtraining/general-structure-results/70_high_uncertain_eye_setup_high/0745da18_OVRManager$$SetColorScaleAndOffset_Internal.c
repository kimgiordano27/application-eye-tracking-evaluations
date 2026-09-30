/*
FUNCTION_NAME: OVRManager$$SetColorScaleAndOffset_Internal
ENTRY_POINT: 0745da18
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRManager__SetColorScaleAndOffset_Internal(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  float fVar8;
  float fVar9;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  FUN_03d2d2b0();
  *(undefined1 *)(unaff_x20 + 0x2c7) = 1;
  puVar3 = *(undefined4 **)(*unaff_x22 + 0xb8);
  fVar8 = (float)FUN_03e64c4c(*puVar3,puVar3[1],puVar3[2],in_stack_00000010._4_4_,
                              uStack0000000000000018,uStack000000000000001c,0);
  plVar7 = *(long **)(unaff_x19 + 0x28);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar4 = *plVar7;
                    /* try { // try from 0745da58 to 0755dabb has its CatchHandler @ 0745da58
                       catch() { ... } // from try @ 0745da58 with catch @ 0745da58
                       catch() { ... } // from try @ 0745db64 with catch @ 0745da58
                       catch() { ... } // from try @ 0745db90 with catch @ 0745da58
                       catch() { ... } // from try @ 0745dbd0 with catch @ 0745da58
                       catch() { ... } // from try @ 0745dc28 with catch @ 0745da58 */
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x21) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0745daa4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_03d8f370(plVar7,*unaff_x21,0);
LAB_0745daa4:
  iVar1 = (*(code *)*puVar2)(plVar7,puVar2[1]);
  fVar9 = -fVar8;
                    /* try { // try from 0745dabc to 0755dabf has its CatchHandler @ 0745db98 */
  if (iVar1 != 1) {
    fVar9 = fVar8;
  }
  if (fVar9 < -70.0) {
                    /* try { // try from 0745dacc to 0755dad3 has its CatchHandler @ 0745dba0 */
    fVar9 = fVar9 + 360.0;
  }
  return fVar9;
}


