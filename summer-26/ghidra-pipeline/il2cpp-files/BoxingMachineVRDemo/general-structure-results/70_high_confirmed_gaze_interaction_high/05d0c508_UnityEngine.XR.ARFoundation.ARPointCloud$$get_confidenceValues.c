/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.ARPointCloud$$get_confidenceValues
ENTRY_POINT: 05d0c508
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: confirmed_gaze_interaction_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_gaze_interaction
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo;active_gaze_retrieval;active_gaze_interaction
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_XR_ARFoundation_ARPointCloud__get_confidenceValues(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  FUN_02d6084c();
  FUN_02d6084c(Method_System_Collections_Generic_List<XmlSchemaElement>_get_Item__);
  FUN_02d6084c(Method_System_Collections_Generic_List<XmlSchemaObject>__ctor__);
  FUN_02d6084c(Method_System_Collections_Generic_List<XmlSchemaObject>_Add__);
  FUN_02d6084c(Method_System_Collections_Generic_List<XmlSchemaObject>_get_Count__);
  FUN_02d6084c(Method_System_Collections_Generic_List<XmlSchemaObject>_get_Item__);
  FUN_02d6084c(Method_System_Collections_Generic_List<fsConverter>__ctor__);
  FUN_02d6084c(PTR_DAT_0678c300);
  FUN_02d6084c(PTR_DAT_0678c958);
  FUN_02d6084c(PTR_DAT_0678d300);
  *(undefined1 *)(unaff_x20 + 0x9f1) = 1;
  FUN_05d429ac();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 8) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<XRView>_get_Item__);
    FUN_04d5ce24(uVar2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<TrackedDeviceRaycaster_RaycastHitData>_get_Item__
                 ,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *puVar3 = uVar2;
    thunk_FUN_02dd37b4(puVar3,uVar2);
  }
  if (unaff_x19 != 0) {
    FUN_035d1144();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x10) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<XRView>_set_Item__);
      FUN_04d642fc(uVar2,uVar4,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<TrackedPoseDriver_TrackedPose>_Add__,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
      *puVar3 = uVar2;
      thunk_FUN_02dd37b4(puVar3,uVar2);
    }
    FUN_035d17bc();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x18) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<XmlNode>__ctor__);
      FUN_04d5dd8c(uVar2,uVar4,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<TrackedPoseDriver_TrackedPose>_get_Count__
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
      *puVar3 = uVar2;
      thunk_FUN_02dd37b4(puVar3,uVar2);
    }
    FUN_035d1480();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x20) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<XmlAttribute>__ctor__);
      FUN_04d65ff8(uVar2,uVar4,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<TrackedPoseDriver_TrackedPose>_get_Item__
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
      *puVar3 = uVar2;
      thunk_FUN_02dd37b4(puVar3,uVar2);
    }
    FUN_035d19e4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x28) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<XmlQualifiedName>__ctor__);
      FUN_04d5e05c(uVar2,uVar4,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<TrackedPoseDriverDataDescription_PoseData>__ctor__
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28);
      *puVar3 = uVar2;
      thunk_FUN_02dd37b4(puVar3,uVar2);
    }
    FUN_035d1594();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x30) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<XRView>_get_Count__);
      FUN_04d660ac(uVar2,uVar4,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<TrackedPoseDriverDataDescription_PoseData>_Add__
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
      *puVar3 = uVar2;
      thunk_FUN_02dd37b4(puVar3,uVar2);
    }
    FUN_035d1af8();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x38) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<XRView>_Clear__);
      FUN_04d5ea34(uVar2,uVar4,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<TrackedPoseDriverDataDescription_PoseData>_get_Count__
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x38);
      *puVar3 = uVar2;
      thunk_FUN_02dd37b4(puVar3,uVar2);
    }
    FUN_035d16a8();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x40) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<XmlNode>_ToArray__);
      FUN_04d662c8(uVar2,uVar4,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<TrackedPoseDriverDataDescription_PoseData>_get_Item__
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x40);
      *puVar3 = uVar2;
      thunk_FUN_02dd37b4(puVar3,uVar2);
    }
    FUN_035d1c0c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x48) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<XmlNode>_Add__);
      FUN_04d648cc(uVar2,uVar4,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<TunnelingVignetteController_ProviderRecord>__ctor__
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x48);
      *puVar3 = uVar2;
      thunk_FUN_02dd37b4(puVar3,uVar2);
    }
    FUN_035d18d0();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x50) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Collections_Generic_List<XRView>__ctor__);
      FUN_04d5d36c(uVar2,uVar4,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<TunnelingVignetteController_ProviderRecord>_Add__
                   ,0);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x50);
      *puVar3 = uVar2;
      thunk_FUN_02dd37b4(puVar3,uVar2);
    }
    FUN_035d1258();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x58) == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x22;
      }
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<XRView>_Add__
                                );
      FUN_04d5d4d4(uVar2,uVar4,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<TrackedPoseDriver_TrackedPose>__ctor__,0)
      ;
      puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x58);
      *puVar3 = uVar2;
      thunk_FUN_02dd37b4(puVar3,uVar2);
    }
    FUN_035d136c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


