/*
FUNCTION_NAME: FUN_035b0a9c
ENTRY_POINT: 035b0a9c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_15;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_035b0a9c(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  puVar3 = Method_Audiosystem_Audio_<>c_<Awake>b__9_1__;
  if ((DAT_04833564 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(
                      Method_Meta_WitAi_Data_AudioBuffer_<WaitForMicToStart>d__30_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01efb3a4(Method_AudioClipAudioSource_<>c__DisplayClass34_0_<SetActiveClip>b__0__);
    thunk_FUN_01efb3a4(
                      Method_AudioClipAudioSource_<ProcessClip>d__25_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01efb3a4(
                      Method_Audiosystem_AudioExtensions_<FollowRoutine>d__11_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01efb3a4(
                      Method_Audiosystem_AudioExtensions_<PlayAndReturnRoutine>d__12_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01efb3a4(
                      Method_Audiosystem_AudioExtensions_<PlayNextAndReturnRoutine>d__9_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01efb3a4(Method_System_Version_CompareTo__);
    thunk_FUN_01efb3a4(Method_OVR_AudioManager_<>c_<FindFreeEmitter>b__77_1__);
    thunk_FUN_01efb3a4(Method_Audiosystem_Audio_<>c_<Awake>b__9_1__);
    thunk_FUN_01efb3a4(Method_OVR_AudioManager_<>c__DisplayClass77_0_<FindFreeEmitter>b__0__);
    thunk_FUN_01efb3a4(
                      Method_Meta_WitAi_Requests_AudioStreamHandler_<>c__DisplayClass24_0_<ReceiveData>b__0__
                      );
    thunk_FUN_01efb3a4(
                      Method_Meta_WitAi_Requests_AudioStreamHandler_<>c__DisplayClass36_0_<GetClipFromRawDataAsync>b__0__
                      );
    thunk_FUN_01efb3a4(
                      Method_Meta_WitAi_Requests_AudioStreamHandler_<>c__DisplayClass36_0_<GetClipFromRawDataAsync>b__1__
                      );
    thunk_FUN_01efb3a4(
                      Method_Meta_WitAi_Requests_AudioStreamHandler_<FinalWait>d__31_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Interaction_HandGrab_AutoMoveTowardsTarget_<>c_<_ctor>b__18_0__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseRuntimePanel_<>c_<_cctor>b__47_0__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_BaseTreeViewController_<>c__DisplayClass20_0_<PostInitRegistration>b__0__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_BaseVerticalCollectionView_<>c__DisplayClass163_0_<GetRootElementForId>b__0__
                      );
    thunk_FUN_01efb3a4(Method_BasicSceneManager_<>c__DisplayClass2_0_<CreateSceneAnchors>b__0__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_UIR_BestFitAllocator_BlockPool_CreateBlock__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_UIR_BestFitAllocator_BlockPool_ResetBlock__);
    thunk_FUN_01efb3a4(Method_Oculus_Interaction_BestHoverInteractorGroup_<>c_<_cctor>b__34_0__);
    thunk_FUN_01efb3a4(Method_Oculus_Interaction_BestSelectInteractorGroup_<>c_<_cctor>b__34_0__);
    DAT_04833564 = 1;
  }
  puVar5 = 
  Method_UnityEngine_UIElements_BaseVerticalCollectionView_<>c__DisplayClass163_0_<GetRootElementForId>b__0__
  ;
  puVar2 = Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__;
  puVar1 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
  lVar7 = FUN_01f29fb4();
  lVar8 = FUN_035b08ac(*(undefined8 *)puVar3);
  if ((lVar8 == 0) ||
     (uVar9 = thunk_FUN_0340e318(lVar8,**(undefined8 **)(*(long *)puVar1 + 0xb8),0),
     (uVar9 & 1) != 0)) {
    puVar4 = 
    Method_UnityEngine_UIElements_BaseTreeViewController_<>c__DisplayClass20_0_<PostInitRegistration>b__0__
    ;
    puVar3 = Method_System_Version_CompareTo__;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar10 = System_Threading_OSSpecificSynchronizationContext__Post(lVar7,*(undefined8 *)puVar4,0);
    lVar8 = System_Threading_OSSpecificSynchronizationContext__Post(uVar10,*(undefined8 *)puVar3,0);
  }
  lVar11 = FUN_035b08ac(*(undefined8 *)puVar5);
  if ((lVar11 == 0) ||
     (uVar9 = thunk_FUN_0340e318(lVar11,**(undefined8 **)(*(long *)puVar1 + 0xb8),0),
     (uVar9 & 1) != 0)) {
    puVar3 = Method_OVR_AudioManager_<>c_<FindFreeEmitter>b__77_1__;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar11 = System_Threading_OSSpecificSynchronizationContext__Post(lVar7,*(undefined8 *)puVar3,0);
  }
  switch(param_1) {
  case 0:
  case 0x10:
    puVar14 = (undefined8 *)
              Method_UnityEngine_UIElements_UIR_BestFitAllocator_BlockPool_ResetBlock__;
    puVar15 = (undefined8 *)Method_Oculus_Interaction_BestHoverInteractorGroup_<>c_<_cctor>b__34_0__
    ;
    break;
  default:
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar10 = thunk_FUN_01f117cc();
    uVar12 = thunk_FUN_01efb3a4(
                               Method_Oculus_Interaction_BestSelectInteractorGroup_<>c_<_cctor>b__34_1__
                               );
    FUN_034f6754(uVar10,uVar12,0);
    uVar12 = thunk_FUN_01efb3a4(
                               Method_Oculus_Interaction_BestSelectInteractorGroup_<>c_<_cctor>b__34_2__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar10,uVar12);
  case 2:
  case 7:
  case 8:
  case 9:
  case 0xb:
  case 0x11:
  case 0x13:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1b:
  case 0x21:
  case 0x22:
  case 0x24:
  case 0x25:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
    goto switchD_035b0cf8_caseD_2;
  case 5:
  case 0x28:
    return lVar7;
  case 6:
    iVar6 = FUN_01f29b24();
    if (iVar6 == 6) {
      puVar15 = (undefined8 *)
                Method_Meta_WitAi_Requests_AudioStreamHandler_<FinalWait>d__31_System_Collections_IEnumerator_Reset__
      ;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        puVar15 = (undefined8 *)
                  Method_Meta_WitAi_Requests_AudioStreamHandler_<FinalWait>d__31_System_Collections_IEnumerator_Reset__
        ;
      }
      goto LAB_035b0e28;
    }
    goto switchD_035b0cf8_caseD_2;
  case 0xd:
    iVar6 = FUN_01f29b24();
    puVar14 = (undefined8 *)
              Method_Audiosystem_AudioExtensions_<PlayAndReturnRoutine>d__12_System_Collections_IEnumerator_Reset__
    ;
    puVar15 = (undefined8 *)Method_UnityEngine_UIElements_BaseRuntimePanel_<>c_<_cctor>b__47_0__;
    if (iVar6 == 6) {
      puVar14 = (undefined8 *)Method_UnityEngine_UIElements_BaseRuntimePanel_<>c_<_cctor>b__47_0__;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        puVar14 = (undefined8 *)Method_UnityEngine_UIElements_BaseRuntimePanel_<>c_<_cctor>b__47_0__
        ;
      }
LAB_035b0ec0:
      lVar7 = System_Threading_OSSpecificSynchronizationContext__Post(lVar7,*puVar14,0);
      return lVar7;
    }
    break;
  case 0xe:
    puVar14 = (undefined8 *)
              Method_UnityEngine_UIElements_UIR_BestFitAllocator_BlockPool_CreateBlock__;
    puVar15 = (undefined8 *)Method_OVR_AudioManager_<>c__DisplayClass77_0_<FindFreeEmitter>b__0__;
    break;
  case 0x14:
    iVar6 = FUN_01f29b24();
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    puVar14 = (undefined8 *)
              Method_Oculus_Interaction_HandGrab_AutoMoveTowardsTarget_<>c_<_ctor>b__18_0__;
    puVar15 = (undefined8 *)
              Method_Meta_WitAi_Requests_AudioStreamHandler_<>c__DisplayClass36_0_<GetClipFromRawDataAsync>b__1__
    ;
    if (iVar6 != 6) goto LAB_035b0ec0;
LAB_035b0e28:
    lVar7 = FUN_034e5110(lVar7,*(undefined8 *)
                                Method_Meta_WitAi_Data_AudioBuffer_<WaitForMicToStart>d__30_System_Collections_IEnumerator_Reset__
                         ,*puVar15,0);
    return lVar7;
  case 0x15:
    puVar14 = (undefined8 *)
              Method_Audiosystem_AudioExtensions_<FollowRoutine>d__11_System_Collections_IEnumerator_Reset__
    ;
    puVar15 = (undefined8 *)
              Method_Meta_WitAi_Requests_AudioStreamHandler_<>c__DisplayClass36_0_<GetClipFromRawDataAsync>b__0__
    ;
    break;
  case 0x1a:
    goto switchD_035b0cf8_caseD_1a;
  case 0x1c:
    return lVar8;
  case 0x20:
    iVar6 = FUN_01f29b24();
    if (iVar6 == 6) {
      puVar15 = (undefined8 *)
                Method_Oculus_Interaction_BestSelectInteractorGroup_<>c_<_cctor>b__34_0__;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        puVar15 = (undefined8 *)
                  Method_Oculus_Interaction_BestSelectInteractorGroup_<>c_<_cctor>b__34_0__;
      }
      goto LAB_035b0e28;
    }
switchD_035b0cf8_caseD_2:
    plVar13 = *(long **)(*(long *)puVar1 + 0xb8);
    goto LAB_035b0d04;
  case 0x23:
    plVar13 = (long *)
              Method_Audiosystem_AudioExtensions_<PlayNextAndReturnRoutine>d__9_System_Collections_IEnumerator_Reset__
    ;
    goto LAB_035b0d04;
  case 0x26:
    iVar6 = FUN_01f29b24();
    plVar13 = (long *)
              Method_Meta_WitAi_Requests_AudioStreamHandler_<>c__DisplayClass24_0_<ReceiveData>b__0__
    ;
    if (iVar6 != 6) goto switchD_035b0cf8_caseD_2;
    goto LAB_035b0d04;
  case 0x27:
    iVar6 = FUN_01f29b24();
    puVar14 = (undefined8 *)
              Method_AudioClipAudioSource_<ProcessClip>d__25_System_Collections_IEnumerator_Reset__;
    puVar15 = (undefined8 *)Method_AudioClipAudioSource_<>c__DisplayClass34_0_<SetActiveClip>b__0__;
    if (iVar6 == 6) {
      puVar14 = (undefined8 *)
                Method_AudioClipAudioSource_<>c__DisplayClass34_0_<SetActiveClip>b__0__;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        puVar14 = (undefined8 *)
                  Method_AudioClipAudioSource_<>c__DisplayClass34_0_<SetActiveClip>b__0__;
      }
      goto LAB_035b0ec0;
    }
    break;
  case 0x2d:
    plVar13 = (long *)Method_BasicSceneManager_<>c__DisplayClass2_0_<CreateSceneAnchors>b__0__;
LAB_035b0d04:
    lVar11 = *plVar13;
switchD_035b0cf8_caseD_1a:
    return lVar11;
  }
  lVar7 = FUN_035b0f5c(lVar11,lVar7,*puVar14,*puVar15);
  return lVar7;
}


