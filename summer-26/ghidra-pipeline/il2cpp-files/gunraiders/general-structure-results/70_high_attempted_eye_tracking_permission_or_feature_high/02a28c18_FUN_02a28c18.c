/*
FUNCTION_NAME: FUN_02a28c18
ENTRY_POINT: 02a28c18
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


uint FUN_02a28c18(long *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
                    /* try { // try from 02a28c24 to 02b28c47 has its CatchHandler @ 02a288d0 */
  if ((DAT_04531170 & 1) == 0) {
    FUN_01c5d288(VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo);
    DAT_04531170 = 1;
  }
                    /* try { // try from 02a28c48 to 02b28c57 has its CatchHandler @ 02a28c58 */
  if (*param_1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar1 = param_1[1];
                    /* catch() { ... } // from try @ 02a28c0c with catch @ 02a28c58
                       catch() { ... } // from try @ 02a28c48 with catch @ 02a28c58 */
                    /* try { // try from 02a28c5c to 02b28c5f has its CatchHandler @ 02a28c68 */
                    /* try { // try from 02a28c60 to 02b28c6b has its CatchHandler @ 02a288d0 */
    if (*(int *)(*(long *)
                  VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02a28c5c with catch @ 02a28c68
                        */
    uVar4 = FUN_0322441c(0x1505,(int)lVar1,0);
    uVar2 = FUN_0322441c(uVar4,*(undefined4 *)((long)param_1 + 0xc),0);
    param_1 = (long *)*param_1;
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar3 = (**(code **)(*param_1 + 0x158))(param_1,*(undefined8 *)(*param_1 + 0x160));
    uVar3 = uVar3 ^ uVar2;
  }
  return uVar3;
}


