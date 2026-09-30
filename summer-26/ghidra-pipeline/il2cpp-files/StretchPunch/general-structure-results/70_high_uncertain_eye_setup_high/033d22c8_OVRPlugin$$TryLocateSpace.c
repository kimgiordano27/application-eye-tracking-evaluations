/*
FUNCTION_NAME: OVRPlugin$$TryLocateSpace
ENTRY_POINT: 033d22c8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin__TryLocateSpace(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *in_x9;
  ulong unaff_x19;
  undefined1 *unaff_x20;
  
  uVar2 = (*in_x9)();
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_033ac7d8();
    if ((uVar2 & 1) != 0) goto LAB_033d2348;
    uVar2 = FUN_033ac058();
    if ((uVar2 & 1) == 0) goto LAB_033d241c;
    uVar3 = thunk_FUN_01dfff04();
    puVar1 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
    uVar4 = *(undefined8 *)StringLiteral_2161;
    if (*(int *)(*(long *)
                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                + 0xe0) == 0) {
      thunk_FUN_01dc4f30(*(long *)
                          Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                        );
    }
    uVar4 = FUN_033a87c8(uVar4,0);
    uVar2 = FUN_033aa3b4(uVar3,uVar4,0);
    if ((uVar2 & 1) != 0) {
      return unaff_x19;
    }
    uVar4 = *(undefined8 *)StringLiteral_2163;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar4 = FUN_033a87c8(uVar4,0);
    uVar2 = FUN_033aa3b4(uVar3,uVar4,0);
    uVar2 = uVar2 & 1;
  }
  else {
    if (*(int *)(*(long *)StringLiteral_1148 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar3 = FUN_033c59f4();
    uVar4 = thunk_FUN_01dfff04();
    if (*(int *)(*(long *)
                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                + 0xe0) == 0) {
      thunk_FUN_01dc4f30(*(long *)
                          Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                        );
    }
    uVar2 = FUN_033aa3b4(uVar3,uVar4,0);
    if ((uVar2 & 1) != 0) {
      return unaff_x19;
    }
LAB_033d2348:
    if (*(int *)(*(long *)StringLiteral_1157 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    unaff_x19 = FUN_033d2430();
    uVar2 = unaff_x19;
  }
  if (uVar2 != 0) {
    return unaff_x19;
  }
LAB_033d241c:
  *unaff_x20 = 1;
  return 0;
}


