/*
FUNCTION_NAME: Unity.Physics.DispatchPairSequencer.SolverSchedulerInfo$$ScheduleDisposeJob
ENTRY_POINT: 0325d85c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;possible_biometrics
MODULES: validity_gate;ray_interaction;foveation_rendering;keyword_support
EVIDENCE: validity_or_gating_hits_12;ray_or_cast_sink_hits_2;strong_foveation_hits_10;eye_or_gaze_keyword_boost_only;functionality_foveated_rendering;functionality_possible_biometrics_hits_10
*/


void Unity_Physics_DispatchPairSequencer_SolverSchedulerInfo__ScheduleDisposeJob(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  uint uVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  int iVar18;
  uint uVar19;
  undefined1 auVar20 [16];
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined4 uStack0000000000000038;
  uint uStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000078;
  
  thunk_FUN_01a58e78();
  lVar8 = FUN_031f89ac();
  lVar9 = thunk_FUN_01a89e68(*unaff_x22);
  Animancer_AnimancerState__OnSetIsPlaying(lVar9,*unaff_x20);
  lVar10 = thunk_FUN_01a89e68(*unaff_x22);
  Animancer_AnimancerState__OnSetIsPlaying(lVar10,*unaff_x20);
  puVar5 = Unity_Services_Leaderboards_AuthenticationWrapper_TypeInfo;
  puVar4 = Unity_Services_CloudSave_Internal_AuthenticationWrapper_TypeInfo;
  puVar3 = PTR_DAT_03cd8408;
  puVar2 = PTR_DAT_03cbfa30;
  lVar15 = *(long *)(unaff_x19 + 0x20);
  if (lVar15 != 0) {
    uVar19 = 0;
    iVar18 = 0;
    do {
      lVar15 = *(long *)(lVar15 + 0x20);
      if (lVar15 == 0) break;
      if (*(int *)(lVar15 + 0x18) <= iVar18) {
        FUN_03283748(unaff_x23,0);
        return;
      }
      FUN_02215a88(lVar15,iVar18,&stack0x00000028,
                   *(undefined8 *)Unity_Services_Authentication_AuthenticationSettings_TypeInfo);
      uVar6 = uStack000000000000003c;
      uVar13 = uStack0000000000000038;
      lVar15 = in_stack_00000030;
      uVar12 = in_stack_00000028;
      if (lVar10 == 0) break;
      lVar17 = *(long *)PTR_DAT_03cc1b40;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      uVar11 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 200));
      if ((uVar11 & 1) == 0) {
        *(undefined4 *)(lVar10 + 0x18) = 0;
      }
      else {
        iVar1 = *(int *)(lVar10 + 0x18);
        *(undefined4 *)(lVar10 + 0x18) = 0;
        if (0 < iVar1) {
          FUN_02793a34(*(undefined8 *)(lVar10 + 0x10),0,iVar1,0);
        }
      }
      if (lVar15 != 0) {
        Animancer_FadeGroup__get_TargetWeight
                  (lVar15,&stack0x00000028,
                   *(undefined8 *)Mono_Security_Authenticode_AuthenticodeDeformatter_TypeInfo);
        in_stack_00000060 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
        in_stack_00000058 = in_stack_00000030;
        in_stack_00000050 = in_stack_00000028;
        while( true ) {
          uVar11 = FUN_021b51c8(&stack0x00000050,*(undefined8 *)puVar4);
          if ((uVar11 & 1) == 0) break;
          FUN_01b7a454(&stack0x00000050,&stack0x00000078,*(undefined8 *)puVar5);
          uVar7 = in_stack_00000078;
          uVar11 = FUN_025be440(in_stack_00000078,0);
          if ((uVar11 & 1) == 0) {
            FUN_01b5f01c(lVar10,uVar7,*(undefined8 *)puVar2);
          }
        }
        FUN_021b51c4(&stack0x00000050,*(undefined8 *)Photon_Realtime_AuthenticationValues_TypeInfo);
      }
      if (*(int *)(*(long *)System_Net_AuthenticationManager_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar15 = FUN_0325cd34(uVar12,1);
      if (lVar8 != 0) {
        if (*(int *)(*(long *)System_Net_AuthenticationManager_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        lVar15 = FUN_0325d2e0(lVar8,lVar15);
      }
      if (lVar15 == 0) break;
      lVar15 = System_IO_TextReader_<>c___cctor(lVar15,0);
      if (lVar15 == 0) break;
      uVar11 = FUN_025c2f34(lVar15,0x2f,0);
      if ((uVar11 & 1) != 0) {
        uVar12 = FUN_0325d480(uVar11,lVar15);
        if (lVar9 == 0) break;
        uVar11 = FUN_02216960(lVar9,uVar12,*(undefined8 *)PTR_DAT_03cc2648);
        if ((uVar11 & 1) == 0) {
          if (*(long *)(unaff_x19 + 0x20) == 0) break;
          uVar11 = FUN_0325d4b8(uVar11,*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x20),iVar18);
          if ((uVar11 & 1) != 0) {
            auVar20 = FUN_032835e4(unaff_x23,uVar12,0);
            _in_stack_00000040 = auVar20;
            auVar20 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                                (&stack0x00000040,*(undefined8 *)UniGLTF_AutoGltfFileParser_TypeInfo
                                 ,0);
            _in_stack_00000040 = auVar20;
            FUN_03283b18(&stack0x00000040,0,0);
            FUN_01b5f01c(lVar9,uVar12,*(undefined8 *)puVar2);
          }
        }
      }
      if (*(int *)(*(long *)System_Net_AuthenticationManager_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar14 = 4;
      switch(uVar13) {
      case 0:
        uVar14 = uVar6;
        break;
      case 1:
        uVar14 = 1;
        break;
      case 2:
      case 3:
        break;
      case 4:
        uVar14 = 8;
        break;
      case 5:
        uVar14 = 0xc;
        break;
      case 6:
        uVar14 = 0x10;
        break;
      case 7:
        uVar14 = 0x68;
        break;
      case 8:
        uVar14 = 0x20;
        break;
      case 9:
        uVar14 = 0x4c;
        break;
      default:
        uVar14 = 0;
      }
      uVar11 = thunk_FUN_025bd1c0(*(undefined8 *)(unaff_x19 + 0x18),
                                  *(undefined8 *)
                                   Unity_Services_Authentication_AuthenticationMetrics_TypeInfo,0);
      if ((uVar11 & 1) == 0) {
        if ((3 < uVar14) && ((uVar19 & 3) != 0)) {
          uVar19 = uVar19 + 4 & 0xfffffffc;
        }
      }
      else if (uVar14 < 5) {
        uVar14 = 4;
      }
      switch(uVar13) {
      case 1:
        auVar20 = FUN_032835e4(unaff_x23,lVar15,0);
        _in_stack_00000040 = auVar20;
        auVar20 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                            (&stack0x00000040,*(undefined8 *)PTR_DAT_03cdcf08,0);
        _in_stack_00000040 = auVar20;
        auVar20 = FUN_03283b18(&stack0x00000040,uVar19,0);
        lVar15 = *(long *)puVar3;
        _in_stack_00000040 = auVar20;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar15 = *(long *)puVar3;
        }
        uVar13 = *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 4);
        break;
      case 2:
        auVar20 = FUN_032835e4(unaff_x23,lVar15,0);
        _in_stack_00000040 = auVar20;
        auVar20 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                            (&stack0x00000040,*(undefined8 *)PTR_DAT_03d1b580,0);
        _in_stack_00000040 = auVar20;
        auVar20 = FUN_03283b18(&stack0x00000040,uVar19,0);
        lVar15 = *(long *)puVar3;
        _in_stack_00000040 = auVar20;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar15 = *(long *)puVar3;
        }
        uVar13 = *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0xc);
        break;
      case 3:
        auVar20 = FUN_032835e4(unaff_x23,lVar15,0);
        _in_stack_00000040 = auVar20;
        auVar20 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                            (&stack0x00000040,*(undefined8 *)Mono_CSharp_TypeSpec___TypeInfo,0);
        _in_stack_00000040 = auVar20;
        auVar20 = FUN_03283bf0(0xbf800000,0x3f800000,&stack0x00000040,0);
        _in_stack_00000040 = auVar20;
        auVar20 = FUN_03283b18(&stack0x00000040,uVar19,0);
        lVar15 = *(long *)puVar3;
        _in_stack_00000040 = auVar20;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar15 = *(long *)puVar3;
        }
        uVar13 = *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x2c);
        break;
      case 4:
        auVar20 = FUN_032835e4(unaff_x23,lVar15,0);
        _in_stack_00000040 = auVar20;
        auVar20 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                            (&stack0x00000040,*(undefined8 *)Mono_CSharp_Argument_TypeInfo,0);
        _in_stack_00000040 = auVar20;
        auVar20 = FUN_03283b18(&stack0x00000040,uVar19,0);
        lVar17 = *(long *)puVar3;
        _in_stack_00000040 = auVar20;
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar17 = *(long *)puVar3;
        }
        auVar20 = FUN_03283ad0(&stack0x00000040,*(undefined4 *)(*(long *)(lVar17 + 0xb8) + 0x34),0);
        _in_stack_00000040 = auVar20;
        FUN_03283e64(&stack0x00000040,lVar10,0);
        uVar12 = FUN_025b1328(lVar15,*(undefined8 *)System_Threading_AutoResetEvent_TypeInfo,0);
        auVar20 = FUN_032835e4(unaff_x23,uVar12,0);
        _in_stack_00000040 = auVar20;
        auVar20 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                            (&stack0x00000040,*(undefined8 *)Mono_CSharp_TypeSpec___TypeInfo,0);
        _in_stack_00000040 = auVar20;
        FUN_03283bf0(0xbf800000,0x3f800000,&stack0x00000040,0);
        uVar12 = FUN_025b1328(lVar15,*(undefined8 *)System_Net_Authorization_TypeInfo,0);
        auVar20 = FUN_032835e4(unaff_x23,uVar12,0);
        _in_stack_00000040 = auVar20;
        auVar20 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                            (&stack0x00000040,*(undefined8 *)Mono_CSharp_TypeSpec___TypeInfo,0);
        _in_stack_00000040 = auVar20;
        FUN_03283bf0(0xbf800000,0x3f800000,&stack0x00000040,0);
        goto switchD_0325dbe4_caseD_7;
      case 5:
        auVar20 = FUN_032835e4(unaff_x23,lVar15,0);
        _in_stack_00000040 = auVar20;
        auVar20 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                            (&stack0x00000040,
                             *(undefined8 *)ToolBuddy_Pooling_ArrayPoolsProvider_TypeInfo,0);
        _in_stack_00000040 = auVar20;
        auVar20 = FUN_03283b18(&stack0x00000040,uVar19,0);
        lVar15 = *(long *)puVar3;
        _in_stack_00000040 = auVar20;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar15 = *(long *)puVar3;
        }
        uVar13 = *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x38);
        break;
      case 6:
        auVar20 = FUN_032835e4(unaff_x23,lVar15,0);
        _in_stack_00000040 = auVar20;
        auVar20 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                            (&stack0x00000040,
                             *(undefined8 *)Oculus_Platform_Models_ApplicationInvite_TypeInfo,0);
        _in_stack_00000040 = auVar20;
        auVar20 = FUN_03283b18(&stack0x00000040,uVar19,0);
        lVar15 = *(long *)puVar3;
        _in_stack_00000040 = auVar20;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar15 = *(long *)puVar3;
        }
        uVar13 = *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x3c);
        break;
      default:
        goto switchD_0325dbe4_caseD_7;
      case 8:
        auVar20 = FUN_032835e4(unaff_x23,lVar15,0);
        puVar16 = (undefined8 *)System_Data_AutoIncrementInt64_TypeInfo;
        goto LAB_0325dd60;
      case 9:
        auVar20 = FUN_032835e4(unaff_x23,lVar15,0);
        puVar16 = (undefined8 *)System_Data_AutoIncrementBigInteger_TypeInfo;
LAB_0325dd60:
        _in_stack_00000040 = auVar20;
        auVar20 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                            (&stack0x00000040,*puVar16,0);
        _in_stack_00000040 = auVar20;
        auVar20 = FUN_03283b18(&stack0x00000040,uVar19,0);
        goto LAB_0325dfd8;
      }
      auVar20 = FUN_03283ad0(&stack0x00000040,uVar13,0);
LAB_0325dfd8:
      _in_stack_00000040 = auVar20;
      FUN_03283e64(&stack0x00000040,lVar10,0);
switchD_0325dbe4_caseD_7:
      lVar15 = *(long *)(unaff_x19 + 0x20);
      uVar19 = uVar19 + uVar14;
      iVar18 = iVar18 + 1;
    } while (lVar15 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


