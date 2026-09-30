/*
FUNCTION_NAME: FUN_055aa674
ENTRY_POINT: 055aa674
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_055aa674(long param_1,long param_2,undefined8 param_3,long param_4,uint param_5,
                 long *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar2 = System_Xml_XmlSqlBinaryReader_NamespaceDecl_TypeInfo;
  puVar1 = PTR_DAT_067c9f00;
  if ((DAT_06bbfae9 & 1) == 0) {
    FUN_02f08768(Method_UnityEngine_Awaitable<Result<ARAnchor>>_GetAwaiter__);
    FUN_02f08768(PTR_DAT_067c9f00);
    FUN_02f08768(
                UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass12_0_TypeInfo
                );
    FUN_02f08768(Method_UnityEngine_Awaitable<Result<SerializableGuid>>_GetAwaiter__);
    FUN_02f08768(System_Xml_XmlSqlBinaryReader_NamespaceDecl_TypeInfo);
    FUN_02f08768(Method_UnityEngine_Awaitable<Result<XRAnchor>>_GetAwaiter__);
    FUN_02f08768(Method_UnityEngine_Awaitable<XRResultStatus>_GetAwaiter__);
    FUN_02f08768(Method_OVRTask_Awaiter<List<bool>>_GetResult__);
    FUN_02f08768(Method_OVRTask_Awaiter<List<bool>>_get_IsCompleted__);
    FUN_02f08768(PTR_DAT_067d7870);
    FUN_02f08768(Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_GetResult__);
    DAT_06bbfae9 = 1;
  }
  uVar4 = thunk_FUN_02f41a0c(*(undefined8 *)(*(long *)puVar2 + 0xb8),0);
  *(undefined4 *)(param_1 + 0x54) = uVar4;
  FUN_05116b38(param_1,0);
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar5 = *(long *)puVar1;
  }
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_2 + 0x220);
  }
  if (**(long **)(lVar5 + 0xb8) != 0) {
    FUN_033771f0(**(long **)(lVar5 + 0xb8),
                 *(undefined8 *)Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_GetResult__,
                 *(undefined4 *)(param_1 + 0x54),uVar4,param_5,
                 *(undefined8 *)Method_UnityEngine_Awaitable<Result<ARAnchor>>_GetAwaiter__);
    puVar1 = Method_OVRTask_Awaiter<List<bool>>_get_IsCompleted__;
    if ((param_5 & 0xffffffc1) != 0) {
      uVar9 = FUN_055668b0(0);
      uVar6 = thunk_FUN_02f6ef30(Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_get_IsCompleted__);
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar9,uVar6);
    }
    uVar4 = *(undefined4 *)(param_1 + 0x54);
    *(long *)(param_1 + 0x10) = param_2;
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar5 = *(long *)puVar1;
    }
    puVar2 = Method_UnityEngine_Awaitable<XRResultStatus>_GetAwaiter__;
    puVar7 = *(undefined8 **)(lVar5 + 0xb8);
    lVar8 = puVar7[1];
    if (lVar8 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar9 = *puVar7;
      lVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                  Method_UnityEngine_Awaitable<Result<SerializableGuid>>_GetAwaiter__
                                );
      FUN_04dfcb1c(lVar8,uVar9,*(undefined8 *)Method_OVRTask_Awaiter<List<bool>>_GetResult__,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar8;
    }
    puVar1 = Method_UnityEngine_Awaitable<Result<XRAnchor>>_GetAwaiter__;
    uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
    FUN_03cbf204(uVar9,uVar4,lVar8,*(undefined8 *)puVar1);
    *(undefined8 *)(param_1 + 0x48) = uVar9;
    *(uint *)(param_1 + 0x28) = param_5;
    *(undefined8 *)(param_1 + 0x18) = param_3;
    *(long *)(param_1 + 0x20) = param_4;
    if (param_2 != 0) {
      *(bool *)(param_1 + 0x51) = param_4 == 0 && param_6 == (long *)0x0;
      puVar1 = 
      UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass12_0_TypeInfo
      ;
      if (param_6 != (long *)0x0) {
        uVar9 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d7870);
        FUN_0512d760(uVar9,param_6,0);
        *(undefined8 *)(param_1 + 0x30) = uVar9;
        if (*param_6 == *(long *)puVar1) {
          bVar3 = FUN_0559e53c(param_6,0);
          *(byte *)(param_1 + 0x52) = bVar3 & 1;
        }
      }
      FUN_055aaa60(param_1,param_6);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


