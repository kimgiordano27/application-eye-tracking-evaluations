/*
FUNCTION_NAME: FUN_07d7c4c4
ENTRY_POINT: 07d7c4c4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 142
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_5;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_10;functionality_data_collection_or_telemetry_hits_10
*/


float FUN_07d7c4c4(float param_1,long param_2,float *param_3,byte param_4,long param_5,long param_6)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  byte bVar7;
  float fVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  ulong uVar27;
  ulong uVar28;
  undefined8 *puVar29;
  undefined4 *puVar30;
  char cVar31;
  uint uVar32;
  long lVar33;
  undefined1 uVar34;
  long lVar35;
  long lVar36;
  long *plVar37;
  undefined8 uVar38;
  undefined8 *puVar39;
  long *plVar40;
  long *plVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  double dVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined4 uVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float local_f28;
  float local_f20;
  float local_f1c;
  float local_f14;
  undefined1 auStack_ed8 [100];
  double local_e74;
  undefined8 uStack_e6c;
  undefined4 local_e64;
  undefined1 auStack_e60 [96];
  undefined1 auStack_e00 [96];
  double local_da0;
  undefined8 uStack_d98;
  undefined8 local_d90;
  undefined8 uStack_d88;
  undefined8 local_d80;
  undefined8 uStack_d78;
  undefined8 local_d70;
  double local_d40;
  undefined8 uStack_d38;
  undefined8 local_d30;
  undefined8 uStack_d28;
  undefined8 local_d20;
  undefined8 uStack_d18;
  undefined8 local_d10;
  double local_ce0;
  undefined8 uStack_cd8;
  undefined4 local_cd0;
  undefined8 local_cc8;
  undefined8 local_cc0;
  undefined8 local_cb8;
  undefined8 local_cb0;
  undefined8 local_ca8;
  undefined8 local_ca0;
  undefined8 local_c98;
  undefined8 local_c90;
  undefined8 local_c88;
  undefined8 local_c80;
  undefined8 local_c78;
  double local_c70;
  undefined8 uStack_c68;
  undefined4 local_c60;
  undefined8 local_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined4 uStack_c38;
  undefined4 local_c34;
  undefined4 uStack_c30;
  undefined8 uStack_c2c;
  double local_c20;
  undefined8 uStack_c18;
  undefined4 local_c10;
  undefined1 local_c08 [4];
  uint local_c04;
  undefined8 local_c00;
  undefined8 local_bf8;
  double local_bf0;
  undefined8 uStack_be8;
  undefined4 local_be0;
  undefined8 local_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 local_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 local_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined4 local_b70 [230];
  undefined1 auStack_7d8 [920];
  undefined4 auStack_440 [16];
  float local_400;
  float local_3cc;
  undefined8 local_a8;
  
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 07d7c3e8 with catch @ 07d7c4c4
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 07d7c3b4 with catch @ 07d7c4c8
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 07d7c410 with catch @ 07d7c4cc
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 07d7c450 with catch @ 07d7c4d0
                        */
                    /* try { // try from 07d7c4e0 to 07e7c4e3 has its CatchHandler @ 07d7c4f8 */
                    /* try { // try from 07d7c4e4 to 07e7c4ff has its CatchHandler @ 07d7c328 */
                    /* catch() { ... } // from try @ 07d7c4e0 with catch @ 07d7c4f8 */
                    /* try { // try from 07d7c500 to 07e7c507 has its CatchHandler @ 07d7c508 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07d7c500 with catch @ 07d7c508
                        */
  if ((DAT_08999bb4 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08486be8);
    FUN_03a8a718(Unity_Netcode_HandlerNotRegisteredException_TypeInfo);
    FUN_03a8a718(UnityEngine_GUILayoutUtility_LayoutCache_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_GenericDropdownMenu_MenuItem_TypeInfo);
    FUN_03a8a718(
                System_Runtime_Serialization_GenericParameterDataContract_GenericParameterDataContractCriticalHelper_TypeInfo
                );
    FUN_03a8a718(PTR_DAT_084b5110);
    FUN_03a8a718(RootMotion_FinalIK_GenericPoser_Map_TypeInfo);
    FUN_03a8a718(PTR_DAT_08486c60);
    FUN_03a8a718(PTR_DAT_08486858);
    FUN_03a8a718(PTR_DAT_08486738);
    FUN_03a8a718(Unity_Services_CloudSave_Internal_Data_GetCustomItemsRequest_<>c_TypeInfo);
    FUN_03a8a718(Unity_Services_CloudSave_Internal_Models_GetDownloadUrl400OneOf_<>c_TypeInfo);
    FUN_03a8a718(RootMotion_FinalIK_Grounding_Leg_TypeInfo);
    FUN_03a8a718(Unity_Services_CloudSave_Internal_Models_GetFileMetadata400OneOf_<>c_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo);
    FUN_03a8a718(Unity_Services_CloudSave_Internal_Models_GetKeys400OneOf_<>c_TypeInfo);
    FUN_03a8a718(Unity_Services_Qos_QosDiscovery_GetServersRequest_<>c_TypeInfo);
    FUN_03a8a718(Unity_Services_Qos_QosDiscovery_GetServiceServersRequest_<>c_TypeInfo);
    FUN_03a8a718(Unity_Services_CloudSave_Internal_Models_GetUploadUrl400OneOf_<>c_TypeInfo);
    FUN_03a8a718(Meta_XR_ImmersiveDebugger_Manager_GizmoManager_<>c__DisplayClass4_1_TypeInfo);
    FUN_03a8a718(
                UnityEngine_Rendering_GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB_PostfixBurstDelegate_TypeInfo
                );
    FUN_03a8a718(RootMotion_FinalIK_Grounding_OnCapsuleCastDelegate_TypeInfo);
    DAT_08999bb4 = 1;
  }
  local_a8 = 0;
  memset(auStack_440,0,0x398);
  memset(auStack_7d8,0,0x398);
  memset(local_b70,0,0x398);
  uStack_be8 = 0;
  local_bf0 = 0.0;
  local_be0 = 0;
  local_bf8 = 0;
  uStack_bc8 = 0;
  local_bd0 = 0;
  uStack_bb8 = 0;
  uStack_bc0 = 0;
  uStack_ba8 = 0;
  local_bb0 = 0;
  uStack_b98 = 0;
  uStack_ba0 = 0;
  uStack_b88 = 0;
  local_b90 = 0;
  uStack_b78 = 0;
  uStack_b80 = 0;
  local_c00 = 0;
  local_c04 = 0;
  local_c08[0] = 0;
  uStack_c18 = 0;
  local_c20 = 0.0;
  local_c10 = 0;
  uStack_c2c = 0;
  uStack_c30 = 0;
  uStack_c48 = 0;
  local_c50 = 0;
  uStack_c38 = 0;
  local_c34 = 0;
  uStack_c40 = 0;
  uStack_c68 = 0;
  local_c70 = 0.0;
  local_c60 = 0;
  local_c80 = 0;
  local_c88 = 0;
  local_c78 = 0;
  local_c90 = 0;
  local_c98 = 0;
  local_ca8 = 0;
  local_cb0 = 0;
  local_ca0 = 0;
  local_cc0 = 0;
  local_cc8 = 0;
  local_cb8 = 0;
  uStack_cd8 = 0;
  local_ce0 = 0.0;
  local_cd0 = 0;
  if (param_5 == 0) {
LAB_07d7f534:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar38 = *(undefined8 *)(param_5 + 0x48);
  if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  puVar9 = PTR_DAT_08486be8;
  uVar23 = FUN_07c9e200(uVar38,0,0);
  if ((uVar23 & 1) == 0) {
    if (*(long *)(param_5 + 0x48) == 0) goto LAB_07d7f534;
    lVar24 = FUN_07d61598(*(long *)(param_5 + 0x48),0);
    if (lVar24 != 0) {
      lVar24 = *(long *)(param_2 + 0x20);
      if ((lVar24 != 0) && (*(long *)(lVar24 + 0x18) != 0)) {
        if ((int)*(long *)(lVar24 + 0x18) == 0) {
LAB_07d7f538:
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        if (*(int *)(lVar24 + 0x24) != 0) {
          plVar41 = (long *)(param_2 + 0x68);
          *plVar41 = *(long *)(param_5 + 0x48);
          thunk_FUN_03afed3c(plVar41);
          if (*(long *)(param_5 + 0x48) != 0) {
            puVar39 = (undefined8 *)(param_2 + 0x70);
            *puVar39 = *(undefined8 *)(*(long *)(param_5 + 0x48) + 0x28);
            thunk_FUN_03afed3c(puVar39);
            *(undefined4 *)(param_2 + 0x78) = 0;
            local_d70 = 0;
            uStack_d88 = 0;
            local_d90 = 0;
            uStack_d78 = 0;
            local_d80 = 0;
            uStack_d98 = 0;
            local_da0 = 0.0;
            FUN_07d5fe58(*(undefined4 *)(param_2 + 0xd8),&local_da0,0,
                         *(undefined8 *)(param_2 + 0x68),0,*(undefined8 *)(param_2 + 0x70),0);
            uStack_d38 = uStack_d98;
            local_d40 = local_da0;
            uStack_d28 = uStack_d88;
            local_d30 = local_d90;
            uStack_d18 = uStack_d78;
            local_d20 = local_d80;
            local_d10 = local_d70;
            FUN_05912634(param_2 + 0x80,&local_d40,
                         *(undefined8 *)
                          Unity_Services_CloudSave_Internal_Models_GetUploadUrl400OneOf_<>c_TypeInfo
                        );
            iVar3 = *(int *)(param_2 + 0xe8);
            if ((*(long *)(param_2 + 0x1a38) == 0) ||
               (*(int *)(*(long *)(param_2 + 0x1a38) + 0x18) < iVar3)) {
              if (iVar3 < 0x401) {
                uVar18 = iVar3 - 1U | (int)(iVar3 - 1U) >> 0x10;
                uVar18 = uVar18 | (int)uVar18 >> 8;
                uVar18 = uVar18 | (int)uVar18 >> 4;
                uVar18 = uVar18 | (int)uVar18 >> 2;
                iVar1 = (uVar18 | (int)uVar18 >> 1) + 1;
              }
              else {
                iVar1 = iVar3 + 0x100;
              }
              uVar38 = FUN_03a8a804(*(undefined8 *)RootMotion_FinalIK_Grounding_Leg_TypeInfo,iVar1);
              *(undefined8 *)(param_2 + 0x1a38) = uVar38;
              thunk_FUN_03afed3c(param_2 + 0x1a38,uVar38);
            }
            if (*(long *)(param_5 + 0x48) != 0) {
              fVar61 = *param_3;
              FUN_07d60d20(&local_d40,*(long *)(param_5 + 0x48),0);
              memcpy(&local_bd0,&local_d40,0x60);
              fVar42 = (float)FUN_07d5328c(&local_bd0,0);
              if (*(long *)(param_5 + 0x48) != 0) {
                FUN_07d60d20(&local_da0,*(long *)(param_5 + 0x48),0);
                memcpy(&local_bd0,&local_da0,0x60);
                fVar43 = (float)FUN_07d53294(&local_bd0,0);
                fVar62 = *param_3;
                *(undefined4 *)(param_2 + 0xf0) = 0x3f800000;
                if (*(long *)(param_5 + 0x48) != 0) {
                  bVar15 = FUN_07d616e4(*(long *)(param_5 + 0x48),0);
                  puVar9 = Unity_Services_Qos_QosDiscovery_GetServiceServersRequest_<>c_TypeInfo;
                  *(byte *)(param_2 + 0xf4) = bVar15 & 1;
                  uVar38 = *(undefined8 *)puVar9;
                  *(float *)(param_2 + 0xf8) = *param_3;
                  FUN_05913330(param_2 + 0x100,uVar38);
                  uVar18 = *(uint *)(param_5 + 0x50);
                  *(uint *)(param_2 + 300) = uVar18;
                  puVar10 = 
                  Meta_XR_ImmersiveDebugger_Manager_GizmoManager_<>c__DisplayClass4_1_TypeInfo;
                  if ((uVar18 & 1) == 0) {
                    uVar53 = *(undefined4 *)(param_5 + 0x9c);
                  }
                  else {
                    uVar53 = 700;
                  }
                  *(undefined4 *)(param_2 + 0x13c) = uVar53;
                  FUN_05912044(param_2 + 0x140,uVar53,*(undefined8 *)puVar10);
                  FUN_07d96f34(param_2 + 0x130,0);
                  uVar53 = *(undefined4 *)(param_5 + 0x60);
                  uVar38 = *(undefined8 *)
                            Unity_Services_Qos_QosDiscovery_GetServersRequest_<>c_TypeInfo;
                  *(undefined4 *)(param_2 + 0x160) = uVar53;
                  FUN_05912044(param_2 + 0x168,uVar53,uVar38);
                  puVar10 = Unity_Services_CloudSave_Internal_Models_GetKeys400OneOf_<>c_TypeInfo;
                  *(undefined4 *)(param_2 + 0x188) = 0;
                  FUN_05913324(param_2 + 400,*(undefined8 *)puVar10);
                  if (DAT_08974f84 == '\0') {
                    FUN_03a8a718(PTR_DAT_084868a0);
                    DAT_08974f84 = '\x01';
                  }
                  uVar38 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_084868a0 + 0xb8) + 0xc);
                  uVar53 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_084868a0 + 0xb8) + 0x14);
                  *(undefined8 *)(param_2 + 0x2e8) = DAT_015c4fd8;
                  *(undefined8 *)(param_2 + 0x19b0) = uVar38;
                  *(undefined4 *)(param_2 + 0x19b8) = uVar53;
                  if (*(long *)(param_2 + 0x68) != 0) {
                    FUN_07d60d20(&local_d40,*(long *)(param_2 + 0x68),0);
                    memcpy(&local_bd0,&local_d40,0x60);
                    fVar44 = (float)FUN_07d532b4(&local_bd0,0);
                    if (*plVar41 != 0) {
                      FUN_07d60d20(&local_da0,*plVar41,0);
                      memcpy(&local_bd0,&local_da0,0x60);
                      fVar45 = (float)FUN_07d532bc(&local_bd0,0);
                      if (*plVar41 != 0) {
                        FUN_07d60d20(auStack_e00,*plVar41,0);
                        memcpy(&local_bd0,auStack_e00,0x60);
                        fVar46 = (float)FUN_07d532ec(&local_bd0,0);
                        *(undefined4 *)(param_2 + 0x308) = 0;
                        fVar8 = DAT_015c5b20;
                        fVar44 = fVar44 - (fVar45 - fVar46);
                        *(undefined8 *)(param_2 + 0x2f4) = 0;
                        uVar38 = *(undefined8 *)puVar9;
                        *(undefined8 *)(param_2 + 0x300) = 0;
                        if (*(char *)(param_2 + 0xf4) != '\0') {
                          fVar44 = (float)(int)(fVar44 + fVar8);
                        }
                        FUN_05913330(0,param_2 + 0x310,uVar38);
                        *(undefined1 *)(param_2 + 0x330) = 0;
                        uVar23 = DAT_015c4680;
                        *(undefined8 *)(param_2 + 0x334) = 0;
                        *(ulong *)(param_2 + 0x348) = uVar23;
                        *(undefined4 *)(param_2 + 0x350) = 0;
                        puVar9 = 
                        Unity_Services_CloudSave_Internal_Models_GetFileMetadata400OneOf_<>c_TypeInfo
                        ;
                        *(undefined4 *)(param_2 + 0x15b8) = 0;
                        *(undefined1 *)(param_2 + 0x2f0) = 0;
                        lVar24 = *(long *)puVar9;
                        *(undefined4 *)(param_2 + 0x19cc) = 0x80000000;
                        if (*(int *)(lVar24 + 0xe4) == 0) {
                          thunk_FUN_03ae8be4();
                          lVar24 = *(long *)puVar9;
                        }
                        puVar10 = RootMotion_FinalIK_GenericPoser_Map_TypeInfo;
                        lVar24 = *(long *)(*(long *)(lVar24 + 0xb8) + 0x10);
                        if (lVar24 != 0) {
                          uVar18 = FUN_04ec264c(lVar24,0x6b65726e,
                                                *(undefined8 *)
                                                 RootMotion_FinalIK_GenericPoser_Map_TypeInfo);
                          lVar24 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x10);
                          if (lVar24 != 0) {
                            FUN_04ec264c(lVar24,0x6d61726b,*(undefined8 *)puVar10);
                            lVar24 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x10);
                            if (lVar24 != 0) {
                              pcVar2 = (char *)(param_2 + 0x1588);
                              FUN_04ec264c(lVar24,0x6d6b6d6b,*(undefined8 *)puVar10);
                              lVar35 = *(long *)(param_5 + 0x58);
                              *(undefined4 *)(param_2 + 0x368) = 0xbf800000;
                              *(undefined8 *)(param_2 + 0x360) = 0;
                              uVar4 = *(uint *)(param_5 + 0x98);
                              *(undefined1 *)(param_2 + 0x19f0) = 1;
                              *(undefined8 *)(param_2 + 0x37c) = 0;
                              *(undefined8 *)(param_2 + 0x381) = 0;
                              FUN_07d8c610(&local_a8,0xffffffff,0,0);
                              memset(auStack_440,0,0x398);
                              memset(auStack_7d8,0,0x398);
                              memset(local_b70,0,0x398);
                              lVar24 = *(long *)(param_2 + 0x20);
                              *(undefined1 *)(param_2 + 0x4d) = 0;
                              *(int *)(param_2 + 0x15b0) = *(int *)(param_2 + 0x15b0) + 1;
                              fVar46 = DAT_015c5994;
                              fVar45 = DAT_015c5798;
                              if (lVar24 != 0) {
                                bVar7 = 0;
                                uVar21 = 0;
                                fVar62 = fVar62 * DAT_015c5994;
                                uVar28 = (ulong)(uint)fVar62;
                                iVar1 = iVar3 + -1;
                                fVar63 = 0.0;
                                param_1 = param_1 + DAT_015c5c68;
                                uVar27 = (ulong)(uint)DAT_015c5798;
                                bVar15 = 1;
                                fVar43 = (fVar61 / fVar42) * fVar43;
                                local_f14 = 0.0;
                                fVar42 = fVar43;
                                while ((int)uVar21 < (int)*(uint *)(lVar24 + 0x18)) {
                                  if (*(uint *)(lVar24 + 0x18) <= uVar21) goto LAB_07d7f538;
                                  uVar19 = *(uint *)(lVar24 + (long)(int)uVar21 * 0x10 + 0x24);
                                  if (uVar19 == 0x1a) goto LAB_07d7cfcc;
                                  if (uVar19 == 0) break;
                                  if ((uVar19 == 0x3c) && (*(char *)(param_5 + 0x81) != '\0')) {
                                    pcVar2[0] = '\x01';
                                    pcVar2[1] = '\x01';
                                    uVar25 = FUN_07d74ca8(param_2,lVar24,uVar21 + 1,&local_c04,
                                                          param_5,param_6,local_c08);
                                    if (((uVar25 & 1) != 0) &&
                                       (uVar21 = local_c04, *pcVar2 == '\x01')) goto LAB_07d7cfcc;
                                    if (param_6 == 0) goto LAB_07d7f534;
                                  }
                                  else {
                                    if ((param_6 == 0) ||
                                       (lVar24 = *(long *)(param_6 + 0x30), lVar24 == 0))
                                    goto LAB_07d7f534;
                                    if (*(uint *)(lVar24 + 0x18) <= *(uint *)(param_2 + 0x334))
                                    goto LAB_07d7f538;
                                    lVar24 = lVar24 + (long)(int)*(uint *)(param_2 + 0x334) * 0x178;
                                    *pcVar2 = *(char *)(lVar24 + 0x28);
                                    *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(lVar24 + 0x58)
                                    ;
                                    *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(lVar24 + 0x40)
                                    ;
                                    thunk_FUN_03afed3c(plVar41);
                                  }
                                  lVar24 = *(long *)(param_6 + 0x30);
                                  if (lVar24 == 0) goto LAB_07d7f534;
                                  uVar22 = *(uint *)(param_2 + 0x334);
                                  if (*(uint *)(lVar24 + 0x18) <= uVar22) goto LAB_07d7f538;
                                  uVar53 = *(undefined4 *)(param_2 + 0x78);
                                  uVar11 = (uint)local_a8;
                                  cVar31 = *(char *)(lVar24 + (long)(int)uVar22 * 0x178 + 0x5c);
                                  *(undefined1 *)(param_2 + 0x1589) = 0;
                                  uVar32 = uVar22;
                                  if ((uint)local_a8 == uVar22) {
                                    *pcVar2 = '\x01';
                                    if (local_a8._4_4_ == 0x2026) {
                                      lVar24 = *(long *)(param_2 + 0x1a38);
                                      if (lVar24 != 0) {
                                        if (*(uint *)(lVar24 + 0x18) <= uVar22) goto LAB_07d7f538;
                                        *(undefined8 *)(lVar24 + (long)(int)uVar22 * 0x178 + 0x30) =
                                             *(undefined8 *)(param_2 + 0x19f8);
                                        thunk_FUN_03afed3c();
                                        lVar24 = *(long *)(param_2 + 0x1a38);
                                        if (lVar24 != 0) {
                                          if (*(uint *)(lVar24 + 0x18) <= *(uint *)(param_2 + 0x334)
                                             ) goto LAB_07d7f538;
                                          lVar24 = lVar24 + (long)(int)*(uint *)(param_2 + 0x334) *
                                                            0x178;
                                          *(undefined8 *)(lVar24 + 0x40) =
                                               *(undefined8 *)(param_2 + 0x1a00);
                                          *(undefined1 *)(lVar24 + 0x28) = 1;
                                          thunk_FUN_03afed3c();
                                          lVar24 = *(long *)(param_2 + 0x1a38);
                                          if (lVar24 != 0) {
                                            if (*(uint *)(lVar24 + 0x18) <=
                                                *(uint *)(param_2 + 0x334)) goto LAB_07d7f538;
                                            *(undefined8 *)
                                             (lVar24 + (long)(int)*(uint *)(param_2 + 0x334) * 0x178
                                             + 0x50) = *(undefined8 *)(param_2 + 0x1a08);
                                            thunk_FUN_03afed3c();
                                            lVar24 = *(long *)(param_2 + 0x1a38);
                                            if (lVar24 != 0) {
                                              uVar32 = *(uint *)(param_2 + 0x334);
                                              if (uVar32 < *(uint *)(lVar24 + 0x18)) {
                                                uVar19 = 0x2026;
                                                *(undefined4 *)
                                                 (lVar24 + (long)(int)uVar32 * 0x178 + 0x58) =
                                                     *(undefined4 *)(param_2 + 0x1a10);
                                                *(undefined1 *)(param_2 + 0x4d) = 1;
                                                local_a8 = CONCAT44(3,uVar32 + 1);
                                                goto LAB_07d7cf78;
                                              }
                                              goto LAB_07d7f538;
                                            }
                                          }
                                        }
                                      }
                                      goto LAB_07d7f534;
                                    }
                                    uVar19 = local_a8._4_4_;
                                    if (local_a8._4_4_ != 3) goto LAB_07d7cf78;
                                    lVar24 = *(long *)(param_2 + 0x1a38);
                                    if (((lVar24 == 0) || (*plVar41 == 0)) ||
                                       (lVar36 = FUN_07d61598(*plVar41,0), lVar36 == 0))
                                    goto LAB_07d7f534;
                                    uVar38 = FUN_060344a4(lVar36,3,*(undefined8 *)
                                                                                                                                        
                                                  System_Runtime_Serialization_GenericParameterDataContract_GenericParameterDataContractCriticalHelper_TypeInfo
                                                  );
                                    if (*(uint *)(lVar24 + 0x18) <= uVar22) goto LAB_07d7f538;
                                    *(undefined8 *)(lVar24 + (long)(int)uVar22 * 0x178 + 0x30) =
                                         uVar38;
                                    thunk_FUN_03afed3c();
                                    uVar19 = 3;
                                    *(undefined1 *)(param_2 + 0x4d) = 1;
                                  }
                                  else {
LAB_07d7cf78:
                                    if ((uVar19 != 3) && ((int)uVar32 < 0)) {
                                      lVar24 = *(long *)(param_2 + 0x1a38);
                                      if (lVar24 != 0) {
                                        if (uVar32 < *(uint *)(lVar24 + 0x18)) {
                                          lVar24 = lVar24 + (long)(int)uVar32 * 0x178;
                                          *(undefined1 *)(lVar24 + 0x194) = 0;
                                          *(undefined4 *)(lVar24 + 0x20) = 0x200b;
                                          *(undefined4 *)(lVar24 + 100) = 0;
                                          *(uint *)(param_2 + 0x334) = uVar32 + 1;
                                          goto LAB_07d7cfcc;
                                        }
                                        goto LAB_07d7f538;
                                      }
                                      goto LAB_07d7f534;
                                    }
                                  }
                                  cVar5 = *pcVar2;
                                  if (cVar5 == '\x01') {
                                    uVar32 = *(uint *)(param_2 + 300);
                                    if ((uVar32 >> 4 & 1) == 0) {
                                      if ((uVar32 >> 3 & 1) == 0) {
                                        local_f1c = 1.0;
                                        if ((uVar32 >> 5 & 1) != 0) {
                                          if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) ==
                                              0) {
                                            thunk_FUN_03ae8be4();
                                          }
                                          uVar25 = FUN_066bbc7c(uVar19,0);
                                          if ((uVar25 & 1) != 0) {
                                            if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4)
                                                == 0) {
                                              thunk_FUN_03ae8be4();
                                            }
                                            uVar19 = FUN_066bbf04(uVar19,0);
                                            local_f1c = fVar45;
                                            goto LAB_07d7d118;
                                          }
                                        }
                                      }
                                      else {
                                        if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0
                                           ) {
                                          thunk_FUN_03ae8be4();
                                        }
                                        uVar25 = FUN_066bbbdc(uVar19,0);
                                        local_f1c = 1.0;
                                        if ((uVar25 & 1) != 0) {
                                          if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) ==
                                              0) {
                                            thunk_FUN_03ae8be4();
                                          }
                                          uVar19 = FUN_066bc07c(uVar19,0);
                                          goto LAB_07d7d118;
                                        }
                                      }
                                    }
                                    else {
                                      if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0)
                                      {
                                        thunk_FUN_03ae8be4();
                                      }
                                      uVar25 = FUN_066bbc7c(uVar19,0);
                                      local_f1c = 1.0;
                                      if ((uVar25 & 1) != 0) {
                                        if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0
                                           ) {
                                          thunk_FUN_03ae8be4();
                                        }
                                        uVar19 = FUN_066bbf04(uVar19,0);
LAB_07d7d118:
                                        uVar19 = uVar19 & 0xffff;
                                      }
                                    }
                                    cVar5 = *pcVar2;
                                  }
                                  else {
                                    local_f1c = 1.0;
                                  }
                                  uVar60 = (undefined4)uVar27;
                                  fVar61 = (float)uVar28;
                                  if (cVar5 == '\x01') {
                                    lVar24 = *(long *)(param_6 + 0x30);
                                    if (lVar24 == 0) goto LAB_07d7f534;
                                    if (*(uint *)(lVar24 + 0x18) <= *(uint *)(param_2 + 0x334))
                                    goto LAB_07d7f538;
                                    *(undefined8 *)(param_2 + 0x1598) =
                                         *(undefined8 *)
                                          (lVar24 + (long)(int)*(uint *)(param_2 + 0x334) * 0x178 +
                                          0x30);
                                    thunk_FUN_03afed3c(param_2 + 0x1598);
                                    uVar60 = (undefined4)uVar27;
                                    fVar61 = (float)uVar28;
                                    if (*(long *)(param_2 + 0x1598) == 0) goto LAB_07d7cfcc;
                                    lVar24 = *(long *)(param_6 + 0x30);
                                    if (lVar24 == 0) goto LAB_07d7f534;
                                    if (*(uint *)(lVar24 + 0x18) <= *(uint *)(param_2 + 0x334))
                                    goto LAB_07d7f538;
                                    *plVar41 = *(long *)(lVar24 + (long)(int)*(uint *)(param_2 +
                                                                                      0x334) * 0x178
                                                        + 0x40);
                                    thunk_FUN_03afed3c(plVar41);
                                    lVar24 = *(long *)(param_6 + 0x30);
                                    if (lVar24 == 0) goto LAB_07d7f534;
                                    if (*(uint *)(lVar24 + 0x18) <= *(uint *)(param_2 + 0x334))
                                    goto LAB_07d7f538;
                                    *puVar39 = *(undefined8 *)
                                                (lVar24 + (long)(int)*(uint *)(param_2 + 0x334) *
                                                          0x178 + 0x50);
                                    thunk_FUN_03afed3c();
                                    lVar24 = *(long *)(param_6 + 0x30);
                                    if (lVar24 == 0) goto LAB_07d7f534;
                                    uVar6 = *(uint *)(param_2 + 0x334);
                                    uVar32 = *(uint *)(lVar24 + 0x18);
                                    if (uVar32 <= uVar6) goto LAB_07d7f538;
                                    *(undefined4 *)(param_2 + 0x78) =
                                         *(undefined4 *)
                                          (lVar24 + 0x20 + (long)(int)uVar6 * 0x178 + 0x38);
                                    if (uVar11 == uVar22) {
                                      lVar36 = *(long *)(param_2 + 0x20);
                                      if (lVar36 == 0) goto LAB_07d7f534;
                                      if (*(uint *)(lVar36 + 0x18) <= uVar21) goto LAB_07d7f538;
                                      if ((*(int *)(lVar36 + (long)(int)uVar21 * 0x10 + 0x24) != 10)
                                         || (uVar6 == *(uint *)(param_2 + 0x338)))
                                      goto LAB_07d7d2bc;
                                      if (uVar32 <= uVar6 - 1) goto LAB_07d7f538;
                                      if (*plVar41 == 0) goto LAB_07d7f534;
                                      fVar57 = *(float *)(lVar24 + 0x20 +
                                                          (long)(int)(uVar6 - 1) * 0x178 + 0x40);
                                      fVar47 = (float)FUN_07d5328c(*plVar41 + 0xb0,0);
                                      lVar24 = *plVar41;
                                    }
                                    else {
LAB_07d7d2bc:
                                      if (*plVar41 == 0) goto LAB_07d7f534;
                                      fVar57 = *(float *)(param_2 + 0xf8);
                                      fVar47 = (float)FUN_07d5328c(*plVar41 + 0xb0,0);
                                      lVar24 = *(long *)(param_2 + 0x68);
                                    }
                                    if (lVar24 == 0) goto LAB_07d7f534;
                                    fVar49 = (float)FUN_07d53294(lVar24 + 0xb0,0);
                                    if (uVar11 == uVar22) {
                                      local_f28 = 0.0;
                                      local_f20 = 0.0;
                                      if (uVar19 != 0x2026) goto LAB_07d7d318;
                                    }
                                    else {
LAB_07d7d318:
                                      if (*plVar41 == 0) goto LAB_07d7f534;
                                      local_f28 = (float)FUN_07d532bc(*plVar41 + 0xb0,0);
                                      if (*plVar41 == 0) goto LAB_07d7f534;
                                      local_f20 = (float)FUN_07d532ec(*plVar41 + 0xb0,0);
                                    }
                                    if (*(long *)(param_2 + 0x1598) == 0) goto LAB_07d7f534;
                                    fVar48 = *(float *)(param_2 + 0xf0);
                                    fVar42 = (float)FUN_07d88998(*(long *)(param_2 + 0x1598),0);
                                    lVar24 = *(long *)(param_2 + 0x1a38);
                                    if (lVar24 == 0) goto LAB_07d7f534;
                                    if (*(uint *)(lVar24 + 0x18) <= *(uint *)(param_2 + 0x334))
                                    goto LAB_07d7f538;
                                    *(undefined1 *)
                                     (lVar24 + (long)(int)*(uint *)(param_2 + 0x334) * 0x178 + 0x28)
                                         = 1;
                                    fVar48 = ((local_f1c * fVar57) / fVar47) * fVar49 * fVar48;
                                    fVar42 = fVar48 * fVar42;
LAB_07d7d7c0:
                                    bVar12 = uVar19 != 0xad;
                                    bVar13 = uVar19 != 3;
                                    fVar57 = fVar42;
                                    if (!bVar12 || !bVar13) {
                                      fVar57 = 0.0;
                                    }
                                  }
                                  else {
                                    if (cVar5 == '\x02') {
                                      lVar24 = *(long *)(param_6 + 0x30);
                                      if (lVar24 != 0) {
                                        if (*(uint *)(lVar24 + 0x18) <= *(uint *)(param_2 + 0x334))
                                        goto LAB_07d7f538;
                                        plVar40 = *(long **)(lVar24 + (long)(int)*(uint *)(param_2 +
                                                                                          0x334) *
                                                                      0x178 + 0x30);
                                        if (plVar40 != (long *)0x0) {
                                          bVar16 = *(byte *)(*(long *)
                                                  Unity_Services_CloudSave_Internal_Models_GetDownloadUrl400OneOf_<>c_TypeInfo
                                                  + 0x130);
                                          if ((*(byte *)(*plVar40 + 0x130) < bVar16) ||
                                             (*(long *)(*(long *)(*plVar40 + 200) +
                                                        (ulong)bVar16 * 8 + -8) !=
                                              *(long *)
                                               Unity_Services_CloudSave_Internal_Models_GetDownloadUrl400OneOf_<>c_TypeInfo
                                             )) {
                    /* WARNING: Subroutine does not return */
                                            FUN_03a8ad40(plVar40);
                                          }
                                          plVar26 = (long *)FUN_07d8466c(plVar40,0);
                                          if (plVar26 == (long *)0x0) {
                                            plVar26 = (long *)0x0;
                                            *(undefined8 *)(param_2 + 0xe0) = 0;
                                          }
                                          else {
                                            lVar24 = *(long *)
                                                  Unity_Services_CloudSave_Internal_Data_GetCustomItemsRequest_<>c_TypeInfo
                                            ;
                                            bVar16 = *(byte *)(lVar24 + 0x130);
                                            if (*(byte *)(*plVar26 + 0x130) < bVar16) {
                                              plVar37 = (long *)0x0;
                                            }
                                            else {
                                              plVar37 = plVar26;
                                              if (*(long *)(*(long *)(*plVar26 + 200) +
                                                            (ulong)bVar16 * 8 + -8) != lVar24) {
                                                plVar37 = (long *)0x0;
                                              }
                                            }
                                            *(long **)(param_2 + 0xe0) = plVar37;
                                            if (*(byte *)(*plVar26 + 0x130) < bVar16) {
                                              plVar26 = (long *)0x0;
                                            }
                                            else if (*(long *)(*(long *)(*plVar26 + 200) +
                                                               (ulong)bVar16 * 8 + -8) != lVar24) {
                                              plVar26 = (long *)0x0;
                                            }
                                          }
                                          thunk_FUN_03afed3c(param_2 + 0xe0,plVar26);
                                          iVar20 = FUN_07d85970(plVar40,0);
                                          *(int *)(param_2 + 0x158c) = iVar20;
                                          uVar22 = iVar20 + 0xe000;
                                          if (uVar19 != 0x3c) {
                                            uVar22 = uVar19;
                                          }
                                          if (*(long *)(param_2 + 0xe0) == 0) goto LAB_07d7f534;
                                          FUN_07d85320(&local_d40,*(long *)(param_2 + 0xe0),0);
                                          memcpy(&local_bd0,&local_d40,0x60);
                                          fVar42 = (float)FUN_07d5328c(&local_bd0,0);
                                          fVar57 = *(float *)(param_2 + 0xf8);
                                          if (fVar42 <= 0.0) {
                                            if (*plVar41 == 0) goto LAB_07d7f534;
                                            FUN_07d60d20(&local_d40,*plVar41,0);
                                            memcpy(&local_bd0,&local_d40,0x60);
                                            fVar42 = (float)FUN_07d5328c(&local_bd0,0);
                                            if (*plVar41 == 0) goto LAB_07d7f534;
                                            FUN_07d60d20(&local_da0,*plVar41,0);
                                            memcpy(&local_bd0,&local_da0,0x60);
                                            fVar61 = (float)FUN_07d53294(&local_bd0,0);
                                            if (*plVar41 == 0) goto LAB_07d7f534;
                                            FUN_07d60d20(auStack_e00,*plVar41,0);
                                            memcpy(&local_bd0,auStack_e00,0x60);
                                            fVar47 = (float)FUN_07d532bc(&local_bd0,0);
                                            lVar24 = FUN_07d88988(plVar40,0);
                                            if (lVar24 == 0) goto LAB_07d7f534;
                                            FUN_07d53750(&local_e74,lVar24,0);
                                            uStack_c18 = uStack_e6c;
                                            local_c20 = local_e74;
                                            local_c10 = local_e64;
                                            fVar49 = (float)FUN_07d53580(&local_c20,0);
                                            fVar50 = (float)FUN_07d88998(plVar40,0);
                                            lVar24 = FUN_07d88988(plVar40,0);
                                            if (lVar24 == 0) goto LAB_07d7f534;
                                            fVar48 = (float)FUN_07d5378c(lVar24,0);
                                            if (*plVar41 == 0) goto LAB_07d7f534;
                                            FUN_07d60d20(auStack_e60,*plVar41,0);
                                            memcpy(&local_bd0,auStack_e60,0x60);
                                            local_f28 = (float)FUN_07d532bc(&local_bd0,0);
                                            if (*plVar41 == 0) goto LAB_07d7f534;
                                            fVar48 = (fVar47 / fVar49) * fVar50 * fVar48;
                                            fVar61 = (fVar57 / fVar42) * fVar61;
                                            fVar42 = fVar61 * fVar48;
                                            local_f20 = fVar61 / fVar42;
                                            local_f28 = local_f20 * local_f28;
                                            FUN_07d60d20(auStack_ed8,*plVar41,0);
                                            memcpy(&local_bd0,auStack_ed8,0x60);
                                            fVar57 = (float)FUN_07d532ec(&local_bd0,0);
                                            local_f20 = local_f20 * fVar57;
                                          }
                                          else {
                                            if (*(long *)(param_2 + 0xe0) == 0) goto LAB_07d7f534;
                                            FUN_07d85320(&local_d40,*(long *)(param_2 + 0xe0),0);
                                            memcpy(&local_bd0,&local_d40,0x60);
                                            fVar42 = (float)FUN_07d5328c(&local_bd0,0);
                                            if (*(long *)(param_2 + 0xe0) == 0) goto LAB_07d7f534;
                                            FUN_07d85320(&local_da0,*(long *)(param_2 + 0xe0),0);
                                            memcpy(&local_bd0,&local_da0,0x60);
                                            fVar47 = (float)FUN_07d53294(&local_bd0,0);
                                            fVar48 = (float)FUN_07d88998(plVar40,0);
                                            lVar24 = FUN_07d88988(plVar40,0);
                                            if (lVar24 == 0) goto LAB_07d7f534;
                                            fVar49 = (float)FUN_07d5378c(lVar24,0);
                                            if (*(long *)(param_2 + 0xe0) == 0) goto LAB_07d7f534;
                                            FUN_07d85320(auStack_e00,*(long *)(param_2 + 0xe0),0);
                                            memcpy(&local_bd0,auStack_e00,0x60);
                                            local_f28 = (float)FUN_07d532bc(&local_bd0,0);
                                            if (*(long *)(param_2 + 0xe0) == 0) goto LAB_07d7f534;
                                            fVar48 = fVar48 * fVar49;
                                            fVar42 = (fVar57 / fVar42) * fVar47 * fVar48;
                                            FUN_07d85320(auStack_e60,*(long *)(param_2 + 0xe0),0);
                                            memcpy(&local_bd0,auStack_e60,0x60);
                                            local_f20 = (float)FUN_07d532ec(&local_bd0,0);
                                          }
                                          *(long **)(param_2 + 0x1598) = plVar40;
                                          thunk_FUN_03afed3c(param_2 + 0x1598,plVar40);
                                          lVar24 = *(long *)(param_2 + 0x1a38);
                                          if (lVar24 != 0) {
                                            if (*(uint *)(param_2 + 0x334) <
                                                *(uint *)(lVar24 + 0x18)) {
                                              lVar36 = lVar24 + (long)(int)*(uint *)(param_2 + 0x334
                                                                                    ) * 0x178;
                                              *(undefined1 *)(lVar36 + 0x28) = 2;
                                              *(float *)(lVar36 + 0x160) = fVar42;
                                              *(undefined4 *)(param_2 + 0x78) = uVar53;
                                              uVar19 = uVar22;
                                              goto LAB_07d7d7c0;
                                            }
                                            goto LAB_07d7f538;
                                          }
                                        }
                                      }
                                      goto LAB_07d7f534;
                                    }
                                    bVar12 = uVar19 != 0xad;
                                    fVar48 = 0.0;
                                    bVar13 = uVar19 != 3;
                                    fVar57 = fVar42;
                                    if (!bVar12 || !bVar13) {
                                      fVar57 = 0.0;
                                    }
                                    local_f28 = 0.0;
                                    lVar24 = *(long *)(param_2 + 0x1a38);
                                    if (lVar24 == 0) goto LAB_07d7f534;
                                    local_f20 = 0.0;
                                  }
                                  if (*(uint *)(lVar24 + 0x18) <= *(uint *)(param_2 + 0x334))
                                  goto LAB_07d7f538;
                                  lVar24 = lVar24 + (long)(int)*(uint *)(param_2 + 0x334) * 0x178;
                                  *(uint *)(lVar24 + 0x20) = uVar19 & 0xffff;
                                  uVar22 = *(uint *)(param_2 + 300);
                                  *(uint *)(lVar24 + 400) = uVar22;
                                  if (*(int *)(param_2 + 0x13c) == 700) {
                                    *(uint *)(lVar24 + 400) = uVar22 | 1;
                                  }
                                  lVar24 = *(long *)(param_6 + 0x30);
                                  if (lVar24 == 0) goto LAB_07d7f534;
                                  if (*(uint *)(lVar24 + 0x18) <= *(uint *)(param_2 + 0x334))
                                  goto LAB_07d7f538;
                                  lVar24 = *(long *)(lVar24 + (long)(int)*(uint *)(param_2 + 0x334)
                                                              * 0x178 + 0x38);
                                  if (lVar24 == 0) {
                                    if ((*(long *)(param_2 + 0x1598) == 0) ||
                                       (lVar24 = *(long *)(*(long *)(param_2 + 0x1598) + 0x20),
                                       lVar24 == 0)) goto LAB_07d7f534;
                                    FUN_07d53750(&local_d40,lVar24,0);
                                    local_cd0 = (undefined4)local_d30;
                                    uStack_cd8 = uStack_d38;
                                    local_ce0 = local_d40;
                                  }
                                  else {
                                    FUN_07d53750(&local_ce0,lVar24,0);
                                  }
                                  uStack_be8 = uStack_cd8;
                                  local_bf0 = local_ce0;
                                  local_be0 = local_cd0;
                                  if (uVar19 >> 0x10 == 0) {
                                    if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
                                      thunk_FUN_03ae8be4();
                                    }
                                    bVar16 = FUN_066b9610(uVar19,0);
                                  }
                                  else {
                                    bVar16 = 0;
                                  }
                                  fVar47 = *(float *)(param_5 + 0x8c);
                                  local_bf8 = 0;
                                  local_c00 = 0;
                                  if (((uVar18 & 1) != 0) && (*pcVar2 == '\x01')) {
                                    if (*(long *)(param_2 + 0x1598) == 0) goto LAB_07d7f534;
                                    iVar20 = *(int *)(param_2 + 0x334);
                                    uVar22 = *(uint *)(*(long *)(param_2 + 0x1598) + 0x28);
                                    if (iVar20 < iVar1) {
                                      lVar24 = *(long *)(param_6 + 0x30);
                                      if (lVar24 == 0) goto LAB_07d7f534;
                                      uVar32 = iVar20 + 1;
                                      if (*(uint *)(lVar24 + 0x18) <= uVar32) goto LAB_07d7f538;
                                      if (*(char *)(lVar24 + 0x20 + (long)(int)uVar32 * 0x178 + 8)
                                          == '\x01') {
                                        lVar24 = *(long *)(lVar24 + 0x20 + (long)(int)uVar32 * 0x178
                                                          + 0x10);
                                        if ((((lVar24 == 0) || (*plVar41 == 0)) ||
                                            (lVar36 = *(long *)(*plVar41 + 0x170), lVar36 == 0)) ||
                                           (lVar36 = *(long *)(lVar36 + 0x40), lVar36 == 0))
                                        goto LAB_07d7f534;
                                        uVar27 = FUN_05ffa6e0(lVar36,uVar22 | *(int *)(lVar24 + 0x28
                                                                                      ) << 0x10,
                                                              &local_c50,
                                                              *(undefined8 *)
                                                                                                                              
                                                  Unity_Netcode_HandlerNotRegisteredException_TypeInfo
                                                  );
                                        if ((uVar27 & 1) != 0) {
                                          FUN_07d57e40(&local_d40,&local_c50,0);
                                          local_c60 = (undefined4)local_d30;
                                          uStack_c68 = uStack_d38;
                                          local_c70 = local_d40;
                                          uVar53 = FUN_07d57c94(&local_c70,0);
                                          local_c00 = CONCAT44(fVar48,uVar53);
                                          local_bf8 = CONCAT44(uVar60,fVar61);
                                          uVar27 = FUN_07d57e7c(&local_c50,0);
                                          if ((uVar27 & 0x100) != 0) {
                                            fVar47 = 0.0;
                                          }
                                        }
                                      }
                                      iVar20 = *(int *)(param_2 + 0x334);
                                    }
                                    uVar32 = iVar20 - 1;
                                    if (0 < iVar20) {
                                      lVar24 = *(long *)(param_6 + 0x30);
                                      if (lVar24 == 0) goto LAB_07d7f534;
                                      if (*(uint *)(lVar24 + 0x18) <= uVar32) goto LAB_07d7f538;
                                      lVar36 = *(long *)(lVar24 + 0x20 + (ulong)uVar32 * 0x178 +
                                                        0x10);
                                      if (lVar36 == 0) goto LAB_07d7f534;
                                      if (*(char *)(lVar24 + 0x20 + (ulong)uVar32 * 0x178 + 8) ==
                                          '\x01') {
                                        if (((*plVar41 == 0) ||
                                            (lVar24 = *(long *)(*plVar41 + 0x170), lVar24 == 0)) ||
                                           (lVar24 = *(long *)(lVar24 + 0x40), lVar24 == 0))
                                        goto LAB_07d7f534;
                                        uVar28 = FUN_05ffa6e0(lVar24,*(uint *)(lVar36 + 0x28) |
                                                                     uVar22 << 0x10,&local_c50,
                                                              *(undefined8 *)
                                                                                                                              
                                                  Unity_Netcode_HandlerNotRegisteredException_TypeInfo
                                                  );
                                        uVar38 = local_bf8;
                                        uVar27 = local_c00;
                                        if ((uVar28 & 1) != 0) {
                                          FUN_07d57e68(&local_d40,&local_c50,0);
                                          local_c60 = (undefined4)local_d30;
                                          uStack_c68 = uStack_d38;
                                          local_c70 = local_d40;
                                          FUN_07d57c94(&local_c70,0);
                                          uVar60 = (undefined4)(uVar27 >> 0x20);
                                          uVar54 = (undefined4)uVar38;
                                          uVar55 = (undefined4)((ulong)uVar38 >> 0x20);
                                          uVar53 = FUN_07d57af4(uVar27 & 0xffffffff,0);
                                          local_c00 = CONCAT44(uVar60,uVar53);
                                          local_bf8 = CONCAT44(uVar55,uVar54);
                                          uVar27 = FUN_07d57e7c(&local_c50,0);
                                          if ((uVar27 & 0x100) != 0) {
                                            fVar47 = 0.0;
                                          }
                                        }
                                      }
                                    }
                                    lVar24 = *(long *)(param_2 + 0x1a38);
                                    if (lVar24 == 0) goto LAB_07d7f534;
                                    uVar22 = *(uint *)(param_2 + 0x334);
                                    uVar53 = FUN_07d57ad0(&local_c00,0);
                                    if (*(uint *)(lVar24 + 0x18) <= uVar22) goto LAB_07d7f538;
                                    *(undefined4 *)(lVar24 + (long)(int)uVar22 * 0x178 + 0x154) =
                                         uVar53;
                                  }
                                  if (*(int *)(*(long *)
                                                UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo
                                              + 0xe4) == 0) {
                                    thunk_FUN_03ae8be4();
                                  }
                                  bVar17 = FUN_07d8fcc4(uVar19,0);
                                  uVar22 = *(uint *)(param_2 + 0x334);
                                  if ((bVar17 & 1) == 0) {
                                    if (0 < (int)uVar22) {
                                      uVar32 = *(uint *)(param_2 + 0x19cc);
                                      if ((uVar32 == 0x80000000) || (uVar32 != uVar22 - 1)) {
                                        lVar24 = (ulong)uVar22 * 0x178 + 0x144;
                                        uVar27 = (ulong)uVar22;
                                        do {
                                          uVar28 = uVar27 - 1;
                                          if (((long)uVar27 < 1) ||
                                             (uVar22 = (int)uVar27 - 1,
                                             uVar22 == *(uint *)(param_2 + 0x19cc))) {
                                            uVar22 = *(uint *)(param_2 + 0x19cc);
                                            if (uVar22 == 0x80000000) goto LAB_07d7e034;
                                            lVar24 = *(long *)(param_6 + 0x30);
                                            if (lVar24 == 0) goto LAB_07d7f534;
                                            if (*(uint *)(lVar24 + 0x18) <= uVar22)
                                            goto LAB_07d7f538;
                                            lVar24 = *(long *)(lVar24 + (long)(int)uVar22 * 0x178 +
                                                              0x30);
                                            if ((lVar24 == 0) ||
                                               (lVar24 = FUN_07d88988(lVar24,0), lVar24 == 0))
                                            goto LAB_07d7f534;
                                            uVar22 = FUN_07d53740(lVar24,0);
                                            if (*(long *)(param_2 + 0x1598) == 0) goto LAB_07d7f534;
                                            iVar20 = FUN_07d85970(*(long *)(param_2 + 0x1598),0);
                                            if (((*plVar41 == 0) ||
                                                (lVar24 = FUN_07d61740(*plVar41,0), lVar24 == 0)) ||
                                               (*(long *)(lVar24 + 0x48) == 0)) goto LAB_07d7f534;
                                            uVar27 = FUN_06008730(*(long *)(lVar24 + 0x48),
                                                                  uVar22 | iVar20 << 0x10,&local_cc8
                                                                  ,*(undefined8 *)
                                                                                                                                        
                                                  UnityEngine_UIElements_GenericDropdownMenu_MenuItem_TypeInfo
                                                  );
                                            if ((uVar27 & 1) == 0) goto LAB_07d7e034;
                                            lVar24 = *(long *)(param_2 + 0x1a38);
                                            if (lVar24 == 0) goto LAB_07d7f534;
                                            if (*(uint *)(lVar24 + 0x18) <=
                                                *(uint *)(param_2 + 0x19cc)) goto LAB_07d7f538;
                                            fVar49 = *(float *)(param_2 + 0x300);
                                            fVar61 = *(float *)(lVar24 + (long)(int)*(uint *)(
                                                  param_2 + 0x19cc) * 0x178 + 0x13c) - fVar49;
                                            uVar53 = FUN_07d58088(&local_cc8,0);
                                            local_c90 = CONCAT44(fVar49,uVar53);
                                            fVar47 = (float)
                                                  UnityEngine_UIElements_VisualElementAsset__get_stylesheetPaths
                                                            (&local_c90,0);
                                            uVar53 = FUN_07d580a8(&local_cc8,0);
                                            local_c98 = CONCAT44(fVar49,uVar53);
                                            fVar49 = (float)FUN_07d58058(&local_c98,0);
                                            fVar47 = fVar61 / fVar57 + fVar47;
                                            FUN_07d57ab8(fVar47 - fVar49,&local_c00,0);
                                            uVar53 = FUN_07d58088(&local_cc8,0);
                                            local_c90 = CONCAT44(fVar47,uVar53);
                                            fVar61 = (float)FUN_07d58048(&local_c90,0);
                                            puVar29 = &local_cc8;
                                            goto LAB_07d7e004;
                                          }
                                          lVar36 = *(long *)(param_6 + 0x30);
                                          if (lVar36 == 0) goto LAB_07d7f534;
                                          if (*(uint *)(lVar36 + 0x18) <= uVar22) goto LAB_07d7f538;
                                          lVar36 = *(long *)(lVar36 + lVar24 + -0x28c);
                                          if ((lVar36 == 0) ||
                                             (lVar36 = FUN_07d88988(lVar36,0), lVar36 == 0))
                                          goto LAB_07d7f534;
                                          uVar22 = FUN_07d53740(lVar36,0);
                                          if (*(long *)(param_2 + 0x1598) == 0) goto LAB_07d7f534;
                                          iVar20 = FUN_07d85970(*(long *)(param_2 + 0x1598),0);
                                          if (((*plVar41 == 0) ||
                                              (lVar36 = FUN_07d61740(*plVar41,0), lVar36 == 0)) ||
                                             (*(long *)(lVar36 + 0x50) == 0)) goto LAB_07d7f534;
                                          uVar25 = 
                                                  System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__MoveNext
                                                            (*(long *)(lVar36 + 0x50),
                                                             uVar22 | iVar20 << 0x10,&local_cb0,
                                                             *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_GUILayoutUtility_LayoutCache_TypeInfo)
                                          ;
                                          lVar24 = lVar24 + -0x178;
                                          uVar27 = uVar28;
                                        } while ((uVar25 & 1) == 0);
                                        lVar36 = *(long *)(param_6 + 0x30);
                                        if (lVar36 == 0) goto LAB_07d7f534;
                                        uVar22 = (uint)uVar28;
                                        if (*(uint *)(lVar36 + 0x18) <= uVar22) goto LAB_07d7f538;
                                        lVar33 = *(long *)(param_2 + 0x1a38);
                                        if (lVar33 == 0) goto LAB_07d7f534;
                                        if (*(uint *)(lVar33 + 0x18) <= uVar22) goto LAB_07d7f538;
                                        fVar61 = *(float *)(param_2 + 0x300);
                                        fVar50 = *(float *)(lVar36 + lVar24 + -8);
                                        fVar48 = *(float *)(lVar33 + lVar24);
                                        fVar47 = fVar48 - ((0.0 - *(float *)(param_2 + 0x2e8)) +
                                                          *(float *)(param_2 + 0x188));
                                        uVar53 = FUN_07d580c8(&local_cb0,0);
                                        local_c90 = CONCAT44(fVar48,uVar53);
                                        fVar49 = (float)
                                                  UnityEngine_UIElements_VisualElementAsset__get_stylesheetPaths
                                                            (&local_c90,0);
                                        uVar53 = FUN_07d580e8(&local_cb0,0);
                                        local_c98 = CONCAT44(fVar48,uVar53);
                                        fVar48 = (float)FUN_07d58058(&local_c98,0);
                                        fVar49 = (fVar50 - fVar61) / fVar57 + fVar49;
                                        FUN_07d57ab8(fVar49 - fVar48,&local_c00,0);
                                        uVar53 = FUN_07d580c8(&local_cb0,0);
                                        local_c90 = CONCAT44(fVar49,uVar53);
                                        fVar61 = (float)FUN_07d58048(&local_c90,0);
                                        uVar53 = FUN_07d580e8(&local_cb0,0);
                                        local_c98 = CONCAT44(fVar49,uVar53);
                                        fVar49 = (float)FUN_07d58068(&local_c98,0);
                                        FUN_07d57ac8((fVar47 / fVar57 + fVar61) - fVar49,&local_c00,
                                                     0);
                                        fVar47 = 0.0;
                                      }
                                      else {
                                        lVar24 = *(long *)(param_6 + 0x30);
                                        if (lVar24 == 0) goto LAB_07d7f534;
                                        if (*(uint *)(lVar24 + 0x18) <= uVar32) goto LAB_07d7f538;
                                        lVar24 = *(long *)(lVar24 + (long)(int)uVar32 * 0x178 + 0x30
                                                          );
                                        if ((lVar24 == 0) ||
                                           (lVar24 = FUN_07d88988(lVar24,0), lVar24 == 0))
                                        goto LAB_07d7f534;
                                        uVar22 = FUN_07d53740(lVar24,0);
                                        if (*(long *)(param_2 + 0x1598) == 0) goto LAB_07d7f534;
                                        iVar20 = FUN_07d85970(*(long *)(param_2 + 0x1598),0);
                                        if (((*plVar41 == 0) ||
                                            (lVar24 = FUN_07d61740(*plVar41,0), lVar24 == 0)) ||
                                           (*(long *)(lVar24 + 0x48) == 0)) goto LAB_07d7f534;
                                        uVar27 = FUN_06008730(*(long *)(lVar24 + 0x48),
                                                              uVar22 | iVar20 << 0x10,&local_c88,
                                                              *(undefined8 *)
                                                                                                                              
                                                  UnityEngine_UIElements_GenericDropdownMenu_MenuItem_TypeInfo
                                                  );
                                        if ((uVar27 & 1) != 0) {
                                          lVar24 = *(long *)(param_2 + 0x1a38);
                                          if (lVar24 == 0) goto LAB_07d7f534;
                                          if (*(uint *)(lVar24 + 0x18) <=
                                              *(uint *)(param_2 + 0x19cc)) goto LAB_07d7f538;
                                          fVar49 = *(float *)(param_2 + 0x300);
                                          fVar61 = *(float *)(lVar24 + (long)(int)*(uint *)(param_2 
                                                  + 0x19cc) * 0x178 + 0x13c) - fVar49;
                                          uVar53 = FUN_07d58088(&local_c88,0);
                                          local_c90 = CONCAT44(fVar49,uVar53);
                                          fVar47 = (float)
                                                  UnityEngine_UIElements_VisualElementAsset__get_stylesheetPaths
                                                            (&local_c90,0);
                                          uVar53 = FUN_07d580a8(&local_c88,0);
                                          local_c98 = CONCAT44(fVar49,uVar53);
                                          fVar49 = (float)FUN_07d58058(&local_c98,0);
                                          fVar47 = fVar61 / fVar57 + fVar47;
                                          FUN_07d57ab8(fVar47 - fVar49,&local_c00,0);
                                          uVar53 = FUN_07d58088(&local_c88,0);
                                          local_c90 = CONCAT44(fVar47,uVar53);
                                          fVar61 = (float)FUN_07d58048(&local_c90,0);
                                          puVar29 = &local_c88;
LAB_07d7e004:
                                          uVar53 = FUN_07d580a8(puVar29,0);
                                          local_c98 = CONCAT44(fVar47,uVar53);
                                          fVar47 = (float)FUN_07d58068(&local_c98,0);
                                          FUN_07d57ac8(fVar61 - fVar47,&local_c00,0);
                                          fVar47 = 0.0;
                                        }
                                      }
                                    }
                                  }
                                  else {
                                    *(uint *)(param_2 + 0x19cc) = uVar22;
                                  }
LAB_07d7e034:
                                  fVar61 = (float)FUN_07d57ac0(&local_c00,0);
                                  fVar49 = (float)FUN_07d57ac0(&local_c00,0);
                                  fVar58 = *(float *)(param_2 + 0x2f8);
                                  fVar48 = 0.0;
                                  fVar50 = 0.0;
                                  if ((fVar58 != 0.0) && (uVar19 != 0x200b)) {
                                    if ((*(long *)(param_2 + 0x1598) == 0) ||
                                       (lVar24 = FUN_07d88988(*(long *)(param_2 + 0x1598),0),
                                       lVar24 == 0)) goto LAB_07d7f534;
                                    FUN_07d53750(&local_d40,lVar24,0);
                                    uStack_c18 = uStack_d38;
                                    local_c20 = local_d40;
                                    local_c10 = (undefined4)local_d30;
                                    fVar50 = (float)FUN_07d53578(&local_c20,0);
                                    if ((*(long *)(param_2 + 0x1598) == 0) ||
                                       (lVar24 = FUN_07d88988(*(long *)(param_2 + 0x1598),0),
                                       lVar24 == 0)) goto LAB_07d7f534;
                                    FUN_07d53750(&local_da0,lVar24,0);
                                    uStack_c18 = uStack_d98;
                                    local_c20 = local_da0;
                                    local_c10 = (undefined4)local_d90;
                                    fVar51 = (float)FUN_07d53588(&local_c20,0);
                                    fVar50 = (1.0 - *(float *)(param_2 + 0x15a4)) *
                                             (fVar58 * 0.5 - fVar57 * (fVar50 * 0.5 + fVar51));
                                    fVar58 = *(float *)(param_2 + 0x300) + fVar50;
                                    if (*(char *)(param_2 + 0xf4) != '\0') {
                                      fVar58 = (float)(int)(fVar58 + fVar8);
                                    }
                                    *(float *)(param_2 + 0x300) = fVar58;
                                  }
                                  lVar24 = *(long *)(param_2 + 0x1a38);
                                  if ((cVar31 == '\0') && (*pcVar2 == '\x01')) {
                                    if (lVar24 == 0) goto LAB_07d7f534;
                                    if (*(uint *)(lVar24 + 0x18) <= *(uint *)(param_2 + 0x334))
                                    goto LAB_07d7f538;
                                    fVar48 = 0.0;
                                    if ((*(byte *)(lVar24 + (long)(int)*(uint *)(param_2 + 0x334) *
                                                            0x178 + 400) & 1) != 0) {
                                      if (*plVar41 != 0) {
                                        fVar48 = (float)FUN_07d617b8(*plVar41,0);
                                        lVar24 = *(long *)(param_2 + 0x1a38);
                                        goto LAB_07d7e1d0;
                                      }
                                      goto LAB_07d7f534;
                                    }
                                  }
                                  else {
LAB_07d7e1d0:
                                    if (lVar24 == 0) goto LAB_07d7f534;
                                  }
                                  uVar22 = *(uint *)(param_2 + 0x334);
                                  fVar58 = *(float *)(param_2 + 0x300);
                                  fVar51 = (float)FUN_07d57ab0(&local_c00,0);
                                  if (*(uint *)(lVar24 + 0x18) <= uVar22) goto LAB_07d7f538;
                                  fVar58 = fVar58 + fVar57 * fVar51;
                                  if (*(char *)(param_2 + 0xf4) != '\0') {
                                    fVar58 = (float)(int)(fVar58 + fVar8);
                                  }
                                  *(float *)(lVar24 + (long)(int)uVar22 * 0x178 + 0x13c) = fVar58;
                                  lVar24 = *(long *)(param_2 + 0x1a38);
                                  if (lVar24 == 0) goto LAB_07d7f534;
                                  uVar22 = *(uint *)(param_2 + 0x334);
                                  fVar59 = *(float *)(param_2 + 0x2e8);
                                  fVar51 = *(float *)(param_2 + 0x188);
                                  fVar58 = (float)FUN_07d57ac0(&local_c00,0);
                                  if (*(uint *)(lVar24 + 0x18) <= uVar22) goto LAB_07d7f538;
                                  uVar27 = (ulong)(uint)fVar57;
                                  fVar58 = (0.0 - fVar59) + fVar51 + fVar57 * fVar58;
                                  if (*(char *)(param_2 + 0xf4) != '\0') {
                                    fVar58 = (float)(int)(fVar58 + fVar8);
                                  }
                                  *(float *)(lVar24 + (long)(int)uVar22 * 0x178 + 0x144) = fVar58;
                                  fVar61 = fVar57 * (local_f28 + fVar61);
                                  if (*pcVar2 == '\x01') {
                                    fVar61 = fVar61 / local_f1c;
                                    fVar49 = (fVar57 * (local_f20 + fVar49)) / local_f1c;
                                  }
                                  else {
                                    fVar49 = fVar57 * (local_f20 + fVar49);
                                  }
                                  fVar58 = *(float *)(param_2 + 0x188);
                                  uVar32 = *(uint *)(param_2 + 0x334);
                                  uVar22 = *(uint *)(param_2 + 0x338);
                                  fVar61 = fVar61 + fVar58;
                                  if ((bVar16 & uVar32 != uVar22) == 0) {
                                    fVar49 = fVar49 + fVar58;
                                    fVar51 = fVar61;
                                    fVar59 = fVar49;
                                    if (fVar58 != 0.0) {
                                      fVar51 = (fVar61 - fVar58) / *(float *)(param_2 + 0xf0);
                                      fVar59 = (fVar49 - fVar58) / *(float *)(param_2 + 0xf0);
                                      if (fVar51 <= fVar61) {
                                        fVar51 = fVar61;
                                      }
                                      if (fVar49 <= fVar59) {
                                        fVar59 = fVar49;
                                      }
                                    }
                                    lVar24 = *(long *)(param_2 + 0x1a38);
                                    fVar58 = fVar51;
                                    if (fVar51 <= *(float *)(param_2 + 0x348)) {
                                      fVar58 = *(float *)(param_2 + 0x348);
                                    }
                                    uVar28 = (ulong)(uint)fVar58;
                                    fVar56 = fVar59;
                                    if (*(float *)(param_2 + 0x34c) <= fVar59) {
                                      fVar56 = *(float *)(param_2 + 0x34c);
                                    }
                                    *(float *)(param_2 + 0x348) = fVar58;
                                    *(float *)(param_2 + 0x34c) = fVar56;
                                    if (lVar24 == 0) goto LAB_07d7f534;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar32) goto LAB_07d7f538;
                                    lVar24 = lVar24 + (long)(int)uVar32 * 0x178;
                                    *(float *)(lVar24 + 0x14c) = fVar51;
                                    *(float *)(lVar24 + 0x150) = fVar59;
                                    fVar51 = *(float *)(param_2 + 0x2e8);
                                    uVar27 = (ulong)(uint)(fVar61 - fVar51);
                                    *(float *)(lVar24 + 0x140) = fVar61 - fVar51;
                                    *(float *)(lVar24 + 0x148) = fVar49 - fVar51;
                                    *(float *)(param_2 + 900) = fVar49 - fVar51;
                                    if (*(int *)(param_2 + 0x350) == 0) {
                                      *(float *)(param_2 + 0x380) = fVar58;
                                      if (*(long *)(param_2 + 0x68) == 0) goto LAB_07d7f534;
                                      fVar49 = *(float *)(param_2 + 0x37c);
                                      fVar58 = (float)FUN_07d532c4(*(long *)(param_2 + 0x68) + 0xb0,
                                                                   0);
                                      local_f1c = (fVar57 * fVar58) / local_f1c;
                                      if (fVar49 <= local_f1c) {
                                        fVar49 = local_f1c;
                                      }
                                      fVar51 = *(float *)(param_2 + 0x2e8);
                                      *(float *)(param_2 + 0x37c) = fVar49;
                                    }
                                  }
                                  else {
                                    lVar24 = *(long *)(param_2 + 0x1a38);
                                    if (lVar24 == 0) goto LAB_07d7f534;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar32) goto LAB_07d7f538;
                                    lVar24 = lVar24 + (long)(int)uVar32 * 0x178;
                                    uVar38 = *(undefined8 *)(param_2 + 0x348);
                                    *(undefined8 *)(lVar24 + 0x14c) = uVar38;
                                    fVar51 = *(float *)(param_2 + 0x2e8);
                                    fVar49 = (float)((ulong)uVar38 >> 0x20) - fVar51;
                                    uVar28 = (ulong)(uint)fVar49;
                                    *(float *)(lVar24 + 0x140) = (float)uVar38 - fVar51;
                                    *(float *)(lVar24 + 0x148) = fVar49;
                                    *(float *)(param_2 + 900) = fVar49;
                                  }
                                  if ((fVar51 == 0.0) &&
                                     (((bVar16 & 1) == 0 ||
                                      (*(int *)(param_2 + 0x334) == *(int *)(param_2 + 0x338))))) {
                                    fVar49 = *(float *)(param_2 + 0x19d0);
                                    if (*(float *)(param_2 + 0x19d0) <= fVar61) {
                                      fVar49 = fVar61;
                                    }
                                    *(float *)(param_2 + 0x19d0) = fVar49;
                                  }
                                  if (((((uVar19 == 9) || (uVar19 == 0x200b)) ||
                                       (((uVar4 & 0xfffffffe) == 2 & bVar16) != 0)) ||
                                      ((((bVar16 & 1) == 0 && (uVar19 != 3)) &&
                                       ((uVar19 != 0x200b && (uVar19 != 0xad)))))) ||
                                     ((!bVar12 && bVar7 == 0 || (*pcVar2 == '\x02')))) {
                                    fVar61 = (param_1 - *(float *)(param_2 + 0x360)) -
                                             *(float *)(param_2 + 0x364);
                                    fVar49 = *(float *)(param_2 + 0x368);
                                    bVar14 = true;
                                    if ((fVar49 <= fVar61) && (bVar14 = false, !NAN(fVar49))) {
                                      bVar14 = fVar49 == -1.0;
                                    }
                                    fVar58 = *(float *)(param_2 + 0x300);
                                    if (!bVar14) {
                                      fVar61 = fVar49;
                                    }
                                    fVar51 = (float)FUN_07d53598(&local_bf0,0);
                                    fVar49 = fVar57;
                                    if (!bVar12) {
                                      fVar49 = fVar42;
                                    }
                                    uVar28 = (ulong)(uint)fVar49;
                                    fVar42 = ABS(fVar58) +
                                             fVar51 * (1.0 - *(float *)(param_2 + 0x15a4)) * fVar49;
                                    if (*(char *)(param_2 + 0xf4) != '\0') {
                                      fVar42 = (float)(int)(fVar42 + fVar8);
                                    }
                                    if (((((bVar17 & fVar61 < fVar42) != 1) || (uVar4 == 0)) ||
                                        (uVar4 == 3)) ||
                                       (*(int *)(param_2 + 0x334) == *(int *)(param_2 + 0x338))) {
                                      uVar28 = (ulong)(uint)*(float *)(param_2 + 900);
                                      fVar42 = fVar42 + *(float *)(param_2 + 0x360) +
                                               *(float *)(param_2 + 0x364);
                                      fVar61 = *(float *)(param_2 + 0x380) -
                                               *(float *)(param_2 + 900);
                                      if (fVar63 <= fVar42) {
                                        fVar63 = fVar42;
                                      }
                                      fVar51 = *(float *)(param_2 + 0x2e8);
                                      if (local_f14 <= fVar61) {
                                        local_f14 = fVar61;
                                      }
                                      goto LAB_07d7e59c;
                                    }
                                    uVar21 = FUN_07d79b5c(param_2,auStack_440,param_6);
                                    lVar24 = *(long *)(param_2 + 0x1a38);
                                    if (lVar24 == 0) goto LAB_07d7f534;
                                    uVar19 = *(uint *)(param_2 + 0x334);
                                    uVar22 = uVar19 - 1;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar22) goto LAB_07d7f538;
                                    if ((*(int *)(lVar24 + 0x20 + (long)(int)uVar22 * 0x178) != 0xad
                                         || bVar7 != 0) || (*(int *)(param_5 + 100) != 0)) {
                                      if (*(uint *)(lVar24 + 0x18) <= uVar19) goto LAB_07d7f538;
                                      if (*(int *)(lVar24 + 0x20 + (long)(int)uVar19 * 0x178) ==
                                          0xad) {
                                        bVar7 = 1;
                                        fVar42 = fVar57;
                                        goto LAB_07d7cfcc;
                                      }
                                      if ((bVar15 & param_4) != 0) {
                                        fVar47 = *(float *)(param_2 + 0x15a4);
                                        if ((fVar47 < 0.0) &&
                                           (*(int *)(param_2 + 0x15b0) < *(int *)(param_2 + 0x15b4))
                                           ) {
                                          fVar43 = fVar42;
                                          if (0.0 < fVar47) {
                                            fVar43 = fVar42 / (1.0 - fVar47);
                                          }
                                          uVar53 = NEON_fminnm(fVar47 + (fVar42 - (fVar61 + 
                                                  DAT_015c59d4)) / fVar43,0);
                                          *(undefined4 *)(param_2 + 0x15a4) = uVar53;
LAB_07d7f32c:
                                          fVar42 = (float)FUN_03de75a0(0);
                                          return fVar42;
                                        }
                                        if ((0.0 < *param_3) &&
                                           (*(int *)(param_2 + 0x15b0) < *(int *)(param_2 + 0x15b4))
                                           ) {
                                          *(float *)(param_2 + 0x15a8) = *param_3;
                                          fVar42 = (*param_3 - *(float *)(param_2 + 0x15ac)) * 0.5;
                                          if (fVar42 <= DAT_015c5990) {
                                            fVar42 = DAT_015c5990;
                                          }
                                          fVar61 = (*param_3 - fVar42) * 20.0 + 0.5;
                                          fVar42 = DAT_015c5ae4;
                                          if (fVar61 != INFINITY) {
                                            fVar42 = (float)(int)fVar61 / 20.0;
                                          }
                                          if (fVar42 <= 0.0) {
                                            fVar42 = 0.0;
                                          }
                                          *param_3 = fVar42;
                                        }
                                      }
                                      fVar42 = *(float *)(param_2 + 0x2e8);
                                      if (0.0 < fVar42) {
                                        fVar61 = *(float *)(param_2 + 0x348);
                                        fVar42 = *(float *)(param_2 + 0x15b8);
                                        if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
                                          thunk_FUN_03ae8be4();
                                        }
                                        fVar61 = fVar61 - fVar42;
                                        if (ABS(fVar61) <= fVar46) {
                                          fVar42 = *(float *)(param_2 + 0x2e8);
                                        }
                                        else {
                                          fVar42 = *(float *)(param_2 + 0x2e8);
                                          if (*(char *)(param_2 + 0x2f0) == '\0') {
                                            fVar42 = fVar61 + fVar42;
                                            *(float *)(param_2 + 900) =
                                                 *(float *)(param_2 + 900) - fVar61;
                                            if (*(char *)(param_2 + 0xf4) != '\0') {
                                              fVar42 = (float)(int)(fVar42 + fVar8);
                                            }
                                            *(float *)(param_2 + 0x2e8) = fVar42;
                                          }
                                        }
                                      }
                                      fVar42 = *(float *)(param_2 + 0x34c) - fVar42;
                                      *(int *)(param_2 + 0x338) = *(int *)(param_2 + 0x334);
                                      *(undefined4 *)(param_2 + 0x354) = 0;
                                      fVar61 = *(float *)(param_2 + 900);
                                      if (fVar42 <= *(float *)(param_2 + 900)) {
                                        fVar61 = fVar42;
                                      }
                                      *(float *)(param_2 + 900) = fVar61;
                                      FUN_07d79804(param_2,auStack_7d8,uVar21,
                                                   *(int *)(param_2 + 0x334) + -1,param_6);
                                      lVar24 = *(long *)(param_2 + 0x1a38);
                                      *(int *)(param_2 + 0x350) = *(int *)(param_2 + 0x350) + 1;
                                      if (lVar24 != 0) {
                                        if (*(uint *)(param_2 + 0x334) < *(uint *)(lVar24 + 0x18)) {
                                          fVar47 = *(float *)(param_2 + 0x2ec);
                                          fVar42 = *(float *)(param_2 + 0x2e8);
                                          fVar61 = *(float *)(lVar24 + (long)(int)*(uint *)(param_2 
                                                  + 0x334) * 0x178 + 0x14c);
                                          if (fVar47 != DAT_015c55ac) {
                                            fVar49 = fVar62 * 0.0 + fVar47;
                                          }
                                          else {
                                            fVar49 = fVar42;
                                            fVar42 = fVar62 * 0.0 +
                                                     fVar61 + (0.0 - *(float *)(param_2 + 0x34c)) +
                                                     fVar43 * (fVar44 + *(float *)(param_2 + 0x15bc)
                                                              );
                                          }
                                          *(bool *)(param_2 + 0x2f0) = fVar47 != DAT_015c55ac;
                                          fVar47 = *(float *)(param_2 + 0x308) + 0.0;
                                          bVar7 = 0;
                                          *(float *)(param_2 + 0x15b8) = fVar61;
                                          bVar15 = 1;
                                          fVar61 = (float)(int)(fVar49 + fVar42 + fVar8);
                                          uVar27 = (ulong)(uint)fVar61;
                                          fVar42 = fVar49 + fVar42;
                                          if (*(char *)(param_2 + 0xf4) != '\0') {
                                            fVar47 = (float)(int)(fVar47 + fVar8);
                                            fVar42 = fVar61;
                                          }
                                          *(float *)(param_2 + 0x2e8) = fVar42;
                                          *(ulong *)(param_2 + 0x348) = uVar23;
                                          goto LAB_07d7ebf4;
                                        }
                                        goto LAB_07d7f538;
                                      }
                                      goto LAB_07d7f534;
                                    }
                                    bVar7 = 0;
                                    local_a8 = CONCAT44(0x2d,uVar22);
                                    *(uint *)(param_2 + 0x334) = uVar22;
                                    uVar21 = uVar21 - 1;
                                    fVar42 = fVar57;
                                  }
                                  else {
LAB_07d7e59c:
                                    if (0.0 < fVar51) {
                                      uVar53 = *(undefined4 *)(param_2 + 0x348);
                                      uVar60 = *(undefined4 *)(param_2 + 0x15b8);
                                      if (*(int *)(*(long *)
                                                  UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo
                                                  + 0xe4) == 0) {
                                        thunk_FUN_03ae8be4();
                                      }
                                      uVar25 = FUN_07d8ca34(uVar53,uVar60,0);
                                      if (((uVar25 & 1) == 0) &&
                                         (*(char *)(param_2 + 0x2f0) == '\0')) {
                                        fVar42 = *(float *)(param_2 + 0x348) -
                                                 *(float *)(param_2 + 0x15b8);
                                        local_3cc = fVar42 + *(float *)(param_2 + 0x2e8);
                                        uVar28 = (ulong)(uint)local_3cc;
                                        local_400 = *(float *)(param_2 + 0x15b8) + fVar42;
                                        *(float *)(param_2 + 900) =
                                             *(float *)(param_2 + 900) - fVar42;
                                        *(float *)(param_2 + 0x15b8) = local_400;
                                        uVar27 = (ulong)(uint)(int)(local_3cc + fVar8);
                                        if (*(char *)(param_2 + 0xf4) != '\0') {
                                          local_3cc = (float)(int)(local_3cc + fVar8);
                                        }
                                        *(float *)(param_2 + 0x2e8) = local_3cc;
                                      }
                                    }
                                    if (uVar19 == 0x200b) {
                                      bVar14 = false;
LAB_07d7e910:
                                      if (*(int *)(param_2 + 0x334) == iVar1) goto LAB_07d7e920;
                                    }
                                    else {
                                      if (uVar19 == 9) {
                                        if (*plVar41 != 0) {
                                          FUN_07d60d20(&local_d40,*plVar41,0);
                                          memcpy(&local_bd0,&local_d40,0x60);
                                          fVar42 = (float)FUN_07d53334(&local_bd0,0);
                                          if (*plVar41 != 0) {
                                            bVar17 = FUN_07d617d8(*plVar41,0);
                                            fVar47 = *(float *)(param_2 + 0x300);
                                            cVar31 = *(char *)(param_2 + 0xf4);
                                            fVar61 = fVar57 * fVar42 * (float)bVar17;
                                            fVar42 = fVar61 * (float)(int)(fVar47 / fVar61);
                                            uVar28 = (ulong)(uint)fVar42;
                                            if (fVar42 <= fVar47) {
                                              fVar42 = fVar47 + fVar61;
                                            }
LAB_07d7e8f8:
                                            bVar14 = false;
                                            if (cVar31 != '\0') {
                                              fVar42 = (float)(int)(fVar42 + fVar8);
                                            }
                                            *(float *)(param_2 + 0x300) = fVar42;
                                            goto LAB_07d7e910;
                                          }
                                        }
                                        goto LAB_07d7f534;
                                      }
                                      fVar42 = *(float *)(param_2 + 0x2f8);
                                      if (fVar42 == 0.0) {
                                        fVar61 = *(float *)(param_2 + 0x300);
                                        fVar42 = (float)FUN_07d53598(&local_bf0,0);
                                        fVar50 = *(float *)(param_2 + 0x19b0);
                                        fVar49 = (float)FUN_07d57ad0(&local_c00,0);
                                        if (*(long *)(param_2 + 0x68) == 0) goto LAB_07d7f534;
                                        fVar58 = (float)FUN_07d61798(*(long *)(param_2 + 0x68),0);
                                        cVar31 = *(char *)(param_2 + 0xf4);
                                        uVar28 = (ulong)(uint)*(float *)(param_2 + 0x15a4);
                                        fVar61 = fVar61 + (1.0 - *(float *)(param_2 + 0x15a4)) *
                                                          (*(float *)(param_2 + 0x2f4) +
                                                          fVar57 * (fVar42 * fVar50 + fVar49) +
                                                          fVar62 * (fVar48 + fVar47 + fVar58));
                                        if (cVar31 != '\0') {
                                          fVar61 = (float)(int)(fVar61 + fVar8);
                                        }
                                        *(float *)(param_2 + 0x300) = fVar61;
                                        if ((bVar16 & 1) != 0) {
                                          fVar42 = *(float *)(param_5 + 0x90);
                                          goto LAB_07d7e840;
                                        }
                                      }
                                      else {
                                        if (((*(char *)(param_2 + 0x2fc) != '\0') && (uVar19 < 0x3b)
                                            ) && ((1L << ((ulong)uVar19 & 0x3f) & 0x400500000000000U
                                                  ) != 0)) {
                                          fVar42 = fVar42 * 0.5;
                                        }
                                        if (*plVar41 == 0) goto LAB_07d7f534;
                                        fVar61 = *(float *)(param_2 + 0x300);
                                        fVar49 = (float)FUN_07d61798(*plVar41,0);
                                        uVar28 = (ulong)(uint)*(float *)(param_2 + 0x15a4);
                                        cVar31 = *(char *)(param_2 + 0xf4);
                                        fVar61 = fVar61 + (1.0 - *(float *)(param_2 + 0x15a4)) *
                                                          (*(float *)(param_2 + 0x2f4) +
                                                          (fVar42 - fVar50) +
                                                          fVar62 * (fVar47 + fVar49));
                                        if (cVar31 != '\0') {
                                          fVar61 = (float)(int)(fVar61 + fVar8);
                                        }
                                        *(float *)(param_2 + 0x300) = fVar61;
                                        if ((bVar16 & 1) != 0) {
                                          fVar42 = *(float *)(param_5 + 0x90);
LAB_07d7e840:
                                          fVar61 = fVar61 + fVar62 * fVar42;
                                          if (cVar31 != '\0') {
                                            fVar61 = (float)(int)(fVar61 + fVar8);
                                          }
                                          *(float *)(param_2 + 0x300) = fVar61;
                                        }
                                      }
                                      if (uVar19 == 0xd) {
                                        fVar42 = *(float *)(param_2 + 0x308) + 0.0;
                                        goto LAB_07d7e8f8;
                                      }
                                      bVar14 = uVar19 == 10;
                                      if (((0xb < uVar19) ||
                                          ((1 << (ulong)(uVar19 & 0x1f) & 0xc08U) == 0)) &&
                                         (1 < uVar19 - 0x2028)) goto LAB_07d7e910;
LAB_07d7e920:
                                      fVar42 = *(float *)(param_2 + 0x2e8);
                                      if (0.0 < fVar42) {
                                        fVar61 = *(float *)(param_2 + 0x348);
                                        fVar42 = *(float *)(param_2 + 0x15b8);
                                        if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
                                          thunk_FUN_03ae8be4();
                                        }
                                        fVar61 = fVar61 - fVar42;
                                        uVar28 = (ulong)(uint)fVar46;
                                        if (ABS(fVar61) <= fVar46) {
                                          fVar42 = *(float *)(param_2 + 0x2e8);
                                        }
                                        else {
                                          fVar42 = *(float *)(param_2 + 0x2e8);
                                          if (*(char *)(param_2 + 0x2f0) == '\0') {
                                            uVar27 = (ulong)(uint)*(float *)(param_2 + 900);
                                            *(float *)(param_2 + 900) =
                                                 *(float *)(param_2 + 900) - fVar61;
                                            fVar47 = (float)(int)(fVar61 + fVar42 + fVar8);
                                            uVar28 = (ulong)(uint)fVar47;
                                            fVar42 = fVar61 + fVar42;
                                            if (*(char *)(param_2 + 0xf4) != '\0') {
                                              fVar42 = fVar47;
                                            }
                                            *(float *)(param_2 + 0x2e8) = fVar42;
                                          }
                                        }
                                      }
                                      fVar42 = *(float *)(param_2 + 0x34c) - fVar42;
                                      fVar61 = *(float *)(param_2 + 900);
                                      if (fVar42 <= *(float *)(param_2 + 900)) {
                                        fVar61 = fVar42;
                                      }
                                      *(float *)(param_2 + 900) = fVar61;
                                      if (((bVar14) || (uVar19 - 0x2028 < 2)) ||
                                         ((uVar19 == 0x2d || (uVar19 == 0xb)))) {
                                        FUN_07d79804(param_2,auStack_7d8,uVar21,
                                                     *(undefined4 *)(param_2 + 0x334),param_6);
                                        FUN_07d79804(param_2,auStack_440,uVar21,
                                                     *(undefined4 *)(param_2 + 0x334),param_6);
                                        uVar22 = *(uint *)(param_2 + 0x334);
                                        lVar24 = *(long *)(param_2 + 0x1a38);
                                        *(int *)(param_2 + 0x350) = *(int *)(param_2 + 0x350) + 1;
                                        *(uint *)(param_2 + 0x338) = uVar22 + 1;
                                        if (lVar24 != 0) {
                                          if (uVar22 < *(uint *)(lVar24 + 0x18)) {
                                            fVar42 = *(float *)(lVar24 + (long)(int)uVar22 * 0x178 +
                                                               0x14c);
                                            if (*(float *)(param_2 + 0x2ec) == DAT_015c55ac) {
                                              fVar61 = 0.0;
                                              if (uVar19 == 0x2029) {
                                                bVar14 = true;
                                              }
                                              if (bVar14) {
                                                fVar61 = *(float *)(param_5 + 0x94);
                                              }
                                              uVar34 = 0;
                                              fVar61 = fVar42 + (0.0 - *(float *)(param_2 + 0x34c))
                                                       + fVar43 * (fVar44 + *(float *)(param_2 +
                                                                                      0x15bc)) +
                                                       fVar62 * (fVar61 + 0.0);
                                            }
                                            else {
                                              fVar61 = 0.0;
                                              if (uVar19 == 0x2029) {
                                                bVar14 = true;
                                              }
                                              if (bVar14) {
                                                fVar61 = *(float *)(param_5 + 0x94);
                                              }
                                              uVar34 = 1;
                                              fVar61 = *(float *)(param_2 + 0x2ec) +
                                                       fVar62 * (fVar61 + 0.0);
                                            }
                                            fVar61 = *(float *)(param_2 + 0x2e8) + fVar61;
                                            *(undefined1 *)(param_2 + 0x2f0) = uVar34;
                                            *(float *)(param_2 + 0x15b8) = fVar42;
                                            bVar12 = *(char *)(param_2 + 0xf4) != '\0';
                                            *(uint *)(param_2 + 0x334) = uVar22 + 1;
                                            fVar47 = *(float *)(param_2 + 0x304) + 0.0 +
                                                     *(float *)(param_2 + 0x308);
                                            if (bVar12) {
                                              fVar61 = (float)(int)(fVar61 + fVar8);
                                            }
                                            *(ulong *)(param_2 + 0x348) = uVar23;
                                            if (bVar12) {
                                              fVar47 = (float)(int)(fVar47 + fVar8);
                                            }
                                            *(float *)(param_2 + 0x2e8) = fVar61;
                                            uVar27 = uVar23;
LAB_07d7ebf4:
                                            uVar28 = (ulong)(uint)fVar47;
                                            *(float *)(param_2 + 0x300) = fVar47;
                                            fVar42 = fVar57;
                                            goto LAB_07d7cfcc;
                                          }
                                          goto LAB_07d7f538;
                                        }
                                        goto LAB_07d7f534;
                                      }
                                      if (!bVar13) {
                                        if (*(long *)(param_2 + 0x20) == 0) goto LAB_07d7f534;
                                        uVar21 = *(uint *)(*(long *)(param_2 + 0x20) + 0x18);
                                      }
                                    }
                                    if (((uVar4 != 3) && (uVar4 != 0)) ||
                                       ((*(uint *)(param_5 + 100) | 2) == 3)) {
                                      if ((((bVar16 & 1) == 0) && (uVar19 != 0x2d)) &&
                                         ((uVar19 != 0x200b && (uVar19 != 0xad)))) {
                                        if (*(char *)(param_2 + 0x388) == '\0') goto LAB_07d7eca8;
LAB_07d7e9d4:
                                        if (bVar15 == 0) {
                                          bVar15 = 0;
                                        }
                                        else {
                                          bVar17 = uVar19 != 0xa0 & bVar16;
                                          if (!bVar12 && (bVar16 & 1) == 0) {
                                            bVar17 = ~bVar7;
                                          }
                                          FUN_07d79804(param_2,auStack_440,uVar21,
                                                       *(undefined4 *)(param_2 + 0x334),param_6);
                                          bVar15 = 1;
                                          if ((bVar17 & 1) != 0) {
LAB_07d7f120:
                                            puVar30 = local_b70;
                                            goto LAB_07d7f124;
                                          }
                                        }
                                      }
                                      else {
                                        if (*(char *)(param_2 + 0x388) != '\0') goto LAB_07d7e9d4;
                                        if (0x2006 < (int)uVar19) {
                                          if (((0x28 < uVar19 - 0x2007) ||
                                              ((1L << ((ulong)(uVar19 - 0x2007) & 0x3f) &
                                               0x10000000401U) == 0)) && (uVar19 != 0x2060))
                                          goto LAB_07d7f0cc;
LAB_07d7eca8:
                                          if (*(int *)(*(long *)
                                                  UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo
                                                  + 0xe4) == 0) {
                                            thunk_FUN_03ae8be4();
                                          }
                                          uVar25 = FUN_07d90128(uVar19,0);
                                          if ((uVar25 & 1) == 0) {
LAB_07d7ecec:
                                            if (*(int *)(*(long *)
                                                  UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo
                                                  + 0xe4) == 0) {
                                              thunk_FUN_03ae8be4();
                                            }
                                            uVar25 = FUN_07d901bc(uVar19,0);
                                            if ((uVar25 & 1) == 0) {
                                              if ((*(char *)(param_2 + 0x388) != '\0') ||
                                                 (uVar22 = *(int *)(param_2 + 0x334) + 1,
                                                 iVar3 <= (int)uVar22)) goto LAB_07d7e9d4;
                                              lVar24 = *(long *)(param_6 + 0x30);
                                              if (lVar24 != 0) {
                                                if (*(uint *)(lVar24 + 0x18) <= uVar22)
                                                goto LAB_07d7f538;
                                                uVar53 = *(undefined4 *)
                                                          (lVar24 + (long)(int)uVar22 * 0x178 + 0x20
                                                          );
                                                if (*(int *)(*(long *)
                                                  UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo
                                                  + 0xe4) == 0) {
                                                  thunk_FUN_03ae8be4();
                                                }
                                                uVar25 = FUN_07d901bc(uVar53,0);
                                                if ((uVar25 & 1) == 0) goto LAB_07d7e9d4;
                                                lVar24 = *(long *)(param_6 + 0x30);
                                                if (lVar24 != 0) {
                                                  uVar22 = *(int *)(param_2 + 0x334) + 1;
                                                  if (*(uint *)(lVar24 + 0x18) <= uVar22)
                                                  goto LAB_07d7f538;
                                                  if (lVar35 != 0) {
                                                    uVar53 = *(undefined4 *)
                                                              (lVar24 + (long)(int)uVar22 * 0x178 +
                                                              0x20);
                                                    lVar24 = FUN_07d86e90(lVar35,0);
                                                    if ((lVar24 != 0) &&
                                                       (lVar24 = FUN_07d98b58(lVar24,0), lVar24 != 0
                                                       )) {
                                                      uVar19 = FUN_049ddf40(lVar24,uVar19,
                                                                            *(undefined8 *)
                                                                             PTR_DAT_084b5110);
                                                      lVar24 = FUN_07d86e90(lVar35,0);
                                                      if ((lVar24 != 0) &&
                                                         (lVar24 = FUN_07d98b58(lVar24,0),
                                                         lVar24 != 0)) {
                                                        uVar22 = FUN_049ddf40(lVar24,uVar53,
                                                                              *(undefined8 *)
                                                                               PTR_DAT_084b5110);
                                                        if (((uVar19 | uVar22) & 1) != 0)
                                                        goto LAB_07d7f138;
                                                        puVar30 = auStack_440;
                                                        goto LAB_07d7f124;
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            else if (lVar35 != 0) goto LAB_07d7ed1c;
                                            goto LAB_07d7f534;
                                          }
                                          if ((lVar35 == 0) ||
                                             (lVar24 = FUN_07d86e90(lVar35,0), lVar24 == 0))
                                          goto LAB_07d7f534;
                                          if (*(char *)(lVar24 + 0x28) != '\0') goto LAB_07d7ecec;
LAB_07d7ed1c:
                                          lVar24 = FUN_07d86e90(lVar35,0);
                                          if ((lVar24 == 0) ||
                                             (lVar24 = FUN_07d98b58(lVar24,0), lVar24 == 0))
                                          goto LAB_07d7f534;
                                          uVar25 = FUN_049ddf40(lVar24,uVar19,
                                                                *(undefined8 *)PTR_DAT_084b5110);
                                          if (*(int *)(param_2 + 0x334) < iVar1) {
                                            lVar24 = FUN_07d86e90(lVar35,0);
                                            if (lVar24 == 0) goto LAB_07d7f534;
                                            lVar24 = FUN_07d98b58(lVar24,0);
                                            lVar36 = *(long *)(param_2 + 0x1a38);
                                            if (lVar36 == 0) goto LAB_07d7f534;
                                            uVar19 = *(int *)(param_2 + 0x334) + 1;
                                            if (*(uint *)(lVar36 + 0x18) <= uVar19)
                                            goto LAB_07d7f538;
                                            if (lVar24 == 0) goto LAB_07d7f534;
                                            bVar17 = FUN_049ddf40(lVar24,*(undefined4 *)
                                                                          (lVar36 + (long)(int)
                                                  uVar19 * 0x178 + 0x20),
                                                  *(undefined8 *)PTR_DAT_084b5110);
                                          }
                                          else {
                                            bVar17 = 0;
                                          }
                                          if ((uVar25 & 1) == 0) {
                                            bVar15 = bVar17 & bVar15;
                                            bVar16 = bVar16 & bVar15;
                                            if ((bVar15 != 0) || (((bVar17 ^ 1) & 1) != 0))
                                            goto LAB_07d7f100;
                                            bVar15 = 0;
                                          }
                                          else {
                                            if (uVar32 != uVar22 || ((bVar15 ^ 0xff) & 1) != 0)
                                            goto LAB_07d7f138;
                                            bVar15 = 1;
LAB_07d7f100:
                                            FUN_07d79804(param_2,auStack_440,uVar21,
                                                         *(undefined4 *)(param_2 + 0x334),param_6);
                                          }
                                          if ((bVar16 & 1) == 0) goto LAB_07d7f138;
                                          goto LAB_07d7f120;
                                        }
                                        if (uVar19 == 0x2d) {
                                          uVar19 = *(int *)(param_2 + 0x334) - 1;
                                          if (0 < *(int *)(param_2 + 0x334)) {
                                            lVar24 = *(long *)(param_6 + 0x30);
                                            if (lVar24 == 0) goto LAB_07d7f534;
                                            if (*(uint *)(lVar24 + 0x18) <= uVar19)
                                            goto LAB_07d7f538;
                                            uVar53 = *(undefined4 *)
                                                      (lVar24 + (ulong)uVar19 * 0x178 + 0x20);
                                            if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4)
                                                == 0) {
                                              thunk_FUN_03ae8be4();
                                            }
                                            uVar25 = FUN_066b9610(uVar53,0);
                                            if ((uVar25 & 1) != 0) goto LAB_07d7f138;
                                          }
                                        }
                                        else if (uVar19 == 0xa0) goto LAB_07d7eca8;
LAB_07d7f0cc:
                                        bVar15 = 0;
                                        puVar30 = auStack_440;
                                        local_b70[0] = 0xffffffff;
LAB_07d7f124:
                                        FUN_07d79804(param_2,puVar30,uVar21,
                                                     *(undefined4 *)(param_2 + 0x334),param_6);
                                      }
                                    }
LAB_07d7f138:
                                    *(int *)(param_2 + 0x334) = *(int *)(param_2 + 0x334) + 1;
                                    fVar42 = fVar57;
                                  }
LAB_07d7cfcc:
                                  lVar24 = *(long *)(param_2 + 0x20);
                                  uVar21 = uVar21 + 1;
                                  if (lVar24 == 0) goto LAB_07d7f534;
                                }
                                if ((((DAT_015c5b18 <
                                       *(float *)(param_2 + 0x15a8) - *(float *)(param_2 + 0x15ac))
                                     && ((param_4 & 1) != 0)) && (fVar42 = *param_3, fVar42 < 0.0))
                                   && (*(int *)(param_2 + 0x15b0) < *(int *)(param_2 + 0x15b4))) {
                                  if (*(float *)(param_2 + 0x15a4) < 0.0) {
                                    *(undefined4 *)(param_2 + 0x15a4) = 0;
                                    fVar42 = *param_3;
                                  }
                                  *(float *)(param_2 + 0x15ac) = fVar42;
                                  fVar42 = (*(float *)(param_2 + 0x15a8) - *param_3) * 0.5;
                                  if (fVar42 <= DAT_015c5990) {
                                    fVar42 = DAT_015c5990;
                                  }
                                  fVar61 = (*param_3 + fVar42) * 20.0 + 0.5;
                                  fVar42 = DAT_015c5ae4;
                                  if (fVar61 != INFINITY) {
                                    fVar42 = (float)(int)fVar61 / 20.0;
                                  }
                                  fVar42 = (float)NEON_fminnm(fVar42,0);
                                  *param_3 = fVar42;
                                  goto LAB_07d7f32c;
                                }
                                *(undefined1 *)(param_2 + 0x19f0) = 0;
                                if (*(char *)(param_2 + 0xf4) == '\0') {
                                  if (fVar63 == 0.0) {
                                    return fVar63;
                                  }
                                  fVar42 = fVar63 * 100.0 + 1.0;
                                  if (fVar42 == INFINITY) {
                                    return DAT_015c5640;
                                  }
                                  return (float)(int)fVar42 / 100.0;
                                }
                                dVar52 = modf((double)fVar63,&local_d40);
                                puVar9 = PTR_DAT_08486be8;
                                if (0.0 <= fVar63) {
                                  if (dVar52 == 0.5) {
                                    fVar42 = 1.0;
                                    goto LAB_07d7f424;
                                  }
                                  fVar61 = (float)(int)(fVar63 + 0.5);
                                }
                                else if (dVar52 == -0.5) {
                                  fVar42 = -1.0;
LAB_07d7f424:
                                  fVar61 = (float)local_d40;
                                  if (((long)local_d40 & 1U) != 0) {
                                    fVar61 = (float)local_d40 + fVar42;
                                  }
                                }
                                else {
                                  fVar61 = (float)(int)(fVar63 + -0.5);
                                }
                                plVar41 = (long *)FUN_03a8a804(*(undefined8 *)PTR_DAT_08486858,1);
                                local_d40 = (double)CONCAT44(local_d40._4_4_,fVar63);
                                lVar24 = thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x78)
                                                            ,&local_d40);
                                if (plVar41 != (long *)0x0) {
                                  if ((lVar24 != 0) &&
                                     (lVar35 = thunk_FUN_03ac73c0(lVar24,*(undefined8 *)
                                                                          (*plVar41 + 0x40)),
                                     lVar35 == 0)) {
                                    uVar38 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
                                    FUN_03a8a884(uVar38,0);
                                  }
                                  if ((int)plVar41[3] != 0) {
                                    plVar41[4] = lVar24;
                                    thunk_FUN_03afed3c(plVar41 + 4,lVar24);
                                    if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                                      thunk_FUN_03ae8be4();
                                    }
                                    FUN_07c5052c(fVar63 == fVar61,
                                                 *(undefined8 *)
                                                  RootMotion_FinalIK_Grounding_OnCapsuleCastDelegate_TypeInfo
                                                 ,plVar41,0);
                                    return fVar63;
                                  }
                                  goto LAB_07d7f538;
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
          goto LAB_07d7f534;
        }
      }
      goto LAB_07d7c830;
    }
  }
  puVar10 = 
  UnityEngine_Rendering_GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB_PostfixBurstDelegate_TypeInfo
  ;
  if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07c4adbc(*(undefined8 *)puVar10,0);
LAB_07d7c830:
  if (DAT_0897502c == '\0') {
    FUN_03a8a718(PTR_DAT_08488168);
    DAT_0897502c = '\x01';
  }
  return **(float **)(*(long *)PTR_DAT_08488168 + 0xb8);
}


