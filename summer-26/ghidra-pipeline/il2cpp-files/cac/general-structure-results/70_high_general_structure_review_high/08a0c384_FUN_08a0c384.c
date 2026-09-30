/*
FUNCTION_NAME: FUN_08a0c384
ENTRY_POINT: 08a0c384
PROGRAM: cac-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_3;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void FUN_08a0c384(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  
  puVar2 = System_Action<ARPlanesChangedEventArgs>_TypeInfo;
  puVar1 = System_Action<ARPlaneBoundaryChangedEventArgs>_TypeInfo;
  if ((DAT_096a4928 & 1) == 0) {
    FUN_03f13384(PTR_DAT_0910ba00);
    FUN_03f13384(System_Action<ARPointCloudChangedEventArgs>_TypeInfo);
    FUN_03f13384(System_Action<ARPointCloudUpdatedEventArgs>_TypeInfo);
    FUN_03f13384(System_Action<ARRaycastUpdatedEventArgs>_TypeInfo);
    FUN_03f13384(System_Action<ARPlanesChangedEventArgs>_TypeInfo);
    FUN_03f13384(PTR_DAT_0910b790);
    FUN_03f13384(System_Action<ARSessionStateChangedEventArgs>_TypeInfo);
    FUN_03f13384(System_Action<ARTrackablesParentTransformChangedEventArgs>_TypeInfo);
    FUN_03f13384(PTR_DAT_0910b7a0);
    FUN_03f13384(System_Action<ARTrackedImagesChangedEventArgs>_TypeInfo);
    FUN_03f13384(System_Action<ARTrackedObjectsChangedEventArgs>_TypeInfo);
    FUN_03f13384(System_Action<ARPlaneBoundaryChangedEventArgs>_TypeInfo);
    FUN_03f13384(System_Action<AffordanceStateData>_TypeInfo);
    FUN_03f13384(System_Action<AndroidJavaObject>_TypeInfo);
    FUN_03f13384(System_Action<AsyncGPUReadbackRequest>_TypeInfo);
    FUN_03f13384(PTR_DAT_091abc18);
    FUN_03f13384(PTR_DAT_091ac620);
    FUN_03f13384(PTR_DAT_091ac740);
    FUN_03f13384(PTR_DAT_091ac640);
    FUN_03f13384(PTR_DAT_091ac788);
    FUN_03f13384(PTR_DAT_091ac748);
    FUN_03f13384(PTR_DAT_091ac808);
    FUN_03f13384(PTR_DAT_091ac7b0);
    FUN_03f13384(PTR_DAT_091918c8);
    FUN_03f13384(PTR_DAT_091ac730);
    FUN_03f13384(PTR_DAT_091ac628);
    FUN_03f13384(PTR_DAT_091ac878);
    FUN_03f13384(PTR_DAT_091ac880);
    FUN_03f13384(PTR_DAT_091ac530);
    FUN_03f13384(PTR_DAT_091ac568);
    FUN_03f13384(PTR_DAT_091ac838);
    FUN_03f13384(PTR_DAT_091ac760);
    FUN_03f13384(PTR_DAT_091ac6e8);
    FUN_03f13384(PTR_DAT_09125e98);
    FUN_03f13384(PTR_DAT_091ac538);
    FUN_03f13384(PTR_DAT_091a8708);
    FUN_03f13384(PTR_DAT_091ac8b0);
    FUN_03f13384(PTR_DAT_091ac7a8);
    FUN_03f13384(PTR_DAT_091ac5e8);
    FUN_03f13384(PTR_DAT_091ac690);
    FUN_03f13384(PTR_DAT_0912a340);
    FUN_03f13384(PTR_DAT_091ac600);
    FUN_03f13384(PTR_DAT_091ac710);
    FUN_03f13384(PTR_DAT_091ac630);
    FUN_03f13384(System_Action<AsyncOperation>_TypeInfo);
    FUN_03f13384(PTR_DAT_091ac518);
    FUN_03f13384(PTR_DAT_09157070);
    FUN_03f13384(
                UnityEngine_XR_ARFoundation_ARTrackableManager<XRImageTrackingSubsystem,_XRImageTrackingSubsystemDescriptor,_XRImageTrackingSubsystem_Provider,_XRTrackedImage,_ARTrackedImage>_TypeInfo
                );
    FUN_03f13384(PTR_DAT_09125ea8);
    FUN_03f13384(PTR_DAT_091ac720);
    FUN_03f13384(PTR_DAT_091ac6c0);
    FUN_03f13384(PTR_DAT_091ac6b0);
    FUN_03f13384(PTR_DAT_091ac798);
    FUN_03f13384(PTR_DAT_091ac840);
    FUN_03f13384(System_Action<AsyncOperationHandle>_TypeInfo);
    FUN_03f13384(PTR_DAT_091ac718);
    FUN_03f13384(PTR_DAT_091ac870);
    FUN_03f13384(PTR_DAT_091ac558);
    FUN_03f13384(PTR_DAT_091ac5c8);
    FUN_03f13384(PTR_DAT_091ac898);
    FUN_03f13384(PTR_DAT_091ac8a8);
    FUN_03f13384(PTR_DAT_091ac5e0);
    FUN_03f13384(PTR_DAT_091ac778);
    FUN_03f13384(PTR_DAT_091ac780);
    FUN_03f13384(PTR_DAT_091ac8b8);
    FUN_03f13384(PTR_DAT_091ac7d8);
    FUN_03f13384(PTR_DAT_091ac5d8);
    FUN_03f13384(PTR_DAT_091ac8f8);
    FUN_03f13384(PTR_DAT_091ac560);
    FUN_03f13384(PTR_DAT_091ac888);
    FUN_03f13384(
                UnityEngine_XR_ARFoundation_VisualScripting_ARTrackablesChangedEventUnit<ARParticipantManager,_ARParticipant,_ARParticipantsChangedListener>_TypeInfo
                );
    FUN_03f13384(PTR_DAT_091ac830);
    FUN_03f13384(PTR_DAT_091ac5b0);
    FUN_03f13384(PTR_DAT_091ac7c0);
    FUN_03f13384(PTR_DAT_091ac738);
    FUN_03f13384(PTR_DAT_09158a10);
    FUN_03f13384(PTR_DAT_091ac750);
    FUN_03f13384(PTR_DAT_091ac670);
    FUN_03f13384(PTR_DAT_091ac520);
    FUN_03f13384(PTR_DAT_091ac928);
    FUN_03f13384(PTR_DAT_091a1268);
    FUN_03f13384(PTR_DAT_091ac828);
    FUN_03f13384(PTR_DAT_091ac570);
    FUN_03f13384(PTR_DAT_09191720);
    FUN_03f13384(PTR_DAT_091ac6e0);
    FUN_03f13384(PTR_DAT_091ac678);
    FUN_03f13384(PTR_DAT_091ac540);
    FUN_03f13384(PTR_DAT_09191730);
    FUN_03f13384(System_Action<AutoCompletePathVisitor>_TypeInfo);
    FUN_03f13384(PTR_DAT_091ac7e0);
    FUN_03f13384(System_Action<AsyncOperationHandle<IList<AsyncOperationHandle>>>_TypeInfo);
    FUN_03f13384(PTR_DAT_091ac8c0);
    FUN_03f13384(PTR_DAT_091ac660);
    FUN_03f13384(PTR_DAT_091ac590);
    FUN_03f13384(
                System_Action<AsyncOperationHandle<LocalizedDatabase_TableEntryResult<StringTable,_StringTableEntry>>>_TypeInfo
                );
    FUN_03f13384(PTR_DAT_091ac5c0);
    FUN_03f13384(PTR_DAT_091ac850);
    FUN_03f13384(PTR_DAT_091ac818);
    FUN_03f13384(PTR_DAT_091ac6d8);
    FUN_03f13384(PTR_DAT_091ac8d8);
    FUN_03f13384(PTR_DAT_091ac790);
    FUN_03f13384(PTR_DAT_09124988);
    FUN_03f13384(PTR_DAT_091ac820);
    FUN_03f13384(PTR_DAT_09133af8);
    FUN_03f13384(PTR_DAT_091ac950);
    FUN_03f13384(PTR_DAT_091ac510);
    FUN_03f13384(PTR_DAT_091ac598);
    FUN_03f13384(PTR_DAT_091ac658);
    FUN_03f13384(PTR_DAT_091ac578);
    FUN_03f13384(PTR_DAT_091ac6c8);
    FUN_03f13384(PTR_DAT_091ac848);
    FUN_03f13384(PTR_DAT_091ac7e8);
    FUN_03f13384(PTR_DAT_091ac6f0);
    FUN_03f13384(PTR_DAT_091ac8a0);
    FUN_03f13384(PTR_DAT_091ac908);
    FUN_03f13384(PTR_DAT_091ac700);
    FUN_03f13384(PTR_DAT_091ac618);
    FUN_03f13384(PTR_DAT_091ac868);
    FUN_03f13384(PTR_DAT_091ac8c8);
    FUN_03f13384(PTR_DAT_09135050);
    FUN_03f13384(PTR_DAT_091ac920);
    FUN_03f13384(PTR_DAT_091ac550);
    FUN_03f13384(PTR_DAT_091ac8e8);
    FUN_03f13384(PTR_DAT_091ac770);
    FUN_03f13384(PTR_DAT_091ac6a8);
    FUN_03f13384(PTR_DAT_091ac5a8);
    FUN_03f13384(PTR_DAT_091ac650);
    FUN_03f13384(PTR_DAT_091ac508);
    FUN_03f13384(PTR_DAT_091ac698);
    FUN_03f13384(PTR_DAT_091ac860);
    FUN_03f13384(PTR_DAT_091ac6d0);
    FUN_03f13384(PTR_DAT_091ac608);
    FUN_03f13384(PTR_DAT_091ac7a0);
    FUN_03f13384(PTR_DAT_091ac610);
    FUN_03f13384(PTR_DAT_091ac8e0);
    FUN_03f13384(PTR_DAT_091ac938);
    FUN_03f13384(PTR_DAT_091ac910);
    FUN_03f13384(PTR_DAT_09124990);
    FUN_03f13384(PTR_DAT_091ac5f8);
    FUN_03f13384(PTR_DAT_091ac940);
    FUN_03f13384(PTR_DAT_091ac858);
    FUN_03f13384(PTR_DAT_091ac7f0);
    FUN_03f13384(PTR_DAT_091ac728);
    FUN_03f13384(System_Action<List<IdLink>>_TypeInfo);
    FUN_03f13384(PTR_DAT_091ac7c8);
    FUN_03f13384(PTR_DAT_091ac6a0);
    FUN_03f13384(PTR_DAT_091ac948);
    FUN_03f13384(PTR_DAT_091ac6f8);
    FUN_03f13384(PTR_DAT_09191768);
    FUN_03f13384(PTR_DAT_091ac930);
    FUN_03f13384(PTR_DAT_091ac758);
    FUN_03f13384(PTR_DAT_091ac8f0);
    FUN_03f13384(PTR_DAT_091ac648);
    FUN_03f13384(PTR_DAT_091ac900);
    FUN_03f13384(PTR_DAT_091ac5a0);
    FUN_03f13384(PTR_DAT_091ac918);
    FUN_03f13384(System_Action<List<PxrSpatialMeshInfo>>_TypeInfo);
    FUN_03f13384(PTR_DAT_091ac688);
    FUN_03f13384(PTR_DAT_091ac768);
    FUN_03f13384(PTR_DAT_091ac668);
    FUN_03f13384(PTR_DAT_091ac890);
    FUN_03f13384(PTR_DAT_091ac7f8);
    FUN_03f13384(PTR_DAT_091ac8d0);
    FUN_03f13384(PTR_DAT_0917bdb8);
    FUN_03f13384(PTR_DAT_091ac800);
    FUN_03f13384(Doozy_Runtime_Signals_SignalProvider_Local_UI_Name_var);
    FUN_03f13384(PTR_DAT_091ac5f0);
    FUN_03f13384(PTR_DAT_091ac810);
    FUN_03f13384(PTR_DAT_091ac5d0);
    FUN_03f13384(PTR_DAT_091ac6b8);
    FUN_03f13384(PTR_DAT_091ac580);
    FUN_03f13384(PTR_DAT_09125ee8);
    FUN_03f13384(PTR_DAT_091ac7d0);
    FUN_03f13384(System_Action<AREnvironmentProbesChangedEvent>_TypeInfo);
    FUN_03f13384(PTR_DAT_091ac548);
    FUN_03f13384(System_Action<BaseRuntimePanel>_TypeInfo);
    FUN_03f13384(PTR_DAT_091ac528);
    FUN_03f13384(PTR_DAT_091ac7b8);
    FUN_03f13384(System_Action<BaseVisualElementPanel>_TypeInfo);
    FUN_03f13384(PTR_DAT_091ac708);
    FUN_03f13384(PTR_DAT_091ac680);
    FUN_03f13384(PTR_DAT_09146cf0);
    FUN_03f13384(PTR_DAT_091ac638);
    FUN_03f13384(PTR_DAT_09135300);
    FUN_03f13384(PTR_DAT_091ac588);
    FUN_03f13384(PTR_DAT_091ac5b8);
    FUN_03f13384(System_Action<bool>_TypeInfo);
    DAT_096a4928 = 1;
  }
  lVar10 = thunk_FUN_03f4e68c(*(undefined8 *)puVar1);
  FUN_06fef64c(lVar10,*(undefined8 *)puVar2);
  puVar7 = System_Action<ARPointCloudChangedEventArgs>_TypeInfo;
  puVar6 = System_Action<List<PxrSpatialMeshInfo>>_TypeInfo;
  puVar5 = PTR_DAT_091ac550;
  puVar4 = PTR_DAT_091ac540;
  puVar3 = PTR_DAT_091ac530;
  puVar2 = PTR_DAT_091ac520;
  puVar1 = PTR_DAT_09146cf0;
  if (lVar10 != 0) {
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac510,0x20000,
                 *(undefined8 *)System_Action<ARPointCloudChangedEventArgs>_TypeInfo);
    FUN_06fefffc(lVar10,*(undefined8 *)puVar2,0x20001,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)puVar3,0x20002,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)puVar1,0x40000,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)puVar4,0x70000,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)puVar5,0x70001,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)puVar6,0x40001,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac560,0x70002,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac570,0x70003,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac580,0x70004,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac590,0x70005,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac5a0,0x70006,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac5b0,0x70007,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac5c0,0x70008,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac5d0,0x20003,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)System_Action<AREnvironmentProbesChangedEvent>_TypeInfo,
                 0x40002,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac5e0,0x70009,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac5f0,0x20004,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)
                         UnityEngine_XR_ARFoundation_ARTrackableManager<XRImageTrackingSubsystem,_XRImageTrackingSubsystemDescriptor,_XRImageTrackingSubsystem_Provider,_XRTrackedImage,_ARTrackedImage>_TypeInfo
                 ,0x40003,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac600,0x7000a,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac610,0x20005,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac620,0x7000b,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac630,0x7000c,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac640,0x7000d,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac650,0x20006,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)
                         UnityEngine_XR_ARFoundation_VisualScripting_ARTrackablesChangedEventUnit<ARParticipantManager,_ARParticipant,_ARParticipantsChangedListener>_TypeInfo
                 ,0x40004,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091918c8,0x20007,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_0917bdb8,0x10000,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac658,0x30000,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac660,0x20008,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)Doozy_Runtime_Signals_SignalProvider_Local_UI_Name_var,
                 0x40005,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac670,0x20009,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac680,0x2000a,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac690,0x2000b,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac6a0,0x2000c,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac6b0,0x2000d,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac6b8,0x10001,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091a1268,0x2000e,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac6c8,0x2000f,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_09124988,0x20010,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac6d8,0x10002,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_09191720,0x40006,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac6e8,0x20011,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac6f8,0x20012,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac708,0x20013,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac718,0x20014,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac728,0x20015,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_09125e98,0x20016,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac740,0x20017,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_09125ea8,0x20018,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac750,0x7000e,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_09191730,0x7000f,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_0912a340,0x40007,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac760,0x20019,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac770,0x2001a,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac780,0x2001b,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac790,0x2001c,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_09133af8,0x2001d,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_09124990,0x2001e,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac798,0x50000,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_09135300,0x50001,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac7a8,0x30001,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac7b8,0x10003,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_09135050,0x2001f,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac7c8,0x50002,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)System_Action<List<IdLink>>_TypeInfo,0x40008,
                 *(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac7d8,0x60000,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac7e8,0x60001,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac7f8,0x60002,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac808,0x60003,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_09158a10,0x50003,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac818,0x30002,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)
                         System_Action<AsyncOperationHandle<LocalizedDatabase_TableEntryResult<StringTable,_StringTableEntry>>>_TypeInfo
                 ,0x40009,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac828,0x10004,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac838,0x10005,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac848,0x10006,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac858,0x10007,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac868,0x30003,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac878,0x10008,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac888,0x30004,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac898,0x30005,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac8a8,0x30006,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac8b8,0x30007,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac8c8,0x30008,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac8d8,0x30009,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac8e8,0x10009,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac8f8,0x3000a,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac908,0x1000a,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)
                         System_Action<AsyncOperationHandle<IList<AsyncOperationHandle>>>_TypeInfo,
                 0x4000a,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac918,0x1000b,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac928,0x1000c,*(undefined8 *)puVar7);
    puVar1 = PTR_DAT_091abc18;
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac938,0x3000b,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac940,0x1000d,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac948,0x1000e,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_09125ee8,0x20020,*(undefined8 *)puVar7);
    FUN_06fefffc(lVar10,*(undefined8 *)PTR_DAT_091ac950,0x1000f,*(undefined8 *)puVar7);
    **(long **)(*(long *)puVar1 + 0xb8) = lVar10;
    thunk_FUN_03f86000(*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar10);
    lVar10 = thunk_FUN_03f4e68c(*(undefined8 *)
                                 System_Action<ARTrackedObjectsChangedEventArgs>_TypeInfo);
    FUN_06f813c4(lVar10,*(undefined8 *)
                         System_Action<ARTrackablesParentTransformChangedEventArgs>_TypeInfo);
    puVar3 = System_Action<ARRaycastUpdatedEventArgs>_TypeInfo;
    puVar2 = PTR_DAT_0910b7a0;
    puVar1 = PTR_DAT_0910b790;
    if (lVar10 != 0) {
      FUN_06f81d94(lVar10,0x20000,*(undefined8 *)PTR_DAT_091ac510,
                   *(undefined8 *)System_Action<ARRaycastUpdatedEventArgs>_TypeInfo);
      FUN_06f81d94(lVar10,0x20001,*(undefined8 *)PTR_DAT_091ac520,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x20002,*(undefined8 *)PTR_DAT_091ac530,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x40000,*(undefined8 *)PTR_DAT_09146cf0,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x70000,*(undefined8 *)PTR_DAT_091ac540,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x70001,*(undefined8 *)PTR_DAT_091ac550,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x40001,*(undefined8 *)System_Action<List<PxrSpatialMeshInfo>>_TypeInfo,
                   *(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x70002,*(undefined8 *)PTR_DAT_091ac560,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x70003,*(undefined8 *)PTR_DAT_091ac570,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x70004,*(undefined8 *)PTR_DAT_091ac580,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x70005,*(undefined8 *)PTR_DAT_091ac590,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x70006,*(undefined8 *)PTR_DAT_091ac5a0,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x70007,*(undefined8 *)PTR_DAT_091ac5b0,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x70008,*(undefined8 *)PTR_DAT_091ac5c0,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x20003,*(undefined8 *)PTR_DAT_091ac5d0,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x40002,
                   *(undefined8 *)System_Action<AREnvironmentProbesChangedEvent>_TypeInfo,
                   *(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x70009,*(undefined8 *)PTR_DAT_091ac5e0,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x20004,*(undefined8 *)PTR_DAT_091ac5f0,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x40003,
                   *(undefined8 *)
                    UnityEngine_XR_ARFoundation_ARTrackableManager<XRImageTrackingSubsystem,_XRImageTrackingSubsystemDescriptor,_XRImageTrackingSubsystem_Provider,_XRTrackedImage,_ARTrackedImage>_TypeInfo
                   ,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x7000a,*(undefined8 *)PTR_DAT_091ac600,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x20005,*(undefined8 *)PTR_DAT_091ac610,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x7000b,*(undefined8 *)PTR_DAT_091ac620,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x7000c,*(undefined8 *)PTR_DAT_091ac630,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x7000d,*(undefined8 *)PTR_DAT_091ac640,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x20006,*(undefined8 *)PTR_DAT_091ac650,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x40004,
                   *(undefined8 *)
                    UnityEngine_XR_ARFoundation_VisualScripting_ARTrackablesChangedEventUnit<ARParticipantManager,_ARParticipant,_ARParticipantsChangedListener>_TypeInfo
                   ,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x20007,*(undefined8 *)PTR_DAT_091918c8,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x10000,*(undefined8 *)PTR_DAT_0917bdb8,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x30000,*(undefined8 *)PTR_DAT_091ac658,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x20008,*(undefined8 *)PTR_DAT_091ac660,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x40005,
                   *(undefined8 *)Doozy_Runtime_Signals_SignalProvider_Local_UI_Name_var,
                   *(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x20009,*(undefined8 *)PTR_DAT_091ac670,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x2000a,*(undefined8 *)PTR_DAT_091ac680,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x2000b,*(undefined8 *)PTR_DAT_091ac690,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x2000c,*(undefined8 *)PTR_DAT_091ac6a0,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x2000d,*(undefined8 *)PTR_DAT_091ac6b0,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x10001,*(undefined8 *)PTR_DAT_091ac6b8,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x2000e,*(undefined8 *)PTR_DAT_091a1268,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x2000f,*(undefined8 *)PTR_DAT_091ac6c8,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x20010,*(undefined8 *)PTR_DAT_09124988,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x10002,*(undefined8 *)PTR_DAT_091ac6d8,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x40006,*(undefined8 *)PTR_DAT_09191720,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x20011,*(undefined8 *)PTR_DAT_091ac6e8,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x20012,*(undefined8 *)PTR_DAT_091ac6f8,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x20013,*(undefined8 *)PTR_DAT_091ac708,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x20014,*(undefined8 *)PTR_DAT_091ac718,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x20015,*(undefined8 *)PTR_DAT_091ac728,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x20016,*(undefined8 *)PTR_DAT_09125e98,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x20017,*(undefined8 *)PTR_DAT_091ac740,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x20018,*(undefined8 *)PTR_DAT_09125ea8,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x7000e,*(undefined8 *)PTR_DAT_091ac750,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x7000f,*(undefined8 *)PTR_DAT_09191730,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x40007,*(undefined8 *)PTR_DAT_0912a340,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x20019,*(undefined8 *)PTR_DAT_091ac760,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x2001a,*(undefined8 *)PTR_DAT_091ac770,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x2001b,*(undefined8 *)PTR_DAT_091ac780,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x2001c,*(undefined8 *)PTR_DAT_091ac790,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x2001d,*(undefined8 *)PTR_DAT_09133af8,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x2001e,*(undefined8 *)PTR_DAT_09124990,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x50000,*(undefined8 *)PTR_DAT_091ac798,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x50001,*(undefined8 *)PTR_DAT_09135300,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x30001,*(undefined8 *)PTR_DAT_091ac7a8,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x10003,*(undefined8 *)PTR_DAT_091ac7b8,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x2001f,*(undefined8 *)PTR_DAT_09135050,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x50002,*(undefined8 *)PTR_DAT_091ac7c8,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x40008,*(undefined8 *)System_Action<List<IdLink>>_TypeInfo,
                   *(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x60000,*(undefined8 *)PTR_DAT_091ac7d8,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x60001,*(undefined8 *)PTR_DAT_091ac7e8,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x60002,*(undefined8 *)PTR_DAT_091ac7f8,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x60003,*(undefined8 *)PTR_DAT_091ac808,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x50003,*(undefined8 *)PTR_DAT_09158a10,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x30002,*(undefined8 *)PTR_DAT_091ac818,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x40009,
                   *(undefined8 *)
                    System_Action<AsyncOperationHandle<LocalizedDatabase_TableEntryResult<StringTable,_StringTableEntry>>>_TypeInfo
                   ,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x10004,*(undefined8 *)PTR_DAT_091ac828,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x10005,*(undefined8 *)PTR_DAT_091ac838,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x10006,*(undefined8 *)PTR_DAT_091ac848,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x10007,*(undefined8 *)PTR_DAT_091ac858,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x30003,*(undefined8 *)PTR_DAT_091ac868,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x10008,*(undefined8 *)PTR_DAT_091ac878,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x30004,*(undefined8 *)PTR_DAT_091ac888,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x30005,*(undefined8 *)PTR_DAT_091ac898,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x30006,*(undefined8 *)PTR_DAT_091ac8a8,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x30007,*(undefined8 *)PTR_DAT_091ac8b8,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x30008,*(undefined8 *)PTR_DAT_091ac8c8,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x30009,*(undefined8 *)PTR_DAT_091ac8d8,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x10009,*(undefined8 *)PTR_DAT_091ac8e8,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x3000a,*(undefined8 *)PTR_DAT_091ac8f8,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x1000a,*(undefined8 *)PTR_DAT_091ac908,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x4000a,
                   *(undefined8 *)
                    System_Action<AsyncOperationHandle<IList<AsyncOperationHandle>>>_TypeInfo,
                   *(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x1000b,*(undefined8 *)PTR_DAT_091ac918,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x1000c,*(undefined8 *)PTR_DAT_091ac928,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x3000b,*(undefined8 *)PTR_DAT_091ac938,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x1000d,*(undefined8 *)PTR_DAT_091ac940,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x1000e,*(undefined8 *)PTR_DAT_091ac948,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x20020,*(undefined8 *)PTR_DAT_09125ee8,*(undefined8 *)puVar3);
      FUN_06f81d94(lVar10,0x1000f,*(undefined8 *)PTR_DAT_091ac950,*(undefined8 *)puVar3);
      plVar11 = (long *)(*(long *)(*(long *)PTR_DAT_091abc18 + 0xb8) + 8);
      *plVar11 = lVar10;
      thunk_FUN_03f86000(plVar11,lVar10);
      lVar10 = thunk_FUN_03f4e68c(*(undefined8 *)puVar2);
      FUN_06ff5d90(lVar10,*(undefined8 *)puVar1);
      puVar9 = System_Action<AsyncOperationHandle>_TypeInfo;
      puVar8 = PTR_DAT_091ac578;
      puVar7 = PTR_DAT_091ac568;
      puVar6 = PTR_DAT_091ac558;
      puVar5 = PTR_DAT_091ac548;
      puVar4 = PTR_DAT_091ac538;
      puVar3 = PTR_DAT_091ac528;
      puVar2 = PTR_DAT_091ac518;
      puVar1 = PTR_DAT_0910ba00;
      if (lVar10 != 0) {
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac510,*(undefined8 *)PTR_DAT_091ac508,
                     *(undefined8 *)PTR_DAT_0910ba00);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac520,*(undefined8 *)puVar2,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac530,*(undefined8 *)puVar3,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_09146cf0,*(undefined8 *)PTR_DAT_09146cf0,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac540,*(undefined8 *)puVar4,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac550,*(undefined8 *)puVar5,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)System_Action<List<PxrSpatialMeshInfo>>_TypeInfo,
                     *(undefined8 *)puVar9,*(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac560,*(undefined8 *)puVar6,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac570,*(undefined8 *)puVar7,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac580,*(undefined8 *)puVar8,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac590,*(undefined8 *)PTR_DAT_091ac588,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac5a0,*(undefined8 *)PTR_DAT_091ac598,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac5b0,*(undefined8 *)PTR_DAT_091ac5a8,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac5c0,*(undefined8 *)PTR_DAT_091ac5b8,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac5d0,*(undefined8 *)PTR_DAT_091ac5c8,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)System_Action<AREnvironmentProbesChangedEvent>_TypeInfo,
                     *(undefined8 *)System_Action<AutoCompletePathVisitor>_TypeInfo,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac5e0,*(undefined8 *)PTR_DAT_091ac5d8,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac5f0,*(undefined8 *)PTR_DAT_091ac5e8,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)
                             UnityEngine_XR_ARFoundation_ARTrackableManager<XRImageTrackingSubsystem,_XRImageTrackingSubsystemDescriptor,_XRImageTrackingSubsystem_Provider,_XRTrackedImage,_ARTrackedImage>_TypeInfo
                     ,*(undefined8 *)System_Action<BaseRuntimePanel>_TypeInfo,*(undefined8 *)puVar1)
        ;
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac600,*(undefined8 *)PTR_DAT_091ac5f8,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac610,*(undefined8 *)PTR_DAT_091ac608,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac620,*(undefined8 *)PTR_DAT_091ac618,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac630,*(undefined8 *)PTR_DAT_091ac628,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac640,*(undefined8 *)PTR_DAT_091ac638,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac650,*(undefined8 *)PTR_DAT_091ac648,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)
                             UnityEngine_XR_ARFoundation_VisualScripting_ARTrackablesChangedEventUnit<ARParticipantManager,_ARParticipant,_ARParticipantsChangedListener>_TypeInfo
                     ,*(undefined8 *)System_Action<AsyncOperation>_TypeInfo,*(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091918c8,*(undefined8 *)PTR_DAT_091918c8,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_0917bdb8,*(undefined8 *)PTR_DAT_0917bdb8,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac658,*(undefined8 *)PTR_DAT_091ac658,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac660,*(undefined8 *)PTR_DAT_091ac660,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)Doozy_Runtime_Signals_SignalProvider_Local_UI_Name_var,
                     *(undefined8 *)Doozy_Runtime_Signals_SignalProvider_Local_UI_Name_var,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac670,*(undefined8 *)PTR_DAT_091ac668,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac680,*(undefined8 *)PTR_DAT_091ac678,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac690,*(undefined8 *)PTR_DAT_091ac688,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac6a0,*(undefined8 *)PTR_DAT_091ac698,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac6b0,*(undefined8 *)PTR_DAT_091ac6a8,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac6b8,*(undefined8 *)PTR_DAT_09191768,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091a1268,*(undefined8 *)PTR_DAT_091a1268,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac6c8,*(undefined8 *)PTR_DAT_091ac6c0,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_09124988,*(undefined8 *)PTR_DAT_09124988,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac6d8,*(undefined8 *)PTR_DAT_091ac6d0,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_09191720,*(undefined8 *)PTR_DAT_09191720,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac6e8,*(undefined8 *)PTR_DAT_091ac6e0,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac6f8,*(undefined8 *)PTR_DAT_091ac6f0,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac708,*(undefined8 *)PTR_DAT_091ac700,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac718,*(undefined8 *)PTR_DAT_091ac710,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac728,*(undefined8 *)PTR_DAT_091ac720,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_09125e98,*(undefined8 *)PTR_DAT_091ac730,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac740,*(undefined8 *)PTR_DAT_091ac738,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_09125ea8,*(undefined8 *)PTR_DAT_091ac748,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac750,*(undefined8 *)PTR_DAT_091ac750,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_09191730,*(undefined8 *)PTR_DAT_09191730,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_0912a340,*(undefined8 *)PTR_DAT_0912a340,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac760,*(undefined8 *)PTR_DAT_091ac758,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac770,*(undefined8 *)PTR_DAT_091ac768,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac780,*(undefined8 *)PTR_DAT_091ac778,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac790,*(undefined8 *)PTR_DAT_091ac788,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_09133af8,*(undefined8 *)PTR_DAT_09133af8,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_09124990,*(undefined8 *)PTR_DAT_09124990,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac798,*(undefined8 *)PTR_DAT_091ac798,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_09135300,*(undefined8 *)PTR_DAT_09135300,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac7a8,*(undefined8 *)PTR_DAT_091ac7a0,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac7b8,*(undefined8 *)PTR_DAT_091ac7b0,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_09135050,*(undefined8 *)PTR_DAT_09135050,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac7c8,*(undefined8 *)PTR_DAT_091ac7c0,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)System_Action<List<IdLink>>_TypeInfo,
                     *(undefined8 *)System_Action<List<IdLink>>_TypeInfo,*(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac7d8,*(undefined8 *)PTR_DAT_091ac7d0,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac7e8,*(undefined8 *)PTR_DAT_091ac7e0,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac7f8,*(undefined8 *)PTR_DAT_091ac7f0,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac808,*(undefined8 *)PTR_DAT_091ac800,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_09158a10,*(undefined8 *)PTR_DAT_09158a10,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac818,*(undefined8 *)PTR_DAT_091ac810,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)
                             System_Action<AsyncOperationHandle<LocalizedDatabase_TableEntryResult<StringTable,_StringTableEntry>>>_TypeInfo
                     ,*(undefined8 *)System_Action<BaseVisualElementPanel>_TypeInfo,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac828,*(undefined8 *)PTR_DAT_091ac820,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac838,*(undefined8 *)PTR_DAT_091ac830,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac848,*(undefined8 *)PTR_DAT_091ac840,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac858,*(undefined8 *)PTR_DAT_091ac850,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac868,*(undefined8 *)PTR_DAT_091ac860,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac878,*(undefined8 *)PTR_DAT_091ac870,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac888,*(undefined8 *)PTR_DAT_091ac880,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac898,*(undefined8 *)PTR_DAT_091ac890,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac8a8,*(undefined8 *)PTR_DAT_091ac8a0,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac8b8,*(undefined8 *)PTR_DAT_091ac8b0,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac8c8,*(undefined8 *)PTR_DAT_091ac8c0,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac8d8,*(undefined8 *)PTR_DAT_091ac8d0,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac8e8,*(undefined8 *)PTR_DAT_091ac8e0,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac8f8,*(undefined8 *)PTR_DAT_091ac8f0,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac908,*(undefined8 *)PTR_DAT_091ac900,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)
                             System_Action<AsyncOperationHandle<IList<AsyncOperationHandle>>>_TypeInfo
                     ,*(undefined8 *)System_Action<bool>_TypeInfo,*(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac918,*(undefined8 *)PTR_DAT_091ac910,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac928,*(undefined8 *)PTR_DAT_091ac920,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac938,*(undefined8 *)PTR_DAT_091ac930,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac940,*(undefined8 *)PTR_DAT_091ac940,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac948,*(undefined8 *)PTR_DAT_09157070,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_09125ee8,*(undefined8 *)PTR_DAT_09125ee8,
                     *(undefined8 *)puVar1);
        FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac950,*(undefined8 *)PTR_DAT_091a8708,
                     *(undefined8 *)puVar1);
        plVar11 = (long *)(*(long *)(*(long *)PTR_DAT_091abc18 + 0xb8) + 0x10);
        *plVar11 = lVar10;
        thunk_FUN_03f86000(plVar11,lVar10);
        lVar10 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0910b7a0);
        FUN_06ff5d90(lVar10,*(undefined8 *)PTR_DAT_0910b790);
        puVar3 = System_Action<AsyncGPUReadbackRequest>_TypeInfo;
        puVar2 = System_Action<AndroidJavaObject>_TypeInfo;
        if (lVar10 != 0) {
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac508,*(undefined8 *)PTR_DAT_091ac510,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac518,*(undefined8 *)PTR_DAT_091ac520,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac528,*(undefined8 *)PTR_DAT_091ac530,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_09146cf0,*(undefined8 *)PTR_DAT_09146cf0,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac538,*(undefined8 *)PTR_DAT_091ac540,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac548,*(undefined8 *)PTR_DAT_091ac550,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)System_Action<AsyncOperationHandle>_TypeInfo,
                       *(undefined8 *)System_Action<List<PxrSpatialMeshInfo>>_TypeInfo,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac558,*(undefined8 *)PTR_DAT_091ac560,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac568,*(undefined8 *)PTR_DAT_091ac570,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac578,*(undefined8 *)PTR_DAT_091ac580,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac588,*(undefined8 *)PTR_DAT_091ac590,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac598,*(undefined8 *)PTR_DAT_091ac5a0,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac5a8,*(undefined8 *)PTR_DAT_091ac5b0,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac5b8,*(undefined8 *)PTR_DAT_091ac5c0,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac5c8,*(undefined8 *)PTR_DAT_091ac5d0,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)System_Action<AutoCompletePathVisitor>_TypeInfo,
                       *(undefined8 *)System_Action<AREnvironmentProbesChangedEvent>_TypeInfo,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac5d8,*(undefined8 *)PTR_DAT_091ac5e0,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac5e8,*(undefined8 *)PTR_DAT_091ac5f0,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)System_Action<BaseRuntimePanel>_TypeInfo,
                       *(undefined8 *)
                        UnityEngine_XR_ARFoundation_ARTrackableManager<XRImageTrackingSubsystem,_XRImageTrackingSubsystemDescriptor,_XRImageTrackingSubsystem_Provider,_XRTrackedImage,_ARTrackedImage>_TypeInfo
                       ,*(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac5f8,*(undefined8 *)PTR_DAT_091ac600,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac608,*(undefined8 *)PTR_DAT_091ac610,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac618,*(undefined8 *)PTR_DAT_091ac620,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac628,*(undefined8 *)PTR_DAT_091ac630,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac638,*(undefined8 *)PTR_DAT_091ac640,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac648,*(undefined8 *)PTR_DAT_091ac650,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)System_Action<AsyncOperation>_TypeInfo,
                       *(undefined8 *)
                        UnityEngine_XR_ARFoundation_VisualScripting_ARTrackablesChangedEventUnit<ARParticipantManager,_ARParticipant,_ARParticipantsChangedListener>_TypeInfo
                       ,*(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091918c8,*(undefined8 *)PTR_DAT_091918c8,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_0917bdb8,*(undefined8 *)PTR_DAT_0917bdb8,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac658,*(undefined8 *)PTR_DAT_091ac658,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac660,*(undefined8 *)PTR_DAT_091ac660,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)Doozy_Runtime_Signals_SignalProvider_Local_UI_Name_var,
                       *(undefined8 *)Doozy_Runtime_Signals_SignalProvider_Local_UI_Name_var,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac668,*(undefined8 *)PTR_DAT_091ac670,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac678,*(undefined8 *)PTR_DAT_091ac680,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac688,*(undefined8 *)PTR_DAT_091ac690,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac698,*(undefined8 *)PTR_DAT_091ac6a0,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac6a8,*(undefined8 *)PTR_DAT_091ac6b0,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_09191768,*(undefined8 *)PTR_DAT_091ac6b8,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091a1268,*(undefined8 *)PTR_DAT_091a1268,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac6c0,*(undefined8 *)PTR_DAT_091ac6c8,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_09124988,*(undefined8 *)PTR_DAT_09124988,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac6d0,*(undefined8 *)PTR_DAT_091ac6d8,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_09191720,*(undefined8 *)PTR_DAT_09191720,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac6e0,*(undefined8 *)PTR_DAT_091ac6e8,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac6f0,*(undefined8 *)PTR_DAT_091ac6f8,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac700,*(undefined8 *)PTR_DAT_091ac708,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac710,*(undefined8 *)PTR_DAT_091ac718,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac720,*(undefined8 *)PTR_DAT_091ac728,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac730,*(undefined8 *)PTR_DAT_09125e98,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac738,*(undefined8 *)PTR_DAT_091ac740,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac748,*(undefined8 *)PTR_DAT_09125ea8,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac750,*(undefined8 *)PTR_DAT_091ac750,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_09191730,*(undefined8 *)PTR_DAT_09191730,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_0912a340,*(undefined8 *)PTR_DAT_0912a340,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac758,*(undefined8 *)PTR_DAT_091ac760,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac768,*(undefined8 *)PTR_DAT_091ac770,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac778,*(undefined8 *)PTR_DAT_091ac780,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac788,*(undefined8 *)PTR_DAT_091ac790,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_09133af8,*(undefined8 *)PTR_DAT_09133af8,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_09124990,*(undefined8 *)PTR_DAT_09124990,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac798,*(undefined8 *)PTR_DAT_091ac798,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_09135300,*(undefined8 *)PTR_DAT_09135300,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac7a0,*(undefined8 *)PTR_DAT_091ac7a8,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac7b0,*(undefined8 *)PTR_DAT_091ac7b8,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_09135050,*(undefined8 *)PTR_DAT_09135050,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac7c0,*(undefined8 *)PTR_DAT_091ac7c8,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)System_Action<List<IdLink>>_TypeInfo,
                       *(undefined8 *)System_Action<List<IdLink>>_TypeInfo,*(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac7d0,*(undefined8 *)PTR_DAT_091ac7d8,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac7e0,*(undefined8 *)PTR_DAT_091ac7e8,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac7f0,*(undefined8 *)PTR_DAT_091ac7f8,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac800,*(undefined8 *)PTR_DAT_091ac808,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_09158a10,*(undefined8 *)PTR_DAT_09158a10,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac810,*(undefined8 *)PTR_DAT_091ac818,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)System_Action<BaseVisualElementPanel>_TypeInfo,
                       *(undefined8 *)
                        System_Action<AsyncOperationHandle<LocalizedDatabase_TableEntryResult<StringTable,_StringTableEntry>>>_TypeInfo
                       ,*(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac820,*(undefined8 *)PTR_DAT_091ac828,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac830,*(undefined8 *)PTR_DAT_091ac838,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac840,*(undefined8 *)PTR_DAT_091ac848,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac850,*(undefined8 *)PTR_DAT_091ac858,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac860,*(undefined8 *)PTR_DAT_091ac868,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac870,*(undefined8 *)PTR_DAT_091ac878,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac880,*(undefined8 *)PTR_DAT_091ac888,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac890,*(undefined8 *)PTR_DAT_091ac898,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac8a0,*(undefined8 *)PTR_DAT_091ac8a8,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac8b0,*(undefined8 *)PTR_DAT_091ac8b8,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac8c0,*(undefined8 *)PTR_DAT_091ac8c8,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac8d0,*(undefined8 *)PTR_DAT_091ac8d8,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac8e0,*(undefined8 *)PTR_DAT_091ac8e8,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac8f0,*(undefined8 *)PTR_DAT_091ac8f8,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac900,*(undefined8 *)PTR_DAT_091ac908,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)System_Action<bool>_TypeInfo,
                       *(undefined8 *)
                        System_Action<AsyncOperationHandle<IList<AsyncOperationHandle>>>_TypeInfo,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac910,*(undefined8 *)PTR_DAT_091ac918,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac920,*(undefined8 *)PTR_DAT_091ac928,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac930,*(undefined8 *)PTR_DAT_091ac938,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091ac940,*(undefined8 *)PTR_DAT_091ac940,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_09157070,*(undefined8 *)PTR_DAT_091ac948,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_09125ee8,*(undefined8 *)PTR_DAT_09125ee8,
                       *(undefined8 *)puVar1);
          FUN_06ff673c(lVar10,*(undefined8 *)PTR_DAT_091a8708,*(undefined8 *)PTR_DAT_091ac950,
                       *(undefined8 *)puVar1);
          puVar1 = PTR_DAT_091abc18;
          plVar11 = (long *)(*(long *)(*(long *)PTR_DAT_091abc18 + 0xb8) + 0x18);
          *plVar11 = lVar10;
          thunk_FUN_03f86000(plVar11,lVar10);
          lVar10 = thunk_FUN_03f4e68c(*(undefined8 *)puVar3);
          FUN_0511c194(lVar10,*(undefined8 *)puVar2);
          puVar4 = System_Action<AffordanceStateData>_TypeInfo;
          puVar3 = System_Action<ARTrackedImagesChangedEventArgs>_TypeInfo;
          puVar2 = System_Action<ARSessionStateChangedEventArgs>_TypeInfo;
          if (lVar10 != 0) {
            FUN_0511d3d4(lVar10,0x20000,*(undefined8 *)System_Action<AffordanceStateData>_TypeInfo);
            FUN_0511d3d4(lVar10,0x20001,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x20002,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x40000,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x70000,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x70001,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x40001,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x70002,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x70003,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x70004,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x70005,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x70006,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x70007,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x70008,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x20003,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x40002,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x70009,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x20004,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x40003,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x7000a,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x20005,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x7000b,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x7000c,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x7000d,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x20006,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x40004,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x20007,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x10000,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x40005,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x20009,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x2000a,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x2000b,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x2000c,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x2000d,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x10001,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x2000e,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x2000f,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x20010,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x10002,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x40006,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x20011,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x20012,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x20013,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x20014,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x20015,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x20016,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x20017,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x20018,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x7000e,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x7000f,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x40007,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x20019,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x2001a,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x2001b,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x2001c,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x2001d,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x2001e,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x50000,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x50001,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x30001,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x10003,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x2001f,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x50002,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x50003,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x30002,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x40009,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x10005,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x10006,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x10007,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x30003,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x10008,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x30004,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x30005,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x30006,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x30007,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x30008,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x30009,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x10009,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x4000a,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x1000b,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x1000c,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x3000b,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x1000d,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x1000e,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x20020,*(undefined8 *)puVar4);
            FUN_0511d3d4(lVar10,0x1000f,*(undefined8 *)puVar4);
            plVar11 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
            *plVar11 = lVar10;
            thunk_FUN_03f86000(plVar11,lVar10);
            lVar10 = thunk_FUN_03f4e68c(*(undefined8 *)puVar3);
            FUN_06f7dff4(lVar10,*(undefined8 *)puVar2);
            puVar2 = System_Action<ARPointCloudUpdatedEventArgs>_TypeInfo;
            if (lVar10 != 0) {
              FUN_06f7e9b4(lVar10,0x70000,8,
                           *(undefined8 *)System_Action<ARPointCloudUpdatedEventArgs>_TypeInfo);
              FUN_06f7e9b4(lVar10,0x70006,8,*(undefined8 *)puVar2);
              FUN_06f7e9b4(lVar10,0x40002,8,*(undefined8 *)puVar2);
              FUN_06f7e9b4(lVar10,0x70009,8,*(undefined8 *)puVar2);
              FUN_06f7e9b4(lVar10,0x7000a,8,*(undefined8 *)puVar2);
              FUN_06f7e9b4(lVar10,0x7000b,8,*(undefined8 *)puVar2);
              FUN_06f7e9b4(lVar10,0x10000,8,*(undefined8 *)puVar2);
              FUN_06f7e9b4(lVar10,0x50000,1,*(undefined8 *)puVar2);
              FUN_06f7e9b4(lVar10,0x50001,1,*(undefined8 *)puVar2);
              FUN_06f7e9b4(lVar10,0x50002,1,*(undefined8 *)puVar2);
              FUN_06f7e9b4(lVar10,0x50003,1,*(undefined8 *)puVar2);
              FUN_06f7e9b4(lVar10,0x30002,8,*(undefined8 *)puVar2);
              plVar11 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
              *plVar11 = lVar10;
              thunk_FUN_03f86000(plVar11,lVar10);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


