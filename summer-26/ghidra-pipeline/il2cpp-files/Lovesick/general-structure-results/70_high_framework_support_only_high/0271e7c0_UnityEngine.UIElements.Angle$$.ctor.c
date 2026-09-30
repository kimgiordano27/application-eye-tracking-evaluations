/*
FUNCTION_NAME: UnityEngine.UIElements.Angle$$.ctor
ENTRY_POINT: 0271e7c0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_UIElements_Angle___ctor(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x19;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 in_stack_00000000;
  int iStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  FUN_01298da0(param_2,**(undefined8 **)(param_1 + 0x800));
  *(undefined8 *)(unaff_x19 + 0x40) = param_2;
  if (*(long *)(unaff_x19 + 200) == 0) {
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)Method_System_Array_Resize<Tween>__);
    if (lVar9 == 0) goto LAB_0271eb34;
    FUN_01298da0(lVar9,*(undefined8 *)StringLiteral_479);
    *(long *)(unaff_x19 + 200) = lVar9;
  }
  else {
    FUN_0129a9f4(*(long *)(unaff_x19 + 200),
                 *(undefined8 *)
                  Method_System_Collections_Generic_Stack<IEnumerator<ITreeViewItem>>_get_Count__);
  }
  puVar7 = StringLiteral_13652;
  puVar6 = StringLiteral_11716;
  puVar5 = Method_System_Collections_Generic_Dictionary<string,_JToken>_TryGetValue__;
  puVar4 = 
  Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>_TryGetValue__;
  puVar3 = Sirenix_OdinInspector_ValueDropdownList<int>_TypeInfo;
  puVar2 = 
  System_Func<ValueTuple<HandFinger,_IReadOnlyList<ShapeRecognizer_FingerFeatureConfig>>,_HandFinger>_TypeInfo
  ;
  puVar1 = PTR_DAT_033ebbb0;
  lVar9 = *(long *)(unaff_x19 + 0xc0);
  if (lVar9 != 0) {
    iVar11 = 0;
    do {
      if (*(int *)(lVar9 + 0x18) <= iVar11) {
        if (*(long *)(unaff_x19 + 0x38) == 0) {
          lVar9 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f5aa8);
          puVar12 = (undefined8 *)Method_System_DBNull_System_IConvertible_ToInt32__;
          puVar14 = (undefined8 *)Method_Obi_ObiNativeList<BIHNode>_AddRange__;
          puVar13 = (undefined8 *)PTR_DAT_033f72f8;
          if (lVar9 == 0) break;
          FUN_01298da0(lVar9,*(undefined8 *)
                              Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__
                      );
          *(long *)(unaff_x19 + 0x38) = lVar9;
        }
        else {
          FUN_0129a9f4(*(long *)(unaff_x19 + 0x38),*(undefined8 *)StringLiteral_6798);
          puVar12 = (undefined8 *)Method_System_DBNull_System_IConvertible_ToInt32__;
          puVar13 = (undefined8 *)PTR_DAT_033f72f8;
          puVar14 = (undefined8 *)Method_Obi_ObiNativeList<BIHNode>_AddRange__;
        }
        if (*(long *)(unaff_x19 + 0xb8) == 0) {
          lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                      Method_OVRPlugin_<>c__DisplayClass526_0_<GetVirtualKeyboardModelAnimationStates>b__1__
                                    );
          if (lVar9 == 0) break;
          FUN_01298da0(lVar9,*(undefined8 *)
                              Method_System_Linq_Enumerable_SelectMany<Dictionary<Vertex,_int>,_Vertex>__
                      );
          *(long *)(unaff_x19 + 0xb8) = lVar9;
        }
        else {
          FUN_0129a9f4(*(long *)(unaff_x19 + 0xb8),*(undefined8 *)StringLiteral_7265);
        }
        lVar9 = *(long *)(unaff_x19 + 0xb0);
        if (lVar9 != 0) {
          iVar11 = 0;
          goto LAB_0271e9e8;
        }
        break;
      }
      FUN_0132138c(lVar9,iVar11,&stack0x00000008,*(undefined8 *)puVar7);
      lVar9 = CONCAT44(uStack000000000000000c,iStack0000000000000008);
      if (lVar9 == 0) break;
      iVar8 = FUN_026fd61c(lVar9,0);
      if (*(long *)(unaff_x19 + 0x40) == 0) break;
      iStack0000000000000008 = iVar8;
      uVar10 = FUN_0129aa60(*(long *)(unaff_x19 + 0x40),&stack0x00000008,*(undefined8 *)puVar6);
      if ((uVar10 & 1) == 0) {
        if (*(long *)(unaff_x19 + 0x40) == 0) break;
        in_stack_00000000._4_4_ = iVar11;
        iStack0000000000000008 = iVar8;
        FUN_0129a054(*(long *)(unaff_x19 + 0x40),&stack0x00000008,(long)&stack0x00000000 + 4,
                     *(undefined8 *)puVar2);
      }
      if (*(long *)(unaff_x19 + 200) == 0) break;
      iStack0000000000000008 = iVar8;
      uVar10 = FUN_0129aa60(*(long *)(unaff_x19 + 200),&stack0x00000008,*(undefined8 *)puVar3);
      if ((uVar10 & 1) == 0) {
        if (*(long *)(unaff_x19 + 200) == 0) break;
        iStack0000000000000008 = iVar8;
        FUN_0129a054(*(long *)(unaff_x19 + 200),&stack0x00000008,lVar9,*(undefined8 *)puVar1);
      }
      lVar9 = *(long *)(unaff_x19 + 0xc0);
      iVar11 = iVar11 + 1;
    } while (lVar9 != 0);
  }
  goto LAB_0271eb34;
LAB_0271e9e8:
  do {
    if (*(int *)(lVar9 + 0x18) <= iVar11) {
      *(undefined1 *)(unaff_x19 + 0xd8) = 0;
      return;
    }
    FUN_0132138c(lVar9,iVar11,&stack0x00000008,*(undefined8 *)puVar5);
    lVar9 = CONCAT44(uStack000000000000000c,iStack0000000000000008);
    if (lVar9 != 0) {
      if (*(long *)(unaff_x19 + 200) == 0) break;
      iVar8 = *(int *)(lVar9 + 0x28);
      iStack0000000000000008 = iVar8;
      uVar10 = FUN_0129aa60(*(long *)(unaff_x19 + 200),&stack0x00000008,*(undefined8 *)puVar3);
      if ((uVar10 & 1) != 0) {
        if (*(long *)(unaff_x19 + 200) == 0) break;
        in_stack_00000000._4_4_ = iVar8;
        FUN_01299bc0(*(long *)(unaff_x19 + 200),(long)&stack0x00000000 + 4,&stack0x00000008,*puVar12
                    );
        *(long *)(lVar9 + 0x18) = unaff_x19;
        *(ulong *)(lVar9 + 0x20) = CONCAT44(uStack000000000000000c,iStack0000000000000008);
        if (*(long *)(unaff_x19 + 0xb0) == 0) break;
        FUN_0132138c(*(long *)(unaff_x19 + 0xb0),iVar11,&stack0x00000008,*(undefined8 *)puVar5);
        if (CONCAT44(uStack000000000000000c,iStack0000000000000008) == 0) break;
        FUN_02727be8(CONCAT44(uStack000000000000000c,iStack0000000000000008),0);
        iVar8 = FUN_02713a18();
        if (*(long *)(unaff_x19 + 0x38) == 0) break;
        iStack0000000000000008 = iVar8;
        uVar10 = FUN_0129aa60(*(long *)(unaff_x19 + 0x38),&stack0x00000008,*(undefined8 *)puVar4);
        if ((uVar10 & 1) == 0) {
          if (*(long *)(unaff_x19 + 0x38) == 0) break;
          in_stack_00000000._4_4_ = iVar11;
          iStack0000000000000008 = iVar8;
          FUN_0129a054(*(long *)(unaff_x19 + 0x38),&stack0x00000008,(long)&stack0x00000000 + 4,
                       *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
        }
        if (*(long *)(unaff_x19 + 0xb0) == 0) break;
        FUN_0132138c(*(long *)(unaff_x19 + 0xb0),iVar11,&stack0x00000008,*(undefined8 *)puVar5);
        if (CONCAT44(uStack000000000000000c,iStack0000000000000008) == 0) break;
        iVar8 = *(int *)(CONCAT44(uStack000000000000000c,iStack0000000000000008) + 0x14);
        if (iVar8 != 0xfffe) {
          if (*(long *)(unaff_x19 + 0xb8) == 0) break;
          iStack0000000000000008 = iVar8;
          uVar10 = FUN_0129aa60(*(long *)(unaff_x19 + 0xb8),&stack0x00000008,*puVar13);
          if ((uVar10 & 1) == 0) {
            if (*(long *)(unaff_x19 + 0xb8) == 0) break;
            iStack0000000000000008 = iVar8;
            FUN_0129a054(*(long *)(unaff_x19 + 0xb8),&stack0x00000008,lVar9,*puVar14);
          }
        }
      }
    }
    lVar9 = *(long *)(unaff_x19 + 0xb0);
    iVar11 = iVar11 + 1;
  } while (lVar9 != 0);
LAB_0271eb34:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


