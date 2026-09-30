/*
FUNCTION_NAME: FUN_06bfa854
ENTRY_POINT: 06bfa854
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06bfa854(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  if ((DAT_076e728b & 1) == 0) {
    thunk_FUN_032e1da0(Method_UnityEngine_Component_GetComponent<OVRLipSyncContextBase>__);
    thunk_FUN_032e1da0(Method_UnityEngine_Component_GetComponent<OVRManager>__);
    thunk_FUN_032e1da0(Method_UnityEngine_Component_GetComponent<OVRMesh>__);
    thunk_FUN_032e1da0(Method_UnityEngine_Component_GetComponent<OVRMeshRenderer>__);
    DAT_076e728b = 1;
  }
  puVar2 = Method_UnityEngine_Component_GetComponent<OVRManager>__;
  puVar1 = Method_UnityEngine_Component_GetComponent<OVRLipSyncContextBase>__;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_041e3694(&local_68,*(long *)(param_1 + 0x10),
                 *(undefined8 *)Method_UnityEngine_Component_GetComponent<OVRMeshRenderer>__);
    uStack_48 = uStack_60;
    local_50 = local_68;
    local_40 = local_58;
    while( true ) {
      uVar3 = FUN_052d44b4(&local_50,*(undefined8 *)puVar2);
      lVar4 = local_40;
      if ((uVar3 & 1) == 0) {
        FUN_052d44b0(&local_50,*(undefined8 *)puVar1);
        return;
      }
      if (local_40 == 0) break;
      uVar3 = FUN_06bf9d48(local_40);
      if (((uVar3 & 1) != 0) && (lVar4 = FUN_06bf9d84(lVar4,param_3), lVar4 != 0)) {
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        FUN_06bfa9e4(param_2);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


