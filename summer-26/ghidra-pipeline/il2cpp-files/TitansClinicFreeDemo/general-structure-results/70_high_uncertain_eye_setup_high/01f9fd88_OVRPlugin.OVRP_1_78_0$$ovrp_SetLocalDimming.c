/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_SetLocalDimming
ENTRY_POINT: 01f9fd88
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_78_0__ovrp_SetLocalDimming(void)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *unaff_x19;
  uint unaff_w21;
  long lVar8;
  uint unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  long lVar9;
  undefined4 uStack000000000000001c;
  char in_stack_00000020;
  char cStack0000000000000024;
  undefined8 in_stack_00000028;
  
  thunk_FUN_01279b34(PTR_DAT_027c1f50);
                    /* try { // try from 01f9fd98 to 0209fd9b has its CatchHandler @ 01f9fdb0 */
                    /* try { // try from 01f9fd9c to 0209fd9f has its CatchHandler @ 01f9fda0 */
  thunk_FUN_01279b34(PTR_DAT_027b3ec0);
                    /* catch() { ... } // from try @ 01f9fd9c with catch @ 01f9fda0
                       try { // try from 01f9fda0 to 0209fdc7 has its CatchHandler @ 01f9fc4c */
                    /* catch() { ... } // from try @ 01f9fcbc with catch @ 01f9fda4 */
  *(undefined1 *)(unaff_x24 + 0xf63) = 1;
                    /* catch() { ... } // from try @ 01f9fca4 with catch @ 01f9fda8 */
                    /* catch() { ... } // from try @ 01f9fd1c with catch @ 01f9fdac */
  cStack0000000000000024 = '\0';
                    /* catch() { ... } // from try @ 01f9fcc8 with catch @ 01f9fdb0
                       catch() { ... } // from try @ 01f9fd98 with catch @ 01f9fdb0 */
  in_stack_00000020 = '\0';
  uStack000000000000001c = 0;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                    /* try { // try from 01f9fdc8 to 0209fddf has its CatchHandler @ 01f9fe7c */
    thunk_FUN_01220628();
  }
  FUN_01f9e0f8(unaff_w21,&stack0x00000028,unaff_w22 & 1,&stack0x00000024,&stack0x00000020,
               &stack0x0000001c);
                    /* try { // try from 01f9fde8 to 0209fdeb has its CatchHandler @ 01f9fe74 */
                    /* try { // try from 01f9fdf0 to 0209fe4b has its CatchHandler @ 01f9fe90 */
  lVar6 = FUN_01f9ff08();
  if (lVar6 != 0) {
    FUN_018de658();
    cVar2 = cStack0000000000000024;
    cVar1 = in_stack_00000020;
    uVar4 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar4) {
      lVar9 = 0;
      do {
        if (uVar4 <= (uint)lVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_01230ca8();
        }
        lVar8 = *(long *)(lVar6 + 0x20 + lVar9 * 8);
        if (lVar8 == 0) goto OVRPlugin_OVRP_1_78_0__ovrp_SetControllerHapticsAmplitudeEnvelope;
        uVar4 = FUN_01ef07cc(lVar8,0);
        uVar5 = FUN_01ef07cc(lVar8,0);
        uVar3 = in_stack_00000028;
        if ((uVar4 & (unaff_w21 ^ 2)) == uVar5) {
          if (cVar2 != '\0') {
            if (*(int *)(*unaff_x23 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            uVar7 = FUN_01f9e2bc(lVar8,uVar3,cVar1 != '\0');
            if ((uVar7 & 1) == 0) goto LAB_01f9fec0;
          }
          FUN_018de888();
        }
LAB_01f9fec0:
        uVar4 = *(uint *)(lVar6 + 0x18);
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < (int)uVar4);
    }
    unaff_x19[2] = 0;
    unaff_x19[1] = 0;
    *unaff_x19 = 0;
    return;
  }
OVRPlugin_OVRP_1_78_0__ovrp_SetControllerHapticsAmplitudeEnvelope:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


