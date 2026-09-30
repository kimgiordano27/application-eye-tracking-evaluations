/*
FUNCTION_NAME: Obi.ObiRopeMeshRenderer$$get_InstanceSpacing
ENTRY_POINT: 0185101c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 198
LABEL: confirmed_gaze_interaction_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_gaze_interaction
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;active_gaze_retrieval;active_gaze_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2
*/


void Obi_ObiRopeMeshRenderer__get_InstanceSpacing(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x19;
  undefined8 unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  if (param_1 != 0) {
    FUN_017b46ec(param_1,0);
    *(undefined8 *)(param_1 + 0x10) = unaff_x21;
    *(undefined4 *)(param_1 + 0x18) = 4;
    lVar2 = thunk_FUN_00d6225c(param_1,*(undefined8 *)(*unaff_x19 + 0x40));
    if (lVar2 == 0) {
LAB_0185169c:
      uVar3 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar3,0);
    }
    if (*(uint *)(unaff_x19 + 3) < 4) {
LAB_018516a8:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    unaff_x19[7] = param_1;
    uVar3 = FUN_01780344(*(undefined8 *)Method_System_Linq_Enumerable_ToList<EdgeLookup>__,0);
    lVar2 = thunk_FUN_00d62348(*unaff_x23);
    if (lVar2 != 0) {
      FUN_017b46ec(lVar2,0);
      *(undefined8 *)(lVar2 + 0x10) = uVar3;
      *(undefined4 *)(lVar2 + 0x18) = 2;
      lVar4 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x19 + 0x40));
      puVar1 = OVRPlugin_OVRP_1_50_0_TypeInfo;
      if (lVar4 == 0) goto LAB_0185169c;
      if (*(uint *)(unaff_x19 + 3) < 5) goto LAB_018516a8;
      unaff_x19[8] = lVar2;
      uVar3 = FUN_01780344(*(undefined8 *)puVar1,0);
      lVar2 = thunk_FUN_00d62348(*unaff_x23);
      if (lVar2 != 0) {
        FUN_017b46ec(lVar2,0);
        *(undefined8 *)(lVar2 + 0x10) = uVar3;
        *(undefined4 *)(lVar2 + 0x18) = 6;
        lVar4 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x19 + 0x40));
        puVar1 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
        if (lVar4 == 0) goto LAB_0185169c;
        if (*(uint *)(unaff_x19 + 3) < 6) goto LAB_018516a8;
        unaff_x19[9] = lVar2;
        uVar3 = FUN_01780344(*(undefined8 *)puVar1,0);
        lVar2 = thunk_FUN_00d62348(*unaff_x23);
        if (lVar2 != 0) {
          FUN_017b46ec(lVar2,0);
          *(undefined8 *)(lVar2 + 0x10) = uVar3;
          *(undefined4 *)(lVar2 + 0x18) = 0xe;
          lVar4 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x19 + 0x40));
          puVar1 = StringLiteral_5228;
          if (lVar4 == 0) goto LAB_0185169c;
          if (*(uint *)(unaff_x19 + 3) < 7) goto LAB_018516a8;
          unaff_x19[10] = lVar2;
          uVar3 = FUN_01780344(*(undefined8 *)puVar1,0);
          lVar2 = thunk_FUN_00d62348(*unaff_x23);
          if (lVar2 != 0) {
            FUN_017b46ec(lVar2,0);
            *(undefined8 *)(lVar2 + 0x10) = uVar3;
            *(undefined4 *)(lVar2 + 0x18) = 8;
            lVar4 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x19 + 0x40));
            puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
            if (lVar4 == 0) goto LAB_0185169c;
            if (*(uint *)(unaff_x19 + 3) < 8) goto LAB_018516a8;
            unaff_x19[0xb] = lVar2;
            uVar3 = FUN_01780344(*(undefined8 *)puVar1,0);
            lVar2 = thunk_FUN_00d62348(*unaff_x23);
            if (lVar2 != 0) {
              FUN_017b46ec(lVar2,0);
              *(undefined8 *)(lVar2 + 0x10) = uVar3;
              *(undefined4 *)(lVar2 + 0x18) = 10;
              lVar4 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x19 + 0x40));
              puVar1 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
              if (lVar4 == 0) goto LAB_0185169c;
              if (*(uint *)(unaff_x19 + 3) < 9) goto LAB_018516a8;
              unaff_x19[0xc] = lVar2;
              uVar3 = FUN_01780344(*(undefined8 *)puVar1,0);
              lVar2 = thunk_FUN_00d62348(*unaff_x23);
              if (lVar2 != 0) {
                FUN_017b46ec(lVar2,0);
                *(undefined8 *)(lVar2 + 0x10) = uVar3;
                *(undefined4 *)(lVar2 + 0x18) = 0xc;
                lVar4 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x19 + 0x40));
                puVar1 = StringLiteral_6673;
                if (lVar4 == 0) goto LAB_0185169c;
                if (*(uint *)(unaff_x19 + 3) < 10) goto LAB_018516a8;
                unaff_x19[0xd] = lVar2;
                uVar3 = FUN_01780344(*(undefined8 *)puVar1,0);
                lVar2 = thunk_FUN_00d62348(*unaff_x23);
                if (lVar2 != 0) {
                  FUN_017b46ec(lVar2,0);
                  *(undefined8 *)(lVar2 + 0x10) = uVar3;
                  *(undefined4 *)(lVar2 + 0x18) = 0x10;
                  lVar4 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x19 + 0x40));
                  puVar1 = Method_System_Data_DataSet_ReadXmlDiffgram__;
                  if (lVar4 == 0) goto LAB_0185169c;
                  if (*(uint *)(unaff_x19 + 3) < 0xb) goto LAB_018516a8;
                  unaff_x19[0xe] = lVar2;
                  uVar3 = FUN_01780344(*(undefined8 *)puVar1,0);
                  lVar2 = thunk_FUN_00d62348(*unaff_x23);
                  if (lVar2 != 0) {
                    FUN_017b46ec(lVar2,0);
                    *(undefined8 *)(lVar2 + 0x10) = uVar3;
                    *(undefined4 *)(lVar2 + 0x18) = 0x12;
                    lVar4 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x19 + 0x40));
                    puVar1 = 
                    Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                    ;
                    if (lVar4 == 0) goto LAB_0185169c;
                    if (*(uint *)(unaff_x19 + 3) < 0xc) goto LAB_018516a8;
                    unaff_x19[0xf] = lVar2;
                    uVar3 = FUN_01780344(*(undefined8 *)puVar1,0);
                    lVar2 = thunk_FUN_00d62348(*unaff_x23);
                    if (lVar2 != 0) {
                      FUN_017b46ec(lVar2,0);
                      *(undefined8 *)(lVar2 + 0x10) = uVar3;
                      *(undefined4 *)(lVar2 + 0x18) = 0x14;
                      lVar4 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x19 + 0x40));
                      if (lVar4 == 0) goto LAB_0185169c;
                      if (*(uint *)(unaff_x19 + 3) < 0xd) goto LAB_018516a8;
                      unaff_x19[0x10] = lVar2;
                      uVar3 = FUN_01780344(*unaff_x29,0);
                      lVar2 = thunk_FUN_00d62348(*unaff_x23);
                      if (lVar2 != 0) {
                        FUN_017b46ec(lVar2,0);
                        *(undefined8 *)(lVar2 + 0x10) = uVar3;
                        *(undefined4 *)(lVar2 + 0x18) = 0x16;
                        lVar4 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x19 + 0x40));
                        if (lVar4 == 0) goto LAB_0185169c;
                        if (*(uint *)(unaff_x19 + 3) < 0xe) goto LAB_018516a8;
                        unaff_x19[0x11] = lVar2;
                        uVar3 = FUN_01780344(*unaff_x28,0);
                        lVar2 = thunk_FUN_00d62348(*unaff_x23);
                        if (lVar2 != 0) {
                          FUN_017b46ec(lVar2,0);
                          *(undefined8 *)(lVar2 + 0x10) = uVar3;
                          *(undefined4 *)(lVar2 + 0x18) = 0x18;
                          lVar4 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x19 + 0x40));
                          if (lVar4 == 0) goto LAB_0185169c;
                          if (*(uint *)(unaff_x19 + 3) < 0xf) goto LAB_018516a8;
                          unaff_x19[0x12] = lVar2;
                          uVar3 = FUN_01780344(*unaff_x27,0);
                          lVar2 = thunk_FUN_00d62348(*unaff_x23);
                          if (lVar2 != 0) {
                            FUN_017b46ec(lVar2,0);
                            *(undefined8 *)(lVar2 + 0x10) = uVar3;
                            *(undefined4 *)(lVar2 + 0x18) = 0x1e;
                            lVar4 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x19 + 0x40));
                            if (lVar4 == 0) goto LAB_0185169c;
                            if (*(uint *)(unaff_x19 + 3) < 0x10) goto LAB_018516a8;
                            unaff_x19[0x13] = lVar2;
                            uVar3 = FUN_01780344(*unaff_x26,0);
                            lVar2 = thunk_FUN_00d62348(*unaff_x23);
                            if (lVar2 != 0) {
                              FUN_017b46ec(lVar2,0);
                              *(undefined8 *)(lVar2 + 0x10) = uVar3;
                              *(undefined4 *)(lVar2 + 0x18) = 0x1a;
                              lVar4 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x19 + 0x40));
                              if (lVar4 == 0) goto LAB_0185169c;
                              if (*(uint *)(unaff_x19 + 3) < 0x11) goto LAB_018516a8;
                              unaff_x19[0x14] = lVar2;
                              uVar3 = FUN_01780344(*unaff_x25,0);
                              lVar2 = thunk_FUN_00d62348(*unaff_x23);
                              if (lVar2 != 0) {
                                FUN_017b46ec(lVar2,0);
                                *(undefined8 *)(lVar2 + 0x10) = uVar3;
                                *(undefined4 *)(lVar2 + 0x18) = 0;
                                lVar4 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x19 + 0x40))
                                ;
                                if (lVar4 == 0) goto LAB_0185169c;
                                if (*(uint *)(unaff_x19 + 3) < 0x12) goto LAB_018516a8;
                                unaff_x19[0x15] = lVar2;
                                uVar3 = FUN_01780344(*unaff_x24,0);
                                lVar2 = thunk_FUN_00d62348(*unaff_x23);
                                if (lVar2 != 0) {
                                  FUN_017b46ec(lVar2,0);
                                  *(undefined8 *)(lVar2 + 0x10) = uVar3;
                                  *(undefined4 *)(lVar2 + 0x18) = 0x27;
                                  lVar4 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)
                                                                    (*unaff_x19 + 0x40));
                                  if (lVar4 == 0) goto LAB_0185169c;
                                  if (*(uint *)(unaff_x19 + 3) < 0x13) goto LAB_018516a8;
                                  unaff_x19[0x16] = lVar2;
                                  puVar1 = UnityEngine_UIElements_IGroupManager_TypeInfo;
                                  *(long **)(*(long *)(*unaff_x22 + 0xb8) + 8) = unaff_x19;
                                  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                  puVar1 = 
                                  System_Dynamic_Utils_CacheDict<Type,_Func<Expression,_string,_bool,_ReadOnlyCollection<ParameterExpression>,_LambdaExpression>>_TypeInfo
                                  ;
                                  if (lVar2 != 0) {
                                    FUN_012d239c(lVar2,0,*(undefined8 *)StringLiteral_7482,0);
                                    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                    if (lVar4 != 0) {
                                      FUN_013c8f44(lVar4,lVar2,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_Generic_Dictionary<int,_HandTrackingConfidenceProvider>_get_Item__
                                                  );
                                      *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10) = lVar4;
                                      return;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


