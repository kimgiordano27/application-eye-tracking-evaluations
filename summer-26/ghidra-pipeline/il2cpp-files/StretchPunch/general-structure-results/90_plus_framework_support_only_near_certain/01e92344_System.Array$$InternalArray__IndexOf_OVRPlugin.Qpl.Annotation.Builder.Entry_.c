/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 01e92344
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 179
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_4;telemetry_or_network_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4
*/


void System_Array__InternalArray__IndexOf<OVRPlugin_Qpl_Annotation_Builder_Entry>(void)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined4 in_w8;
  undefined8 *puVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  float fVar5;
  
  *(undefined4 *)(unaff_x20 + 0x20) = in_w8;
  FUN_01eda170(*(undefined8 *)Field_OVRSpaceQuery_Options__uuidFilter);
  if (*(long *)(unaff_x19 + 0x38) == 0)
  goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
  uVar2 = FUN_02ad53c4(*(long *)(unaff_x19 + 0x38),3,*unaff_x21);
  if ((uVar2 & 1) == 0) {
    lVar3 = FUN_01e868d0();
    if (lVar3 == 0) goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
    if (*(int *)(unaff_x19 + 0x20) == 0) {
      fVar5 = (float)FUN_01e86ebc();
    }
    else {
      fVar5 = (float)FUN_01e86f94();
    }
    if (fVar5 <= 0.5) goto LAB_01e924a8;
    if (*(long *)(unaff_x19 + 0x38) == 0)
    goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
    FUN_02ad5454(*(long *)(unaff_x19 + 0x38),3,1,
                 *(undefined8 *)Field_OVRPassthroughLayer_SerializedSurfaceGeometry_meshFilter);
    lVar3 = thunk_FUN_01de27b8(*(undefined8 *)
                                Field_OVRPassthroughLayer_Settings_colorLutTargetTexture);
    FUN_01eda9fc(lVar3,0);
    if (lVar3 == 0) goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
    *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(unaff_x19 + 0x28);
    thunk_FUN_01e10808();
    uVar1 = *(undefined4 *)(unaff_x19 + 0x20);
    *(undefined4 *)(lVar3 + 0x10) = 2;
    *(undefined4 *)(lVar3 + 0x20) = uVar1;
    puVar4 = (undefined8 *)Field_OVRSpaceQuery_Options__uuidFilter;
LAB_01e9253c:
    FUN_01eda170(*puVar4,lVar3,0);
  }
  else {
LAB_01e924a8:
    if (*(long *)(unaff_x19 + 0x38) == 0)
    goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
    uVar2 = FUN_02ad53c4(*(long *)(unaff_x19 + 0x38),3,*unaff_x21);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_01e868d0();
      if (lVar3 == 0) goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
      if (*(int *)(unaff_x19 + 0x20) == 0) {
        fVar5 = (float)FUN_01e86ebc();
      }
      else {
        fVar5 = (float)FUN_01e86f94();
      }
      if (fVar5 < 0.5) {
        if (*(long *)(unaff_x19 + 0x38) == 0)
        goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
        FUN_02ad5454(*(long *)(unaff_x19 + 0x38),3,0,
                     *(undefined8 *)Field_OVRPassthroughLayer_SerializedSurfaceGeometry_meshFilter);
        lVar3 = thunk_FUN_01de27b8(*(undefined8 *)Field_OVRRaycaster_RaycastHit_graphic);
        FUN_01edaebc(lVar3,0);
        if (lVar3 == 0) goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
        *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(unaff_x19 + 0x20);
        *(undefined4 *)(lVar3 + 0x14) = 2;
        puVar4 = (undefined8 *)Field_OVRSceneLoader_SceneInfo_scenes;
        goto LAB_01e9253c;
      }
    }
  }
  if (*(long *)(unaff_x19 + 0x38) == 0)
  goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
  uVar2 = FUN_02ad53c4(*(long *)(unaff_x19 + 0x38),4,*unaff_x21);
  if ((uVar2 & 1) == 0) {
    lVar3 = FUN_01e868d0();
    if (lVar3 == 0) goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
    if (*(int *)(unaff_x19 + 0x20) == 0) {
      fVar5 = (float)FUN_01e86f28();
    }
    else {
      fVar5 = (float)FUN_01e87000();
    }
    if (0.5 < fVar5) {
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        FUN_02ad5454(*(long *)(unaff_x19 + 0x38),4,1,
                     *(undefined8 *)Field_OVRPassthroughLayer_SerializedSurfaceGeometry_meshFilter);
        lVar3 = thunk_FUN_01de27b8(*(undefined8 *)
                                    Field_OVRPassthroughLayer_Settings_colorLutTargetTexture);
        FUN_01eda9fc(lVar3,0);
        if (lVar3 == 0) goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
        *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(unaff_x19 + 0x28);
        thunk_FUN_01e10808();
        uVar1 = *(undefined4 *)(unaff_x19 + 0x20);
        *(undefined4 *)(lVar3 + 0x10) = 0x1c;
        *(undefined4 *)(lVar3 + 0x20) = uVar1;
        puVar4 = (undefined8 *)Field_OVRSpaceQuery_Options__uuidFilter;
        goto LAB_01e9268c;
      }
      goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
    }
  }
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    uVar2 = FUN_02ad53c4(*(long *)(unaff_x19 + 0x38),4,*unaff_x21);
    if ((uVar2 & 1) == 0) {
      return;
    }
    lVar3 = FUN_01e868d0();
    if (lVar3 != 0) {
      if (*(int *)(unaff_x19 + 0x20) == 0) {
        fVar5 = (float)FUN_01e86f28();
      }
      else {
        fVar5 = (float)FUN_01e87000();
      }
      if (0.5 <= fVar5) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        FUN_02ad5454(*(long *)(unaff_x19 + 0x38),4,0,
                     *(undefined8 *)Field_OVRPassthroughLayer_SerializedSurfaceGeometry_meshFilter);
        lVar3 = thunk_FUN_01de27b8(*(undefined8 *)Field_OVRRaycaster_RaycastHit_graphic);
        FUN_01edaebc(lVar3,0);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(unaff_x19 + 0x20);
          *(undefined4 *)(lVar3 + 0x14) = 0x1c;
          puVar4 = (undefined8 *)Field_OVRSceneLoader_SceneInfo_scenes;
LAB_01e9268c:
          FUN_01eda170(*puVar4,lVar3,0);
          return;
        }
      }
    }
  }
System_Array__InternalArray__Insert<OVRTask_Callback<bool>>:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


