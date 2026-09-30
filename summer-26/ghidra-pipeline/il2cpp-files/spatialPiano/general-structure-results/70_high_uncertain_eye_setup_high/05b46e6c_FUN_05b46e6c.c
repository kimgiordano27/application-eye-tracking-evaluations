/*
FUNCTION_NAME: FUN_05b46e6c
ENTRY_POINT: 05b46e6c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05b46e6c(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar3 = Method_UnityEngine_Component_GetComponent<OVRManager>__;
  if ((DAT_06bc2a71 & 1) == 0) {
    FUN_02f08768(Method_UnityEngine_Component_GetComponent<OVRManager>__);
    FUN_02f08768(Method_UnityEngine_Component_GetComponent<OVRCameraRig>__);
    FUN_02f08768(Method_UnityEngine_Component_GetComponent<OVRMesh>__);
    FUN_02f08768(
                Method_System_Threading_CancellationTokenSource_CancellationCallbackCoreWork_OnSyncContext__
                );
    FUN_02f08768(Method_UnityEngine_Component_GetComponent<OVRMeshRenderer>__);
    FUN_02f08768(PTR_DAT_067ca4e8);
    DAT_06bc2a71 = 1;
  }
  lVar6 = FUN_02f0880c(*(undefined8 *)puVar3,3);
  if (lVar6 != 0) {
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (((uVar1 != 0) && (*(undefined8 *)(lVar6 + 0x20) = 0x400000001, uVar1 != 1)) &&
       (*(undefined8 *)(lVar6 + 0x28) = 0x500000001,
       puVar3 = Method_UnityEngine_Component_GetComponent<OVRCameraRig>__, 2 < uVar1)) {
      *(undefined8 *)(lVar6 + 0x30) = 0x800000001;
      puVar2 = PTR_DAT_067ca4e8;
      **(long **)(*(long *)puVar3 + 0xb8) = lVar6;
      puVar5 = Method_UnityEngine_Component_GetComponent<OVRMeshRenderer>__;
      puVar4 = Method_UnityEngine_Component_GetComponent<OVRMesh>__;
      puVar3 = 
      Method_System_Threading_CancellationTokenSource_CancellationCallbackCoreWork_OnSyncContext__;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_03453298(0,0,0,*(undefined8 *)puVar5);
      uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
      FUN_05b60b08(uVar7,0,*(undefined8 *)puVar4,0);
      FUN_05ab7334(uVar7,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


