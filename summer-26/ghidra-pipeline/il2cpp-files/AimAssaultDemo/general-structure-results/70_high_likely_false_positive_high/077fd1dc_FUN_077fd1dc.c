/*
FUNCTION_NAME: FUN_077fd1dc
ENTRY_POINT: 077fd1dc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_077fd1dc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  if ((DAT_08272259 & 1) == 0) {
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<DotPoint>_get_Current__);
    FUN_0373b518(PTR_DAT_07d88bb8);
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<UxmlObjectAsset>_get_Current__);
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<DropdownMenuItem>_Dispose__);
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<DifficultyButtonToggle>_MoveNext__
                );
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<DropdownMenuItem>_MoveNext__);
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<DifficultyButtonToggle>_get_Current__
                );
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<DropdownMenuItem>_get_Current__);
    FUN_0373b518(PTR_DAT_07d88f80);
    FUN_0373b518(PTR_DAT_07d9a218);
    FUN_0373b518(PTR_DAT_07d98668);
    FUN_0373b518(Method_Unity_Collections_NativeSlice_Enumerator<Vector3>_MoveNext__);
    FUN_0373b518(Method_Unity_Collections_NativeSlice_Enumerator<Vector3>_get_Current__);
    FUN_0373b518(Method_System_Collections_Generic_HashSet_Enumerator<VisualElement>_MoveNext__);
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<VisualEffectControlPlayableBehaviour>_Dispose__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<VisualEffectControlPlayableBehaviour>_MoveNext__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<VisualEffectControlPlayableBehaviour>_get_Current__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<VisualEffectPlayableSerializedEvent>_Dispose__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<VisualEffectPlayableSerializedEvent>_MoveNext__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<VisualEffectPlayableSerializedEvent>_get_Current__
                );
    FUN_0373b518(Method_System_Collections_Generic_HashSet_Enumerator<VisualElement>_get_Current__);
    FUN_0373b518(Method_System_Collections_Generic_HashSet_Enumerator<VisualElement>_Dispose__);
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<VisualElement>_Dispose__);
    DAT_08272259 = 1;
  }
  puVar3 = Method_System_Collections_Generic_HashSet_Enumerator<VisualElement>_get_Current__;
  puVar2 = PTR_DAT_07d9a218;
  puVar1 = PTR_DAT_07d98668;
  plVar6 = (long *)(param_1 + 0x30);
  if (*plVar6 != 0) {
    lVar5 = *(long *)(*plVar6 + 0x520);
    if (lVar5 == 0) goto LAB_077fd6fc;
    lVar5 = *(long *)(lVar5 + 0x500);
    uVar4 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d88bb8);
    FUN_05a8c3a4(uVar4,param_1,*(undefined8 *)puVar3,0);
    if (lVar5 == 0) goto LAB_077fd6fc;
    FUN_0780d900(lVar5,uVar4,0);
    puVar3 = Method_System_Collections_Generic_List_Enumerator<VisualElement>_Dispose__;
    if ((*plVar6 == 0) || (lVar5 = *(long *)(*plVar6 + 0x520), lVar5 == 0)) goto LAB_077fd6fc;
    lVar5 = *(long *)(lVar5 + 0x4f8);
    uVar4 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
    FUN_0440b9a8(uVar4,param_1,*(undefined8 *)puVar3,0);
    if (lVar5 == 0) goto LAB_077fd6fc;
    FUN_03efcd40(lVar5,uVar4,0,*(undefined8 *)puVar2);
    *plVar6 = 0;
    thunk_FUN_037aeb94(plVar6,0);
  }
  puVar3 = Method_System_Collections_Generic_HashSet_Enumerator<VisualElement>_MoveNext__;
  plVar6 = (long *)(param_1 + 0x40);
  if (*plVar6 != 0) {
    lVar5 = *(long *)(*plVar6 + 0x4f0);
    uVar4 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
    FUN_0440b9a8(uVar4,param_1,*(undefined8 *)puVar3,0);
    puVar3 = 
    Method_System_Collections_Generic_List_Enumerator<VisualEffectPlayableSerializedEvent>_Dispose__
    ;
    puVar1 = PTR_DAT_07d88f80;
    if (lVar5 != 0) {
      FUN_03efcd40(lVar5,uVar4,0,*(undefined8 *)puVar2);
      lVar5 = *(long *)(param_1 + 0x40);
      uVar4 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
      FUN_061a7ce0(uVar4,param_1,*(undefined8 *)puVar3,0);
      puVar3 = 
      Method_System_Collections_Generic_List_Enumerator<VisualEffectPlayableSerializedEvent>_get_Current__
      ;
      puVar2 = 
      Method_System_Collections_Generic_List_Enumerator<DifficultyButtonToggle>_get_Current__;
      if (lVar5 != 0) {
        FUN_077c3b00(lVar5,uVar4,0);
        lVar5 = *(long *)(param_1 + 0x40);
        uVar4 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
        FUN_05a9bf5c(uVar4,param_1,*(undefined8 *)puVar3,0);
        puVar3 = 
        Method_System_Collections_Generic_List_Enumerator<VisualEffectControlPlayableBehaviour>_get_Current__
        ;
        puVar2 = 
        Method_System_Collections_Generic_List_Enumerator<DifficultyButtonToggle>_MoveNext__;
        if (lVar5 != 0) {
          FUN_077c3c54(lVar5,uVar4,0);
          lVar5 = *(long *)(param_1 + 0x40);
          uVar4 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
          FUN_05a9ae78(uVar4,param_1,*(undefined8 *)puVar3,0);
          puVar2 = Method_System_Collections_Generic_HashSet_Enumerator<VisualElement>_Dispose__;
          if (lVar5 != 0) {
            FUN_077c39ac(lVar5,uVar4,0);
            lVar5 = *(long *)(param_1 + 0x40);
            uVar4 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
            FUN_061a7ce0(uVar4,param_1,*(undefined8 *)puVar2,0);
            if (lVar5 != 0) {
              FUN_077c3da8(lVar5,uVar4,0);
              puVar1 = Method_Unity_Collections_NativeSlice_Enumerator<Vector3>_MoveNext__;
              if (*plVar6 != 0) {
                lVar5 = *(long *)(*plVar6 + 0x500);
                uVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                            Method_System_Collections_Generic_List_Enumerator<DropdownMenuItem>_MoveNext__
                                          );
                FUN_05a9bbf8(uVar4,param_1,*(undefined8 *)puVar1,0);
                if (lVar5 != 0) {
                  FUN_077f9d70(lVar5,uVar4);
                  puVar1 = 
                  Method_System_Collections_Generic_List_Enumerator<VisualEffectControlPlayableBehaviour>_Dispose__
                  ;
                  if (*plVar6 != 0) {
                    lVar5 = *(long *)(*plVar6 + 0x500);
                    uVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                Method_System_Collections_Generic_List_Enumerator<DotPoint>_get_Current__
                                              );
                    FUN_059b2670(uVar4,param_1,*(undefined8 *)puVar1,0);
                    if (lVar5 != 0) {
                      FUN_077f9e20(lVar5,uVar4);
                      puVar1 = 
                      Method_System_Collections_Generic_List_Enumerator<VisualEffectControlPlayableBehaviour>_MoveNext__
                      ;
                      if (*plVar6 != 0) {
                        lVar5 = *(long *)(*plVar6 + 0x500);
                        uVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_Generic_List_Enumerator<DropdownMenuItem>_get_Current__
                                                  );
                        FUN_05a9db94(uVar4,param_1,*(undefined8 *)puVar1,0);
                        if (lVar5 != 0) {
                          FUN_077fa190(lVar5,uVar4);
                          puVar1 = 
                          Method_System_Collections_Generic_List_Enumerator<VisualEffectPlayableSerializedEvent>_MoveNext__
                          ;
                          if (*plVar6 != 0) {
                            lVar5 = *(long *)(*plVar6 + 0x500);
                            uVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                                                
                                                  Method_System_Collections_Generic_List_Enumerator<DropdownMenuItem>_Dispose__
                                                  );
                            FUN_05a9bd18(uVar4,param_1,*(undefined8 *)puVar1,0);
                            if (lVar5 != 0) {
                              FUN_077f9f80(lVar5,uVar4);
                              puVar1 = 
                              Method_Unity_Collections_NativeSlice_Enumerator<Vector3>_get_Current__
                              ;
                              if (*plVar6 != 0) {
                                lVar5 = *(long *)(*plVar6 + 0x500);
                                uVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                                                        
                                                  Method_System_Collections_Generic_List_Enumerator<UxmlObjectAsset>_get_Current__
                                                  );
                                FUN_059af8bc(uVar4,param_1,*(undefined8 *)puVar1,0);
                                if (lVar5 != 0) {
                                  FUN_077f9c1c(lVar5,uVar4);
                                  if (*plVar6 != 0) {
                                    FUN_0771e4c4(*plVar6,0);
                                    if (*plVar6 != 0) {
                                      FUN_077c89b8(*plVar6,0);
                                      *(undefined8 *)(param_1 + 0x40) = 0;
                                      thunk_FUN_037aeb94(plVar6,0);
                                      plVar6 = (long *)(param_1 + 0x38);
                                      if (*plVar6 != 0) {
                                        FUN_0771e4c4(*plVar6,0);
                                        *plVar6 = 0;
                                        thunk_FUN_037aeb94(plVar6,0);
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
LAB_077fd6fc:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


