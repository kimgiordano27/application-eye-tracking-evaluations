/*
FUNCTION_NAME: UnityEngine.UIElements.StyleValueCollection$$TryGetStyleValue
ENTRY_POINT: 0271e8f4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_UIElements_StyleValueCollection__TryGetStyleValue(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  int unaff_w22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *puVar5;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *puVar6;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 *puVar7;
  undefined8 in_stack_00000000;
  int iStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  iVar1 = unaff_w22;
  do {
    iStack0000000000000008 = iVar1;
    FUN_0129a054(param_1,&stack0x00000008,unaff_x21,*unaff_x29);
    do {
      lVar4 = *(long *)(unaff_x19 + 0xc0);
      unaff_w20 = unaff_w20 + 1;
      if (lVar4 == 0) goto LAB_0271eb34;
      if (*(int *)(lVar4 + 0x18) <= unaff_w20) {
        if (*(long *)(unaff_x19 + 0x38) == 0) {
          lVar4 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f5aa8);
          puVar5 = (undefined8 *)Method_System_DBNull_System_IConvertible_ToInt32__;
          puVar7 = (undefined8 *)Method_Obi_ObiNativeList<BIHNode>_AddRange__;
          puVar6 = (undefined8 *)PTR_DAT_033f72f8;
          if (lVar4 == 0) goto LAB_0271eb34;
          FUN_01298da0(lVar4,*(undefined8 *)
                              Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__
                      );
          *(long *)(unaff_x19 + 0x38) = lVar4;
        }
        else {
          FUN_0129a9f4(*(long *)(unaff_x19 + 0x38),*(undefined8 *)StringLiteral_6798);
          puVar5 = (undefined8 *)Method_System_DBNull_System_IConvertible_ToInt32__;
          puVar6 = (undefined8 *)PTR_DAT_033f72f8;
          puVar7 = (undefined8 *)Method_Obi_ObiNativeList<BIHNode>_AddRange__;
        }
        if (*(long *)(unaff_x19 + 0xb8) == 0) {
          lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                      Method_OVRPlugin_<>c__DisplayClass526_0_<GetVirtualKeyboardModelAnimationStates>b__1__
                                    );
          if (lVar4 == 0) goto LAB_0271eb34;
          FUN_01298da0(lVar4,*(undefined8 *)
                              Method_System_Linq_Enumerable_SelectMany<Dictionary<Vertex,_int>,_Vertex>__
                      );
          *(long *)(unaff_x19 + 0xb8) = lVar4;
        }
        else {
          FUN_0129a9f4(*(long *)(unaff_x19 + 0xb8),*(undefined8 *)StringLiteral_7265);
        }
        lVar4 = *(long *)(unaff_x19 + 0xb0);
        if (lVar4 == 0) goto LAB_0271eb34;
        iVar1 = 0;
        goto LAB_0271e9e8;
      }
      FUN_0132138c(lVar4,unaff_w20,&stack0x00000008,*unaff_x28);
      unaff_x21 = CONCAT44(uStack000000000000000c,iStack0000000000000008);
      if (unaff_x21 == 0) goto LAB_0271eb34;
      iVar1 = FUN_026fd61c(unaff_x21,0);
      if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0271eb34;
      iStack0000000000000008 = iVar1;
      uVar3 = FUN_0129aa60(*(long *)(unaff_x19 + 0x40),&stack0x00000008,*unaff_x27);
      if ((uVar3 & 1) == 0) {
        if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0271eb34;
        in_stack_00000000._4_4_ = unaff_w20;
        iStack0000000000000008 = iVar1;
        FUN_0129a054(*(long *)(unaff_x19 + 0x40),&stack0x00000008,(long)&stack0x00000000 + 4,
                     *unaff_x25);
      }
      if (*(long *)(unaff_x19 + 200) == 0) goto LAB_0271eb34;
      iStack0000000000000008 = iVar1;
      uVar3 = FUN_0129aa60(*(long *)(unaff_x19 + 200),&stack0x00000008,*unaff_x23);
    } while ((uVar3 & 1) != 0);
    param_1 = *(long *)(unaff_x19 + 200);
  } while (param_1 != 0);
  goto LAB_0271eb34;
LAB_0271e9e8:
  do {
    if (*(int *)(lVar4 + 0x18) <= iVar1) {
      *(undefined1 *)(unaff_x19 + 0xd8) = 0;
      return;
    }
    FUN_0132138c(lVar4,iVar1,&stack0x00000008,*unaff_x24);
    lVar4 = CONCAT44(uStack000000000000000c,iStack0000000000000008);
    if (lVar4 != 0) {
      if (*(long *)(unaff_x19 + 200) == 0) break;
      iVar2 = *(int *)(lVar4 + 0x28);
      iStack0000000000000008 = iVar2;
      uVar3 = FUN_0129aa60(*(long *)(unaff_x19 + 200),&stack0x00000008,*unaff_x23);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(unaff_x19 + 200) == 0) break;
        in_stack_00000000._4_4_ = iVar2;
        FUN_01299bc0(*(long *)(unaff_x19 + 200),(long)&stack0x00000000 + 4,&stack0x00000008,*puVar5)
        ;
        *(long *)(lVar4 + 0x18) = unaff_x19;
        *(ulong *)(lVar4 + 0x20) = CONCAT44(uStack000000000000000c,iStack0000000000000008);
        if (*(long *)(unaff_x19 + 0xb0) == 0) break;
        FUN_0132138c(*(long *)(unaff_x19 + 0xb0),iVar1,&stack0x00000008,*unaff_x24);
        if (CONCAT44(uStack000000000000000c,iStack0000000000000008) == 0) break;
        FUN_02727be8(CONCAT44(uStack000000000000000c,iStack0000000000000008),0);
        iVar2 = FUN_02713a18();
        if (*(long *)(unaff_x19 + 0x38) == 0) break;
        iStack0000000000000008 = iVar2;
        uVar3 = FUN_0129aa60(*(long *)(unaff_x19 + 0x38),&stack0x00000008,*unaff_x26);
        if ((uVar3 & 1) == 0) {
          if (*(long *)(unaff_x19 + 0x38) == 0) break;
          in_stack_00000000._4_4_ = iVar1;
          iStack0000000000000008 = iVar2;
          FUN_0129a054(*(long *)(unaff_x19 + 0x38),&stack0x00000008,(long)&stack0x00000000 + 4,
                       *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
        }
        if (*(long *)(unaff_x19 + 0xb0) == 0) break;
        FUN_0132138c(*(long *)(unaff_x19 + 0xb0),iVar1,&stack0x00000008,*unaff_x24);
        if (CONCAT44(uStack000000000000000c,iStack0000000000000008) == 0) break;
        iVar2 = *(int *)(CONCAT44(uStack000000000000000c,iStack0000000000000008) + 0x14);
        if (iVar2 != 0xfffe) {
          if (*(long *)(unaff_x19 + 0xb8) == 0) break;
          iStack0000000000000008 = iVar2;
          uVar3 = FUN_0129aa60(*(long *)(unaff_x19 + 0xb8),&stack0x00000008,*puVar6);
          if ((uVar3 & 1) == 0) {
            if (*(long *)(unaff_x19 + 0xb8) == 0) break;
            iStack0000000000000008 = iVar2;
            FUN_0129a054(*(long *)(unaff_x19 + 0xb8),&stack0x00000008,lVar4,*puVar7);
          }
        }
      }
    }
    lVar4 = *(long *)(unaff_x19 + 0xb0);
    iVar1 = iVar1 + 1;
  } while (lVar4 != 0);
LAB_0271eb34:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


