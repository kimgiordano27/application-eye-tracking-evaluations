/*
FUNCTION_NAME: OVRPlugin$$GetSpaceDynamicObjectData
ENTRY_POINT: 033d52ec
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceDynamicObjectData(int param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long unaff_x19;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  *(int *)(unaff_x19 + 0x48) = param_1;
  puVar2 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
  if (param_1 == 3) {
    return;
  }
  if (param_1 == 8) {
    uVar9 = *(undefined8 *)StringLiteral_5640;
    if (*(int *)(*(long *)
                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033a87c8(uVar9,0);
    uVar9 = FUN_032df734();
    puVar2 = StringLiteral_1291;
    uVar5 = thunk_FUN_01de26bc(uVar9,*(undefined8 *)StringLiteral_1291);
    *(undefined8 *)(unaff_x19 + 0x10) = uVar5;
    uVar9 = thunk_FUN_01de26bc(uVar9,*(undefined8 *)puVar2);
    thunk_FUN_01e10808((undefined8 *)(unaff_x19 + 0x10),uVar9);
    FUN_033a87c8(*(undefined8 *)StringLiteral_5633,0);
    uVar9 = FUN_032df734();
    puVar2 = StringLiteral_151;
    uVar5 = thunk_FUN_01de26bc(uVar9,*(undefined8 *)StringLiteral_151);
    *(undefined8 *)(unaff_x19 + 0x18) = uVar5;
    uVar9 = thunk_FUN_01de26bc(uVar9,*(undefined8 *)puVar2);
    thunk_FUN_01e10808((undefined8 *)(unaff_x19 + 0x18),uVar9);
  }
  else if (param_1 == 7) {
    uVar9 = *(undefined8 *)StringLiteral_8979;
    if (*(int *)(*(long *)
                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033a87c8(uVar9,0);
    plVar4 = (long *)FUN_032df734();
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x30) = 0;
    }
    else {
      lVar6 = *(long *)StringLiteral_4968;
      bVar1 = *(byte *)(lVar6 + 0x130);
      if (*(byte *)(*plVar4 + 0x130) < bVar1) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = plVar4;
        if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar6) {
          plVar7 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x30) = plVar7;
      if (*(byte *)(*plVar4 + 0x130) < bVar1) {
        plVar4 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar6) {
        plVar4 = (long *)0x0;
      }
    }
    thunk_FUN_01e10808(unaff_x19 + 0x30,plVar4);
    FUN_033a87c8(*(undefined8 *)StringLiteral_6183,0);
    plVar4 = (long *)FUN_032df734();
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x28) = 0;
    }
    else {
      lVar6 = *(long *)puVar2;
      bVar1 = *(byte *)(lVar6 + 0x130);
      if (*(byte *)(*plVar4 + 0x130) < bVar1) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = plVar4;
        if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar6) {
          plVar7 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x28) = plVar7;
      if (*(byte *)(*plVar4 + 0x130) < bVar1) {
        plVar4 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar6) {
        plVar4 = (long *)0x0;
      }
    }
    thunk_FUN_01e10808(unaff_x19 + 0x28,plVar4);
    uVar3 = FUN_032e1a0c();
    *(undefined4 *)(unaff_x19 + 0x20) = uVar3;
    FUN_033a87c8(*(undefined8 *)StringLiteral_5633,0);
    uVar9 = FUN_032df734();
    puVar2 = StringLiteral_151;
    uVar5 = thunk_FUN_01de26bc(uVar9,*(undefined8 *)StringLiteral_151);
    puVar8 = (undefined8 *)(unaff_x19 + 0x18);
    *puVar8 = uVar5;
    uVar9 = thunk_FUN_01de26bc(uVar9,*(undefined8 *)puVar2);
    goto LAB_033d5648;
  }
  uVar9 = FUN_032e1e68();
  *(undefined8 *)(unaff_x19 + 0x38) = uVar9;
  thunk_FUN_01e10808();
  uVar9 = FUN_032e1e68();
  puVar8 = (undefined8 *)(unaff_x19 + 0x40);
  *puVar8 = uVar9;
LAB_033d5648:
  thunk_FUN_01e10808(puVar8,uVar9);
  return;
}


