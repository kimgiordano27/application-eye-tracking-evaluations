/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxLoadFromMemory
ENTRY_POINT: 03697d70
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 158
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_1;ray_or_cast_sink_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_65_0__ovrp_KtxLoadFromMemory(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long lVar7;
  long *plVar8;
  
  thunk_FUN_01efb3a4(
                    Method_OVRTrackedKeyboard_<UpdateKeyboardPose>d__95_System_Collections_IEnumerator_Reset__
                    );
  thunk_FUN_01efb3a4(
                    Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__92_System_Collections_IEnumerator_Reset__
                    );
  thunk_FUN_01efb3a4(
                    Method_OVRTrackedKeyboardSampleControls_<SetShaderCoroutine>d__19_System_Collections_IEnumerator_Reset__
                    );
  thunk_FUN_01efb3a4(Method_OVRVirtualKeyboard_<>c_<LoadRuntimeVirtualKeyboardMesh>b__75_0__);
  thunk_FUN_01efb3a4(Method_OVRVirtualKeyboard_<>c_<PopulateCollision>b__77_0__);
  thunk_FUN_01efb3a4(Method_OVRVirtualKeyboard_BaseInputSource_OnUpdatedAnchors__);
  thunk_FUN_01efb3a4(Method_OVRVirtualKeyboard_HandInputSource__ctor__);
  *(undefined1 *)(unaff_x20 + 0xf03) = 1;
  if (*(char *)(unaff_x19 + 0x78) == '\0') {
    return;
  }
  lVar7 = *(long *)(unaff_x19 + 0x20);
  uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                              Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
                            );
  FUN_034f6024();
  puVar1 = Method_System_IO_FileSystem_LinkOrCopyFile__;
  if (lVar7 != 0) {
    FUN_02f4750c(lVar7,uVar3,*(undefined8 *)Method_OVRTrackedKeyboard_<>c_<_ctor>b__110_1__);
    lVar7 = *(long *)(unaff_x19 + 0x20);
    uVar3 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
    FUN_02ab0374();
    if (lVar7 != 0) {
      FUN_02f4713c(lVar7,uVar3,
                   *(undefined8 *)
                    Method_OVRTrackedKeyboard_<StartKeyboardTrackingCoroutine>d__93_System_Collections_IEnumerator_Reset__
                  );
      puVar1 = Method_OVRTrackedKeyboard_<Start>d__85_System_Collections_IEnumerator_Reset__;
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        plVar8 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0xd8);
        uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_OVRTrackedKeyboard_<Start>d__85_System_Collections_IEnumerator_Reset__
                                  );
        System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                  ();
        puVar2 = 
        Method_OVRTrackedKeyboardSampleControls_<SetShaderCoroutine>d__19_System_Collections_IEnumerator_Reset__
        ;
        if (plVar8 != (long *)0x0) {
          lVar7 = *plVar8;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) ==
                  *(long *)
                   Method_OVRTrackedKeyboardSampleControls_<SetShaderCoroutine>d__19_System_Collections_IEnumerator_Reset__
                 ) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_03697f0c;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)
                   FUN_01ecb238(plVar8,*(long *)
                                        Method_OVRTrackedKeyboardSampleControls_<SetShaderCoroutine>d__19_System_Collections_IEnumerator_Reset__
                                ,0);
LAB_03697f0c:
          (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
          if (*(long *)(unaff_x19 + 0x20) != 0) {
            plVar8 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0xe0);
            uVar3 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
            System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                      ();
            if (plVar8 != (long *)0x0) {
              lVar7 = *plVar8;
              uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar5 != 0) {
                piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
                    puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                    goto LAB_03697f9c;
                  }
                  uVar5 = uVar5 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar5 != 0);
              }
              puVar4 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_03697f9c:
                    /* WARNING: Could not recover jumptable at 0x03697fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
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


