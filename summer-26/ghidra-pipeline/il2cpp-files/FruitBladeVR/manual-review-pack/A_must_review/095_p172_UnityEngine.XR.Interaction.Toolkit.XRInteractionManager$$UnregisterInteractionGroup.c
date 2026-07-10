/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRInteractionManager$$UnregisterInteractionGroup
ENTRY_POINT: 035f95f0
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection;weak_data_support
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;strong_file_logging_hits_6;weak_string_building_near_file_sink_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_XR_Interaction_Toolkit_XRInteractionManager__UnregisterInteractionGroup
               (long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 local_a0;
  undefined8 *puStack_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  long local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  
  if ((DAT_03ef688f & 1) == 0) {
    FUN_01c5c92c(
                PTR_Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount___03ce1ba0
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractionGroup>_get_flushedCount___03ce1ba8
                );
    FUN_01c5c92c(PTR_UnityEngine_Debug_TypeInfo_03cb5ae0);
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List_Enumerator<IXRInteractor>_Dispose___03ce1ad0
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List_Enumerator<IXRInteractionGroup>_Dispose___03ce1ad8
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List_Enumerator<IXRInteractor>_MoveNext___03ce1ae0
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List_Enumerator<IXRInteractionGroup>_MoveNext___03ce1ae8
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List_Enumerator<IXRInteractionGroup>_get_Current___03ce1af0
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List_Enumerator<IXRInteractor>_get_Current___03ce1af8
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_HashSet<IXRInteractionGroup>_Remove___03ce1bb0
                );
    FUN_01c5c92c(PTR_UnityEngine_XR_Interaction_Toolkit_Interactors_IXRGroupMember_TypeInfo_03ce1b70
                );
    FUN_01c5c92c(
                PTR_UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_TypeInfo_03ce1b10
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<InteractionGroupUnregisteredEventArgs>_Get___03ce1bb8
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List<IXRInteractionGroup>_GetEnumerator___03ce1b18
                );
    FUN_01c5c92c(PTR_Method_System_Collections_Generic_List<IXRInteractor>_GetEnumerator___03ce1b20)
    ;
    FUN_01c5c92c(
                PTR_Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<InteractionGroupUnregisteredEventArgs>_System_IDisposable_Dispose___03ce1bc0
                );
    FUN_01c5c92c(PTR_StringLiteral_2970_03ce1bc8);
    FUN_01c5c92c(PTR_StringLiteral_1938_03ce1bd0);
    DAT_03ef688f = 1;
  }
  plVar4 = (long *)param_1[0x14];
  local_50 = 0;
  puStack_48 = (undefined8 *)0x0;
  local_40 = 0;
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  local_88._8_8_ = 0;
  local_78 = 0;
  local_88._0_8_ = 0;
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x178))(plVar4,param_2,*(undefined8 *)(*plVar4 + 0x180));
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (param_2 != (long *)0x0) {
      lVar8 = *param_2;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)
               PTR_UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_TypeInfo_03ce1b10
             ) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar11 + 9) * 0x10 + 0x138);
            goto LAB_035f9784;
          }
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01c8cb54(param_2,*(long *)
                                     PTR_UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_TypeInfo_03ce1b10
                            ,9);
LAB_035f9784:
      (*(code *)*puVar6)(param_2,puVar6[1]);
      if (param_1[0x14] != 0) {
        iVar3 = UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<object>__get_flushedCount
                          (param_1[0x14],
                           *(undefined8 *)
                            PTR_Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractionGroup>_get_flushedCount___03ce1ba8
                          );
        if (iVar3 < 1) {
LAB_035f990c:
          if (param_1[0x13] != 0) {
            iVar3 = UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<object>__get_flushedCount
                              (param_1[0x13],
                               *(undefined8 *)
                                PTR_Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount___03ce1ba0
                              );
            if (iVar3 < 1) {
LAB_035f9a90:
              plVar4 = (long *)param_1[0x14];
              if (plVar4 != (long *)0x0) {
                uVar5 = (**(code **)(*plVar4 + 0x1a8))
                                  (plVar4,param_2,*(undefined8 *)(*plVar4 + 0x1b0));
                if ((uVar5 & 1) == 0) {
                  return;
                }
                if (param_1[0x1c] != 0) {
                  System_Collections_Generic_HashSet<object>__Remove
                            (param_1[0x1c],param_2,
                             *(undefined8 *)
                              PTR_Method_System_Collections_Generic_HashSet<IXRInteractionGroup>_Remove___03ce1bb0
                            );
                  if (param_1[0x26] != 0) {
                    local_88 = UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<object>__Get
                                         (param_1[0x26],&local_78,
                                          *(undefined8 *)
                                           PTR_Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<InteractionGroupUnregisteredEventArgs>_Get___03ce1bb8
                                         );
                    puStack_98 = (undefined8 *)local_88;
                    local_a0 = 0;
                    if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5cbd4();
                    }
                    *(long *)(local_78 + 0x10) = (long)param_1;
                    thunk_FUN_01cc8040((long *)(local_78 + 0x10),param_1);
                    if (local_78 != 0) {
                      *(long *)(local_78 + 0x18) = (long)param_2;
                      thunk_FUN_01cc8040((long *)(local_78 + 0x18),param_2);
                      (**(code **)(*param_1 + 0x288))
                                (param_1,local_78,*(undefined8 *)(*param_1 + 0x290));
                      UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<object>__System_IDisposable_Dispose
                                (local_88,*(undefined8 *)
                                           PTR_Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<InteractionGroupUnregisteredEventArgs>_System_IDisposable_Dispose___03ce1bc0
                                );
                      return;
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_01c5cbd4();
                  }
                }
              }
            }
            else {
              plVar4 = (long *)param_1[0x13];
              if (plVar4 != (long *)0x0) {
                (**(code **)(*plVar4 + 0x1c8))
                          (plVar4,param_1[0x1e],*(undefined8 *)(*plVar4 + 0x1d0));
                if (param_1[0x1e] != 0) {
                  System_Collections_Generic_List<object>__GetEnumerator
                            (&local_a0,param_1[0x1e],
                             *(undefined8 *)
                              PTR_Method_System_Collections_Generic_List<IXRInteractor>_GetEnumerator___03ce1b20
                            );
                  puVar2 = 
                  PTR_UnityEngine_XR_Interaction_Toolkit_Interactors_IXRGroupMember_TypeInfo_03ce1b70
                  ;
                  puVar1 = 
                  PTR_Method_System_Collections_Generic_List_Enumerator<IXRInteractor>_MoveNext___03ce1ae0
                  ;
                  puStack_68 = puStack_98;
                  local_70 = local_a0;
                  local_60 = local_90;
                  local_a0 = 0;
                  puStack_98 = &local_70;
                  do {
                    do {
                      uVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                        (&local_70,*(undefined8 *)puVar1);
                      if ((uVar5 & 1) == 0) {
                        System_Collections_Generic_List_Enumerator<object>__Dispose
                                  (&local_70,
                                   *(undefined8 *)
                                    PTR_Method_System_Collections_Generic_List_Enumerator<IXRInteractor>_Dispose___03ce1ad0
                                  );
                        goto LAB_035f9a90;
                      }
                      plVar4 = (long *)thunk_FUN_01c8fb4c(local_60,*(undefined8 *)puVar2);
                    } while (plVar4 == (long *)0x0);
                    lVar9 = *plVar4;
                    lVar8 = *(long *)puVar2;
                    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    if (uVar5 != 0) {
                      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar11 + -2) == lVar8) {
                          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                          goto LAB_035f99f8;
                        }
                        uVar5 = uVar5 - 1;
                        piVar11 = piVar11 + 4;
                      } while (uVar5 != 0);
                    }
                    puVar6 = (undefined8 *)FUN_01c8cb54(plVar4,lVar8,0);
LAB_035f99f8:
                    plVar4 = (long *)(*(code *)*puVar6)(plVar4,puVar6[1]);
                  } while (plVar4 != param_2);
                  uVar7 = System_String__Format
                                    (*(undefined8 *)PTR_StringLiteral_1938_03ce1bd0,param_2,0);
                  uVar7 = System_String__Concat
                                    (uVar7,*(undefined8 *)PTR_StringLiteral_2970_03ce1bc8,0);
                  if (*(int *)(*(long *)PTR_UnityEngine_Debug_TypeInfo_03cb5ae0 + 0xe4) == 0) {
                    thunk_FUN_01cb0d4c();
                  }
                  UnityEngine_Debug__LogError(uVar7,param_1,0);
                  puVar6 = &local_70;
                  puVar10 = (undefined8 *)
                            PTR_Method_System_Collections_Generic_List_Enumerator<IXRInteractor>_Dispose___03ce1ad0
                  ;
                  goto LAB_035f9a70;
                }
              }
            }
          }
        }
        else {
          plVar4 = (long *)param_1[0x14];
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x1c8))(plVar4,param_1[0x1d],*(undefined8 *)(*plVar4 + 0x1d0));
            if (param_1[0x1d] != 0) {
              System_Collections_Generic_List<object>__GetEnumerator
                        (&local_a0,param_1[0x1d],
                         *(undefined8 *)
                          PTR_Method_System_Collections_Generic_List<IXRInteractionGroup>_GetEnumerator___03ce1b18
                        );
              puVar2 = 
              PTR_UnityEngine_XR_Interaction_Toolkit_Interactors_IXRGroupMember_TypeInfo_03ce1b70;
              puVar1 = 
              PTR_Method_System_Collections_Generic_List_Enumerator<IXRInteractionGroup>_MoveNext___03ce1ae8
              ;
              puStack_48 = puStack_98;
              local_50 = local_a0;
              local_40 = local_90;
              local_a0 = 0;
              puStack_98 = &local_50;
              do {
                do {
                  uVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                    (&local_50,*(undefined8 *)puVar1);
                  if ((uVar5 & 1) == 0) {
                    System_Collections_Generic_List_Enumerator<object>__Dispose
                              (&local_50,
                               *(undefined8 *)
                                PTR_Method_System_Collections_Generic_List_Enumerator<IXRInteractionGroup>_Dispose___03ce1ad8
                              );
                    goto LAB_035f990c;
                  }
                  plVar4 = (long *)thunk_FUN_01c8fb4c(local_40,*(undefined8 *)puVar2);
                } while (plVar4 == (long *)0x0);
                lVar9 = *plVar4;
                lVar8 = *(long *)puVar2;
                uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar5 != 0) {
                  piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) == lVar8) {
                      puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                      goto LAB_035f987c;
                    }
                    uVar5 = uVar5 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar5 != 0);
                }
                puVar6 = (undefined8 *)FUN_01c8cb54(plVar4,lVar8,0);
LAB_035f987c:
                plVar4 = (long *)(*(code *)*puVar6)(plVar4,puVar6[1]);
              } while (plVar4 != param_2);
              uVar7 = System_String__Format
                                (*(undefined8 *)PTR_StringLiteral_1938_03ce1bd0,param_2,0);
              uVar7 = System_String__Concat(uVar7,*(undefined8 *)PTR_StringLiteral_2970_03ce1bc8,0);
              if (*(int *)(*(long *)PTR_UnityEngine_Debug_TypeInfo_03cb5ae0 + 0xe4) == 0) {
                thunk_FUN_01cb0d4c();
              }
              UnityEngine_Debug__LogError(uVar7,param_1,0);
              puVar6 = &local_50;
              puVar10 = (undefined8 *)
                        PTR_Method_System_Collections_Generic_List_Enumerator<IXRInteractionGroup>_Dispose___03ce1ad8
              ;
LAB_035f9a70:
              System_Collections_Generic_List_Enumerator<object>__Dispose(puVar6,*puVar10);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


