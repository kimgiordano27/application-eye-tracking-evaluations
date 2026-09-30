/*
FUNCTION_NAME: UnityEngine.EnumDataUtility$$EnumNameFromEnumField
ENTRY_POINT: 068d6030
PROGRAM: waitwhat-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_18;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


uint UnityEngine_EnumDataUtility__EnumNameFromEnumField(void)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined **in_x9;
  long lVar7;
  long lVar8;
  long *unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  uint unaff_w26;
  undefined8 unaff_x28;
  long unaff_x29;
  ulong uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float unaff_s9;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 in_stack_00000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  float fStack000000000000002c;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  float fStack000000000000007c;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 in_stack_000000a8;
  float fStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined8 in_stack_000000b8;
  float in_stack_000000c0;
  undefined4 uStack00000000000000c8;
  float fStack00000000000000cc;
  undefined4 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  
  while( true ) {
    lVar6 = *(long *)(unaff_x29 + 0x10);
    lVar7 = *(long *)in_x9[0xc1];
    *(int *)(unaff_x29 + 0x1c) = *(int *)(unaff_x29 + 0x1c) + 1;
    if (lVar6 == 0) break;
    uVar3 = *(uint *)(unaff_x29 + 0x18);
    if (uVar3 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(unaff_x29 + 0x18) = uVar3 + 1;
      *(undefined8 *)(lVar6 + (long)(int)uVar3 * 8 + 0x20) = unaff_x28;
    }
    else {
      FUN_042e4a64(unaff_x29,unaff_x28,
                   *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    }
    uVar11 = uStack00000000000000b4;
    uVar15 = *unaff_x23;
    fVar10 = *(float *)(unaff_x23 + 1) + in_stack_000000c0;
    fVar14 = fStack00000000000000b0 * *(float *)(unaff_x22 + 1);
    lVar6 = *(long *)(unaff_x25 + 0xc0);
    fVar16 = (float)in_stack_000000b8;
    fVar13 = (float)*unaff_x22 * fStack00000000000000b0;
    fVar12 = (float)((ulong)uVar15 >> 0x20) + (float)((ulong)in_stack_000000b8 >> 0x20) +
             (float)((ulong)*unaff_x22 >> 0x20) * fStack00000000000000b0;
    uVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_070f9520);
    FUN_04c0c7d4(CONCAT44(fVar12,(float)uVar15 + fVar16 + fVar13),fVar12,fVar10 + fVar14,uVar11,
                 uVar4,*(undefined8 *)PauseMenuController_<UpdateSceneSelection>d__34_TypeInfo);
    if (lVar6 == 0) break;
    lVar7 = *(long *)(lVar6 + 0x10);
    lVar8 = *(long *)PauseMenuController_<HideInstructionsOverlay>d__33_TypeInfo;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar7 == 0) break;
    uVar3 = *(uint *)(lVar6 + 0x18);
    if (uVar3 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar3 + 1;
      *(undefined8 *)(lVar7 + (long)(int)uVar3 * 8 + 0x20) = uVar4;
    }
    else {
      FUN_042e4a64(lVar6,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
    do {
      fVar10 = in_stack_000000c0;
      uVar4 = in_stack_000000b8;
      uVar11 = uStack00000000000000b4;
      lVar6 = *unaff_x19;
      uVar17 = *(undefined4 *)unaff_x22;
      uVar18 = *(undefined4 *)((long)unaff_x22 + 4);
      fVar12 = *(float *)(unaff_x23 + 1);
      uVar15 = *unaff_x23;
      uVar19 = *(undefined4 *)(unaff_x22 + 1);
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar6 = *unaff_x19;
      }
      fVar13 = (float)((ulong)uVar15 >> 0x20) + (float)((ulong)uVar4 >> 0x20);
      iVar2 = FUN_06a62fd0(CONCAT44(fVar13,(float)uVar15 + (float)uVar4),fVar13,fVar12 + fVar10,
                           uVar11,uVar17,uVar18,uVar19,fStack00000000000000b0,unaff_x25 + 0xa4,
                           **(undefined8 **)(lVar6 + 0xb8),uStack0000000000000024,
                           uStack0000000000000028,0);
      if (0 < iVar2) {
        if (*(int *)(*unaff_x19 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar3 = FUN_068d6554();
        if (0 < (int)uVar3) {
          if (unaff_x21 == 0) goto LAB_068d654c;
          uVar9 = 0;
          lVar6 = 0x20;
          do {
            if (*(int *)(unaff_x21 + 0x18) <= (int)unaff_w26) break;
            lVar7 = *unaff_x19;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_031e5338();
              lVar7 = *unaff_x19;
            }
            lVar7 = **(long **)(lVar7 + 0xb8);
            if (lVar7 == 0) goto LAB_068d654c;
            if (*(uint *)(lVar7 + 0x18) <= uVar9)
            goto UnityEngine_ExtensionOfNativeClassAttribute___ctor;
            puVar1 = (undefined8 *)(lVar7 + lVar6);
            in_stack_00000088 = puVar1[1];
            in_stack_00000080 = *puVar1;
            in_stack_00000090 = puVar1[2];
            in_stack_000000a8 = *(undefined4 *)(puVar1 + 5);
            uStack00000000000000a0 = (undefined4)puVar1[4];
            uStack00000000000000a4 = (undefined4)((ulong)puVar1[4] >> 0x20);
            uStack0000000000000098 = (undefined4)puVar1[3];
            uStack000000000000009c = (undefined4)((ulong)puVar1[3] >> 0x20);
            fVar10 = (float)FUN_06a6357c(&stack0x00000080,0);
            if (unaff_s9 + fVar10 <= fStack0000000000000018) {
              lVar7 = *unaff_x19;
              if (*(int *)(lVar7 + 0xe4) == 0) {
                thunk_FUN_031e5338();
                lVar7 = *unaff_x19;
              }
              lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
              uVar4 = FUN_06a634a0(&stack0x00000080,0);
              if (lVar7 == 0) goto LAB_068d654c;
              uVar5 = FUN_03eb5b34(lVar7,uVar4,
                                   *(undefined8 *)
                                    UnityEngine_InputSystem_InputActionRebindingExtensions_DeferBindingResolutionWrapper_TypeInfo
                                  );
              if ((uVar5 & 1) == 0) {
                in_stack_000000d8 = FUN_06a634a0(&stack0x00000080,0);
                if (unaff_x24 == 0) goto LAB_068d654c;
                uVar5 = FUN_068592cc();
                if ((uVar5 & 1) != 0) {
                  fVar10 = (float)FUN_06a6357c(&stack0x00000080,0);
                  if (DAT_07546c44 == '\0') {
                    FUN_03188a78(PTR_DAT_070cf060);
                    DAT_07546c44 = '\x01';
                  }
                  fVar12 = ABS(fVar10);
                  if (fVar12 <= 0.0) {
                    fVar12 = 0.0;
                  }
                  fVar14 = **(float **)(*(long *)PTR_DAT_070cf060 + 0xb8) * 8.0;
                  fVar13 = fVar12 * fStack000000000000002c;
                  if (fVar12 * fStack000000000000002c <= fVar14) {
                    fVar13 = fVar14;
                  }
                  if (ABS(0.0 - fVar10) < fVar13) {
                    fVar10 = ABS(0.0 - fVar10);
                    uVar11 = 0;
                    uStack00000000000000c8 = FUN_06a6354c(&stack0x00000080,0);
                    in_stack_000000d0 = uVar11;
                    fStack00000000000000cc = fVar10;
                    if (DAT_075457d6 == '\0') {
                      FUN_03188a78(PTR_DAT_070c1a80);
                      DAT_075457d6 = '\x01';
                    }
                    in_stack_00000070 = **(undefined8 **)(*(long *)PTR_DAT_070c1a80 + 0xb8);
                    uStack0000000000000078 =
                         *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_070c1a80 + 0xb8) + 1);
                    uVar5 = thunk_FUN_0686f3b8(in_stack_00000010._4_4_,&stack0x000000c8,
                                               &stack0x00000070,0);
                    if ((uVar5 & 1) != 0) goto LAB_068d64a0;
                  }
                  uVar11 = *(undefined4 *)((long)unaff_x23 + 4);
                  uVar17 = *(undefined4 *)(unaff_x23 + 1);
                  uStack0000000000000060 = FUN_065b2eec(*(undefined4 *)unaff_x23,0);
                  uStack0000000000000064 = uVar11;
                  in_stack_00000068 = uVar17;
                  FUN_06a6354c(&stack0x00000080,0);
                  uStack0000000000000050 = FUN_065b2eec(0);
                  uStack0000000000000054 = uVar11;
                  in_stack_00000058 = uVar17;
                  uVar11 = *(undefined4 *)((long)unaff_x22 + 4);
                  uVar17 = *(undefined4 *)(unaff_x22 + 1);
                  uStack0000000000000040 = FUN_065b2eec(*(undefined4 *)unaff_x22,0);
                  in_stack_00000048 = uVar17;
                  uStack0000000000000044 = uVar11;
                  thunk_FUN_06873384(&stack0x00000060,&stack0x00000050,&stack0x00000040,
                                     (long)&stack0x00000078 + 4,0);
                  fVar10 = (float)FUN_06a6357c(&stack0x00000080,0);
                  FUN_06a63584(fVar10 + unaff_s9 + 1.0 + fStack000000000000007c,&stack0x00000080,0);
                  if (*(uint *)(unaff_x21 + 0x18) <= unaff_w26) {
UnityEngine_ExtensionOfNativeClassAttribute___ctor:
                    /* WARNING: Subroutine does not return */
                    FUN_03188ce0();
                  }
                  lVar7 = unaff_x21 + (long)(int)unaff_w26 * 0x2c;
                  unaff_w26 = unaff_w26 + 1;
                  *(undefined8 *)(lVar7 + 0x28) = in_stack_00000088;
                  *(undefined8 *)(lVar7 + 0x20) = in_stack_00000080;
                  *(ulong *)(lVar7 + 0x38) = CONCAT44(uStack000000000000009c,uStack0000000000000098)
                  ;
                  *(undefined8 *)(lVar7 + 0x30) = in_stack_00000090;
                  *(ulong *)(lVar7 + 0x44) = CONCAT44(in_stack_000000a8,uStack00000000000000a4);
                  *(ulong *)(lVar7 + 0x3c) = CONCAT44(uStack00000000000000a0,uStack000000000000009c)
                  ;
                }
              }
            }
LAB_068d64a0:
            uVar9 = uVar9 + 1;
            lVar6 = lVar6 + 0x2c;
          } while (uVar3 != uVar9);
        }
      }
      unaff_s9 = unaff_s9 + fStack00000000000000b0;
      if (fStack0000000000000018 <= unaff_s9) {
LAB_068d64cc:
        lVar6 = *unaff_x19;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar6 = *unaff_x19;
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
        if (lVar6 != 0) {
          FUN_03eb5ad4(lVar6,*(undefined8 *)
                              Oculus_Interaction_Input_OneEuroFilter_LowPassFilter_TypeInfo);
          FUN_0595236c(**(undefined8 **)(*unaff_x19 + 0xb8),0,10,0);
          return unaff_w26;
        }
        goto LAB_068d654c;
      }
      if (DAT_07546c44 == '\0') {
        FUN_03188a78(PTR_DAT_070cf060);
        DAT_07546c44 = '\x01';
      }
      fVar10 = ABS(unaff_s9);
      if (ABS(unaff_s9) <= fStack0000000000000020) {
        fVar10 = fStack0000000000000020;
      }
      fVar13 = **(float **)(*(long *)PTR_DAT_070cf060 + 0xb8) * 8.0;
      fVar12 = fVar10 * fStack000000000000002c;
      if (fVar10 * fStack000000000000002c <= fVar13) {
        fVar12 = fVar13;
      }
      if (ABS(fStack0000000000000018 - unaff_s9) < fVar12) goto LAB_068d64cc;
      uVar4 = FUN_068d4bd8();
      thunk_FUN_06873208(uVar4,unaff_s9,fStack000000000000001c + unaff_s9,fStack0000000000000018);
      uVar11 = uStack00000000000000b4;
    } while (*(char *)(unaff_x25 + 0xa0) == '\0');
    uVar4 = *unaff_x23;
    unaff_x29 = *(long *)(unaff_x25 + 0xc0);
    fVar12 = (float)in_stack_000000b8;
    fVar10 = (float)((ulong)uVar4 >> 0x20) + (float)((ulong)in_stack_000000b8 >> 0x20);
    fVar13 = *(float *)(unaff_x23 + 1) + in_stack_000000c0;
    unaff_x28 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)PTR_DAT_070f9520);
    FUN_04c0c7d4(CONCAT44(fVar10,(float)uVar4 + fVar12),fVar10,fVar13,uVar11,unaff_x28,
                 *(undefined8 *)PauseMenuController_<UpdateSceneSelection>d__34_TypeInfo);
    if (unaff_x29 == 0) break;
    in_x9 = &OVRTelemetryConstants_OVRManager_TypeInfo;
  }
LAB_068d654c:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


