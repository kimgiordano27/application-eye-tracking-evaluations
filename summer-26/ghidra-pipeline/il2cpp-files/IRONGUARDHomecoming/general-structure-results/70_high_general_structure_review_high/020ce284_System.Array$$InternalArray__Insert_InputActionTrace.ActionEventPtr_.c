/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<InputActionTrace.ActionEventPtr>
ENTRY_POINT: 020ce284
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_5;telemetry_or_network_hits_12;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void System_Array__InternalArray__Insert<InputActionTrace_ActionEventPtr>(void)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  undefined8 uVar7;
  long *unaff_x22;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_UIElements_VisualElement_VisualElementScheduledItem<Action>__ctor__
                    );
  thunk_FUN_01efb3a4(Method_Meta_Voice_VoiceRequestEvents<VoiceServiceRequestEvent>_get_OnCancel__);
  thunk_FUN_01efb3a4(Method_Meta_Voice_VoiceRequestEvents<VoiceServiceRequestEvent>_get_OnComplete__
                    );
  thunk_FUN_01efb3a4(
                    Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector3>__ctor__
                    );
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
  *(undefined1 *)(unaff_x20 + 0x9ee) = 1;
  uVar7 = *(undefined8 *)(unaff_x19 + 0x30);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar3 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                    (uVar7,0,0);
  if ((uVar3 & 1) != 0) {
    uVar7 = FUN_04070398();
    *(undefined8 *)(unaff_x19 + 0x30) = uVar7;
    thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x30),uVar7);
  }
  plVar6 = (long *)(unaff_x19 + 0x98);
  if (*plVar6 == 0) {
    lVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Meta_Voice_VoiceRequestEvents<VoiceServiceRequestEvent>_get_OnComplete__
                              );
    FUN_04063570(lVar4,0);
    *plVar6 = lVar4;
    thunk_FUN_01f51358(plVar6,lVar4);
    lVar4 = FUN_01f08890(*(undefined8 *)
                          Method_Meta_Voice_VoiceRequestEvents<VoiceServiceRequestEvent>_get_OnCancel__
                         ,2);
    uVar2 = _UNK_00c90ee8;
    uVar7 = _DAT_00c90ee0;
    if (lVar4 == 0) goto LAB_020ce594;
    if (*(int *)(lVar4 + 0x18) == 0) goto LAB_020ce590;
    *(undefined4 *)(lVar4 + 0x30) = 0;
    *(undefined8 *)(lVar4 + 0x28) = uVar2;
    *(undefined8 *)(lVar4 + 0x20) = uVar7;
    if (*(int *)(lVar4 + 0x18) == 1) goto LAB_020ce590;
    *(undefined8 *)(lVar4 + 0x3c) = uVar2;
    *(undefined8 *)(lVar4 + 0x34) = uVar7;
    *(undefined4 *)(lVar4 + 0x44) = 0x3f800000;
    lVar5 = FUN_01f08890(*(undefined8 *)
                          Method_UnityEngine_UIElements_VisualElement_VisualElementScheduledItem<Action>__ctor__
                         ,2);
    if (lVar5 == 0) goto LAB_020ce594;
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_020ce590;
    *(undefined8 *)(lVar5 + 0x20) = DAT_00c8d7f0;
    if (*(int *)(lVar5 + 0x18) == 1) goto LAB_020ce590;
    *(undefined8 *)(lVar5 + 0x28) = DAT_00c8edf8;
    if (*plVar6 == 0) goto LAB_020ce594;
    FUN_040638ac(*plVar6,lVar4,lVar5,0);
  }
  if (*(long *)(unaff_x19 + 0x138) == 0) {
    plVar6 = (long *)(unaff_x19 + 0x138);
    lVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector4>__ctor__
                              );
    UnityEngine_UIElements_BaseVerticalCollectionView___cctor(lVar4,0);
    *plVar6 = lVar4;
    thunk_FUN_01f51358(plVar6,lVar4);
    lVar4 = FUN_01f08890(*(undefined8 *)
                          Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector3>__ctor__
                         ,2);
    if (lVar4 == 0) goto LAB_020ce594;
    if (*(int *)(lVar4 + 0x18) == 0) goto LAB_020ce590;
    FUN_04038e80(0x3f800000,lVar4 + 0x20,0);
    if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_020ce590;
    lVar5 = lVar4 + 0x3c;
    FUN_04038e70(0,lVar5,0);
    if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_020ce590;
    FUN_04038e80(0x3f800000,lVar5,0);
    if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_020ce590;
    FUN_04038e70(0x3f800000,lVar5,0);
    if (*plVar6 == 0) goto LAB_020ce594;
    FUN_04039170(*plVar6,lVar4,0);
  }
  plVar6 = (long *)(unaff_x19 + 0xe8);
  if (*plVar6 != 0) {
    return;
  }
  lVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                              Method_Meta_Voice_VoiceRequestEvents<VoiceServiceRequestEvent>_get_OnComplete__
                            );
  FUN_04063570(lVar4,0);
  *plVar6 = lVar4;
  thunk_FUN_01f51358(plVar6,lVar4);
  lVar4 = FUN_01f08890(*(undefined8 *)
                        Method_Meta_Voice_VoiceRequestEvents<VoiceServiceRequestEvent>_get_OnCancel__
                       ,3);
  uVar2 = _UNK_00c91fb8;
  uVar7 = _DAT_00c91fb0;
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 != 0) {
      *(undefined4 *)(lVar4 + 0x30) = 0;
      *(undefined8 *)(lVar4 + 0x28) = uVar2;
      *(undefined8 *)(lVar4 + 0x20) = uVar7;
      uVar2 = _UNK_00c91e28;
      uVar7 = _DAT_00c91e20;
      if (uVar1 != 1) {
        *(undefined4 *)(lVar4 + 0x44) = 0x3f000000;
        *(undefined8 *)(lVar4 + 0x3c) = uVar2;
        *(undefined8 *)(lVar4 + 0x34) = uVar7;
        uVar2 = _UNK_00c8f798;
        uVar7 = _DAT_00c8f790;
        if (2 < uVar1) {
          *(undefined4 *)(lVar4 + 0x58) = 0x3f800000;
          *(undefined8 *)(lVar4 + 0x50) = uVar2;
          *(undefined8 *)(lVar4 + 0x48) = uVar7;
          if (*plVar6 != 0) {
            FUN_04063768(*plVar6,lVar4,0);
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


