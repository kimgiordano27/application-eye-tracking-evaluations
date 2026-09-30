/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Icon$$set_RaycastTarget
ENTRY_POINT: 06d92584
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Icon__set_RaycastTarget
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  puVar1 = PTR_DAT_08e68f00;
  if ((DAT_09419a5c & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e68f00);
    DAT_09419a5c = 1;
  }
  uVar3 = *(undefined8 *)(param_4 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar2 = FUN_085dfaac(uVar3,0,0);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_4 + 0x20);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar2 = FUN_085dfaac(uVar3,0,0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(param_4 + 0x10) != 0) {
        fVar4 = (float)FUN_085eb198(*(long *)(param_4 + 0x10),0);
        if (*(long *)(param_4 + 0x18) != 0) {
          fVar6 = param_2;
          fVar7 = param_3;
          fVar5 = (float)FUN_085eb198(*(long *)(param_4 + 0x18),0);
          if (DAT_09410538 == '\0') {
            FUN_03c8f898(PTR_DAT_08e6a6b8);
            DAT_09410538 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          *(float *)(param_4 + 0x28) =
               SQRT((param_3 - fVar7) * (param_3 - fVar7) +
                    (fVar4 - fVar5) * (fVar4 - fVar5) + (param_2 - fVar6) * (param_2 - fVar6));
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
  }
  return;
}


