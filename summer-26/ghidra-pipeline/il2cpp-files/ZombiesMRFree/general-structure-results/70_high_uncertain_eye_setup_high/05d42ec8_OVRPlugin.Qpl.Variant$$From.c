/*
FUNCTION_NAME: OVRPlugin.Qpl.Variant$$From
ENTRY_POINT: 05d42ec8
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


void OVRPlugin_Qpl_Variant__From(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  uint in_w9;
  uint uVar3;
  long in_x10;
  long in_x11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  long *plVar4;
  
  while( true ) {
    uVar3 = (int)in_x10 + 1;
    *(undefined4 *)(param_3 + in_x10 * 4 + 0x20) = *(undefined4 *)(in_x11 + 0x20);
    if ((int)in_w9 <= (int)uVar3) {
      do {
        if (unaff_x21 == 0) goto LAB_05d42f28;
        if (*(uint *)(unaff_x21 + 0x18) <= (uint)unaff_x23) goto LAB_05d42f24;
        *(long *)(unaff_x21 + unaff_x23 * 8 + 0x20) = param_3;
        thunk_FUN_03048534();
        uVar3 = (uint)unaff_x23 + 1;
        if ((int)*(uint *)(unaff_x19 + 0x18) <= (int)uVar3) {
          return;
        }
        if (*(uint *)(unaff_x19 + 0x18) <= uVar3) goto LAB_05d42f24;
        unaff_x23 = (long)(int)uVar3;
        plVar4 = (long *)(unaff_x19 + unaff_x23 * 8 + 0x20);
        lVar2 = *plVar4;
        if (lVar2 == 0) goto LAB_05d42f28;
        param_3 = FUN_02fe9340(*unaff_x22,*(undefined4 *)(lVar2 + 0x18));
        if (*(uint *)(unaff_x19 + 0x18) <= uVar3) goto LAB_05d42f24;
        param_1 = *plVar4;
        if (param_1 == 0) goto LAB_05d42f28;
        in_w9 = *(uint *)(param_1 + 0x18);
      } while ((int)in_w9 < 1);
      uVar3 = 0;
    }
    if (in_w9 <= uVar3) break;
    if (unaff_x20 == 0) {
LAB_05d42f28:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    in_x10 = (long)(int)uVar3;
    uVar1 = *(uint *)(param_1 + in_x10 * 4 + 0x20);
    if (*(uint *)(unaff_x20 + 0x18) <= uVar1) break;
    if (param_3 == 0) goto LAB_05d42f28;
    if (*(uint *)(param_3 + 0x18) <= uVar3) break;
    in_x11 = unaff_x20 + (long)(int)uVar1 * 4;
  }
LAB_05d42f24:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


