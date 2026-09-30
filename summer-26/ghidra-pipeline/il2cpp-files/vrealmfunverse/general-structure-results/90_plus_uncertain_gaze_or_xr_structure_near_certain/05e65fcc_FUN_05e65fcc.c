/*
FUNCTION_NAME: FUN_05e65fcc
ENTRY_POINT: 05e65fcc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 126
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_20;weak_xr_or_state_hits_21;validity_or_gating_hits_21;telemetry_or_network_hits_8;functionality_permission_setup;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_8
*/


void FUN_05e65fcc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong uVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  int local_1b8;
  int local_1b4;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  local_68 = param_2;
  if ((DAT_066dc663 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(Method_OVRSpaceQuery_Options_ToQueryInfo2__);
    FUN_02b3c81c(Method_OVRSpaceQuery_Options_ValidateSingleFilter__);
    FUN_02b3c81c(Method_OVRSpaceQuery_Options_set_UuidFilter__);
    FUN_02b3c81c(PTR_DAT_06312c90);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_89__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_144__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_145__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_147__);
    FUN_02b3c81c(Method_OVRSceneManager_<>c__DisplayClass50_0_<DoesRoomSetupExist>b__0__);
    FUN_02b3c81c(Method_OVRSceneManager_<>c__DisplayClass53_0_<CheckClassificationsInRooms>b__0__);
    FUN_02b3c81c(Method_OVRSpatialAnchor_<>c_<GetListToStoreTheShareRequest>b__33_0__);
    FUN_02b3c81c(
                Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_<GetSerializableMembers>b__40_1__
                );
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_129__);
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass36_0_<AddInstanceOcclusionPassDataRow>b__8__
                );
    FUN_02b3c81c(Method_OVRSceneModelLoader_<>c__DisplayClass9_0_<RequestScenePermissionAsync>b__1__
                );
    FUN_02b3c81c(Method_OVRSceneModelLoader_<>c__DisplayClass9_0_<RequestScenePermissionAsync>b__2__
                );
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__1__
                );
    DAT_066dc663 = 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  local_f0._0_8_ = 0;
  local_f0._8_8_ = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  local_100._0_8_ = 0;
  local_100._8_8_ = 0;
  local_110._0_8_ = 0;
  local_110._8_8_ = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  if (param_3[9] == 0) {
    if (param_3[0x11] == 0) {
      FUN_05f42e54(&local_160,param_3,0);
    }
    else {
      FUN_05f42f00(&local_160,param_3,0);
    }
    uVar16 = local_150;
    uVar19 = uStack_158;
    iVar9 = local_150._4_4_;
    if ((int)local_150 == 0) {
      return;
    }
    if (local_150._4_4_ == 0) {
      return;
    }
    uVar18 = FUN_04dc6850(local_160,0);
    if (*(int *)(*(long *)
                  Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__1__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)
                          Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__1__
                        );
    }
    local_100 = FUN_033c0138(uVar18,uVar16 & 0xffffffff,
                             *(undefined8 *)
                              Method_OVRSceneModelLoader_<>c__DisplayClass9_0_<RequestScenePermissionAsync>b__2__
                            );
    uVar19 = FUN_04dc6850(uVar19,0);
    local_110 = FUN_033c00f4(uVar19,iVar9,
                             *(undefined8 *)
                              Method_OVRSceneModelLoader_<>c__DisplayClass9_0_<RequestScenePermissionAsync>b__1__
                            );
    iVar9 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                      (local_100,
                       *(undefined8 *)
                        Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_<GetSerializableMembers>b__40_1__
                      );
    puVar2 = Method_OVRPlugin_<>c_<_cctor>b__810_129__;
    if (iVar9 == 0) {
      return;
    }
    iVar9 = FUN_03ac7100(local_110,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_129__);
    puVar3 = 
    Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_<GetSerializableMembers>b__40_1__
    ;
    if (iVar9 == 0) {
      return;
    }
    uVar7 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                      (local_100,
                       *(undefined8 *)
                        Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_<GetSerializableMembers>b__40_1__
                      );
    uVar15 = FUN_03ac7100(local_110,*(undefined8 *)puVar2);
    FUN_05f4f5c0(param_1,uVar7,uVar15,&local_120,&local_130,0);
    iVar9 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                      (&local_120,*(undefined8 *)puVar3);
    iVar14 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                       (local_100,*(undefined8 *)puVar3);
    if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312d90);
    }
    FUN_05c45700(iVar9 == iVar14,0);
    iVar9 = FUN_03ac7100(&local_130,*(undefined8 *)puVar2);
    iVar14 = FUN_03ac7100(local_110,*(undefined8 *)puVar2);
    FUN_05c45700(iVar9 == iVar14,0);
    FUN_03ac75a4(&local_120,local_100._0_8_,local_100._8_8_,
                 *(undefined8 *)
                  Method_OVRSceneManager_<>c__DisplayClass50_0_<DoesRoomSetupExist>b__0__);
    FUN_03ac6ff8(&local_130,local_110._0_8_,local_110._8_8_,
                 *(undefined8 *)
                  Method_OVRSceneManager_<>c__DisplayClass53_0_<CheckClassificationsInRooms>b__0__);
    auVar23._8_8_ = uStack_128;
    auVar23._0_8_ = local_130;
    auVar24._8_8_ = uStack_118;
    auVar24._0_8_ = local_120;
    goto LAB_05e668c8;
  }
  uVar16 = FUN_04ca604c(param_3[9],0);
  if (uVar16 == 0) {
    thunk_FUN_02ba3594(PTR_DAT_0631cb60);
    uVar19 = thunk_FUN_02b79644();
    uVar18 = thunk_FUN_02ba3594(PTR_DAT_0632d4c8);
    FUN_04d7b3f4(uVar19,uVar18,0);
    uVar18 = thunk_FUN_02ba3594(PTR_DAT_0632d4d0);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar19,uVar18);
  }
  if ((uVar16 & 1) == 0) {
    plVar17 = (long *)FUN_04dc6850();
    plVar17 = (long *)*plVar17;
    if (plVar17 == (long *)0x0) goto LAB_05e66180;
LAB_05e66160:
    bVar1 = *(byte *)(*(long *)Method_OVRPlugin_<>c_<_cctor>b__810_89__ + 0x130);
    if (*(byte *)(*plVar17 + 0x130) < bVar1) goto LAB_05e66180;
    if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_89__) {
      plVar17 = (long *)0x0;
    }
  }
  else {
    plVar17 = (long *)DrawIfRangeAttribute__get_comparedValue(uVar16,0);
    if (plVar17 != (long *)0x0) goto LAB_05e66160;
LAB_05e66180:
    plVar17 = (long *)0x0;
  }
  puVar2 = PTR_DAT_06312c90;
  iVar9 = *(int *)(param_3 + 10);
  iVar14 = *(int *)((long)param_3 + 0x54);
  if (*(int *)(*(long *)
                Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__1__
              + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  puVar3 = Method_OVRSpaceQuery_Options_set_UuidFilter__;
  iVar14 = iVar14 - iVar9;
  uVar7 = FUN_05e799b4(0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)puVar2);
  }
  iVar8 = FUN_04d7c5dc(iVar14 * 4,uVar7,0);
  iVar9 = FUN_05e799b4(0);
  iVar9 = FUN_04d7c5dc(iVar14 * 6,iVar9 * 3,0);
  FUN_05f4f5c0(param_1,iVar8,iVar9,&local_78,&local_88,0);
  FUN_04763bd4(&local_b0,plVar17,*(undefined4 *)(param_3 + 10),*(undefined8 *)puVar3);
  puVar3 = Method_OVRSpatialAnchor_<>c_<GetListToStoreTheShareRequest>b__33_0__;
  puVar2 = 
  Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass36_0_<AddInstanceOcclusionPassDataRow>b__8__
  ;
  if (0 < iVar14) {
    iVar22 = 0;
    local_1b8 = iVar8;
    local_1b4 = iVar9;
    do {
      uVar10 = FUN_04763d38(&local_b0,
                            *(undefined8 *)Method_OVRSpaceQuery_Options_ValidateSingleFilter__);
      if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312d90);
      }
      FUN_05c45700(uVar10 & 1,0);
      FUN_04763d4c(&local_e0,&local_b0,*(undefined8 *)Method_OVRSpaceQuery_Options_ToQueryInfo2__);
      uStack_158 = uStack_d8;
      local_160 = local_e0;
      uStack_148 = uStack_c8;
      local_150 = local_d0;
      uStack_138 = uStack_b8;
      uStack_140 = local_c0;
      param_3[1] = uStack_d8;
      *param_3 = local_e0;
      param_3[0x10] = uStack_c8;
      param_3[0xf] = local_d0;
      param_3[5] = uStack_b8;
      param_3[4] = local_c0;
      if (param_3[0x11] == 0) {
        FUN_05f42e54(&local_160,param_3,0);
      }
      else {
        FUN_05f42f00(&local_160,param_3,0);
      }
      uVar16 = local_150;
      uVar19 = uStack_158;
      iVar5 = (int)local_150;
      iVar6 = local_150._4_4_;
      if (((int)local_150 != 0) && (local_150._4_4_ != 0)) {
        uVar18 = FUN_04dc6850(local_160,0);
        if (*(int *)(*(long *)
                      Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__1__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)
                              Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__1__
                            );
        }
        auVar23 = FUN_033c0138(uVar18,uVar16 & 0xffffffff,
                               *(undefined8 *)
                                Method_OVRSceneModelLoader_<>c__DisplayClass9_0_<RequestScenePermissionAsync>b__2__
                              );
        uVar19 = FUN_04dc6850(uVar19,0);
        auVar24 = FUN_033c00f4(uVar19,iVar6,
                               *(undefined8 *)
                                Method_OVRSceneModelLoader_<>c__DisplayClass9_0_<RequestScenePermissionAsync>b__1__
                              );
        if ((iVar8 < iVar5) || (iVar9 < iVar6)) {
          local_f0 = auVar24;
          iVar11 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                             (&local_78,
                              *(undefined8 *)
                               Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_<GetSerializableMembers>b__40_1__
                             );
          if (0 < iVar11 - iVar8) {
            iVar11 = FUN_03ac7100(&local_88,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_129__
                                 );
            uVar18 = uStack_70;
            uVar19 = local_78;
            if (0 < iVar11 - iVar9) {
              iVar11 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                                 (&local_78,
                                  *(undefined8 *)
                                   Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_<GetSerializableMembers>b__40_1__
                                 );
              auVar24 = FUN_0322bc30(uVar19,uVar18,0,iVar11 - iVar8,
                                     *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_145__);
              uVar18 = uStack_80;
              uVar19 = local_88;
              iVar8 = FUN_03ac7100(&local_88,
                                   *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_129__);
              auVar25 = FUN_0322bb50(uVar19,uVar18,0,iVar8 - iVar9,
                                     *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_144__);
              lVar20 = FUN_05e29228(&local_68,0);
              if (lVar20 == 0) goto LAB_05e66918;
              FUN_05f4e458(lVar20,auVar24._0_8_,auVar24._8_8_,auVar25._0_8_,auVar25._8_8_,param_4,0,
                           0);
            }
          }
          if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          iVar9 = FUN_04d7c48c(uVar16 & 0xffffffff,local_1b8,0);
          if (*(int *)(*(long *)
                        Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__1__
                      + 0xe4) == 0) {
            thunk_FUN_02b9ad44(*(long *)
                                Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__1__
                              );
          }
          uVar7 = FUN_05e799b4(0);
          iVar8 = FUN_04d7c5dc(iVar9 << 1,uVar7,0);
          iVar9 = FUN_04d7c48c(iVar6,local_1b4,0);
          iVar11 = FUN_05e799b4(0);
          iVar9 = FUN_04d7c5dc(iVar9 << 1,iVar11 * 3,0);
          FUN_05f4f5c0(param_1,iVar8,iVar9,&local_78,&local_88,0);
          local_1b8 = iVar8;
          local_1b4 = iVar9;
          auVar24 = local_f0;
        }
        local_f0 = auVar24;
        iVar11 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                           (&local_78,
                            *(undefined8 *)
                             Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_<GetSerializableMembers>b__40_1__
                           );
        puVar4 = Method_OVRPlugin_<>c_<_cctor>b__810_147__;
        lVar20 = FUN_0322c2fc(local_78,uStack_70,
                              *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_147__);
        uVar19 = FUN_0322c2fc(auVar23._0_8_,auVar23._8_8_,*(undefined8 *)puVar4);
        FUN_05c37c6c(lVar20 + (long)(iVar11 - iVar8) * 0x40,uVar19,(long)(iVar5 << 6),0);
        iVar12 = FUN_03ac7100(&local_88,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_129__);
        if (0 < iVar6) {
          iVar21 = 0;
          do {
            iVar13 = FUN_03ac6f6c(local_f0,iVar21,*(undefined8 *)puVar3);
            FUN_03ac6fac(&local_88,(iVar12 - iVar9) + iVar21,iVar13 + (iVar11 - iVar8),
                         *(undefined8 *)puVar2);
            iVar21 = iVar21 + 1;
          } while (iVar6 != iVar21);
        }
        iVar9 = iVar9 - iVar6;
        iVar8 = iVar8 - iVar5;
      }
      iVar22 = iVar22 + 1;
    } while (iVar22 != iVar14);
  }
  iVar14 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                     (&local_78,
                      *(undefined8 *)
                       Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_<GetSerializableMembers>b__40_1__
                     );
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__810_129__;
  if (iVar14 - iVar8 < 1) {
    return;
  }
  iVar14 = FUN_03ac7100(&local_88,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_129__);
  uVar18 = uStack_70;
  uVar19 = local_78;
  if (iVar14 - iVar9 < 1) {
    return;
  }
  iVar14 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                     (&local_78,
                      *(undefined8 *)
                       Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_<GetSerializableMembers>b__40_1__
                     );
  auVar24 = FUN_0322bc30(uVar19,uVar18,0,iVar14 - iVar8,
                         *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_145__);
  uVar18 = uStack_80;
  uVar19 = local_88;
  iVar14 = FUN_03ac7100(&local_88,*(undefined8 *)puVar2);
  auVar23 = FUN_0322bb50(uVar19,uVar18,0,iVar14 - iVar9,
                         *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_144__);
LAB_05e668c8:
  lVar20 = FUN_05e29228(&local_68,0);
  if (lVar20 != 0) {
    FUN_05f4e458(lVar20,auVar24._0_8_,auVar24._8_8_,auVar23._0_8_,auVar23._8_8_,param_4,0,0);
    return;
  }
LAB_05e66918:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


