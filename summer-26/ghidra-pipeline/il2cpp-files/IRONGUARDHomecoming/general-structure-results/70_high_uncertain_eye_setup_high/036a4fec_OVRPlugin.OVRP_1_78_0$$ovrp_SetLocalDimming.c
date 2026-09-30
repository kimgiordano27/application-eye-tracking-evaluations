/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_SetLocalDimming
ENTRY_POINT: 036a4fec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_SetLocalDimming(long param_1,uint param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((DAT_04833fa7 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    DAT_04833fa7 = 1;
  }
  puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  lVar2 = *(long *)(param_1 + 0x68);
  if (lVar2 != 0) {
    if (param_2 < *(uint *)(lVar2 + 0x18)) {
      *param_3 = *(undefined8 *)(lVar2 + (long)(int)param_2 * 8 + 0x20);
      thunk_FUN_01f51358(param_3);
                    /* try { // try from 036a5050 to 037a50cf has its CatchHandler @ 036a5050
                       catch() { ... } // from try @ 036a5050 with catch @ 036a5050
                       catch() { ... } // from try @ 036a5218 with catch @ 036a5050
                       catch() { ... } // from try @ 036a5270 with catch @ 036a5050
                       catch() { ... } // from try @ 036a52d0 with catch @ 036a5050
                       catch() { ... } // from try @ 036a52f0 with catch @ 036a5050
                       catch() { ... } // from try @ 036a5334 with catch @ 036a5050 */
      uVar3 = *param_3;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_04073094(uVar3,0,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


