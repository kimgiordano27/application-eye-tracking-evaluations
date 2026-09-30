/*
FUNCTION_NAME: FUN_05de6468
ENTRY_POINT: 05de6468
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_14;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05de6468(long param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  long local_70;
  undefined8 local_68;
  
  if ((DAT_06a7b048 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerator<NonConvexMeshCollider_Tri>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<DeactivateEventArgs>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<DropEventArgs>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Func<CaptureIconService_CaptureRequest,_bool>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<FocusEnterEventArgs>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<FocusExitEventArgs>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerator<RenamedAssemblyAttribute>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<HoverEnterEventArgs>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerator<RenamedNamespaceAttribute>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c40);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<HoverExitEventArgs>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<InteractableRegisteredEventArgs>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<short,_Decimal,_object>_TypeInfo);
    DAT_06a7b048 = 1;
  }
  puVar2 = PTR_DAT_065c8c40;
  local_70 = 0;
  local_68 = 0;
  if (param_2 == (long *)0x0) {
    thunk_FUN_02c7737c(PTR_DAT_065c96c8);
    uVar8 = thunk_FUN_02cea894();
    uVar9 = thunk_FUN_02c7737c(
                              UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<InteractableUnregisteredEventArgs>_TypeInfo
                              );
    FUN_04e97f6c(uVar8,uVar9,0);
    uVar9 = thunk_FUN_02c7737c(
                              UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<InteractionGroupRegisteredEventArgs>_TypeInfo
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar8,uVar9);
  }
  lVar10 = *param_2;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar12 != 0) {
    piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) ==
          *(long *)System_Func<CaptureIconService_CaptureRequest,_bool>_TypeInfo) {
        puVar5 = (undefined8 *)(lVar10 + (long)(*piVar14 + 5) * 0x10 + 0x138);
        goto LAB_05de65a4;
      }
      uVar12 = uVar12 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar12 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_02ce0a7c(param_2,*(long *)
                                 System_Func<CaptureIconService_CaptureRequest,_bool>_TypeInfo,5);
LAB_05de65a4:
  lVar10 = (*(code *)*puVar5)(param_2,puVar5[1]);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c(*(long *)puVar2);
  }
  uVar12 = FUN_05ef739c(lVar10,0,0);
  puVar2 = System_Func<short,_Decimal,_object>_TypeInfo;
  if ((uVar12 & 1) == 0) {
    if (*(int *)(*(long *)System_Func<short,_Decimal,_object>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar12 = FUN_05de6884();
    if ((uVar12 & 1) != 0) {
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar6 = *(long *)puVar2;
      }
      puVar4 = 
      UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<FocusExitEventArgs>_TypeInfo;
      puVar3 = System_Collections_Generic_IEnumerator<NonConvexMeshCollider_Tri>_TypeInfo;
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
      if (lVar6 == 0) {
LAB_05de6834:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
        uVar12 = 0;
        uVar11 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
        do {
          if (uVar11 <= uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          lVar15 = *(long *)(lVar6 + 0x20 + uVar12 * 8);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar11 = FUN_05de6978(lVar15,&local_68);
          if ((uVar11 & 1) != 0) {
            if (lVar10 == 0) goto LAB_05de6834;
            uVar11 = FUN_05f047d8(lVar10,local_68,0);
            if ((uVar11 & 1) != 0) {
              lVar7 = *(long *)(param_1 + 0x18);
              if (lVar7 == 0) {
                lVar7 = *(long *)puVar2;
                if (*(int *)(lVar7 + 0xe0) == 0) {
                  thunk_FUN_02cd038c();
                  lVar7 = *(long *)puVar2;
                }
                if (**(long **)(lVar7 + 0xb8) == 0) goto LAB_05de6834;
                lVar7 = FUN_03804478(**(long **)(lVar7 + 0xb8),
                                     *(undefined8 *)
                                      UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<FocusEnterEventArgs>_TypeInfo
                                    );
                *(long *)(param_1 + 0x18) = lVar7;
                if (lVar7 == 0) goto LAB_05de6834;
              }
              uVar11 = FUN_0467ad20(lVar7,lVar15,&local_70,
                                    *(undefined8 *)
                                     UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<DropEventArgs>_TypeInfo
                                   );
              if ((uVar11 & 1) == 0) {
                lVar7 = thunk_FUN_02cea894(*(undefined8 *)
                                            System_Collections_Generic_IEnumerator<RenamedNamespaceAttribute>_TypeInfo
                                          );
                System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                          (lVar7,*(undefined8 *)
                                  System_Collections_Generic_IEnumerator<RenamedAssemblyAttribute>_TypeInfo
                          );
                local_70 = lVar7;
                if (*(long *)(param_1 + 0x18) == 0) goto LAB_05de6834;
                FUN_0467928c(*(long *)(param_1 + 0x18),lVar15,lVar7,
                             *(undefined8 *)
                              UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<DeactivateEventArgs>_TypeInfo
                            );
              }
              if (local_70 == 0) goto LAB_05de6834;
              lVar7 = *(long *)(local_70 + 0x10);
              lVar13 = *(long *)puVar4;
              *(int *)(local_70 + 0x1c) = *(int *)(local_70 + 0x1c) + 1;
              if (lVar7 == 0) goto LAB_05de6834;
              uVar1 = *(uint *)(local_70 + 0x18);
              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)(local_70 + 0x18) = uVar1 + 1;
                *(long **)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = param_2;
              }
              else {
                FUN_039683cc(local_70,param_2,
                             *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
              if (local_70 == 0) goto LAB_05de6834;
              if (*(int *)(local_70 + 0x18) == 1) {
                uVar8 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
                FUN_047b3b70(uVar8,param_1,
                             *(undefined8 *)
                              UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<HoverExitEventArgs>_TypeInfo
                             ,0);
                if (lVar15 == 0) goto LAB_05de6834;
                FUN_05dd07dc(lVar15,uVar8,0);
                uVar8 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
                FUN_047b3b70(uVar8,param_1,
                             *(undefined8 *)
                              UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<InteractableRegisteredEventArgs>_TypeInfo
                             ,0);
                FUN_05dd088c(lVar15,uVar8,0);
              }
            }
          }
          uVar11 = (ulong)*(uint *)(lVar6 + 0x18);
          uVar12 = uVar12 + 1;
        } while ((long)uVar12 < (long)(int)*(uint *)(lVar6 + 0x18));
      }
    }
  }
  return;
}


