/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$GetDirectionAwayFromClosestWall
ENTRY_POINT: 0148c4c8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 151
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKRoom__GetDirectionAwayFromClosestWall(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  uint in_w8;
  long *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  
  if (2 < in_w8) {
    *(undefined8 *)(unaff_x20 + 0x30) = unaff_x21;
    lVar5 = thunk_FUN_00d6225c();
    if (lVar5 == 0) goto LAB_0148ca9c;
    if (3 < *(uint *)(unaff_x19 + 3)) {
      unaff_x19[7] = unaff_x20;
      puVar1 = System_Func<Stream,_IAsyncResult,_int>_TypeInfo;
      plVar6 = (long *)FUN_00da4fb8(*unaff_x25,3);
      lVar5 = FUN_00da4fb8(*unaff_x24,4);
      FUN_016a34e8(lVar5,*(undefined8 *)puVar1,0);
      if (plVar6 == (long *)0x0) goto LAB_0148caa8;
      if ((lVar5 != 0) &&
         (lVar7 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
LAB_0148ca9c:
        uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar8,0);
      }
      if ((int)plVar6[3] != 0) {
        plVar6[4] = lVar5;
        puVar1 = 
        Method_Oculus_Interaction_PoseDetection_TransformFeatureStateCollection_<>c_<RegisterConfig>b__2_1__
        ;
        lVar5 = FUN_00da4fb8(*unaff_x24,4);
        FUN_016a34e8(lVar5,*(undefined8 *)puVar1,0);
        if ((lVar5 != 0) &&
           (lVar7 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
        goto LAB_0148ca9c;
        if (1 < *(uint *)(plVar6 + 3)) {
          plVar6[5] = lVar5;
          puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqrshrn_n_s16__;
          lVar5 = FUN_00da4fb8(*unaff_x24,4);
          FUN_016a34e8(lVar5,*(undefined8 *)puVar1,0);
          if ((lVar5 != 0) &&
             (lVar7 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
          goto LAB_0148ca9c;
          if (2 < *(uint *)(plVar6 + 3)) {
            plVar6[6] = lVar5;
            lVar5 = thunk_FUN_00d6225c(plVar6,*(undefined8 *)(*unaff_x19 + 0x40));
            if (lVar5 == 0) goto LAB_0148ca9c;
            if (4 < *(uint *)(unaff_x19 + 3)) {
              unaff_x19[8] = (long)plVar6;
              puVar1 = Method_System_Xml_XmlNodeReader_ResolveEntity__;
              plVar6 = (long *)FUN_00da4fb8(*unaff_x25,3);
              lVar5 = FUN_00da4fb8(*unaff_x24,4);
              FUN_016a34e8(lVar5,*(undefined8 *)puVar1,0);
              if (plVar6 == (long *)0x0) goto LAB_0148caa8;
              if ((lVar5 != 0) &&
                 (lVar7 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
              goto LAB_0148ca9c;
              if ((int)plVar6[3] != 0) {
                plVar6[4] = lVar5;
                puVar1 = 
                Method_System_Collections_Generic_Dictionary<string,_CultureInfo>_set_Item__;
                lVar5 = FUN_00da4fb8(*unaff_x24,4);
                FUN_016a34e8(lVar5,*(undefined8 *)puVar1,0);
                if ((lVar5 != 0) &&
                   (lVar7 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                goto LAB_0148ca9c;
                if (1 < *(uint *)(plVar6 + 3)) {
                  plVar6[5] = lVar5;
                  puVar1 = System_Collections_Generic_List<GrabbablePose>_TypeInfo;
                  lVar5 = FUN_00da4fb8(*unaff_x24,4);
                  FUN_016a34e8(lVar5,*(undefined8 *)puVar1,0);
                  if ((lVar5 != 0) &&
                     (lVar7 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)
                     ) goto LAB_0148ca9c;
                  if (2 < *(uint *)(plVar6 + 3)) {
                    plVar6[6] = lVar5;
                    lVar5 = thunk_FUN_00d6225c(plVar6,*(undefined8 *)(*unaff_x19 + 0x40));
                    if (lVar5 == 0) goto LAB_0148ca9c;
                    if (5 < *(uint *)(unaff_x19 + 3)) {
                      unaff_x19[9] = (long)plVar6;
                      puVar4 = StringLiteral_12227;
                      *(long **)(*(long *)(*unaff_x22 + 0xb8) + 0x20) = unaff_x19;
                      puVar3 = Method_System_Collections_Generic_Queue<int>_Clear__;
                      puVar2 = Method_System_Collections_Generic_Dictionary<string,_JSONNode>_Add__;
                      puVar1 = PTR_DAT_033eb3e8;
                      uVar8 = FUN_00da4fb8(*unaff_x24,0x16);
                      FUN_016a34e8(uVar8,*(undefined8 *)puVar4,0);
                      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28) = uVar8;
                      uVar8 = FUN_00da4fb8(*unaff_x23,0x40);
                      FUN_016a34e8(uVar8,*(undefined8 *)puVar2,0);
                      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x30) = uVar8;
                      plVar6 = (long *)FUN_00da4fb8(*(undefined8 *)puVar3,2);
                      lVar5 = FUN_00da4fb8(*unaff_x23,7);
                      FUN_016a34e8(lVar5,*(undefined8 *)puVar1,0);
                      if (plVar6 == (long *)0x0) goto LAB_0148caa8;
                      if ((lVar5 != 0) &&
                         (lVar7 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar6 + 0x40)),
                         lVar7 == 0)) goto LAB_0148ca9c;
                      if ((int)plVar6[3] != 0) {
                        plVar6[4] = lVar5;
                        puVar1 = OVR_OpenVR_IVRDriverManager_var;
                        lVar5 = FUN_00da4fb8(*unaff_x23,7);
                        FUN_016a34e8(lVar5,*(undefined8 *)puVar1,0);
                        if ((lVar5 != 0) &&
                           (lVar7 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar6 + 0x40)),
                           lVar7 == 0)) goto LAB_0148ca9c;
                        if (1 < *(uint *)(plVar6 + 3)) {
                          plVar6[5] = lVar5;
                          puVar2 = 
                          Method_System_Collections_Generic_Stack<IEnumerator<ITreeViewItem>>__ctor__
                          ;
                          *(long **)(*(long *)(*unaff_x22 + 0xb8) + 0x38) = plVar6;
                          puVar1 = Method_System_Collections_Generic_List<Image>_RemoveAt__;
                          plVar6 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,2);
                          plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)puVar3,2);
                          lVar5 = FUN_00da4fb8(*unaff_x23,0x20);
                          FUN_016a34e8(lVar5,*(undefined8 *)puVar1,0);
                          if (plVar9 == (long *)0x0) goto LAB_0148caa8;
                          if ((lVar5 != 0) &&
                             (lVar7 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar9 + 0x40)),
                             lVar7 == 0)) goto LAB_0148ca9c;
                          if ((int)plVar9[3] != 0) {
                            plVar9[4] = lVar5;
                            puVar1 = 
                            Method_System_Runtime_CompilerServices_ReadOnlyCollectionBuilder<__Il2CppFullySharedGenericType>_Insert__
                            ;
                            lVar5 = FUN_00da4fb8(*unaff_x23,0x20);
                            FUN_016a34e8(lVar5,*(undefined8 *)puVar1,0);
                            if ((lVar5 != 0) &&
                               (lVar7 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar9 + 0x40)),
                               lVar7 == 0)) goto LAB_0148ca9c;
                            if (1 < *(uint *)(plVar9 + 3)) {
                              plVar9[5] = lVar5;
                              if (plVar6 == (long *)0x0) {
LAB_0148caa8:
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              lVar5 = thunk_FUN_00d6225c(plVar9,*(undefined8 *)(*plVar6 + 0x40));
                              if (lVar5 == 0) goto LAB_0148ca9c;
                              if ((int)plVar6[3] == 0) goto LAB_0148ca98;
                              plVar6[4] = (long)plVar9;
                              puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_s8__;
                              plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)puVar3,2);
                              lVar5 = FUN_00da4fb8(*unaff_x23,0x20);
                              FUN_016a34e8(lVar5,*(undefined8 *)puVar1,0);
                              if (plVar9 == (long *)0x0) goto LAB_0148caa8;
                              if ((lVar5 != 0) &&
                                 (lVar7 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar9 + 0x40)),
                                 lVar7 == 0)) goto LAB_0148ca9c;
                              if ((int)plVar9[3] != 0) {
                                plVar9[4] = lVar5;
                                puVar1 = PTR_DAT_033f71d0;
                                lVar5 = FUN_00da4fb8(*unaff_x23,0x20);
                                FUN_016a34e8(lVar5,*(undefined8 *)puVar1,0);
                                if ((lVar5 != 0) &&
                                   (lVar7 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar9 + 0x40)
                                                              ), lVar7 == 0)) goto LAB_0148ca9c;
                                if (1 < *(uint *)(plVar9 + 3)) {
                                  plVar9[5] = lVar5;
                                  lVar5 = thunk_FUN_00d6225c(plVar9,*(undefined8 *)(*plVar6 + 0x40))
                                  ;
                                  if (lVar5 == 0) goto LAB_0148ca9c;
                                  if (1 < *(uint *)(plVar6 + 3)) {
                                    plVar6[5] = (long)plVar9;
                                    *(long **)(*(long *)(*unaff_x22 + 0xb8) + 0x40) = plVar6;
                                    puVar2 = Method_UnityEngine_Mesh_SetUvsImpl<Vector4>__;
                                    puVar1 = System_PointerSpec_TypeInfo;
                                    uVar8 = FUN_00da4fb8(*unaff_x23,8);
                                    FUN_016a34e8(uVar8,*(undefined8 *)puVar2,0);
                                    *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x48) = uVar8;
                                    uVar8 = FUN_00da4fb8(*unaff_x23,8);
                                    FUN_016a34e8(uVar8,*(undefined8 *)puVar1,0);
                                    *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x50) = uVar8;
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
LAB_0148ca98:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


