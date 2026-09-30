/*
FUNCTION_NAME: FUN_033440e0
ENTRY_POINT: 033440e0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


int FUN_033440e0(long param_1,undefined4 param_2,char *param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  code *pcVar4;
  
  if (param_3 == (char *)0x0) {
    iVar2 = -6;
  }
  else {
    iVar2 = -6;
    if ((param_4 == 0x70) && (*param_3 == '1')) {
      if (param_1 == 0) {
        iVar2 = -2;
      }
      else {
        *(undefined8 *)(param_1 + 0x30) = 0;
        puVar1 = Method_OVRTask_SetResult<OVRResult<OVRColocationSession_Result>>__;
        pcVar4 = *(code **)(param_1 + 0x40);
        if (*(code **)(param_1 + 0x40) == (code *)0x0) {
          *(undefined8 *)(param_1 + 0x50) = 0;
          *(undefined **)(param_1 + 0x40) = puVar1;
          pcVar4 = (code *)puVar1;
        }
        if (*(long *)(param_1 + 0x48) == 0) {
          *(undefined **)(param_1 + 0x48) = Method_OVRTask_SetResult<OVRResult<OVRPlugin_Result>>__;
        }
        plVar3 = (long *)(*pcVar4)(*(undefined8 *)(param_1 + 0x50),1,0x1bf8);
        if (plVar3 == (long *)0x0) {
          iVar2 = -4;
        }
        else {
          *(long **)(param_1 + 0x38) = plVar3;
          *plVar3 = param_1;
          plVar3[9] = 0;
          *(undefined4 *)(plVar3 + 1) = 0x3f34;
          iVar2 = FUN_0334403c(param_1,param_2);
          if (iVar2 != 0) {
            (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),plVar3);
            *(undefined8 *)(param_1 + 0x38) = 0;
          }
        }
      }
    }
  }
  return iVar2;
}


