/*
FUNCTION_NAME: FUN_0322442c
ENTRY_POINT: 0322442c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 71
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


void FUN_0322442c(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  long *plVar3;
  
  puVar1 = PTR_DAT_0422fa80;
  if ((DAT_0453285e & 1) == 0) {
                    /* try { // try from 0322444c to 03324467 has its CatchHandler @ 032245a4 */
    FUN_01c5d288(VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fa80);
    DAT_0453285e = 1;
  }
  plVar3 = (long *)thunk_FUN_01c496e0(*(undefined8 *)puVar1);
  FUN_032e2298(plVar3,0);
  puVar1 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
  if (plVar3 != (long *)0x0) {
                    /* try { // try from 03224488 to 0332448f has its CatchHandler @ 032245a0 */
                    /* try { // try from 03224494 to 0332449f has its CatchHandler @ 03224584 */
    uVar2 = (**(code **)(*plVar3 + 0x198))
                      (plVar3,0x80000000,0x7fffffff,*(undefined8 *)(*plVar3 + 0x1a0));
                    /* try { // try from 032244a4 to 033244af has its CatchHandler @ 03224580 */
    **(undefined4 **)(*(long *)puVar1 + 0xb8) = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


