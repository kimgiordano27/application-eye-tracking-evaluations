/*
FUNCTION_NAME: FUN_0592e5a8
ENTRY_POINT: 0592e5a8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_file_logging_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0592e5a8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar1 = OVR_OpenVR_IVRExtendedDisplay__GetWindowBounds_TypeInfo;
  if ((DAT_06dc1035 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0ad18);
    FUN_02d965b8(PTR_DAT_06a0ad40);
    FUN_02d965b8(PTR_DAT_06a0ad50);
    FUN_02d965b8(OVR_OpenVR_IVRExtendedDisplay__GetWindowBounds_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRIOBuffer__Close_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0add0);
    FUN_02d965b8(PTR_DAT_06a0ae00);
    FUN_02d965b8(System_Xml_Schema_XmlSchemaFractionDigitsFacet_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a17008);
    FUN_02d965b8(OVR_OpenVR_IVRIOBuffer__Open_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a17010);
    FUN_02d965b8(PTR_DAT_06a17020);
    FUN_02d965b8(System_Net_Http_HttpClientHandler_<>c_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRIOBuffer__PropertyContainer_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRIOBuffer__Read_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRIOBuffer__Write_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRInput__DecompressSkeletalBoneData_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a10f20);
    FUN_02d965b8(
                System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualDouble_TypeInfo
                );
    FUN_02d965b8(OVR_OpenVR_IVRInput__GetActionHandle_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a1e340);
    FUN_02d965b8(OVR_OpenVR_IVRInput__GetActionOrigins_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a13660);
    FUN_02d965b8(PTR_DAT_06a17038);
    FUN_02d965b8(PTR_DAT_06a19758);
    FUN_02d965b8(OVR_OpenVR_IVRInput__GetActionSetHandle_TypeInfo);
    FUN_02d965b8(
                System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt32_TypeInfo
                );
    FUN_02d965b8(OVR_OpenVR_IVRInput__GetAnalogActionData_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRInput__GetDigitalActionData_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRInput__GetInputSourceHandle_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRInput__GetOriginLocalizedName_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRInput__GetOriginTrackedDeviceInfo_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRInput__GetPoseActionData_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRInput__GetSkeletalActionData_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRInput__GetSkeletalBoneData_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRInput__GetSkeletalBoneDataCompressed_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRInput__SetActionManifestPath_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRInput__ShowActionOrigins_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRInput__ShowBindingsForActionSet_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRInput__TriggerHapticVibrationAction_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRInput__UpdateActionState_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRNotifications__CreateNotification_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRNotifications__RemoveNotification_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a00020);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__ClearOverlayTexture_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__CloseMessageOverlay_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a17050);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__ComputeOverlayIntersection_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a17068);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__GetApplicationCount_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__CreateDashboardOverlay_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__CreateOverlay_TypeInfo);
    DAT_06dc1035 = 1;
  }
  puVar2 = OVR_OpenVR_IVROverlay__CreateDashboardOverlay_TypeInfo;
  puVar6 = OVR_OpenVR_IVRIOBuffer__Close_TypeInfo;
  lVar7 = FUN_02d966a4(*(undefined8 *)puVar1,0x2c);
  puVar1 = PTR_DAT_069fb9c0;
  lVar10 = *(long *)(PTR_DAT_069fb9c0 + 0x90);
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)(PTR_DAT_069fb9c0 + 0xe0));
  }
  uVar8 = FUN_054f73b4(lVar10 + 0x20,0);
  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
  FUN_0592f840(uVar9,*(undefined8 *)puVar2,uVar8,0);
  puVar2 = OVR_OpenVR_IVRIOBuffer__Open_TypeInfo;
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x18) != 0) {
      *(undefined8 *)(lVar7 + 0x20) = uVar9;
      LeanTween__value((undefined8 *)(lVar7 + 0x20),uVar9);
      uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x90) + 0x20,0);
      uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
      FUN_0592f840(uVar9,*(undefined8 *)puVar2,uVar8,0);
      puVar2 = OVR_OpenVR_IVROverlay__CreateOverlay_TypeInfo;
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar7 + 0x28) = uVar9;
        LeanTween__value((undefined8 *)(lVar7 + 0x28),uVar9);
        uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x90) + 0x20,0);
        uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
        FUN_0592f840(uVar9,*(undefined8 *)puVar2,uVar8,0);
        puVar2 = OVR_OpenVR_IVRInput__GetActionHandle_TypeInfo;
        if (2 < *(uint *)(lVar7 + 0x18)) {
          *(undefined8 *)(lVar7 + 0x30) = uVar9;
          LeanTween__value((undefined8 *)(lVar7 + 0x30),uVar9);
          uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x90) + 0x20,0);
          uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
          FUN_0592f840(uVar9,*(undefined8 *)puVar2,uVar8,0);
          puVar2 = OVR_OpenVR_IVRInput__GetActionSetHandle_TypeInfo;
          if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar7 + 0x38) = uVar9;
            LeanTween__value((undefined8 *)(lVar7 + 0x38),uVar9);
            uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x90) + 0x20,0);
            uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
            FUN_0592f840(uVar9,*(undefined8 *)puVar2,uVar8,0);
            puVar2 = OVR_OpenVR_IVRInput__GetActionOrigins_TypeInfo;
            if (4 < *(uint *)(lVar7 + 0x18)) {
              *(undefined8 *)(lVar7 + 0x40) = uVar9;
              LeanTween__value((undefined8 *)(lVar7 + 0x40),uVar9);
              uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x90) + 0x20,0);
              uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
              FUN_0592f840(uVar9,*(undefined8 *)puVar2,uVar8,0);
              puVar2 = OVR_OpenVR_IVRInput__DecompressSkeletalBoneData_TypeInfo;
              if (5 < *(uint *)(lVar7 + 0x18)) {
                *(undefined8 *)(lVar7 + 0x48) = uVar9;
                LeanTween__value((undefined8 *)(lVar7 + 0x48),uVar9);
                uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x90) + 0x20,0);
                uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
                FUN_0592f840(uVar9,*(undefined8 *)puVar2,uVar8,0);
                puVar2 = OVR_OpenVR_IVROverlay__ClearOverlayTexture_TypeInfo;
                if (6 < *(uint *)(lVar7 + 0x18)) {
                  *(undefined8 *)(lVar7 + 0x50) = uVar9;
                  LeanTween__value((undefined8 *)(lVar7 + 0x50),uVar9);
                  uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x90) + 0x20,0);
                  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
                  FUN_0592f840(uVar9,*(undefined8 *)puVar2,uVar8,0);
                  puVar2 = 
                  System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualDouble_TypeInfo
                  ;
                  if ((*(uint *)(lVar7 + 0x18) & 0xfffffff8) != 0) {
                    *(undefined8 *)(lVar7 + 0x58) = uVar9;
                    LeanTween__value((undefined8 *)(lVar7 + 0x58),uVar9);
                    uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x90) + 0x20,0);
                    uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
                    FUN_0592f840(uVar9,*(undefined8 *)puVar2,uVar8,0);
                    puVar2 = PTR_DAT_06a19758;
                    if (8 < *(uint *)(lVar7 + 0x18)) {
                      *(undefined8 *)(lVar7 + 0x60) = uVar9;
                      LeanTween__value((undefined8 *)(lVar7 + 0x60),uVar9);
                      uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x90) + 0x20,0);
                      uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
                      FUN_0592f840(uVar9,*(undefined8 *)puVar2,uVar8,0);
                      puVar2 = OVR_OpenVR_IVRInput__GetSkeletalActionData_TypeInfo;
                      if (9 < *(uint *)(lVar7 + 0x18)) {
                        *(undefined8 *)(lVar7 + 0x68) = uVar9;
                        LeanTween__value((undefined8 *)(lVar7 + 0x68),uVar9);
                        uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x90) + 0x20,0);
                        uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
                        FUN_0592f840(uVar9,*(undefined8 *)puVar2,uVar8,0);
                        puVar2 = OVR_OpenVR_IVRInput__GetSkeletalBoneData_TypeInfo;
                        if (10 < *(uint *)(lVar7 + 0x18)) {
                          *(undefined8 *)(lVar7 + 0x70) = uVar9;
                          LeanTween__value((undefined8 *)(lVar7 + 0x70),uVar9);
                          uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x10) + 0x20,0);
                          uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
                          FUN_0592f840(uVar9,*(undefined8 *)puVar2,uVar8,0);
                          puVar3 = OVR_OpenVR_IVRInput__TriggerHapticVibrationAction_TypeInfo;
                          puVar2 = PTR_DAT_06a0ae00;
                          if (0xb < *(uint *)(lVar7 + 0x18)) {
                            *(undefined8 *)(lVar7 + 0x78) = uVar9;
                            LeanTween__value((undefined8 *)(lVar7 + 0x78),uVar9);
                            uVar8 = FUN_054f73b4(*(undefined8 *)puVar2,0);
                            uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
                            FUN_0592f840(uVar9,*(undefined8 *)puVar3,uVar8,0);
                            puVar3 = 
                            System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt32_TypeInfo
                            ;
                            puVar2 = PTR_DAT_06a0ad18;
                            if (0xc < *(uint *)(lVar7 + 0x18)) {
                              *(undefined8 *)(lVar7 + 0x80) = uVar9;
                              LeanTween__value((undefined8 *)(lVar7 + 0x80),uVar9);
                              uVar8 = FUN_054f73b4(*(undefined8 *)puVar2,0);
                              uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
                              FUN_0592f840(uVar9,*(undefined8 *)puVar3,uVar8,0);
                              puVar3 = OVR_OpenVR_IVRApplications__GetApplicationCount_TypeInfo;
                              if (0xd < *(uint *)(lVar7 + 0x18)) {
                                *(undefined8 *)(lVar7 + 0x88) = uVar9;
                                LeanTween__value((undefined8 *)(lVar7 + 0x88),uVar9);
                                uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x28) + 0x20,0);
                                uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
                                FUN_0592f840(uVar9,*(undefined8 *)puVar3,uVar8,0);
                                puVar3 = PTR_DAT_06a17050;
                                if (0xe < *(uint *)(lVar7 + 0x18)) {
                                  *(undefined8 *)(lVar7 + 0x90) = uVar9;
                                  LeanTween__value((undefined8 *)(lVar7 + 0x90),uVar9);
                                  uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x30) + 0x20,0);
                                  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
                                  FUN_0592f840(uVar9,*(undefined8 *)puVar3,uVar8,0);
                                  puVar4 = System_Net_Http_HttpClientHandler_<>c_TypeInfo;
                                  puVar3 = PTR_DAT_06a0ad40;
                                  if ((*(uint *)(lVar7 + 0x18) & 0xfffffff0) != 0) {
                                    *(undefined8 *)(lVar7 + 0x98) = uVar9;
                                    LeanTween__value((undefined8 *)(lVar7 + 0x98),uVar9);
                                    uVar8 = FUN_054f73b4(*(undefined8 *)puVar3,0);
                                    uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
                                    FUN_0592f840(uVar9,*(undefined8 *)puVar4,uVar8,0);
                                    puVar4 = PTR_DAT_06a1e340;
                                    if (0x10 < *(uint *)(lVar7 + 0x18)) {
                                      *(undefined8 *)(lVar7 + 0xa0) = uVar9;
                                      LeanTween__value((undefined8 *)(lVar7 + 0xa0),uVar9);
                                      uVar8 = FUN_054f73b4(*(undefined8 *)puVar3,0);
                                      uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
                                      FUN_0592f840(uVar9,*(undefined8 *)puVar4,uVar8,0);
                                      puVar5 = PTR_DAT_06a17038;
                                      puVar4 = PTR_DAT_06a0ad50;
                                      if (0x11 < *(uint *)(lVar7 + 0x18)) {
                                        *(undefined8 *)(lVar7 + 0xa8) = uVar9;
                                        LeanTween__value((undefined8 *)(lVar7 + 0xa8),uVar9);
                                        uVar8 = FUN_054f73b4(*(undefined8 *)puVar4,0);
                                        uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
                                        FUN_0592f840(uVar9,*(undefined8 *)puVar5,uVar8,0);
                                        puVar4 = PTR_DAT_06a17008;
                                        if (0x12 < *(uint *)(lVar7 + 0x18)) {
                                          *(undefined8 *)(lVar7 + 0xb0) = uVar9;
                                          LeanTween__value((undefined8 *)(lVar7 + 0xb0),uVar9);
                                          uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x80) + 0x20,0);
                                          uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
                                          FUN_0592f840(uVar9,*(undefined8 *)puVar4,uVar8,0);
                                          puVar5 = 
                                          OVR_OpenVR_IVRInput__GetInputSourceHandle_TypeInfo;
                                          puVar4 = PTR_DAT_06a0add0;
                                          if (0x13 < *(uint *)(lVar7 + 0x18)) {
                                            *(undefined8 *)(lVar7 + 0xb8) = uVar9;
                                            LeanTween__value((undefined8 *)(lVar7 + 0xb8),uVar9);
                                            uVar8 = FUN_054f73b4(*(undefined8 *)puVar4,0);
                                            uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
                                            FUN_0592f840(uVar9,*(undefined8 *)puVar5,uVar8,0);
                                            puVar4 = PTR_DAT_06a17068;
                                            if (0x14 < *(uint *)(lVar7 + 0x18)) {
                                              *(undefined8 *)(lVar7 + 0xc0) = uVar9;
                                              LeanTween__value((undefined8 *)(lVar7 + 0xc0),uVar9);
                                              uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x78) + 0x20,0
                                                                  );
                                              uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
                                              FUN_0592f840(uVar9,*(undefined8 *)puVar4,uVar8,0);
                                              puVar4 = 
                                              OVR_OpenVR_IVRInput__SetActionManifestPath_TypeInfo;
                                              if (0x15 < *(uint *)(lVar7 + 0x18)) {
                                                *(undefined8 *)(lVar7 + 200) = uVar9;
                                                LeanTween__value((undefined8 *)(lVar7 + 200),uVar9);
                                                uVar8 = FUN_054f73b4(*(undefined8 *)puVar3,0);
                                                uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
                                                FUN_0592f840(uVar9,*(undefined8 *)puVar4,uVar8,0);
                                                puVar4 = 
                                                OVR_OpenVR_IVRInput__GetOriginTrackedDeviceInfo_TypeInfo
                                                ;
                                                if (0x16 < *(uint *)(lVar7 + 0x18)) {
                                                  *(undefined8 *)(lVar7 + 0xd0) = uVar9;
                                                  LeanTween__value((undefined8 *)(lVar7 + 0xd0),
                                                                   uVar9);
                                                  uVar8 = FUN_054f73b4(*(undefined8 *)puVar3,0);
                                                  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
                                                  FUN_0592f840(uVar9,*(undefined8 *)puVar4,uVar8,0);
                                                  puVar4 = 
                                                  OVR_OpenVR_IVRNotifications__RemoveNotification_TypeInfo
                                                  ;
                                                  if (0x17 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0xd8) = uVar9;
                                                    LeanTween__value((undefined8 *)(lVar7 + 0xd8),
                                                                     uVar9);
                                                    uVar8 = FUN_054f73b4(*(undefined8 *)puVar3,0);
                                                    uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6
                                                                              );
                                                    FUN_0592f840(uVar9,*(undefined8 *)puVar4,uVar8,0
                                                                );
                                                    puVar4 = 
                                                  OVR_OpenVR_IVRInput__GetSkeletalBoneDataCompressed_TypeInfo
                                                  ;
                                                  if (0x18 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0xe0) = uVar9;
                                                    LeanTween__value((undefined8 *)(lVar7 + 0xe0),
                                                                     uVar9);
                                                    uVar8 = FUN_054f73b4(*(undefined8 *)puVar3,0);
                                                    uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6
                                                                              );
                                                    FUN_0592f840(uVar9,*(undefined8 *)puVar4,uVar8,0
                                                                );
                                                    puVar4 = 
                                                  OVR_OpenVR_IVROverlay__CloseMessageOverlay_TypeInfo
                                                  ;
                                                  if (0x19 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0xe8) = uVar9;
                                                    LeanTween__value((undefined8 *)(lVar7 + 0xe8),
                                                                     uVar9);
                                                    uVar8 = FUN_054f73b4(*(undefined8 *)puVar3,0);
                                                    uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6
                                                                              );
                                                    FUN_0592f840(uVar9,*(undefined8 *)puVar4,uVar8,0
                                                                );
                                                    puVar4 = 
                                                  OVR_OpenVR_IVRInput__GetAnalogActionData_TypeInfo;
                                                  if (0x1a < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0xf0) = uVar9;
                                                    LeanTween__value((undefined8 *)(lVar7 + 0xf0),
                                                                     uVar9);
                                                    uVar8 = FUN_054f73b4(*(undefined8 *)puVar2,0);
                                                    uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6
                                                                              );
                                                    FUN_0592f840(uVar9,*(undefined8 *)puVar4,uVar8,0
                                                                );
                                                    puVar2 = PTR_DAT_06a17010;
                                                    if (0x1b < *(uint *)(lVar7 + 0x18)) {
                                                      *(undefined8 *)(lVar7 + 0xf8) = uVar9;
                                                      LeanTween__value((undefined8 *)(lVar7 + 0xf8),
                                                                       uVar9);
                                                      uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x48)
                                                                           + 0x20,0);
                                                      uVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                  puVar6);
                                                      FUN_0592f840(uVar9,*(undefined8 *)puVar2,uVar8
                                                                   ,0);
                                                      puVar2 = 
                                                  OVR_OpenVR_IVRInput__ShowActionOrigins_TypeInfo;
                                                  if (0x1c < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x100) = uVar9;
                                                    LeanTween__value(lVar7 + 0x100,uVar9);
                                                    uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x68) +
                                                                         0x20,0);
                                                    uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6
                                                                              );
                                                    FUN_0592f840(uVar9,*(undefined8 *)puVar2,uVar8,0
                                                                );
                                                    puVar2 = 
                                                  OVR_OpenVR_IVRNotifications__CreateNotification_TypeInfo
                                                  ;
                                                  if (0x1d < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x108) = uVar9;
                                                    LeanTween__value(lVar7 + 0x108,uVar9);
                                                    uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x90) +
                                                                         0x20,0);
                                                    uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6
                                                                              );
                                                    FUN_0592f840(uVar9,*(undefined8 *)puVar2,uVar8,0
                                                                );
                                                    puVar2 = PTR_DAT_06a00020;
                                                    if (0x1e < *(uint *)(lVar7 + 0x18)) {
                                                      *(undefined8 *)(lVar7 + 0x110) = uVar9;
                                                      LeanTween__value(lVar7 + 0x110,uVar9);
                                                      uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x68)
                                                                           + 0x20,0);
                                                      uVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                  puVar6);
                                                      FUN_0592f840(uVar9,*(undefined8 *)puVar2,uVar8
                                                                   ,0);
                                                      puVar2 = 
                                                  OVR_OpenVR_IVRInput__UpdateActionState_TypeInfo;
                                                  if ((*(uint *)(lVar7 + 0x18) & 0xffffffe0) != 0) {
                                                    *(undefined8 *)(lVar7 + 0x118) = uVar9;
                                                    LeanTween__value(lVar7 + 0x118,uVar9);
                                                    uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x68) +
                                                                         0x20,0);
                                                    uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6
                                                                              );
                                                    FUN_0592f840(uVar9,*(undefined8 *)puVar2,uVar8,0
                                                                );
                                                    puVar2 = 
                                                  OVR_OpenVR_IVRInput__ShowBindingsForActionSet_TypeInfo
                                                  ;
                                                  if (0x20 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x120) = uVar9;
                                                    LeanTween__value(lVar7 + 0x120,uVar9);
                                                    uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x70) +
                                                                         0x20,0);
                                                    uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6
                                                                              );
                                                    FUN_0592f840(uVar9,*(undefined8 *)puVar2,uVar8,0
                                                                );
                                                    puVar2 = 
                                                  OVR_OpenVR_IVRIOBuffer__PropertyContainer_TypeInfo
                                                  ;
                                                  if (0x21 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x128) = uVar9;
                                                    LeanTween__value(lVar7 + 0x128,uVar9);
                                                    uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x68) +
                                                                         0x20,0);
                                                    uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6
                                                                              );
                                                    FUN_0592f840(uVar9,*(undefined8 *)puVar2,uVar8,0
                                                                );
                                                    puVar2 = 
                                                  OVR_OpenVR_IVRInput__GetDigitalActionData_TypeInfo
                                                  ;
                                                  if (0x22 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x130) = uVar9;
                                                    LeanTween__value(lVar7 + 0x130,uVar9);
                                                    uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x90) +
                                                                         0x20,0);
                                                    uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6
                                                                              );
                                                    FUN_0592f840(uVar9,*(undefined8 *)puVar2,uVar8,0
                                                                );
                                                    puVar2 = OVR_OpenVR_IVRIOBuffer__Read_TypeInfo;
                                                    if (0x23 < *(uint *)(lVar7 + 0x18)) {
                                                      *(undefined8 *)(lVar7 + 0x138) = uVar9;
                                                      LeanTween__value(lVar7 + 0x138,uVar9);
                                                      uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x70)
                                                                           + 0x20,0);
                                                      uVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                  puVar6);
                                                      FUN_0592f840(uVar9,*(undefined8 *)puVar2,uVar8
                                                                   ,0);
                                                      puVar2 = PTR_DAT_06a17020;
                                                      if (0x24 < *(uint *)(lVar7 + 0x18)) {
                                                        *(undefined8 *)(lVar7 + 0x140) = uVar9;
                                                        LeanTween__value(lVar7 + 0x140,uVar9);
                                                        uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x38
                                                                                      ) + 0x20,0);
                                                        uVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                    puVar6);
                                                        FUN_0592f840(uVar9,*(undefined8 *)puVar2,
                                                                     uVar8,0);
                                                        puVar2 = PTR_DAT_06a10f20;
                                                        if (0x25 < *(uint *)(lVar7 + 0x18)) {
                                                          *(undefined8 *)(lVar7 + 0x148) = uVar9;
                                                          LeanTween__value(lVar7 + 0x148,uVar9);
                                                          uVar8 = FUN_054f73b4(*(long *)(puVar1 + 
                                                  0x90) + 0x20,0);
                                                  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
                                                  FUN_0592f840(uVar9,*(undefined8 *)puVar2,uVar8,0);
                                                  puVar2 = PTR_DAT_06a13660;
                                                  if (0x26 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x150) = uVar9;
                                                    LeanTween__value(lVar7 + 0x150,uVar9);
                                                    uVar8 = FUN_054f73b4(*(undefined8 *)puVar3,0);
                                                    uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6
                                                                              );
                                                    FUN_0592f840(uVar9,*(undefined8 *)puVar2,uVar8,0
                                                                );
                                                    puVar2 = 
                                                  OVR_OpenVR_IVROverlay__ComputeOverlayIntersection_TypeInfo
                                                  ;
                                                  if (0x27 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x158) = uVar9;
                                                    LeanTween__value(lVar7 + 0x158,uVar9);
                                                    uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x18) +
                                                                         0x20,0);
                                                    uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6
                                                                              );
                                                    FUN_0592f840(uVar9,*(undefined8 *)puVar2,uVar8,0
                                                                );
                                                    puVar2 = 
                                                  OVR_OpenVR_IVRInput__GetPoseActionData_TypeInfo;
                                                  if (0x28 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x160) = uVar9;
                                                    LeanTween__value(lVar7 + 0x160,uVar9);
                                                    uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x50) +
                                                                         0x20,0);
                                                    uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6
                                                                              );
                                                    FUN_0592f840(uVar9,*(undefined8 *)puVar2,uVar8,0
                                                                );
                                                    puVar2 = OVR_OpenVR_IVRIOBuffer__Write_TypeInfo;
                                                    if (0x29 < *(uint *)(lVar7 + 0x18)) {
                                                      *(undefined8 *)(lVar7 + 0x168) = uVar9;
                                                      LeanTween__value(lVar7 + 0x168,uVar9);
                                                      uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x70)
                                                                           + 0x20,0);
                                                      uVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                  puVar6);
                                                      FUN_0592f840(uVar9,*(undefined8 *)puVar2,uVar8
                                                                   ,0);
                                                      puVar2 = 
                                                  OVR_OpenVR_IVRInput__GetOriginLocalizedName_TypeInfo
                                                  ;
                                                  if (0x2a < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x170) = uVar9;
                                                    LeanTween__value(lVar7 + 0x170,uVar9);
                                                    uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x40) +
                                                                         0x20,0);
                                                    uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6
                                                                              );
                                                    FUN_0592f840(uVar9,*(undefined8 *)puVar2,uVar8,0
                                                                );
                                                    puVar1 = 
                                                  System_Xml_Schema_XmlSchemaFractionDigitsFacet_TypeInfo
                                                  ;
                                                  if (0x2b < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x178) = uVar9;
                                                    LeanTween__value(lVar7 + 0x178,uVar9);
                                                    **(long **)(*(long *)puVar1 + 0xb8) = lVar7;
                                                    LeanTween__value(*(undefined8 *)
                                                                      (*(long *)puVar1 + 0xb8),lVar7
                                                                    );
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


