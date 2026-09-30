/*
FUNCTION_NAME: System.Data.DataTable$$System.Xml.Serialization.IXmlSerializable.WriteXml
ENTRY_POINT: 057c35dc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x057c3708) */
/* WARNING: Removing unreachable block (ram,0x057c3764) */
/* WARNING: Removing unreachable block (ram,0x057c3800) */

undefined1  [16]
System_Data_DataTable__System_Xml_Serialization_IXmlSerializable_WriteXml(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x19;
  undefined1 auVar12 [16];
  undefined8 in_stack_00000010;
  undefined1 *in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000080;
  undefined8 *in_stack_00000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000e0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000128;
  
  puVar3 = Unity_Services_Multiplayer_IModuleOption_TypeInfo;
  puVar2 = Unity_Services_Multiplayer_IModule_TypeInfo;
  puVar1 = OVRPlugin_Quatf___TypeInfo;
  uStack0000000000000090 = param_1;
  uStack00000000000000a0 = param_1;
  uStack00000000000000b0 = param_1;
  uStack00000000000000c0 = param_1;
  uStack00000000000000d0 = param_1;
  uStack00000000000000e0 = param_1;
  if (unaff_x19 == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar7 = thunk_FUN_02dd3144();
    uVar10 = thunk_FUN_02dfd288(PTR_DAT_06a0e6b0);
    FUN_0544bf54(uVar7,uVar10,0);
    uVar10 = thunk_FUN_02dfd288(UnityEngine_UIElements_IMouseEventInternal_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar7,uVar10);
  }
  in_stack_00000128 = FUN_037628b4();
  uVar7 = FUN_0434bdf0(&stack0x00000128,*(undefined8 *)puVar3);
  FUN_043545e4(&stack0x000000f8,uVar7,2,*(undefined8 *)puVar1);
  in_stack_00000080 = 0;
  in_stack_00000088 = &stack0x000000f8;
  FUN_0434bc04(&stack0x00000010,&stack0x00000128,*(undefined8 *)puVar2);
  puVar6 = Unity_Services_Core_Telemetry_Internal_IMetricsFactory_TypeInfo;
  puVar5 = Unity_Services_Core_Telemetry_Internal_IMetrics_TypeInfo;
  puVar4 = Unity_Multiplayer_Tools_NetStats_IMetricObserver_TypeInfo;
  puVar3 = UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItem___TypeInfo;
  puVar2 = UnityEngine_InputSystem_InputActionMap_ReadMapJson___TypeInfo;
  puVar1 = PTR_DAT_06a0d0a8;
  memcpy(&stack0x00000090,&stack0x00000010,0x68);
  in_stack_00000010 = 0;
  in_stack_00000018 = (undefined1 *)&stack0x00000090;
  while (uVar8 = FUN_03785ce8(&stack0x00000090,*(undefined8 *)puVar5), (uVar8 & 1) != 0) {
    lVar9 = FUN_03785a80(&stack0x00000090,*(undefined8 *)puVar6);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar11 = *(long *)puVar1;
    uVar7 = *(undefined8 *)(lVar9 + 0x40);
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar11);
    }
    FUN_04354b64(&stack0x000000f8,uVar7,*(undefined8 *)puVar2);
  }
  FUN_051575b8(&stack0x00000090,*(undefined8 *)puVar4);
  in_stack_00000018 = (undefined1 *)in_stack_00000100;
  in_stack_00000010 = in_stack_000000f8;
  in_stack_00000020 = in_stack_00000108;
  auVar12 = FUN_04355430(&stack0x00000010,*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  auVar12 = FUN_056fb93c(auVar12._0_8_,auVar12._8_8_,&stack0x00000110,1,0);
  lVar9 = in_stack_00000080;
  FUN_043552c0(in_stack_00000088,
               *(undefined8 *)UnityEngine_InputSystem_InputActionMap_WriteActionJson___TypeInfo);
  if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858(lVar9);
  }
  return auVar12;
}


