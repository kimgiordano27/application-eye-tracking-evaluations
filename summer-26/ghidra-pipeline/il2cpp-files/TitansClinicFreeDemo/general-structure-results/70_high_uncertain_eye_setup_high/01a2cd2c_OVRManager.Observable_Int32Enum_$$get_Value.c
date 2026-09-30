/*
FUNCTION_NAME: OVRManager.Observable<Int32Enum>$$get_Value
ENTRY_POINT: 01a2cd2c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_Observable<Int32Enum>__get_Value(long param_1,uint param_2)

{
  uint in_w8;
  uint uVar1;
  long lVar2;
  
  if (in_w8 <= param_2) {
    FUN_01f88350(0);
    in_w8 = *(uint *)(param_1 + 0x18);
  }
  uVar1 = in_w8 - 1;
  *(uint *)(param_1 + 0x18) = uVar1;
  if (uVar1 - param_2 != 0 && (int)param_2 <= (int)uVar1) {
    FUN_01f89ca0(*(undefined8 *)(param_1 + 0x10),param_2 + 1,*(undefined8 *)(param_1 + 0x10),param_2
                 ,uVar1 - param_2,0);
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = lVar2 + (long)(int)uVar1 * 0x28;
      *(undefined8 *)(lVar2 + 0x40) = 0;
      *(undefined8 *)(lVar2 + 0x28) = 0;
      *(undefined8 *)(lVar2 + 0x20) = 0;
      *(undefined8 *)(lVar2 + 0x38) = 0;
      *(undefined8 *)(lVar2 + 0x30) = 0;
      thunk_FUN_01286abc(lVar2 + 0x28,0);
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01230ca8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


