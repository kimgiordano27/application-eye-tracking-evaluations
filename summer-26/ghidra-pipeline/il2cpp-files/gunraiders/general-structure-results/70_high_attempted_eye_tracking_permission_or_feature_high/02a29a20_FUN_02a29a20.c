/*
FUNCTION_NAME: FUN_02a29a20
ENTRY_POINT: 02a29a20
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


uint FUN_02a29a20(long *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if ((DAT_04531171 & 1) == 0) {
    FUN_01c5d288(VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo);
    DAT_04531171 = 1;
  }
  if (*param_1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar1 = param_1[1];
    if (*(int *)(*(long *)
                  VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo +
                0xe0) == 0) {
                    /* try { // try from 02a29a6c to 02b29a7b has its CatchHandler @ 02a29b34 */
      thunk_FUN_01c1d1e8();
    }
                    /* try { // try from 02a29a7c to 02b29b1f has its CatchHandler @ 02a296a8 */
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


