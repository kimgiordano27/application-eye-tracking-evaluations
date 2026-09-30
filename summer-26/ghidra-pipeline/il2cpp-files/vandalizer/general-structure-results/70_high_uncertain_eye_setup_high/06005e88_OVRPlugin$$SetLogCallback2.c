/*
FUNCTION_NAME: OVRPlugin$$SetLogCallback2
ENTRY_POINT: 06005e88
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetLogCallback2(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(unaff_x21 + 0xf60);
  if ((*(byte *)(unaff_x20 + 0x958) & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075f6f60);
    FUN_031f20f4(PTR_DAT_075f71c0);
    *(undefined1 *)(unaff_x20 + 0x958) = 1;
  }
  lVar1 = thunk_FUN_0322f148(*puVar4);
  FUN_05ffdb1c();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x10) = 1;
    *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x138);
    thunk_FUN_0329bf60();
    if (*(long *)(param_1 + 0xd0) != 0) {
      lVar3 = *(long *)(param_1 + 0x170);
      uVar2 = FUN_06e5502c(*(long *)(param_1 + 0xd0),0);
      if (lVar3 != 0) {
        FUN_06002bc0(lVar3,uVar2,1,0,lVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


