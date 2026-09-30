/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$OnTransparencyChanged
ENTRY_POINT: 06d925ac
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__OnTransparencyChanged
               (ulong param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  long *unaff_x21;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((param_1 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e68f00);
    *(undefined1 *)(unaff_x20 + 0xa5c) = 1;
  }
  uVar2 = *(undefined8 *)(unaff_x19 + 0x10);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar1 = FUN_085dfaac(uVar2,0,0);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar1 = FUN_085dfaac(uVar2,0,0);
    if ((uVar1 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        fVar3 = (float)FUN_085eb198(*(long *)(unaff_x19 + 0x10),0);
        if (*(long *)(unaff_x19 + 0x18) != 0) {
          fVar5 = param_3;
          fVar6 = param_4;
          fVar4 = (float)FUN_085eb198(*(long *)(unaff_x19 + 0x18),0);
          if (DAT_09410538 == '\0') {
            FUN_03c8f898(PTR_DAT_08e6a6b8);
            DAT_09410538 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          *(float *)(unaff_x19 + 0x28) =
               SQRT((param_4 - fVar6) * (param_4 - fVar6) +
                    (fVar3 - fVar4) * (fVar3 - fVar4) + (param_3 - fVar5) * (param_3 - fVar5));
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
  }
  return;
}


