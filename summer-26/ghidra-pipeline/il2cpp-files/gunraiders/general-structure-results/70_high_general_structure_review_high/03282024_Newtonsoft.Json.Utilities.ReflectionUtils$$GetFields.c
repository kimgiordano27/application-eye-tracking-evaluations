/*
FUNCTION_NAME: Newtonsoft.Json.Utilities.ReflectionUtils$$GetFields
ENTRY_POINT: 03282024
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Utilities_ReflectionUtils__GetFields(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long in_x9;
  long *plVar9;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  plVar9 = *(long **)(in_x9 + 0xcc0);
  *(undefined8 *)(param_1 + 0x80) = *unaff_x19;
  *(long *)(*(long *)(*plVar9 + 0xb8) + 8) = param_1;
                    /* try { // try from 0328204c to 03382053 has its CatchHandler @ 032826fc */
  lVar7 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422fd68,0xd);
  if (lVar7 == 0) goto LAB_032827b4;
  uVar1 = *(uint *)(lVar7 + 0x18);
                    /* try { // try from 03282070 to 0338207b has its CatchHandler @ 03282714 */
                    /* try { // try from 0328208c to 03382093 has its CatchHandler @ 032826f4 */
                    /* try { // try from 03282094 to 0338209f has its CatchHandler @ 03282710 */
                    /* try { // try from 032820b0 to 033820b7 has its CatchHandler @ 032826f0 */
                    /* try { // try from 032820c4 to 0338219b has its CatchHandler @ 0328273c */
  if (((((uVar1 != 0) && (*(undefined8 *)(lVar7 + 0x20) = *unaff_x22, uVar1 != 1)) &&
       (*(undefined8 *)(lVar7 + 0x28) = *unaff_x23, 2 < uVar1)) &&
      (((*(undefined8 *)(lVar7 + 0x30) = *unaff_x24, uVar1 != 3 &&
        (*(undefined8 *)(lVar7 + 0x38) = *unaff_x25, 4 < uVar1)) &&
       ((*(undefined8 *)(lVar7 + 0x40) = *unaff_x26, uVar1 != 5 &&
        ((*(undefined8 *)(lVar7 + 0x48) =
               *(undefined8 *)Method_UnityEngine_UIElements_BaseField<Bounds>_get_rawValue__,
         6 < uVar1 &&
         (*(undefined8 *)(lVar7 + 0x50) =
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetStateMachine__
         , uVar1 != 7)))))))) &&
     ((*(undefined8 *)(lVar7 + 0x58) = *unaff_x27, 8 < uVar1 &&
      ((*(undefined8 *)(lVar7 + 0x60) = *unaff_x28, uVar1 != 9 &&
       (*(undefined8 *)(lVar7 + 0x68) = *unaff_x29, 10 < uVar1)))))) {
    *(undefined8 *)(lVar7 + 0x70) = *unaff_x21;
    puVar6 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_Start<WebConnection_<InitConnection>d__19>__
    ;
    if (uVar1 != 0xb) {
      *(undefined8 *)(lVar7 + 0x78) = *unaff_x20;
      puVar4 = PTR_DAT_0422fd68;
      if (0xc < uVar1) {
        *(undefined8 *)(lVar7 + 0x80) = *unaff_x19;
        puVar5 = 
        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<TimeCheatingDetector_OnlineTimeResult>_AwaitUnsafeOnCompleted<TaskAwaiter,_TimeCheatingDetector_<GetOnlineTimeTask>d__62>__
        ;
        lVar8 = *(long *)puVar6;
        *(long *)(*(long *)(lVar8 + 0xb8) + 0x10) = lVar7;
        lVar7 = thunk_FUN_01c496e0(lVar8);
        *(undefined4 *)(lVar7 + 0x90) = 0x7ed;
        FUN_03313b6c(lVar7,0);
        uVar2 = DAT_00b91468;
        *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)puVar5;
        *(undefined8 *)(lVar7 + 0x90) = uVar2;
        lVar8 = FUN_01c5d2fc(*(undefined8 *)puVar4,2);
        if (lVar8 == 0) {
LAB_032827b4:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        if ((*(int *)(lVar8 + 0x18) != 0) &&
           (*(undefined8 *)(lVar8 + 0x20) =
                 *(undefined8 *)Method_UnityEngine_UIElements_BaseField<Bounds>_get_showMixedValue__
           , *(int *)(lVar8 + 0x18) != 1)) {
          *(undefined8 *)(lVar8 + 0x28) =
               *(undefined8 *)
                Method_UnityEngine_UIElements_BaseCompositeField<Rect,_FloatField,_float>__ctor__;
          *(long *)(lVar7 + 0x18) = lVar8;
          lVar8 = FUN_01c5d2fc(*(undefined8 *)puVar4,1);
          if (lVar8 == 0) goto LAB_032827b4;
          if (*(int *)(lVar8 + 0x18) != 0) {
            *(undefined8 *)(lVar8 + 0x20) =
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_BaseField<bool>_SetValueWithoutNotify__;
            *(long *)(lVar7 + 0x28) = lVar8;
            lVar8 = FUN_01c5d2fc(*(undefined8 *)puVar4,1);
            puVar5 = Method_UnityEngine_UIElements_BaseField<double>_get_rawValue__;
            if (lVar8 == 0) goto LAB_032827b4;
            if (*(int *)(lVar8 + 0x18) != 0) {
              *(undefined8 *)(lVar8 + 0x20) =
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_BaseFieldTraits<int,_UxmlIntAttributeDescription>_Init__
              ;
              *(long *)(lVar7 + 0x20) = lVar8;
              *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)puVar5;
              lVar8 = FUN_01c5d2fc(*(undefined8 *)puVar4,1);
              if (lVar8 == 0) goto LAB_032827b4;
              if (*(int *)(lVar8 + 0x18) != 0) {
                *(undefined8 *)(lVar8 + 0x20) =
                     *(undefined8 *)Method_Photon_Voice_AudioOutDelayControl<float>_Stop__;
                *(long *)(lVar7 + 0x38) = lVar8;
                lVar8 = FUN_01c5d2fc(*(undefined8 *)puVar4,1);
                puVar5 = Method_UnityEngine_UIElements_BaseField<BoundsInt>_get_showMixedValue__;
                if (lVar8 == 0) goto LAB_032827b4;
                if (*(int *)(lVar8 + 0x18) != 0) {
                  *(undefined8 *)(lVar8 + 0x20) =
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_BaseField<BoundsInt>_get_showMixedValue__;
                  *(long *)(lVar7 + 0x40) = lVar8;
                  lVar8 = FUN_01c5d2fc(*(undefined8 *)puVar4,1);
                  if (lVar8 == 0) goto LAB_032827b4;
                  if (*(int *)(lVar8 + 0x18) != 0) {
                    *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)puVar5;
                    *(long *)(lVar7 + 0x48) = lVar8;
                    lVar8 = FUN_01c5d2fc(*(undefined8 *)puVar4,7);
                    if (lVar8 == 0) goto LAB_032827b4;
                    uVar1 = *(uint *)(lVar8 + 0x18);
                    if (((((uVar1 != 0) &&
                          (*(undefined8 *)(lVar8 + 0x20) =
                                *(undefined8 *)Method_Photon_Voice_AudioSyncBuffer<float>_Read__,
                          uVar1 != 1)) &&
                         (*(undefined8 *)(lVar8 + 0x28) =
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_BaseField<double>_get_labelElement__,
                         2 < uVar1)) &&
                        ((*(undefined8 *)(lVar8 + 0x30) =
                               *(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<TimeCheatingDetector_CheckResult>_SetStateMachine__
                         , uVar1 != 3 &&
                         (*(undefined8 *)(lVar8 + 0x38) =
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_BaseField<bool>_set_value__, 4 < uVar1
                         )))) && ((*(undefined8 *)(lVar8 + 0x40) =
                                        *(undefined8 *)
                                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<TimeCheatingDetector_OnlineTimeResult>_Create__
                                  , uVar1 != 5 &&
                                  (*(undefined8 *)(lVar8 + 0x48) =
                                        *(undefined8 *)
                                         Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetResult__
                                  , 6 < uVar1)))) {
                      *(undefined8 *)(lVar8 + 0x50) =
                           *(undefined8 *)Method_UnityEngine_UIElements_BaseField<bool>__ctor__;
                      *(long *)(lVar7 + 0x50) = lVar8;
                      lVar8 = FUN_01c5d2fc(*(undefined8 *)puVar4,7);
                      if (lVar8 == 0) goto LAB_032827b4;
                      uVar1 = *(uint *)(lVar8 + 0x18);
                      if ((((uVar1 != 0) &&
                           (*(undefined8 *)(lVar8 + 0x20) =
                                 *(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseField<Bounds>_get_visualInput__,
                           uVar1 != 1)) &&
                          ((*(undefined8 *)(lVar8 + 0x28) =
                                 *(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseField<Bounds>_get_labelElement__
                           , 2 < uVar1 &&
                           (((*(undefined8 *)(lVar8 + 0x30) =
                                   *(undefined8 *)
                                    Method_UnityEngine_UIElements_BaseField<BoundsInt>__ctor__,
                             uVar1 != 3 &&
                             (*(undefined8 *)(lVar8 + 0x38) =
                                   *(undefined8 *)
                                    Method_UnityEngine_UIElements_BaseCompositeField<Vector4,_FloatField,_float>__ctor__
                             , 4 < uVar1)) &&
                            (*(undefined8 *)(lVar8 + 0x40) =
                                  *(undefined8 *)
                                   Method_UnityEngine_UIElements_BaseFieldTraits<string,_UxmlStringAttributeDescription>__ctor__
                            , uVar1 != 5)))))) &&
                         (*(undefined8 *)(lVar8 + 0x48) =
                               *(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<TimeCheatingDetector_OnlineTimeResult>_SetStateMachine__
                         , 6 < uVar1)) {
                        *(undefined8 *)(lVar8 + 0x50) =
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<Stream_<<ReadAsync>g__FinishReadAsync_44_0>d>__
                        ;
                        *(long *)(lVar7 + 0x58) = lVar8;
                        lVar8 = FUN_01c5d2fc(*(undefined8 *)puVar4,7);
                        if (lVar8 == 0) goto LAB_032827b4;
                        uVar1 = *(uint *)(lVar8 + 0x18);
                        if ((((uVar1 != 0) &&
                             (*(undefined8 *)(lVar8 + 0x20) =
                                   *(undefined8 *)
                                    Method_UnityEngine_UIElements_BaseField<Bounds>_SetValueWithoutNotify__
                             , uVar1 != 1)) &&
                            (((*(undefined8 *)(lVar8 + 0x28) =
                                    *(undefined8 *)
                                     Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_get_Task__
                              , 2 < uVar1 &&
                              ((*(undefined8 *)(lVar8 + 0x30) =
                                     *(undefined8 *)
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<TimeCheatingDetector_CheckResult>_AwaitUnsafeOnCompleted<TaskAwaiter,_TimeCheatingDetector_<ForceCheckTask>d__71>__
                               , uVar1 != 3 &&
                               (*(undefined8 *)(lVar8 + 0x38) =
                                     *(undefined8 *)
                                      Method_UnityEngine_UIElements_BaseCompositeField<RectInt,_IntegerField,_int>__ctor__
                               , 4 < uVar1)))) &&
                             (*(undefined8 *)(lVar8 + 0x40) =
                                   *(undefined8 *)
                                    Method_UnityEngine_UIElements_BaseCompositeField<Vector3,_FloatField,_float>__ctor__
                             , uVar1 != 5)))) &&
                           (*(undefined8 *)(lVar8 + 0x48) =
                                 *(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseField<BoundsInt>_get_labelElement__
                           , 6 < uVar1)) {
                          *(undefined8 *)(lVar8 + 0x50) =
                               *(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<TimeCheatingDetector_OnlineTimeResult>_Start<TimeCheatingDetector_<GetOnlineTimeTask>d__62>__
                          ;
                          *(long *)(lVar7 + 0x60) = lVar8;
                          lVar8 = FUN_01c5d2fc(*(undefined8 *)puVar4,0xd);
                          if (lVar8 == 0) goto LAB_032827b4;
                          uVar1 = *(uint *)(lVar8 + 0x18);
                          if ((((uVar1 != 0) &&
                               (*(undefined8 *)(lVar8 + 0x20) =
                                     *(undefined8 *)
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<TimeCheatingDetector_CheckResult>_SetException__
                               , uVar1 != 1)) &&
                              (*(undefined8 *)(lVar8 + 0x28) =
                                    *(undefined8 *)
                                     Method_UnityEngine_UIElements_BaseFieldTraits<bool,_UxmlBoolAttributeDescription>_Init__
                              , 2 < uVar1)) &&
                             ((*(undefined8 *)(lVar8 + 0x30) =
                                    *(undefined8 *)
                                     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<TimeCheatingDetector_OnlineTimeResult>_SetException__
                              , uVar1 != 3 &&
                              (*(undefined8 *)(lVar8 + 0x38) =
                                    *(undefined8 *)
                                     Method_UnityEngine_UIElements_BaseField<bool>_StartEditing__,
                              puVar5 = Photon_Voice_Codec_var, 4 < uVar1)))) {
                            *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)Photon_Voice_Codec_var;
                            if (((uVar1 != 5) &&
                                ((*(undefined8 *)(lVar8 + 0x48) =
                                       *(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseField<bool>_get_mixedValueLabel__
                                 , 6 < uVar1 &&
                                 (*(undefined8 *)(lVar8 + 0x50) =
                                       *(undefined8 *)
                                        Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetException__
                                 , uVar1 != 7)))) &&
                               ((*(undefined8 *)(lVar8 + 0x58) =
                                      *(undefined8 *)
                                       Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Create__
                                , 8 < uVar1 &&
                                ((((*(undefined8 *)(lVar8 + 0x60) =
                                         *(undefined8 *)
                                          Method_UnityEngine_UIElements_BaseField<BoundsInt>_get_visualInput__
                                   , uVar1 != 9 &&
                                   (*(undefined8 *)(lVar8 + 0x68) =
                                         *(undefined8 *)
                                          Method_UnityEngine_UIElements_BaseFieldTraits<bool,_UxmlBoolAttributeDescription>__ctor__
                                   , 10 < uVar1)) &&
                                  (*(undefined8 *)(lVar8 + 0x70) =
                                        *(undefined8 *)
                                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<TimeCheatingDetector_OnlineTimeResult>_SetResult__
                                  , uVar1 != 0xb)) &&
                                 (*(undefined8 *)(lVar8 + 0x78) =
                                       *(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseCompositeField<Vector2,_FloatField,_float>__ctor__
                                 , puVar3 = PTR_DAT_0422fc38, 0xc < uVar1)))))) {
                              *(undefined8 *)(lVar8 + 0x80) =
                                   **(undefined8 **)(*(long *)PTR_DAT_0422fc38 + 0xb8);
                              *(long *)(lVar7 + 0x68) = lVar8;
                              lVar8 = FUN_01c5d2fc(*(undefined8 *)puVar4,0xd);
                              if (lVar8 == 0) goto LAB_032827b4;
                              uVar1 = *(uint *)(lVar8 + 0x18);
                              if ((((uVar1 != 0) &&
                                   (*(undefined8 *)(lVar8 + 0x20) =
                                         *(undefined8 *)
                                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<TimeCheatingDetector_CheckResult>_SetResult__
                                   , uVar1 != 1)) &&
                                  ((*(undefined8 *)(lVar8 + 0x28) =
                                         *(undefined8 *)
                                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<TimeCheatingDetector_CheckResult>_get_Task__
                                   , 2 < uVar1 &&
                                   ((*(undefined8 *)(lVar8 + 0x30) =
                                          *(undefined8 *)
                                           Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_Stream_<<ReadAsync>g__FinishReadAsync_44_0>d>__
                                    , uVar1 != 3 &&
                                    (*(undefined8 *)(lVar8 + 0x38) =
                                          *(undefined8 *)
                                           Method_UnityEngine_UIElements_BaseField<bool>_get_value__
                                    , 4 < uVar1)))))) &&
                                 ((*(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)puVar5, uVar1 != 5
                                  && (((((*(undefined8 *)(lVar8 + 0x48) =
                                               *(undefined8 *)
                                                Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter<int>,_BufferedStream_<ReadFromUnderlyingStreamAsync>d__51>__
                                         , 6 < uVar1 &&
                                         (*(undefined8 *)(lVar8 + 0x50) =
                                               *(undefined8 *)
                                                Method_Photon_Voice_AudioSyncBuffer<float>__ctor__,
                                         uVar1 != 7)) &&
                                        (*(undefined8 *)(lVar8 + 0x58) =
                                              *(undefined8 *)
                                               Method_UnityEngine_UIElements_BaseCompositeField<Vector3Int,_IntegerField,_int>__ctor__
                                        , 8 < uVar1)) &&
                                       ((*(undefined8 *)(lVar8 + 0x60) =
                                              *(undefined8 *)
                                               Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_BufferedStream_<ReadFromUnderlyingStreamAsync>d__51>__
                                        , uVar1 != 9 &&
                                        (*(undefined8 *)(lVar8 + 0x68) =
                                              *(undefined8 *)
                                               Method_UnityEngine_UIElements_BaseField<bool>_get_visualInput__
                                        , 10 < uVar1)))) &&
                                      ((*(undefined8 *)(lVar8 + 0x70) =
                                             *(undefined8 *)
                                              Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<BufferedStream_<ReadFromUnderlyingStreamAsync>d__51>__
                                       , uVar1 != 0xb &&
                                       (*(undefined8 *)(lVar8 + 0x78) =
                                             *(undefined8 *)
                                              Method_UnityEngine_UIElements_BaseField<bool>_get_showMixedValue__
                                       , 0xc < uVar1)))))))) {
                                *(undefined8 *)(lVar8 + 0x80) =
                                     **(undefined8 **)(*(long *)puVar3 + 0xb8);
                                *(undefined1 *)(lVar7 + 0x98) = 0;
                                *(long *)(lVar7 + 0x70) = lVar8;
                                *(undefined8 *)(lVar7 + 0x78) = *(undefined8 *)(lVar7 + 0x68);
                                *(long *)(lVar7 + 0x80) = lVar8;
                                *(undefined8 *)(lVar7 + 0x88) = *(undefined8 *)(lVar7 + 0x68);
                                **(long **)(*(long *)puVar6 + 0xb8) = lVar7;
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


