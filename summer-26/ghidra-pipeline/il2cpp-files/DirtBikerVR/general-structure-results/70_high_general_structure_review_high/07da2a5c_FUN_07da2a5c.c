/*
FUNCTION_NAME: FUN_07da2a5c
ENTRY_POINT: 07da2a5c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_07da2a5c(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  puVar4 = OVR_OpenVR_IVRIOBuffer__PropertyContainer_TypeInfo;
  if ((DAT_08999f23 & 1) == 0) {
    FUN_03a8a718(OVR_OpenVR_IVRIOBuffer__PropertyContainer_TypeInfo);
    FUN_03a8a718(OVR_OpenVR_IVROverlay__ClearOverlayTexture_TypeInfo);
    FUN_03a8a718(OVR_OpenVR_IVROverlay__CloseMessageOverlay_TypeInfo);
    FUN_03a8a718(PTR_DAT_0848ce08);
    FUN_03a8a718(OVR_OpenVR_IVROverlay__ComputeOverlayIntersection_TypeInfo);
    FUN_03a8a718(PTR_DAT_0848d0a0);
    FUN_03a8a718(OVR_OpenVR_IVROverlay__CreateDashboardOverlay_TypeInfo);
    FUN_03a8a718(Unity_Services_Wire_Internal_IChannel_TypeInfo);
    FUN_03a8a718(PTR_DAT_0848ce10);
    FUN_03a8a718(OVR_OpenVR_IVRInput__ShowActionOrigins_TypeInfo);
    FUN_03a8a718(PTR_DAT_084e4c58);
    FUN_03a8a718(OVR_OpenVR_IVROverlay__CreateOverlay_TypeInfo);
    FUN_03a8a718(OVR_OpenVR_IVROverlay__DestroyOverlay_TypeInfo);
    FUN_03a8a718(PTR_DAT_0848cd80);
    FUN_03a8a718(PTR_DAT_0848d970);
    FUN_03a8a718(OVR_OpenVR_IVROverlay__FindOverlay_TypeInfo);
    FUN_03a8a718(OVR_OpenVR_IVRInput__GetActionSetHandle_TypeInfo);
    FUN_03a8a718(OVR_OpenVR_IVRInput__ShowBindingsForActionSet_TypeInfo);
    FUN_03a8a718(PTR_DAT_0848d968);
    FUN_03a8a718(OVR_OpenVR_IVROverlay__GetDashboardOverlaySceneProcess_TypeInfo);
    FUN_03a8a718(Unity_Services_Wire_Internal_IChannelTokenProvider_TypeInfo);
    FUN_03a8a718(Unity_Services_Vivox_IChatHistoryQueryResult_TypeInfo);
    FUN_03a8a718(Cinemachine_ICinemachineCamera_TypeInfo);
    FUN_03a8a718(Cinemachine_ICinemachineTargetGroup_TypeInfo);
    FUN_03a8a718(Normal_Realtime_Native_IClient_TypeInfo);
    FUN_03a8a718(PTR_DAT_0848d988);
    FUN_03a8a718(System_Runtime_Remoting_Channels_IClientChannelSinkProvider_TypeInfo);
    FUN_03a8a718(UnityEngine_UI_IClippable_TypeInfo);
    FUN_03a8a718(PTR_DAT_084aedd8);
    FUN_03a8a718(PTR_DAT_084cf760);
    FUN_03a8a718(UnityEngine_UI_IClipper_TypeInfo);
    FUN_03a8a718(Unity_Services_DistributedAuthority_Internal_IClock_TypeInfo);
    FUN_03a8a718(Unity_Services_Analytics_Internal_IBuffer_TypeInfo);
    DAT_08999f23 = 1;
  }
  puVar3 = PTR_DAT_084e4c58;
  puVar2 = PTR_DAT_0848d968;
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar7 = *(long *)puVar4;
  }
  uVar25 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 8);
  uVar26 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0xc);
  plVar8 = (long *)FUN_03a8a804(*(undefined8 *)puVar2,2);
  uVar24 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)(PTR_DAT_08486760 + 0xe0));
  }
  lVar7 = FUN_0675ff58(uVar24,0);
  if (plVar8 == (long *)0x0) goto LAB_07da3d60;
  if ((lVar7 != 0) &&
     (lVar9 = thunk_FUN_03ac73c0(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
LAB_07da3d68:
    uVar24 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar24,0);
  }
  puVar4 = OVR_OpenVR_IVROverlay__ClearOverlayTexture_TypeInfo;
  if ((int)plVar8[3] != 0) {
    plVar8[4] = lVar7;
    thunk_FUN_03afed3c(plVar8 + 4,lVar7);
    lVar7 = FUN_0675ff58(*(undefined8 *)puVar4,0);
    if ((lVar7 != 0) &&
       (lVar9 = thunk_FUN_03ac73c0(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
    goto LAB_07da3d68;
    puVar5 = OVR_OpenVR_IVROverlay__GetDashboardOverlaySceneProcess_TypeInfo;
    puVar4 = OVR_OpenVR_IVRInput__GetActionSetHandle_TypeInfo;
    if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
      plVar8[5] = lVar7;
      thunk_FUN_03afed3c(plVar8 + 5,lVar7);
      lVar7 = FUN_07d9fed0(uVar25,uVar26,*(undefined8 *)puVar5,plVar8);
      plVar8 = (long *)FUN_03a8a804(*(undefined8 *)puVar2,1);
      lVar9 = FUN_0675ff58(*(undefined8 *)puVar4,0);
      if (plVar8 == (long *)0x0) {
LAB_07da3d60:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_03ac73c0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
      goto LAB_07da3d68;
      puVar5 = Cinemachine_ICinemachineTargetGroup_TypeInfo;
      if ((int)plVar8[3] == 0) goto LAB_07da3d64;
      plVar8[4] = lVar9;
      thunk_FUN_03afed3c(plVar8 + 4,lVar9);
      lVar9 = FUN_07da0030(*(undefined8 *)puVar5,lVar7,plVar8);
      plVar8 = (long *)FUN_03a8a804(*(undefined8 *)puVar2,1);
      lVar10 = FUN_0675ff58(*(undefined8 *)puVar3,0);
      if (plVar8 == (long *)0x0) goto LAB_07da3d60;
      if ((lVar10 != 0) &&
         (lVar11 = thunk_FUN_03ac73c0(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
      goto LAB_07da3d68;
      puVar5 = Normal_Realtime_Native_IClient_TypeInfo;
      if ((int)plVar8[3] == 0) goto LAB_07da3d64;
      plVar8[4] = lVar10;
      thunk_FUN_03afed3c(plVar8 + 4,lVar10);
      lVar10 = FUN_07da0030(*(undefined8 *)puVar5,lVar7,plVar8);
      plVar8 = (long *)FUN_03a8a804(*(undefined8 *)puVar2,2);
      lVar11 = FUN_0675ff58(*(undefined8 *)puVar3,0);
      if (plVar8 == (long *)0x0) goto LAB_07da3d60;
      if ((lVar11 != 0) &&
         (lVar12 = thunk_FUN_03ac73c0(lVar11,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0))
      goto LAB_07da3d68;
      puVar5 = OVR_OpenVR_IVROverlay__FindOverlay_TypeInfo;
      if ((int)plVar8[3] != 0) {
        plVar8[4] = lVar11;
        thunk_FUN_03afed3c(plVar8 + 4,lVar11);
        lVar11 = FUN_0675ff58(*(undefined8 *)puVar5,0);
        if ((lVar11 != 0) &&
           (lVar12 = thunk_FUN_03ac73c0(lVar11,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0))
        goto LAB_07da3d68;
        puVar5 = UnityEngine_UI_IClipper_TypeInfo;
        if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
          plVar8[5] = lVar11;
          thunk_FUN_03afed3c(plVar8 + 5,lVar11);
          lVar11 = FUN_07da0030(*(undefined8 *)puVar5,lVar7,plVar8);
          plVar8 = (long *)FUN_03a8a804(*(undefined8 *)puVar2,2);
          lVar12 = FUN_0675ff58(*(undefined8 *)puVar3,0);
          if (plVar8 == (long *)0x0) goto LAB_07da3d60;
          if ((lVar12 != 0) &&
             (lVar13 = thunk_FUN_03ac73c0(lVar12,*(undefined8 *)(*plVar8 + 0x40)), lVar13 == 0))
          goto LAB_07da3d68;
          puVar5 = OVR_OpenVR_IVROverlay__DestroyOverlay_TypeInfo;
          if ((int)plVar8[3] != 0) {
            plVar8[4] = lVar12;
            thunk_FUN_03afed3c(plVar8 + 4,lVar12);
            lVar12 = FUN_0675ff58(*(undefined8 *)puVar5,0);
            if ((lVar12 != 0) &&
               (lVar13 = thunk_FUN_03ac73c0(lVar12,*(undefined8 *)(*plVar8 + 0x40)), lVar13 == 0))
            goto LAB_07da3d68;
            puVar6 = PTR_DAT_0848d988;
            puVar5 = PTR_DAT_0848d970;
            if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
              plVar8[5] = lVar12;
              thunk_FUN_03afed3c(plVar8 + 5,lVar12);
              lVar12 = FUN_07da0030(*(undefined8 *)puVar6,lVar11,plVar8);
              plVar8 = (long *)FUN_03a8a804(*(undefined8 *)puVar2,1);
              lVar13 = FUN_0675ff58(*(undefined8 *)puVar5,0);
              if (plVar8 != (long *)0x0) {
                if ((lVar13 != 0) &&
                   (lVar14 = thunk_FUN_03ac73c0(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar14 == 0
                   )) goto LAB_07da3d68;
                puVar6 = OVR_OpenVR_IVRInput__ShowBindingsForActionSet_TypeInfo;
                puVar5 = PTR_DAT_084cf760;
                if ((int)plVar8[3] == 0) goto LAB_07da3d64;
                plVar8[4] = lVar13;
                thunk_FUN_03afed3c(plVar8 + 4,lVar13);
                lVar13 = FUN_07da0030(*(undefined8 *)puVar5,lVar12,plVar8);
                plVar8 = (long *)FUN_03a8a804(*(undefined8 *)puVar2,1);
                lVar14 = FUN_0675ff58(*(undefined8 *)puVar6,0);
                if (plVar8 != (long *)0x0) {
                  if ((lVar14 != 0) &&
                     (lVar15 = thunk_FUN_03ac73c0(lVar14,*(undefined8 *)(*plVar8 + 0x40)),
                     lVar15 == 0)) goto LAB_07da3d68;
                  puVar5 = PTR_DAT_084aedd8;
                  if ((int)plVar8[3] == 0) goto LAB_07da3d64;
                  plVar8[4] = lVar14;
                  thunk_FUN_03afed3c(plVar8 + 4,lVar14);
                  lVar14 = FUN_07da0030(*(undefined8 *)puVar5,lVar13,plVar8);
                  plVar8 = (long *)FUN_03a8a804(*(undefined8 *)puVar2,1);
                  lVar15 = FUN_0675ff58(*(undefined8 *)puVar3,0);
                  if (plVar8 != (long *)0x0) {
                    if ((lVar15 != 0) &&
                       (lVar16 = thunk_FUN_03ac73c0(lVar15,*(undefined8 *)(*plVar8 + 0x40)),
                       lVar16 == 0)) goto LAB_07da3d68;
                    puVar5 = Unity_Services_DistributedAuthority_Internal_IClock_TypeInfo;
                    if ((int)plVar8[3] == 0) goto LAB_07da3d64;
                    plVar8[4] = lVar15;
                    thunk_FUN_03afed3c(plVar8 + 4,lVar15);
                    lVar15 = FUN_07da0030(*(undefined8 *)puVar5,lVar14,plVar8);
                    plVar8 = (long *)FUN_03a8a804(*(undefined8 *)puVar2,1);
                    lVar16 = FUN_0675ff58(*(undefined8 *)puVar3,0);
                    if (plVar8 != (long *)0x0) {
                      if ((lVar16 != 0) &&
                         (lVar17 = thunk_FUN_03ac73c0(lVar16,*(undefined8 *)(*plVar8 + 0x40)),
                         lVar17 == 0)) goto LAB_07da3d68;
                      puVar3 = Unity_Services_Wire_Internal_IChannelTokenProvider_TypeInfo;
                      if ((int)plVar8[3] == 0) goto LAB_07da3d64;
                      plVar8[4] = lVar16;
                      thunk_FUN_03afed3c(plVar8 + 4,lVar16);
                      lVar16 = FUN_07da0030(*(undefined8 *)puVar3,lVar14,plVar8);
                      plVar8 = (long *)FUN_03a8a804(*(undefined8 *)puVar2,1);
                      lVar17 = FUN_0675ff58(*(undefined8 *)puVar4,0);
                      if (plVar8 != (long *)0x0) {
                        if ((lVar17 != 0) &&
                           (lVar18 = thunk_FUN_03ac73c0(lVar17,*(undefined8 *)(*plVar8 + 0x40)),
                           lVar18 == 0)) goto LAB_07da3d68;
                        puVar4 = UnityEngine_UI_IClippable_TypeInfo;
                        if ((int)plVar8[3] == 0) goto LAB_07da3d64;
                        plVar8[4] = lVar17;
                        thunk_FUN_03afed3c(plVar8 + 4,lVar17);
                        lVar17 = FUN_07da0030(*(undefined8 *)puVar4,lVar14,plVar8);
                        uStack_a8 = param_1[1];
                        local_b0 = *param_1;
                        uStack_98 = param_1[3];
                        uStack_a0 = param_1[2];
                        uStack_88 = param_1[5];
                        local_90 = param_1[4];
                        local_80 = param_1[6];
                        lVar18 = FUN_07da19c8(&local_b0);
                        puVar4 = Unity_Services_Wire_Internal_IChannel_TypeInfo;
                        if (lVar18 != 0) {
                          thunk_FUN_07ca23d0(lVar18,*(undefined8 *)
                                                                                                          
                                                  Unity_Services_Analytics_Internal_IBuffer_TypeInfo
                                             ,0);
                          FUN_07da0158(lVar18,lVar11);
                          lVar19 = FUN_04561560(lVar18,*(undefined8 *)puVar4);
                          puVar4 = PTR_DAT_0848d0a0;
                          if (lVar19 != 0) {
                            FUN_07f9f10c(lVar19,2,1,0);
                            lVar18 = FUN_04561560(lVar18,*(undefined8 *)puVar4);
                            if (DAT_0897aa8f == '\0') {
                              FUN_03a8a718(PTR_DAT_08488168);
                              DAT_0897aa8f = '\x01';
                            }
                            puVar2 = PTR_DAT_08488168;
                            if (lVar18 != 0) {
                              FUN_07cab034(*(undefined4 *)
                                            (*(long *)(*(long *)PTR_DAT_08488168 + 0xb8) + 0x28),
                                           *(undefined4 *)
                                            (*(long *)(*(long *)PTR_DAT_08488168 + 0xb8) + 0x2c),
                                           lVar18,0);
                              if (DAT_08975145 == '\0') {
                                FUN_03a8a718(PTR_DAT_08488168);
                                DAT_08975145 = '\x01';
                              }
                              lVar21 = *(long *)(*(long *)puVar2 + 0xb8);
                              FUN_07cab1c0(*(undefined4 *)(lVar21 + 8),*(undefined4 *)(lVar21 + 0xc)
                                           ,lVar18,0);
                              if (DAT_08975145 == '\0') {
                                FUN_03a8a718(PTR_DAT_08488168);
                                DAT_08975145 = '\x01';
                              }
                              lVar21 = *(long *)(*(long *)puVar2 + 0xb8);
                              FUN_07cab664(*(undefined4 *)(lVar21 + 8),*(undefined4 *)(lVar21 + 0xc)
                                           ,lVar18,0);
                              uVar24 = FUN_07cab410(lVar18,0);
                              FUN_07cab4d8(uVar24,0,lVar18,0);
                              if (lVar17 != 0) {
                                plVar8 = (long *)FUN_04561560(lVar17,*(undefined8 *)PTR_DAT_0848ce10
                                                             );
                                FUN_07da0258();
                                if ((plVar8 != (long *)0x0) &&
                                   (FUN_07fa7884(plVar8,3,0), puVar2 = PTR_DAT_0848ce08, lVar15 != 0
                                   )) {
                                  plVar20 = (long *)FUN_04561560(lVar15,*(undefined8 *)
                                                                         PTR_DAT_0848ce08);
                                  if (plVar20 != (long *)0x0) {
                                    (**(code **)(*plVar20 + 0x2a8))
                                              (DAT_015c5a10,DAT_015c5a10,DAT_015c5a10,0x3f800000,
                                               plVar20,*(undefined8 *)(*plVar20 + 0x2b0));
                                    if ((((lVar16 != 0) &&
                                         (lVar18 = FUN_04561560(lVar16,*(undefined8 *)puVar2),
                                         lVar18 != 0)) &&
                                        (FUN_07da0734(lVar18,param_1[4]), lVar14 != 0)) &&
                                       (lVar21 = FUN_04561560(lVar14,*(undefined8 *)
                                                                                                                                            
                                                  OVR_OpenVR_IVRInput__ShowActionOrigins_TypeInfo),
                                       lVar21 != 0)) {
                                      FUN_07fa30e4(lVar21,plVar20,0);
                                      *(long *)(lVar21 + 0x108) = lVar18;
                                      thunk_FUN_03afed3c(lVar21 + 0x108,lVar18);
                                      FUN_07fa960c(lVar21,1,0);
                                      if ((lVar11 != 0) &&
                                         (lVar18 = FUN_04561560(lVar11,*(undefined8 *)puVar2),
                                         puVar3 = 
                                         OVR_OpenVR_IVROverlay__CreateDashboardOverlay_TypeInfo,
                                         lVar18 != 0)) {
                                        FUN_07da0734(lVar18,*param_1);
                                        FUN_07da0a44(lVar18,1);
                                        lVar18 = FUN_04561560(lVar11,*(undefined8 *)puVar3);
                                        if ((lVar13 != 0) &&
                                           (uVar24 = FUN_04561560(lVar13,*(undefined8 *)puVar4),
                                           lVar18 != 0)) {
                                          *(undefined8 *)(lVar18 + 0x20) = uVar24;
                                          thunk_FUN_03afed3c();
                                          puVar3 = 
                                          OVR_OpenVR_IVROverlay__ComputeOverlayIntersection_TypeInfo
                                          ;
                                          if (lVar12 != 0) {
                                            uVar24 = FUN_04561560(lVar12,*(undefined8 *)puVar4);
                                            FUN_07f9f48c(lVar18,uVar24,0);
                                            *(undefined1 *)(lVar18 + 0x28) = 0;
                                            *(undefined4 *)(lVar18 + 0x2c) = 2;
                                            FUN_07f9f718(lVar18,lVar19,0);
                                            FUN_07f9f8c8(lVar18,2,0);
                                            FUN_07f9f970(0xc0400000,lVar18,0);
                                            lVar18 = FUN_04561560(lVar12,*(undefined8 *)puVar3);
                                            if (lVar18 != 0) {
                                              FUN_07f985f4(lVar18,0,0);
                                              lVar18 = FUN_04561560(lVar12,*(undefined8 *)puVar2);
                                              if (lVar18 != 0) {
                                                FUN_07da0734(lVar18,param_1[6]);
                                                FUN_07da0a44(lVar18,1);
                                                if (lVar9 != 0) {
                                                  lVar18 = FUN_04561560(lVar9,*(undefined8 *)
                                                                               PTR_DAT_0848ce10);
                                                  FUN_07da0258();
                                                  if (((lVar18 != 0) &&
                                                      (FUN_07fa7884(lVar18,3,0), lVar10 != 0)) &&
                                                     ((lVar19 = FUN_04561560(lVar10,*(undefined8 *)
                                                                                     puVar2),
                                                      lVar19 != 0 &&
                                                      ((FUN_07da0734(lVar19,param_1[5]), lVar7 != 0
                                                       && (plVar20 = (long *)FUN_04561560(lVar7,*(
                                                  undefined8 *)puVar2),
                                                  puVar2 = 
                                                  OVR_OpenVR_IVROverlay__CloseMessageOverlay_TypeInfo
                                                  , plVar20 != (long *)0x0)))))) {
                                                    FUN_07da0734(plVar20,*param_1);
                                                    lVar19 = *(long *)(*(long *)
                                                  OVR_OpenVR_IVRIOBuffer__PropertyContainer_TypeInfo
                                                  + 0xb8);
                                                  (**(code **)(*plVar20 + 0x2a8))
                                                            (*(undefined4 *)(lVar19 + 0x20),
                                                             *(undefined4 *)(lVar19 + 0x24),
                                                             *(undefined4 *)(lVar19 + 0x28),
                                                             *(undefined4 *)(lVar19 + 0x2c),plVar20,
                                                             *(undefined8 *)(*plVar20 + 0x2b0));
                                                  FUN_07da0a44(plVar20,1);
                                                  lVar19 = FUN_04561560(lVar7,*(undefined8 *)puVar2)
                                                  ;
                                                  puVar2 = 
                                                  Unity_Services_Vivox_IChatHistoryQueryResult_TypeInfo
                                                  ;
                                                  if (lVar19 != 0) {
                                                    FUN_07fa30e4(lVar19,plVar20,0);
                                                    FUN_07da0334(lVar19);
                                                    uVar24 = FUN_04561560(lVar11,*(undefined8 *)
                                                                                  puVar4);
                                                    *(undefined8 *)(lVar19 + 0x100) = uVar24;
                                                    thunk_FUN_03afed3c(lVar19 + 0x100,uVar24);
                                                    FUN_07da3df4(lVar19);
                                                    *(long *)(lVar19 + 0x108) = lVar18;
                                                    thunk_FUN_03afed3c(lVar19 + 0x108,lVar18);
                                                    FUN_07da3df4(lVar19);
                                                    *(long **)(lVar19 + 0x118) = plVar8;
                                                    thunk_FUN_03afed3c(lVar19 + 0x118,plVar8);
                                                    FUN_07da3df4(lVar19);
                                                    (**(code **)(*plVar8 + 0x5e8))
                                                              (plVar8,*(undefined8 *)puVar2,
                                                               *(undefined8 *)(*plVar8 + 0x5f0));
                                                    puVar3 = PTR_DAT_0848cd80;
                                                    if (*(long *)(lVar19 + 0x130) != 0) {
                                                      lVar21 = *(long *)(*(long *)(lVar19 + 0x130) +
                                                                        0x10);
                                                      lVar18 = thunk_FUN_03ac74bc(*(undefined8 *)
                                                                                   PTR_DAT_0848cd80)
                                                      ;
                                                      FUN_0679343c(lVar18,0);
                                                      if (lVar18 != 0) {
                                                        *(undefined8 *)(lVar18 + 0x10) =
                                                             *(undefined8 *)puVar2;
                                                        thunk_FUN_03afed3c();
                                                        puVar2 = 
                                                  OVR_OpenVR_IVROverlay__CreateOverlay_TypeInfo;
                                                  if (lVar21 != 0) {
                                                    lVar22 = *(long *)(lVar21 + 0x10);
                                                    lVar23 = *(long *)
                                                  OVR_OpenVR_IVROverlay__CreateOverlay_TypeInfo;
                                                  *(int *)(lVar21 + 0x1c) =
                                                       *(int *)(lVar21 + 0x1c) + 1;
                                                  if (lVar22 != 0) {
                                                    uVar1 = *(uint *)(lVar21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar22 + 0x18)) {
                                                      *(uint *)(lVar21 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar22 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar18;
                                                      thunk_FUN_03afed3c(plVar8,lVar18);
                                                    }
                                                    else {
                                                      FUN_04de85b0(lVar21,lVar18,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar23 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  if (*(long *)(lVar19 + 0x130) != 0) {
                                                    lVar21 = *(long *)(*(long *)(lVar19 + 0x130) +
                                                                      0x10);
                                                    lVar18 = thunk_FUN_03ac74bc(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_0679343c(lVar18,0);
                                                    if (lVar18 != 0) {
                                                      *(undefined8 *)(lVar18 + 0x10) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Runtime_Remoting_Channels_IClientChannelSinkProvider_TypeInfo
                                                  ;
                                                  thunk_FUN_03afed3c();
                                                  if (lVar21 != 0) {
                                                    lVar22 = *(long *)(lVar21 + 0x10);
                                                    lVar23 = *(long *)puVar2;
                                                    *(int *)(lVar21 + 0x1c) =
                                                         *(int *)(lVar21 + 0x1c) + 1;
                                                    if (lVar22 != 0) {
                                                      uVar1 = *(uint *)(lVar21 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar22 + 0x18)) {
                                                        *(uint *)(lVar21 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar22 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar18;
                                                        thunk_FUN_03afed3c(plVar8,lVar18);
                                                      }
                                                      else {
                                                        FUN_04de85b0(lVar21,lVar18,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar23 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  if (*(long *)(lVar19 + 0x130) != 0) {
                                                    lVar21 = *(long *)(*(long *)(lVar19 + 0x130) +
                                                                      0x10);
                                                    lVar18 = thunk_FUN_03ac74bc(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_0679343c(lVar18,0);
                                                    if (lVar18 != 0) {
                                                      *(undefined8 *)(lVar18 + 0x10) =
                                                           *(undefined8 *)
                                                            Cinemachine_ICinemachineCamera_TypeInfo;
                                                      thunk_FUN_03afed3c();
                                                      puVar3 = PTR_DAT_08488168;
                                                      if (lVar21 != 0) {
                                                        lVar22 = *(long *)(lVar21 + 0x10);
                                                        lVar23 = *(long *)puVar2;
                                                        *(int *)(lVar21 + 0x1c) =
                                                             *(int *)(lVar21 + 0x1c) + 1;
                                                        if (lVar22 != 0) {
                                                          uVar1 = *(uint *)(lVar21 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar22 + 0x18)) {
                                                            *(uint *)(lVar21 + 0x18) = uVar1 + 1;
                                                            plVar8 = (long *)(lVar22 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar8 = lVar18;
                                                  thunk_FUN_03afed3c(plVar8,lVar18);
                                                  }
                                                  else {
                                                    FUN_04de85b0(lVar21,lVar18,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar23 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  FUN_07da3df4(lVar19);
                                                  lVar9 = FUN_04561560(lVar9,*(undefined8 *)puVar4);
                                                  if (DAT_0897502c == '\0') {
                                                    FUN_03a8a718(PTR_DAT_08488168);
                                                    DAT_0897502c = '\x01';
                                                  }
                                                  if (lVar9 != 0) {
                                                    FUN_07cab034(**(undefined4 **)
                                                                   (*(long *)puVar3 + 0xb8),
                                                                 (*(undefined4 **)
                                                                   (*(long *)puVar3 + 0xb8))[1],
                                                                 lVar9,0);
                                                    if (DAT_08975145 == '\0') {
                                                      FUN_03a8a718(PTR_DAT_08488168);
                                                      DAT_08975145 = '\x01';
                                                    }
                                                    FUN_07cab1c0(*(undefined4 *)
                                                                  (*(long *)(*(long *)puVar3 + 0xb8)
                                                                  + 8),*(undefined4 *)
                                                                        (*(long *)(*(long *)puVar3 +
                                                                                  0xb8) + 0xc),lVar9
                                                                 ,0);
                                                    FUN_07cab8cc(0x41200000,0x40c00000,lVar9,0);
                                                    FUN_07caba60(0xc1c80000,0xc0e00000,lVar9,0);
                                                    lVar9 = FUN_04561560(lVar10,*(undefined8 *)
                                                                                 puVar4);
                                                    if (lVar9 != 0) {
                                                      FUN_07cab034(0x3f800000,0x3f000000,lVar9,0);
                                                      FUN_07cab1c0(0x3f800000,0x3f000000,lVar9,0);
                                                      FUN_07cab4d8(0x41a00000,0x41a00000,lVar9,0);
                                                      FUN_07cab34c(0xc1700000,0,lVar9,0);
                                                      lVar9 = FUN_04561560(lVar11,*(undefined8 *)
                                                                                   puVar4);
                                                      if (lVar9 != 0) {
                                                        FUN_07cab034(0,0,lVar9,0);
                                                        FUN_07cab1c0(0x3f800000,0,lVar9,0);
                                                        FUN_07cab664(0x3f000000,0x3f800000,lVar9,0);
                                                        FUN_07cab34c(0,0x40000000,lVar9,0);
                                                        FUN_07cab4d8(0,0x43160000,lVar9,0);
                                                        lVar9 = FUN_04561560(lVar12,*(undefined8 *)
                                                                                     puVar4);
                                                        if (lVar9 != 0) {
                                                          FUN_07cab034(0,0,lVar9,0);
                                                          FUN_07cab1c0(0x3f800000,0x3f800000,lVar9,0
                                                                      );
                                                          FUN_07cab4d8(0xc1900000,0,lVar9,0);
                                                          FUN_07cab664(0,0x3f800000,lVar9,0);
                                                          lVar9 = FUN_04561560(lVar13,*(undefined8 *
                                                                                       )puVar4);
                                                          if (lVar9 != 0) {
                                                            FUN_07cab034(0,0x3f800000,lVar9,0);
                                                            FUN_07cab1c0(0x3f800000,0x3f800000,lVar9
                                                                         ,0);
                                                            FUN_07cab664(0x3f000000,0x3f800000,lVar9
                                                                         ,0);
                                                            FUN_07cab34c(0,0,lVar9,0);
                                                            FUN_07cab4d8(0,0x41e00000,lVar9,0);
                                                            lVar9 = FUN_04561560(lVar14,*(undefined8
                                                                                          *)puVar4);
                                                            if (lVar9 != 0) {
                                                              FUN_07cab034(0,0x3f000000,lVar9,0);
                                                              FUN_07cab1c0(0x3f800000,0x3f000000,
                                                                           lVar9,0);
                                                              FUN_07cab4d8(0,0x41a00000,lVar9,0);
                                                              lVar9 = FUN_04561560(lVar15,*(
                                                  undefined8 *)puVar4);
                                                  if (DAT_0897502c == '\0') {
                                                    FUN_03a8a718(PTR_DAT_08488168);
                                                    DAT_0897502c = '\x01';
                                                  }
                                                  if (lVar9 != 0) {
                                                    FUN_07cab034(**(undefined4 **)
                                                                   (*(long *)puVar3 + 0xb8),
                                                                 (*(undefined4 **)
                                                                   (*(long *)puVar3 + 0xb8))[1],
                                                                 lVar9,0);
                                                    if (DAT_08975145 == '\0') {
                                                      FUN_03a8a718(PTR_DAT_08488168);
                                                      DAT_08975145 = '\x01';
                                                    }
                                                    FUN_07cab1c0(*(undefined4 *)
                                                                  (*(long *)(*(long *)puVar3 + 0xb8)
                                                                  + 8),*(undefined4 *)
                                                                        (*(long *)(*(long *)puVar3 +
                                                                                  0xb8) + 0xc),lVar9
                                                                 ,0);
                                                    if (DAT_0897502c == '\0') {
                                                      FUN_03a8a718(PTR_DAT_08488168);
                                                      DAT_0897502c = '\x01';
                                                    }
                                                    FUN_07cab4d8(**(undefined4 **)
                                                                   (*(long *)puVar3 + 0xb8),
                                                                 (*(undefined4 **)
                                                                   (*(long *)puVar3 + 0xb8))[1],
                                                                 lVar9,0);
                                                    lVar9 = FUN_04561560(lVar16,*(undefined8 *)
                                                                                 puVar4);
                                                    if (lVar9 != 0) {
                                                      FUN_07cab034(0,0x3f000000,lVar9,0);
                                                      FUN_07cab1c0(0,0x3f000000,lVar9,0);
                                                      FUN_07cab4d8(0x41a00000,0x41a00000,lVar9,0);
                                                      FUN_07cab34c(0x41200000,0,lVar9,0);
                                                      lVar9 = FUN_04561560(lVar17,*(undefined8 *)
                                                                                   puVar4);
                                                      if (DAT_0897502c == '\0') {
                                                        FUN_03a8a718(PTR_DAT_08488168);
                                                        DAT_0897502c = '\x01';
                                                      }
                                                      if (lVar9 != 0) {
                                                        FUN_07cab034(**(undefined4 **)
                                                                       (*(long *)puVar3 + 0xb8),
                                                                     (*(undefined4 **)
                                                                       (*(long *)puVar3 + 0xb8))[1],
                                                                     lVar9,0);
                                                        if (DAT_08975145 == '\0') {
                                                          FUN_03a8a718(PTR_DAT_08488168);
                                                          DAT_08975145 = '\x01';
                                                        }
                                                        FUN_07cab1c0(*(undefined4 *)
                                                                      (*(long *)(*(long *)puVar3 +
                                                                                0xb8) + 8),
                                                                     *(undefined4 *)
                                                                      (*(long *)(*(long *)puVar3 +
                                                                                0xb8) + 0xc),lVar9,0
                                                                    );
                                                        FUN_07cab8cc(0x41a00000,0x3f800000,lVar9,0);
                                                        FUN_07caba60(0xc1200000,0xc0000000,lVar9,0);
                                                        FUN_07c9c8e4(lVar11,0,0);
                                                        return lVar7;
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
              goto LAB_07da3d60;
            }
          }
        }
      }
    }
  }
LAB_07da3d64:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


