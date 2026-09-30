/*
FUNCTION_NAME: OVRPlugin.Ktx$$GetKtxTextureHeight
ENTRY_POINT: 03697fc0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 162
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_1;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Ktx__GetKtxTextureHeight(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long *plVar9;
  
  if ((DAT_04833f04 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVRTrackedKeyboard_<Start>d__85_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01efb3a4(Method_System_IO_FileSystem_LinkOrCopyFile__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
                      );
    thunk_FUN_01efb3a4(
                      Method_OVRTrackedKeyboard_<UpdateKeyboardPose>d__95_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01efb3a4(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__92_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01efb3a4(
                      Method_OVRTrackedKeyboard_<InitializeHandPresenceData>d__86_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01efb3a4(Method_OVRVirtualKeyboard_InteractorRootTransformOverride_Enqueue__);
    thunk_FUN_01efb3a4(
                      Method_OVRTrackedKeyboardSampleControls_<SetShaderCoroutine>d__19_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01efb3a4(Method_OVRVirtualKeyboard_<>c_<LoadRuntimeVirtualKeyboardMesh>b__75_0__);
    thunk_FUN_01efb3a4(Method_OVRVirtualKeyboard_<>c_<PopulateCollision>b__77_0__);
    thunk_FUN_01efb3a4(Method_OVRVirtualKeyboard_BaseInputSource_OnUpdatedAnchors__);
    thunk_FUN_01efb3a4(Method_OVRVirtualKeyboard_HandInputSource__ctor__);
    DAT_04833f04 = 1;
  }
  puVar1 = Method_OVRVirtualKeyboard_BaseInputSource_OnUpdatedAnchors__;
  if (*(char *)(param_1 + 0x78) == '\0') {
    return;
  }
  lVar8 = *(long *)(param_1 + 0x20);
  uVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                              Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
                            );
  FUN_034f6024(uVar4,param_1,*(undefined8 *)puVar1,0);
  puVar2 = Method_OVRVirtualKeyboard_HandInputSource__ctor__;
  puVar1 = Method_System_IO_FileSystem_LinkOrCopyFile__;
  if (lVar8 != 0) {
    FUN_02f475a8(lVar8,uVar4,
                 *(undefined8 *)
                  Method_OVRTrackedKeyboard_<InitializeHandPresenceData>d__86_System_Collections_IEnumerator_Reset__
                );
    lVar8 = *(long *)(param_1 + 0x20);
    uVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
    FUN_02ab0374(uVar4,param_1,*(undefined8 *)puVar2,0);
    if (lVar8 != 0) {
      System_Collections_Generic_List<KeyValuePair<int,_object>>__System_Collections_IList_IndexOf
                (lVar8,uVar4,
                 *(undefined8 *)Method_OVRVirtualKeyboard_InteractorRootTransformOverride_Enqueue__)
      ;
      puVar2 = Method_OVRVirtualKeyboard_<>c_<LoadRuntimeVirtualKeyboardMesh>b__75_0__;
      puVar1 = Method_OVRTrackedKeyboard_<Start>d__85_System_Collections_IEnumerator_Reset__;
      if (*(long *)(param_1 + 0x20) != 0) {
        plVar9 = *(long **)(*(long *)(param_1 + 0x20) + 0xd8);
        uVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_OVRTrackedKeyboard_<Start>d__85_System_Collections_IEnumerator_Reset__
                                  );
        System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                  (uVar4,param_1,*(undefined8 *)puVar2,0);
        puVar2 = 
        Method_OVRTrackedKeyboardSampleControls_<SetShaderCoroutine>d__19_System_Collections_IEnumerator_Reset__
        ;
        if (plVar9 != (long *)0x0) {
          lVar8 = *plVar9;
          uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) ==
                  *(long *)
                   Method_OVRTrackedKeyboardSampleControls_<SetShaderCoroutine>d__19_System_Collections_IEnumerator_Reset__
                 ) {
                puVar5 = (undefined8 *)(lVar8 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                goto LAB_036981b4;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar5 = (undefined8 *)
                   FUN_01ecb238(plVar9,*(long *)
                                        Method_OVRTrackedKeyboardSampleControls_<SetShaderCoroutine>d__19_System_Collections_IEnumerator_Reset__
                                ,1);
LAB_036981b4:
          (*(code *)*puVar5)(plVar9,uVar4,puVar5[1]);
          puVar3 = Method_OVRVirtualKeyboard_<>c_<PopulateCollision>b__77_0__;
          if (*(long *)(param_1 + 0x20) != 0) {
            plVar9 = *(long **)(*(long *)(param_1 + 0x20) + 0xe0);
            uVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
            System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                      (uVar4,param_1,*(undefined8 *)puVar3,0);
            if (plVar9 != (long *)0x0) {
              lVar8 = *plVar9;
              uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                    puVar5 = (undefined8 *)(lVar8 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                    goto LAB_03698248;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 != 0);
              }
              puVar5 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,1);
LAB_03698248:
                    /* WARNING: Could not recover jumptable at 0x03698260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)*puVar5)(plVar9,uVar4,puVar5[1]);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


