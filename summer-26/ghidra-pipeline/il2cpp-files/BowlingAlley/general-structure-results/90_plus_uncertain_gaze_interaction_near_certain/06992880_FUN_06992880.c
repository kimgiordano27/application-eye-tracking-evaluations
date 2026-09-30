/*
FUNCTION_NAME: FUN_06992880
ENTRY_POINT: 06992880
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 207
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_17;weak_xr_or_state_hits_17;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_5;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_5
*/


undefined8 FUN_06992880(long param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar2 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>__ctor__;
  if ((DAT_076e1d92 & 1) == 0) {
    thunk_FUN_032e1da0(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>_Dispose__);
    thunk_FUN_032e1da0(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    thunk_FUN_032e1da0(PTR_DAT_072891b8);
    thunk_FUN_032e1da0(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>_Dispose__);
    thunk_FUN_032e1da0(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>__ctor__);
    thunk_FUN_032e1da0(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__);
    thunk_FUN_032e1da0(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>__ctor__);
    thunk_FUN_032e1da0(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__);
    thunk_FUN_032e1da0(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__);
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_NativeArray<OvrAvatarMaterialExtension_ExtensionEntry<int>>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_Collections_NativeArray<OvrAvatarMaterialExtension_ExtensionEntry<int>>_GetEnumerator__
                      );
    DAT_076e1d92 = 1;
  }
  uVar4 = FUN_0561a334(param_1,*(undefined8 *)puVar2);
  puVar2 = 
  Method_Unity_Collections_NativeArray<OvrAvatarMaterialExtension_ExtensionEntry<int>>_GetEnumerator__
  ;
  if ((uVar4 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    plVar7 = (long *)(param_1 + 0xe0);
    if (*plVar7 == 0) {
      if ((*(long *)(param_1 + 0x90) == 0) ||
         (lVar9 = *(long *)(*(long *)(param_1 + 0x90) + 0x18), lVar9 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar8 = *(undefined8 *)(param_1 + 0x68);
      lVar5 = *(long *)
               Method_Unity_Collections_NativeArray<OvrAvatarMaterialExtension_ExtensionEntry<int>>_GetEnumerator__
      ;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar2;
      }
      iVar1 = *(int *)(lVar9 + 0x18);
      lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar9 == 0) {
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar5 = *(long *)puVar2;
        }
        uVar10 = **(undefined8 **)(lVar5 + 0xb8);
        lVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                    Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>__ctor__
                                  );
        FUN_055ca0a0(lVar9,uVar10,
                     *(undefined8 *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__
                     ,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
        *plVar6 = lVar9;
        thunk_FUN_0333a630(plVar6,lVar9);
      }
      iVar3 = FUN_0398bb40(uVar8,lVar9,
                           *(undefined8 *)
                            Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>_Dispose__);
      if (iVar3 == iVar1) {
        lVar9 = *(long *)puVar2;
        uVar8 = *(undefined8 *)(param_1 + 0x68);
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar9 = *(long *)puVar2;
        }
        lVar5 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
        if (lVar5 == 0) {
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar9 = *(long *)puVar2;
          }
          uVar10 = **(undefined8 **)(lVar9 + 0xb8);
          lVar5 = thunk_FUN_032a56a0(*(undefined8 *)
                                      Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>__ctor__
                                    );
          FUN_055ca0a0(lVar5,uVar10,
                       *(undefined8 *)
                        Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__,0);
          plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
          *plVar6 = lVar5;
          thunk_FUN_0333a630(plVar6,lVar5);
        }
        uVar8 = FUN_039a7bf0(uVar8,lVar5,
                             *(undefined8 *)
                              Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>_Dispose__);
        lVar9 = *(long *)puVar2;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(lVar9);
          lVar9 = *(long *)puVar2;
        }
        lVar5 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
        if (lVar5 == 0) {
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_032cd7c0(lVar9);
            lVar9 = *(long *)puVar2;
          }
          uVar10 = **(undefined8 **)(lVar9 + 0xb8);
          lVar5 = thunk_FUN_032a56a0(*(undefined8 *)
                                      Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__
                                    );
          FUN_055ca58c(lVar5,uVar10,
                       *(undefined8 *)
                        Method_Unity_Collections_NativeArray<OvrAvatarMaterialExtension_ExtensionEntry<int>>__ctor__
                       ,0);
          plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
          *plVar6 = lVar5;
          thunk_FUN_0333a630(plVar6,lVar5);
        }
        uVar8 = FUN_03996c3c(uVar8,lVar5,
                             *(undefined8 *)
                              Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
        lVar9 = FUN_039a6ef0(uVar8,*(undefined8 *)PTR_DAT_072891b8);
        *plVar7 = lVar9;
        thunk_FUN_0333a630(plVar7,lVar9);
      }
    }
    uVar8 = 1;
  }
  return uVar8;
}


