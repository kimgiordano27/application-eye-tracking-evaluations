/*
FUNCTION_NAME: FUN_090c1ea0
ENTRY_POINT: 090c1ea0
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_090c1ea0(uint param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  
  if ((DAT_0b330488 & 1) == 0) {
                    /* try { // try from 090c1ec4 to 091c1efb has its CatchHandler @ 090c2084 */
    FUN_04947ee4(PTR_DAT_0ac09788);
    DAT_0b330488 = 1;
  }
  puVar1 = PTR_DAT_0ac09788;
  lVar4 = *param_2;
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= param_1) {
LAB_090c1fac:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    lVar4 = *(long *)(lVar4 + (long)(int)param_1 * 8 + 0x20);
    if (lVar4 != 0) {
      uVar2 = thunk_FUN_0a18aba0(lVar4,0);
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_049a583c(lVar4);
      }
      uVar3 = FUN_0a17cd28(uVar2,0,0);
      uVar5 = param_1;
      if ((uVar3 & 1) == 0) {
        do {
          param_1 = param_1 - 1;
          uVar5 = uVar5 - 1;
                    /* try { // try from 090c1f48 to 091c1f6f has its CatchHandler @ 090c20c8 */
          if ((int)uVar5 < 0) goto LAB_090c1f34;
          lVar4 = *param_2;
          if (lVar4 == 0) goto OVRPlugin_Mesh___ctor;
          if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_090c1fac;
          uVar6 = *(undefined8 *)(lVar4 + (ulong)param_1 * 8 + 0x20);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          uVar3 = FUN_0a17cd28(uVar6,uVar2,0);
        } while ((uVar3 & 1) == 0);
      }
      else {
LAB_090c1f34:
        uVar5 = 0xffffffff;
      }
      return uVar5;
    }
  }
OVRPlugin_Mesh___ctor:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


