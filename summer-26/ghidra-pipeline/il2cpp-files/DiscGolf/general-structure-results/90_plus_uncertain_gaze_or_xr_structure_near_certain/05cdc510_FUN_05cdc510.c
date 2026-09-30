/*
FUNCTION_NAME: FUN_05cdc510
ENTRY_POINT: 05cdc510
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 156
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_13;ray_or_cast_sink_hits_6;telemetry_or_network_hits_10;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_10
*/


/* WARNING: Removing unreachable block (ram,0x05cdca48) */

undefined8
FUN_05cdc510(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
            undefined1 *param_6)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined8 local_58;
  long *local_50;
  long local_48;
  
                    /* try { // try from 05cdc514 to 05ddcb07 has its CatchHandler @ 05cdbf5c */
  if ((DAT_06dc2d3c & 1) == 0) {
    FUN_02d965b8(Method_UnityEngine_UIElements_UIR_Utility_GPUBuffer<ushort>_get_BufferPointer__);
    FUN_02d965b8(
                Method_Unity_Burst_FunctionPointer<XRGrabInteractable_EaseAttachBurst_00000F65_PostfixBurstDelegate>_get_Value__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__
                );
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<ulong,_Request>_Remove__);
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<PinchGesture>_TryCreateTwoFingerGestureOnTouchBegan__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<PinchGesture>_Update__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<PinchGesture>_add_onGestureStarted__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<PinchGesture>_remove_onGestureStarted__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<PinchGesture>_set_arSessionOrigin__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<PinchGesture>_set_raycastMask__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<PinchGesture>_set_raycastTriggerInteraction__
                );
    DAT_06dc2d3c = 1;
  }
  *param_6 = 0;
  local_48 = 0;
  if (*(char *)(param_1 + 0xd8) != '\0') {
    *param_6 = 1;
    return 2;
  }
  *(undefined1 *)(param_1 + 0xd8) = 1;
  puVar2 = Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<PinchGesture>_Update__;
  if (param_2 == 0) goto LAB_05cdca50;
  uVar4 = thunk_FUN_0536b75c(*(undefined8 *)(param_2 + 0x10),
                             *(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<PinchGesture>_Update__
                             ,0);
  if (((uVar4 & 1) != 0) ||
     (uVar4 = thunk_FUN_0536b75c(*(undefined8 *)(param_2 + 0x10),
                                 *(undefined8 *)
                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<PinchGesture>_set_raycastTriggerInteraction__
                                 ,0), (uVar4 & 1) != 0)) {
    if (param_3 == 0) goto LAB_05cdca50;
    if (99 < *(int *)(param_3 + 0x14) - 200U) {
      local_58 = CONCAT44(local_58._4_4_,*(int *)(param_3 + 0x14));
      uVar6 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),&local_58);
      uVar6 = FUN_0534e494(*(undefined8 *)
                            Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<PinchGesture>_set_arSessionOrigin__
                           ,uVar6,0);
      *(undefined8 *)(param_1 + 0x68) = uVar6;
      LeanTween__value((undefined8 *)(param_1 + 0x68),uVar6);
      return 0;
    }
    uVar4 = thunk_FUN_0536b75c(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)puVar2,0);
    if ((uVar4 & 1) == 0) {
      iVar3 = FUN_05cdece0(uVar4,*(undefined8 *)(param_3 + 0x18));
    }
    else {
      iVar3 = FUN_05cdeb0c();
    }
    if (iVar3 == -1) {
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<ulong,_Request>_Remove__ +
                  0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_05cd3ce0(param_1,*(undefined8 *)
                            Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<PinchGesture>_add_onGestureStarted__
                   ,*(undefined8 *)
                     Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<PinchGesture>_set_raycastMask__
                  );
    }
    plVar10 = *(long **)(param_1 + 0x40);
    auVar12 = FUN_05ce8620(param_1,0);
    lVar9 = auVar12._8_8_;
    if ((plVar10 != (long *)0x0) &&
       (lVar9 = *(long *)
                 Method_Unity_Burst_FunctionPointer<XRGrabInteractable_EaseAttachBurst_00000F65_PostfixBurstDelegate>_get_Value__
       , *plVar10 != lVar9)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(plVar10);
    }
    lVar9 = UnityEngine_InputSystem_StepCounter__set_current(auVar12._0_8_,lVar9,auVar12._0_8_);
    plVar10 = (long *)(param_1 + 0x88);
    *plVar10 = lVar9;
    LeanTween__value(plVar10);
    lVar9 = FUN_05ce8620(param_1,0);
    if ((lVar9 == 0) ||
       (plVar5 = (long *)FUN_05c40580(lVar9,0),
       puVar2 = 
       Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__,
       plVar5 == (long *)0x0)) goto LAB_05cdca50;
    lVar9 = *(long *)
             Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__;
    if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar9 + 0x130)) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) != lVar9)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0();
    }
    lVar11 = plVar5[2];
    uVar6 = thunk_FUN_02dd3144(lVar9);
    FUN_05cd8830(uVar6,lVar11,0);
    if (*plVar10 == 0) goto LAB_05cdca50;
    FUN_05c41ab4(*plVar10,uVar6,0);
    uVar6 = FUN_05ce858c(param_1,0);
    uVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
    FUN_05cd8830(uVar7,uVar6,iVar3);
    *(undefined8 *)(param_1 + 0x90) = uVar7;
    LeanTween__value((undefined8 *)(param_1 + 0x90),uVar7);
  }
  puVar2 = Method_System_Collections_Generic_Dictionary<ulong,_Request>_Remove__;
  plVar10 = (long *)(param_1 + 0x90);
  lVar9 = *plVar10;
  if (lVar9 == 0) {
    if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<ulong,_Request>_Remove__ +
                0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar4 = FUN_05cd427c();
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_05cd43d0(param_1,*(undefined8 *)
                            Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<PinchGesture>_remove_onGestureStarted__
                   ,*(undefined8 *)
                     Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<PinchGesture>_set_raycastMask__
                  );
    }
    puVar2 = Method_UnityEngine_UIElements_UIR_Utility_GPUBuffer<ushort>_get_BufferPointer__;
    plVar10 = (long *)(param_1 + 0x88);
    lVar9 = *plVar10;
    if (*(char *)(param_1 + 0x48) == '\0') {
      local_50 = &local_48;
      local_58 = 0;
      local_48 = lVar9;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar9 = FUN_05c40f14(lVar9,0);
      *plVar10 = lVar9;
      LeanTween__value(plVar10);
      plVar5 = (long *)FUN_05ce858c(param_1,0);
      if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      plVar8 = (long *)FUN_05c40a04(*plVar10,0);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      bVar1 = *(byte *)(*(long *)
                         Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__
                       + 0x130);
      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)
           Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0();
      }
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar4 = (**(code **)(*plVar5 + 0x138))(plVar5,plVar8[2],*(undefined8 *)(*plVar5 + 0x140));
      if ((uVar4 & 1) == 0) {
        if (*plVar10 != 0) {
          FUN_05c44d2c(*plVar10,0);
          thunk_FUN_02dfd288(PTR_DAT_06a10338);
          uVar6 = thunk_FUN_02dd3144();
          uVar7 = thunk_FUN_02dfd288(
                                    Method_UnityEngine_UIElements_UIR_Utility_GPUBuffer<Vertex>_get_BufferPointer__
                                    );
          FUN_05ce56b4(uVar6,uVar7,7,0);
          uVar7 = thunk_FUN_02dfd288(
                                    Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<PinchGesture>_set_xrOrigin__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar6,uVar7);
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      *param_6 = 1;
      if (local_48 != 0) {
        FUN_05c44d2c(local_48,0);
        return 2;
      }
    }
    else {
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_UIR_Utility_GPUBuffer<ushort>_get_BufferPointer__
                  + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (lVar9 != 0) {
        FUN_05c416f0(lVar9,**(undefined8 **)(*(long *)puVar2 + 0xb8),param_1,0);
        return 2;
      }
    }
  }
  else {
    *plVar10 = 0;
    LeanTween__value(plVar10,0);
    puVar2 = Method_System_Collections_Generic_Dictionary<ulong,_Request>_Remove__;
    if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<ulong,_Request>_Remove__ +
                0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar4 = FUN_05cd427c();
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_05cd43d0(param_1,*(undefined8 *)
                            Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<PinchGesture>_TryCreateTwoFingerGestureOnTouchBegan__
                   ,*(undefined8 *)
                     Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<PinchGesture>_set_raycastMask__
                  );
    }
    puVar2 = Method_UnityEngine_UIElements_UIR_Utility_GPUBuffer<ushort>_get_BufferPointer__;
    lVar11 = *(long *)(param_1 + 0x88);
    if (*(char *)(param_1 + 0x48) == '\0') {
      if (lVar11 != 0) {
        FUN_05c420ac(lVar11,lVar9,0);
        return 1;
      }
    }
    else {
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_UIR_Utility_GPUBuffer<ushort>_get_BufferPointer__
                  + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (lVar11 != 0) {
        FUN_05c427ec(lVar11,lVar9,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8),param_1,0);
        return 2;
      }
    }
  }
LAB_05cdca50:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


