/*
FUNCTION_NAME: FUN_020b86d0
ENTRY_POINT: 020b86d0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


void FUN_020b86d0(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  
  if ((DAT_0482f92b & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<Hash128>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Events_UnityEvent<long,_double>_AddListener__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Events_UnityEvent<long,_double>_Invoke__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Events_UnityEvent<long,_double>_RemoveListener__);
    thunk_FUN_01efb3a4(Method_UnityEngine_TextCore_Text_TextProcessingStack<TextAlignment>_Add__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Events_UnityEvent<string,_string>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Events_UnityEvent<string,_string>_AddListener__);
    DAT_0482f92b = 1;
  }
  if (*(char *)(param_4 + 0x60) == '\0') {
    return;
  }
  if (DAT_0482f7c2 == '\0') {
    thunk_FUN_01efb3a4(Method_TMPro_TMP_TextProcessingStack<HorizontalAlignmentOptions>__ctor__);
    DAT_0482f7c2 = '\x01';
  }
  lVar3 = **(long **)(*(long *)
                       Method_TMPro_TMP_TextProcessingStack<HorizontalAlignmentOptions>__ctor__ +
                     0xb8);
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x58) == '\0') {
      return;
    }
    if (*(long *)(lVar3 + 0x20) != 0) {
      FUN_0407d3c8(*(long *)(lVar3 + 0x20),0);
      if (*(long *)(param_4 + 0x30) != 0) {
        FUN_0407e9e4(*(long *)(param_4 + 0x30),0);
        param_3 = param_3 + *(float *)(param_4 + 0x5c);
        fVar6 = *(float *)(param_4 + 0x58);
        if (param_3 <= *(float *)(param_4 + 0x58)) {
          fVar6 = param_3;
        }
        if (param_3 < *(float *)(param_4 + 0x4c)) {
          fVar6 = *(float *)(param_4 + 0x4c);
        }
        if (*(long *)(param_4 + 0x30) != 0) {
          FUN_0407c958(*(undefined4 *)(param_4 + 0x38),*(undefined4 *)(param_4 + 0x3c),fVar6,
                       *(long *)(param_4 + 0x30),0);
          if ((fVar6 == *(float *)(param_4 + 0x4c)) && (*(char *)(param_4 + 0x62) == '\0')) {
            if (*(long *)(param_4 + 0x20) == 0) goto LAB_020b8b9c;
            *(undefined1 *)(*(long *)(param_4 + 0x20) + 0xf6) = 1;
            puVar1 = Method_UnityEngine_TextCore_Text_TextProcessingStack<TextAlignment>_Add__;
            if (*(int *)(*(long *)
                          Method_UnityEngine_TextCore_Text_TextProcessingStack<TextAlignment>_Add__
                        + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if (DAT_0482f8bb == '\0') {
              thunk_FUN_01efb3a4(
                                Method_UnityEngine_TextCore_Text_TextProcessingStack<TextAlignment>_Add__
                                );
              DAT_0482f8bb = '\x01';
            }
            lVar3 = *(long *)puVar1;
            if (*(int *)(lVar3 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar3 = *(long *)puVar1;
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
            if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x80), lVar3 == 0)) goto LAB_020b8b9c;
            FUN_04083c08(lVar3,0);
            if (*(int *)(*(long *)
                          Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>__ctor__
                        + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            FUN_0376067c(0x3f800000,0x3f000000,1,0);
            puVar1 = Method_UnityEngine_Events_UnityEvent<long,_double>_RemoveListener__;
            lVar3 = *(long *)Method_UnityEngine_Events_UnityEvent<long,_double>_RemoveListener__;
            if (*(int *)(lVar3 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar3 = *(long *)puVar1;
            }
            lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
            if (lVar4 == 0) {
              if (*(int *)(lVar3 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                lVar3 = *(long *)puVar1;
              }
              uVar5 = **(undefined8 **)(lVar3 + 0xb8);
              lVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                                          Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
                                        );
              FUN_034f6024(lVar4,uVar5,
                           *(undefined8 *)
                            Method_UnityEngine_Events_UnityEvent<long,_double>_AddListener__,0);
              plVar2 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
              *plVar2 = lVar4;
              thunk_FUN_01f51358(plVar2,lVar4);
            }
            FUN_02098028(DAT_00c9294c,lVar4,1,0);
            *(undefined2 *)(param_4 + 0x61) = 0x100;
            uVar5 = FUN_020c25c0(0);
            lVar3 = FUN_026fad0c(*(undefined8 *)
                                  Method_UnityEngine_UIElements_TextInputBaseField<Hash128>__ctor__)
            ;
            if (lVar3 == 0) goto LAB_020b8b9c;
            uVar5 = FUN_020c268c(uVar5,*(undefined8 *)(lVar3 + 0x68),0);
            uVar5 = FUN_020c2664(uVar5,0);
            if (*(long *)(param_4 + 0x30) == 0) goto LAB_020b8b9c;
            FUN_0407d3c8(*(long *)(param_4 + 0x30),0);
            uVar5 = FUN_020c3d40(uVar5,0);
            FUN_020c26f8(uVar5,0,0);
            if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0)
            {
              thunk_FUN_01ee6d7c();
            }
            FUN_0403ea2c(*(undefined8 *)Method_UnityEngine_Events_UnityEvent<string,_string>__ctor__
                         ,0);
          }
          if (fVar6 != *(float *)(param_4 + 0x58)) {
            return;
          }
          if (*(char *)(param_4 + 0x61) != '\0') {
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
          lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
          if (lVar4 == 0) {
            if (*(int *)(lVar3 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar3 = *(long *)puVar1;
            }
            uVar5 = **(undefined8 **)(lVar3 + 0xb8);
            lVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
                                      );
            FUN_034f6024(lVar4,uVar5,
                         *(undefined8 *)Method_UnityEngine_Events_UnityEvent<long,_double>_Invoke__,
                         0);
            plVar2 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
            *plVar2 = lVar4;
            thunk_FUN_01f51358(plVar2,lVar4);
          }
          FUN_02098028(DAT_00c925a0,lVar4,1,0);
          *(undefined2 *)(param_4 + 0x61) = 1;
          uVar5 = FUN_020c25c0(0);
          lVar3 = FUN_026fad0c(*(undefined8 *)
                                Method_UnityEngine_UIElements_TextInputBaseField<Hash128>__ctor__);
          if (lVar3 != 0) {
            uVar5 = FUN_020c268c(uVar5,*(undefined8 *)(lVar3 + 0x60),0);
            uVar5 = FUN_020c2664(uVar5,0);
            if (*(long *)(param_4 + 0x30) != 0) {
              FUN_0407d3c8(*(long *)(param_4 + 0x30),0);
              uVar5 = FUN_020c3d40(uVar5,0);
              FUN_020c26f8(uVar5,0,0);
              if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) ==
                  0) {
                thunk_FUN_01ee6d7c();
              }
              FUN_0403ea2c(*(undefined8 *)
                            Method_UnityEngine_Events_UnityEvent<string,_string>_AddListener__,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_020b8b9c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


