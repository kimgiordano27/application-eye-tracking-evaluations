/*
FUNCTION_NAME: FUN_0275673c
ENTRY_POINT: 0275673c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0275673c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40 [2];
  undefined4 local_38 [2];
  
  puVar2 = StringLiteral_12000;
  puVar4 = Method_OVREnumerable<OVRSpatialAnchor>_GetEnumerator__;
  puVar1 = Method_System_Collections_Generic_Dictionary<object,_ReferenceTargetProperty>_Add__;
  if ((DAT_037884b6 & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vshl_u64__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Specialized_ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator_get_Current__
                      );
    thunk_FUN_00d48444(Method_TMPro_FastAction<GameObject,_Material,_Material>__ctor__);
    thunk_FUN_00d48444(StringLiteral_4328);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_5857EE4CE98BFABBD62B385C1098507DD0052FF3951043AAD6A1DABD495F18AA
                      );
    thunk_FUN_00d48444(Method_HoveringObject_ObjectGrabbed__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<object,_ReferenceTargetProperty>_Add__
                      );
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    thunk_FUN_00d48444(Method_OVREnumerable<OVRSpatialAnchor>_GetEnumerator__);
    thunk_FUN_00d48444(System_Collections_Comparer_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_12000);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass1_0_<CreateVertexAttribute>b__3__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f60f8);
    DAT_037884b6 = 1;
  }
  local_38[0] = 0;
  FUN_02686180(local_38,*(undefined8 *)puVar2,0);
  **(undefined4 **)(*(long *)puVar4 + 0xb8) = local_38[0];
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar3 = Method_TMPro_FastAction<GameObject,_Material,_Material>__ctor__;
  puVar2 = System_Collections_Comparer_TypeInfo;
  puVar1 = PTR_DAT_033f60f8;
  if (lVar5 != 0) {
    FUN_01320ebc(lVar5,0,*(undefined8 *)StringLiteral_4328);
    *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) = lVar5;
    local_40[0] = 0;
    FUN_02686180(local_40,*(undefined8 *)puVar1,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(undefined4 *)(lVar5 + 0x10) = local_40[0];
    *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)puVar2;
    local_50 = 0;
    uStack_48 = 0;
    FUN_0268834c(DAT_02982f30,DAT_02982f30,DAT_02982f34,DAT_02982f34,&local_50,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    *(undefined8 *)(lVar5 + 0x28) = uStack_48;
    *(undefined8 *)(lVar5 + 0x20) = local_50;
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    puVar1 = Method_HoveringObject_ObjectGrabbed__;
    if (lVar5 != 0) {
      FUN_01298da0(lVar5,*(undefined8 *)
                          Method_System_Collections_Specialized_ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator_get_Current__
                  );
      *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38) = lVar5;
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vshl_u64__;
      if (lVar5 != 0) {
        FUN_01320e50(lVar5,*(undefined8 *)
                            Field_<PrivateImplementationDetails>_5857EE4CE98BFABBD62B385C1098507DD0052FF3951043AAD6A1DABD495F18AA
                    );
        *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40) = lVar5;
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        puVar1 = Method_OVRPlugin_<>c_<_cctor>b__796_105__;
        if (lVar5 != 0) {
          FUN_017b46ec(lVar5,0);
          *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48) = lVar5;
          lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
          if (lVar5 != 0) {
            FUN_02021868(lVar5,*(undefined8 *)
                                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass1_0_<CreateVertexAttribute>b__3__
                         ,8,0);
            *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x50) = lVar5;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


