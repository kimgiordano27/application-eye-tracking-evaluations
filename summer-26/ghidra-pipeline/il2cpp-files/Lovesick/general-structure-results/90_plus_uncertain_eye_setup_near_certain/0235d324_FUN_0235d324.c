/*
FUNCTION_NAME: FUN_0235d324
ENTRY_POINT: 0235d324
PROGRAM: Lovesick-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_0235d324(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  undefined8 local_68;
  
  puVar2 = Method_System_Decimal_DecCalc_VarDecFromR4__;
  if ((DAT_03781d3e & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033eac80);
    thunk_FUN_00d48444(StringLiteral_3471);
    thunk_FUN_00d48444(System_Collections_Generic_IEnumerator<CameraEvent>_TypeInfo);
    thunk_FUN_00d48444(Method_System_IO_TextReader_Read__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c_<CreateMapOverlaySize>b__1_2__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_UIR_LinkedPool<Allocator2D_Row>__ctor__);
    thunk_FUN_00d48444(StringLiteral_7457);
    thunk_FUN_00d48444(Method_System_Net_Configuration_BypassElementCollection__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Specialized_NameObjectCollectionBase_NameObjectKeysEnumerator_get_Current__
                      );
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<Task>,_SemaphoreSlim_<WaitUntilCountOrTimeoutAsync>d__32>__
                      );
    thunk_FUN_00d48444(StringLiteral_4747);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<TuneTargetSteppedGeometry_SteppedRendererSet>_GetEnumerator__
                      );
    thunk_FUN_00d48444(OVRManager_XrApi_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_LowLevel_InputStateHistory<TouchState>_RecordStateChange__
                      );
    thunk_FUN_00d48444(StringLiteral_10062);
    thunk_FUN_00d48444(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JProperty>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f5fe8);
    thunk_FUN_00d48444(PTR_DAT_033ef0a8);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_JsonDataWriter_EnsureBufferSpace__);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Grabbable>_Contains__);
    thunk_FUN_00d48444(Method_DistanceBasedLOD_<>c_<Sort>b__7_0__);
    thunk_FUN_00d48444(StringLiteral_11695);
    thunk_FUN_00d48444(Method_System_Nullable<InputDevice>_get_Value__);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_SelectingInteractorRemoved__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_UI_DebugUIHandlerVector3_<SetWidget>b__7_4__);
    thunk_FUN_00d48444(StringLiteral_6847);
    thunk_FUN_00d48444(StringLiteral_9768);
    thunk_FUN_00d48444(Method_System_Decimal_DecCalc_VarDecFromR4__);
    DAT_03781d3e = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar6 = FUN_0233dbd8(param_1,0);
  puVar2 = StringLiteral_9768;
  if ((param_2 != 0) && (param_1 != 0)) {
    iVar10 = *(int *)(param_2 + 0x18);
    uVar7 = FUN_022f8990(param_1,0);
    uVar7 = FUN_0233b110(param_3,uVar7,0);
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar9);
      lVar9 = *(long *)puVar2;
    }
    puVar3 = 
    Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c_<CreateMapOverlaySize>b__1_2__
    ;
    lVar11 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x40);
    if (lVar11 == 0) {
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar9);
        lVar9 = *(long *)puVar2;
      }
      uVar13 = **(undefined8 **)(lVar9 + 0xb8);
      lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if (lVar11 == 0) goto LAB_0235db54;
      FUN_012d239c(lVar11,uVar13,
                   *(undefined8 *)
                    Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_SelectingInteractorRemoved__
                   ,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40) = lVar11;
    }
    lVar9 = FUN_010b7894(lVar11,iVar10,*(undefined8 *)StringLiteral_3471);
    lVar11 = *(long *)puVar2;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar11);
      lVar11 = *(long *)puVar2;
    }
    puVar3 = StringLiteral_7457;
    lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x48);
    if (lVar14 == 0) {
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar11);
        lVar11 = *(long *)puVar2;
      }
      uVar13 = **(undefined8 **)(lVar11 + 0xb8);
      lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if (lVar14 == 0) goto LAB_0235db54;
      FUN_012d239c(lVar14,uVar13,
                   *(undefined8 *)
                    Method_UnityEngine_Rendering_UI_DebugUIHandlerVector3_<SetWidget>b__7_4__,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48) = lVar14;
    }
    lVar11 = FUN_010b7894(lVar14,iVar10,*(undefined8 *)PTR_DAT_033eac80);
    lVar14 = *(long *)puVar2;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar14);
      lVar14 = *(long *)puVar2;
    }
    puVar3 = Method_UnityEngine_UIElements_UIR_LinkedPool<Allocator2D_Row>__ctor__;
    lVar16 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x50);
    if (lVar16 == 0) {
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar14);
        lVar14 = *(long *)puVar2;
      }
      uVar13 = **(undefined8 **)(lVar14 + 0xb8);
      lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if (lVar16 == 0) goto LAB_0235db54;
      FUN_012d239c(lVar16,uVar13,*(undefined8 *)StringLiteral_6847,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50) = lVar16;
    }
    puVar2 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<Task>,_SemaphoreSlim_<WaitUntilCountOrTimeoutAsync>d__32>__
    ;
    uVar13 = FUN_010dcdb8(param_2,lVar16,*(undefined8 *)Method_System_IO_TextReader_Read__);
    lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if ((lVar14 != 0) &&
       (FUN_012dd468(lVar14,uVar13,
                     *(undefined8 *)
                      Method_System_Collections_Specialized_NameObjectCollectionBase_NameObjectKeysEnumerator_get_Current__
                    ), puVar5 = Method_DistanceBasedLOD_<>c_<Sort>b__7_0__,
       puVar3 = 
       Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
       , puVar2 = OVRManager_XrApi_TypeInfo, lVar6 != 0)) {
      if (0 < *(int *)(lVar6 + 0x18)) {
        iVar15 = 0;
        iVar17 = 0;
        puVar12 = (undefined8 *)Method_System_Collections_Generic_List<Grabbable>_Contains__;
        do {
          if (lVar9 == 0) goto LAB_0235db54;
          iVar1 = 0;
          if (iVar10 != 0) {
            iVar1 = iVar17 / iVar10;
          }
          FUN_0132138c(lVar9,iVar17 - iVar1 * iVar10,&local_68,*(undefined8 *)puVar5);
          uVar8 = local_68;
          FUN_0132138c(lVar6,iVar15,&local_68,*puVar12);
          if ((param_3 == 0) ||
             (FUN_0132138c(param_3,local_68,&local_68,*(undefined8 *)puVar3), uVar8 == 0))
          goto LAB_0235db54;
          FUN_00ca0af8(uVar8,local_68,*(undefined8 *)puVar2);
          FUN_0132138c(lVar6,iVar15,&local_68,*puVar12);
          uVar8 = FUN_012ddcec(lVar14,&local_68,
                               *(undefined8 *)
                                Method_System_Net_Configuration_BypassElementCollection__ctor__);
          if ((uVar8 & 1) != 0) {
            FUN_0132138c(lVar6,iVar15,&local_68,*puVar12);
            FUN_0132138c(param_3,local_68 & 0xffffffff,&local_68,*(undefined8 *)puVar3);
            uVar8 = local_68;
            FUN_0132138c(lVar6,iVar15,&local_68,*puVar12);
            FUN_0132138c(param_3,local_68._4_4_,&local_68,*(undefined8 *)puVar3);
            uVar13 = FUN_0233bc34(0x3f000000,uVar8,local_68,0);
            if (lVar11 == 0) goto LAB_0235db54;
            FUN_0132138c(lVar11,iVar17,&local_68,*(undefined8 *)StringLiteral_11695);
            uVar8 = local_68;
            FUN_0132138c(lVar9,iVar17,&local_68,*(undefined8 *)puVar5);
            if ((local_68 == 0) || (uVar8 == 0)) goto LAB_0235db54;
            FUN_00ac20f0(uVar8,*(undefined4 *)(local_68 + 0x18),*(undefined8 *)StringLiteral_4747);
            FUN_0132138c(lVar9,iVar17,&local_68,*(undefined8 *)puVar5);
            if (local_68 == 0) goto LAB_0235db54;
            FUN_00ca0af8(local_68,uVar13,*(undefined8 *)puVar2);
            FUN_0132138c(lVar11,iVar17,&local_68,*(undefined8 *)StringLiteral_11695);
            uVar8 = local_68;
            FUN_0132138c(lVar9,iVar17,&local_68,*(undefined8 *)puVar5);
            if ((local_68 == 0) || (uVar8 == 0)) goto LAB_0235db54;
            FUN_00ac20f0(uVar8,*(undefined4 *)(local_68 + 0x18),*(undefined8 *)StringLiteral_4747);
            FUN_0132138c(lVar9,iVar17,&local_68,*(undefined8 *)puVar5);
            if (local_68 == 0) goto LAB_0235db54;
            FUN_00ca0af8(local_68,uVar7,*(undefined8 *)puVar2);
            iVar1 = 0;
            if (iVar10 != 0) {
              iVar1 = (iVar17 + 1) / iVar10;
            }
            iVar17 = (iVar17 + 1) - iVar1 * iVar10;
            FUN_0132138c(lVar9,iVar17,&local_68,*(undefined8 *)puVar5);
            if (local_68 == 0) goto LAB_0235db54;
            FUN_00ca0af8(local_68,uVar13,*(undefined8 *)puVar2);
            puVar12 = (undefined8 *)Method_System_Collections_Generic_List<Grabbable>_Contains__;
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < *(int *)(lVar6 + 0x18));
      }
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)Method_System_Nullable<InputDevice>_get_Value__);
      if ((lVar6 != 0) &&
         (FUN_01320e50(lVar6,*(undefined8 *)StringLiteral_10062),
         puVar4 = 
         Method_System_Collections_Generic_List<TuneTargetSteppedGeometry_SteppedRendererSet>_GetEnumerator__
         , puVar3 = 
           Method_UnityEngine_InputSystem_LowLevel_InputStateHistory<TouchState>_RecordStateChange__
         , puVar2 = System_Collections_Generic_IEnumerator<CameraEvent>_TypeInfo, lVar9 != 0)) {
        if (0 < *(int *)(lVar9 + 0x18)) {
          iVar10 = 0;
          do {
            FUN_0132138c(lVar9,iVar10,&local_68,*(undefined8 *)puVar5);
            lVar14 = FUN_0234aad8(local_68,0);
            if (lVar14 == 0) {
              lVar9 = *(long *)puVar3;
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              uVar8 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 200))
              ;
              if ((uVar8 & 1) == 0) {
                *(undefined4 *)(lVar6 + 0x18) = 0;
              }
              else {
                iVar10 = *(int *)(lVar6 + 0x18);
                *(undefined4 *)(lVar6 + 0x18) = 0;
                if (0 < iVar10) {
                  FUN_0179519c(*(undefined8 *)(lVar6 + 0x10),0,iVar10,0);
                }
              }
              return 0;
            }
            if (lVar11 == 0) goto LAB_0235db54;
            FUN_0132138c(lVar11,iVar10,&local_68,*(undefined8 *)StringLiteral_11695);
            uVar8 = local_68;
            lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
            if (lVar16 == 0) goto LAB_0235db54;
            FUN_017b46ec(lVar16,0);
            *(long *)(lVar16 + 0x10) = lVar14;
            *(ulong *)(lVar16 + 0x18) = uVar8;
            FUN_00ca3248(lVar6,lVar16,*(undefined8 *)puVar4);
            iVar10 = iVar10 + 1;
          } while (iVar10 < *(int *)(lVar9 + 0x18));
        }
        return lVar6;
      }
    }
  }
LAB_0235db54:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


