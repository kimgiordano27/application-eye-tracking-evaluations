/*
FUNCTION_NAME: FUN_01508ab0
ENTRY_POINT: 01508ab0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_01508ab0(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_0377713d & 1) == 0) {
                    /* try { // try from 01508ad8 to 01608adf has its CatchHandler @ 01508ca8 */
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    DAT_0377713d = 1;
  }
                    /* try { // try from 01508ae8 to 01608af3 has its CatchHandler @ 01508c40 */
  if (*(char *)(param_1 + 0x31) == '\0') {
    if (*(char *)(param_1 + 0x30) == '\0') {
      if (param_2 == 0) goto LAB_01508c10;
    }
    else {
      if (param_2 == 0) goto LAB_01508c10;
      uVar4 = FUN_01604018(param_2,0);
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_01508c10;
      uVar2 = FUN_01604018(*(long *)(param_1 + 0x28),0);
                    /* try { // try from 01508ba4 to 01608bab has its CatchHandler @ 01508c4c */
      uVar1 = thunk_FUN_015fe514(uVar4,uVar2,0);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
    }
                    /* try { // try from 01508bbc to 01608bc7 has its CatchHandler @ 01508c3c */
    lVar3 = FUN_01604018(param_2,0);
    if ((*(long *)(param_1 + 0x28) == 0) ||
       (uVar4 = FUN_01604018(*(long *)(param_1 + 0x28),0), lVar3 == 0)) {
LAB_01508c10:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar1 = FUN_0160472c(lVar3,uVar4,0);
                    /* try { // try from 01508bf0 to 01608bf3 has its CatchHandler @ 01508c34 */
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x40);
    if (lVar3 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_105__);
      if (lVar3 == 0) goto LAB_01508c10;
                    /* try { // try from 01508b1c to 01608b1f has its CatchHandler @ 01508c38 */
      FUN_02021868(lVar3,uVar4,9,0);
                    /* try { // try from 01508b20 to 01608b2f has its CatchHandler @ 01508c48 */
      *(long *)(param_1 + 0x40) = lVar3;
    }
                    /* try { // try from 01508b30 to 01608ba3 has its CatchHandler @ 01508698 */
    lVar3 = FUN_0202025c(lVar3,param_2,0);
    if (lVar3 == 0) goto LAB_01508c10;
    uVar1 = FUN_0201bf00(lVar3,0);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    if (*(char *)(param_1 + 0x30) != '\0') {
      uVar4 = FUN_0201bd24(lVar3,0);
      thunk_FUN_015fe514(uVar4,param_2,0);
    }
  }
                    /* try { // try from 01508bf4 to 01608c03 has its CatchHandler @ 01508c44 */
                    /* try { // try from 01508c04 to 01608c6f has its CatchHandler @ 01508698 */
  return 1;
}


