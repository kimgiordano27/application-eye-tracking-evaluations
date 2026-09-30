/*
FUNCTION_NAME: FullSerializer.fsSerializer$$InternalDeserialize_4_Cycles
ENTRY_POINT: 00e33754
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_6;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


undefined8
FullSerializer_fsSerializer__InternalDeserialize_4_Cycles
          (undefined8 param_1,undefined8 param_2,uint param_3)

{
  bool in_ZR;
  undefined8 uVar1;
  
  if (!in_ZR) {
    param_3 = param_3 & 0x70;
    if (param_3 == 0x20) {
      uVar1 = _Unwind_GetTextRelBase();
      return uVar1;
    }
    if (param_3 < 0x21) {
      if ((param_3 != 0) && (param_3 != 0x10)) {
LAB_00e337ac:
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    else {
      if (param_3 == 0x40) {
        uVar1 = _Unwind_GetRegionStart();
        return uVar1;
      }
      if (param_3 != 0x50) {
        if (param_3 == 0x30) {
          uVar1 = _Unwind_GetDataRelBase();
          return uVar1;
        }
        goto LAB_00e337ac;
      }
    }
  }
  return 0;
}


