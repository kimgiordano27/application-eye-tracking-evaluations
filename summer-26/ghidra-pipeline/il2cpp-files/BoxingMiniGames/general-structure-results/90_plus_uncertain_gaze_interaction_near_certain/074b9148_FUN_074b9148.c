/*
FUNCTION_NAME: FUN_074b9148
ENTRY_POINT: 074b9148
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 129
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_eye_source;functionality_gaze_interaction_hits_1
*/


void FUN_074b9148(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long *local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long *local_70;
  
  if ((DAT_07ef42d8 & 1) == 0) {
    FUN_03642964(Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_GetSubArray__);
    FUN_03642964(Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_get_IsCreated__);
    FUN_03642964(Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_op_Implicit__);
    FUN_03642964(Method_Unity_Collections_NativeArray<ShaderInput_LightData>__ctor__);
    FUN_03642964(Method_Unity_Collections_NativeArray<ShaderInput_LightData>_Dispose__);
    FUN_03642964(Method_Unity_Collections_NativeArray<TubeRenderer_VertexLayout>__ctor__);
    FUN_03642964(Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__ctor__);
    FUN_03642964(Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>_Dispose__);
    FUN_03642964(
                Method_Unity_Collections_NativeArray<MeshGenerator_TessellationJobParameters>_Dispose__
                );
    DAT_07ef42d8 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = (long *)0x0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = (long *)0x0;
  lVar8 = FUN_074b82c8(param_1);
  puVar6 = Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>_Dispose__;
  puVar5 = Method_Unity_Collections_NativeArray<ShaderInput_LightData>__ctor__;
  puVar4 = Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_op_Implicit__;
  puVar3 = Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_get_IsCreated__;
  puVar2 = Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_GetSubArray__;
  puVar1 = Method_Unity_Collections_NativeArray<MeshGenerator_TessellationJobParameters>_Dispose__;
  if (lVar8 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_0422ad98(&local_b0,*(long *)(param_1 + 0x38),
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__ctor__);
    local_70 = local_a0;
    puStack_78 = puStack_a8;
    local_80 = local_b0;
    local_b0 = 0;
    puStack_a8 = &local_80;
    while (uVar9 = FUN_05897378(&local_80,*(undefined8 *)puVar5), plVar7 = local_70,
          (uVar9 & 1) != 0) {
      if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar8 = *local_70;
      iVar13 = *(int *)(param_1 + 0x74);
      iVar12 = *(int *)(param_1 + 0x78);
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar10 = (undefined8 *)(lVar8 + (long)(*piVar11 + 5) * 0x10 + 0x138);
            goto LAB_074b92d4;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)FUN_0367cd30(local_70,*(long *)puVar1,5);
LAB_074b92d4:
      (*(code *)*puVar10)((float)iVar13,(float)iVar12,plVar7,puVar10[1]);
    }
    FUN_05897374(&local_80,*(undefined8 *)puVar2);
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_0422ad98(&local_98,*(long *)(param_1 + 0x30),*(undefined8 *)puVar6);
      local_b0 = 0;
      puStack_a8 = &local_98;
      while( true ) {
        uVar9 = FUN_05897378(&local_98,*(undefined8 *)puVar4);
        if ((uVar9 & 1) == 0) {
          FUN_05897374(&local_98,*(undefined8 *)puVar3);
          return;
        }
        if (local_88 == (long *)0x0) break;
        (**(code **)(*local_88 + 0x508))
                  ((float)*(int *)(param_1 + 0x74),(float)*(int *)(param_1 + 0x78),local_88,
                   *(undefined8 *)(*local_88 + 0x510));
      }
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


