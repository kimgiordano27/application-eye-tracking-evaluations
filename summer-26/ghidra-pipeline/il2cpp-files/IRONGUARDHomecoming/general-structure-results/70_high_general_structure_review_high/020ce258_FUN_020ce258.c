/*
FUNCTION_NAME: FUN_020ce258
ENTRY_POINT: 020ce258
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_12;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020ce258(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  
  puVar3 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if ((DAT_0482f9ee & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector4>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_VisualElement_VisualElementScheduledItem<Action>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_Meta_Voice_VoiceRequestEvents<VoiceServiceRequestEvent>_get_OnCancel__
                      );
    thunk_FUN_01efb3a4(
                      Method_Meta_Voice_VoiceRequestEvents<VoiceServiceRequestEvent>_get_OnComplete__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector3>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    DAT_0482f9ee = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar4 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                    (uVar8,0,0);
  if ((uVar4 & 1) != 0) {
    uVar8 = FUN_04070398(param_1,0);
    *(undefined8 *)(param_1 + 0x30) = uVar8;
    thunk_FUN_01f51358((undefined8 *)(param_1 + 0x30),uVar8);
  }
  plVar7 = (long *)(param_1 + 0x98);
  if (*plVar7 == 0) {
    lVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Meta_Voice_VoiceRequestEvents<VoiceServiceRequestEvent>_get_OnComplete__
                              );
    FUN_04063570(lVar5,0);
    *plVar7 = lVar5;
    thunk_FUN_01f51358(plVar7,lVar5);
    lVar5 = FUN_01f08890(*(undefined8 *)
                          Method_Meta_Voice_VoiceRequestEvents<VoiceServiceRequestEvent>_get_OnCancel__
                         ,2);
    uVar2 = _UNK_00c90ee8;
    uVar8 = _DAT_00c90ee0;
    if (lVar5 == 0) goto LAB_020ce594;
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_020ce590;
    *(undefined4 *)(lVar5 + 0x30) = 0;
    *(undefined8 *)(lVar5 + 0x28) = uVar2;
    *(undefined8 *)(lVar5 + 0x20) = uVar8;
    if (*(int *)(lVar5 + 0x18) == 1) goto LAB_020ce590;
    *(undefined8 *)(lVar5 + 0x3c) = uVar2;
    *(undefined8 *)(lVar5 + 0x34) = uVar8;
    *(undefined4 *)(lVar5 + 0x44) = 0x3f800000;
    lVar6 = FUN_01f08890(*(undefined8 *)
                          Method_UnityEngine_UIElements_VisualElement_VisualElementScheduledItem<Action>__ctor__
                         ,2);
    if (lVar6 == 0) goto LAB_020ce594;
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_020ce590;
    *(undefined8 *)(lVar6 + 0x20) = DAT_00c8d7f0;
    if (*(int *)(lVar6 + 0x18) == 1) goto LAB_020ce590;
    *(undefined8 *)(lVar6 + 0x28) = DAT_00c8edf8;
    if (*plVar7 == 0) goto LAB_020ce594;
    FUN_040638ac(*plVar7,lVar5,lVar6,0);
  }
  if (*(long *)(param_1 + 0x138) == 0) {
    plVar7 = (long *)(param_1 + 0x138);
    lVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector4>__ctor__
                              );
    UnityEngine_UIElements_BaseVerticalCollectionView___cctor(lVar5,0);
    *plVar7 = lVar5;
    thunk_FUN_01f51358(plVar7,lVar5);
    lVar5 = FUN_01f08890(*(undefined8 *)
                          Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector3>__ctor__
                         ,2);
    if (lVar5 == 0) goto LAB_020ce594;
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_020ce590;
    FUN_04038e80(0x3f800000,lVar5 + 0x20,0);
    if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_020ce590;
    lVar6 = lVar5 + 0x3c;
    FUN_04038e70(0,lVar6,0);
    if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_020ce590;
    FUN_04038e80(0x3f800000,lVar6,0);
    if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_020ce590;
    FUN_04038e70(0x3f800000,lVar6,0);
    if (*plVar7 == 0) goto LAB_020ce594;
    FUN_04039170(*plVar7,lVar5,0);
  }
  plVar7 = (long *)(param_1 + 0xe8);
  if (*plVar7 != 0) {
    return;
  }
  lVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                              Method_Meta_Voice_VoiceRequestEvents<VoiceServiceRequestEvent>_get_OnComplete__
                            );
  FUN_04063570(lVar5,0);
  *plVar7 = lVar5;
  thunk_FUN_01f51358(plVar7,lVar5);
  lVar5 = FUN_01f08890(*(undefined8 *)
                        Method_Meta_Voice_VoiceRequestEvents<VoiceServiceRequestEvent>_get_OnCancel__
                       ,3);
  uVar2 = _UNK_00c91fb8;
  uVar8 = _DAT_00c91fb0;
  if (lVar5 != 0) {
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 != 0) {
      *(undefined4 *)(lVar5 + 0x30) = 0;
      *(undefined8 *)(lVar5 + 0x28) = uVar2;
      *(undefined8 *)(lVar5 + 0x20) = uVar8;
      uVar2 = _UNK_00c91e28;
      uVar8 = _DAT_00c91e20;
      if (uVar1 != 1) {
        *(undefined4 *)(lVar5 + 0x44) = 0x3f000000;
        *(undefined8 *)(lVar5 + 0x3c) = uVar2;
        *(undefined8 *)(lVar5 + 0x34) = uVar8;
        uVar2 = _UNK_00c8f798;
        uVar8 = _DAT_00c8f790;
        if (2 < uVar1) {
          *(undefined4 *)(lVar5 + 0x58) = 0x3f800000;
          *(undefined8 *)(lVar5 + 0x50) = uVar2;
          *(undefined8 *)(lVar5 + 0x48) = uVar8;
          if (*plVar7 != 0) {
            FUN_04063768(*plVar7,lVar5,0);
            return;
          }
          goto LAB_020ce594;
        }
      }
    }
LAB_020ce590:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
LAB_020ce594:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


