/*
FUNCTION_NAME: OVRPlugin.OVRP_1_45_0$$.cctor
ENTRY_POINT: 090d01bc
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


void OVRPlugin_OVRP_1_45_0___cctor(long param_1)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x24;
  long *unaff_x25;
  int unaff_w26;
  
  while (iVar1 = unaff_w26, param_1 != 0) {
    while (unaff_w26 = iVar1, *(int *)(param_1 + 0x18) <= unaff_w21) {
      if (*(int *)(param_1 + 0x18) <= unaff_w26) {
        return;
      }
      unaff_w21 = unaff_w26 + 1;
      iVar1 = unaff_w21;
      unaff_w20 = unaff_w26;
    }
    lVar2 = FUN_06b7fba4(param_1,unaff_w20,*unaff_x24);
    if ((lVar2 == 0) || (*(long *)(unaff_x19 + 0x68) == 0)) break;
    uVar3 = *(undefined8 *)(lVar2 + 0x20);
    lVar2 = FUN_06b7fba4(*(long *)(unaff_x19 + 0x68),unaff_w21,*unaff_x24);
    if (lVar2 == 0) break;
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_0a1f19f4(uVar3,uVar4,0);
    unaff_w21 = unaff_w21 + 1;
    param_1 = *(long *)(unaff_x19 + 0x68);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


