/*
FUNCTION_NAME: UnityEngine.UIElements.ComputedStyle$$StartAnimationInline
ENTRY_POINT: 05e65918
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_12;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_UIElements_ComputedStyle__StartAnimationInline(void)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long unaff_x19;
  undefined4 *unaff_x21;
  long unaff_x22;
  ulong uVar27;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  FUN_02b3c81c();
  *(undefined1 *)(unaff_x22 + 0x665) = 1;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  auVar6 = ZEXT816(0);
  auVar9 = ZEXT816(0);
  if ((unaff_x19 == 0) ||
     (auVar6 = ZEXT816(0), auVar9 = ZEXT816(0), *(long *)(unaff_x19 + 0x28) == 0))
  goto LAB_05e65cd4;
  uVar27 = *(ulong *)(*(long *)(unaff_x19 + 0x28) + 0x18);
  uVar2 = unaff_x21[0x44];
  lVar20 = FUN_02b3c908(*(undefined8 *)
                         Method_OVRSceneModelLoader_<AttemptToLoadSceneModel>d__7_System_Collections_IEnumerator_Reset__
                        ,uVar27 & 0xffffffff);
  auVar11._8_8_ = in_stack_00000088;
  auVar11._0_8_ = in_stack_00000080;
  auVar10._8_8_ = in_stack_00000088;
  auVar10._0_8_ = in_stack_00000080;
  auVar8._8_8_ = in_stack_00000078;
  auVar8._0_8_ = in_stack_00000070;
  auVar7._8_8_ = in_stack_00000078;
  auVar7._0_8_ = in_stack_00000070;
  if (0 < (int)uVar27) {
    lVar21 = 0;
    lVar22 = 0;
    uVar23 = 0;
    do {
      lVar24 = *(long *)(unaff_x19 + 0x28);
      auVar6 = auVar7;
      auVar9 = auVar10;
      if (lVar24 == 0) goto LAB_05e65cd4;
      if (*(uint *)(lVar24 + 0x18) <= uVar23) {
LAB_05e65cd8:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      auVar6 = auVar8;
      auVar9 = auVar11;
      if (lVar20 == 0) goto LAB_05e65cd4;
      lVar24 = lVar24 + lVar22;
      uVar3 = *(undefined4 *)(lVar24 + 0x2c);
      uVar25 = *(undefined8 *)(lVar24 + 0x30);
      in_stack_00000048 = *(undefined8 *)(lVar24 + 0x48);
      in_stack_00000040 = *(undefined8 *)(lVar24 + 0x40);
      uVar5 = *(ushort *)(lVar24 + 0x38);
      uVar4 = *(undefined4 *)(lVar24 + 0x3c);
      if (*(uint *)(lVar20 + 0x18) <= uVar23) goto LAB_05e65cd8;
      uVar26 = *(undefined8 *)(lVar24 + 0x20);
      lVar1 = lVar20 + lVar21;
      lVar21 = lVar21 + 0x40;
      uVar23 = uVar23 + 1;
      *(undefined4 *)(lVar1 + 0x28) = *(undefined4 *)(lVar24 + 0x28);
      *(undefined4 *)(lVar1 + 0x2c) = uVar3;
      lVar22 = lVar22 + 0x30;
      *(undefined8 *)(lVar1 + 0x20) = uVar26;
      *(undefined8 *)(lVar1 + 0x30) = uVar25;
      *(undefined8 *)(lVar1 + 0x38) = 0;
      *(undefined4 *)(lVar1 + 0x40) = uVar4;
      *(undefined4 *)(lVar1 + 0x44) = 0;
      *(uint *)(lVar1 + 0x48) = (uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8;
      *(undefined8 *)(lVar1 + 0x54) = in_stack_00000048;
      *(undefined8 *)(lVar1 + 0x4c) = in_stack_00000040;
      *(undefined4 *)(lVar1 + 0x5c) = 0;
    } while ((uVar27 & 0xffffffff) * 0x40 - lVar21 != 0);
  }
  puVar12 = 
  Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__1__
  ;
  if (((((int)unaff_x21[0x39] < 1) && ((int)unaff_x21[0x3a] < 1)) && ((int)unaff_x21[0x3b] < 1)) &&
     ((int)unaff_x21[0x3c] < 1)) {
    FUN_05f42fac(&stack0x00000028,*(undefined4 *)(unaff_x19 + 0x40),
                 *(undefined4 *)(unaff_x19 + 0x44),*unaff_x21,unaff_x21[1],unaff_x21[2],unaff_x21[3]
                 ,lVar20,*(undefined8 *)(unaff_x19 + 0x30),unaff_x21[0x10],
                 *(undefined8 *)(unaff_x21 + 0x42),0);
  }
  else {
    FUN_05f43204(&stack0x00000028,*(undefined4 *)(unaff_x19 + 0x40),
                 *(undefined4 *)(unaff_x19 + 0x44),*unaff_x21,unaff_x21[1],unaff_x21[2],unaff_x21[3]
                 ,lVar20,*(undefined8 *)(unaff_x19 + 0x30),*(undefined8 *)(unaff_x21 + 0x42),0);
  }
  uVar3 = uStack0000000000000038;
  uVar25 = in_stack_00000030;
  puVar15 = Method_OVRSceneModelLoader_<>c__DisplayClass9_0_<RequestScenePermissionAsync>b__2__;
  puVar14 = Method_OVRSceneModelLoader_<>c__DisplayClass9_0_<RequestScenePermissionAsync>b__1__;
  puVar13 = 
  Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_<GetSerializableMembers>b__40_1__
  ;
  uVar26 = FUN_04dc6850(in_stack_00000028,0);
  if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)puVar12);
  }
  _in_stack_00000080 = FUN_033c0138(uVar26,uVar3,*(undefined8 *)puVar15);
  uVar25 = FUN_04dc6850(uVar25,0);
  _in_stack_00000070 = FUN_033c00f4(uVar25,uStack000000000000003c,*(undefined8 *)puVar14);
  iVar18 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                     (&stack0x00000080,*(undefined8 *)puVar13);
  puVar12 = Method_OVRPlugin_<>c_<_cctor>b__810_129__;
  if (iVar18 != 0) {
    iVar18 = FUN_03ac7100(&stack0x00000070,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_129__)
    ;
    if (iVar18 != 0) {
      System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                (&stack0x00000080,*(undefined8 *)puVar13);
      FUN_03ac7100(&stack0x00000070,*(undefined8 *)puVar12);
      FUN_05f4f5c0();
      iVar18 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                         (&stack0x00000060,*(undefined8 *)puVar13);
      iVar19 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                         (&stack0x00000080,*(undefined8 *)puVar13);
      if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312d90);
      }
      FUN_05c45700(iVar18 == iVar19,0);
      iVar18 = FUN_03ac7100(&stack0x00000050,*(undefined8 *)puVar12);
      iVar19 = FUN_03ac7100(&stack0x00000070,*(undefined8 *)puVar12);
      FUN_05c45700(iVar18 == iVar19,0);
      FUN_03ac75a4(&stack0x00000060,in_stack_00000080,in_stack_00000088,
                   *(undefined8 *)
                    Method_OVRSceneManager_<>c__DisplayClass50_0_<DoesRoomSetupExist>b__0__);
      FUN_03ac6ff8(&stack0x00000050,in_stack_00000070,in_stack_00000078,
                   *(undefined8 *)
                    Method_OVRSceneManager_<>c__DisplayClass53_0_<CheckClassificationsInRooms>b__0__
                  );
      uVar17 = in_stack_00000068;
      uVar16 = in_stack_00000060;
      uVar26 = in_stack_00000058;
      uVar25 = in_stack_00000050;
      lVar20 = FUN_05e29228(&stack0x00000098,0);
      auVar6 = _in_stack_00000070;
      auVar9 = _in_stack_00000080;
      if ((uVar2 >> 2 & 1) == 0) {
        if (lVar20 == 0) {
LAB_05e65cd4:
          _in_stack_00000070 = auVar6;
          _in_stack_00000080 = auVar9;
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        FUN_05f4e458(lVar20,uVar16,uVar17,uVar25,uVar26,0,0,0);
      }
      else {
        if (lVar20 == 0) goto LAB_05e65cd4;
        FUN_05f4e5cc(lVar20,uVar16,uVar17,uVar25,uVar26);
      }
    }
  }
  return;
}


