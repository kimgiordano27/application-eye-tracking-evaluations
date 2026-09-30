/*
FUNCTION_NAME: FUN_0744a10c
ENTRY_POINT: 0744a10c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_0744a10c(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  
  if ((DAT_08269b79 & 1) == 0) {
                    /* try { // try from 0744a124 to 0754a127 has its CatchHandler @ 0744a9d4 */
    FUN_0373b518(UnityEngine_XR_ARSubsystems_TrackingState_TypeInfo);
    FUN_0373b518(OVREyeGaze_TypeInfo);
                    /* try { // try from 0744a13c to 0754a177 has its CatchHandler @ 0744aa38 */
    DAT_08269b79 = 1;
  }
  puVar1 = UnityEngine_XR_ARSubsystems_TrackingState_TypeInfo;
  if ((char)param_1[0x41] == '\0') {
    return;
  }
  if (param_1[0x42] != 0) {
    iVar2 = FUN_0520175c(param_1[0x42],
                         *(undefined8 *)UnityEngine_XR_ARSubsystems_TrackingState_TypeInfo);
    if (iVar2 == 0) {
      (**(code **)(*param_1 + 0x878))(param_1,*(undefined8 *)(*param_1 + 0x880));
    }
    if (param_1[0x43] != 0) {
      iVar2 = FUN_0520175c(param_1[0x43],*(undefined8 *)puVar1);
      if ((iVar2 == 0) && (*(int *)((long)param_1 + 0x54) == 1)) {
        lVar3 = FUN_07445304(param_1);
        if (lVar3 == 0) goto LAB_0744a1dc;
        if (1 < *(int *)(lVar3 + 0x18)) {
                    /* WARNING: Could not recover jumptable at 0x0744a1d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x888))(param_1,*(undefined8 *)(*param_1 + 0x890));
          return;
        }
      }
      return;
    }
  }
LAB_0744a1dc:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


