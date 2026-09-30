/*
FUNCTION_NAME: OVRManager$$get_nativeColorGamut
ENTRY_POINT: 033a85b4
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


void OVRManager__get_nativeColorGamut(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long *plVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  puVar3 = StringLiteral_4597;
  if ((*(byte *)(unaff_x22 + 0x88b) & 1) == 0) {
    FUN_01d7d918(StringLiteral_7990);
    FUN_01d7d918(StringLiteral_4428);
    FUN_01d7d918(StringLiteral_8452);
    FUN_01d7d918(StringLiteral_7277);
    FUN_01d7d918(StringLiteral_4597);
    FUN_01d7d918(
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                );
    FUN_01d7d918(StringLiteral_8453);
    FUN_01d7d918(StringLiteral_8454);
    FUN_01d7d918(StringLiteral_8455);
    *(undefined1 *)(unaff_x22 + 0x88b) = 1;
  }
  puVar4 = StringLiteral_7990;
  puVar2 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_033d8040(param_1,0);
  uVar9 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar9 = FUN_033a87c8(uVar9);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  plVar6 = (long *)FUN_032df734(param_2,*(undefined8 *)StringLiteral_8455,uVar9,0);
  if (plVar6 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    lVar8 = *(long *)StringLiteral_4428;
    bVar1 = *(byte *)(lVar8 + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar6 + 200) + ((ulong)bVar1 - 1) * 8) != lVar8)) goto LAB_033a87c0;
    *(long **)(param_1 + 0x10) = plVar6;
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar6 + 200) + ((ulong)bVar1 - 1) * 8) != lVar8)) goto LAB_033a87c0;
  }
  puVar4 = StringLiteral_8454;
  puVar2 = StringLiteral_8453;
  puVar3 = StringLiteral_8452;
  thunk_FUN_01e10808(param_1 + 0x10,plVar6);
  uVar5 = FUN_032e188c(param_2,*(undefined8 *)puVar2,0);
  uVar9 = FUN_033a87c8(*(undefined8 *)puVar3);
  plVar6 = (long *)FUN_032df62c(param_2,*(undefined8 *)puVar4,uVar9,0);
  if (plVar6 != (long *)0x0) {
    if (*(long *)(*plVar6 + 0x40) != *(long *)(*(long *)StringLiteral_7277 + 0x40)) {
LAB_033a87c0:
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c(plVar6);
    }
    puVar7 = (undefined4 *)thunk_FUN_01de290c();
    *(undefined4 *)(param_1 + 0x18) = *puVar7;
  }
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | uVar5 & 1;
  return;
}


