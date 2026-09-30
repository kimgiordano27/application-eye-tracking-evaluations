/*
FUNCTION_NAME: OVRPlugin.BodyJointLocation$$get_PositionTracked
ENTRY_POINT: 026cc57c
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_BodyJointLocation__get_PositionTracked
               (undefined8 param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031cb62c(5);
  }
  (**(code **)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x1a0) + 8))(param_3,0xf);
  lVar4 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xa8);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_015c2790(lVar4);
  }
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = thunk_FUN_015d0480(param_2,lVar4);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160f170(param_2,lVar4);
    }
  }
  lVar3 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  lVar4 = *(long *)(lVar3 + 0xe0);
  pcVar5 = *(code **)(*(long *)(lVar3 + 0x48) + 8);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_015c2790(lVar4);
  }
  if (param_3 != (long *)0x0) {
    if (*(long *)(*param_3 + 0x40) == *(long *)(lVar4 + 0x40)) {
      puVar2 = (undefined8 *)thunk_FUN_015d06c4(param_3);
      (*pcVar5)(param_1,lVar1,*puVar2,
                *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0160f170(param_3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


