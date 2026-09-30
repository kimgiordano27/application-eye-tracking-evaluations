/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.Quatf>
ENTRY_POINT: 020b8808
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 113
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


void System_Array__InternalArray__IndexOf<OVRPlugin_Quatf>(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long unaff_x19;
  long lVar4;
  undefined8 uVar5;
  float unaff_s8;
  
  FUN_0407c958();
  if ((unaff_s8 == *(float *)(unaff_x19 + 0x4c)) && (*(char *)(unaff_x19 + 0x62) == '\0')) {
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_020b8b9c;
    *(undefined1 *)(*(long *)(unaff_x19 + 0x20) + 0xf6) = 1;
    puVar1 = Method_UnityEngine_TextCore_Text_TextProcessingStack<TextAlignment>_Add__;
    if (*(int *)(*(long *)Method_UnityEngine_TextCore_Text_TextProcessingStack<TextAlignment>_Add__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (DAT_0482f8bb == '\0') {
      thunk_FUN_01efb3a4(Method_UnityEngine_TextCore_Text_TextProcessingStack<TextAlignment>_Add__);
      DAT_0482f8bb = '\x01';
    }
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
    if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x80), lVar2 == 0)) goto LAB_020b8b9c;
    FUN_04083c08(lVar2,0);
    if (*(int *)(*(long *)
                  Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>__ctor__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0376067c(0x3f800000,0x3f000000,1,0);
    puVar1 = Method_UnityEngine_Events_UnityEvent<long,_double>_RemoveListener__;
    lVar2 = *(long *)Method_UnityEngine_Events_UnityEvent<long,_double>_RemoveListener__;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
    if (lVar4 == 0) {
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar2 = *(long *)puVar1;
      }
      uVar5 = **(undefined8 **)(lVar2 + 0xb8);
      lVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
                                );
      FUN_034f6024(lVar4,uVar5,
                   *(undefined8 *)Method_UnityEngine_Events_UnityEvent<long,_double>_AddListener__,0
                  );
      plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar3 = lVar4;
      thunk_FUN_01f51358(plVar3,lVar4);
    }
    FUN_02098028(DAT_00c9294c,lVar4,1,0);
    *(undefined2 *)(unaff_x19 + 0x61) = 0x100;
    uVar5 = FUN_020c25c0(0);
    lVar2 = FUN_026fad0c(*(undefined8 *)
                          Method_UnityEngine_UIElements_TextInputBaseField<Hash128>__ctor__);
    if (lVar2 == 0) goto LAB_020b8b9c;
    uVar5 = FUN_020c268c(uVar5,*(undefined8 *)(lVar2 + 0x68),0);
    uVar5 = FUN_020c2664(uVar5,0);
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_020b8b9c;
    FUN_0407d3c8(*(long *)(unaff_x19 + 0x30),0);
    uVar5 = FUN_020c3d40(uVar5,0);
    FUN_020c26f8(uVar5,0,0);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0403ea2c(*(undefined8 *)Method_UnityEngine_Events_UnityEvent<string,_string>__ctor__,0);
  }
  if ((unaff_s8 != *(float *)(unaff_x19 + 0x58)) || (*(char *)(unaff_x19 + 0x61) != '\0')) {
    return;
  }
  if (*(int *)(*(long *)
                Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>__ctor__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_0376067c(0x3f800000,DAT_00c92aac,1,0);
  puVar1 = Method_UnityEngine_Events_UnityEvent<long,_double>_RemoveListener__;
  lVar2 = *(long *)Method_UnityEngine_Events_UnityEvent<long,_double>_RemoveListener__;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar2 = *(long *)puVar1;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
                              );
    FUN_034f6024(lVar4,uVar5,
                 *(undefined8 *)Method_UnityEngine_Events_UnityEvent<long,_double>_Invoke__,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
    *plVar3 = lVar4;
    thunk_FUN_01f51358(plVar3,lVar4);
  }
  FUN_02098028(DAT_00c925a0,lVar4,1,0);
  *(undefined2 *)(unaff_x19 + 0x61) = 1;
  uVar5 = FUN_020c25c0(0);
  lVar2 = FUN_026fad0c(*(undefined8 *)
                        Method_UnityEngine_UIElements_TextInputBaseField<Hash128>__ctor__);
  if (lVar2 != 0) {
    uVar5 = FUN_020c268c(uVar5,*(undefined8 *)(lVar2 + 0x60),0);
    uVar5 = FUN_020c2664(uVar5,0);
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      FUN_0407d3c8(*(long *)(unaff_x19 + 0x30),0);
      uVar5 = FUN_020c3d40(uVar5,0);
      FUN_020c26f8(uVar5,0,0);
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0403ea2c(*(undefined8 *)Method_UnityEngine_Events_UnityEvent<string,_string>_AddListener__
                   ,0);
      return;
    }
  }
LAB_020b8b9c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


