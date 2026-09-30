/*
FUNCTION_NAME: OVRPlugin$$SaveSpaceList
ENTRY_POINT: 063967b8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__SaveSpaceList(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long in_x10;
  long *unaff_x19;
  long unaff_x22;
  
  bVar1 = *(byte *)(param_1 + 0x130);
  if ((((*(byte *)(in_x10 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(in_x10 + 200) + ((ulong)bVar1 - 1) * 8) != param_1)) ||
      (unaff_x19 == (long *)0x0)) ||
     ((*(byte *)(*unaff_x19 + 0x130) < bVar1 ||
      (*(long *)(*(long *)(*unaff_x19 + 200) + ((ulong)bVar1 - 1) * 8) != param_1)))) {
    if ((*(uint *)(unaff_x22 + 0x10) & 0xfffffffe) == 2) {
      return 1;
    }
    goto switchD_06396840_caseD_8;
  }
                    /* try { // try from 0639681c to 0649681f has its CatchHandler @ 06396878 */
                    /* try { // try from 06396820 to 06496823 has its CatchHandler @ 06396874 */
                    /* try { // try from 06396824 to 06496827 has its CatchHandler @ 06396870 */
                    /* try { // try from 06396828 to 0649682b has its CatchHandler @ 06396864 */
                    /* try { // try from 0639682c to 06496837 has its CatchHandler @ 06396860 */
                    /* try { // try from 06396838 to 0649683b has its CatchHandler @ 063964b4 */
                    /* try { // try from 0639683c to 0649683f has its CatchHandler @ 06396858 */
  uVar4 = 1;
                    /* try { // try from 06396840 to 06496847 has its CatchHandler @ 063964b4 */
  switch(*(undefined4 *)(unaff_x22 + 0x10)) {
  case 1:
                    /* try { // try from 06396848 to 0649684b has its CatchHandler @ 06396854 */
                    /* try { // try from 0639684c to 06496853 has its CatchHandler @ 0639685c */
    uVar3 = FUN_06396ae4();
    goto joined_r0x063968e8;
  case 2:
                    /* catch() { ... } // from try @ 0639683c with catch @ 06396858 */
                    /* catch() { ... } // from try @ 0639672c with catch @ 0639685c
                       catch() { ... } // from try @ 0639684c with catch @ 0639685c */
                    /* catch() { ... } // from try @ 0639682c with catch @ 06396860 */
    uVar3 = FUN_06396ae4();
                    /* catch() { ... } // from try @ 06396828 with catch @ 06396864 */
    goto joined_r0x063968fc;
  case 3:
    goto switchD_06396840_caseD_3;
  case 4:
                    /* catch() { ... } // from try @ 0639665c with catch @ 0639686c */
                    /* catch() { ... } // from try @ 06396824 with catch @ 06396870 */
                    /* catch() { ... } // from try @ 06396820 with catch @ 06396874 */
    iVar2 = FUN_0638e90c();
                    /* catch() { ... } // from try @ 0639681c with catch @ 06396878 */
    if (iVar2 < 0) {
      return 1;
    }
    break;
  case 5:
    iVar2 = FUN_0638e90c();
                    /* try { // try from 06396890 to 06496893 has its CatchHandler @ 063968a8 */
    if (iVar2 < 1) {
      return 1;
    }
    break;
  case 6:
    iVar2 = FUN_0638e90c();
                    /* catch() { ... } // from try @ 06396890 with catch @ 063968a8 */
    if (0 < iVar2) {
      return 1;
    }
    break;
  case 7:
    iVar2 = FUN_0638e90c();
    if (-1 < iVar2) {
      return 1;
    }
    break;
  case 10:
    uVar3 = FUN_06396914();
    goto joined_r0x063968e8;
  case 0xb:
    uVar3 = FUN_0639704c();
joined_r0x063968e8:
    if ((uVar3 & 1) != 0) {
      return 1;
    }
    break;
  case 0xc:
    uVar3 = FUN_0639704c();
joined_r0x063968fc:
    if ((uVar3 & 1) == 0) {
      return 1;
    }
  }
switchD_06396840_caseD_8:
  uVar4 = 0;
switchD_06396840_caseD_3:
  return uVar4;
}


