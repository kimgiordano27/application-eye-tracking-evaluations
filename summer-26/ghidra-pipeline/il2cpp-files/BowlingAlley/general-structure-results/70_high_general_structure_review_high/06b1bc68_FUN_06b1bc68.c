/*
FUNCTION_NAME: FUN_06b1bc68
ENTRY_POINT: 06b1bc68
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_19;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06b1bc68(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_076e34ee & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(Method_Firebase_Platform_Default_AppConfigExtensions_GetState<string>__);
    thunk_FUN_032e1da0(Method_Firebase_Platform_Default_AppConfigExtensions_SetState<string>__);
    thunk_FUN_032e1da0(Method_Oculus_Voice_Dictation_AppDictationExperience_<OnEnable>b__37_0__);
    thunk_FUN_032e1da0(PTR_DAT_0727fc18);
    thunk_FUN_032e1da0(
                      Method_Oculus_Voice_Dictation_AppDictationExperience_OnAudioDurationTrackerFinished__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRSessionSubsystem,_XRSessionSubsystemDescriptor,_XRSessionSubsystem_Provider>_get_provider__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRHandSubsystem,_XRHandSubsystemDescriptor,_XRHandSubsystemProvider>_get_provider__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRSessionSubsystem,_XRSessionSubsystemDescriptor,_XRSessionSubsystem_Provider>_get_subsystemDescriptor__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_TextValueField<uint>_AddLabelDragger<uint>__);
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_TextValueField<uint>_get_formatString__);
    thunk_FUN_032e1da0(Method_Oculus_Voice_Dictation_AppDictationExperience_OnComplete__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRSessionSubsystem,_XRSessionSubsystemDescriptor,_XRSessionSubsystem_Provider>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRHandSubsystem,_XRHandSubsystemDescriptor,_XRHandSubsystemProvider>_OnDestroy__
                      );
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    thunk_FUN_032e1da0(
                      Method_Oculus_Voice_Dictation_AppDictationExperience_OnDictationSessionStarted__
                      );
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_Subtract<Vector2>__ctor__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_SubsystemsImplementation_SubsystemProvider<XRObjectTrackingSubsystem>__ctor__
                      );
    thunk_FUN_032e1da0(PTR_DAT_0727c048);
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_Subtract<Vector3>__ctor__);
    thunk_FUN_032e1da0(Method_Oculus_Voice_Dictation_AppDictationExperience_OnFullTranscription__);
    thunk_FUN_032e1da0(Method_Oculus_Voice_Dictation_AppDictationExperience_OnPartialTranscription__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Voice_Dictation_AppDictationExperience_OnPlatformServiceNotAvailable__
                      );
    thunk_FUN_032e1da0(Method_Oculus_Voice_Dictation_AppDictationExperience_OnRequestInit__);
    DAT_076e34ee = 1;
  }
  puVar2 = PTR_DAT_072794f0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (*(char *)(param_1 + 0x1b9) == '\0') {
    return;
  }
  uVar13 = *(undefined8 *)(param_1 + 0x168);
  if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar7 = FUN_06bece64(uVar13,0,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x1b8) != '\0') {
    lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRHandSubsystem,_XRHandSubsystemDescriptor,_XRHandSubsystemProvider>_OnDestroy__
                              );
    System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
              (lVar8,*(undefined8 *)
                      Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRHandSubsystem,_XRHandSubsystemDescriptor,_XRHandSubsystemProvider>_get_provider__
              );
    if (*(int *)(*(long *)PTR_DAT_0727c048 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_03b4de7c(lVar8,*(undefined8 *)
                        Method_UnityEngine_SubsystemsImplementation_SubsystemProvider<XRObjectTrackingSubsystem>__ctor__
                );
    if (lVar8 == 0) goto LAB_06b1c188;
    FUN_041e3694(&local_98,lVar8,
                 *(undefined8 *)
                  Method_Oculus_Voice_Dictation_AppDictationExperience_OnAudioDurationTrackerFinished__
                );
    puVar4 = Method_Firebase_Platform_Default_AppConfigExtensions_SetState<string>__;
    uStack_78 = uStack_90;
    local_80 = local_98;
    local_70 = local_88;
    while (uVar7 = FUN_052d44b4(&local_80,*(undefined8 *)puVar4), (uVar7 & 1) != 0) {
      if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (*(char *)(local_70 + 0x10) != '\0') {
        FUN_06c4ed58(local_70,0);
      }
    }
    FUN_052d44b0(&local_80,
                 *(undefined8 *)
                  Method_Firebase_Platform_Default_AppConfigExtensions_GetState<string>__);
  }
  lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                              Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRSessionSubsystem,_XRSessionSubsystemDescriptor,_XRSessionSubsystem_Provider>__ctor__
                            );
  System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
            (lVar8,*(undefined8 *)
                    Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRSessionSubsystem,_XRSessionSubsystemDescriptor,_XRSessionSubsystem_Provider>_get_provider__
            );
  if (*(int *)(*(long *)PTR_DAT_0727c048 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_03b4ddb0(lVar8,*(undefined8 *)Method_Unity_VisualScripting_Subtract<Vector2>__ctor__);
  puVar3 = Method_Oculus_Voice_Dictation_AppDictationExperience_OnFullTranscription__;
  puVar4 = Method_Oculus_Voice_Dictation_AppDictationExperience_OnComplete__;
  if (lVar8 != 0) {
    if (0 < *(int *)(lVar8 + 0x18)) {
      iVar15 = 0;
      do {
        lVar9 = FUN_041e29a8(lVar8,iVar15,*(undefined8 *)puVar4);
        if (lVar9 == 0) goto LAB_06b1c188;
        uVar13 = *(undefined8 *)(lVar9 + 0x10);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        if (DAT_076e355b == '\0') {
          thunk_FUN_032e1da0(puVar3);
          DAT_076e355b = '\x01';
        }
        lVar10 = *(long *)puVar3;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar10 = *(long *)puVar3;
        }
        uVar7 = thunk_FUN_057aa644(uVar13,**(undefined8 **)(lVar10 + 0xb8),0);
        if ((uVar7 & 1) != 0) {
          plVar11 = (long *)FUN_04a05880(lVar9,*(undefined8 *)
                                                Method_Oculus_Voice_Dictation_AppDictationExperience_OnDictationSessionStarted__
                                        );
          if (plVar11 == (long *)0x0) {
            plVar11 = (long *)0x0;
            *(undefined8 *)(param_1 + 0x398) = 0;
          }
          else {
            lVar8 = *(long *)
                     Method_Oculus_Voice_Dictation_AppDictationExperience_OnPartialTranscription__;
            bVar1 = *(byte *)(lVar8 + 0x130);
            if (*(byte *)(*plVar11 + 0x130) < bVar1) {
              plVar12 = (long *)0x0;
            }
            else {
              plVar12 = plVar11;
              if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar8) {
                plVar12 = (long *)0x0;
              }
            }
            *(long **)(param_1 + 0x398) = plVar12;
            if (*(byte *)(*plVar11 + 0x130) < bVar1) {
              plVar11 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar8) {
              plVar11 = (long *)0x0;
            }
          }
          thunk_FUN_0333a630(param_1 + 0x398,plVar11);
          break;
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(int *)(lVar8 + 0x18));
    }
    puVar4 = PTR_DAT_0727fc18;
    lVar8 = *(long *)(param_1 + 0x398);
    if (lVar8 == 0) {
      if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_06bb2b08(*(undefined8 *)
                    Method_Oculus_Voice_Dictation_AppDictationExperience_OnRequestInit__,param_1,0);
      return;
    }
    lVar9 = *(long *)PTR_DAT_0727fc18;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar9 = *(long *)puVar4;
    }
    FUN_06b25420(lVar8,**(undefined8 **)(lVar9 + 0xb8),(*(undefined8 **)(lVar9 + 0xb8))[1],
                 *(undefined8 *)(param_1 + 0x168),0);
    puVar6 = Method_Oculus_Voice_Dictation_AppDictationExperience_OnPlatformServiceNotAvailable__;
    puVar5 = Method_UnityEngine_UIElements_TextValueField<uint>_get_formatString__;
    puVar3 = PTR_DAT_072798f8;
    lVar8 = *(long *)(param_1 + 0x170);
    if (lVar8 != 0) {
      iVar15 = 0;
      do {
        if (*(int *)(lVar8 + 0x18) <= iVar15) {
          if (*(long *)(param_1 + 0x398) != 0) {
            FUN_06b254ec(*(long *)(param_1 + 0x398),0,0);
            uVar14 = *(undefined8 *)(param_1 + 0x398);
            uVar13 = thunk_FUN_032a56a0(*(undefined8 *)
                                         Method_Unity_VisualScripting_Subtract<Vector3>__ctor__);
            FUN_06a6411c(uVar13,uVar14,0);
            *(undefined8 *)(param_1 + 0x390) = uVar13;
            thunk_FUN_0333a630(param_1 + 0x390,uVar13);
            return;
          }
          break;
        }
        lVar8 = FUN_041e29a8(lVar8,iVar15,*(undefined8 *)puVar5);
        if (lVar8 == 0) break;
        uVar13 = *(undefined8 *)(lVar8 + 0x20);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar7 = FUN_06be9890(uVar13,0,0);
        if ((uVar7 & 1) == 0) {
          local_98 = *(undefined8 *)(lVar8 + 0x28);
          uStack_90 = *(undefined8 *)(lVar8 + 0x30);
          uVar13 = thunk_FUN_032a52d0(*(undefined8 *)puVar4,&local_98);
          uVar13 = FUN_057a25c4(*(undefined8 *)puVar6,uVar13,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_032cd7c0(*(long *)puVar3);
          }
          FUN_06bb2b08(uVar13,param_1,0);
        }
        else {
          if (*(long *)(param_1 + 0x398) == 0) break;
          FUN_06b25420(*(long *)(param_1 + 0x398),*(undefined8 *)(lVar8 + 0x28),
                       *(undefined8 *)(lVar8 + 0x30),*(undefined8 *)(lVar8 + 0x20),0);
        }
        lVar8 = *(long *)(param_1 + 0x170);
        iVar15 = iVar15 + 1;
      } while (lVar8 != 0);
    }
  }
LAB_06b1c188:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


