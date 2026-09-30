/*
FUNCTION_NAME: FUN_05e6587c
ENTRY_POINT: 05e6587c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 120
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_7;validity_or_gating_hits_14;telemetry_or_network_hits_4;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_05e6587c(undefined8 param_1,undefined8 param_2,undefined4 *param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulong uVar27;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined8 uStack_58;
  
  uStack_58 = param_2;
  if ((DAT_066dc665 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(Method_OVRSceneManager_<>c__DisplayClass50_0_<DoesRoomSetupExist>b__0__);
    FUN_02b3c81c(Method_OVRSceneManager_<>c__DisplayClass53_0_<CheckClassificationsInRooms>b__0__);
    FUN_02b3c81c(
                Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_<GetSerializableMembers>b__40_1__
                );
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_129__);
    FUN_02b3c81c(Method_OVRSceneModelLoader_<>c__DisplayClass9_0_<RequestScenePermissionAsync>b__1__
                );
    FUN_02b3c81c(Method_OVRSceneModelLoader_<>c__DisplayClass9_0_<RequestScenePermissionAsync>b__2__
                );
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__1__
                );
    FUN_02b3c81c(
                Method_OVRSceneModelLoader_<AttemptToLoadSceneModel>d__7_System_Collections_IEnumerator_Reset__
                );
    DAT_066dc665 = 1;
  }
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  auVar4 = ZEXT816(0);
  auVar7 = ZEXT816(0);
  if ((param_4 == 0) || (auVar4 = ZEXT816(0), auVar7 = ZEXT816(0), *(long *)(param_4 + 0x28) == 0))
  goto LAB_05e65cd4;
  uVar27 = *(ulong *)(*(long *)(param_4 + 0x28) + 0x18);
  uVar2 = param_3[0x44];
  lVar20 = FUN_02b3c908(*(undefined8 *)
                         Method_OVRSceneModelLoader_<AttemptToLoadSceneModel>d__7_System_Collections_IEnumerator_Reset__
                        ,uVar27 & 0xffffffff);
  auVar9._8_8_ = local_70._8_8_;
  auVar9._0_8_ = local_70._0_8_;
  auVar8._8_8_ = local_70._8_8_;
  auVar8._0_8_ = local_70._0_8_;
  auVar6._8_8_ = local_80._8_8_;
  auVar6._0_8_ = local_80._0_8_;
  auVar5._8_8_ = local_80._8_8_;
  auVar5._0_8_ = local_80._0_8_;
  if (0 < (int)uVar27) {
    lVar21 = 0;
    lVar22 = 0;
    uVar23 = 0;
    do {
      lVar24 = *(long *)(param_4 + 0x28);
      auVar4 = auVar5;
      auVar7 = auVar8;
      if (lVar24 == 0) goto LAB_05e65cd4;
      if (*(uint *)(lVar24 + 0x18) <= uVar23) {
LAB_05e65cd8:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      auVar4 = auVar6;
      auVar7 = auVar9;
      if (lVar20 == 0) goto LAB_05e65cd4;
      lVar24 = lVar24 + lVar22;
      uVar17 = *(undefined4 *)(lVar24 + 0x2c);
      uVar25 = *(undefined8 *)(lVar24 + 0x30);
      uStack_a8 = *(undefined8 *)(lVar24 + 0x48);
      local_b0 = *(undefined8 *)(lVar24 + 0x40);
      uVar3 = *(ushort *)(lVar24 + 0x38);
      uVar18 = *(undefined4 *)(lVar24 + 0x3c);
      if (*(uint *)(lVar20 + 0x18) <= uVar23) goto LAB_05e65cd8;
      uVar26 = *(undefined8 *)(lVar24 + 0x20);
      lVar1 = lVar20 + lVar21;
      lVar21 = lVar21 + 0x40;
      uVar23 = uVar23 + 1;
      *(undefined4 *)(lVar1 + 0x28) = *(undefined4 *)(lVar24 + 0x28);
      *(undefined4 *)(lVar1 + 0x2c) = uVar17;
      lVar22 = lVar22 + 0x30;
      *(undefined8 *)(lVar1 + 0x20) = uVar26;
      *(undefined8 *)(lVar1 + 0x30) = uVar25;
      *(undefined8 *)(lVar1 + 0x38) = 0;
      *(undefined4 *)(lVar1 + 0x40) = uVar18;
      *(undefined4 *)(lVar1 + 0x44) = 0;
      *(uint *)(lVar1 + 0x48) = (uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8;
      *(undefined8 *)(lVar1 + 0x54) = uStack_a8;
      *(undefined8 *)(lVar1 + 0x4c) = local_b0;
      *(undefined4 *)(lVar1 + 0x5c) = 0;
    } while ((uVar27 & 0xffffffff) * 0x40 - lVar21 != 0);
  }
  puVar10 = 
  Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__1__
  ;
  if (((((int)param_3[0x39] < 1) && ((int)param_3[0x3a] < 1)) && ((int)param_3[0x3b] < 1)) &&
     ((int)param_3[0x3c] < 1)) {
    FUN_05f42fac(&local_c8,*(undefined4 *)(param_4 + 0x40),*(undefined4 *)(param_4 + 0x44),*param_3,
                 param_3[1],param_3[2],param_3[3],lVar20,*(undefined8 *)(param_4 + 0x30),
                 param_3[0x10],*(undefined8 *)(param_3 + 0x42),0);
  }
  else {
    FUN_05f43204(&local_c8,*(undefined4 *)(param_4 + 0x40),*(undefined4 *)(param_4 + 0x44),*param_3,
                 param_3[1],param_3[2],param_3[3],lVar20,*(undefined8 *)(param_4 + 0x30),
                 *(undefined8 *)(param_3 + 0x42),0);
  }
  puVar13 = Method_OVRSceneModelLoader_<>c__DisplayClass9_0_<RequestScenePermissionAsync>b__2__;
  puVar12 = Method_OVRSceneModelLoader_<>c__DisplayClass9_0_<RequestScenePermissionAsync>b__1__;
  puVar11 = 
  Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_<GetSerializableMembers>b__40_1__
  ;
  uVar25 = FUN_04dc6850(local_c8,0);
  if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)puVar10);
  }
  local_70 = FUN_033c0138(uVar25,local_b8,*(undefined8 *)puVar13);
  uVar25 = FUN_04dc6850(uStack_c0,0);
  local_80 = FUN_033c00f4(uVar25,uStack_b4,*(undefined8 *)puVar12);
  iVar16 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                     (local_70,*(undefined8 *)puVar11);
  puVar10 = Method_OVRPlugin_<>c_<_cctor>b__810_129__;
  if (iVar16 != 0) {
    iVar16 = FUN_03ac7100(local_80,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_129__);
    if (iVar16 != 0) {
      uVar17 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                         (local_70,*(undefined8 *)puVar11);
      uVar18 = FUN_03ac7100(local_80,*(undefined8 *)puVar10);
      FUN_05f4f5c0(param_1,uVar17,uVar18,&local_90,&local_a0,0);
      iVar16 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                         (&local_90,*(undefined8 *)puVar11);
      iVar19 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                         (local_70,*(undefined8 *)puVar11);
      if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312d90);
      }
      FUN_05c45700(iVar16 == iVar19,0);
      iVar16 = FUN_03ac7100(&local_a0,*(undefined8 *)puVar10);
      iVar19 = FUN_03ac7100(local_80,*(undefined8 *)puVar10);
      FUN_05c45700(iVar16 == iVar19,0);
      FUN_03ac75a4(&local_90,local_70._0_8_,local_70._8_8_,
                   *(undefined8 *)
                    Method_OVRSceneManager_<>c__DisplayClass50_0_<DoesRoomSetupExist>b__0__);
      FUN_03ac6ff8(&local_a0,local_80._0_8_,local_80._8_8_,
                   *(undefined8 *)
                    Method_OVRSceneManager_<>c__DisplayClass53_0_<CheckClassificationsInRooms>b__0__
                  );
      uVar15 = uStack_88;
      uVar14 = local_90;
      uVar26 = uStack_98;
      uVar25 = local_a0;
      lVar20 = FUN_05e29228(&uStack_58,0);
      auVar4 = local_80;
      auVar7 = local_70;
      if ((uVar2 >> 2 & 1) == 0) {
        if (lVar20 == 0) {
LAB_05e65cd4:
          local_80 = auVar4;
          local_70 = auVar7;
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        FUN_05f4e458(lVar20,uVar14,uVar15,uVar25,uVar26,0,0,0);
      }
      else {
        if (lVar20 == 0) goto LAB_05e65cd4;
        FUN_05f4e5cc(lVar20,uVar14,uVar15,uVar25,uVar26,param_4,0);
      }
    }
  }
  return;
}


