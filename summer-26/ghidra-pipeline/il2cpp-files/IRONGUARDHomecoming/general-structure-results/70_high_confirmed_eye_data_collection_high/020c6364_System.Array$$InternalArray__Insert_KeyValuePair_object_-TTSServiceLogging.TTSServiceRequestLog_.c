/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<KeyValuePair<object,-TTSServiceLogging.TTSServiceRequestLog>>
ENTRY_POINT: 020c6364
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: confirmed_eye_data_collection_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;active_gaze_retrieval;active_gaze_collection;possible_biometrics
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_collection_or_telemetry_sink;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void System_Array__InternalArray__Insert<KeyValuePair<object,_TTSServiceLogging_TTSServiceRequestLog>>
               (long param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *plVar7;
  undefined8 *unaff_x22;
  long *unaff_x24;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0xa0) == 0)) goto LAB_020c6650;
  FUN_0280b3dc();
  lVar4 = FUN_032b9080(*unaff_x22);
  if ((lVar4 == 0) || ((unaff_x21 == 0 || (*(long *)(lVar4 + 0x58) == 0)))) goto LAB_020c6650;
  FUN_02b300fc(*(long *)(lVar4 + 0x58),*(undefined4 *)(unaff_x21 + 0x20));
  puVar2 = Method_UnityEngine_TextCore_Text_TextProcessingStack<TextAlignment>_Add__;
  plVar7 = (long *)*unaff_x20;
  if (plVar7 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)Method_System_Collections_Generic_ValueListBuilder<int>_get_Length__
                     + 0x130);
    if ((bVar1 <= *(byte *)(*plVar7 + 0x130)) &&
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_System_Collections_Generic_ValueListBuilder<int>_get_Length__)) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_TextCore_Text_TextProcessingStack<TextAlignment>_Add__ + 0xe0
                  ) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (DAT_0482f8bb == '\0') {
        thunk_FUN_01efb3a4(Method_UnityEngine_TextCore_Text_TextProcessingStack<TextAlignment>_Add__
                          );
        DAT_0482f8bb = '\x01';
      }
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar4 = *(long *)puVar2;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
      if (lVar4 == 0) goto LAB_020c6650;
      FUN_020ac8e0(lVar4,plVar7,0);
      iVar3 = *(int *)((long)plVar7 + 0x2c);
      if (iVar3 == 0) {
        lVar4 = FUN_032b9080(*(undefined8 *)
                              Method_System_Runtime_CompilerServices_TaskAwaiter<SnapshotSceneManager_SceneSnapshot>_GetResult__
                            );
        if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x60), lVar4 == 0)) goto LAB_020c6650;
        lVar5 = plVar7[5];
        iVar3 = FUN_02b2a478(lVar4,(int)lVar5,
                             *(undefined8 *)
                              Method_Sirenix_OdinInspector_ValueDropdownList<int>_Add__);
        FUN_02b2a500(lVar4,(int)lVar5,iVar3 + 1,
                     *(undefined8 *)Method_System_ValueTuple<bool,_DashStyle>__ctor__);
        iVar3 = *(int *)((long)plVar7 + 0x2c);
      }
      if (iVar3 == 1) {
        lVar4 = FUN_032b9080(*(undefined8 *)
                              Method_System_Runtime_CompilerServices_TaskAwaiter<SnapshotSceneManager_SceneSnapshot>_GetResult__
                            );
        if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x60), lVar4 == 0)) goto LAB_020c6650;
        lVar5 = plVar7[5];
        iVar3 = FUN_02b2a478(lVar4,(int)lVar5,
                             *(undefined8 *)
                              Method_Sirenix_OdinInspector_ValueDropdownList<int>_Add__);
        FUN_02b2a500(lVar4,(int)lVar5,iVar3 + 1,
                     *(undefined8 *)Method_System_ValueTuple<bool,_DashStyle>__ctor__);
      }
      lVar4 = FUN_020c6658();
      if (lVar4 == 0) goto LAB_020c6650;
      FUN_04034c28(0,lVar4,0);
      lVar5 = FUN_04070398();
      if (lVar5 == 0) goto LAB_020c6650;
      FUN_0407d3c8(lVar5,0);
      FUN_020c3d40(lVar4);
      lVar5 = FUN_026fad0c(*(undefined8 *)
                            Method_UnityEngine_UIElements_TextValueField<float>_AddLabelDragger<float>__
                          );
      if (lVar5 == 0) goto LAB_020c6650;
      uVar6 = FUN_020c268c(lVar4,*(undefined8 *)(lVar5 + 0x50));
      FUN_020c26f8(uVar6,0);
      plVar7 = (long *)*unaff_x20;
      if (plVar7 == (long *)0x0) goto LAB_020c65e8;
    }
    bVar1 = *(byte *)(*(long *)Method_System_Collections_Generic_ValueListBuilder<int>_get_Item__ +
                     0x130);
    if ((bVar1 <= *(byte *)(*plVar7 + 0x130)) &&
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_System_Collections_Generic_ValueListBuilder<int>_get_Item__)) {
      lVar4 = FUN_032b9080(*(undefined8 *)
                            Method_System_Runtime_CompilerServices_TaskAwaiter<SnapshotSceneManager_SceneSnapshot>_GetResult__
                          );
      if ((lVar4 == 0) ||
         ((*(long *)(lVar4 + 0x58) == 0 ||
          (lVar4 = FUN_02b3005c(*(long *)(lVar4 + 0x58),(int)plVar7[5],
                                *(undefined8 *)
                                 Method_System_ValueTuple<string[],_OVRFaceExpressions_FaceExpression[]>__ctor__
                               ), lVar4 == 0)))) goto LAB_020c6650;
      FUN_020b4448(lVar4,0);
    }
  }
LAB_020c65e8:
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    uVar6 = FUN_040703d4(*(long *)(unaff_x19 + 0x20),0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*unaff_x24);
    }
    FUN_040770d0(uVar6,0);
    uVar6 = FUN_040703d4();
    FUN_040770d0(uVar6,0);
    return;
  }
LAB_020c6650:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


