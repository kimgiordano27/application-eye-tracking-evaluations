/*
FUNCTION_NAME: FUN_062c0f14
ENTRY_POINT: 062c0f14
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 FUN_062c0f14(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  
  puVar2 = System_Runtime_Remoting_Messaging_CADArgHolder_TypeInfo;
  if ((DAT_076de4e3 & 1) == 0) {
    thunk_FUN_032e1da0(Unity_VisualScripting_CSharpNameUtility_TypeInfo);
    thunk_FUN_032e1da0(System_IO_CStreamReader_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_0727fd28);
    thunk_FUN_032e1da0(System_IO_CStreamWriter_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072813a0);
    thunk_FUN_032e1da0(OVR_OpenVR_CVRApplications_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072813a8);
    thunk_FUN_032e1da0(OVR_OpenVR_CVRChaperone_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_CVRChaperoneSetup_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07298a98);
    thunk_FUN_032e1da0(OVR_OpenVR_CVRCompositor_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_CVRExtendedDisplay_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_0729e670);
    thunk_FUN_032e1da0(PTR_DAT_072898c0);
    thunk_FUN_032e1da0(OVR_OpenVR_CVRInput_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072898c8);
    thunk_FUN_032e1da0(OVR_OpenVR_CVROverlay_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072804d8);
    thunk_FUN_032e1da0(OVR_OpenVR_CVRRenderModels_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_0728ab88);
    thunk_FUN_032e1da0(OVR_OpenVR_CVRScreenshots_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_0729e678);
    thunk_FUN_032e1da0(PTR_DAT_07292770);
    thunk_FUN_032e1da0(UnityEngine_UIElements_ObjectListPool<IBindingRequest>_TypeInfo);
    thunk_FUN_032e1da0(OVR_OpenVR_CVRSettings_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072813b0);
    thunk_FUN_032e1da0(OVR_OpenVR_CVRSpatialAnchors_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072804e0);
    thunk_FUN_032e1da0(OVR_OpenVR_CVRSystem_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072804e8);
    thunk_FUN_032e1da0(OVR_OpenVR_CVRTrackedCamera_TypeInfo);
    thunk_FUN_032e1da0(GLTFast_Jobs_CachedFunction_TypeInfo);
    thunk_FUN_032e1da0(System_Runtime_Remoting_Messaging_CADArgHolder_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072813b8);
    thunk_FUN_032e1da0(PTR_DAT_07282378);
    thunk_FUN_032e1da0(System_Linq_Expressions_CachedReflectionInfo_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072813c0);
    thunk_FUN_032e1da0(System_Xml_CachingEventHandler_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072804f0);
    thunk_FUN_032e1da0(System_Globalization_Calendar_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072813d0);
    thunk_FUN_032e1da0(System_Globalization_CalendarData_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072898d8);
    thunk_FUN_032e1da0(PTR_DAT_0729fcb0);
    thunk_FUN_032e1da0(PTR_DAT_07279510);
    thunk_FUN_032e1da0(System_Runtime_Remoting_Messaging_CallContextRemotingData_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07281400);
    thunk_FUN_032e1da0(System_Runtime_Remoting_Messaging_CallContextSecurityData_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07281408);
    thunk_FUN_032e1da0(System_Runtime_CompilerServices_CallSiteBinder_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072804f8);
    thunk_FUN_032e1da0(PTR_DAT_072811b0);
    DAT_076de4e3 = 1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar3 = *(long *)puVar2;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  thunk_FUN_0330670c();
  if (lVar3 == 0) {
    plVar4 = (long *)thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07292770);
    FUN_058fcfe4(plVar4,0);
    uVar7 = *(undefined8 *)PTR_DAT_0727fd28;
    if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar7 = FUN_059324dc(uVar7,0);
    uVar5 = FUN_059324dc(*(undefined8 *)System_IO_CStreamReader_TypeInfo,0);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar7,uVar5,*(undefined8 *)(*plVar4 + 800));
    uVar7 = FUN_059324dc(*(undefined8 *)PTR_DAT_072813a0,0);
    uVar5 = FUN_059324dc(*(undefined8 *)System_IO_CStreamWriter_TypeInfo,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar7,uVar5,*(undefined8 *)(*plVar4 + 800));
    uVar7 = FUN_059324dc(*(undefined8 *)PTR_DAT_072813c0,0);
    uVar5 = FUN_059324dc(*(undefined8 *)System_Linq_Expressions_CachedReflectionInfo_TypeInfo,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar7,uVar5,*(undefined8 *)(*plVar4 + 800));
    uVar7 = FUN_059324dc(*(undefined8 *)PTR_DAT_072813a8,0);
    uVar5 = FUN_059324dc(*(undefined8 *)OVR_OpenVR_CVRApplications_TypeInfo,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar7,uVar5,*(undefined8 *)(*plVar4 + 800));
    uVar7 = FUN_059324dc(*(undefined8 *)PTR_DAT_072804d8,0);
    uVar5 = FUN_059324dc(*(undefined8 *)OVR_OpenVR_CVROverlay_TypeInfo,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar7,uVar5,*(undefined8 *)(*plVar4 + 800));
    uVar7 = FUN_059324dc(*(undefined8 *)PTR_DAT_072813d0,0);
    uVar5 = FUN_059324dc(*(undefined8 *)System_Globalization_Calendar_TypeInfo,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar7,uVar5,*(undefined8 *)(*plVar4 + 800));
    uVar7 = FUN_059324dc(*(undefined8 *)PTR_DAT_072804e0,0);
    uVar5 = FUN_059324dc(*(undefined8 *)OVR_OpenVR_CVRSpatialAnchors_TypeInfo,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar7,uVar5,*(undefined8 *)(*plVar4 + 800));
    uVar7 = FUN_059324dc(*(undefined8 *)PTR_DAT_072813b0,0);
    uVar5 = FUN_059324dc(*(undefined8 *)OVR_OpenVR_CVRSettings_TypeInfo,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar7,uVar5,*(undefined8 *)(*plVar4 + 800));
    uVar7 = FUN_059324dc(*(undefined8 *)PTR_DAT_072804e8,0);
    uVar5 = FUN_059324dc(*(undefined8 *)OVR_OpenVR_CVRSystem_TypeInfo,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar7,uVar5,*(undefined8 *)(*plVar4 + 800));
    uVar7 = FUN_059324dc(*(undefined8 *)PTR_DAT_072804f0,0);
    uVar5 = FUN_059324dc(*(undefined8 *)System_Xml_CachingEventHandler_TypeInfo,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar7,uVar5,*(undefined8 *)(*plVar4 + 800));
    uVar7 = FUN_059324dc(*(undefined8 *)PTR_DAT_07281400,0);
    uVar5 = FUN_059324dc(*(undefined8 *)
                          System_Runtime_Remoting_Messaging_CallContextRemotingData_TypeInfo,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar7,uVar5,*(undefined8 *)(*plVar4 + 800));
    uVar7 = FUN_059324dc(*(undefined8 *)PTR_DAT_07281408,0);
    uVar5 = FUN_059324dc(*(undefined8 *)
                          System_Runtime_Remoting_Messaging_CallContextSecurityData_TypeInfo,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar7,uVar5,*(undefined8 *)(*plVar4 + 800));
    uVar7 = FUN_059324dc(*(undefined8 *)PTR_DAT_072804f8,0);
    uVar5 = FUN_059324dc(*(undefined8 *)System_Runtime_CompilerServices_CallSiteBinder_TypeInfo,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar7,uVar5,*(undefined8 *)(*plVar4 + 800));
    uVar7 = FUN_059324dc(*(undefined8 *)PTR_DAT_07282378,0);
    puVar1 = PTR_DAT_0729fcb0;
    uVar5 = FUN_059324dc(*(undefined8 *)PTR_DAT_0729fcb0,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar7,uVar5,*(undefined8 *)(*plVar4 + 800));
    uVar7 = FUN_059324dc(*(undefined8 *)PTR_DAT_072811b0,0);
    uVar5 = FUN_059324dc(*(undefined8 *)puVar1,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar7,uVar5,*(undefined8 *)(*plVar4 + 800));
    uVar7 = FUN_059324dc(*(undefined8 *)PTR_DAT_07298a98,0);
    uVar5 = FUN_059324dc(*(undefined8 *)OVR_OpenVR_CVRChaperoneSetup_TypeInfo,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar7,uVar5,*(undefined8 *)(*plVar4 + 800));
    uVar7 = FUN_059324dc(*(undefined8 *)PTR_DAT_072898c0,0);
    uVar5 = FUN_059324dc(*(undefined8 *)OVR_OpenVR_CVRCompositor_TypeInfo,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar7,uVar5,*(undefined8 *)(*plVar4 + 800));
    uVar7 = FUN_059324dc(*(undefined8 *)PTR_DAT_0729e670,0);
    uVar5 = FUN_059324dc(*(undefined8 *)OVR_OpenVR_CVRExtendedDisplay_TypeInfo,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar7,uVar5,*(undefined8 *)(*plVar4 + 800));
    uVar7 = FUN_059324dc(*(undefined8 *)PTR_DAT_072898c8,0);
    uVar5 = FUN_059324dc(*(undefined8 *)OVR_OpenVR_CVRInput_TypeInfo,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar7,uVar5,*(undefined8 *)(*plVar4 + 800));
    uVar7 = FUN_059324dc(*(undefined8 *)PTR_DAT_072898d8,0);
    uVar5 = FUN_059324dc(*(undefined8 *)System_Globalization_CalendarData_TypeInfo,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar7,uVar5,*(undefined8 *)(*plVar4 + 800));
    uVar7 = FUN_059324dc(*(undefined8 *)PTR_DAT_0729e678,0);
    uVar5 = FUN_059324dc(*(undefined8 *)OVR_OpenVR_CVRScreenshots_TypeInfo,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar7,uVar5,*(undefined8 *)(*plVar4 + 800));
    uVar7 = FUN_059324dc(*(undefined8 *)PTR_DAT_072813b8,0);
    uVar5 = FUN_059324dc(*(undefined8 *)Unity_VisualScripting_CSharpNameUtility_TypeInfo,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar7,uVar5,*(undefined8 *)(*plVar4 + 800));
    uVar7 = FUN_059324dc(*(undefined8 *)
                          UnityEngine_UIElements_ObjectListPool<IBindingRequest>_TypeInfo,0);
    uVar5 = FUN_059324dc(*(undefined8 *)OVR_OpenVR_CVRChaperone_TypeInfo,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar7,uVar5,*(undefined8 *)(*plVar4 + 800));
    uVar7 = FUN_059324dc(*(undefined8 *)PTR_DAT_0728ab88,0);
    uVar5 = FUN_059324dc(*(undefined8 *)OVR_OpenVR_CVRRenderModels_TypeInfo,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar7,uVar5,*(undefined8 *)(*plVar4 + 800));
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar3 = *(long *)puVar2;
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18);
    uVar7 = FUN_059324dc(*(undefined8 *)GLTFast_Jobs_CachedFunction_TypeInfo,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar5,uVar7,*(undefined8 *)(*plVar4 + 800));
    uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
    uVar7 = FUN_059324dc(*(undefined8 *)OVR_OpenVR_CVRTrackedCamera_TypeInfo,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar5,uVar7,*(undefined8 *)(*plVar4 + 800));
    thunk_FUN_0330670c();
    plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar6 = (long)plVar4;
    thunk_FUN_0333a630(plVar6,plVar4);
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar3 = *(long *)puVar2;
  }
  uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10);
  thunk_FUN_0330670c();
  return uVar7;
}


