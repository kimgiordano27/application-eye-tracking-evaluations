/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.UTess.Tessellator$$AddTriangle
ENTRY_POINT: 03d10be8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_5;paired_field_refs_with_structure_only;strong_file_logging_hits_4;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_Rendering_Universal_UTess_Tessellator__AddTriangle(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long unaff_x24;
  long lVar10;
  long unaff_x25;
  long lVar11;
  long unaff_x27;
  long lVar12;
  long unaff_x28;
  long lVar13;
  undefined8 *puVar14;
  long in_stack_00000018;
  long in_stack_00000028;
  
  uVar5 = thunk_FUN_01f117cc();
  FUN_02b87594();
  *(undefined8 *)(unaff_x25 + 0x58) = uVar5;
  thunk_FUN_01f51358((undefined8 *)(unaff_x25 + 0x58),uVar5);
  puVar14 = (undefined8 *)PTR_DAT_04571910;
  if (unaff_x24 != 0) {
    FUN_025d9620();
    lVar10 = *(long *)(unaff_x27 + 0x48);
    lVar6 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045718d8);
    FUN_03cf2a8c(lVar6,0);
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_04573a98;
      thunk_FUN_01f51358();
      uVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>__ctor__
                                );
      FUN_02e628e0();
      *(undefined8 *)(lVar6 + 0x48) = uVar5;
      thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x48),uVar5);
      uVar5 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_IO_Compression_DeflateStream_Flush__);
      FUN_02aaed08();
      *(undefined8 *)(lVar6 + 0x50) = uVar5;
      thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x50),uVar5);
      uVar5 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04573818);
      FUN_02b87594();
      *(undefined8 *)(lVar6 + 0x58) = uVar5;
      thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x58),uVar5);
      puVar2 = PTR_DAT_04573838;
      if (lVar10 != 0) {
        FUN_025d9620(lVar10,lVar6,*puVar14);
        lVar10 = *(long *)(unaff_x27 + 0x48);
        lVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
        FUN_03cff798(lVar6,0);
        puVar4 = PTR_DAT_045736d0;
        puVar3 = Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateQuaternion>b__19_1__;
        puVar2 = Method_UnityEngine_InputSystem_Layouts_InputControlLayout_Cache_FindOrLoadLayout__;
        if (lVar6 != 0) {
          *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_04573a80;
          thunk_FUN_01f51358();
          uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
          FUN_02e63490();
          *(undefined8 *)(lVar6 + 0x48) = uVar5;
          thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x48),uVar5);
          uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
          FUN_02ab2244();
          *(undefined8 *)(lVar6 + 0x50) = uVar5;
          thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x50),uVar5);
          lVar7 = *(long *)puVar4;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar7 = *(long *)puVar4;
          }
          lVar11 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
          if (lVar11 == 0) {
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar7 = *(long *)puVar4;
            }
            uVar5 = **(undefined8 **)(lVar7 + 0xb8);
            lVar11 = thunk_FUN_01f117cc(*(undefined8 *)
                                         Method_UnityEngine_InputSystem_Layouts_InputControlLayout_Cache_FindOrLoadLayout__
                                       );
            FUN_02e63490(lVar11,uVar5,*(undefined8 *)PTR_DAT_04573908,0);
            plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
            *plVar8 = lVar11;
            thunk_FUN_01f51358(plVar8,lVar11);
          }
          *(long *)(lVar6 + 0x60) = lVar11;
          thunk_FUN_01f51358((long *)(lVar6 + 0x60),lVar11);
          if (lVar10 != 0) {
            FUN_025d9620(lVar10,lVar6,*puVar14);
            lVar6 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045718c8);
            FUN_03cfe4a4(lVar6,0);
            if (lVar6 != 0) {
              *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_04573aa8;
              thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x28));
              lVar7 = *(long *)(lVar6 + 0x48);
              lVar10 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045718d8);
              FUN_03cf2a8c(lVar10,0);
              puVar2 = 
              Method_UnityEngine_InputSystem_Layouts_InputControlLayout_Cache_FindOrLoadLayout__;
              if (lVar10 != 0) {
                *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)PTR_DAT_04573ac0;
                thunk_FUN_01f51358();
                uVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                            Method_UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>__ctor__
                                          );
                FUN_02e628e0();
                *(undefined8 *)(lVar10 + 0x48) = uVar5;
                thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x48),uVar5);
                uVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                            Method_System_IO_Compression_DeflateStream_Flush__);
                FUN_02aaed08();
                *(undefined8 *)(lVar10 + 0x50) = uVar5;
                thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x50),uVar5);
                uVar5 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04573818);
                FUN_02b87594();
                *(undefined8 *)(lVar10 + 0x58) = uVar5;
                thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x58),uVar5);
                if (lVar7 != 0) {
                  FUN_025d9620(lVar7,lVar10,*puVar14);
                  puVar3 = Method_UnityEngine_UI_LayoutRebuilder_<>c_<Rebuild>b__12_2__;
                  if (*(long *)(in_stack_00000028 + 400) != 0) {
                    if (*(char *)(*(long *)(in_stack_00000028 + 400) + 0x10) == '\0') {
                      lVar7 = *(long *)(lVar6 + 0x48);
                      lVar10 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045718d8);
                      FUN_03cf2a8c(lVar10,0);
                      if (lVar10 != 0) {
                        *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)PTR_DAT_04573a30;
                        thunk_FUN_01f51358();
                        uVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>__ctor__
                                                  );
                        FUN_02e628e0();
                        *(undefined8 *)(lVar10 + 0x48) = uVar5;
                        thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x48),uVar5);
                        uVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                        
                                                  Method_System_IO_Compression_DeflateStream_Flush__
                                                  );
                        FUN_02aaed08();
                        *(undefined8 *)(lVar10 + 0x50) = uVar5;
                        thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x50),uVar5);
                        uVar5 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04573818);
                        FUN_02b87594();
                        *(undefined8 *)(lVar10 + 0x58) = uVar5;
                        thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x58),uVar5);
                        if (lVar7 != 0) {
                          FUN_025d9620(lVar7,lVar10,*puVar14);
                          if (*(long *)(in_stack_00000028 + 400) != 0) {
                            if (*(char *)(*(long *)(in_stack_00000028 + 400) + 0x38) != '\0') {
                              lVar10 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04573838);
                              FUN_03cff798(lVar10,0);
                              if (lVar10 == 0) goto LAB_03d12b58;
                              *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)PTR_DAT_04573a78;
                              thunk_FUN_01f51358();
                              uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
                              FUN_02e63490();
                              *(undefined8 *)(lVar10 + 0x48) = uVar5;
                              thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x48),uVar5);
                              uVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateQuaternion>b__19_1__
                                                  );
                              FUN_02ab2244();
                              *(undefined8 *)(lVar10 + 0x50) = uVar5;
                              thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x50),uVar5);
                              puVar4 = PTR_DAT_045736d0;
                              lVar7 = *(long *)PTR_DAT_045736d0;
                              if (*(int *)(lVar7 + 0xe0) == 0) {
                                thunk_FUN_01ee6d7c();
                                lVar7 = *(long *)puVar4;
                              }
                              lVar11 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x50);
                              if (lVar11 == 0) {
                                if (*(int *)(lVar7 + 0xe0) == 0) {
                                  thunk_FUN_01ee6d7c();
                                  lVar7 = *(long *)puVar4;
                                }
                                uVar5 = **(undefined8 **)(lVar7 + 0xb8);
                                lVar11 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
                                FUN_02e63490(lVar11,uVar5,*(undefined8 *)PTR_DAT_04573880,0);
                                plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x50);
                                *plVar8 = lVar11;
                                thunk_FUN_01f51358(plVar8,lVar11);
                              }
                              *(long *)(lVar10 + 0x60) = lVar11;
                              thunk_FUN_01f51358((long *)(lVar10 + 0x60),lVar11);
                              lVar7 = *(long *)puVar4;
                              if (*(int *)(lVar7 + 0xe0) == 0) {
                                thunk_FUN_01ee6d7c();
                                lVar7 = *(long *)puVar4;
                              }
                              lVar11 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x58);
                              if (lVar11 == 0) {
                                if (*(int *)(lVar7 + 0xe0) == 0) {
                                  thunk_FUN_01ee6d7c();
                                  lVar7 = *(long *)puVar4;
                                }
                                uVar5 = **(undefined8 **)(lVar7 + 0xb8);
                                lVar11 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
                                FUN_02e63490(lVar11,uVar5,*(undefined8 *)PTR_DAT_04573888,0);
                                plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x58);
                                *plVar8 = lVar11;
                                thunk_FUN_01f51358(plVar8,lVar11);
                              }
                              *(long *)(lVar10 + 0x68) = lVar11;
                              thunk_FUN_01f51358((long *)(lVar10 + 0x68),lVar11);
                              lVar11 = *(long *)(lVar6 + 0x48);
                              lVar7 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045718c8);
                              FUN_03cfe4a4(lVar7,0);
                              if (((lVar7 == 0) || (*(long *)(lVar7 + 0x48) == 0)) ||
                                 (FUN_025d9620(*(long *)(lVar7 + 0x48),lVar10,*puVar14), lVar11 == 0
                                 )) goto LAB_03d12b58;
                              FUN_025d9620(lVar11,lVar7,*puVar14);
                            }
                            lVar7 = *(long *)(lVar6 + 0x48);
                            lVar10 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04573838);
                            FUN_03cff798(lVar10,0);
                            if (lVar10 != 0) {
                              *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)PTR_DAT_04573a80;
                              thunk_FUN_01f51358();
                              uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
                              FUN_02e63490();
                              *(undefined8 *)(lVar10 + 0x48) = uVar5;
                              thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x48),uVar5);
                              uVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateQuaternion>b__19_1__
                                                  );
                              FUN_02ab2244();
                              *(undefined8 *)(lVar10 + 0x50) = uVar5;
                              thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x50),uVar5);
                              puVar4 = PTR_DAT_045736d0;
                              lVar11 = *(long *)PTR_DAT_045736d0;
                              if (*(int *)(lVar11 + 0xe0) == 0) {
                                thunk_FUN_01ee6d7c();
                                lVar11 = *(long *)puVar4;
                              }
                              lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x60);
                              if (lVar12 == 0) {
                                if (*(int *)(lVar11 + 0xe0) == 0) {
                                  thunk_FUN_01ee6d7c();
                                  lVar11 = *(long *)puVar4;
                                }
                                uVar5 = **(undefined8 **)(lVar11 + 0xb8);
                                lVar12 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
                                FUN_02e63490(lVar12,uVar5,*(undefined8 *)PTR_DAT_04573890,0);
                                plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x60);
                                *plVar8 = lVar12;
                                thunk_FUN_01f51358(plVar8,lVar12);
                              }
                              *(long *)(lVar10 + 0x60) = lVar12;
                              thunk_FUN_01f51358((long *)(lVar10 + 0x60),lVar12);
                              if (lVar7 != 0) {
                                FUN_025d9620(lVar7,lVar10,*puVar14);
                                lVar10 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045718c8);
                                FUN_03cfe4a4(lVar10,0);
                                puVar2 = StringLiteral_3013;
                                if (lVar10 != 0) {
                                  *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)PTR_DAT_04573a70;
                                  thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x28));
                                  lVar11 = *(long *)(lVar10 + 0x48);
                                  lVar7 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045718d8);
                                  FUN_03cf2a8c(lVar7,0);
                                  if (lVar7 != 0) {
                                    *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)PTR_DAT_04573ab0;
                                    thunk_FUN_01f51358();
                                    uVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>__ctor__
                                                  );
                                    FUN_02e628e0();
                                    *(undefined8 *)(lVar7 + 0x48) = uVar5;
                                    thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x48),uVar5);
                                    uVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                                                
                                                  Method_System_IO_Compression_DeflateStream_Flush__
                                                  );
                                    FUN_02aaed08();
                                    *(undefined8 *)(lVar7 + 0x50) = uVar5;
                                    thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x50),uVar5);
                                    if (lVar11 != 0) {
                                      FUN_025d9620(lVar11,lVar7,*puVar14);
                                      lVar11 = *(long *)(lVar10 + 0x48);
                                      lVar7 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04573840);
                                      FUN_03cff630(lVar7,0);
                                      puVar4 = PTR_DAT_045736d0;
                                      if (lVar7 != 0) {
                                        *(undefined8 *)(lVar7 + 0x28) =
                                             *(undefined8 *)PTR_DAT_04573a20;
                                        thunk_FUN_01f51358();
                                        lVar12 = *(long *)puVar4;
                                        if (*(int *)(lVar12 + 0xe0) == 0) {
                                          thunk_FUN_01ee6d7c();
                                          lVar12 = *(long *)puVar4;
                                        }
                                        lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x68);
                                        if (lVar13 == 0) {
                                          if (*(int *)(lVar12 + 0xe0) == 0) {
                                            thunk_FUN_01ee6d7c();
                                            lVar12 = *(long *)puVar4;
                                          }
                                          uVar5 = **(undefined8 **)(lVar12 + 0xb8);
                                          lVar13 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
                                          FUN_02e62fc0(lVar13,uVar5,*(undefined8 *)PTR_DAT_04573898,
                                                       0);
                                          plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x68
                                                           );
                                          *plVar8 = lVar13;
                                          thunk_FUN_01f51358(plVar8,lVar13);
                                          puVar14 = (undefined8 *)PTR_DAT_04571910;
                                        }
                                        *(long *)(lVar7 + 0x48) = lVar13;
                                        thunk_FUN_01f51358((long *)(lVar7 + 0x48),lVar13);
                                        lVar12 = *(long *)puVar4;
                                        if (*(int *)(lVar12 + 0xe0) == 0) {
                                          thunk_FUN_01ee6d7c();
                                          lVar12 = *(long *)puVar4;
                                        }
                                        lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x70);
                                        if (lVar13 == 0) {
                                          if (*(int *)(lVar12 + 0xe0) == 0) {
                                            thunk_FUN_01ee6d7c();
                                            lVar12 = *(long *)puVar4;
                                          }
                                          uVar5 = **(undefined8 **)(lVar12 + 0xb8);
                                          lVar13 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
                                          FUN_02aaff14(lVar13,uVar5,*(undefined8 *)PTR_DAT_045738a0,
                                                       0);
                                          plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x70
                                                           );
                                          *plVar8 = lVar13;
                                          thunk_FUN_01f51358(plVar8,lVar13);
                                          puVar14 = (undefined8 *)PTR_DAT_04571910;
                                        }
                                        *(long *)(lVar7 + 0x50) = lVar13;
                                        thunk_FUN_01f51358((long *)(lVar7 + 0x50),lVar13);
                                        lVar12 = *(long *)puVar4;
                                        if (*(int *)(lVar12 + 0xe0) == 0) {
                                          thunk_FUN_01ee6d7c();
                                          lVar12 = *(long *)puVar4;
                                        }
                                        lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x78);
                                        if (lVar13 == 0) {
                                          if (*(int *)(lVar12 + 0xe0) == 0) {
                                            thunk_FUN_01ee6d7c();
                                            lVar12 = *(long *)puVar4;
                                          }
                                          uVar5 = **(undefined8 **)(lVar12 + 0xb8);
                                          lVar13 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
                                          FUN_02e62fc0(lVar13,uVar5,*(undefined8 *)PTR_DAT_045738a8,
                                                       0);
                                          plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x78
                                                           );
                                          *plVar8 = lVar13;
                                          thunk_FUN_01f51358(plVar8,lVar13);
                                          puVar14 = (undefined8 *)PTR_DAT_04571910;
                                        }
                                        *(long *)(lVar7 + 0x60) = lVar13;
                                        thunk_FUN_01f51358((long *)(lVar7 + 0x60),lVar13);
                                        puVar2 = PTR_DAT_04571900;
                                        if (lVar11 != 0) {
                                          FUN_025d9620(lVar11,lVar7,*puVar14);
                                          if (*(char *)(unaff_x28 + 0x44) != '\0') {
                                            if (*(int *)(*(long *)
                                                  Method_Utility_MonoBehaviourSingleton<TurretsProjectilesFactory>_Awake__
                                                  + 0xe0) == 0) {
                                              thunk_FUN_01ee6d7c();
                                            }
                                            uVar9 = FUN_0403b648(0);
                                            if ((uVar9 & 1) == 0) {
                                              if (in_stack_00000018 == 0) goto LAB_03d12b58;
                                            }
                                            else {
                                              if (in_stack_00000018 == 0) goto LAB_03d12b58;
                                              lVar7 = *(long *)(in_stack_00000018 + 0x10);
                                              lVar11 = *(long *)puVar2;
                                              *(int *)(in_stack_00000018 + 0x1c) =
                                                   *(int *)(in_stack_00000018 + 0x1c) + 1;
                                              if (lVar7 == 0) goto LAB_03d12b58;
                                              uVar1 = *(uint *)(in_stack_00000018 + 0x18);
                                              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                *(uint *)(in_stack_00000018 + 0x18) = uVar1 + 1;
                                                *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                                     unaff_x27;
                                                thunk_FUN_01f51358();
                                              }
                                              else {
                                                FUN_030f2bb4(in_stack_00000018,unaff_x27,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar11 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                            }
                                            lVar7 = *(long *)(in_stack_00000018 + 0x10);
                                            lVar11 = *(long *)puVar2;
                                            *(int *)(in_stack_00000018 + 0x1c) =
                                                 *(int *)(in_stack_00000018 + 0x1c) + 1;
                                            if (lVar7 == 0) goto LAB_03d12b58;
                                            uVar1 = *(uint *)(in_stack_00000018 + 0x18);
                                            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                              *(uint *)(in_stack_00000018 + 0x18) = uVar1 + 1;
                                              *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar6
                                              ;
                                              thunk_FUN_01f51358();
                                            }
                                            else {
                                              FUN_030f2bb4(in_stack_00000018,lVar6,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar11 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                          }
                                          if (*(char *)(unaff_x28 + 0x45) != '\0') {
                                            if (in_stack_00000018 == 0) goto LAB_03d12b58;
                                            lVar6 = *(long *)(in_stack_00000018 + 0x10);
                                            lVar7 = *(long *)puVar2;
                                            *(int *)(in_stack_00000018 + 0x1c) =
                                                 *(int *)(in_stack_00000018 + 0x1c) + 1;
                                            if (lVar6 == 0) goto LAB_03d12b58;
                                            uVar1 = *(uint *)(in_stack_00000018 + 0x18);
                                            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                              *(uint *)(in_stack_00000018 + 0x18) = uVar1 + 1;
                                              plVar8 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20)
                                              ;
                                              *plVar8 = lVar10;
                                              thunk_FUN_01f51358(plVar8,lVar10);
                                            }
                                            else {
                                              FUN_030f2bb4(in_stack_00000018,lVar10,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar7 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                          }
                                          uVar5 = *(undefined8 *)(unaff_x28 + 0x30);
                                          if (*(int *)(*(long *)
                                                  Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__
                                                  + 0xe0) == 0) {
                                            thunk_FUN_01ee6d7c();
                                          }
                                          uVar9 = FUN_04073094(uVar5,0,0);
                                          if (((uVar9 & 1) == 0) || (*(int *)(unaff_x28 + 0xc) == 0)
                                             ) {
                                            if (in_stack_00000018 == 0) goto LAB_03d12b58;
                                          }
                                          else {
                                            lVar6 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                        PTR_DAT_045718c8);
                                            FUN_03cfe4a4(lVar6,0);
                                            if (lVar6 == 0) goto LAB_03d12b58;
                                            *(undefined8 *)(lVar6 + 0x28) =
                                                 *(undefined8 *)PTR_DAT_04573a38;
                                            thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x28));
                                            lVar7 = *(long *)(lVar6 + 0x48);
                                            lVar10 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                         PTR_DAT_04573840);
                                            FUN_03cff630(lVar10,0);
                                            if (lVar10 == 0) goto LAB_03d12b58;
                                            *(undefined8 *)(lVar10 + 0x28) =
                                                 *(undefined8 *)PTR_DAT_04573a58;
                                            thunk_FUN_01f51358();
                                            lVar11 = *(long *)puVar4;
                                            if (*(int *)(lVar11 + 0xe0) == 0) {
                                              thunk_FUN_01ee6d7c();
                                              lVar11 = *(long *)puVar4;
                                            }
                                            lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x80);
                                            if (lVar12 == 0) {
                                              if (*(int *)(lVar11 + 0xe0) == 0) {
                                                thunk_FUN_01ee6d7c();
                                                lVar11 = *(long *)puVar4;
                                              }
                                              uVar5 = **(undefined8 **)(lVar11 + 0xb8);
                                              lVar12 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                           StringLiteral_3013);
                                              FUN_02e62fc0(lVar12,uVar5,
                                                           *(undefined8 *)PTR_DAT_045738b0,0);
                                              plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) +
                                                               0x80);
                                              *plVar8 = lVar12;
                                              thunk_FUN_01f51358(plVar8,lVar12);
                                            }
                                            *(long *)(lVar10 + 0x48) = lVar12;
                                            thunk_FUN_01f51358((long *)(lVar10 + 0x48),lVar12);
                                            lVar11 = *(long *)puVar4;
                                            if (*(int *)(lVar11 + 0xe0) == 0) {
                                              thunk_FUN_01ee6d7c();
                                              lVar11 = *(long *)puVar4;
                                            }
                                            lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
                                            if (lVar12 == 0) {
                                              if (*(int *)(lVar11 + 0xe0) == 0) {
                                                thunk_FUN_01ee6d7c();
                                                lVar11 = *(long *)puVar4;
                                              }
                                              uVar5 = **(undefined8 **)(lVar11 + 0xb8);
                                              lVar12 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                                                                      
                                                  Method_UnityEngine_UI_LayoutRebuilder_<>c_<Rebuild>b__12_2__
                                                  );
                                              FUN_02aaff14(lVar12,uVar5,
                                                           *(undefined8 *)PTR_DAT_045738b8,0);
                                              plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) +
                                                               0x88);
                                              *plVar8 = lVar12;
                                              thunk_FUN_01f51358(plVar8,lVar12);
                                            }
                                            *(long *)(lVar10 + 0x50) = lVar12;
                                            thunk_FUN_01f51358((long *)(lVar10 + 0x50),lVar12);
                                            lVar11 = *(long *)puVar4;
                                            if (*(int *)(lVar11 + 0xe0) == 0) {
                                              thunk_FUN_01ee6d7c();
                                              lVar11 = *(long *)puVar4;
                                            }
                                            lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x90);
                                            if (lVar12 == 0) {
                                              if (*(int *)(lVar11 + 0xe0) == 0) {
                                                thunk_FUN_01ee6d7c();
                                                lVar11 = *(long *)puVar4;
                                              }
                                              uVar5 = **(undefined8 **)(lVar11 + 0xb8);
                                              lVar12 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                           StringLiteral_3013);
                                              FUN_02e62fc0(lVar12,uVar5,
                                                           *(undefined8 *)PTR_DAT_045738c0,0);
                                              plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) +
                                                               0x90);
                                              *plVar8 = lVar12;
                                              thunk_FUN_01f51358(plVar8,lVar12);
                                            }
                                            *(long *)(lVar10 + 0x60) = lVar12;
                                            thunk_FUN_01f51358((long *)(lVar10 + 0x60),lVar12);
                                            if (lVar7 == 0) goto LAB_03d12b58;
                                            FUN_025d9620(lVar7,lVar10,*puVar14);
                                            lVar7 = *(long *)(lVar6 + 0x48);
                                            lVar10 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                         PTR_DAT_04573838);
                                            FUN_03cff798(lVar10,0);
                                            if (lVar10 == 0) goto LAB_03d12b58;
                                            *(undefined8 *)(lVar10 + 0x28) =
                                                 *(undefined8 *)PTR_DAT_04573a68;
                                            thunk_FUN_01f51358();
                                            lVar11 = *(long *)puVar4;
                                            if (*(int *)(lVar11 + 0xe0) == 0) {
                                              thunk_FUN_01ee6d7c();
                                              lVar11 = *(long *)puVar4;
                                            }
                                            lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x98);
                                            if (lVar12 == 0) {
                                              if (*(int *)(lVar11 + 0xe0) == 0) {
                                                thunk_FUN_01ee6d7c();
                                                lVar11 = *(long *)puVar4;
                                              }
                                              uVar5 = **(undefined8 **)(lVar11 + 0xb8);
                                              lVar12 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                                                                      
                                                  Method_UnityEngine_InputSystem_Layouts_InputControlLayout_Cache_FindOrLoadLayout__
                                                  );
                                              FUN_02e63490(lVar12,uVar5,
                                                           *(undefined8 *)PTR_DAT_045738c8,0);
                                              plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) +
                                                               0x98);
                                              *plVar8 = lVar12;
                                              thunk_FUN_01f51358(plVar8,lVar12);
                                            }
                                            *(long *)(lVar10 + 0x48) = lVar12;
                                            thunk_FUN_01f51358((long *)(lVar10 + 0x48),lVar12);
                                            lVar11 = *(long *)puVar4;
                                            if (*(int *)(lVar11 + 0xe0) == 0) {
                                              thunk_FUN_01ee6d7c();
                                              lVar11 = *(long *)puVar4;
                                            }
                                            lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0xa0);
                                            if (lVar12 == 0) {
                                              if (*(int *)(lVar11 + 0xe0) == 0) {
                                                thunk_FUN_01ee6d7c();
                                                lVar11 = *(long *)puVar4;
                                              }
                                              uVar5 = **(undefined8 **)(lVar11 + 0xb8);
                                              lVar12 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                                                                      
                                                  Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateQuaternion>b__19_1__
                                                  );
                                              FUN_02ab2244(lVar12,uVar5,
                                                           *(undefined8 *)PTR_DAT_045738d0,0);
                                              plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) +
                                                               0xa0);
                                              *plVar8 = lVar12;
                                              thunk_FUN_01f51358(plVar8,lVar12);
                                            }
                                            *(long *)(lVar10 + 0x50) = lVar12;
                                            thunk_FUN_01f51358((long *)(lVar10 + 0x50),lVar12);
                                            lVar11 = *(long *)puVar4;
                                            if (*(int *)(lVar11 + 0xe0) == 0) {
                                              thunk_FUN_01ee6d7c();
                                              lVar11 = *(long *)puVar4;
                                            }
                                            lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0xa8);
                                            if (lVar12 == 0) {
                                              if (*(int *)(lVar11 + 0xe0) == 0) {
                                                thunk_FUN_01ee6d7c();
                                                lVar11 = *(long *)puVar4;
                                              }
                                              uVar5 = **(undefined8 **)(lVar11 + 0xb8);
                                              lVar12 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                                                                      
                                                  Method_UnityEngine_InputSystem_Layouts_InputControlLayout_Cache_FindOrLoadLayout__
                                                  );
                                              FUN_02e63490(lVar12,uVar5,
                                                           *(undefined8 *)PTR_DAT_045738d8,0);
                                              plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) +
                                                               0xa8);
                                              *plVar8 = lVar12;
                                              thunk_FUN_01f51358(plVar8,lVar12);
                                            }
                                            *(long *)(lVar10 + 0x60) = lVar12;
                                            thunk_FUN_01f51358((long *)(lVar10 + 0x60),lVar12);
                                            lVar11 = *(long *)puVar4;
                                            if (*(int *)(lVar11 + 0xe0) == 0) {
                                              thunk_FUN_01ee6d7c();
                                              lVar11 = *(long *)puVar4;
                                            }
                                            lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0xb0);
                                            if (lVar12 == 0) {
                                              if (*(int *)(lVar11 + 0xe0) == 0) {
                                                thunk_FUN_01ee6d7c();
                                                lVar11 = *(long *)puVar4;
                                              }
                                              uVar5 = **(undefined8 **)(lVar11 + 0xb8);
                                              lVar12 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                                                                      
                                                  Method_UnityEngine_InputSystem_Layouts_InputControlLayout_Cache_FindOrLoadLayout__
                                                  );
                                              FUN_02e63490(lVar12,uVar5,
                                                           *(undefined8 *)PTR_DAT_045738e0,0);
                                              plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) +
                                                               0xb0);
                                              *plVar8 = lVar12;
                                              thunk_FUN_01f51358(plVar8,lVar12);
                                            }
                                            *(long *)(lVar10 + 0x68) = lVar12;
                                            thunk_FUN_01f51358((long *)(lVar10 + 0x68),lVar12);
                                            if (lVar7 == 0) goto LAB_03d12b58;
                                            FUN_025d9620(lVar7,lVar10,*puVar14);
                                            lVar10 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                         PTR_DAT_04572248);
                                            FUN_03ceb9c4(lVar10,0);
                                            if (lVar10 == 0) goto LAB_03d12b58;
                                            *(undefined8 *)(lVar10 + 0x28) =
                                                 *(undefined8 *)PTR_DAT_04573aa0;
                                            thunk_FUN_01f51358();
                                            *(undefined8 *)(lVar10 + 0x60) =
                                                 *(undefined8 *)(in_stack_00000028 + 0x1d0);
                                            thunk_FUN_01f51358();
                                            FUN_02c60734(lVar10,*(undefined8 *)
                                                                 (in_stack_00000028 + 0x1d8),
                                                         *(undefined8 *)PTR_DAT_04572240);
                                            puVar4 = StringLiteral_3013;
                                            uVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                        StringLiteral_3013);
                                            FUN_02e62fc0();
                                            *(undefined8 *)(lVar10 + 0x80) = uVar5;
                                            thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x80),uVar5);
                                            puVar3 = 
                                            Method_UnityEngine_UI_LayoutRebuilder_<>c_<Rebuild>b__12_2__
                                            ;
                                            uVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                                                                
                                                  Method_UnityEngine_UI_LayoutRebuilder_<>c_<Rebuild>b__12_2__
                                                  );
                                            FUN_02aaff14();
                                            *(undefined8 *)(lVar10 + 0x88) = uVar5;
                                            thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x88),uVar5);
                                            uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
                                            FUN_02e62fc0();
                                            *(undefined8 *)(lVar10 + 0x48) = uVar5;
                                            thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x48),uVar5);
                                            uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
                                            FUN_02aaff14();
                                            *(undefined8 *)(lVar10 + 0x50) = uVar5;
                                            thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x50),uVar5);
                                            *(long *)(in_stack_00000028 + 0x1f0) = lVar10;
                                            thunk_FUN_01f51358((undefined8 *)
                                                               (in_stack_00000028 + 0x1f0),lVar10);
                                            if (*(long *)(lVar6 + 0x48) == 0) goto LAB_03d12b58;
                                            FUN_025d9620(*(long *)(lVar6 + 0x48),
                                                         *(undefined8 *)(in_stack_00000028 + 0x1f0),
                                                         *puVar14);
                                            lVar7 = *(long *)(lVar6 + 0x48);
                                            lVar10 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                         PTR_DAT_04573838);
                                            FUN_03cff798(lVar10,0);
                                            puVar3 = PTR_DAT_045736d0;
                                            if (lVar10 == 0) goto LAB_03d12b58;
                                            *(undefined8 *)(lVar10 + 0x28) =
                                                 *(undefined8 *)PTR_DAT_04573a48;
                                            thunk_FUN_01f51358();
                                            lVar11 = *(long *)puVar3;
                                            if (*(int *)(lVar11 + 0xe0) == 0) {
                                              thunk_FUN_01ee6d7c();
                                              lVar11 = *(long *)puVar3;
                                            }
                                            lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0xb8);
                                            if (lVar12 == 0) {
                                              if (*(int *)(lVar11 + 0xe0) == 0) {
                                                thunk_FUN_01ee6d7c();
                                                lVar11 = *(long *)puVar3;
                                              }
                                              uVar5 = **(undefined8 **)(lVar11 + 0xb8);
                                              lVar12 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                                                                      
                                                  Method_UnityEngine_InputSystem_Layouts_InputControlLayout_Cache_FindOrLoadLayout__
                                                  );
                                              FUN_02e63490(lVar12,uVar5,
                                                           *(undefined8 *)PTR_DAT_045738e8,0);
                                              plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                               0xb8);
                                              *plVar8 = lVar12;
                                              thunk_FUN_01f51358(plVar8,lVar12);
                                            }
                                            *(long *)(lVar10 + 0x48) = lVar12;
                                            thunk_FUN_01f51358((long *)(lVar10 + 0x48),lVar12);
                                            lVar11 = *(long *)puVar3;
                                            if (*(int *)(lVar11 + 0xe0) == 0) {
                                              thunk_FUN_01ee6d7c();
                                              lVar11 = *(long *)puVar3;
                                            }
                                            lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0xc0);
                                            if (lVar12 == 0) {
                                              if (*(int *)(lVar11 + 0xe0) == 0) {
                                                thunk_FUN_01ee6d7c();
                                                lVar11 = *(long *)puVar3;
                                              }
                                              uVar5 = **(undefined8 **)(lVar11 + 0xb8);
                                              lVar12 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                                                                      
                                                  Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateQuaternion>b__19_1__
                                                  );
                                              FUN_02ab2244(lVar12,uVar5,
                                                           *(undefined8 *)PTR_DAT_045738f0,0);
                                              plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                               0xc0);
                                              *plVar8 = lVar12;
                                              thunk_FUN_01f51358(plVar8,lVar12);
                                            }
                                            *(long *)(lVar10 + 0x50) = lVar12;
                                            thunk_FUN_01f51358((long *)(lVar10 + 0x50),lVar12);
                                            lVar11 = *(long *)puVar3;
                                            if (*(int *)(lVar11 + 0xe0) == 0) {
                                              thunk_FUN_01ee6d7c();
                                              lVar11 = *(long *)puVar3;
                                            }
                                            lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 200);
                                            if (lVar12 == 0) {
                                              if (*(int *)(lVar11 + 0xe0) == 0) {
                                                thunk_FUN_01ee6d7c();
                                                lVar11 = *(long *)puVar3;
                                              }
                                              uVar5 = **(undefined8 **)(lVar11 + 0xb8);
                                              lVar12 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                                                                      
                                                  Method_UnityEngine_InputSystem_Layouts_InputControlLayout_Cache_FindOrLoadLayout__
                                                  );
                                              FUN_02e63490(lVar12,uVar5,
                                                           *(undefined8 *)PTR_DAT_045738f8,0);
                                              plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                               200);
                                              *plVar8 = lVar12;
                                              thunk_FUN_01f51358(plVar8,lVar12);
                                            }
                                            *(long *)(lVar10 + 0x60) = lVar12;
                                            thunk_FUN_01f51358((long *)(lVar10 + 0x60),lVar12);
                                            lVar11 = *(long *)puVar3;
                                            if (*(int *)(lVar11 + 0xe0) == 0) {
                                              thunk_FUN_01ee6d7c();
                                              lVar11 = *(long *)puVar3;
                                            }
                                            lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0xd0);
                                            if (lVar12 == 0) {
                                              if (*(int *)(lVar11 + 0xe0) == 0) {
                                                thunk_FUN_01ee6d7c();
                                                lVar11 = *(long *)puVar3;
                                              }
                                              uVar5 = **(undefined8 **)(lVar11 + 0xb8);
                                              lVar12 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                                                                      
                                                  Method_UnityEngine_InputSystem_Layouts_InputControlLayout_Cache_FindOrLoadLayout__
                                                  );
                                              FUN_02e63490(lVar12,uVar5,
                                                           *(undefined8 *)PTR_DAT_04573900,0);
                                              plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                               0xd0);
                                              *plVar8 = lVar12;
                                              thunk_FUN_01f51358(plVar8,lVar12);
                                            }
                                            *(long *)(lVar10 + 0x68) = lVar12;
                                            thunk_FUN_01f51358((long *)(lVar10 + 0x68),lVar12);
                                            if ((lVar7 == 0) ||
                                               (FUN_025d9620(lVar7,lVar10,*puVar14),
                                               in_stack_00000018 == 0)) goto LAB_03d12b58;
                                            lVar10 = *(long *)(in_stack_00000018 + 0x10);
                                            lVar7 = *(long *)puVar2;
                                            *(int *)(in_stack_00000018 + 0x1c) =
                                                 *(int *)(in_stack_00000018 + 0x1c) + 1;
                                            if (lVar10 == 0) goto LAB_03d12b58;
                                            uVar1 = *(uint *)(in_stack_00000018 + 0x18);
                                            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                              *(uint *)(in_stack_00000018 + 0x18) = uVar1 + 1;
                                              plVar8 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20
                                                               );
                                              *plVar8 = lVar6;
                                              thunk_FUN_01f51358(plVar8,lVar6);
                                            }
                                            else {
                                              FUN_030f2bb4(in_stack_00000018,lVar6,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar7 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                          }
                                          puVar3 = PTR_DAT_045730e0;
                                          puVar2 = PTR_DAT_045718e8;
                                          if (0 < *(int *)(in_stack_00000018 + 0x18)) {
                                            uVar5 = FUN_030f4630(in_stack_00000018,
                                                                 *(undefined8 *)PTR_DAT_04571908);
                                            *(undefined8 *)(in_stack_00000028 + 0x1a0) = uVar5;
                                            thunk_FUN_01f51358((undefined8 *)
                                                               (in_stack_00000028 + 0x1a0),uVar5);
                                            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                                              thunk_FUN_01ee6d7c();
                                            }
                                            lVar6 = FUN_03ceba30(0);
                                            lVar10 = *(long *)puVar3;
                                            if (*(int *)(lVar10 + 0xe0) == 0) {
                                              thunk_FUN_01ee6d7c(lVar10);
                                            }
                                            if (((lVar6 == 0) ||
                                                (lVar6 = FUN_03cebaa8(lVar6,*(undefined8 *)
                                                                             (*(long *)(*(long *)
                                                  puVar3 + 0xb8) + 0x10),1,0,0,0), lVar6 == 0)) ||
                                               (*(long *)(lVar6 + 0x28) == 0)) goto LAB_03d12b58;
                                            FUN_025d9774(*(long *)(lVar6 + 0x28),
                                                         *(undefined8 *)(in_stack_00000028 + 0x1a0),
                                                         *(undefined8 *)PTR_DAT_04571918);
                                          }
                                          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                                            thunk_FUN_01ee6d7c();
                                          }
                                          lVar6 = FUN_03ceba30(0);
                                          if (lVar6 != 0) {
                                            FUN_03cf0c74(lVar6,*(undefined8 *)
                                                                (in_stack_00000028 + 400),0);
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
                    else {
                      lVar6 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045718c8);
                      FUN_03cfe4a4(lVar6,0);
                      if (lVar6 != 0) {
                        FUN_042af96c(&PTR_DAT_04572000);
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
LAB_03d12b58:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


