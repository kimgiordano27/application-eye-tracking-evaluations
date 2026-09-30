/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionBegin
ENTRY_POINT: 033eadb4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint OVRPlugin_UnityOpenXR__OnSessionBegin(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long in_stack_00000008;
  
  if (param_1 != param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7df0c();
  }
  uVar3 = FUN_033bdecc();
  if ((uVar3 & 1) == 0) {
    uVar2 = FUN_01d7a358();
    if (in_stack_00000008 != 0) {
      uVar2 = 0;
      while( true ) {
        uVar1 = *(uint *)(in_stack_00000008 + 0x18);
        if ((int)uVar1 <= (int)uVar2) break;
        if ((uVar1 <= uVar2) || (uVar1 <= uVar2 + 1)) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        plVar4 = *(long **)(in_stack_00000008 + (long)(int)uVar2 * 8 + 0x20);
        lVar5 = *(long *)(in_stack_00000008 + (long)(int)(uVar2 + 1) * 8 + 0x20);
        if (plVar4 == (long *)0x0) {
          if (lVar5 != 0) goto LAB_033eadd0;
        }
        else {
          uVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,lVar5,*(undefined8 *)(*plVar4 + 0x140));
          if ((uVar3 & 1) == 0) goto LAB_033eadd0;
        }
        uVar2 = uVar2 + 2;
        if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
      }
      uVar2 = 1;
    }
  }
  else {
LAB_033eadd0:
    uVar2 = 0;
  }
  return uVar2 & 1;
}


