/*
FUNCTION_NAME: OVRPlugin$$EraseSpace
ENTRY_POINT: 033d1060
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__EraseSpace(long param_1,undefined8 param_2)

{
  byte bVar1;
  long *plVar2;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar3;
  
  (**(code **)(param_1 + 0x458))(param_2,*(undefined8 *)(param_1 + 0x460));
  uVar3 = *(undefined8 *)StringLiteral_5640;
  if (*(int *)(*(long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              + 0xe0) == 0) {
    thunk_FUN_01dc4f30(*(long *)
                        Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                      );
  }
  FUN_033a87c8(uVar3,0);
  if (unaff_x19 != 0) {
    FUN_032dfad4();
    plVar2 = (long *)(**(code **)(*unaff_x20 + 0x438))();
    if (plVar2 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)StringLiteral_1157 + 0x130);
      if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_1157
         )) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(plVar2);
      }
    }
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x2c8))(plVar2,*(undefined8 *)(*plVar2 + 0x2d0));
      thunk_FUN_01d6f598(plVar2,0);
      FUN_033c41ec();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


