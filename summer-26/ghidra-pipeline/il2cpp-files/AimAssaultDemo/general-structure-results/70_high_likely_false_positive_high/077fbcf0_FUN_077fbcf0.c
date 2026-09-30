/*
FUNCTION_NAME: FUN_077fbcf0
ENTRY_POINT: 077fbcf0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_077fbcf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  
  puVar1 = Method_Unity_Properties_ContainerPropertyBag<Angle>_AddProperty<AngleUnit>__;
  puVar2 = PTR_DAT_07d96fb8;
  if ((DAT_08272253 & 1) == 0) {
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<DotPoint>_get_Current__);
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
    FUN_0373b518(Method_Unity_Properties_ContainerPropertyBag<Angle>_AddProperty<AngleUnit>__);
    FUN_0373b518(Method_Unity_Collections_NativeSlice_Enumerator<Vector3>_MoveNext__);
    FUN_0373b518(Method_Unity_Collections_NativeSlice_Enumerator<Vector3>_get_Current__);
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
    FUN_0373b518(Method_System_Collections_Generic_HashSet_Enumerator<VisualElement>_Dispose__);
    FUN_0373b518(PTR_DAT_07d96fb8);
    DAT_08272253 = 1;
  }
  FUN_062855bc(param_1,0);
  lVar4 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
  FUN_077c3e48(lVar4,param_2,param_3,param_4,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  puVar3 = 
  Method_System_Collections_Generic_List_Enumerator<VisualEffectPlayableSerializedEvent>_Dispose__;
  puVar1 = PTR_DAT_07d88f80;
  if (lVar4 != 0) {
    FUN_0771220c(lVar4,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38),0);
    plVar6 = (long *)(param_1 + 0x40);
    *plVar6 = lVar4;
    thunk_FUN_037aeb94(plVar6,lVar4);
    lVar4 = *plVar6;
    uVar5 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
    FUN_061a7ce0(uVar5,param_1,*(undefined8 *)puVar3,0);
    puVar3 = 
    Method_System_Collections_Generic_List_Enumerator<VisualEffectPlayableSerializedEvent>_get_Current__
    ;
    puVar2 = Method_System_Collections_Generic_List_Enumerator<DifficultyButtonToggle>_get_Current__
    ;
    if (lVar4 != 0) {
      FUN_077c3a60(lVar4,uVar5,0);
      lVar4 = *(long *)(param_1 + 0x40);
      uVar5 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
      FUN_05a9bf5c(uVar5,param_1,*(undefined8 *)puVar3,0);
      puVar3 = 
      Method_System_Collections_Generic_List_Enumerator<VisualEffectControlPlayableBehaviour>_get_Current__
      ;
      puVar2 = Method_System_Collections_Generic_List_Enumerator<DifficultyButtonToggle>_MoveNext__;
      if (lVar4 != 0) {
        FUN_077c3ba0(lVar4,uVar5,0);
        lVar4 = *(long *)(param_1 + 0x40);
        uVar5 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
        FUN_05a9ae78(uVar5,param_1,*(undefined8 *)puVar3,0);
        puVar2 = Method_System_Collections_Generic_HashSet_Enumerator<VisualElement>_Dispose__;
        if (lVar4 != 0) {
          FUN_077c38f8(lVar4,uVar5,0);
          lVar4 = *(long *)(param_1 + 0x40);
          uVar5 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
          FUN_061a7ce0(uVar5,param_1,*(undefined8 *)puVar2,0);
          if (lVar4 != 0) {
            FUN_077c3d08(lVar4,uVar5,0);
            puVar2 = Method_Unity_Collections_NativeSlice_Enumerator<Vector3>_MoveNext__;
            if (*plVar6 != 0) {
              lVar4 = *(long *)(*plVar6 + 0x500);
              uVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                          Method_System_Collections_Generic_List_Enumerator<DropdownMenuItem>_MoveNext__
                                        );
              FUN_05a9bbf8(uVar5,param_1,*(undefined8 *)puVar2,0);
              if (lVar4 != 0) {
                FUN_077f58b0(lVar4,uVar5);
                puVar2 = 
                Method_System_Collections_Generic_List_Enumerator<VisualEffectControlPlayableBehaviour>_Dispose__
                ;
                if (*plVar6 != 0) {
                  lVar4 = *(long *)(*plVar6 + 0x500);
                  uVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                              Method_System_Collections_Generic_List_Enumerator<DotPoint>_get_Current__
                                            );
                  FUN_059b2670(uVar5,param_1,*(undefined8 *)puVar2,0);
                  if (lVar4 != 0) {
                    FUN_077f5960(lVar4,uVar5);
                    puVar2 = 
                    Method_System_Collections_Generic_List_Enumerator<VisualEffectControlPlayableBehaviour>_MoveNext__
                    ;
                    if (*plVar6 != 0) {
                      lVar4 = *(long *)(*plVar6 + 0x500);
                      uVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                  Method_System_Collections_Generic_List_Enumerator<DropdownMenuItem>_get_Current__
                                                );
                      FUN_05a9db94(uVar5,param_1,*(undefined8 *)puVar2,0);
                      if (lVar4 != 0) {
                        FUN_077f5a10(lVar4,uVar5);
                        puVar2 = 
                        Method_System_Collections_Generic_List_Enumerator<VisualEffectPlayableSerializedEvent>_MoveNext__
                        ;
                        if (*plVar6 != 0) {
                          lVar4 = *(long *)(*plVar6 + 0x500);
                          uVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                                            
                                                  Method_System_Collections_Generic_List_Enumerator<DropdownMenuItem>_Dispose__
                                                  );
                          FUN_05a9bd18(uVar5,param_1,*(undefined8 *)puVar2,0);
                          if (lVar4 != 0) {
                            FUN_077f9ed0(lVar4,uVar5);
                            puVar2 = 
                            Method_Unity_Collections_NativeSlice_Enumerator<Vector3>_get_Current__;
                            if (*plVar6 != 0) {
                              lVar4 = *(long *)(*plVar6 + 0x500);
                              uVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_List_Enumerator<UxmlObjectAsset>_get_Current__
                                                  );
                              FUN_059af8bc(uVar5,param_1,*(undefined8 *)puVar2,0);
                              if (lVar4 != 0) {
                                FUN_077f9b6c(lVar4,uVar5);
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
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


