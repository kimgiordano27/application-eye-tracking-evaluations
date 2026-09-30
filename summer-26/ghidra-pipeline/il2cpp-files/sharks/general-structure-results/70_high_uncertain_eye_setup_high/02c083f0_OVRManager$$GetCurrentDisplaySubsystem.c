/*
FUNCTION_NAME: OVRManager$$GetCurrentDisplaySubsystem
ENTRY_POINT: 02c083f0
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__GetCurrentDisplaySubsystem(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *unaff_x19;
  uint unaff_w21;
  long lVar7;
  uint unaff_w22;
  long *unaff_x23;
  long lVar8;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  char cStack0000000000000020;
  char cStack0000000000000024;
  undefined8 in_stack_00000028;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  uStack0000000000000010 = 0;
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
                    /* try { // try from 02c0841c to 02d08443 has its CatchHandler @ 02c08458 */
  FUN_02c06b78(unaff_w21,&stack0x00000028,unaff_w22 & 1,(long)&stack0x00000020 + 4,&stack0x00000020,
               &stack0x0000001c);
  lVar5 = FUN_02c0853c();
  if (lVar5 != 0) {
                    /* try { // try from 02c08444 to 02d0844f has its CatchHandler @ 02c07f70 */
                    /* try { // try from 02c08450 to 02d08457 has its CatchHandler @ 02c08458 */
    FUN_0264f5dc();
    cVar1 = cStack0000000000000020;
    uVar3 = *(uint *)(lVar5 + 0x18);
                    /* catch() { ... } // from try @ 02c08378 with catch @ 02c08458
                       catch() { ... } // from try @ 02c0841c with catch @ 02c08458
                       catch() { ... } // from try @ 02c08450 with catch @ 02c08458 */
    if (0 < (int)uVar3) {
      lVar8 = 0;
      do {
        if (uVar3 <= (uint)lVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        lVar7 = *(long *)(lVar5 + 0x20 + lVar8 * 8);
        if (lVar7 == 0) goto LAB_02c08538;
        uVar3 = thunk_FUN_02b1a8f4(lVar7,0);
        uVar4 = thunk_FUN_02b1a8f4(lVar7,0);
        uVar2 = in_stack_00000028;
        if ((uVar3 & (unaff_w21 ^ 2)) == uVar4) {
          if (cStack0000000000000024 != '\0') {
            if (*(int *)(*unaff_x23 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            uVar6 = FUN_02c06d3c(lVar7,uVar2,cVar1 != '\0');
            if ((uVar6 & 1) == 0) goto LAB_02c084f4;
          }
          FUN_0264f80c();
        }
LAB_02c084f4:
        uVar3 = *(uint *)(lVar5 + 0x18);
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < (int)uVar3);
    }
    unaff_x19[2] = uStack0000000000000010;
    unaff_x19[1] = uStack0000000000000008;
    *unaff_x19 = uStack0000000000000000;
    return;
  }
LAB_02c08538:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


