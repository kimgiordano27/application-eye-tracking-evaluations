/*
FUNCTION_NAME: FUN_053cd17c
ENTRY_POINT: 053cd17c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x053cd2b4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_053cd17c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  char local_24 [4];
  
  if ((DAT_066d09ae & 1) == 0) {
    FUN_02b3c81c(OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    DAT_066d09ae = 1;
  }
  lVar4 = *(long *)(param_1 + 0x48);
  local_24[0] = '\0';
  if (lVar4 == 0) {
LAB_053cd2b0:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (*(long *)(lVar4 + 0xa0) == 0) {
    local_24[0] = '\0';
    FUN_04ddecfc(param_1,local_24,0);
    if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(long *)(*(long *)(param_1 + 0x48) + 0xa0) == 0) {
      uVar1 = FUN_053cccdc(param_1);
      if ((uVar1 & 1) != 0) {
        if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        uVar2 = FUN_053ccc08();
                    /* WARNING: Subroutine does not return */
        FUN_053d7134(uVar2,0,0);
      }
      lVar4 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
      FUN_053fcef0(lVar4,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar2 = FUN_053fcf64(lVar4,param_1,0);
      thunk_FUN_02b4aae0(0);
      if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x48) + 0xa0);
      *puVar3 = uVar2;
      thunk_FUN_02bb0e9c(puVar3,uVar2);
    }
    if (local_24[0] != '\0') {
      thunk_FUN_02b4a54c(param_1,0);
    }
    lVar4 = *(long *)(param_1 + 0x48);
    if (lVar4 == 0) goto LAB_053cd2b0;
  }
  return *(undefined8 *)(lVar4 + 0xa0);
}


