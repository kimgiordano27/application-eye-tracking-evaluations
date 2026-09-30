/*
FUNCTION_NAME: System.Xml.XmlEncodedRawTextWriter$$Flush
ENTRY_POINT: 01d488d8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_19;strong_file_logging_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_4
*/


void System_Xml_XmlEncodedRawTextWriter__Flush(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x20;
  int iVar12;
  long unaff_x21;
  int unaff_w22;
  long unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  
  *(undefined1 *)(unaff_x23 + 0x516) = in_w8;
  puVar6 = Method_OVRPlugin_<>c_<_cctor>b__796_58__;
  puVar5 = Method_OVRTask_FromResult<OVRSpatialAnchor_UnboundAnchor[]>__;
  puVar4 = Method_System_Collections_Generic_List<CatchAssistData>__ctor__;
  puVar3 = 
  Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_List<InvocationContext>>_MoveNext__
  ;
  puVar2 = UnityEngine_UIElements_IDragAndDropData_TypeInfo;
  puVar1 = PTR_DAT_033f56b0;
  uStack0000000000000048 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000040 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000020 = 0;
  if (unaff_w22 < 4) {
    if (unaff_w22 == 1) {
LAB_01d48934:
      if (*(long *)(unaff_x20 + 400) == 0) {
        return;
      }
      FUN_01323390(*(long *)(unaff_x20 + 400),&stack0x00000008,
                   *(undefined8 *)Method_System_Collections_Generic_List<NavMeshModifier>_Contains__
                  );
      uStack0000000000000048 = in_stack_00000010;
      uStack0000000000000040 = in_stack_00000008;
      uStack0000000000000050 = in_stack_00000018;
      do {
        uVar8 = FUN_012b894c(&stack0x00000040,*(undefined8 *)puVar2);
        if ((uVar8 & 1) == 0) goto LAB_01d48bc8;
        lVar9 = FUN_00c44ea0(&stack0x00000040,*(undefined8 *)puVar5);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      } while (((*(long *)(lVar9 + 0x58) == 0) ||
               (uVar8 = FUN_01d79618(*(long *)(lVar9 + 0x58),0), (uVar8 & 1) == 0)) ||
              (*(long *)(lVar9 + 0x78) != unaff_x20));
      plVar10 = *(long **)(unaff_x20 + 0x38);
      if (plVar10 != (long *)0x0) {
        iVar12 = 0;
        do {
          iVar7 = (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
          plVar10 = *(long **)(unaff_x20 + 0x38);
          if (iVar7 <= iVar12) {
            if (plVar10 != (long *)0x0) {
              iVar12 = 0;
              do {
                iVar7 = (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
                plVar10 = *(long **)(unaff_x20 + 0x38);
                if (iVar7 <= iVar12) {
                  if (plVar10 != (long *)0x0) {
                    iVar12 = 0;
                    do {
                      iVar7 = (**(code **)(*plVar10 + 0x1c8))
                                        (plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
                      if (iVar7 <= iVar12) {
LAB_01d48bc8:
                        FUN_012b8948(&stack0x00000040,*(undefined8 *)puVar6);
                        if (unaff_x19 == 0) {
                          return;
                        }
                        FUN_01323390();
                        uStack0000000000000028 = in_stack_00000010;
                        uStack0000000000000020 = in_stack_00000008;
                        uStack0000000000000030 = in_stack_00000018;
                        while( true ) {
                          uVar8 = FUN_012b894c(&stack0x00000020,*(undefined8 *)puVar4);
                          if ((uVar8 & 1) == 0) {
                            FUN_012b8948(&stack0x00000020,*(undefined8 *)puVar1);
                            return;
                          }
                          lVar9 = FUN_00c44fa8(&stack0x00000020,*(undefined8 *)puVar3);
                          if (lVar9 == 0) break;
                          if ((*(int *)(lVar9 + 0x20) != -1) &&
                             (*(int *)(lVar9 + 0x20) != *(int *)(lVar9 + 0x24))) {
                            lVar11 = *(long *)(lVar9 + 0x10);
                            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            FUN_01d4a9a8(lVar11,*(undefined8 *)(lVar11 + 400),lVar9,0x100,0);
                          }
                          if (*(int *)(lVar9 + 0x24) != -1) {
                            lVar11 = *(long *)(lVar9 + 0x10);
                            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            FUN_01d4a9a8(lVar11,*(undefined8 *)(lVar11 + 400),lVar9,0x200,0);
                          }
                          if (*(int *)(lVar9 + 0x28) != -1) {
                            lVar11 = *(long *)(lVar9 + 0x10);
                            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            FUN_01d4a9a8(lVar11,*(undefined8 *)(lVar11 + 400),lVar9,0x400,0);
                          }
                        }
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      lVar9 = FUN_01d583f0(*(long *)(unaff_x20 + 0x38),iVar12,0);
                      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      if (*(int *)(lVar9 + 0x24) != -1) {
                        FUN_01d4a9a8();
                      }
                      plVar10 = *(long **)(unaff_x20 + 0x38);
                      iVar12 = iVar12 + 1;
                    } while (plVar10 != (long *)0x0);
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                lVar9 = FUN_01d583f0(plVar10,iVar12,0);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                if (*(int *)(lVar9 + 0x28) != -1) {
                  FUN_01d4a9a8();
                }
                plVar10 = *(long **)(unaff_x20 + 0x38);
                iVar12 = iVar12 + 1;
              } while (plVar10 != (long *)0x0);
            }
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar9 = FUN_01d583f0(plVar10,iVar12,0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if ((*(int *)(lVar9 + 0x20) != -1) && (*(int *)(lVar9 + 0x20) != *(int *)(lVar9 + 0x24)))
          {
            FUN_01d4a9a8();
          }
          plVar10 = *(long **)(unaff_x20 + 0x38);
          iVar12 = iVar12 + 1;
        } while (plVar10 != (long *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (unaff_w22 != 2) {
      return;
    }
  }
  else if (unaff_w22 != 0x10) {
    if (unaff_w22 != 4) {
      return;
    }
    if (unaff_x21 == 0) goto LAB_01d48ce0;
    if ((*(int *)(unaff_x21 + 0x20) == -1) && (*(int *)(unaff_x21 + 0x24) == -1)) goto LAB_01d48934;
    goto LAB_01d48a5c;
  }
  if (unaff_x21 == 0) {
LAB_01d48ce0:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
LAB_01d48a5c:
  if ((*(int *)(unaff_x21 + 0x20) != -1) &&
     (*(int *)(unaff_x21 + 0x20) != *(int *)(unaff_x21 + 0x24))) {
    FUN_01d4a9a8();
  }
  if (*(int *)(unaff_x21 + 0x24) != -1) {
    FUN_01d4a9a8();
  }
  if (*(int *)(unaff_x21 + 0x28) != -1) {
    FUN_01d4a9a8();
  }
  return;
}


