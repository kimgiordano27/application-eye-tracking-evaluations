/*
FUNCTION_NAME: OVRPlugin$$StopColocationSessionDiscovery
ENTRY_POINT: 07c8baec
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 115
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


float OVRPlugin__StopColocationSessionDiscovery
                (ulong param_1,float param_2,undefined1 param_3 [16],float param_4,float param_5,
                float param_6,undefined1 param_7 [16],float param_8)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float fVar10;
  float fVar11;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  
  fStack0000000000000028 = param_4 / param_5;
  lVar4 = 0x100000000;
                    /* catch() { ... } // from try @ 07c8bad4 with catch @ 07c8bb10 */
  fStack000000000000002c = param_2;
  fStack0000000000000030 = param_6;
  fStack0000000000000034 = param_5;
  do {
                    /* catch() { ... } // from try @ 07c8ba90 with catch @ 07c8bb14 */
                    /* catch() { ... } // from try @ 07c8bad0 with catch @ 07c8bb18 */
    if ((param_1 & 0xffffffff) <= unaff_x23) {
LAB_07c8bd14:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
                    /* catch() { ... } // from try @ 07c8ba0c with catch @ 07c8bb1c */
                    /* catch() { ... } // from try @ 07c8b9f0 with catch @ 07c8bb20 */
    if (*(long *)(unaff_x20 + 0x40) == 0) {
LAB_07c8bd18:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_07ca3aa4(&stack0x00000060,*(long *)(unaff_x20 + 0x40),
                 *(undefined4 *)(unaff_x24 + unaff_x23 * 4),0);
    fVar2 = in_stack_00000068;
    fVar1 = fStack0000000000000064;
    fVar9 = fStack0000000000000060;
                    /* try { // try from 07c8bb38 to 07d8bb3b has its CatchHandler @ 07c8bb60 */
    unaff_x23 = unaff_x23 + 1;
                    /* try { // try from 07c8bb3c to 07d8bb6f has its CatchHandler @ 07c8b938 */
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x23) goto LAB_07c8bd14;
    if (*(long *)(unaff_x20 + 0x40) == 0) goto LAB_07c8bd18;
                    /* catch() { ... } // from try @ 07c8bb38 with catch @ 07c8bb60 */
    FUN_07ca3aa4(&stack0x00000060,*(long *)(unaff_x20 + 0x40),
                 *(undefined4 *)(unaff_x19 + (lVar4 >> 0x1e) + 0x20),0);
    fVar8 = in_stack_00000068;
    fVar7 = fStack0000000000000064;
    fVar6 = fStack0000000000000060;
                    /* try { // try from 07c8bb70 to 07d8bb83 has its CatchHandler @ 07c8bbf4 */
    if (1.0 <= unaff_s8) {
LAB_07c8bc8c:
      fVar9 = (float)OVRPlugin__CreateDynamicObjectTracker
                               (in_stack_00000038._4_4_,uStack0000000000000040,
                                uStack0000000000000044,uStack0000000000000048,uStack000000000000004c
                                ,in_stack_00000050);
      if (fVar9 <= fStack000000000000005c) {
        fStack000000000000005c = fVar9;
      }
    }
    else {
      if (DAT_0a51bf42 == '\0') {
                    /* catch() { ... } // from try @ 07c8ba74 with catch @ 07c8bb84
                       try { // try from 07c8bb84 to 07d8bb9b has its CatchHandler @ 07c8b938 */
        FUN_04447ba8();
        DAT_0a51bf42 = '\x01';
      }
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
                    /* try { // try from 07c8bb9c to 07d8bb9f has its CatchHandler @ 07c8bbc8 */
                    /* try { // try from 07c8bba0 to 07d8bbd7 has its CatchHandler @ 07c8b938 */
      fVar5 = fStack0000000000000030;
      fVar10 = fStack0000000000000028;
      fVar11 = fStack000000000000002c;
      if (fStack0000000000000034 <= fStack0000000000000058) {
        if (DAT_0a51bf43 == '\0') {
          FUN_04447ba8();
          DAT_0a51bf43 = '\x01';
        }
        pfVar3 = *(float **)(*unaff_x22 + 0xb8);
        fVar5 = *pfVar3;
        fVar11 = pfVar3[1];
        fVar10 = pfVar3[2];
      }
      if (DAT_0a51bf42 == '\0') {
        FUN_04447ba8();
        DAT_0a51bf42 = '\x01';
      }
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      fVar6 = fVar6 - fVar9;
      fVar7 = fVar7 - fVar1;
      fVar8 = fVar8 - fVar2;
      fVar9 = SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7);
      if (fVar9 <= fStack0000000000000058) {
        if (DAT_0a51bf43 == '\0') {
          FUN_04447ba8();
          DAT_0a51bf43 = '\x01';
        }
        pfVar3 = *(float **)(*unaff_x22 + 0xb8);
        fVar6 = *pfVar3;
        fVar7 = pfVar3[1];
        fVar8 = pfVar3[2];
      }
      else {
        fVar6 = fVar6 / fVar9;
        fVar7 = fVar7 / fVar9;
        fVar8 = fVar8 / fVar9;
      }
      unaff_s8 = param_8;
      if (fVar10 * fVar8 + fVar5 * fVar6 + fVar11 * fVar7 < param_8) goto LAB_07c8bc8c;
    }
    lVar4 = lVar4 + 0x100000000;
    param_1 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
    if ((long)((int)*(ulong *)(unaff_x19 + 0x18) + -1) <= (long)unaff_x23) {
      return fStack000000000000005c;
    }
  } while( true );
}


