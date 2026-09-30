/*
FUNCTION_NAME: UnityEngine.Rendering.ProbeVolumeSceneData$$InitializeScenarios
ENTRY_POINT: 03a27b14
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_17;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void UnityEngine_Rendering_ProbeVolumeSceneData__InitializeScenarios(void)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar20;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  FUN_01c5d288(UnityEngine_EventSystems_IScrollHandler_TypeInfo);
  FUN_01c5d288(Method_GunRoomManager_<Start>d__20_System_Collections_IEnumerator_Reset__);
  FUN_01c5d288(Method_System_Xml_Schema_FacetsChecker_FacetsCompiler_CheckDupFlag__);
  FUN_01c5d288(Method_System_Enum_EnumResult_SetFailure__);
  FUN_01c5d288(PTR_DAT_04230bf0);
  FUN_01c5d288(Newtonsoft_Json_Serialization_ISerializationBinder_TypeInfo);
  FUN_01c5d288(PTR_DAT_04235018);
  FUN_01c5d288(Method_System_Enum_EnumResult_SetFailure__);
  FUN_01c5d288(Method_GunraidersWebAPI_<PrepareGet>d__12_System_Collections_IEnumerator_Reset__);
  FUN_01c5d288(Method_GunraidersWebAPI_<PrepareJsonGet>d__9_System_Collections_IEnumerator_Reset__);
  FUN_01c5d288(
              Method_AeLa_EasyFeedback_FeedbackForm_<AttachFilesAsync>d__29_System_Collections_IEnumerator_Reset__
              );
  FUN_01c5d288(Method_UnityEngine_EnumDataUtility_<>c_<GetCachedEnumData>b__2_2__);
  FUN_01c5d288(PTR_DAT_04230bd8);
  FUN_01c5d288(Method_GunraidersWebAPI_<PrepareJsonPost>d__10_System_Collections_IEnumerator_Reset__
              );
  FUN_01c5d288(Method_GunraidersWebAPI_<PreparePost>d__11_System_Collections_IEnumerator_Reset__);
  FUN_01c5d288(Method_OVRTouchSample_Hand_<>c_<Start>b__28_0__);
  FUN_01c5d288(Method_HandGrenade_<DelayPoof>d__15_System_Collections_IEnumerator_Reset__);
  *(undefined1 *)(unaff_x21 + 0x4ee) = 1;
  puVar11 = Method_GunraidersWebAPI_<PrepareGet>d__12_System_Collections_IEnumerator_Reset__;
  puVar10 = Method_System_Xml_Schema_FacetsChecker_FacetsCompiler_CheckDupFlag__;
  puVar9 = Method_UnityEngine_EnumDataUtility_<>c_<GetCachedEnumData>b__2_2__;
  puVar8 = Method_System_Enum_EnumResult_SetFailure__;
  puVar7 = UnityEngine_Experimental_Rendering_IScriptableRuntimeReflectionSystem_TypeInfo;
  puVar6 = PTR_DAT_04235018;
  puVar5 = PTR_DAT_04230bf0;
  puVar4 = PTR_DAT_04230bd8;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  if (unaff_x22 != 0) {
    uVar1 = *(undefined4 *)(unaff_x22 + 0x18);
    uVar12 = thunk_FUN_01c496e0(*(undefined8 *)
                                 Method_AeLa_EasyFeedback_FeedbackForm_<AttachFilesAsync>d__29_System_Collections_IEnumerator_Reset__
                               );
    FUN_02d4f8ec(uVar12,uVar1,*(undefined8 *)puVar11);
    *(undefined8 *)(unaff_x20 + 0xa8) = uVar12;
    uVar1 = *(undefined4 *)(unaff_x22 + 0x18);
    uVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
    FUN_02d4f8ec(uVar12,uVar1,*(undefined8 *)puVar6);
    *(undefined8 *)(unaff_x20 + 0xa0) = uVar12;
    uVar1 = *(undefined4 *)(unaff_x22 + 0x18);
    lVar13 = thunk_FUN_01c496e0(*(undefined8 *)puVar9);
    FUN_02d4f8ec(lVar13,uVar1,*(undefined8 *)Method_System_Enum_EnumResult_SetFailure__);
    FUN_02d50a3c(&stack0x00000090);
    in_stack_00000058 = in_stack_00000098;
    in_stack_00000050 = in_stack_00000090;
    in_stack_00000060 = in_stack_000000a0;
    while (uVar14 = FUN_029fd614(&stack0x00000050,*(undefined8 *)puVar7), lVar15 = in_stack_00000060
          , (uVar14 & 1) != 0) {
      if (in_stack_00000060 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar14 = FUN_03a15770(in_stack_00000060);
      if ((uVar14 & 1) != 0) {
        uVar12 = FUN_03a15654(lVar15);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar17 = *(long *)(lVar13 + 0x10);
        lVar18 = *(long *)puVar8;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar3 = *(uint *)(lVar13 + 0x18);
        if (uVar3 < *(uint *)(lVar17 + 0x18)) {
          *(uint *)(lVar13 + 0x18) = uVar3 + 1;
          *(undefined8 *)(lVar17 + (long)(int)uVar3 * 8 + 0x20) = uVar12;
        }
        else {
          FUN_02d5004c(lVar13,uVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
        }
        lVar17 = *(long *)(unaff_x20 + 0xa0);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar12 = *(undefined8 *)(lVar15 + 0x18);
        lVar18 = *(long *)(lVar17 + 0x10);
        lVar19 = *(long *)puVar5;
        *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar3 = *(uint *)(lVar17 + 0x18);
        if (uVar3 < *(uint *)(lVar18 + 0x18)) {
          *(uint *)(lVar17 + 0x18) = uVar3 + 1;
          *(undefined8 *)(lVar18 + (long)(int)uVar3 * 8 + 0x20) = uVar12;
        }
        else {
          FUN_02d5004c(lVar17,uVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
        }
        lVar17 = *(long *)(unaff_x20 + 0xa8);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar18 = *(long *)(lVar17 + 0x10);
        lVar19 = *(long *)puVar10;
        *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar3 = *(uint *)(lVar17 + 0x18);
        if (uVar3 < *(uint *)(lVar18 + 0x18)) {
          *(uint *)(lVar17 + 0x18) = uVar3 + 1;
          *(long *)(lVar18 + (long)(int)uVar3 * 8 + 0x20) = lVar15;
        }
        else {
          FUN_02d5004c(lVar17,lVar15,
                       *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    FUN_029fd610(&stack0x00000050,*(undefined8 *)VoxelBusters_EssentialKit_IScore_TypeInfo);
    puVar4 = Method_HandGrenade_<DelayPoof>d__15_System_Collections_IEnumerator_Reset__;
    if ((*(long *)(unaff_x20 + 0x98) != 0) && (lVar15 = FUN_03a14744(), lVar15 != 0)) {
      lVar17 = *(long *)puVar4;
      uVar12 = *(undefined8 *)(lVar15 + 0x30);
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar17 = *(long *)puVar4;
      }
      lVar15 = *(long *)(*(long *)(lVar17 + 0xb8) + 8);
      if (lVar15 == 0) {
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar17 = *(long *)puVar4;
        }
        uVar20 = **(undefined8 **)(lVar17 + 0xb8);
        lVar15 = thunk_FUN_01c496e0(*(undefined8 *)
                                     Method_GunRoomManager_<Start>d__20_System_Collections_IEnumerator_Reset__
                                   );
        FUN_02b67c90(lVar15,uVar20,*(undefined8 *)Method_OVRTouchSample_Hand_<>c_<Start>b__28_0__,0)
        ;
        *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) = lVar15;
      }
      plVar16 = (long *)FUN_02345c18(uVar12,lVar15,
                                     *(undefined8 *)
                                      Method_GunRoomManager_<Countdown>d__24_System_Collections_IEnumerator_Reset__
                                    );
      if (plVar16 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)
                           Method_FriendSystem_<PeriodicReportSelfAliveness>d__47_System_Collections_IEnumerator_Reset__
                         + 0x130);
        if ((bVar2 <= *(byte *)(*plVar16 + 0x130)) &&
           (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar2 * 8 + -8) ==
            *(long *)
             Method_FriendSystem_<PeriodicReportSelfAliveness>d__47_System_Collections_IEnumerator_Reset__
           )) {
          *(undefined1 *)((long)plVar16 + 0x1c) = 0;
        }
      }
      if ((*(long *)(unaff_x20 + 0x98) != 0) && (lVar15 = FUN_03a14744(), lVar15 != 0)) {
        FUN_023c7550(&stack0x00000090,lVar15,lVar13,
                     *(undefined8 *)
                      Method_GunraidersWebAPI_<PrepareJsonPost>d__10_System_Collections_IEnumerator_Reset__
                    );
        *(undefined8 *)(unaff_x20 + 0xb8) = in_stack_00000098;
        *(undefined8 *)(unaff_x20 + 0xb0) = in_stack_00000090;
        *(undefined8 *)(unaff_x20 + 200) = in_stack_000000a8;
        *(long *)(unaff_x20 + 0xc0) = in_stack_000000a0;
        if (*(long *)(unaff_x20 + 0x98) != 0) {
          lVar13 = FUN_03a14744();
          in_stack_00000098 = *(undefined8 *)(unaff_x20 + 0xb8);
          in_stack_00000090 = *(undefined8 *)(unaff_x20 + 0xb0);
          in_stack_000000a8 = *(undefined8 *)(unaff_x20 + 200);
          in_stack_000000a0 = *(long *)(unaff_x20 + 0xc0);
          FUN_026c3a2c(&stack0x00000070,&stack0x00000090,
                       *(undefined8 *)I2_Loc_LocalizeTargetDesc_Prefab_TypeInfo);
          if (lVar13 != 0) {
            FUN_023c9a74(&stack0x00000090,lVar13);
            in_stack_00000008[1] = in_stack_00000098;
            *in_stack_00000008 = in_stack_00000090;
            in_stack_00000008[3] = in_stack_000000a8;
            in_stack_00000008[2] = in_stack_000000a0;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


