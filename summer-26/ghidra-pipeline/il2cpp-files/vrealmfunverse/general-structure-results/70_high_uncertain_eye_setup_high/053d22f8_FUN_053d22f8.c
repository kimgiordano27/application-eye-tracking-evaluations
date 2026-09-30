/*
FUNCTION_NAME: FUN_053d22f8
ENTRY_POINT: 053d22f8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x053d240c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_053d22f8(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  char local_24 [4];
  
  if ((DAT_066d09cf & 1) == 0) {
    FUN_02b3c81c(OVRPlugin_GUID_TypeInfo);
    DAT_066d09cf = 1;
  }
  lVar3 = *(long *)(param_1 + 0x40);
  local_24[0] = '\0';
  if (lVar3 == 0) {
LAB_053d2408:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (*(long *)(lVar3 + 0xe8) == 0) {
    local_24[0] = '\0';
    FUN_04ddecfc(param_1,local_24,0);
    if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(long *)(*(long *)(param_1 + 0x40) + 0xe8) == 0) {
      lVar3 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_GUID_TypeInfo);
      FUN_053fdb0c(lVar3,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar1 = FUN_053fddc8(lVar3,param_1,0);
      thunk_FUN_02b4aae0(0);
      if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x40) + 0xe8);
      *puVar2 = uVar1;
      thunk_FUN_02bb0e9c(puVar2,uVar1);
    }
    if (local_24[0] != '\0') {
      thunk_FUN_02b4a54c(param_1,0);
    }
    lVar3 = *(long *)(param_1 + 0x40);
    if (lVar3 == 0) goto LAB_053d2408;
  }
  return *(undefined8 *)(lVar3 + 0xe8);
}


