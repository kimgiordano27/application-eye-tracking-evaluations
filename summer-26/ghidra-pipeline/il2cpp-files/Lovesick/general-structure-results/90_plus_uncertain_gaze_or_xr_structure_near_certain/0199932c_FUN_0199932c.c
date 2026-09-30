/*
FUNCTION_NAME: FUN_0199932c
ENTRY_POINT: 0199932c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 164
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction
*/


void FUN_0199932c(float param_1,long param_2,int param_3,uint param_4,undefined8 *param_5,
                 long param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  float fVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  float fVar8;
  ulong uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 local_c0;
  float local_b8;
  float fStack_b4;
  undefined4 local_b0;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  undefined4 local_98;
  undefined8 local_90;
  float local_88;
  
  if ((DAT_0377a4ab & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_First<MemberInfo>__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_ARSubsystems_MutableRuntimeReferenceImageLibrary_ValidateAndThrow__
                      );
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<TextVertex>_Dispose__);
    thunk_FUN_00d48444(OVRPlugin_<>c_TypeInfo);
    DAT_0377a4ab = 1;
  }
  puVar3 = Method_UnityEngine_XR_ARSubsystems_MutableRuntimeReferenceImageLibrary_ValidateAndThrow__
  ;
  puVar2 = OVRPlugin_<>c_TypeInfo;
  local_88 = 0.0;
  local_90 = 0;
  if ((*(long *)(param_2 + 0x18) != 0) && (lVar6 = *(long *)(param_2 + 0x20), lVar6 != 0)) {
    iVar1 = *(int *)(*(long *)(param_2 + 0x18) + 0x48);
    iVar7 = 0;
    do {
      if (*(uint *)(lVar6 + 0x18) <= param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar6 = *(long *)(lVar6 + (long)(int)param_4 * 8 + 0x20);
      if (lVar6 == 0) break;
      if (*(int *)(lVar6 + 0x18) <= iVar7) {
        return;
      }
      FUN_0132138c(lVar6,iVar7,&local_a8,*(undefined8 *)puVar2);
      uVar5 = local_98;
      fVar4 = fStack_9c;
      uVar11 = 0;
      uVar13 = 0;
      uVar9 = (ulong)(uint)(local_a8 * param_1);
      uVar14 = (ulong)(uint)(fStack_a4 * param_1);
      local_88 = local_a0 * param_1;
      uVar15 = (ulong)(uint)local_88;
      local_90 = CONCAT44(fStack_a4 * param_1,local_a8 * param_1);
      if (iVar1 != param_3) {
        fVar8 = local_a8;
        fVar10 = local_a0;
        if (*(int *)(*(long *)Method_System_Linq_Enumerable_First<MemberInfo>__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar9 = FUN_01a38114(&local_90,0);
        uVar14 = CONCAT44(uVar11,fVar8);
        uVar15 = CONCAT44(uVar13,fVar10);
        local_90 = CONCAT44(fVar8,(int)uVar9);
        local_88 = fVar10;
      }
      fVar17 = *(float *)(param_5 + 1);
      fVar10 = *(float *)(param_5 + 2);
      fVar12 = *(float *)((long)param_5 + 0x14);
      uVar16 = *param_5;
      fVar8 = (float)FUN_02699088(*(undefined4 *)((long)param_5 + 0xc),fVar10,fVar12,
                                  *(undefined4 *)(param_5 + 3),uVar9,uVar14,uVar15,0);
      if (param_6 == 0) break;
      fStack_b4 = fVar4 * param_1;
      local_b8 = fVar17 + fVar12;
      local_c0 = CONCAT44((float)((ulong)uVar16 >> 0x20) + fVar10,(float)uVar16 + fVar8);
      local_b0 = uVar5;
      FUN_00bf9c98(param_6,&local_c0,*(undefined8 *)puVar3);
      lVar6 = *(long *)(param_2 + 0x20);
      iVar7 = iVar7 + 1;
    } while (lVar6 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


