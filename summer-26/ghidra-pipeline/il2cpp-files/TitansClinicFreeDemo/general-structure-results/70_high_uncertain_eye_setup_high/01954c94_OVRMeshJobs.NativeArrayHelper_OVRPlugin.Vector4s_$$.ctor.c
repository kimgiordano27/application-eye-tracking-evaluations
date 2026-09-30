/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 01954c94
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>___ctor
               (long param_1,uint param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 < param_2) {
    FUN_01f87fcc(0xd,0x1b,0);
    uVar2 = *(uint *)(param_1 + 0x18);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    if (uVar2 == *(uint *)(*(long *)(param_1 + 0x10) + 0x18)) {
      FUN_019545ac(param_1,uVar2 + 1,
                   *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78));
      uVar2 = *(uint *)(param_1 + 0x18);
    }
    if (uVar2 - param_2 != 0 && (int)param_2 <= (int)uVar2) {
      FUN_01f89ca0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x10),
                   param_2 + 1,uVar2 - param_2,0);
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != 0) {
      if (param_2 < *(uint *)(lVar3 + 0x18)) {
        puVar1 = (undefined8 *)(lVar3 + (long)(int)param_2 * 8 + 0x20);
        *puVar1 = param_3;
        thunk_FUN_01286abc(puVar1,param_3);
        *(ulong *)(param_1 + 0x18) =
             CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) + 1,
                      (int)*(undefined8 *)(param_1 + 0x18) + 1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


