/*
FUNCTION_NAME: FUN_03d11028
ENTRY_POINT: 03d11028
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03d11028(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long unaff_x25;
  long unaff_x26;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  
  lVar6 = thunk_FUN_01f117cc(*param_1);
  FUN_03ceb9c4(lVar6,0);
  puVar4 = PTR_DAT_04573820;
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_04573a60;
    thunk_FUN_01f51358();
    puVar5 = StringLiteral_3013;
    uVar7 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3013);
    FUN_02e62fc0();
    *(undefined8 *)(lVar6 + 0x48) = uVar7;
    thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x48),uVar7);
    puVar3 = Method_UnityEngine_UI_LayoutRebuilder_<>c_<Rebuild>b__12_2__;
    uVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_UnityEngine_UI_LayoutRebuilder_<>c_<Rebuild>b__12_2__);
    FUN_02aaff14();
    *(undefined8 *)(lVar6 + 0x50) = uVar7;
    thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x50),uVar7);
    uVar7 = *(undefined8 *)puVar4;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar7 = FUN_03579868(uVar7,0);
    FUN_03cff8e8(lVar6,uVar7,0);
    uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
    FUN_02e62fc0();
    *(undefined8 *)(lVar6 + 0x80) = uVar7;
    thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x80),uVar7);
    uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
    FUN_02aaff14();
    *(undefined8 *)(lVar6 + 0x88) = uVar7;
    thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x88),uVar7);
    uVar7 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045725f0);
    FUN_02b87fb8();
    *(undefined8 *)(lVar6 + 0x58) = uVar7;
    thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x58),uVar7);
    puVar14 = (undefined8 *)PTR_DAT_04571910;
    if (unaff_x26 != 0) {
      FUN_025d9620();
      lVar11 = *(long *)(unaff_x25 + 0x48);
      lVar6 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04573838);
      FUN_03cff798(lVar6,0);
      puVar2 = Method_UnityEngine_InputSystem_Layouts_InputControlLayout_Cache_FindOrLoadLayout__;
      if (lVar6 != 0) {
        *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_04573a90;
        thunk_FUN_01f51358();
        uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
        FUN_02e63490();
        *(undefined8 *)(lVar6 + 0x48) = uVar7;
        thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x48),uVar7);
        uVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateQuaternion>b__19_1__
                                  );
        FUN_02ab2244();
        *(undefined8 *)(lVar6 + 0x50) = uVar7;
        thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x50),uVar7);
        puVar3 = PTR_DAT_045736d0;
        puVar4 = Method_UnityEngine_UI_LayoutRebuilder_<>c_<Rebuild>b__12_2__;
        lVar8 = *(long *)PTR_DAT_045736d0;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar8 = *(long *)puVar3;
        }
        lVar12 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x20);
        if (lVar12 == 0) {
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar8 = *(long *)puVar3;
          }
          uVar7 = **(undefined8 **)(lVar8 + 0xb8);
          lVar12 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
          FUN_02e63490(lVar12,uVar7,*(undefined8 *)PTR_DAT_04573850,0);
          plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
          *plVar9 = lVar12;
          thunk_FUN_01f51358(plVar9,lVar12);
          puVar14 = (undefined8 *)PTR_DAT_04571910;
        }
        *(long *)(lVar6 + 0x60) = lVar12;
        thunk_FUN_01f51358((long *)(lVar6 + 0x60),lVar12);
        lVar8 = *(long *)puVar3;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar8 = *(long *)puVar3;
        }
        lVar12 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x28);
        if (lVar12 == 0) {
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar8 = *(long *)puVar3;
          }
          uVar7 = **(undefined8 **)(lVar8 + 0xb8);
          lVar12 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
          FUN_02e63490(lVar12,uVar7,*(undefined8 *)PTR_DAT_04573858,0);
          plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
          *plVar9 = lVar12;
          thunk_FUN_01f51358(plVar9,lVar12);
          puVar14 = (undefined8 *)PTR_DAT_04571910;
        }
        *(long *)(lVar6 + 0x68) = lVar12;
        thunk_FUN_01f51358((long *)(lVar6 + 0x68),lVar12);
        if (lVar11 != 0) {
          FUN_025d9620(lVar11,lVar6,*puVar14);
          if (*(long *)(in_stack_00000028 + 400) != 0) {
            if (*(uint *)(*(long *)(in_stack_00000028 + 400) + 0x1c) < 3) {
              lVar11 = *(long *)(unaff_x25 + 0x48);
              lVar6 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04573838);
              FUN_03cff798(lVar6,0);
              if (lVar6 == 0) goto LAB_03d12b58;
              *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_04573a50;
              thunk_FUN_01f51358();
              uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
              FUN_02e63490();
              *(undefined8 *)(lVar6 + 0x48) = uVar7;
              thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x48),uVar7);
              uVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                          Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateQuaternion>b__19_1__
                                        );
              FUN_02ab2244();
              *(undefined8 *)(lVar6 + 0x50) = uVar7;
              thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x50),uVar7);
              if (lVar11 == 0) goto LAB_03d12b58;
              FUN_025d9620(lVar11,lVar6,*puVar14);
            }
            lVar11 = *(long *)(unaff_x25 + 0x48);
            lVar6 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04573840);
            FUN_03cff630(lVar6,0);
            if (lVar6 != 0) {
              *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_04573a28;
              thunk_FUN_01f51358();
              uVar7 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3013);
              FUN_02e62fc0();
              *(undefined8 *)(lVar6 + 0x48) = uVar7;
              thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x48),uVar7);
              uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
              FUN_02aaff14();
              *(undefined8 *)(lVar6 + 0x50) = uVar7;
              thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x50),uVar7);
              puVar3 = PTR_DAT_045736d0;
              lVar8 = *(long *)PTR_DAT_045736d0;
              if (*(int *)(lVar8 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                lVar8 = *(long *)puVar3;
              }
              lVar12 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x30);
              if (lVar12 == 0) {
                if (*(int *)(lVar8 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                  lVar8 = *(long *)puVar3;
                }
                uVar7 = **(undefined8 **)(lVar8 + 0xb8);
                lVar12 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3013);
                FUN_02e62fc0(lVar12,uVar7,*(undefined8 *)PTR_DAT_04573860,0);
                plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30);
                *plVar9 = lVar12;
                thunk_FUN_01f51358(plVar9,lVar12);
                puVar14 = (undefined8 *)PTR_DAT_04571910;
              }
              *(long *)(lVar6 + 0x60) = lVar12;
              thunk_FUN_01f51358((long *)(lVar6 + 0x60),lVar12);
              lVar8 = *(long *)puVar3;
              if (*(int *)(lVar8 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                lVar8 = *(long *)puVar3;
              }
              lVar12 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x38);
              if (lVar12 == 0) {
                if (*(int *)(lVar8 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                  lVar8 = *(long *)puVar3;
                }
                uVar7 = **(undefined8 **)(lVar8 + 0xb8);
                lVar12 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3013);
                FUN_02e62fc0(lVar12,uVar7,*(undefined8 *)PTR_DAT_04573868,0);
                plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38);
                *plVar9 = lVar12;
                thunk_FUN_01f51358(plVar9,lVar12);
                puVar14 = (undefined8 *)PTR_DAT_04571910;
              }
              *(long *)(lVar6 + 0x68) = lVar12;
              thunk_FUN_01f51358((long *)(lVar6 + 0x68),lVar12);
              if (lVar11 != 0) {
                FUN_025d9620(lVar11,lVar6,*puVar14);
                lVar11 = *(long *)(unaff_x25 + 0x48);
                lVar6 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04573840);
                FUN_03cff630(lVar6,0);
                if (lVar6 != 0) {
                  *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_04573ab8;
                  thunk_FUN_01f51358();
                  uVar7 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3013);
                  FUN_02e62fc0();
                  *(undefined8 *)(lVar6 + 0x48) = uVar7;
                  thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x48),uVar7);
                  uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
                  FUN_02aaff14();
                  *(undefined8 *)(lVar6 + 0x50) = uVar7;
                  thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x50),uVar7);
                  puVar3 = PTR_DAT_045736d0;
                  lVar8 = *(long *)PTR_DAT_045736d0;
                  if (*(int *)(lVar8 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                    lVar8 = *(long *)puVar3;
                  }
                  lVar12 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x40);
                  if (lVar12 == 0) {
                    if (*(int *)(lVar8 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                      lVar8 = *(long *)puVar3;
                    }
                    uVar7 = **(undefined8 **)(lVar8 + 0xb8);
                    lVar12 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3013);
                    FUN_02e62fc0(lVar12,uVar7,*(undefined8 *)PTR_DAT_04573870,0);
                    plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x40);
                    *plVar9 = lVar12;
                    thunk_FUN_01f51358(plVar9,lVar12);
                    puVar14 = (undefined8 *)PTR_DAT_04571910;
                  }
                  *(long *)(lVar6 + 0x60) = lVar12;
                  thunk_FUN_01f51358((long *)(lVar6 + 0x60),lVar12);
                  lVar8 = *(long *)puVar3;
                  if (*(int *)(lVar8 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                    lVar8 = *(long *)puVar3;
                  }
                  lVar12 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x48);
                  if (lVar12 == 0) {
                    if (*(int *)(lVar8 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                      lVar8 = *(long *)puVar3;
                    }
                    uVar7 = **(undefined8 **)(lVar8 + 0xb8);
                    lVar12 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3013);
                    FUN_02e62fc0(lVar12,uVar7,*(undefined8 *)PTR_DAT_04573878,0);
                    plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x48);
                    *plVar9 = lVar12;
                    thunk_FUN_01f51358(plVar9,lVar12);
                    puVar14 = (undefined8 *)PTR_DAT_04571910;
                  }
                  *(long *)(lVar6 + 0x68) = lVar12;
                  thunk_FUN_01f51358((long *)(lVar6 + 0x68),lVar12);
                  if ((lVar11 != 0) &&
                     (FUN_025d9620(lVar11,lVar6,*puVar14), *(long *)(in_stack_00000020 + 0x48) != 0)
                     ) {
                    FUN_025d9620();
                    lVar11 = *(long *)(in_stack_00000020 + 0x48);
                    lVar6 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045718d8);
                    FUN_03cf2a8c(lVar6,0);
                    if (lVar6 != 0) {
                      *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_04573a30;
                      thunk_FUN_01f51358();
                      uVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                                  Method_UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>__ctor__
                                                );
                      FUN_02e628e0();
                      *(undefined8 *)(lVar6 + 0x48) = uVar7;
                      thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x48),uVar7);
                      uVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                                  Method_System_IO_Compression_DeflateStream_Flush__
                                                );
                      FUN_02aaed08();
                      *(undefined8 *)(lVar6 + 0x50) = uVar7;
                      thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x50),uVar7);
                      uVar7 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04573818);
                      FUN_02b87594();
                      *(undefined8 *)(lVar6 + 0x58) = uVar7;
                      thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x58),uVar7);
                      if (lVar11 != 0) {
                        FUN_025d9620(lVar11,lVar6,*puVar14);
                        if (*(long *)(in_stack_00000028 + 400) != 0) {
                          if (*(char *)(*(long *)(in_stack_00000028 + 400) + 0x38) != '\0') {
                            lVar6 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04573838);
                            FUN_03cff798(lVar6,0);
                            if (lVar6 == 0) goto LAB_03d12b58;
                            *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_04573a78;
                            thunk_FUN_01f51358();
                            uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
                            FUN_02e63490();
                            *(undefined8 *)(lVar6 + 0x48) = uVar7;
                            thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x48),uVar7);
                            uVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                                
                                                  Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateQuaternion>b__19_1__
                                                  );
                            FUN_02ab2244();
                            *(undefined8 *)(lVar6 + 0x50) = uVar7;
                            thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x50),uVar7);
                            puVar3 = PTR_DAT_045736d0;
                            lVar11 = *(long *)PTR_DAT_045736d0;
                            if (*(int *)(lVar11 + 0xe0) == 0) {
                              thunk_FUN_01ee6d7c();
                              lVar11 = *(long *)puVar3;
                            }
                            lVar8 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x50);
                            if (lVar8 == 0) {
                              if (*(int *)(lVar11 + 0xe0) == 0) {
                                thunk_FUN_01ee6d7c();
                                lVar11 = *(long *)puVar3;
                              }
                              uVar7 = **(undefined8 **)(lVar11 + 0xb8);
                              lVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
                              FUN_02e63490(lVar8,uVar7,*(undefined8 *)PTR_DAT_04573880,0);
                              plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50);
                              *plVar9 = lVar8;
                              thunk_FUN_01f51358(plVar9,lVar8);
                            }
                            *(long *)(lVar6 + 0x60) = lVar8;
                            thunk_FUN_01f51358((long *)(lVar6 + 0x60),lVar8);
                            lVar11 = *(long *)puVar3;
                            if (*(int *)(lVar11 + 0xe0) == 0) {
                              thunk_FUN_01ee6d7c();
                              lVar11 = *(long *)puVar3;
                            }
                            lVar8 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x58);
                            if (lVar8 == 0) {
                              if (*(int *)(lVar11 + 0xe0) == 0) {
                                thunk_FUN_01ee6d7c();
                                lVar11 = *(long *)puVar3;
                              }
                              uVar7 = **(undefined8 **)(lVar11 + 0xb8);
                              lVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
                              FUN_02e63490(lVar8,uVar7,*(undefined8 *)PTR_DAT_04573888,0);
                              plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x58);
                              *plVar9 = lVar8;
                              thunk_FUN_01f51358(plVar9,lVar8);
                            }
                            *(long *)(lVar6 + 0x68) = lVar8;
                            thunk_FUN_01f51358((long *)(lVar6 + 0x68),lVar8);
                            lVar8 = *(long *)(in_stack_00000020 + 0x48);
                            lVar11 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045718c8);
                            FUN_03cfe4a4(lVar11,0);
                            if (((lVar11 == 0) || (*(long *)(lVar11 + 0x48) == 0)) ||
                               (FUN_025d9620(*(long *)(lVar11 + 0x48),lVar6,*puVar14), lVar8 == 0))
                            goto LAB_03d12b58;
                            FUN_025d9620(lVar8,lVar11,*puVar14);
                          }
                          lVar11 = *(long *)(in_stack_00000020 + 0x48);
                          lVar6 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04573838);
                          FUN_03cff798(lVar6,0);
                          if (lVar6 != 0) {
                            *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_04573a80;
                            thunk_FUN_01f51358();
                            uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
                            FUN_02e63490();
                            *(undefined8 *)(lVar6 + 0x48) = uVar7;
                            thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x48),uVar7);
                            uVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                                
                                                  Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateQuaternion>b__19_1__
                                                  );
                            FUN_02ab2244();
                            *(undefined8 *)(lVar6 + 0x50) = uVar7;
                            thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x50),uVar7);
                            puVar3 = PTR_DAT_045736d0;
                            lVar8 = *(long *)PTR_DAT_045736d0;
                            if (*(int *)(lVar8 + 0xe0) == 0) {
                              thunk_FUN_01ee6d7c();
                              lVar8 = *(long *)puVar3;
                            }
                            lVar12 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x60);
                            if (lVar12 == 0) {
                              if (*(int *)(lVar8 + 0xe0) == 0) {
                                thunk_FUN_01ee6d7c();
                                lVar8 = *(long *)puVar3;
                              }
                              uVar7 = **(undefined8 **)(lVar8 + 0xb8);
                              lVar12 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
                              FUN_02e63490(lVar12,uVar7,*(undefined8 *)PTR_DAT_04573890,0);
                              plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x60);
                              *plVar9 = lVar12;
                              thunk_FUN_01f51358(plVar9,lVar12);
                            }
                            *(long *)(lVar6 + 0x60) = lVar12;
                            thunk_FUN_01f51358((long *)(lVar6 + 0x60),lVar12);
                            if (lVar11 != 0) {
                              FUN_025d9620(lVar11,lVar6,*puVar14);
                              lVar6 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045718c8);
                              FUN_03cfe4a4(lVar6,0);
                              puVar2 = StringLiteral_3013;
                              if (lVar6 != 0) {
                                *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_04573a70;
                                thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x28));
                                lVar8 = *(long *)(lVar6 + 0x48);
                                lVar11 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045718d8);
                                FUN_03cf2a8c(lVar11,0);
                                if (lVar11 != 0) {
                                  *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)PTR_DAT_04573ab0;
                                  thunk_FUN_01f51358();
                                  uVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>__ctor__
                                                  );
                                  FUN_02e628e0();
                                  *(undefined8 *)(lVar11 + 0x48) = uVar7;
                                  thunk_FUN_01f51358((undefined8 *)(lVar11 + 0x48),uVar7);
                                  uVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                                            
                                                  Method_System_IO_Compression_DeflateStream_Flush__
                                                  );
                                  FUN_02aaed08();
                                  *(undefined8 *)(lVar11 + 0x50) = uVar7;
                                  thunk_FUN_01f51358((undefined8 *)(lVar11 + 0x50),uVar7);
                                  if (lVar8 != 0) {
                                    FUN_025d9620(lVar8,lVar11,*puVar14);
                                    lVar8 = *(long *)(lVar6 + 0x48);
                                    lVar11 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04573840);
                                    FUN_03cff630(lVar11,0);
                                    puVar3 = PTR_DAT_045736d0;
                                    if (lVar11 != 0) {
                                      *(undefined8 *)(lVar11 + 0x28) =
                                           *(undefined8 *)PTR_DAT_04573a20;
                                      thunk_FUN_01f51358();
                                      lVar12 = *(long *)puVar3;
                                      if (*(int *)(lVar12 + 0xe0) == 0) {
                                        thunk_FUN_01ee6d7c();
                                        lVar12 = *(long *)puVar3;
                                      }
                                      lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x68);
                                      if (lVar13 == 0) {
                                        if (*(int *)(lVar12 + 0xe0) == 0) {
                                          thunk_FUN_01ee6d7c();
                                          lVar12 = *(long *)puVar3;
                                        }
                                        uVar7 = **(undefined8 **)(lVar12 + 0xb8);
                                        lVar13 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
                                        FUN_02e62fc0(lVar13,uVar7,*(undefined8 *)PTR_DAT_04573898,0)
                                        ;
                                        plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x68);
                                        *plVar9 = lVar13;
                                        thunk_FUN_01f51358(plVar9,lVar13);
                                        puVar14 = (undefined8 *)PTR_DAT_04571910;
                                      }
                                      *(long *)(lVar11 + 0x48) = lVar13;
                                      thunk_FUN_01f51358((long *)(lVar11 + 0x48),lVar13);
                                      lVar12 = *(long *)puVar3;
                                      if (*(int *)(lVar12 + 0xe0) == 0) {
                                        thunk_FUN_01ee6d7c();
                                        lVar12 = *(long *)puVar3;
                                      }
                                      lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x70);
                                      if (lVar13 == 0) {
                                        if (*(int *)(lVar12 + 0xe0) == 0) {
                                          thunk_FUN_01ee6d7c();
                                          lVar12 = *(long *)puVar3;
                                        }
                                        uVar7 = **(undefined8 **)(lVar12 + 0xb8);
                                        lVar13 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
                                        FUN_02aaff14(lVar13,uVar7,*(undefined8 *)PTR_DAT_045738a0,0)
                                        ;
                                        plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x70);
                                        *plVar9 = lVar13;
                                        thunk_FUN_01f51358(plVar9,lVar13);
                                        puVar14 = (undefined8 *)PTR_DAT_04571910;
                                      }
                                      *(long *)(lVar11 + 0x50) = lVar13;
                                      thunk_FUN_01f51358((long *)(lVar11 + 0x50),lVar13);
                                      lVar12 = *(long *)puVar3;
                                      if (*(int *)(lVar12 + 0xe0) == 0) {
                                        thunk_FUN_01ee6d7c();
                                        lVar12 = *(long *)puVar3;
                                      }
                                      lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x78);
                                      if (lVar13 == 0) {
                                        if (*(int *)(lVar12 + 0xe0) == 0) {
                                          thunk_FUN_01ee6d7c();
                                          lVar12 = *(long *)puVar3;
                                        }
                                        uVar7 = **(undefined8 **)(lVar12 + 0xb8);
                                        lVar13 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
                                        FUN_02e62fc0(lVar13,uVar7,*(undefined8 *)PTR_DAT_045738a8,0)
                                        ;
                                        plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x78);
                                        *plVar9 = lVar13;
                                        thunk_FUN_01f51358(plVar9,lVar13);
                                        puVar14 = (undefined8 *)PTR_DAT_04571910;
                                      }
                                      *(long *)(lVar11 + 0x60) = lVar13;
                                      thunk_FUN_01f51358((long *)(lVar11 + 0x60),lVar13);
                                      puVar2 = PTR_DAT_04571900;
                                      if (lVar8 != 0) {
                                        FUN_025d9620(lVar8,lVar11,*puVar14);
                                        if (*(char *)(in_stack_00000010 + 0x44) != '\0') {
                                          if (*(int *)(*(long *)
                                                  Method_Utility_MonoBehaviourSingleton<TurretsProjectilesFactory>_Awake__
                                                  + 0xe0) == 0) {
                                            thunk_FUN_01ee6d7c();
                                          }
                                          uVar10 = FUN_0403b648(0);
                                          if ((uVar10 & 1) == 0) {
                                            if (in_stack_00000018 == 0) goto LAB_03d12b58;
                                          }
                                          else {
                                            if (in_stack_00000018 == 0) goto LAB_03d12b58;
                                            lVar11 = *(long *)(in_stack_00000018 + 0x10);
                                            lVar8 = *(long *)puVar2;
                                            *(int *)(in_stack_00000018 + 0x1c) =
                                                 *(int *)(in_stack_00000018 + 0x1c) + 1;
                                            if (lVar11 == 0) goto LAB_03d12b58;
                                            uVar1 = *(uint *)(in_stack_00000018 + 0x18);
                                            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                              *(uint *)(in_stack_00000018 + 0x18) = uVar1 + 1;
                                              *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20)
                                                   = in_stack_00000008;
                                              thunk_FUN_01f51358();
                                            }
                                            else {
                                              FUN_030f2bb4(in_stack_00000018,in_stack_00000008,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar8 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                          }
                                          lVar11 = *(long *)(in_stack_00000018 + 0x10);
                                          lVar8 = *(long *)puVar2;
                                          *(int *)(in_stack_00000018 + 0x1c) =
                                               *(int *)(in_stack_00000018 + 0x1c) + 1;
                                          if (lVar11 == 0) goto LAB_03d12b58;
                                          uVar1 = *(uint *)(in_stack_00000018 + 0x18);
                                          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                            *(uint *)(in_stack_00000018 + 0x18) = uVar1 + 1;
                                            *(long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                 in_stack_00000020;
                                            thunk_FUN_01f51358();
                                          }
                                          else {
                                            FUN_030f2bb4(in_stack_00000018,in_stack_00000020,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0)
                                                          + 0x70));
                                          }
                                        }
                                        if (*(char *)(in_stack_00000010 + 0x45) != '\0') {
                                          if (in_stack_00000018 == 0) goto LAB_03d12b58;
                                          lVar11 = *(long *)(in_stack_00000018 + 0x10);
                                          lVar8 = *(long *)puVar2;
                                          *(int *)(in_stack_00000018 + 0x1c) =
                                               *(int *)(in_stack_00000018 + 0x1c) + 1;
                                          if (lVar11 == 0) goto LAB_03d12b58;
                                          uVar1 = *(uint *)(in_stack_00000018 + 0x18);
                                          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                            *(uint *)(in_stack_00000018 + 0x18) = uVar1 + 1;
                                            plVar9 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                                            *plVar9 = lVar6;
                                            thunk_FUN_01f51358(plVar9,lVar6);
                                          }
                                          else {
                                            FUN_030f2bb4(in_stack_00000018,lVar6,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0)
                                                          + 0x70));
                                          }
                                        }
                                        uVar7 = *(undefined8 *)(in_stack_00000010 + 0x30);
                                        if (*(int *)(*(long *)
                                                  Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__
                                                  + 0xe0) == 0) {
                                          thunk_FUN_01ee6d7c();
                                        }
                                        uVar10 = FUN_04073094(uVar7,0,0);
                                        if (((uVar10 & 1) == 0) ||
                                           (*(int *)(in_stack_00000010 + 0xc) == 0)) {
                                          if (in_stack_00000018 == 0) goto LAB_03d12b58;
                                        }
                                        else {
                                          lVar6 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045718c8
                                                                    );
                                          FUN_03cfe4a4(lVar6,0);
                                          if (lVar6 == 0) goto LAB_03d12b58;
                                          *(undefined8 *)(lVar6 + 0x28) =
                                               *(undefined8 *)PTR_DAT_04573a38;
                                          thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x28));
                                          lVar8 = *(long *)(lVar6 + 0x48);
                                          lVar11 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                       PTR_DAT_04573840);
                                          FUN_03cff630(lVar11,0);
                                          if (lVar11 == 0) goto LAB_03d12b58;
                                          *(undefined8 *)(lVar11 + 0x28) =
                                               *(undefined8 *)PTR_DAT_04573a58;
                                          thunk_FUN_01f51358();
                                          lVar12 = *(long *)puVar3;
                                          if (*(int *)(lVar12 + 0xe0) == 0) {
                                            thunk_FUN_01ee6d7c();
                                            lVar12 = *(long *)puVar3;
                                          }
                                          lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x80);
                                          if (lVar13 == 0) {
                                            if (*(int *)(lVar12 + 0xe0) == 0) {
                                              thunk_FUN_01ee6d7c();
                                              lVar12 = *(long *)puVar3;
                                            }
                                            uVar7 = **(undefined8 **)(lVar12 + 0xb8);
                                            lVar13 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                         StringLiteral_3013);
                                            FUN_02e62fc0(lVar13,uVar7,
                                                         *(undefined8 *)PTR_DAT_045738b0,0);
                                            plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                             0x80);
                                            *plVar9 = lVar13;
                                            thunk_FUN_01f51358(plVar9,lVar13);
                                          }
                                          *(long *)(lVar11 + 0x48) = lVar13;
                                          thunk_FUN_01f51358((long *)(lVar11 + 0x48),lVar13);
                                          lVar12 = *(long *)puVar3;
                                          if (*(int *)(lVar12 + 0xe0) == 0) {
                                            thunk_FUN_01ee6d7c();
                                            lVar12 = *(long *)puVar3;
                                          }
                                          lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
                                          if (lVar13 == 0) {
                                            if (*(int *)(lVar12 + 0xe0) == 0) {
                                              thunk_FUN_01ee6d7c();
                                              lVar12 = *(long *)puVar3;
                                            }
                                            uVar7 = **(undefined8 **)(lVar12 + 0xb8);
                                            lVar13 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                                                                  
                                                  Method_UnityEngine_UI_LayoutRebuilder_<>c_<Rebuild>b__12_2__
                                                  );
                                            FUN_02aaff14(lVar13,uVar7,
                                                         *(undefined8 *)PTR_DAT_045738b8,0);
                                            plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                             0x88);
                                            *plVar9 = lVar13;
                                            thunk_FUN_01f51358(plVar9,lVar13);
                                          }
                                          *(long *)(lVar11 + 0x50) = lVar13;
                                          thunk_FUN_01f51358((long *)(lVar11 + 0x50),lVar13);
                                          lVar12 = *(long *)puVar3;
                                          if (*(int *)(lVar12 + 0xe0) == 0) {
                                            thunk_FUN_01ee6d7c();
                                            lVar12 = *(long *)puVar3;
                                          }
                                          lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x90);
                                          if (lVar13 == 0) {
                                            if (*(int *)(lVar12 + 0xe0) == 0) {
                                              thunk_FUN_01ee6d7c();
                                              lVar12 = *(long *)puVar3;
                                            }
                                            uVar7 = **(undefined8 **)(lVar12 + 0xb8);
                                            lVar13 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                         StringLiteral_3013);
                                            FUN_02e62fc0(lVar13,uVar7,
                                                         *(undefined8 *)PTR_DAT_045738c0,0);
                                            plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                             0x90);
                                            *plVar9 = lVar13;
                                            thunk_FUN_01f51358(plVar9,lVar13);
                                          }
                                          *(long *)(lVar11 + 0x60) = lVar13;
                                          thunk_FUN_01f51358((long *)(lVar11 + 0x60),lVar13);
                                          if (lVar8 == 0) goto LAB_03d12b58;
                                          FUN_025d9620(lVar8,lVar11,*puVar14);
                                          lVar8 = *(long *)(lVar6 + 0x48);
                                          lVar11 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                       PTR_DAT_04573838);
                                          FUN_03cff798(lVar11,0);
                                          if (lVar11 == 0) goto LAB_03d12b58;
                                          *(undefined8 *)(lVar11 + 0x28) =
                                               *(undefined8 *)PTR_DAT_04573a68;
                                          thunk_FUN_01f51358();
                                          lVar12 = *(long *)puVar3;
                                          if (*(int *)(lVar12 + 0xe0) == 0) {
                                            thunk_FUN_01ee6d7c();
                                            lVar12 = *(long *)puVar3;
                                          }
                                          lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x98);
                                          if (lVar13 == 0) {
                                            if (*(int *)(lVar12 + 0xe0) == 0) {
                                              thunk_FUN_01ee6d7c();
                                              lVar12 = *(long *)puVar3;
                                            }
                                            uVar7 = **(undefined8 **)(lVar12 + 0xb8);
                                            lVar13 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                                                                  
                                                  Method_UnityEngine_InputSystem_Layouts_InputControlLayout_Cache_FindOrLoadLayout__
                                                  );
                                            FUN_02e63490(lVar13,uVar7,
                                                         *(undefined8 *)PTR_DAT_045738c8,0);
                                            plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                             0x98);
                                            *plVar9 = lVar13;
                                            thunk_FUN_01f51358(plVar9,lVar13);
                                          }
                                          *(long *)(lVar11 + 0x48) = lVar13;
                                          thunk_FUN_01f51358((long *)(lVar11 + 0x48),lVar13);
                                          lVar12 = *(long *)puVar3;
                                          if (*(int *)(lVar12 + 0xe0) == 0) {
                                            thunk_FUN_01ee6d7c();
                                            lVar12 = *(long *)puVar3;
                                          }
                                          lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 0xa0);
                                          if (lVar13 == 0) {
                                            if (*(int *)(lVar12 + 0xe0) == 0) {
                                              thunk_FUN_01ee6d7c();
                                              lVar12 = *(long *)puVar3;
                                            }
                                            uVar7 = **(undefined8 **)(lVar12 + 0xb8);
                                            lVar13 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                                                                  
                                                  Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateQuaternion>b__19_1__
                                                  );
                                            FUN_02ab2244(lVar13,uVar7,
                                                         *(undefined8 *)PTR_DAT_045738d0,0);
                                            plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                             0xa0);
                                            *plVar9 = lVar13;
                                            thunk_FUN_01f51358(plVar9,lVar13);
                                          }
                                          *(long *)(lVar11 + 0x50) = lVar13;
                                          thunk_FUN_01f51358((long *)(lVar11 + 0x50),lVar13);
                                          lVar12 = *(long *)puVar3;
                                          if (*(int *)(lVar12 + 0xe0) == 0) {
                                            thunk_FUN_01ee6d7c();
                                            lVar12 = *(long *)puVar3;
                                          }
                                          lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 0xa8);
                                          if (lVar13 == 0) {
                                            if (*(int *)(lVar12 + 0xe0) == 0) {
                                              thunk_FUN_01ee6d7c();
                                              lVar12 = *(long *)puVar3;
                                            }
                                            uVar7 = **(undefined8 **)(lVar12 + 0xb8);
                                            lVar13 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                                                                  
                                                  Method_UnityEngine_InputSystem_Layouts_InputControlLayout_Cache_FindOrLoadLayout__
                                                  );
                                            FUN_02e63490(lVar13,uVar7,
                                                         *(undefined8 *)PTR_DAT_045738d8,0);
                                            plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                             0xa8);
                                            *plVar9 = lVar13;
                                            thunk_FUN_01f51358(plVar9,lVar13);
                                          }
                                          *(long *)(lVar11 + 0x60) = lVar13;
                                          thunk_FUN_01f51358((long *)(lVar11 + 0x60),lVar13);
                                          lVar12 = *(long *)puVar3;
                                          if (*(int *)(lVar12 + 0xe0) == 0) {
                                            thunk_FUN_01ee6d7c();
                                            lVar12 = *(long *)puVar3;
                                          }
                                          lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 0xb0);
                                          if (lVar13 == 0) {
                                            if (*(int *)(lVar12 + 0xe0) == 0) {
                                              thunk_FUN_01ee6d7c();
                                              lVar12 = *(long *)puVar3;
                                            }
                                            uVar7 = **(undefined8 **)(lVar12 + 0xb8);
                                            lVar13 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                                                                  
                                                  Method_UnityEngine_InputSystem_Layouts_InputControlLayout_Cache_FindOrLoadLayout__
                                                  );
                                            FUN_02e63490(lVar13,uVar7,
                                                         *(undefined8 *)PTR_DAT_045738e0,0);
                                            plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                             0xb0);
                                            *plVar9 = lVar13;
                                            thunk_FUN_01f51358(plVar9,lVar13);
                                          }
                                          *(long *)(lVar11 + 0x68) = lVar13;
                                          thunk_FUN_01f51358((long *)(lVar11 + 0x68),lVar13);
                                          if (lVar8 == 0) goto LAB_03d12b58;
                                          FUN_025d9620(lVar8,lVar11,*puVar14);
                                          lVar11 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                       PTR_DAT_04572248);
                                          FUN_03ceb9c4(lVar11,0);
                                          if (lVar11 == 0) goto LAB_03d12b58;
                                          *(undefined8 *)(lVar11 + 0x28) =
                                               *(undefined8 *)PTR_DAT_04573aa0;
                                          thunk_FUN_01f51358();
                                          *(undefined8 *)(lVar11 + 0x60) =
                                               *(undefined8 *)(in_stack_00000028 + 0x1d0);
                                          thunk_FUN_01f51358();
                                          FUN_02c60734(lVar11,*(undefined8 *)
                                                               (in_stack_00000028 + 0x1d8),
                                                       *(undefined8 *)PTR_DAT_04572240);
                                          puVar3 = StringLiteral_3013;
                                          uVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                      StringLiteral_3013);
                                          FUN_02e62fc0();
                                          *(undefined8 *)(lVar11 + 0x80) = uVar7;
                                          thunk_FUN_01f51358((undefined8 *)(lVar11 + 0x80),uVar7);
                                          puVar4 = 
                                          Method_UnityEngine_UI_LayoutRebuilder_<>c_<Rebuild>b__12_2__
                                          ;
                                          uVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_UI_LayoutRebuilder_<>c_<Rebuild>b__12_2__
                                                  );
                                          FUN_02aaff14();
                                          *(undefined8 *)(lVar11 + 0x88) = uVar7;
                                          thunk_FUN_01f51358((undefined8 *)(lVar11 + 0x88),uVar7);
                                          uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
                                          FUN_02e62fc0();
                                          *(undefined8 *)(lVar11 + 0x48) = uVar7;
                                          thunk_FUN_01f51358((undefined8 *)(lVar11 + 0x48),uVar7);
                                          uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
                                          FUN_02aaff14();
                                          *(undefined8 *)(lVar11 + 0x50) = uVar7;
                                          thunk_FUN_01f51358((undefined8 *)(lVar11 + 0x50),uVar7);
                                          *(long *)(in_stack_00000028 + 0x1f0) = lVar11;
                                          thunk_FUN_01f51358((undefined8 *)
                                                             (in_stack_00000028 + 0x1f0),lVar11);
                                          if (*(long *)(lVar6 + 0x48) == 0) goto LAB_03d12b58;
                                          FUN_025d9620(*(long *)(lVar6 + 0x48),
                                                       *(undefined8 *)(in_stack_00000028 + 0x1f0),
                                                       *puVar14);
                                          lVar8 = *(long *)(lVar6 + 0x48);
                                          lVar11 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                       PTR_DAT_04573838);
                                          FUN_03cff798(lVar11,0);
                                          puVar4 = PTR_DAT_045736d0;
                                          if (lVar11 == 0) goto LAB_03d12b58;
                                          *(undefined8 *)(lVar11 + 0x28) =
                                               *(undefined8 *)PTR_DAT_04573a48;
                                          thunk_FUN_01f51358();
                                          lVar12 = *(long *)puVar4;
                                          if (*(int *)(lVar12 + 0xe0) == 0) {
                                            thunk_FUN_01ee6d7c();
                                            lVar12 = *(long *)puVar4;
                                          }
                                          lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 0xb8);
                                          if (lVar13 == 0) {
                                            if (*(int *)(lVar12 + 0xe0) == 0) {
                                              thunk_FUN_01ee6d7c();
                                              lVar12 = *(long *)puVar4;
                                            }
                                            uVar7 = **(undefined8 **)(lVar12 + 0xb8);
                                            lVar13 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                                                                  
                                                  Method_UnityEngine_InputSystem_Layouts_InputControlLayout_Cache_FindOrLoadLayout__
                                                  );
                                            FUN_02e63490(lVar13,uVar7,
                                                         *(undefined8 *)PTR_DAT_045738e8,0);
                                            plVar9 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0xb8);
                                            *plVar9 = lVar13;
                                            thunk_FUN_01f51358(plVar9,lVar13);
                                          }
                                          *(long *)(lVar11 + 0x48) = lVar13;
                                          thunk_FUN_01f51358((long *)(lVar11 + 0x48),lVar13);
                                          lVar12 = *(long *)puVar4;
                                          if (*(int *)(lVar12 + 0xe0) == 0) {
                                            thunk_FUN_01ee6d7c();
                                            lVar12 = *(long *)puVar4;
                                          }
                                          lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 0xc0);
                                          if (lVar13 == 0) {
                                            if (*(int *)(lVar12 + 0xe0) == 0) {
                                              thunk_FUN_01ee6d7c();
                                              lVar12 = *(long *)puVar4;
                                            }
                                            uVar7 = **(undefined8 **)(lVar12 + 0xb8);
                                            lVar13 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                                                                  
                                                  Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateQuaternion>b__19_1__
                                                  );
                                            FUN_02ab2244(lVar13,uVar7,
                                                         *(undefined8 *)PTR_DAT_045738f0,0);
                                            plVar9 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0xc0);
                                            *plVar9 = lVar13;
                                            thunk_FUN_01f51358(plVar9,lVar13);
                                          }
                                          *(long *)(lVar11 + 0x50) = lVar13;
                                          thunk_FUN_01f51358((long *)(lVar11 + 0x50),lVar13);
                                          lVar12 = *(long *)puVar4;
                                          if (*(int *)(lVar12 + 0xe0) == 0) {
                                            thunk_FUN_01ee6d7c();
                                            lVar12 = *(long *)puVar4;
                                          }
                                          lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 200);
                                          if (lVar13 == 0) {
                                            if (*(int *)(lVar12 + 0xe0) == 0) {
                                              thunk_FUN_01ee6d7c();
                                              lVar12 = *(long *)puVar4;
                                            }
                                            uVar7 = **(undefined8 **)(lVar12 + 0xb8);
                                            lVar13 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                                                                  
                                                  Method_UnityEngine_InputSystem_Layouts_InputControlLayout_Cache_FindOrLoadLayout__
                                                  );
                                            FUN_02e63490(lVar13,uVar7,
                                                         *(undefined8 *)PTR_DAT_045738f8,0);
                                            plVar9 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) +
                                                             200);
                                            *plVar9 = lVar13;
                                            thunk_FUN_01f51358(plVar9,lVar13);
                                          }
                                          *(long *)(lVar11 + 0x60) = lVar13;
                                          thunk_FUN_01f51358((long *)(lVar11 + 0x60),lVar13);
                                          lVar12 = *(long *)puVar4;
                                          if (*(int *)(lVar12 + 0xe0) == 0) {
                                            thunk_FUN_01ee6d7c();
                                            lVar12 = *(long *)puVar4;
                                          }
                                          lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 0xd0);
                                          if (lVar13 == 0) {
                                            if (*(int *)(lVar12 + 0xe0) == 0) {
                                              thunk_FUN_01ee6d7c();
                                              lVar12 = *(long *)puVar4;
                                            }
                                            uVar7 = **(undefined8 **)(lVar12 + 0xb8);
                                            lVar13 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                                                                                  
                                                  Method_UnityEngine_InputSystem_Layouts_InputControlLayout_Cache_FindOrLoadLayout__
                                                  );
                                            FUN_02e63490(lVar13,uVar7,
                                                         *(undefined8 *)PTR_DAT_04573900,0);
                                            plVar9 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0xd0);
                                            *plVar9 = lVar13;
                                            thunk_FUN_01f51358(plVar9,lVar13);
                                          }
                                          *(long *)(lVar11 + 0x68) = lVar13;
                                          thunk_FUN_01f51358((long *)(lVar11 + 0x68),lVar13);
                                          if ((lVar8 == 0) ||
                                             (FUN_025d9620(lVar8,lVar11,*puVar14),
                                             in_stack_00000018 == 0)) goto LAB_03d12b58;
                                          lVar11 = *(long *)(in_stack_00000018 + 0x10);
                                          lVar8 = *(long *)puVar2;
                                          *(int *)(in_stack_00000018 + 0x1c) =
                                               *(int *)(in_stack_00000018 + 0x1c) + 1;
                                          if (lVar11 == 0) goto LAB_03d12b58;
                                          uVar1 = *(uint *)(in_stack_00000018 + 0x18);
                                          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                            *(uint *)(in_stack_00000018 + 0x18) = uVar1 + 1;
                                            plVar9 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                                            *plVar9 = lVar6;
                                            thunk_FUN_01f51358(plVar9,lVar6);
                                          }
                                          else {
                                            FUN_030f2bb4(in_stack_00000018,lVar6,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0)
                                                          + 0x70));
                                          }
                                        }
                                        puVar4 = PTR_DAT_045730e0;
                                        puVar2 = PTR_DAT_045718e8;
                                        if (0 < *(int *)(in_stack_00000018 + 0x18)) {
                                          uVar7 = FUN_030f4630(in_stack_00000018,
                                                               *(undefined8 *)PTR_DAT_04571908);
                                          *(undefined8 *)(in_stack_00000028 + 0x1a0) = uVar7;
                                          thunk_FUN_01f51358((undefined8 *)
                                                             (in_stack_00000028 + 0x1a0),uVar7);
                                          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                                            thunk_FUN_01ee6d7c();
                                          }
                                          lVar6 = FUN_03ceba30(0);
                                          lVar11 = *(long *)puVar4;
                                          if (*(int *)(lVar11 + 0xe0) == 0) {
                                            thunk_FUN_01ee6d7c(lVar11);
                                          }
                                          if (((lVar6 == 0) ||
                                              (lVar6 = FUN_03cebaa8(lVar6,*(undefined8 *)
                                                                           (*(long *)(*(long *)
                                                  puVar4 + 0xb8) + 0x10),1,0,0,0), lVar6 == 0)) ||
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


