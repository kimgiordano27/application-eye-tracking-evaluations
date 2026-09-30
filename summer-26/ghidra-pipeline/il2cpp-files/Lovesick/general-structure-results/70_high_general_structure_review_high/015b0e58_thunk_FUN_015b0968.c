/*
FUNCTION_NAME: thunk_FUN_015b0968
ENTRY_POINT: 015b0e58
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void thunk_FUN_015b0968(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar1 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_31__;
  if ((DAT_03777dce & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVProfile>_Add__
                      );
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_A199F717FBA4D1378A33D65E9660E45ADC176876A3450BACF2A80DA985FBDF14
                      );
    thunk_FUN_00d48444(Method_System_Data_DataCommonEventSource_Trace<Exception>__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_Start<HttpWebRequest_<GetResponseFromData>d__244>__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<MRUKAnchor,_EffectMesh_EffectMeshObject>_GetEnumerator__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f1c28);
    thunk_FUN_00d48444(
                      UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemSettings_TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_5534);
    thunk_FUN_00d48444(Obi_ObiNativeFloatList_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_1415);
    thunk_FUN_00d48444(StringLiteral_635);
    thunk_FUN_00d48444(StringLiteral_1982);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_31__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    DAT_03777dce = 1;
  }
  uStack_70 = 0;
  auStack_a0._0_8_ = 0;
  auStack_a0._8_8_ = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar8 != 0) {
    FUN_01320e50(lVar8,*(undefined8 *)StringLiteral_1982);
    puVar7 = StringLiteral_1415;
    puVar6 = 
    Method_System_Collections_Generic_Dictionary<MRUKAnchor,_EffectMesh_EffectMeshObject>_GetEnumerator__
    ;
    puVar5 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_Start<HttpWebRequest_<GetResponseFromData>d__244>__
    ;
    puVar4 = UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemSettings_TypeInfo;
    puVar3 = Obi_ObiNativeFloatList_TypeInfo;
    puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    puVar1 = PTR_DAT_033f1c28;
    if (*(long *)(param_1 + 0x58) != 0) {
      FUN_0129b5d0(*(long *)(param_1 + 0x58),&uStack_e0,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVProfile>_Add__
                  );
      uStack_88 = uStack_d8;
      uStack_90 = uStack_e0;
      uStack_78 = uStack_c8;
      uStack_80 = uStack_d0;
      uStack_70 = uStack_c0;
      while (uVar9 = FUN_012bf140(&uStack_90,*(undefined8 *)puVar5), (uVar9 & 1) != 0) {
        auVar11 = FUN_00bd3fc8(&uStack_90,*(undefined8 *)puVar4);
        auStack_a0 = auVar11;
        uVar10 = FUN_00bd40d0(auStack_a0,*(undefined8 *)puVar3);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar9 = FUN_02681b9c(uVar10,param_2,0);
        if ((uVar9 & 1) == 0) {
          uVar10 = FUN_00bd41d8(auStack_a0,*(undefined8 *)StringLiteral_5534);
          FUN_00ac8520(lVar8,uVar10,*(undefined8 *)puVar7);
        }
      }
      FUN_012bf83c(&uStack_90,
                   *(undefined8 *)Method_System_Data_DataCommonEventSource_Trace<Exception>__);
      FUN_01323390(lVar8,&uStack_b8,*(undefined8 *)StringLiteral_635);
      while( true ) {
        uVar9 = FUN_012b894c(&uStack_b8,*(undefined8 *)puVar6);
        if ((uVar9 & 1) == 0) {
          FUN_012b8948(&uStack_b8,
                       *(undefined8 *)
                        Field_<PrivateImplementationDetails>_A199F717FBA4D1378A33D65E9660E45ADC176876A3450BACF2A80DA985FBDF14
                      );
          return;
        }
        uVar10 = FUN_00ac2bf8(&uStack_b8,*(undefined8 *)puVar1);
        if (*(long *)(param_1 + 0x50) == 0) break;
        FUN_015af008(uVar10,uVar10);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


