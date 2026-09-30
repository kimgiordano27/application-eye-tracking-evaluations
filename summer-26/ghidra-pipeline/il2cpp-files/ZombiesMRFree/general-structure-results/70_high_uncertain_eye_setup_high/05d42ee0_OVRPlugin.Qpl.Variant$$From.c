/*
FUNCTION_NAME: OVRPlugin.Qpl.Variant$$From
ENTRY_POINT: 05d42ee0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Variant__From(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  long *plVar6;
  
  while (unaff_x21 != 0) {
    if (*(uint *)(unaff_x21 + 0x18) <= (uint)unaff_x23) {
LAB_05d42f24:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    *(long *)(unaff_x21 + unaff_x23 * 8 + 0x20) = param_2;
    thunk_FUN_03048534();
    uVar1 = (uint)unaff_x23 + 1;
    if ((int)*(uint *)(unaff_x19 + 0x18) <= (int)uVar1) {
      return;
    }
    if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_05d42f24;
    unaff_x23 = (long)(int)uVar1;
    plVar6 = (long *)(unaff_x19 + unaff_x23 * 8 + 0x20);
    lVar3 = *plVar6;
    if (lVar3 == 0) break;
    param_2 = FUN_02fe9340(*unaff_x22,*(undefined4 *)(lVar3 + 0x18));
    if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_05d42f24;
    lVar3 = *plVar6;
    if (lVar3 == 0) break;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      uVar4 = 0;
      do {
        if (uVar1 <= uVar4) goto LAB_05d42f24;
        if (unaff_x20 == 0) goto LAB_05d42f28;
        lVar5 = (long)(int)uVar4;
        uVar2 = *(uint *)(lVar3 + lVar5 * 4 + 0x20);
        if (*(uint *)(unaff_x20 + 0x18) <= uVar2) goto LAB_05d42f24;
        if (param_2 == 0) goto LAB_05d42f28;
        if (*(uint *)(param_2 + 0x18) <= uVar4) goto LAB_05d42f24;
        uVar4 = uVar4 + 1;
        *(undefined4 *)(param_2 + lVar5 * 4 + 0x20) =
             *(undefined4 *)(unaff_x20 + (long)(int)uVar2 * 4 + 0x20);
      } while ((int)uVar4 < (int)uVar1);
    }
  }
LAB_05d42f28:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


