/*
FUNCTION_NAME: OVRPlugin.OVRP_1_107_0$$.cctor
ENTRY_POINT: 090d8630
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_107_0___cctor(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x21;
  float fVar7;
  float fVar8;
  
  uVar1 = FUN_0a17b398();
  fVar7 = 1.0;
  if ((uVar1 & 1) != 0) {
                    /* try { // try from 090d8650 to 091d8677 has its CatchHandler @ 090d8a88 */
    if (((*(long *)(unaff_x19 + 0x30) == 0) ||
        (lVar2 = FUN_0a17b7e4(*(long *)(unaff_x19 + 0x30),0), lVar2 == 0)) ||
       (lVar2 = thunk_FUN_0a18aba0(lVar2,0), lVar2 == 0)) goto LAB_090d8774;
    fVar7 = (float)FUN_0a18c388(lVar2,0);
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    lVar2 = FUN_0a17b7e4(*(long *)(unaff_x19 + 0x30),0);
                    /* try { // try from 090d8684 to 091d868b has its CatchHandler @ 090d8a68 */
    plVar6 = *(long **)(unaff_x19 + 0x28);
    if (plVar6 != (long *)0x0) {
      lVar4 = *plVar6;
                    /* try { // try from 090d8694 to 091d869b has its CatchHandler @ 090d8a64 */
      uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
                    /* try { // try from 090d86b0 to 091d86b3 has its CatchHandler @ 090d8a80 */
          if (*(long *)(piVar5 + -2) == *unaff_x21) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_090d8708;
          }
                    /* try { // try from 090d86b4 to 091d8753 has its CatchHandler @ 090d82fc */
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_04980e68(plVar6,*unaff_x21,1);
LAB_090d8708:
      fVar8 = (float)(*(code *)*puVar3)(plVar6,puVar3[1]);
      if (DAT_0b31f763 == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0def8);
        DAT_0b31f763 = '\x01';
      }
      if (lVar2 != 0) {
        fVar8 = fVar8 / fVar7;
        lVar4 = *(long *)(*(long *)PTR_DAT_0ac0def8 + 0xb8);
        FUN_0a18aa1c(fVar8 * *(float *)(lVar4 + 0xc),fVar8 * *(float *)(lVar4 + 0x10),
                     fVar8 * *(float *)(lVar4 + 0x14),lVar2,0);
        return;
      }
    }
  }
LAB_090d8774:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


