/*
FUNCTION_NAME: System.Xml.XmlEncodedRawTextWriter$$FlushEncoder
ENTRY_POINT: 01d4883c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;strong_file_logging_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_4
*/


void System_Xml_XmlEncodedRawTextWriter__FlushEncoder
               (long param_1,long param_2,int param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  int iVar13;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_0377f516 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f56b0);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_58__);
    thunk_FUN_00d48444(UnityEngine_UIElements_IDragAndDropData_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<CatchAssistData>__ctor__);
    thunk_FUN_00d48444(Method_OVRTask_FromResult<OVRSpatialAnchor_UnboundAnchor[]>__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_List<InvocationContext>>_MoveNext__
                      );
    thunk_FUN_00d48444(StringLiteral_5236);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<NavMeshModifier>_Contains__);
    DAT_0377f516 = 1;
  }
  puVar7 = StringLiteral_5236;
  puVar6 = Method_OVRPlugin_<>c_<_cctor>b__796_58__;
  puVar5 = Method_OVRTask_FromResult<OVRSpatialAnchor_UnboundAnchor[]>__;
  puVar4 = Method_System_Collections_Generic_List<CatchAssistData>__ctor__;
  puVar3 = 
  Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_List<InvocationContext>>_MoveNext__
  ;
  puVar2 = UnityEngine_UIElements_IDragAndDropData_TypeInfo;
  puVar1 = PTR_DAT_033f56b0;
  uStack_78 = 0;
  local_70 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_a0 = 0;
  if (param_3 < 4) {
    if (param_3 == 1) {
LAB_01d48934:
      if (*(long *)(param_1 + 400) == 0) {
        return;
      }
      FUN_01323390(*(long *)(param_1 + 400),&local_b8,
                   *(undefined8 *)Method_System_Collections_Generic_List<NavMeshModifier>_Contains__
                  );
      uStack_78 = uStack_b0;
      local_80 = local_b8;
      local_70 = local_a8;
      do {
        uVar9 = FUN_012b894c(&local_80,*(undefined8 *)puVar2);
        if ((uVar9 & 1) == 0) goto LAB_01d48bc8;
        lVar10 = FUN_00c44ea0(&local_80,*(undefined8 *)puVar5);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      } while (((*(long *)(lVar10 + 0x58) == 0) ||
               (uVar9 = FUN_01d79618(*(long *)(lVar10 + 0x58),0), (uVar9 & 1) == 0)) ||
              (*(long *)(lVar10 + 0x78) != param_1));
      plVar11 = *(long **)(param_1 + 0x38);
      if (plVar11 != (long *)0x0) {
        iVar13 = 0;
        do {
          iVar8 = (**(code **)(*plVar11 + 0x1c8))(plVar11,*(undefined8 *)(*plVar11 + 0x1d0));
          plVar11 = *(long **)(param_1 + 0x38);
          if (iVar8 <= iVar13) {
            if (plVar11 != (long *)0x0) {
              iVar13 = 0;
              do {
                iVar8 = (**(code **)(*plVar11 + 0x1c8))(plVar11,*(undefined8 *)(*plVar11 + 0x1d0));
                plVar11 = *(long **)(param_1 + 0x38);
                if (iVar8 <= iVar13) {
                  if (plVar11 != (long *)0x0) {
                    iVar13 = 0;
                    do {
                      iVar8 = (**(code **)(*plVar11 + 0x1c8))
                                        (plVar11,*(undefined8 *)(*plVar11 + 0x1d0));
                      if (iVar8 <= iVar13) {
LAB_01d48bc8:
                        FUN_012b8948(&local_80,*(undefined8 *)puVar6);
                        if (param_4 == 0) {
                          return;
                        }
                        FUN_01323390(param_4,&local_b8,*(undefined8 *)puVar7);
                        uStack_98 = uStack_b0;
                        local_a0 = local_b8;
                        local_90 = local_a8;
                        while( true ) {
                          uVar9 = FUN_012b894c(&local_a0,*(undefined8 *)puVar4);
                          if ((uVar9 & 1) == 0) {
                            FUN_012b8948(&local_a0,*(undefined8 *)puVar1);
                            return;
                          }
                          lVar10 = FUN_00c44fa8(&local_a0,*(undefined8 *)puVar3);
                          if (lVar10 == 0) break;
                          if ((*(int *)(lVar10 + 0x20) != -1) &&
                             (*(int *)(lVar10 + 0x20) != *(int *)(lVar10 + 0x24))) {
                            lVar12 = *(long *)(lVar10 + 0x10);
                            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            FUN_01d4a9a8(lVar12,*(undefined8 *)(lVar12 + 400),lVar10,0x100,0);
                          }
                          if (*(int *)(lVar10 + 0x24) != -1) {
                            lVar12 = *(long *)(lVar10 + 0x10);
                            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            FUN_01d4a9a8(lVar12,*(undefined8 *)(lVar12 + 400),lVar10,0x200,0);
                          }
                          if (*(int *)(lVar10 + 0x28) != -1) {
                            lVar12 = *(long *)(lVar10 + 0x10);
                            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            FUN_01d4a9a8(lVar12,*(undefined8 *)(lVar12 + 400),lVar10,0x400,0);
                          }
                        }
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      lVar10 = FUN_01d583f0(*(long *)(param_1 + 0x38),iVar13,0);
                      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      if (*(int *)(lVar10 + 0x24) != -1) {
                        FUN_01d4a9a8(param_1,*(undefined8 *)(param_1 + 400),lVar10,0x200,0);
                      }
                      plVar11 = *(long **)(param_1 + 0x38);
                      iVar13 = iVar13 + 1;
                    } while (plVar11 != (long *)0x0);
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                lVar10 = FUN_01d583f0(plVar11,iVar13,0);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                if (*(int *)(lVar10 + 0x28) != -1) {
                  FUN_01d4a9a8(param_1,*(undefined8 *)(param_1 + 400),lVar10,0x400,0);
                }
                plVar11 = *(long **)(param_1 + 0x38);
                iVar13 = iVar13 + 1;
              } while (plVar11 != (long *)0x0);
            }
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar10 = FUN_01d583f0(plVar11,iVar13,0);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if ((*(int *)(lVar10 + 0x20) != -1) &&
             (*(int *)(lVar10 + 0x20) != *(int *)(lVar10 + 0x24))) {
            FUN_01d4a9a8(param_1,*(undefined8 *)(param_1 + 400),lVar10,0x100,0);
          }
          plVar11 = *(long **)(param_1 + 0x38);
          iVar13 = iVar13 + 1;
        } while (plVar11 != (long *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (param_3 != 2) {
      return;
    }
  }
  else if (param_3 != 0x10) {
    if (param_3 != 4) {
      return;
    }
    if (param_2 == 0) goto LAB_01d48ce0;
    if ((*(int *)(param_2 + 0x20) == -1) && (*(int *)(param_2 + 0x24) == -1)) goto LAB_01d48934;
    goto LAB_01d48a5c;
  }
  if (param_2 == 0) {
LAB_01d48ce0:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
LAB_01d48a5c:
  if ((*(int *)(param_2 + 0x20) != -1) && (*(int *)(param_2 + 0x20) != *(int *)(param_2 + 0x24))) {
    FUN_01d4a9a8(param_1,*(undefined8 *)(param_1 + 400),param_2,0x100,param_4);
  }
  if (*(int *)(param_2 + 0x24) != -1) {
    FUN_01d4a9a8(param_1,*(undefined8 *)(param_1 + 400),param_2,0x200,param_4);
  }
  if (*(int *)(param_2 + 0x28) != -1) {
    FUN_01d4a9a8(param_1,*(undefined8 *)(param_1 + 400),param_2,0x400,param_4);
  }
  return;
}


