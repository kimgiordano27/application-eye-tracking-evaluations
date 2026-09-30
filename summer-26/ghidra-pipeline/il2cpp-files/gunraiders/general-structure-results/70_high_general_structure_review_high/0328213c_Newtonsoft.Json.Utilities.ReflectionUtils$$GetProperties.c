/*
FUNCTION_NAME: Newtonsoft.Json.Utilities.ReflectionUtils$$GetProperties
ENTRY_POINT: 0328213c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_7;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Utilities_ReflectionUtils__GetProperties(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  long *unaff_x24;
  
  *(undefined8 *)(param_1 + 0x80) = *unaff_x19;
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<TimeCheatingDetector_OnlineTimeResult>_AwaitUnsafeOnCompleted<TaskAwaiter,_TimeCheatingDetector_<GetOnlineTimeTask>d__62>__
  ;
  lVar6 = *unaff_x24;
  *(long *)(*(long *)(lVar6 + 0xb8) + 0x10) = param_1;
  lVar6 = thunk_FUN_01c496e0(lVar6);
  *(undefined4 *)(lVar6 + 0x90) = 0x7ed;
  FUN_03313b6c(lVar6,0);
  uVar2 = DAT_00b91468;
  *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)puVar4;
  *(undefined8 *)(lVar6 + 0x90) = uVar2;
  lVar5 = FUN_01c5d2fc(*unaff_x21,2);
  if (lVar5 != 0) {
                    /* try { // try from 032821b0 to 033821c3 has its CatchHandler @ 03282720 */
    if ((*(int *)(lVar5 + 0x18) != 0) &&
       (*(undefined8 *)(lVar5 + 0x20) =
             *(undefined8 *)Method_UnityEngine_UIElements_BaseField<Bounds>_get_showMixedValue__,
       *(int *)(lVar5 + 0x18) != 1)) {
      *(undefined8 *)(lVar5 + 0x28) =
           *(undefined8 *)
            Method_UnityEngine_UIElements_BaseCompositeField<Rect,_FloatField,_float>__ctor__;
      *(long *)(lVar6 + 0x18) = lVar5;
      lVar5 = FUN_01c5d2fc(*unaff_x21,1);
      if (lVar5 == 0) goto LAB_032827b4;
                    /* try { // try from 032821dc to 033821f7 has its CatchHandler @ 03282740 */
      if (*(int *)(lVar5 + 0x18) != 0) {
        *(undefined8 *)(lVar5 + 0x20) =
             *(undefined8 *)Method_UnityEngine_UIElements_BaseField<bool>_SetValueWithoutNotify__;
        *(long *)(lVar6 + 0x28) = lVar5;
        lVar5 = FUN_01c5d2fc(*unaff_x21,1);
        puVar4 = Method_UnityEngine_UIElements_BaseField<double>_get_rawValue__;
        if (lVar5 == 0) goto LAB_032827b4;
        if (*(int *)(lVar5 + 0x18) != 0) {
                    /* try { // try from 03282224 to 0338222b has its CatchHandler @ 032826f8 */
          *(undefined8 *)(lVar5 + 0x20) =
               *(undefined8 *)
                Method_UnityEngine_UIElements_BaseFieldTraits<int,_UxmlIntAttributeDescription>_Init__
          ;
          *(long *)(lVar6 + 0x20) = lVar5;
          *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)puVar4;
          lVar5 = FUN_01c5d2fc(*unaff_x21,1);
          if (lVar5 == 0) goto LAB_032827b4;
                    /* try { // try from 03282248 to 03382253 has its CatchHandler @ 0328270c */
          if (*(int *)(lVar5 + 0x18) != 0) {
            *(undefined8 *)(lVar5 + 0x20) =
                 *(undefined8 *)Method_Photon_Voice_AudioOutDelayControl<float>_Stop__;
            *(long *)(lVar6 + 0x38) = lVar5;
                    /* try { // try from 03282264 to 0338226b has its CatchHandler @ 032826ec */
            lVar5 = FUN_01c5d2fc(*unaff_x21,1);
            puVar4 = Method_UnityEngine_UIElements_BaseField<BoundsInt>_get_showMixedValue__;
                    /* try { // try from 0328226c to 03382277 has its CatchHandler @ 03282708 */
            if (lVar5 == 0) goto LAB_032827b4;
            if (*(int *)(lVar5 + 0x18) != 0) {
                    /* try { // try from 03282288 to 0338228f has its CatchHandler @ 032826e8 */
              *(undefined8 *)(lVar5 + 0x20) =
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_BaseField<BoundsInt>_get_showMixedValue__;
              *(long *)(lVar6 + 0x40) = lVar5;
              lVar5 = FUN_01c5d2fc(*unaff_x21,1);
              if (lVar5 == 0) goto LAB_032827b4;
                    /* try { // try from 0328229c to 03382373 has its CatchHandler @ 03282738 */
              if (*(int *)(lVar5 + 0x18) != 0) {
                *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)puVar4;
                *(long *)(lVar6 + 0x48) = lVar5;
                lVar5 = FUN_01c5d2fc(*unaff_x21,7);
                if (lVar5 == 0) goto LAB_032827b4;
                uVar1 = *(uint *)(lVar5 + 0x18);
                if ((((uVar1 != 0) &&
                     (*(undefined8 *)(lVar5 + 0x20) =
                           *(undefined8 *)Method_Photon_Voice_AudioSyncBuffer<float>_Read__,
                     uVar1 != 1)) &&
                    (*(undefined8 *)(lVar5 + 0x28) =
                          *(undefined8 *)
                           Method_UnityEngine_UIElements_BaseField<double>_get_labelElement__,
                    2 < uVar1)) &&
                   (((*(undefined8 *)(lVar5 + 0x30) =
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<TimeCheatingDetector_CheckResult>_SetStateMachine__
                     , uVar1 != 3 &&
                     (*(undefined8 *)(lVar5 + 0x38) =
                           *(undefined8 *)Method_UnityEngine_UIElements_BaseField<bool>_set_value__,
                     4 < uVar1)) &&
                    ((*(undefined8 *)(lVar5 + 0x40) =
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<TimeCheatingDetector_OnlineTimeResult>_Create__
                     , uVar1 != 5 &&
                     (*(undefined8 *)(lVar5 + 0x48) =
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetResult__
                     , 6 < uVar1)))))) {
                  *(undefined8 *)(lVar5 + 0x50) =
                       *(undefined8 *)Method_UnityEngine_UIElements_BaseField<bool>__ctor__;
                  *(long *)(lVar6 + 0x50) = lVar5;
                  lVar5 = FUN_01c5d2fc(*unaff_x21,7);
                  if (lVar5 == 0) goto LAB_032827b4;
                  uVar1 = *(uint *)(lVar5 + 0x18);
                    /* try { // try from 03282388 to 0338239b has its CatchHandler @ 0328271c */
                    /* try { // try from 032823b4 to 033823bf has its CatchHandler @ 0328280c */
                    /* try { // try from 032823dc to 033823e3 has its CatchHandler @ 03282754 */
                    /* try { // try from 03282400 to 03382407 has its CatchHandler @ 032826fc */
                  if (((uVar1 != 0) &&
                      (*(undefined8 *)(lVar5 + 0x20) =
                            *(undefined8 *)
                             Method_UnityEngine_UIElements_BaseField<Bounds>_get_visualInput__,
                      uVar1 != 1)) &&
                     ((*(undefined8 *)(lVar5 + 0x28) =
                            *(undefined8 *)
                             Method_UnityEngine_UIElements_BaseField<Bounds>_get_labelElement__,
                      2 < uVar1 &&
                      ((((*(undefined8 *)(lVar5 + 0x30) =
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_BaseField<BoundsInt>__ctor__,
                         uVar1 != 3 &&
                         (*(undefined8 *)(lVar5 + 0x38) =
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_BaseCompositeField<Vector4,_FloatField,_float>__ctor__
                         , 4 < uVar1)) &&
                        (*(undefined8 *)(lVar5 + 0x40) =
                              *(undefined8 *)
                               Method_UnityEngine_UIElements_BaseFieldTraits<string,_UxmlStringAttributeDescription>__ctor__
                        , uVar1 != 5)) &&
                       (*(undefined8 *)(lVar5 + 0x48) =
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<TimeCheatingDetector_OnlineTimeResult>_SetStateMachine__
                       , 6 < uVar1)))))) {
                    /* try { // try from 03282414 to 03382417 has its CatchHandler @ 03282718 */
                    /* try { // try from 0328241c to 03382423 has its CatchHandler @ 032826f8 */
                    *(undefined8 *)(lVar5 + 0x50) =
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<Stream_<<ReadAsync>g__FinishReadAsync_44_0>d>__
                    ;
                    *(long *)(lVar6 + 0x58) = lVar5;
                    /* try { // try from 03282430 to 03382433 has its CatchHandler @ 03282704 */
                    lVar5 = FUN_01c5d2fc(*unaff_x21,7);
                    /* try { // try from 03282434 to 0338243f has its CatchHandler @ 0328280c */
                    if (lVar5 == 0) goto LAB_032827b4;
                    uVar1 = *(uint *)(lVar5 + 0x18);
                    if (((((uVar1 != 0) &&
                          (*(undefined8 *)(lVar5 + 0x20) =
                                *(undefined8 *)
                                 Method_UnityEngine_UIElements_BaseField<Bounds>_SetValueWithoutNotify__
                          , uVar1 != 1)) &&
                         ((*(undefined8 *)(lVar5 + 0x28) =
                                *(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_get_Task__
                          , 2 < uVar1 &&
                          ((*(undefined8 *)(lVar5 + 0x30) =
                                 *(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<TimeCheatingDetector_CheckResult>_AwaitUnsafeOnCompleted<TaskAwaiter,_TimeCheatingDetector_<ForceCheckTask>d__71>__
                           , uVar1 != 3 &&
                           (*(undefined8 *)(lVar5 + 0x38) =
                                 *(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseCompositeField<RectInt,_IntegerField,_int>__ctor__
                           , 4 < uVar1)))))) &&
                        (*(undefined8 *)(lVar5 + 0x40) =
                              *(undefined8 *)
                               Method_UnityEngine_UIElements_BaseCompositeField<Vector3,_FloatField,_float>__ctor__
                        , uVar1 != 5)) &&
                       (*(undefined8 *)(lVar5 + 0x48) =
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_BaseField<BoundsInt>_get_labelElement__,
                       6 < uVar1)) {
                      *(undefined8 *)(lVar5 + 0x50) =
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<TimeCheatingDetector_OnlineTimeResult>_Start<TimeCheatingDetector_<GetOnlineTimeTask>d__62>__
                      ;
                      *(long *)(lVar6 + 0x60) = lVar5;
                      lVar5 = FUN_01c5d2fc(*unaff_x21,0xd);
                      if (lVar5 == 0) goto LAB_032827b4;
                      uVar1 = *(uint *)(lVar5 + 0x18);
                      if ((((uVar1 != 0) &&
                           (*(undefined8 *)(lVar5 + 0x20) =
                                 *(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<TimeCheatingDetector_CheckResult>_SetException__
                           , uVar1 != 1)) &&
                          (*(undefined8 *)(lVar5 + 0x28) =
                                *(undefined8 *)
                                 Method_UnityEngine_UIElements_BaseFieldTraits<bool,_UxmlBoolAttributeDescription>_Init__
                          , 2 < uVar1)) &&
                         ((*(undefined8 *)(lVar5 + 0x30) =
                                *(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<TimeCheatingDetector_OnlineTimeResult>_SetException__
                          , uVar1 != 3 &&
                          (*(undefined8 *)(lVar5 + 0x38) =
                                *(undefined8 *)
                                 Method_UnityEngine_UIElements_BaseField<bool>_StartEditing__,
                          puVar4 = Photon_Voice_Codec_var, 4 < uVar1)))) {
                        *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)Photon_Voice_Codec_var;
                        if (((((uVar1 != 5) &&
                              ((*(undefined8 *)(lVar5 + 0x48) =
                                     *(undefined8 *)
                                      Method_UnityEngine_UIElements_BaseField<bool>_get_mixedValueLabel__
                               , 6 < uVar1 &&
                               (*(undefined8 *)(lVar5 + 0x50) =
                                     *(undefined8 *)
                                      Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetException__
                               , uVar1 != 7)))) &&
                             (*(undefined8 *)(lVar5 + 0x58) =
                                   *(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Create__
                             , 8 < uVar1)) &&
                            (((*(undefined8 *)(lVar5 + 0x60) =
                                    *(undefined8 *)
                                     Method_UnityEngine_UIElements_BaseField<BoundsInt>_get_visualInput__
                              , uVar1 != 9 &&
                              (*(undefined8 *)(lVar5 + 0x68) =
                                    *(undefined8 *)
                                     Method_UnityEngine_UIElements_BaseFieldTraits<bool,_UxmlBoolAttributeDescription>__ctor__
                              , 10 < uVar1)) &&
                             (*(undefined8 *)(lVar5 + 0x70) =
                                   *(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<TimeCheatingDetector_OnlineTimeResult>_SetResult__
                             , uVar1 != 0xb)))) &&
                           (*(undefined8 *)(lVar5 + 0x78) =
                                 *(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseCompositeField<Vector2,_FloatField,_float>__ctor__
                           , puVar3 = PTR_DAT_0422fc38, 0xc < uVar1)) {
                          *(undefined8 *)(lVar5 + 0x80) =
                               **(undefined8 **)(*(long *)PTR_DAT_0422fc38 + 0xb8);
                          *(long *)(lVar6 + 0x68) = lVar5;
                          lVar5 = FUN_01c5d2fc(*unaff_x21,0xd);
                          if (lVar5 == 0) goto LAB_032827b4;
                          uVar1 = *(uint *)(lVar5 + 0x18);
                          if (((((uVar1 != 0) &&
                                (*(undefined8 *)(lVar5 + 0x20) =
                                      *(undefined8 *)
                                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<TimeCheatingDetector_CheckResult>_SetResult__
                                , uVar1 != 1)) &&
                               ((*(undefined8 *)(lVar5 + 0x28) =
                                      *(undefined8 *)
                                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<TimeCheatingDetector_CheckResult>_get_Task__
                                , 2 < uVar1 &&
                                ((*(undefined8 *)(lVar5 + 0x30) =
                                       *(undefined8 *)
                                        Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_Stream_<<ReadAsync>g__FinishReadAsync_44_0>d>__
                                 , uVar1 != 3 &&
                                 (*(undefined8 *)(lVar5 + 0x38) =
                                       *(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseField<bool>_get_value__,
                                 4 < uVar1)))))) &&
                              ((*(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)puVar4, uVar1 != 5 &&
                               ((((*(undefined8 *)(lVar5 + 0x48) =
                                        *(undefined8 *)
                                         Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter<int>,_BufferedStream_<ReadFromUnderlyingStreamAsync>d__51>__
                                  , 6 < uVar1 &&
                                  (*(undefined8 *)(lVar5 + 0x50) =
                                        *(undefined8 *)
                                         Method_Photon_Voice_AudioSyncBuffer<float>__ctor__,
                                  uVar1 != 7)) &&
                                 (*(undefined8 *)(lVar5 + 0x58) =
                                       *(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseCompositeField<Vector3Int,_IntegerField,_int>__ctor__
                                 , 8 < uVar1)) &&
                                ((*(undefined8 *)(lVar5 + 0x60) =
                                       *(undefined8 *)
                                        Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_BufferedStream_<ReadFromUnderlyingStreamAsync>d__51>__
                                 , uVar1 != 9 &&
                                 (*(undefined8 *)(lVar5 + 0x68) =
                                       *(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseField<bool>_get_visualInput__
                                 , 10 < uVar1)))))))) &&
                             ((*(undefined8 *)(lVar5 + 0x70) =
                                    *(undefined8 *)
                                     Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<BufferedStream_<ReadFromUnderlyingStreamAsync>d__51>__
                              , uVar1 != 0xb &&
                              (*(undefined8 *)(lVar5 + 0x78) =
                                    *(undefined8 *)
                                     Method_UnityEngine_UIElements_BaseField<bool>_get_showMixedValue__
                              , 0xc < uVar1)))) {
                            *(undefined8 *)(lVar5 + 0x80) =
                                 **(undefined8 **)(*(long *)puVar3 + 0xb8);
                            *(undefined1 *)(lVar6 + 0x98) = 0;
                            *(long *)(lVar6 + 0x70) = lVar5;
                            *(undefined8 *)(lVar6 + 0x78) = *(undefined8 *)(lVar6 + 0x68);
                            *(long *)(lVar6 + 0x80) = lVar5;
                            *(undefined8 *)(lVar6 + 0x88) = *(undefined8 *)(lVar6 + 0x68);
                            **(long **)(*unaff_x24 + 0xb8) = lVar6;
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
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
LAB_032827b4:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


