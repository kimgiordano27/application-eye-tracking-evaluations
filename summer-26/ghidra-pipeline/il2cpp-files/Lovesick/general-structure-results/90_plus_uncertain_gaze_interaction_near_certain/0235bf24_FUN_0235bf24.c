/*
FUNCTION_NAME: FUN_0235bf24
ENTRY_POINT: 0235bf24
PROGRAM: Lovesick-libil2cpp.so
SCORE: 204
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_2
*/


long FUN_0235bf24(undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
                 long param_6,long param_7,undefined4 param_8)

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
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  undefined8 uVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_74;
  
  if ((DAT_03781d41 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033eac80);
    thunk_FUN_00d48444(StringLiteral_3471);
    thunk_FUN_00d48444(System_Collections_Generic_IEnumerator<CameraEvent>_TypeInfo);
    thunk_FUN_00d48444(Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c_<CreateMapOverlaySize>b__1_2__
                      );
    thunk_FUN_00d48444(StringLiteral_7457);
    thunk_FUN_00d48444(StringLiteral_4747);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<TuneTargetSteppedGeometry_SteppedRendererSet>_GetEnumerator__
                      );
    thunk_FUN_00d48444(OVRManager_XrApi_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f4718);
    thunk_FUN_00d48444(StringLiteral_10062);
    thunk_FUN_00d48444(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JProperty>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ef0a8);
    thunk_FUN_00d48444(PTR_DAT_033f6548);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_JsonDataWriter_EnsureBufferSpace__);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Grabbable>_Contains__);
    thunk_FUN_00d48444(Method_DistanceBasedLOD_<>c_<Sort>b__7_0__);
    thunk_FUN_00d48444(StringLiteral_11695);
    thunk_FUN_00d48444(Method_System_Nullable<InputDevice>_get_Value__);
    thunk_FUN_00d48444(System_Collections_Generic_IEnumerator<KeyValuePair<object,_object>>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<TimelineClip>_ToArray__);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__);
    thunk_FUN_00d48444(StringLiteral_9768);
    thunk_FUN_00d48444(Method_System_Decimal_DecCalc_VarDecFromR4__);
    DAT_03781d41 = 1;
  }
  puVar4 = StringLiteral_9768;
  if (param_5 != 0) {
    if (*(int *)(param_5 + 0x18) < 3) {
      return 0;
    }
    if (*(int *)(*(long *)Method_System_Decimal_DecCalc_VarDecFromR4__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar6 = FUN_0233dbd8(param_4,0);
    lVar9 = *(long *)puVar4;
    iVar14 = *(int *)(param_5 + 0x18);
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
      uVar15 = **(undefined8 **)(lVar9 + 0xb8);
      lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if (lVar11 == 0) goto LAB_0235c734;
      FUN_012d239c(lVar11,uVar15,
                   *(undefined8 *)
                    System_Collections_Generic_IEnumerator<KeyValuePair<object,_object>>_TypeInfo,0)
      ;
      *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x60) = lVar11;
    }
    lVar9 = FUN_010b7894(lVar11,iVar14,*(undefined8 *)StringLiteral_3471);
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
      uVar15 = **(undefined8 **)(lVar11 + 0xb8);
      lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if (lVar12 == 0) goto LAB_0235c734;
      FUN_012d239c(lVar12,uVar15,
                   *(undefined8 *)Method_System_Collections_Generic_List<TimelineClip>_ToArray__,0);
      *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x68) = lVar12;
    }
    puVar2 = PTR_DAT_033eac80;
    lVar11 = FUN_010b7894(lVar12,iVar14,*(undefined8 *)PTR_DAT_033eac80);
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
      uVar15 = **(undefined8 **)(lVar12 + 0xb8);
      lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if (lVar13 == 0) goto LAB_0235c734;
      FUN_012d239c(lVar13,uVar15,
                   *(undefined8 *)Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__
                   ,0);
      *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x70) = lVar13;
    }
    lVar12 = FUN_010b7894(lVar13,iVar14,*(undefined8 *)puVar2);
    uVar15 = FUN_0233b110(param_6,param_5,0);
    if ((param_4 != 0) &&
       (fVar17 = (float)FUN_02302500(param_6,*(undefined8 *)(param_4 + 0x10),0),
       puVar2 = StringLiteral_11695, puVar3 = StringLiteral_4747,
       puVar4 = Method_DistanceBasedLOD_<>c_<Sort>b__7_0__, lVar6 != 0)) {
      fVar20 = param_2;
      fVar21 = param_3;
      if (0 < *(int *)(lVar6 + 0x18)) {
        iVar16 = 0;
        iVar10 = 0;
        do {
          FUN_0132138c(lVar6,iVar16,&local_88,
                       *(undefined8 *)Method_System_Collections_Generic_List<Grabbable>_Contains__);
          uVar5 = local_88;
          if ((lVar9 == 0) ||
             (FUN_0132138c(lVar9,iVar10,&local_88,*(undefined8 *)puVar4), param_6 == 0))
          goto LAB_0235c734;
          lVar13 = CONCAT44(uStack_84,local_88);
          FUN_0132138c(param_6,uVar5,&local_88,
                       *(undefined8 *)
                        Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                      );
          if ((lVar13 == 0) ||
             ((FUN_00ca0af8(lVar13,CONCAT44(uStack_84,local_88),
                            *(undefined8 *)OVRManager_XrApi_TypeInfo), lVar11 == 0 ||
              (FUN_0132138c(lVar11,iVar10,&local_88,*(undefined8 *)puVar2), param_7 == 0))))
          goto LAB_0235c734;
          lVar13 = CONCAT44(uStack_84,local_88);
          FUN_01299bc0(param_7,&local_88,&local_74,
                       *(undefined8 *)Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
          if (lVar13 == 0) goto LAB_0235c734;
          FUN_00ac20f0(lVar13,local_74,*(undefined8 *)puVar3);
          local_88 = uVar5;
          uVar7 = FUN_01322618(param_5,&local_88,*(undefined8 *)PTR_DAT_033f4718);
          if ((uVar7 & 1) != 0) {
            if (lVar12 == 0) goto LAB_0235c734;
            FUN_0132138c(lVar12,iVar10,&local_88,*(undefined8 *)puVar2);
            lVar13 = CONCAT44(uStack_84,local_88);
            FUN_0132138c(lVar9,iVar10,&local_88,*(undefined8 *)puVar4);
            if ((CONCAT44(uStack_84,local_88) == 0) || (lVar13 == 0)) goto LAB_0235c734;
            FUN_00ac20f0(lVar13,*(undefined4 *)(CONCAT44(uStack_84,local_88) + 0x18),
                         *(undefined8 *)puVar3);
            FUN_0132138c(lVar9,iVar10,&local_88,*(undefined8 *)puVar4);
            if (CONCAT44(uStack_84,local_88) == 0) goto LAB_0235c734;
            FUN_00ca0af8(CONCAT44(uStack_84,local_88),uVar15,
                         *(undefined8 *)OVRManager_XrApi_TypeInfo);
            FUN_0132138c(lVar11,iVar10,&local_88,*(undefined8 *)puVar2);
            if (CONCAT44(uStack_84,local_88) == 0) goto LAB_0235c734;
            FUN_00ac20f0(CONCAT44(uStack_84,local_88),param_8,*(undefined8 *)puVar3);
            iVar1 = 0;
            if (iVar14 != 0) {
              iVar1 = (iVar10 + 1) / iVar14;
            }
            iVar10 = (iVar10 + 1) - iVar1 * iVar14;
            FUN_0132138c(lVar12,iVar10,&local_88,*(undefined8 *)puVar2);
            lVar13 = CONCAT44(uStack_84,local_88);
            FUN_0132138c(lVar9,iVar10,&local_88,*(undefined8 *)puVar4);
            if ((CONCAT44(uStack_84,local_88) == 0) || (lVar13 == 0)) goto LAB_0235c734;
            FUN_00ac20f0(lVar13,*(undefined4 *)(CONCAT44(uStack_84,local_88) + 0x18),
                         *(undefined8 *)puVar3);
            FUN_0132138c(lVar9,iVar10,&local_88,*(undefined8 *)puVar4);
            lVar13 = CONCAT44(uStack_84,local_88);
            FUN_0132138c(param_6,uVar5,&local_88,
                         *(undefined8 *)
                          Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                        );
            if (lVar13 == 0) goto LAB_0235c734;
            FUN_00ca0af8(lVar13,CONCAT44(uStack_84,local_88),
                         *(undefined8 *)OVRManager_XrApi_TypeInfo);
            FUN_0132138c(lVar11,iVar10,&local_88,*(undefined8 *)puVar2);
            lVar13 = CONCAT44(uStack_84,local_88);
            local_88 = uVar5;
            FUN_01299bc0(param_7,&local_88,&local_74,
                         *(undefined8 *)Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
            if (lVar13 == 0) goto LAB_0235c734;
            FUN_00ac20f0(lVar13,local_74,*(undefined8 *)puVar3);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < *(int *)(lVar6 + 0x18));
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
        iVar14 = 0;
        while( true ) {
          FUN_0132138c(lVar9,iVar14,&local_88,*(undefined8 *)puVar4);
          if (CONCAT44(uStack_84,local_88) == 0) break;
          if (2 < *(int *)(CONCAT44(uStack_84,local_88) + 0x18)) {
            FUN_0132138c(lVar9,iVar14,&local_88,*(undefined8 *)puVar4);
            lVar13 = FUN_0234aad8(CONCAT44(uStack_84,local_88),0);
            if ((lVar11 == 0) ||
               (FUN_0132138c(lVar11,iVar14,&local_88,*(undefined8 *)puVar2), lVar13 == 0)) break;
            *(ulong *)(lVar13 + 0x20) = CONCAT44(uStack_84,local_88);
            FUN_0132138c(lVar9,iVar14,&local_88,*(undefined8 *)puVar4);
            if (*(long *)(lVar13 + 0x10) == 0) break;
            fVar18 = (float)FUN_02302500(CONCAT44(uStack_84,local_88),
                                         *(undefined8 *)(*(long *)(lVar13 + 0x10) + 0x10),0);
            fVar19 = param_2 * fVar20;
            fVar20 = param_3 * fVar21;
            if (fVar20 + fVar17 * fVar18 + fVar19 < 0.0) {
              if (*(long *)(lVar13 + 0x10) == 0) break;
              FUN_022fa1b4(*(long *)(lVar13 + 0x10),0);
            }
            if (lVar12 == 0) break;
            FUN_0132138c(lVar12,iVar14,&local_88,*(undefined8 *)puVar2);
            uVar15 = CONCAT44(uStack_84,local_88);
            lVar8 = thunk_FUN_00d62348(*(undefined8 *)
                                        System_Collections_Generic_IEnumerator<CameraEvent>_TypeInfo
                                      );
            if (lVar8 == 0) break;
            FUN_017b46ec(lVar8,0);
            *(long *)(lVar8 + 0x10) = lVar13;
            *(undefined8 *)(lVar8 + 0x18) = uVar15;
            FUN_00ca3248(lVar6,lVar8,*(undefined8 *)puVar3);
          }
          iVar14 = iVar14 + 1;
          if (*(int *)(lVar9 + 0x18) <= iVar14) {
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


