/*
FUNCTION_NAME: FUN_075b9bdc
ENTRY_POINT: 075b9bdc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_075b9bdc(undefined1 param_1 [16],float param_2,float param_3,float param_4,
                 undefined8 param_5,long param_6)

{
  uint uVar1;
  undefined *puVar2;
  float fVar3;
  
  if ((DAT_0826e486 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d86440);
    FUN_0373b518(OVRPlugin_LayerLayout_TypeInfo);
    DAT_0826e486 = 1;
  }
  puVar2 = OVRPlugin_LayerLayout_TypeInfo;
  if ((param_6 != 0) && (3 < *(int *)(param_6 + 0x18))) {
    fVar3 = (float)UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get(param_5);
    uVar1 = *(uint *)(param_6 + 0x18);
    if (uVar1 != 0) {
      *(float *)(param_6 + 0x20) = fVar3;
      *(float *)(param_6 + 0x24) = param_2;
      *(undefined4 *)(param_6 + 0x28) = 0;
      if (uVar1 != 1) {
        *(float *)(param_6 + 0x2c) = fVar3;
        *(float *)(param_6 + 0x30) = param_4 + param_2;
        *(undefined4 *)(param_6 + 0x34) = 0;
        if (2 < uVar1) {
          *(float *)(param_6 + 0x38) = param_3 + fVar3;
          *(float *)(param_6 + 0x3c) = param_4 + param_2;
          *(undefined4 *)(param_6 + 0x40) = 0;
          if (uVar1 != 3) {
            *(float *)(param_6 + 0x44) = param_3 + fVar3;
            *(float *)(param_6 + 0x48) = param_2;
            *(undefined4 *)(param_6 + 0x4c) = 0;
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0373b7bc();
  }
  if (*(int *)(*(long *)PTR_DAT_07d86440 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_0755de80(*(undefined8 *)puVar2,0);
  return;
}


