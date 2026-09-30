/*
FUNCTION_NAME: FUN_0235ce90
ENTRY_POINT: 0235ce90
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_0235ce90(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar1 = Method_System_Decimal_DecCalc_VarDecFromR4__;
  if ((DAT_03781d3f & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_IEnumerator<CameraEvent>_TypeInfo);
    thunk_FUN_00d48444(Method_System_IO_TextReader_Read__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_UIR_LinkedPool<Allocator2D_Row>__ctor__);
    thunk_FUN_00d48444(Method_System_Net_Configuration_BypassElementCollection__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Specialized_NameObjectCollectionBase_NameObjectKeysEnumerator_get_Current__
                      );
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<Task>,_SemaphoreSlim_<WaitUntilCountOrTimeoutAsync>d__32>__
                      );
    thunk_FUN_00d48444(StringLiteral_4747);
    thunk_FUN_00d48444(OVRManager_XrApi_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f6e48);
    thunk_FUN_00d48444(PTR_DAT_033ee588);
    thunk_FUN_00d48444(PTR_DAT_033ef0a8);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_JsonDataWriter_EnsureBufferSpace__);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Grabbable>_Contains__);
    thunk_FUN_00d48444(UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
    thunk_FUN_00d48444(Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_11777);
    thunk_FUN_00d48444(StringLiteral_9768);
    thunk_FUN_00d48444(Method_System_Decimal_DecCalc_VarDecFromR4__);
    DAT_03781d3f = 1;
  }
  puVar2 = Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar5 = FUN_0233dbd8(param_1,0);
  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar1 = UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo;
  if (lVar6 != 0) {
    FUN_01320e50(lVar6,*(undefined8 *)PTR_DAT_033ee588);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = StringLiteral_9768;
    if (lVar7 != 0) {
      FUN_01320e50(lVar7,*(undefined8 *)PTR_DAT_033f6e48);
      lVar8 = *(long *)puVar1;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar8 = *(long *)puVar1;
      }
      puVar2 = Method_UnityEngine_UIElements_UIR_LinkedPool<Allocator2D_Row>__ctor__;
      lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x58);
      if (lVar11 == 0) {
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar8 = *(long *)puVar1;
        }
        uVar12 = **(undefined8 **)(lVar8 + 0xb8);
        lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if (lVar11 == 0) goto LAB_0235d320;
        FUN_012d239c(lVar11,uVar12,*(undefined8 *)StringLiteral_11777,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x58) = lVar11;
      }
      puVar1 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<Task>,_SemaphoreSlim_<WaitUntilCountOrTimeoutAsync>d__32>__
      ;
      uVar12 = FUN_010dcdb8(param_2,lVar11,*(undefined8 *)Method_System_IO_TextReader_Read__);
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if ((lVar8 != 0) &&
         (FUN_012dd468(lVar8,uVar12,
                       *(undefined8 *)
                        Method_System_Collections_Specialized_NameObjectCollectionBase_NameObjectKeysEnumerator_get_Current__
                      ), puVar4 = Method_System_Net_Configuration_BypassElementCollection__ctor__,
         puVar3 = Method_System_Collections_Generic_List<Grabbable>_Contains__,
         puVar2 = 
         Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
         , puVar1 = OVRManager_XrApi_TypeInfo, lVar5 != 0)) {
        if (0 < *(int *)(lVar5 + 0x18)) {
          iVar10 = 0;
          do {
            FUN_0132138c(lVar5,iVar10,&local_90,*(undefined8 *)puVar3);
            if (param_3 == 0) goto LAB_0235d320;
            FUN_0132138c(param_3,local_90,&local_90,*(undefined8 *)puVar2);
            FUN_00ca0af8(lVar6,local_90,*(undefined8 *)puVar1);
            FUN_0132138c(lVar5,iVar10,&local_90,*(undefined8 *)puVar3);
            uVar9 = FUN_012ddcec(lVar8,&local_90,*(undefined8 *)puVar4);
            if ((uVar9 & 1) != 0) {
              FUN_00ac20f0(lVar7,*(undefined4 *)(lVar6 + 0x18),*(undefined8 *)StringLiteral_4747);
              FUN_0132138c(lVar5,iVar10,&local_90,*(undefined8 *)puVar3);
              FUN_0132138c(param_3,local_90 & 0xffffffff,&local_90,*(undefined8 *)puVar2);
              uVar9 = local_90;
              FUN_0132138c(lVar5,iVar10,&local_90,*(undefined8 *)puVar3);
              FUN_0132138c(param_3,local_90._4_4_,&local_90,*(undefined8 *)puVar2);
              uVar12 = FUN_0233bc34(0x3f000000,uVar9,local_90,0);
              FUN_00ca0af8(lVar6,uVar12,*(undefined8 *)puVar1);
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < *(int *)(lVar5 + 0x18));
        }
        lVar5 = FUN_0234aad8(lVar6,0);
        if (lVar5 == 0) {
          *param_4 = 0;
          return 0;
        }
        if ((param_1 != 0) && (lVar6 = *(long *)(lVar5 + 0x10), lVar6 != 0)) {
          *(undefined4 *)(lVar6 + 0x54) = *(undefined4 *)(param_1 + 0x54);
          uStack_98 = *(undefined8 *)(param_1 + 0x34);
          uStack_a0 = *(undefined8 *)(param_1 + 0x2c);
          uStack_a8 = *(undefined8 *)(param_1 + 0x24);
          local_b0 = *(undefined8 *)(param_1 + 0x1c);
          uStack_88 = 0;
          local_90 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
          FUN_022eff30(&local_90,&local_b0,0);
          *(undefined8 *)(lVar6 + 0x34) = uStack_78;
          *(undefined8 *)(lVar6 + 0x2c) = uStack_80;
          *(undefined8 *)(lVar6 + 0x24) = uStack_88;
          *(ulong *)(lVar6 + 0x1c) = local_90;
          lVar6 = *(long *)(lVar5 + 0x10);
          if (lVar6 != 0) {
            *(undefined4 *)(lVar6 + 0x18) = *(undefined4 *)(param_1 + 0x18);
            *(undefined1 *)(lVar6 + 0x4c) = *(undefined1 *)(param_1 + 0x4c);
            puVar1 = System_Collections_Generic_IEnumerator<CameraEvent>_TypeInfo;
            *(undefined4 *)(lVar6 + 0x48) = *(undefined4 *)(param_1 + 0x48);
            lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            if (lVar6 != 0) {
              FUN_017b46ec(lVar6,0);
              *(long *)(lVar6 + 0x10) = lVar5;
              *(long *)(lVar6 + 0x18) = lVar7;
              *param_4 = lVar6;
              return 1;
            }
          }
        }
      }
    }
  }
LAB_0235d320:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


