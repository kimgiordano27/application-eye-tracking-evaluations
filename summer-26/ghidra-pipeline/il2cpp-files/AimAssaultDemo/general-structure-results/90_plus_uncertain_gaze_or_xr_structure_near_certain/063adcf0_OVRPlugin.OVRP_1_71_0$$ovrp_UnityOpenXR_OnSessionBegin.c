/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionBegin
ENTRY_POINT: 063adcf0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionBegin(void)

{
  ushort uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  code *in_x9;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  
                    /* try { // try from 063adcf4 to 064add07 has its CatchHandler @ 063add18 */
  uVar2 = (*in_x9)();
                    /* try { // try from 063add10 to 064add13 has its CatchHandler @ 063add34 */
                    /* try { // try from 063add14 to 064add17 has its CatchHandler @ 063add38 */
                    /* catch() { ... } // from try @ 063adcf4 with catch @ 063add18
                       try { // try from 063add18 to 064add4f has its CatchHandler @ 063adb94 */
  uVar3 = FUN_063349dc(uVar2,0);
                    /* catch() { ... } // from try @ 063adc94 with catch @ 063add1c */
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
                    /* catch() { ... } // from try @ 063adc30 with catch @ 063add20 */
                    /* catch() { ... } // from try @ 063adc40 with catch @ 063add24 */
  lVar5 = *unaff_x19;
                    /* catch() { ... } // from try @ 063adc98 with catch @ 063add28 */
                    /* catch() { ... } // from try @ 063adc78 with catch @ 063add2c */
                    /* catch() { ... } // from try @ 063adc14 with catch @ 063add30 */
  uVar1 = *(ushort *)(lVar5 + 0x12e);
  uVar6 = (ulong)uVar1;
                    /* catch() { ... } // from try @ 063add10 with catch @ 063add34 */
  if ((uVar3 & 1) == 0) {
    if (uVar1 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07db6e20) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 9) * 0x10 + 0x138);
          goto LAB_063adde0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c();
LAB_063adde0:
                    /* WARNING: Could not recover jumptable at 0x063ade00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar4)();
    return;
  }
                    /* catch() { ... } // from try @ 063adcc0 with catch @ 063add38
                       catch() { ... } // from try @ 063add14 with catch @ 063add38 */
  if (uVar1 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07db6e20) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 8) * 0x10 + 0x138);
        goto LAB_063addb0;
      }
                    /* try { // try from 063add50 to 064add53 has its CatchHandler @ 063add70 */
      uVar6 = uVar6 - 1;
                    /* try { // try from 063add54 to 064add73 has its CatchHandler @ 063adb94 */
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_0377596c();
LAB_063addb0:
                    /* WARNING: Could not recover jumptable at 0x063addcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)();
  return;
}


