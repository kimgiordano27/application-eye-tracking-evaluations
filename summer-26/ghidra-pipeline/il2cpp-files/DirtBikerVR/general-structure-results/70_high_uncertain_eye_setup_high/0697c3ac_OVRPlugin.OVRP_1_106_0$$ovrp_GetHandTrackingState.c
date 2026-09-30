/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_GetHandTrackingState
ENTRY_POINT: 0697c3ac
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_GetHandTrackingState
               (undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  
  do {
    if (param_3 == 0) {
LAB_0697c424:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    unaff_w22 = unaff_w22 - unaff_w21;
    iVar4 = (int)*(undefined8 *)(param_3 + 0x18);
    if (iVar4 < param_4) {
      thunk_FUN_03af1434(PTR_DAT_08488858);
      uVar2 = thunk_FUN_03ac74bc();
      FUN_06788338(uVar2,0);
      uVar3 = thunk_FUN_03af1434(PTR_DAT_084b7628);
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar2,uVar3);
    }
    if (param_4 == iVar4) {
      param_4 = 0;
      *(undefined4 *)(unaff_x19 + 0x20) = 0;
    }
    if (unaff_w22 < 1) {
      *(float *)(unaff_x19 + 0x28) =
           *(float *)(unaff_x19 + 0x28) + (float)*(int *)(unaff_x20 + 0x18) / DAT_015c5b44;
      if ((*(long *)(unaff_x19 + 0x10) != 0) &&
         (lVar1 = Unity_Properties_PropertyPath__Combine(*(long *)(unaff_x19 + 0x10),0), lVar1 != 0)
         ) {
        FUN_07c34080(lVar1,*(undefined8 *)(unaff_x19 + 0x18),0,0);
        return;
      }
      goto LAB_0697c424;
    }
    unaff_w21 = unaff_w22;
    if (iVar4 - param_4 <= unaff_w22) {
      unaff_w21 = iVar4 - param_4;
    }
    FUN_06773c1c();
    param_3 = *(long *)(unaff_x19 + 0x18);
    param_4 = unaff_w21 + *(int *)(unaff_x19 + 0x20);
    *(int *)(unaff_x19 + 0x20) = param_4;
  } while( true );
}


