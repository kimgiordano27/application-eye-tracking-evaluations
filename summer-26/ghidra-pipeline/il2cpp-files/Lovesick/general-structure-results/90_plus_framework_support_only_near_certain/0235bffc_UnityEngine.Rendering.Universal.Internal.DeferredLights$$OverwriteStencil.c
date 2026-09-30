/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.DeferredLights$$OverwriteStencil
ENTRY_POINT: 0235bffc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


long UnityEngine_Rendering_Universal_Internal_DeferredLights__OverwriteStencil
               (undefined1 param_1 [16],float param_2,float param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long unaff_x19;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long unaff_x24;
  int iVar15;
  long unaff_x28;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 in_stack_00000008;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  int iStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(PTR_DAT_033f6548);
  thunk_FUN_00d48444(Method_Sirenix_Serialization_JsonDataWriter_EnsureBufferSpace__);
  thunk_FUN_00d48444(
                    Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                    );
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<Grabbable>_Contains__);
  thunk_FUN_00d48444(Method_DistanceBasedLOD_<>c_<Sort>b__7_0__);
  thunk_FUN_00d48444(StringLiteral_11695);
  thunk_FUN_00d48444(Method_System_Nullable<InputDevice>_get_Value__);
  thunk_FUN_00d48444(System_Collections_Generic_IEnumerator<KeyValuePair<object,_object>>_TypeInfo);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<TimelineClip>_ToArray__);
  thunk_FUN_00d48444(Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__);
  thunk_FUN_00d48444(StringLiteral_9768);
  thunk_FUN_00d48444(Method_System_Decimal_DecCalc_VarDecFromR4__);
  *(undefined1 *)(unaff_x19 + 0xd41) = 1;
  puVar4 = StringLiteral_9768;
  if (unaff_x24 != 0) {
    if (*(int *)(unaff_x24 + 0x18) < 3) {
      return 0;
    }
    if (*(int *)(*(long *)Method_System_Decimal_DecCalc_VarDecFromR4__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar6 = FUN_0233dbd8();
    lVar9 = *(long *)puVar4;
    iStack0000000000000038 = *(int *)(unaff_x24 + 0x18);
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar9);
      lVar9 = *(long *)puVar4;
    }
    puVar3 = 
    Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c_<CreateMapOverlaySize>b__1_2__
    ;
    lVar11 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x60);
    if (lVar11 == 0) {
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar9);
        lVar9 = *(long *)puVar4;
      }
      uVar14 = **(undefined8 **)(lVar9 + 0xb8);
      lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if (lVar11 == 0) goto LAB_0235c734;
      FUN_012d239c(lVar11,uVar14,
                   *(undefined8 *)
                    System_Collections_Generic_IEnumerator<KeyValuePair<object,_object>>_TypeInfo,0)
      ;
      *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x60) = lVar11;
    }
    lVar9 = FUN_010b7894(lVar11,iStack0000000000000038,*(undefined8 *)StringLiteral_3471);
    lVar11 = *(long *)puVar4;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar11);
      lVar11 = *(long *)puVar4;
    }
    puVar3 = StringLiteral_7457;
    lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x68);
    if (lVar12 == 0) {
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar11);
        lVar11 = *(long *)puVar4;
      }
      uVar14 = **(undefined8 **)(lVar11 + 0xb8);
      lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if (lVar12 == 0) goto LAB_0235c734;
      FUN_012d239c(lVar12,uVar14,
                   *(undefined8 *)Method_System_Collections_Generic_List<TimelineClip>_ToArray__,0);
      *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x68) = lVar12;
    }
    puVar2 = PTR_DAT_033eac80;
    lVar11 = FUN_010b7894(lVar12,iStack0000000000000038,*(undefined8 *)PTR_DAT_033eac80);
    lVar12 = *(long *)puVar4;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar12);
      lVar12 = *(long *)puVar4;
    }
    lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x70);
    if (lVar13 == 0) {
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar12);
        lVar12 = *(long *)puVar4;
      }
      uVar14 = **(undefined8 **)(lVar12 + 0xb8);
      lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if (lVar13 == 0) goto LAB_0235c734;
      FUN_012d239c(lVar13,uVar14,
                   *(undefined8 *)Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__
                   ,0);
      *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x70) = lVar13;
    }
    lVar12 = FUN_010b7894(lVar13,iStack0000000000000038,*(undefined8 *)puVar2);
    uVar14 = FUN_0233b110(in_stack_00000020,unaff_x24,0);
    if ((unaff_x28 != 0) &&
       (fVar16 = (float)FUN_02302500(in_stack_00000020,*(undefined8 *)(unaff_x28 + 0x10),0),
       puVar2 = StringLiteral_11695, puVar3 = StringLiteral_4747,
       puVar4 = Method_DistanceBasedLOD_<>c_<Sort>b__7_0__, lVar6 != 0)) {
      fVar19 = param_2;
      fVar20 = param_3;
      if (0 < *(int *)(lVar6 + 0x18)) {
        iVar15 = 0;
        iVar10 = 0;
        do {
          FUN_0132138c(lVar6,iVar15,&stack0x00000028,
                       *(undefined8 *)Method_System_Collections_Generic_List<Grabbable>_Contains__);
          uVar5 = uStack0000000000000028;
          if ((lVar9 == 0) ||
             (FUN_0132138c(lVar9,iVar10,&stack0x00000028,*(undefined8 *)puVar4),
             in_stack_00000020 == 0)) goto LAB_0235c734;
          lVar13 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
          FUN_0132138c(in_stack_00000020,uVar5,&stack0x00000028,
                       *(undefined8 *)
                        Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                      );
          if ((lVar13 == 0) ||
             ((FUN_00ca0af8(lVar13,CONCAT44(uStack000000000000002c,uStack0000000000000028),
                            *(undefined8 *)OVRManager_XrApi_TypeInfo), lVar11 == 0 ||
              (FUN_0132138c(lVar11,iVar10,&stack0x00000028,*(undefined8 *)puVar2),
              in_stack_00000018 == 0)))) goto LAB_0235c734;
          lVar13 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
          uStack0000000000000028 = uVar5;
          FUN_01299bc0(in_stack_00000018,&stack0x00000028,(long)&stack0x00000038 + 4,
                       *(undefined8 *)Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
          if (lVar13 == 0) goto LAB_0235c734;
          FUN_00ac20f0(lVar13,uStack000000000000003c,*(undefined8 *)puVar3);
          uStack0000000000000028 = uVar5;
          uVar7 = FUN_01322618(unaff_x24,&stack0x00000028,*(undefined8 *)PTR_DAT_033f4718);
          if ((uVar7 & 1) != 0) {
            if (lVar12 == 0) goto LAB_0235c734;
            FUN_0132138c(lVar12,iVar10,&stack0x00000028,*(undefined8 *)puVar2);
            lVar13 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
            FUN_0132138c(lVar9,iVar10,&stack0x00000028,*(undefined8 *)puVar4);
            if ((CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) || (lVar13 == 0))
            goto LAB_0235c734;
            FUN_00ac20f0(lVar13,*(undefined4 *)
                                 (CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x18),
                         *(undefined8 *)puVar3);
            FUN_0132138c(lVar9,iVar10,&stack0x00000028,*(undefined8 *)puVar4);
            if (CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) goto LAB_0235c734;
            FUN_00ca0af8(CONCAT44(uStack000000000000002c,uStack0000000000000028),uVar14,
                         *(undefined8 *)OVRManager_XrApi_TypeInfo);
            FUN_0132138c(lVar11,iVar10,&stack0x00000028,*(undefined8 *)puVar2);
            if (CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) goto LAB_0235c734;
            FUN_00ac20f0(CONCAT44(uStack000000000000002c,uStack0000000000000028),
                         in_stack_00000008._4_4_,*(undefined8 *)puVar3);
            iVar1 = 0;
            if (iStack0000000000000038 != 0) {
              iVar1 = (iVar10 + 1) / iStack0000000000000038;
            }
            iVar10 = (iVar10 + 1) - iVar1 * iStack0000000000000038;
            FUN_0132138c(lVar12,iVar10,&stack0x00000028,*(undefined8 *)puVar2);
            lVar13 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
            FUN_0132138c(lVar9,iVar10,&stack0x00000028,*(undefined8 *)puVar4);
            if ((CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) || (lVar13 == 0))
            goto LAB_0235c734;
            FUN_00ac20f0(lVar13,*(undefined4 *)
                                 (CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x18),
                         *(undefined8 *)puVar3);
            FUN_0132138c(lVar9,iVar10,&stack0x00000028,*(undefined8 *)puVar4);
            lVar13 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
            FUN_0132138c(in_stack_00000020,uVar5,&stack0x00000028,
                         *(undefined8 *)
                          Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                        );
            if (lVar13 == 0) goto LAB_0235c734;
            FUN_00ca0af8(lVar13,CONCAT44(uStack000000000000002c,uStack0000000000000028),
                         *(undefined8 *)OVRManager_XrApi_TypeInfo);
            FUN_0132138c(lVar11,iVar10,&stack0x00000028,*(undefined8 *)puVar2);
            lVar13 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
            uStack0000000000000028 = uVar5;
            FUN_01299bc0(in_stack_00000018,&stack0x00000028,(long)&stack0x00000038 + 4,
                         *(undefined8 *)Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
            if (lVar13 == 0) goto LAB_0235c734;
            FUN_00ac20f0(lVar13,uStack000000000000003c,*(undefined8 *)puVar3);
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < *(int *)(lVar6 + 0x18));
      }
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)Method_System_Nullable<InputDevice>_get_Value__);
      if ((lVar6 != 0) &&
         (FUN_01320e50(lVar6,*(undefined8 *)StringLiteral_10062),
         puVar3 = 
         Method_System_Collections_Generic_List<TuneTargetSteppedGeometry_SteppedRendererSet>_GetEnumerator__
         , lVar9 != 0)) {
        if (*(int *)(lVar9 + 0x18) < 1) {
          return lVar6;
        }
        iVar15 = 0;
        while( true ) {
          FUN_0132138c(lVar9,iVar15,&stack0x00000028,*(undefined8 *)puVar4);
          if (CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) break;
          if (2 < *(int *)(CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x18)) {
            FUN_0132138c(lVar9,iVar15,&stack0x00000028,*(undefined8 *)puVar4);
            lVar13 = FUN_0234aad8(CONCAT44(uStack000000000000002c,uStack0000000000000028),0);
            if ((lVar11 == 0) ||
               (FUN_0132138c(lVar11,iVar15,&stack0x00000028,*(undefined8 *)puVar2), lVar13 == 0))
            break;
            *(ulong *)(lVar13 + 0x20) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
            FUN_0132138c(lVar9,iVar15,&stack0x00000028,*(undefined8 *)puVar4);
            if (*(long *)(lVar13 + 0x10) == 0) break;
            fVar17 = (float)FUN_02302500(CONCAT44(uStack000000000000002c,uStack0000000000000028),
                                         *(undefined8 *)(*(long *)(lVar13 + 0x10) + 0x10),0);
            fVar18 = param_2 * fVar19;
            fVar19 = param_3 * fVar20;
            if (fVar19 + fVar16 * fVar17 + fVar18 < 0.0) {
              if (*(long *)(lVar13 + 0x10) == 0) break;
              FUN_022fa1b4(*(long *)(lVar13 + 0x10),0);
            }
            if (lVar12 == 0) break;
            FUN_0132138c(lVar12,iVar15,&stack0x00000028,*(undefined8 *)puVar2);
            uVar14 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
            lVar8 = thunk_FUN_00d62348(*(undefined8 *)
                                        System_Collections_Generic_IEnumerator<CameraEvent>_TypeInfo
                                      );
            if (lVar8 == 0) break;
            FUN_017b46ec(lVar8,0);
            *(long *)(lVar8 + 0x10) = lVar13;
            *(undefined8 *)(lVar8 + 0x18) = uVar14;
            FUN_00ca3248(lVar6,lVar8,*(undefined8 *)puVar3);
          }
          iVar15 = iVar15 + 1;
          if (*(int *)(lVar9 + 0x18) <= iVar15) {
            return lVar6;
          }
        }
      }
    }
  }
LAB_0235c734:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


