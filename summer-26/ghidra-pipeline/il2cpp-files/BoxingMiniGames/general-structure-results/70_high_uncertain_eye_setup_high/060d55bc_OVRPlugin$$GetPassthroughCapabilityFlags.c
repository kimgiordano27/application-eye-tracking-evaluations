/*
FUNCTION_NAME: OVRPlugin$$GetPassthroughCapabilityFlags
ENTRY_POINT: 060d55bc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetPassthroughCapabilityFlags(long param_1,long param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uStack0000000000000008;
  undefined8 in_stack_00000018;
  
  uStack0000000000000008 = 0;
  if (param_2 != 0) {
    in_stack_00000018 = FUN_060b94c4(param_2,0);
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_060ee898(0x3f800000,*(long *)(param_1 + 0x48),&stack0x00000018,0);
      uVar3 = 0;
      while (lVar2 = FUN_060b956c(param_2,0), lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        iVar1 = *(int *)(lVar2 + uVar3 * 4 + 0x20);
        if ((1 << (ulong)((uint)uVar3 & 0x1f) & param_3) != 0 && iVar1 == 1) {
          iVar1 = 2;
        }
        uStack0000000000000008 = CONCAT44(iVar1,(uint)uVar3);
        if (*(long *)(param_1 + 0x48) == 0) break;
        FUN_060eed7c(*(long *)(param_1 + 0x48),&stack0x00000008,
                     (undefined1 *)((long)register0x00000008 + 0xc),0,0);
        uVar3 = uVar3 + 1;
        if (uVar3 == 5) {
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


