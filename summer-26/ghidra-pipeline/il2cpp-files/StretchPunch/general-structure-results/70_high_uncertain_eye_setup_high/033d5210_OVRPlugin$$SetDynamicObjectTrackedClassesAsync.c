/*
FUNCTION_NAME: OVRPlugin$$SetDynamicObjectTrackedClassesAsync
ENTRY_POINT: 033d5210
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetDynamicObjectTrackedClassesAsync(void)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long unaff_x19;
  undefined8 *puVar9;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar10;
  
  FUN_01d7d918();
  FUN_01d7d918(StringLiteral_8979);
  FUN_01d7d918(StringLiteral_4968);
  FUN_01d7d918(StringLiteral_5640);
  FUN_01d7d918(StringLiteral_1291);
  FUN_01d7d918(StringLiteral_6183);
  FUN_01d7d918(
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              );
  FUN_01d7d918(StringLiteral_8980);
  FUN_01d7d918(StringLiteral_9036);
  FUN_01d7d918(StringLiteral_8981);
  FUN_01d7d918(StringLiteral_6197);
  FUN_01d7d918(StringLiteral_8982);
  FUN_01d7d918(StringLiteral_8824);
  FUN_01d7d918(StringLiteral_6199);
  FUN_01d7d918(StringLiteral_3161);
  *(undefined1 *)(unaff_x21 + 0xa42) = 1;
  FUN_033d8040();
  if (unaff_x20 == 0) {
    thunk_FUN_01dd295c(StringLiteral_1111);
    uVar10 = thunk_FUN_01de27b8();
    uVar6 = thunk_FUN_01dd295c(StringLiteral_2755);
    FUN_032870b8(uVar10,uVar6,0);
    uVar6 = thunk_FUN_01dd295c(StringLiteral_9037);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar10,uVar6);
  }
  iVar3 = FUN_032e1a0c();
  *(int *)(unaff_x19 + 0x48) = iVar3;
  puVar2 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
  if (iVar3 == 3) {
    return;
  }
  if (iVar3 == 8) {
    uVar10 = *(undefined8 *)StringLiteral_5640;
    if (*(int *)(*(long *)
                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033a87c8(uVar10,0);
    uVar10 = FUN_032df734();
    puVar2 = StringLiteral_1291;
    uVar6 = thunk_FUN_01de26bc(uVar10,*(undefined8 *)StringLiteral_1291);
    *(undefined8 *)(unaff_x19 + 0x10) = uVar6;
    uVar10 = thunk_FUN_01de26bc(uVar10,*(undefined8 *)puVar2);
    thunk_FUN_01e10808((undefined8 *)(unaff_x19 + 0x10),uVar10);
    FUN_033a87c8(*(undefined8 *)StringLiteral_5633,0);
    uVar10 = FUN_032df734();
    puVar2 = StringLiteral_151;
    uVar6 = thunk_FUN_01de26bc(uVar10,*(undefined8 *)StringLiteral_151);
    *(undefined8 *)(unaff_x19 + 0x18) = uVar6;
    uVar10 = thunk_FUN_01de26bc(uVar10,*(undefined8 *)puVar2);
    thunk_FUN_01e10808((undefined8 *)(unaff_x19 + 0x18),uVar10);
  }
  else if (iVar3 == 7) {
    uVar10 = *(undefined8 *)StringLiteral_8979;
    if (*(int *)(*(long *)
                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033a87c8(uVar10,0);
    plVar5 = (long *)FUN_032df734();
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x30) = 0;
    }
    else {
      lVar7 = *(long *)StringLiteral_4968;
      bVar1 = *(byte *)(lVar7 + 0x130);
      if (*(byte *)(*plVar5 + 0x130) < bVar1) {
        plVar8 = (long *)0x0;
      }
      else {
        plVar8 = plVar5;
        if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar7) {
          plVar8 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x30) = plVar8;
      if (*(byte *)(*plVar5 + 0x130) < bVar1) {
        plVar5 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar7) {
        plVar5 = (long *)0x0;
      }
    }
    thunk_FUN_01e10808(unaff_x19 + 0x30,plVar5);
    FUN_033a87c8(*(undefined8 *)StringLiteral_6183,0);
    plVar5 = (long *)FUN_032df734();
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x28) = 0;
    }
    else {
      lVar7 = *(long *)puVar2;
      bVar1 = *(byte *)(lVar7 + 0x130);
      if (*(byte *)(*plVar5 + 0x130) < bVar1) {
        plVar8 = (long *)0x0;
      }
      else {
        plVar8 = plVar5;
        if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar7) {
          plVar8 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x28) = plVar8;
      if (*(byte *)(*plVar5 + 0x130) < bVar1) {
        plVar5 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar7) {
        plVar5 = (long *)0x0;
      }
    }
    thunk_FUN_01e10808(unaff_x19 + 0x28,plVar5);
    uVar4 = FUN_032e1a0c();
    *(undefined4 *)(unaff_x19 + 0x20) = uVar4;
    FUN_033a87c8(*(undefined8 *)StringLiteral_5633,0);
    uVar10 = FUN_032df734();
    puVar2 = StringLiteral_151;
    uVar6 = thunk_FUN_01de26bc(uVar10,*(undefined8 *)StringLiteral_151);
    puVar9 = (undefined8 *)(unaff_x19 + 0x18);
    *puVar9 = uVar6;
    uVar10 = thunk_FUN_01de26bc(uVar10,*(undefined8 *)puVar2);
    goto LAB_033d5648;
  }
  uVar10 = FUN_032e1e68();
  *(undefined8 *)(unaff_x19 + 0x38) = uVar10;
  thunk_FUN_01e10808();
  uVar10 = FUN_032e1e68();
  puVar9 = (undefined8 *)(unaff_x19 + 0x40);
  *puVar9 = uVar10;
LAB_033d5648:
  thunk_FUN_01e10808(puVar9,uVar10);
  return;
}


