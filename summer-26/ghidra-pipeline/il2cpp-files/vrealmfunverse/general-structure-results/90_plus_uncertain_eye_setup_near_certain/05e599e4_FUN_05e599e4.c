/*
FUNCTION_NAME: FUN_05e599e4
ENTRY_POINT: 05e599e4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_05e599e4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  if ((DAT_066dc60f & 1) == 0) {
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_116__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_117__);
    DAT_066dc60f = 1;
  }
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__810_117__;
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar3 = (int)*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    if (0 < iVar3) {
      lVar4 = 0;
      do {
        lVar2 = *(long *)(param_1 + 0x10);
        if (lVar2 == 0) goto LAB_05e59a98;
        if (*(uint *)(lVar2 + 0x18) <= (uint)lVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        lVar2 = *(long *)(lVar2 + lVar4 * 8 + 0x20);
        if (lVar2 == 0) goto LAB_05e59a98;
        FUN_03f09608(lVar2,*(undefined8 *)puVar1);
        lVar4 = lVar4 + 1;
      } while (iVar3 != (int)lVar4);
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_04a983a0(*(long *)(param_1 + 0x18),
                   *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_116__);
      return;
    }
  }
LAB_05e59a98:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


