/*
FUNCTION_NAME: OVRPlugin$$QuerySpaces2
ENTRY_POINT: 033d1550
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__QuerySpaces2(long *param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  long unaff_x21;
  undefined8 uVar5;
  
  if ((*(byte *)(unaff_x21 + 0xa1c) & 1) == 0) {
    FUN_01d7d918(
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                );
    FUN_01d7d918(StringLiteral_8985);
    FUN_01d7d918(StringLiteral_1538);
    FUN_01d7d918(StringLiteral_8986);
    *(undefined1 *)(unaff_x21 + 0xa1c) = 1;
  }
  if ((param_2 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x168);
    uVar5 = *(undefined8 *)(*param_1 + 0x170);
LAB_033d15d0:
                    /* WARNING: Could not recover jumptable at 0x033d15e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*UNRECOVERED_JUMPTABLE)(param_1,uVar5);
    return lVar3;
  }
  lVar3 = FUN_033ab2a8(param_1,0);
  if (lVar3 != 0) {
    uVar2 = FUN_033ab490(lVar3,0);
    lVar4 = *param_1;
    if ((uVar2 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 0x1a8);
      uVar5 = *(undefined8 *)(lVar4 + 0x1b0);
      goto LAB_033d15d0;
    }
    lVar4 = (**(code **)(lVar4 + 0x168))(param_1,*(undefined8 *)(lVar4 + 0x170));
    uVar2 = FUN_033ac7d8(lVar3,0);
    puVar1 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
    if ((uVar2 & 1) == 0) {
      uVar5 = *(undefined8 *)StringLiteral_1538;
      if (*(int *)(*(long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                  + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar5 = FUN_033a87c8(uVar5,0);
      uVar2 = FUN_033aa3b4(lVar3,uVar5,0);
      if ((uVar2 & 1) == 0) {
        uVar5 = *(undefined8 *)StringLiteral_8985;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar5 = FUN_033a87c8(uVar5,0);
        uVar2 = FUN_033aa3b4(lVar3,uVar5,0);
        if ((uVar2 & 1) == 0) {
          return lVar4;
        }
      }
    }
    if ((*(long *)StringLiteral_8986 != 0) && (lVar4 != 0)) {
      lVar3 = FUN_0327d024(lVar4,*(undefined4 *)(*(long *)StringLiteral_8986 + 0x10),0);
      return lVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


