/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector3f>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02b75d70
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 135
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector3f>__System_Collections_IEnumerator_get_Current
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((DAT_044a4ec5 & 1) == 0) {
    FUN_01d7d918(
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                );
    FUN_01d7d918(StringLiteral_2867);
    FUN_01d7d918(StringLiteral_2868);
    FUN_01d7d918(StringLiteral_2869);
    FUN_01d7d918(StringLiteral_2870);
    DAT_044a4ec5 = 1;
  }
  puVar4 = StringLiteral_2868;
  puVar3 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033a44fc(4,0);
  }
  FUN_032e11f0(param_2,*(undefined8 *)StringLiteral_2870,*(undefined4 *)(param_1 + 0x2c),0);
  lVar7 = *(long *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)puVar4;
  if (lVar7 == 0) {
    lVar7 = FUN_021bb118(*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x18));
  }
  puVar4 = StringLiteral_2867;
  uVar8 = *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x148);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar8 = FUN_033a87c8(uVar8,0);
  FUN_032dfad4(param_2,uVar6,lVar7,uVar8,0);
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x18);
  }
  FUN_032e11f0(param_2,*(undefined8 *)puVar4,uVar5,0);
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    lVar7 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x150);
    iVar2 = *(int *)(param_1 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01dde7f8();
    }
    puVar4 = StringLiteral_2869;
    uVar6 = FUN_01d7d9bc(lVar7,iVar2 - iVar1);
    FUN_02b75b9c(param_1,uVar6,0,
                 *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x158));
    uVar8 = *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x160);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar8 = FUN_033a87c8(uVar8,0);
    FUN_032dfad4(param_2,*(undefined8 *)puVar4,uVar6,uVar8,0);
    return;
  }
  return;
}


