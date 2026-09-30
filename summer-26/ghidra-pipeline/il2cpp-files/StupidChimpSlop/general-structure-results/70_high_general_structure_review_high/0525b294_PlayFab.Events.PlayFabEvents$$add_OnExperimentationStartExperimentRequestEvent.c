/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$add_OnExperimentationStartExperimentRequestEvent
ENTRY_POINT: 0525b294
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_7;frame_or_lifecycle_behavior;negative_generic_transform_raycast_without_eye_source_or_attempt;functionality_data_collection_or_telemetry_hits_7
*/


long PlayFab_Events_PlayFabEvents__add_OnExperimentationStartExperimentRequestEvent(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  undefined4 uVar9;
  undefined8 *unaff_x23;
  int unaff_w24;
  long unaff_x25;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  FUN_02d4dc40(
              System_Func<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,_AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,_int>_TypeInfo
              );
  FUN_02d4dc40(PTR_DAT_0664b728);
  FUN_02d4dc40(System_Func<UploadFileCompletedEventArgs,_byte[]>_TypeInfo);
  FUN_02d4dc40(
              System_Func<LightCookieManager_LightCookieMapping,_LightCookieManager_LightCookieMapping,_int>_TypeInfo
              );
  FUN_02d4dc40(System_Func<Assembly,_string,_bool,_Type>_TypeInfo);
  FUN_02d4dc40(System_Func<IPAddress,_AsyncCallback,_object,_IAsyncResult>_TypeInfo);
  FUN_02d4dc40(System_Func<IPEndPoint,_AsyncCallback,_object,_IAsyncResult>_TypeInfo);
  FUN_02d4dc40(PTR_DAT_066463a0);
  FUN_02d4dc40(System_Func<InputControl,_double,_InputEventPtr,_bool>_TypeInfo);
  FUN_02d4dc40(System_Func<Light,_Camera,_Vector3,_float>_TypeInfo);
  FUN_02d4dc40(System_Func<Stream,_XmlReaderSettings,_XmlParserContext,_XmlReader>_TypeInfo);
  FUN_02d4dc40(System_Func<string,_AsyncCallback,_object,_IAsyncResult>_TypeInfo);
  FUN_02d4dc40(System_Func<StyleValues,_StyleValues,_float,_StyleValues>_TypeInfo);
  FUN_02d4dc40(
              System_Func<Vector3,_Vector3,_ValueTuple<EventModifiers,_Nullable<int>>,_EventBase>_TypeInfo
              );
  FUN_02d4dc40(
              System_Func<Vector3,_Vector3,_ValueTuple<EventModifiers,_Vector2>,_EventBase>_TypeInfo
              );
  FUN_02d4dc40(
              System_Func<Vector3,_Vector3,_ValueTuple<Touch,_int,_Nullable<int>>,_EventBase>_TypeInfo
              );
  FUN_02d4dc40(
              System_Func<Vector3,_Vector3,_ValueTuple<int,_int,_EventModifiers,_Nullable<int>>,_EventBase>_TypeInfo
              );
  FUN_02d4dc40(System_Func<Vector3,_Vector3,_Event,_EventBase>_TypeInfo);
  FUN_02d4dc40(System_Func<Vector3,_Vector3,_PenData,_EventBase>_TypeInfo);
  FUN_02d4dc40(
              System_Func<Expression,_string,_bool,_ReadOnlyCollection<ParameterExpression>,_LambdaExpression>_TypeInfo
              );
  FUN_02d4dc40(
              System_Func<Stream,_Stream_ReadWriteParameters,_AsyncCallback,_object,_IAsyncResult>_TypeInfo
              );
  FUN_02d4dc40(System_Func<string,_int,_AsyncCallback,_object,_IAsyncResult>_TypeInfo);
  FUN_02d4dc40(UnityEngine_Pool_GenericPool<StringBuilder>_TypeInfo);
  FUN_02d4dc40(UnityEngine_Pool_GenericPool<XRLayout>_TypeInfo);
  FUN_02d4dc40(UnityEngine_Pool_GenericPool<CameraScreenRaycaster_CameraRayEnumerator>_TypeInfo);
  FUN_02d4dc40(UnityEngine_Rendering_GenericPool<XRPass>_TypeInfo);
  FUN_02d4dc40(UnityEngine_Rendering_GenericPool<XRPassUniversal>_TypeInfo);
  *(undefined1 *)(unaff_x25 + 0x3b2) = 1;
  puVar1 = System_Func<Type,_string,_object>_TypeInfo;
  if (unaff_w24 == 0) {
    lVar3 = thunk_FUN_02d8a53c();
    if ((lVar3 == 0) && (lVar3 = thunk_FUN_02d8a53c(), lVar3 == 0)) {
      lVar3 = thunk_FUN_02d8a53c();
      if ((lVar3 == 0) && (lVar3 = thunk_FUN_02d8a53c(), lVar3 == 0)) {
        unaff_w24 = 0;
      }
      else {
        unaff_w24 = 1;
      }
    }
    else {
      unaff_w24 = 2;
    }
  }
  if (*unaff_x22 == 0) {
    if (unaff_w24 == 1) {
      in_stack_00000038 = unaff_x23[1];
      in_stack_00000030 = *unaff_x23;
      in_stack_00000048 = unaff_x23[3];
      in_stack_00000040 = unaff_x23[2];
      in_stack_00000058 = unaff_x23[5];
      in_stack_00000050 = unaff_x23[4];
      lVar3 = FUN_032f13e4(*(undefined8 *)(unaff_x21 + 0x18),&stack0x00000030,
                           *(undefined8 *)
                            System_Func<InputControl,_double,_InputEventPtr,_bool>_TypeInfo);
    }
    else {
      if (unaff_w24 != 2) goto LAB_0525b494;
      in_stack_00000038 = unaff_x23[1];
      in_stack_00000030 = *unaff_x23;
      in_stack_00000048 = unaff_x23[3];
      in_stack_00000040 = unaff_x23[2];
      in_stack_00000058 = unaff_x23[5];
      in_stack_00000050 = unaff_x23[4];
      lVar3 = FUN_032f14d0(*(undefined8 *)(unaff_x21 + 0x18),&stack0x00000030,
                           *(undefined8 *)System_Func<Light,_Camera,_Vector3,_float>_TypeInfo);
    }
    *unaff_x22 = lVar3;
    thunk_FUN_02dc1ef0();
  }
LAB_0525b494:
  lVar3 = thunk_FUN_02d8a53c();
  puVar2 = System_Func<Translate,_Translate,_bool>_TypeInfo;
  if (lVar3 == 0) {
    lVar3 = thunk_FUN_02d8a53c();
    if (lVar3 == 0) {
      lVar3 = thunk_FUN_02d8a53c();
      if (lVar3 == 0) {
        lVar3 = thunk_FUN_02d8a53c();
        if (lVar3 == 0) {
          lVar6 = *(long *)(unaff_x21 + 0x18);
          lVar3 = FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,1);
          if ((unaff_x19 != 0) && (uVar12 = thunk_FUN_02d5dae8(), lVar3 != 0)) {
            FUN_0291b5fc(lVar3,uVar12);
            FUN_0291b630(lVar3,0,uVar12);
            if (lVar6 != 0) {
              FUN_0293621c(1,*(undefined8 *)PTR_DAT_0664b728,lVar6,1,
                           *(undefined8 *)
                            UnityEngine_Pool_GenericPool<CameraScreenRaycaster_CameraRayEnumerator>_TypeInfo
                           ,lVar3);
              puVar1 = System_Func<UploadFileCompletedEventArgs,_byte[]>_TypeInfo;
              lVar3 = *(long *)System_Func<UploadFileCompletedEventArgs,_byte[]>_TypeInfo;
              if (*(int *)(lVar3 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
                lVar3 = *(long *)puVar1;
              }
              return **(long **)(lVar3 + 0xb8);
            }
          }
          goto LAB_0525bfb0;
        }
        if (unaff_w24 == 2) {
          lVar3 = *(long *)(unaff_x21 + 0x18);
          uVar12 = FUN_029361b8(*(undefined8 *)PTR_DAT_06648110);
          if (lVar3 == 0) goto LAB_0525bfb0;
          FUN_0293621c(1,*(undefined8 *)PTR_DAT_0664b728,lVar3,3,
                       *(undefined8 *)UnityEngine_Rendering_GenericPool<XRPassUniversal>_TypeInfo,
                       uVar12);
          in_stack_00000038 = unaff_x23[1];
          in_stack_00000030 = *unaff_x23;
          in_stack_00000048 = unaff_x23[3];
          in_stack_00000040 = unaff_x23[2];
          in_stack_00000058 = unaff_x23[5];
          in_stack_00000050 = unaff_x23[4];
          lVar3 = FUN_0344ab20();
          uVar12 = thunk_FUN_02d8a638(*(undefined8 *)System_Func<string,_Type,_Type>_TypeInfo);
          uVar13 = thunk_FUN_02d8a53c();
          FUN_052614e0(uVar12,uVar13,0);
        }
        else {
          in_stack_00000038 = unaff_x23[1];
          in_stack_00000030 = *unaff_x23;
          in_stack_00000048 = unaff_x23[3];
          in_stack_00000040 = unaff_x23[2];
          in_stack_00000058 = unaff_x23[5];
          in_stack_00000050 = unaff_x23[4];
          lVar3 = FUN_0344a98c();
          uVar12 = thunk_FUN_02d8a638(*(undefined8 *)
                                       System_Func<TransformOrigin,_TransformOrigin,_bool>_TypeInfo)
          ;
          uVar13 = thunk_FUN_02d8a53c();
          FUN_0460fc34(uVar12,uVar13,*(undefined8 *)System_Func<string,_uint,_uint>_TypeInfo);
        }
      }
      else if (unaff_w24 == 1) {
        plVar10 = *(long **)(unaff_x21 + 0x18);
        lVar6 = *(long *)PTR_DAT_06648110;
        lVar3 = *(long *)(lVar6 + 0x38);
        if (lVar3 == 0) {
          FUN_02d87268(lVar6);
          lVar3 = *(long *)(lVar6 + 0x38);
        }
        lVar3 = *(long *)(lVar3 + 0x10);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02d8720c();
        }
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        lVar3 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02d8720c();
        }
        if (plVar10 == (long *)0x0) goto LAB_0525bfb0;
        lVar6 = *plVar10;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        uVar12 = **(undefined8 **)(lVar3 + 0xb8);
        uVar13 = *(undefined8 *)
                  System_Func<string,_int,_AsyncCallback,_object,_IAsyncResult>_TypeInfo;
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0664b728) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_0525bfc4;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_02d87540(plVar10,*(long *)PTR_DAT_0664b728,1);
LAB_0525bfc4:
        (*(code *)*puVar4)(plVar10,3,uVar13,uVar12,puVar4[1]);
        in_stack_00000038 = unaff_x23[1];
        in_stack_00000030 = *unaff_x23;
        in_stack_00000048 = unaff_x23[3];
        in_stack_00000040 = unaff_x23[2];
        in_stack_00000058 = unaff_x23[5];
        in_stack_00000050 = unaff_x23[4];
        lVar3 = FUN_0344a98c();
        uVar12 = thunk_FUN_02d8a638(*(undefined8 *)System_Func<string,_string,_string>_TypeInfo);
        uVar13 = thunk_FUN_02d8a53c();
        FUN_05261158(uVar12,uVar13,0);
      }
      else {
        in_stack_00000038 = unaff_x23[1];
        in_stack_00000030 = *unaff_x23;
        in_stack_00000048 = unaff_x23[3];
        in_stack_00000040 = unaff_x23[2];
        in_stack_00000058 = unaff_x23[5];
        in_stack_00000050 = unaff_x23[4];
        lVar3 = FUN_0344ab20();
        uVar12 = thunk_FUN_02d8a638(*(undefined8 *)
                                     System_Func<TextShadow,_TextShadow,_bool>_TypeInfo);
        uVar13 = thunk_FUN_02d8a53c();
        FUN_0460ff20(uVar12,uVar13,*(undefined8 *)System_Func<string,_ulong,_ulong>_TypeInfo);
      }
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x30) = uVar12;
        thunk_FUN_02dc1ef0((undefined8 *)(lVar3 + 0x30),uVar12);
        return lVar3;
      }
      goto LAB_0525bfb0;
    }
    if (unaff_w24 == 2) {
      lVar3 = thunk_FUN_02d8a638(*(undefined8 *)
                                  System_Func<Vector3,_Vector3,_ValueTuple<Touch,_int,_Nullable<int>>,_EventBase>_TypeInfo
                                );
      FUN_05044d4c(lVar3,0);
      plVar10 = *(long **)(unaff_x21 + 0x18);
      lVar11 = *(long *)PTR_DAT_06648110;
      lVar6 = *(long *)(lVar11 + 0x38);
      if (lVar6 == 0) {
        FUN_02d87268(lVar11);
        lVar6 = *(long *)(lVar11 + 0x38);
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02d8720c();
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      lVar6 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02d8720c();
      }
      if (plVar10 == (long *)0x0) goto LAB_0525bfb0;
      lVar11 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      uVar12 = **(undefined8 **)(lVar6 + 0xb8);
      uVar13 = *(undefined8 *)UnityEngine_Pool_GenericPool<StringBuilder>_TypeInfo;
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0664b728) {
            puVar4 = (undefined8 *)(lVar11 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_0525bcb8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_02d87540(plVar10,*(long *)PTR_DAT_0664b728,1);
LAB_0525bcb8:
      (*(code *)*puVar4)(plVar10,3,uVar13,uVar12,puVar4[1]);
      in_stack_00000038 = unaff_x23[1];
      in_stack_00000030 = *unaff_x23;
      in_stack_00000048 = unaff_x23[3];
      in_stack_00000040 = unaff_x23[2];
      in_stack_00000058 = unaff_x23[5];
      in_stack_00000050 = unaff_x23[4];
      lVar6 = FUN_0344ab20();
      if (lVar3 == 0) goto LAB_0525bfb0;
      plVar10 = (long *)(lVar3 + 0x10);
      *plVar10 = lVar6;
      thunk_FUN_02dc1ef0(plVar10,lVar6);
      if (*plVar10 == 0) goto LAB_0525bfb0;
      uVar9 = *(undefined4 *)(*plVar10 + 0x130);
      uVar12 = thunk_FUN_02d8a638(*(undefined8 *)System_Func<string,_float,_float>_TypeInfo);
      FUN_0368517c(uVar12,1,*(undefined8 *)
                             System_Func<Stream,_Stream_ReadWriteParameters,_AsyncCallback,_object,_IAsyncResult>_TypeInfo
                   ,uVar9,5,*(undefined8 *)System_Func<string,_Hash128,_Hash128>_TypeInfo);
      puVar4 = (undefined8 *)(lVar3 + 0x18);
      *puVar4 = uVar12;
      thunk_FUN_02dc1ef0(puVar4,uVar12);
      uVar12 = thunk_FUN_02d8a638(*(undefined8 *)System_Func<string,_double,_double>_TypeInfo);
      FUN_04d28f90(uVar12,lVar3,
                   *(undefined8 *)
                    System_Func<Vector3,_Vector3,_ValueTuple<EventModifiers,_Vector2>,_EventBase>_TypeInfo
                   ,0);
      if ((*(long *)(lVar3 + 0x10) == 0) || (unaff_x19 == 0)) goto LAB_0525bfb0;
      uVar13 = *puVar4;
      uVar9 = *(undefined4 *)(*(long *)(lVar3 + 0x10) + 0x130);
      lVar3 = thunk_FUN_02d8a53c();
      if (lVar3 == 0) goto LAB_0525c078;
      lVar3 = *(long *)puVar2;
      plVar5 = (long *)thunk_FUN_02d8a53c();
      if (plVar5 == (long *)0x0) goto LAB_0525c084;
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar3) goto LAB_0525be34;
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
    }
    else {
      lVar3 = thunk_FUN_02d8a638(*(undefined8 *)
                                  System_Func<Vector3,_Vector3,_Event,_EventBase>_TypeInfo);
      FUN_05044d4c(lVar3,0);
      in_stack_00000038 = unaff_x23[1];
      in_stack_00000030 = *unaff_x23;
      in_stack_00000048 = unaff_x23[3];
      in_stack_00000040 = unaff_x23[2];
      in_stack_00000058 = unaff_x23[5];
      in_stack_00000050 = unaff_x23[4];
      lVar6 = FUN_0344a98c();
      if (lVar3 == 0) goto LAB_0525bfb0;
      plVar10 = (long *)(lVar3 + 0x10);
      *plVar10 = lVar6;
      thunk_FUN_02dc1ef0(plVar10,lVar6);
      uVar12 = thunk_FUN_02d8a638(*(undefined8 *)System_Func<string,_double,_double>_TypeInfo);
      FUN_04d28f90(uVar12,lVar3,
                   *(undefined8 *)
                    System_Func<Vector3,_Vector3,_ValueTuple<int,_int,_EventModifiers,_Nullable<int>>,_EventBase>_TypeInfo
                   ,0);
      lVar3 = *plVar10;
      if ((lVar3 == 0) || (unaff_x19 == 0)) goto LAB_0525bfb0;
      uVar13 = *(undefined8 *)(lVar3 + 0x138);
      uVar9 = *(undefined4 *)(lVar3 + 0x130);
      lVar3 = thunk_FUN_02d8a53c();
      if (lVar3 == 0) goto LAB_0525c078;
      lVar3 = *(long *)puVar2;
      plVar5 = (long *)thunk_FUN_02d8a53c();
      if (plVar5 == (long *)0x0) goto LAB_0525c084;
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar3) goto LAB_0525be34;
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
    }
  }
  else if (unaff_w24 == 1) {
    lVar3 = thunk_FUN_02d8a638(*(undefined8 *)
                                System_Func<string,_AsyncCallback,_object,_IAsyncResult>_TypeInfo);
    FUN_05044d4c(lVar3,0);
    plVar10 = *(long **)(unaff_x21 + 0x18);
    lVar11 = *(long *)PTR_DAT_06648110;
    lVar6 = *(long *)(lVar11 + 0x38);
    if (lVar6 == 0) {
      FUN_02d87268(lVar11);
      lVar6 = *(long *)(lVar11 + 0x38);
    }
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02d8720c();
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar6 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02d8720c();
    }
    if (plVar10 == (long *)0x0) {
LAB_0525bfb0:
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar11 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
    uVar12 = **(undefined8 **)(lVar6 + 0xb8);
    uVar13 = *(undefined8 *)UnityEngine_Pool_GenericPool<XRLayout>_TypeInfo;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0664b728) {
          puVar4 = (undefined8 *)(lVar11 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_0525b990;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d87540(plVar10,*(long *)PTR_DAT_0664b728,1);
LAB_0525b990:
    (*(code *)*puVar4)(plVar10,3,uVar13,uVar12,puVar4[1]);
    in_stack_00000038 = unaff_x23[1];
    in_stack_00000030 = *unaff_x23;
    in_stack_00000048 = unaff_x23[3];
    in_stack_00000040 = unaff_x23[2];
    in_stack_00000058 = unaff_x23[5];
    in_stack_00000050 = unaff_x23[4];
    lVar6 = FUN_0344a98c();
    if (lVar3 == 0) goto LAB_0525bfb0;
    plVar10 = (long *)(lVar3 + 0x10);
    *plVar10 = lVar6;
    thunk_FUN_02dc1ef0(plVar10,lVar6);
    if (*plVar10 == 0) goto LAB_0525bfb0;
    uVar9 = *(undefined4 *)(*plVar10 + 0x130);
    uVar12 = thunk_FUN_02d8a638(*(undefined8 *)System_Func<string,_long,_long>_TypeInfo);
    FUN_036857a4(uVar12,1,*(undefined8 *)UnityEngine_Rendering_GenericPool<XRPass>_TypeInfo,uVar9,5,
                 *(undefined8 *)System_Func<string,_int,_int>_TypeInfo);
    puVar4 = (undefined8 *)(lVar3 + 0x18);
    *puVar4 = uVar12;
    thunk_FUN_02dc1ef0(puVar4,uVar12);
    uVar12 = thunk_FUN_02d8a638(*(undefined8 *)System_Func<string,_bool,_bool>_TypeInfo);
    FUN_04d28f90(uVar12,lVar3,
                 *(undefined8 *)
                  System_Func<Stream,_XmlReaderSettings,_XmlParserContext,_XmlReader>_TypeInfo,0);
    if ((*(long *)(lVar3 + 0x10) == 0) || (unaff_x19 == 0)) goto LAB_0525bfb0;
    uVar13 = *puVar4;
    uVar9 = *(undefined4 *)(*(long *)(lVar3 + 0x10) + 0x130);
    lVar3 = thunk_FUN_02d8a53c();
    if (lVar3 == 0) goto LAB_0525c078;
    lVar3 = *(long *)puVar1;
    plVar5 = (long *)thunk_FUN_02d8a53c();
    if (plVar5 == (long *)0x0) goto LAB_0525c084;
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar3) goto LAB_0525be34;
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
  }
  else {
    lVar3 = thunk_FUN_02d8a638(*(undefined8 *)
                                System_Func<Vector3,_Vector3,_ValueTuple<EventModifiers,_Nullable<int>>,_EventBase>_TypeInfo
                              );
    FUN_05044d4c(lVar3,0);
    in_stack_00000038 = unaff_x23[1];
    in_stack_00000030 = *unaff_x23;
    in_stack_00000048 = unaff_x23[3];
    in_stack_00000040 = unaff_x23[2];
    in_stack_00000058 = unaff_x23[5];
    in_stack_00000050 = unaff_x23[4];
    lVar6 = FUN_0344ab20();
    if (lVar3 == 0) goto LAB_0525bfb0;
    plVar10 = (long *)(lVar3 + 0x10);
    *plVar10 = lVar6;
    thunk_FUN_02dc1ef0(plVar10,lVar6);
    uVar12 = thunk_FUN_02d8a638(*(undefined8 *)System_Func<string,_bool,_bool>_TypeInfo);
    FUN_04d28f90(uVar12,lVar3,
                 *(undefined8 *)System_Func<StyleValues,_StyleValues,_float,_StyleValues>_TypeInfo,0
                );
    lVar3 = *plVar10;
    if ((lVar3 == 0) || (unaff_x19 == 0)) goto LAB_0525bfb0;
    uVar13 = *(undefined8 *)(lVar3 + 0x138);
    uVar9 = *(undefined4 *)(lVar3 + 0x130);
    lVar3 = thunk_FUN_02d8a53c();
    if (lVar3 == 0) {
LAB_0525c078:
                    /* WARNING: Subroutine does not return */
      FUN_02d4e268();
    }
    lVar3 = *(long *)puVar1;
    plVar5 = (long *)thunk_FUN_02d8a53c();
    if (plVar5 == (long *)0x0) {
LAB_0525c084:
                    /* WARNING: Subroutine does not return */
      FUN_02d4e268();
    }
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar3) goto LAB_0525be34;
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
  }
  puVar4 = (undefined8 *)FUN_02d87540(plVar5,lVar3,0);
LAB_0525be40:
  (*(code *)*puVar4)(plVar5,uVar12,uVar13,uVar9,puVar4[1]);
  return *plVar10;
LAB_0525be34:
  puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
  goto LAB_0525be40;
}


