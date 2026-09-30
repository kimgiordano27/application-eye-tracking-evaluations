/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnInstanceCreate
ENTRY_POINT: 05695fa8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_UnityOpenXR__OnInstanceCreate(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  int unaff_w22;
  
  if ((-1 < (int)unaff_w20) && (0 < unaff_w22)) {
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    iVar2 = unaff_w22 + unaff_w20;
    if (*(int *)(unaff_x19 + 0x18) < iVar2) {
      param_1 = 0;
    }
    else {
      if ((int)unaff_w20 < iVar2) {
        uVar4 = (ulong)unaff_w20;
        puVar3 = (undefined8 *)(*(long *)(unaff_x21 + 0x10) + (ulong)unaff_w20 * 8);
        do {
          if (*(uint *)(unaff_x19 + 0x18) <= (uint)uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          lVar1 = uVar4 * 8;
          uVar4 = uVar4 + 1;
          *puVar3 = *(undefined8 *)(unaff_x19 + 0x20 + lVar1);
          puVar3 = puVar3 + 1;
        } while ((long)iVar2 != uVar4);
      }
      param_1 = 1;
    }
  }
  return param_1;
}


