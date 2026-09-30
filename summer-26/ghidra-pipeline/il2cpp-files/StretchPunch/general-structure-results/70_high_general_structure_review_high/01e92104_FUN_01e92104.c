/*
FUNCTION_NAME: FUN_01e92104
ENTRY_POINT: 01e92104
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_10;telemetry_or_network_hits_9
*/


void FUN_01e92104(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  float fVar6;
  
  if ((DAT_044a2d86 & 1) == 0) {
    FUN_01d7d918(Field_OVRPassthroughLayer_DeferredPassthroughMeshAddition_gameObject);
    FUN_01d7d918(Field_OVRPassthroughLayer_SerializedSurfaceGeometry_meshFilter);
    FUN_01d7d918(Field_OVRPassthroughLayer_Settings_colorLutTargetTexture);
    FUN_01d7d918(Field_OVRRaycaster_RaycastHit_graphic);
    FUN_01d7d918(Field_OVRSceneLoader_SceneInfo_scenes);
    FUN_01d7d918(Field_OVRSpaceQuery_Options__uuidFilter);
    DAT_044a2d86 = 1;
  }
  puVar2 = Field_OVRPassthroughLayer_DeferredPassthroughMeshAddition_gameObject;
  if (*(char *)(param_1 + 0x40) != '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x38) == 0)
  goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
  uVar3 = FUN_02ad53c4(*(long *)(param_1 + 0x38),6,
                       *(undefined8 *)
                        Field_OVRPassthroughLayer_DeferredPassthroughMeshAddition_gameObject);
  if ((uVar3 & 1) == 0) {
    lVar4 = FUN_01e868d0();
    if (lVar4 == 0) goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
    uVar3 = FUN_01e8834c(lVar4,*(undefined4 *)(param_1 + 0x20));
    if ((uVar3 & 1) == 0) goto LAB_01e92228;
    if (*(long *)(param_1 + 0x38) == 0)
    goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
    FUN_02ad5454(*(long *)(param_1 + 0x38),6,1,
                 *(undefined8 *)Field_OVRPassthroughLayer_SerializedSurfaceGeometry_meshFilter);
    lVar4 = thunk_FUN_01de27b8(*(undefined8 *)
                                Field_OVRPassthroughLayer_Settings_colorLutTargetTexture);
    FUN_01eda9fc(lVar4,0);
    if (lVar4 == 0) goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
    *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(param_1 + 0x28);
    thunk_FUN_01e10808();
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(lVar4 + 0x10) = 1;
    *(undefined4 *)(lVar4 + 0x20) = uVar1;
    puVar5 = (undefined8 *)Field_OVRSpaceQuery_Options__uuidFilter;
LAB_01e922a8:
    FUN_01eda170(*puVar5,lVar4,0);
  }
  else {
LAB_01e92228:
    if (*(long *)(param_1 + 0x38) == 0)
    goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
    uVar3 = FUN_02ad53c4(*(long *)(param_1 + 0x38),6,*(undefined8 *)puVar2);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_01e868d0();
      if (lVar4 == 0) goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
      uVar3 = FUN_01e8834c(lVar4,*(undefined4 *)(param_1 + 0x20));
      if ((uVar3 & 1) == 0) {
        if (*(long *)(param_1 + 0x38) == 0)
        goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
        FUN_02ad5454(*(long *)(param_1 + 0x38),6,0,
                     *(undefined8 *)Field_OVRPassthroughLayer_SerializedSurfaceGeometry_meshFilter);
        lVar4 = thunk_FUN_01de27b8(*(undefined8 *)Field_OVRRaycaster_RaycastHit_graphic);
        FUN_01edaebc(lVar4,0);
        if (lVar4 == 0) goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(param_1 + 0x20);
        *(undefined4 *)(lVar4 + 0x14) = 1;
        puVar5 = (undefined8 *)Field_OVRSceneLoader_SceneInfo_scenes;
        goto LAB_01e922a8;
      }
    }
  }
  if (*(long *)(param_1 + 0x38) == 0)
  goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
  uVar3 = FUN_02ad53c4(*(long *)(param_1 + 0x38),2,*(undefined8 *)puVar2);
  if ((uVar3 & 1) != 0) goto LAB_01e9235c;
  lVar4 = FUN_01e868d0();
  if (lVar4 == 0) goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar3 = FUN_01e86c7c();
    if ((uVar3 & 1) == 0) goto LAB_01e9235c;
LAB_01e922e8:
    if (*(long *)(param_1 + 0x38) == 0)
    goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
    FUN_02ad5454(*(long *)(param_1 + 0x38),2,1,
                 *(undefined8 *)Field_OVRPassthroughLayer_SerializedSurfaceGeometry_meshFilter);
    lVar4 = thunk_FUN_01de27b8(*(undefined8 *)
                                Field_OVRPassthroughLayer_Settings_colorLutTargetTexture);
    FUN_01eda9fc(lVar4,0);
    if (lVar4 == 0) goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
    *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(param_1 + 0x28);
    thunk_FUN_01e10808();
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(lVar4 + 0x10) = 0x1b;
    *(undefined4 *)(lVar4 + 0x20) = uVar1;
    puVar5 = (undefined8 *)Field_OVRSpaceQuery_Options__uuidFilter;
LAB_01e923ec:
    FUN_01eda170(*puVar5,lVar4,0);
  }
  else {
    uVar3 = FUN_01e86db4();
    if ((uVar3 & 1) != 0) goto LAB_01e922e8;
LAB_01e9235c:
    if (*(long *)(param_1 + 0x38) == 0)
    goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
    uVar3 = FUN_02ad53c4(*(long *)(param_1 + 0x38),2,*(undefined8 *)puVar2);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_01e868d0();
      if (lVar4 == 0) goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
      if (*(int *)(param_1 + 0x20) == 0) {
        uVar3 = FUN_01e86c7c();
      }
      else {
        uVar3 = FUN_01e86db4();
      }
      if ((uVar3 & 1) != 0) goto LAB_01e923fc;
      if (*(long *)(param_1 + 0x38) == 0)
      goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
      FUN_02ad5454(*(long *)(param_1 + 0x38),2,0,
                   *(undefined8 *)Field_OVRPassthroughLayer_SerializedSurfaceGeometry_meshFilter);
      lVar4 = thunk_FUN_01de27b8(*(undefined8 *)Field_OVRRaycaster_RaycastHit_graphic);
      FUN_01edaebc(lVar4,0);
      if (lVar4 == 0) goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
      *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(lVar4 + 0x14) = 0x1b;
      puVar5 = (undefined8 *)Field_OVRSceneLoader_SceneInfo_scenes;
      goto LAB_01e923ec;
    }
  }
LAB_01e923fc:
  if (*(long *)(param_1 + 0x38) == 0)
  goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
  uVar3 = FUN_02ad53c4(*(long *)(param_1 + 0x38),3,*(undefined8 *)puVar2);
  if ((uVar3 & 1) == 0) {
    lVar4 = FUN_01e868d0();
    if (lVar4 == 0) goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
    if (*(int *)(param_1 + 0x20) == 0) {
      fVar6 = (float)FUN_01e86ebc();
    }
    else {
      fVar6 = (float)FUN_01e86f94();
    }
    if (fVar6 <= 0.5) goto LAB_01e924a8;
    if (*(long *)(param_1 + 0x38) == 0)
    goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
    FUN_02ad5454(*(long *)(param_1 + 0x38),3,1,
                 *(undefined8 *)Field_OVRPassthroughLayer_SerializedSurfaceGeometry_meshFilter);
    lVar4 = thunk_FUN_01de27b8(*(undefined8 *)
                                Field_OVRPassthroughLayer_Settings_colorLutTargetTexture);
    FUN_01eda9fc(lVar4,0);
    if (lVar4 == 0) goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
    *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(param_1 + 0x28);
    thunk_FUN_01e10808();
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(lVar4 + 0x10) = 2;
    *(undefined4 *)(lVar4 + 0x20) = uVar1;
    puVar5 = (undefined8 *)Field_OVRSpaceQuery_Options__uuidFilter;
LAB_01e9253c:
    FUN_01eda170(*puVar5,lVar4,0);
  }
  else {
LAB_01e924a8:
    if (*(long *)(param_1 + 0x38) == 0)
    goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
    uVar3 = FUN_02ad53c4(*(long *)(param_1 + 0x38),3,*(undefined8 *)puVar2);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_01e868d0();
      if (lVar4 == 0) goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
      if (*(int *)(param_1 + 0x20) == 0) {
        fVar6 = (float)FUN_01e86ebc();
      }
      else {
        fVar6 = (float)FUN_01e86f94();
      }
      if (fVar6 < 0.5) {
        if (*(long *)(param_1 + 0x38) == 0)
        goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
        FUN_02ad5454(*(long *)(param_1 + 0x38),3,0,
                     *(undefined8 *)Field_OVRPassthroughLayer_SerializedSurfaceGeometry_meshFilter);
        lVar4 = thunk_FUN_01de27b8(*(undefined8 *)Field_OVRRaycaster_RaycastHit_graphic);
        FUN_01edaebc(lVar4,0);
        if (lVar4 == 0) goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(param_1 + 0x20);
        *(undefined4 *)(lVar4 + 0x14) = 2;
        puVar5 = (undefined8 *)Field_OVRSceneLoader_SceneInfo_scenes;
        goto LAB_01e9253c;
      }
    }
  }
  if (*(long *)(param_1 + 0x38) == 0)
  goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
  uVar3 = FUN_02ad53c4(*(long *)(param_1 + 0x38),4,*(undefined8 *)puVar2);
  if ((uVar3 & 1) == 0) {
    lVar4 = FUN_01e868d0();
    if (lVar4 == 0) goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
    if (*(int *)(param_1 + 0x20) == 0) {
      fVar6 = (float)FUN_01e86f28();
    }
    else {
      fVar6 = (float)FUN_01e87000();
    }
    if (0.5 < fVar6) {
      if (*(long *)(param_1 + 0x38) != 0) {
        FUN_02ad5454(*(long *)(param_1 + 0x38),4,1,
                     *(undefined8 *)Field_OVRPassthroughLayer_SerializedSurfaceGeometry_meshFilter);
        lVar4 = thunk_FUN_01de27b8(*(undefined8 *)
                                    Field_OVRPassthroughLayer_Settings_colorLutTargetTexture);
        FUN_01eda9fc(lVar4,0);
        if (lVar4 == 0) goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
        *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(param_1 + 0x28);
        thunk_FUN_01e10808();
        uVar1 = *(undefined4 *)(param_1 + 0x20);
        *(undefined4 *)(lVar4 + 0x10) = 0x1c;
        *(undefined4 *)(lVar4 + 0x20) = uVar1;
        puVar5 = (undefined8 *)Field_OVRSpaceQuery_Options__uuidFilter;
        goto LAB_01e9268c;
      }
      goto System_Array__InternalArray__Insert<OVRTask_Callback<bool>>;
    }
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar3 = FUN_02ad53c4(*(long *)(param_1 + 0x38),4,*(undefined8 *)puVar2);
    if ((uVar3 & 1) == 0) {
      return;
    }
    lVar4 = FUN_01e868d0();
    if (lVar4 != 0) {
      if (*(int *)(param_1 + 0x20) == 0) {
        fVar6 = (float)FUN_01e86f28();
      }
      else {
        fVar6 = (float)FUN_01e87000();
      }
      if (0.5 <= fVar6) {
        return;
      }
      if (*(long *)(param_1 + 0x38) != 0) {
        FUN_02ad5454(*(long *)(param_1 + 0x38),4,0,
                     *(undefined8 *)Field_OVRPassthroughLayer_SerializedSurfaceGeometry_meshFilter);
        lVar4 = thunk_FUN_01de27b8(*(undefined8 *)Field_OVRRaycaster_RaycastHit_graphic);
        FUN_01edaebc(lVar4,0);
        if (lVar4 != 0) {
          *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(param_1 + 0x20);
          *(undefined4 *)(lVar4 + 0x14) = 0x1c;
          puVar5 = (undefined8 *)Field_OVRSceneLoader_SceneInfo_scenes;
LAB_01e9268c:
          FUN_01eda170(*puVar5,lVar4,0);
          return;
        }
      }
    }
  }
System_Array__InternalArray__Insert<OVRTask_Callback<bool>>:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


