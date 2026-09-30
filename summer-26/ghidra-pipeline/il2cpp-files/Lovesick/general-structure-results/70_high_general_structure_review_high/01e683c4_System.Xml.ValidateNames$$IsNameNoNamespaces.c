/*
FUNCTION_NAME: System.Xml.ValidateNames$$IsNameNoNamespaces
ENTRY_POINT: 01e683c4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void System_Xml_ValidateNames__IsNameNoNamespaces(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  
  if (param_1 != 0) {
    FUN_01f75d58(param_1,*(undefined8 *)PTR_DAT_033ec6e8,*unaff_x22,0);
    *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x70) = param_1;
                    /* try { // try from 01e683f4 to 01f683f7 has its CatchHandler @ 01e68404 */
    lVar2 = thunk_FUN_00d62348(*unaff_x20);
                    /* try { // try from 01e683f8 to 01f683fb has its CatchHandler @ 01e68400 */
    if (lVar2 != 0) {
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01e68364 with catch @ 01e683fc
                       try { // try from 01e683fc to 01f6841b has its CatchHandler @ 01e68260 */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01e68374 with catch @ 01e68400
                       catch(type#1 @ 03274860) { ... } // from try @ 01e683f8 with catch @ 01e68400
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01e68334 with catch @ 01e68404
                       catch(type#1 @ 03274860) { ... } // from try @ 01e683f4 with catch @ 01e68404
                        */
      FUN_01f75d58(lVar2,*(undefined8 *)Meta_WitAi_Requests_IVRequestDownloadDecoder_TypeInfo,
                   *unaff_x22,0);
                    /* try { // try from 01e6841c to 01f6841f has its CatchHandler @ 01e6842c */
      *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x78) = lVar2;
      lVar2 = thunk_FUN_00d62348(*unaff_x20);
                    /* catch() { ... } // from try @ 01e6841c with catch @ 01e6842c */
      if (lVar2 != 0) {
                    /* try { // try from 01e6843c to 01f6845f has its CatchHandler @ 01e68474 */
        FUN_01f75d58(lVar2,*(undefined8 *)PTR_DAT_033f2f40,*unaff_x22,0);
        *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x80) = lVar2;
        lVar2 = thunk_FUN_00d62348(*unaff_x20);
        if (lVar2 != 0) {
          FUN_01f75d58(lVar2,*(undefined8 *)
                              Method_System_Data_DataView_System_Collections_IList_Insert__,
                       *unaff_x22,0);
          *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x88) = lVar2;
          lVar2 = thunk_FUN_00d62348(*unaff_x20);
          if (lVar2 != 0) {
            FUN_01f75d58(lVar2,*(undefined8 *)
                                Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_116>_SliceWithStride<Vector3>__
                         ,*unaff_x22,0);
            *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x90) = lVar2;
            lVar2 = thunk_FUN_00d62348(*unaff_x20);
            puVar1 = Method_FullSerializer_fsMetaType_EmitAotData__;
            if (lVar2 != 0) {
              FUN_01f75d58(lVar2,*(undefined8 *)Method_System_IO_BinaryWriter__ctor__,*unaff_x22,0);
              *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x98) = lVar2;
              plVar3 = (long *)FUN_00da4fb8(*(undefined8 *)puVar1,0x13);
              if (plVar3 != (long *)0x0) {
                lVar2 = **(long **)(*unaff_x21 + 0xb8);
                if ((lVar2 != 0) &&
                   (lVar4 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
                {
LAB_01e6890c:
                  uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                  FUN_00da5038(uVar5,0);
                }
                uVar6 = *(uint *)(plVar3 + 3);
                if (uVar6 != 0) {
                  plVar3[4] = lVar2;
                  lVar2 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 8);
                  if (lVar2 != 0) {
                    lVar4 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*plVar3 + 0x40));
                    if (lVar4 == 0) goto LAB_01e6890c;
                    uVar6 = *(uint *)(plVar3 + 3);
                  }
                  if (1 < uVar6) {
                    plVar3[5] = lVar2;
                    lVar2 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x10);
                    if (lVar2 != 0) {
                      lVar4 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*plVar3 + 0x40));
                      if (lVar4 == 0) goto LAB_01e6890c;
                      uVar6 = *(uint *)(plVar3 + 3);
                    }
                    if (2 < uVar6) {
                      plVar3[6] = lVar2;
                      lVar2 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x18);
                      if (lVar2 != 0) {
                        lVar4 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*plVar3 + 0x40));
                        if (lVar4 == 0) goto LAB_01e6890c;
                        uVar6 = *(uint *)(plVar3 + 3);
                      }
                      if (3 < uVar6) {
                        plVar3[7] = lVar2;
                        lVar2 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x20);
                        if (lVar2 != 0) {
                          lVar4 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*plVar3 + 0x40));
                          if (lVar4 == 0) goto LAB_01e6890c;
                          uVar6 = *(uint *)(plVar3 + 3);
                        }
                        if (4 < uVar6) {
                          plVar3[8] = lVar2;
                          lVar2 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x28);
                          if (lVar2 != 0) {
                            lVar4 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*plVar3 + 0x40));
                            if (lVar4 == 0) goto LAB_01e6890c;
                            uVar6 = *(uint *)(plVar3 + 3);
                          }
                          if (5 < uVar6) {
                            plVar3[9] = lVar2;
                            lVar2 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x30);
                            if (lVar2 != 0) {
                              lVar4 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*plVar3 + 0x40));
                              if (lVar4 == 0) goto LAB_01e6890c;
                              uVar6 = *(uint *)(plVar3 + 3);
                            }
                            if (6 < uVar6) {
                              plVar3[10] = lVar2;
                              lVar2 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x38);
                              if (lVar2 != 0) {
                                lVar4 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*plVar3 + 0x40));
                                if (lVar4 == 0) goto LAB_01e6890c;
                                uVar6 = *(uint *)(plVar3 + 3);
                              }
                              if (7 < uVar6) {
                                plVar3[0xb] = lVar2;
                                lVar2 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x40);
                                if (lVar2 != 0) {
                                  lVar4 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*plVar3 + 0x40));
                                  if (lVar4 == 0) goto LAB_01e6890c;
                                  uVar6 = *(uint *)(plVar3 + 3);
                                }
                                if (8 < uVar6) {
                                  plVar3[0xc] = lVar2;
                                  lVar2 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x48);
                                  if (lVar2 != 0) {
                                    lVar4 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*plVar3 + 0x40)
                                                              );
                                    if (lVar4 == 0) goto LAB_01e6890c;
                                    uVar6 = *(uint *)(plVar3 + 3);
                                  }
                                  if (9 < uVar6) {
                                    plVar3[0xd] = lVar2;
                                    lVar2 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x50);
                                    if (lVar2 != 0) {
                                      lVar4 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)
                                                                        (*plVar3 + 0x40));
                                      if (lVar4 == 0) goto LAB_01e6890c;
                                      uVar6 = *(uint *)(plVar3 + 3);
                                    }
                                    if (10 < uVar6) {
                                      plVar3[0xe] = lVar2;
                                      lVar2 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x58);
                                      if (lVar2 != 0) {
                                        lVar4 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)
                                                                          (*plVar3 + 0x40));
                                        if (lVar4 == 0) goto LAB_01e6890c;
                                        uVar6 = *(uint *)(plVar3 + 3);
                                      }
                                      if (0xb < uVar6) {
                                        plVar3[0xf] = lVar2;
                                        lVar2 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x60);
                                        if (lVar2 != 0) {
                                          lVar4 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)
                                                                            (*plVar3 + 0x40));
                                          if (lVar4 == 0) goto LAB_01e6890c;
                                          uVar6 = *(uint *)(plVar3 + 3);
                                        }
                                        if (0xc < uVar6) {
                                          plVar3[0x10] = lVar2;
                                          lVar2 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x68);
                                          if (lVar2 != 0) {
                                            lVar4 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)
                                                                              (*plVar3 + 0x40));
                                            if (lVar4 == 0) goto LAB_01e6890c;
                                            uVar6 = *(uint *)(plVar3 + 3);
                                          }
                                          if (0xd < uVar6) {
                                            plVar3[0x11] = lVar2;
                                            lVar2 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x70);
                                            if (lVar2 != 0) {
                                              lVar4 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)
                                                                                (*plVar3 + 0x40));
                                              if (lVar4 == 0) goto LAB_01e6890c;
                                              uVar6 = *(uint *)(plVar3 + 3);
                                            }
                                            if (0xe < uVar6) {
                                              plVar3[0x12] = lVar2;
                                              lVar2 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x78)
                                              ;
                                              if (lVar2 != 0) {
                                                lVar4 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)
                                                                                  (*plVar3 + 0x40));
                                                if (lVar4 == 0) goto LAB_01e6890c;
                                                uVar6 = *(uint *)(plVar3 + 3);
                                              }
                                              if (0xf < uVar6) {
                                                plVar3[0x13] = lVar2;
                                                lVar2 = *(long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                 0x80);
                                                if (lVar2 != 0) {
                                                  lVar4 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)
                                                                                    (*plVar3 + 0x40)
                                                                            );
                                                  if (lVar4 == 0) goto LAB_01e6890c;
                                                  uVar6 = *(uint *)(plVar3 + 3);
                                                }
                                                if (0x10 < uVar6) {
                                                  plVar3[0x14] = lVar2;
                                                  lVar2 = *(long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                   0x88);
                                                  if (lVar2 != 0) {
                                                    lVar4 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)
                                                                                      (*plVar3 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_01e6890c;
                                                    uVar6 = *(uint *)(plVar3 + 3);
                                                  }
                                                  if (0x11 < uVar6) {
                                                    plVar3[0x15] = lVar2;
                                                    lVar2 = *(long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                     0x90);
                                                    if (lVar2 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar2,*(undefined8
                                                                                         *)(*plVar3 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_01e6890c;
                                                  uVar6 = *(uint *)(plVar3 + 3);
                                                  }
                                                  if (0x12 < uVar6) {
                                                    plVar3[0x16] = lVar2;
                                                    *(long **)(*(long *)(*unaff_x21 + 0xb8) + 0xa0)
                                                         = plVar3;
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
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
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


