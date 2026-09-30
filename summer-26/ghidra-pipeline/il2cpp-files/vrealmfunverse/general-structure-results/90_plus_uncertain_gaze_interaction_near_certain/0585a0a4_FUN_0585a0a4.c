/*
FUNCTION_NAME: FUN_0585a0a4
ENTRY_POINT: 0585a0a4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 171
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_21;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void FUN_0585a0a4(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  if ((DAT_066d2e6a & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(Method_System_Collections_Generic_List<AttackClass_AttackData>_Add__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_GetSubArray__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_get_IsCreated__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_op_Implicit__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<ShaderInput_LightData>__ctor__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<ShaderInput_LightData>_Dispose__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<TubeRenderer_VertexLayout>__ctor__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__ctor__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>_Dispose__);
    DAT_066d2e6a = 1;
  }
  puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>_Dispose__;
  puVar4 = Method_Unity_Collections_NativeArray<TubeRenderer_VertexLayout>__ctor__;
  puVar3 = Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_get_IsCreated__;
  puVar2 = Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_GetSubArray__;
  puVar1 = PTR_DAT_06312d90;
  lVar7 = *(long *)(param_1 + 0x18);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x20) != 0) {
      uVar9 = *(undefined8 *)Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__ctor__;
      FUN_04a71b00(&local_78,lVar7,
                   *(undefined8 *)
                    Method_Unity_Collections_NativeArray<ShaderInput_LightData>__ctor__);
      while (uVar8 = FUN_0472e344(&local_78,*(undefined8 *)puVar3), (uVar8 & 1) != 0) {
        if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        uVar9 = FUN_04c0af28(*(undefined8 *)puVar5,uVar9,*(undefined8 *)(local_68 + 0x58),0);
      }
      FUN_0472e340(&local_78,*(undefined8 *)puVar2);
      uVar9 = FUN_04c00984(*(undefined8 *)puVar4,uVar9,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)puVar1);
      }
      FUN_05c44f60(uVar9,0);
    }
    puVar1 = Method_System_Collections_Generic_List<AttackClass_AttackData>_Add__;
    *(undefined4 *)(param_1 + 0x60) = param_2;
    *(undefined4 *)(param_1 + 100) = param_3;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (DAT_066d2f24 == '\0') {
      FUN_02b3c81c(Method_System_Collections_Generic_List<AttackClass_AttackData>_Add__);
      DAT_066d2f24 = '\x01';
    }
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar7 = *(long *)puVar1;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x30);
    if (lVar7 != 0) {
      bVar6 = FUN_057fe3f0(lVar7,0);
      *(byte *)(param_1 + 0x10) = bVar6 & 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


