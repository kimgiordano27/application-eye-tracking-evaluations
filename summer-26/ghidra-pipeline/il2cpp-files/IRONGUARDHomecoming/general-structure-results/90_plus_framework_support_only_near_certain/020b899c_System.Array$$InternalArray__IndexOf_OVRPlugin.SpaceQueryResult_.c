/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 020b899c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 133
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_1
*/


void System_Array__InternalArray__IndexOf<OVRPlugin_SpaceQueryResult>(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  long lVar5;
  float unaff_s8;
  
  uVar2 = FUN_020c2664();
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_0407d3c8(*(long *)(unaff_x19 + 0x30),0);
    uVar2 = FUN_020c3d40(uVar2,0);
    FUN_020c26f8(uVar2,0,0);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0403ea2c(*(undefined8 *)Method_UnityEngine_Events_UnityEvent<string,_string>__ctor__,0);
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
    lVar3 = *(long *)Method_UnityEngine_Events_UnityEvent<long,_double>_RemoveListener__;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar3 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
    if (lVar5 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar3 = *(long *)puVar1;
      }
      uVar2 = **(undefined8 **)(lVar3 + 0xb8);
      lVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
                                );
      FUN_034f6024(lVar5,uVar2,
                   *(undefined8 *)Method_UnityEngine_Events_UnityEvent<long,_double>_Invoke__,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *plVar4 = lVar5;
      thunk_FUN_01f51358(plVar4,lVar5);
    }
    FUN_02098028(DAT_00c925a0,lVar5,1,0);
    *(undefined2 *)(unaff_x19 + 0x61) = 1;
    uVar2 = FUN_020c25c0(0);
    lVar3 = FUN_026fad0c(*(undefined8 *)
                          Method_UnityEngine_UIElements_TextInputBaseField<Hash128>__ctor__);
    if (lVar3 != 0) {
      uVar2 = FUN_020c268c(uVar2,*(undefined8 *)(lVar3 + 0x60),0);
      uVar2 = FUN_020c2664(uVar2,0);
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        FUN_0407d3c8(*(long *)(unaff_x19 + 0x30),0);
        uVar2 = FUN_020c3d40(uVar2,0);
        FUN_020c26f8(uVar2,0,0);
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_0403ea2c(*(undefined8 *)
                      Method_UnityEngine_Events_UnityEvent<string,_string>_AddListener__,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


