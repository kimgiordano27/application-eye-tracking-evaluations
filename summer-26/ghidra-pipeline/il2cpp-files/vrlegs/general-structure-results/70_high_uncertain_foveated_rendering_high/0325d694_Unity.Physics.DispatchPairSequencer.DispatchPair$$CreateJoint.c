/*
FUNCTION_NAME: Unity.Physics.DispatchPairSequencer.DispatchPair$$CreateJoint
ENTRY_POINT: 0325d694
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;possible_biometrics
MODULES: validity_gate;ray_interaction;foveation_rendering;keyword_support
EVIDENCE: validity_or_gating_hits_13;ray_or_cast_sink_hits_2;strong_foveation_hits_10;eye_or_gaze_keyword_boost_only;functionality_foveated_rendering;functionality_possible_biometrics_hits_15
*/


void Unity_Physics_DispatchPairSequencer_DispatchPair__CreateJoint(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  uint uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar17;
  int iVar18;
  uint uVar19;
  undefined1 auVar20 [16];
  long lStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  long in_stack_00000030;
  undefined4 uStack0000000000000038;
  uint uStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined2 uStack0000000000000078;
  undefined6 uStack000000000000007a;
  
  FUN_01ab69ac(PTR_DAT_03cc1b40);
                    /* try { // try from 0325d6a4 to 0335d6cf has its CatchHandler @ 0325d6e4 */
  FUN_01ab69ac(PTR_DAT_03cc2648);
                    /* catch() { ... } // from try @ 0325d648 with catch @ 0325d6ac */
  FUN_01ab69ac(Mono_Security_Authenticode_AuthenticodeDeformatter_TypeInfo);
                    /* catch() { ... } // from try @ 0325d678 with catch @ 0325d6b8 */
  FUN_01ab69ac(PTR_DAT_03cbfa20);
  FUN_01ab69ac(Mono_Security_X509_Extensions_AuthorityKeyIdentifierExtension_TypeInfo);
                    /* try { // try from 0325d6d0 to 0335d6db has its CatchHandler @ 0325ce64 */
  FUN_01ab69ac(Unity_Services_Authentication_AuthenticationSettings_TypeInfo);
                    /* try { // try from 0325d6dc to 0335d6e3 has its CatchHandler @ 0325d6e4 */
                    /* catch() { ... } // from try @ 0325d658 with catch @ 0325d6e4
                       catch() { ... } // from try @ 0325d6a4 with catch @ 0325d6e4
                       catch() { ... } // from try @ 0325d6dc with catch @ 0325d6e4 */
  FUN_01ab69ac(PTR_DAT_03cbfa18);
  FUN_01ab69ac(PTR_DAT_03cbffe8);
  FUN_01ab69ac(System_Net_AuthenticationManager_TypeInfo);
  FUN_01ab69ac(System_Net_Authorization_TypeInfo);
  FUN_01ab69ac(Mono_CSharp_TypeSpec___TypeInfo);
  FUN_01ab69ac(UniGLTF_AutoGltfFileParser_TypeInfo);
  FUN_01ab69ac(Oculus_Platform_Models_ApplicationInvite_TypeInfo);
  FUN_01ab69ac(System_Data_AutoIncrementBigInteger_TypeInfo);
  FUN_01ab69ac(System_Data_AutoIncrementInt64_TypeInfo);
  FUN_01ab69ac(System_Threading_AutoResetEvent_TypeInfo);
  FUN_01ab69ac(Unity_Services_Authentication_AuthenticationMetrics_TypeInfo);
  FUN_01ab69ac(Mono_CSharp_Argument_TypeInfo);
  FUN_01ab69ac(PTR_DAT_03cdcf08);
  FUN_01ab69ac(ToolBuddy_Pooling_ArrayPoolsProvider_TypeInfo);
  FUN_01ab69ac(PTR_DAT_03d1b580);
  *(undefined1 *)(unaff_x21 + 0x84f) = 1;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  lVar8 = thunk_FUN_01a89e68(*unaff_x20);
  FUN_0328398c(lVar8,0);
  uStack0000000000000028 = 0;
  FUN_03291114(&stack0x00000028,0x58,0x52,0x53,0x30,0);
  if (lVar8 != 0) {
    *(undefined4 *)(lVar8 + 0x28) = uStack0000000000000028;
    puVar5 = PTR_DAT_03cbffe8;
    puVar4 = PTR_DAT_03cbfa20;
    puVar3 = PTR_DAT_03cbfa18;
    FUN_03283524(lVar8,*(undefined8 *)(unaff_x19 + 0x10),0);
    uStack0000000000000078 = 0;
    in_stack_00000070._4_1_ = 1;
    FUN_02241190(&stack0x00000078,(long)&stack0x00000070 + 4,*(undefined8 *)puVar5);
    *(undefined2 *)(lVar8 + 0x38) = uStack0000000000000078;
    uVar9 = FUN_025be440(*(undefined8 *)(unaff_x19 + 0x10),0);
    lStack0000000000000020 = 0;
    if ((uVar9 & 1) == 0) {
      uVar17 = *(undefined8 *)(unaff_x19 + 0x10);
      if (*(int *)(*(long *)PTR_DAT_03cd83a0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lStack0000000000000020 = FUN_031f89ac(uVar17,0);
    }
    lVar10 = thunk_FUN_01a89e68(*(undefined8 *)puVar3);
    Animancer_AnimancerState__OnSetIsPlaying(lVar10,*(undefined8 *)puVar4);
    lVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar3);
    Animancer_AnimancerState__OnSetIsPlaying(lVar11,*(undefined8 *)puVar4);
    puVar6 = Unity_Services_Leaderboards_AuthenticationWrapper_TypeInfo;
    puVar5 = Unity_Services_CloudSave_Internal_AuthenticationWrapper_TypeInfo;
    puVar4 = PTR_DAT_03cd8408;
    puVar3 = PTR_DAT_03cbfa30;
    lVar14 = *(long *)(unaff_x19 + 0x20);
    if (lVar14 != 0) {
      uVar19 = 0;
      iVar18 = 0;
      do {
        lVar14 = *(long *)(lVar14 + 0x20);
        if (lVar14 == 0) break;
        if (*(int *)(lVar14 + 0x18) <= iVar18) {
          FUN_03283748(lVar8,0);
          return;
        }
        FUN_02215a88(lVar14,iVar18,&stack0x00000028,
                     *(undefined8 *)Unity_Services_Authentication_AuthenticationSettings_TypeInfo);
        uVar7 = uStack000000000000003c;
        uVar12 = uStack0000000000000038;
        lVar14 = in_stack_00000030;
        if (lVar11 == 0) break;
        uVar17 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
        lVar16 = *(long *)PTR_DAT_03cc1b40;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        uVar9 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 200));
        if ((uVar9 & 1) == 0) {
          *(undefined4 *)(lVar11 + 0x18) = 0;
        }
        else {
          iVar1 = *(int *)(lVar11 + 0x18);
          *(undefined4 *)(lVar11 + 0x18) = 0;
          if (0 < iVar1) {
            FUN_02793a34(*(undefined8 *)(lVar11 + 0x10),0,iVar1,0);
          }
        }
        if (lVar14 != 0) {
          Animancer_FadeGroup__get_TargetWeight
                    (lVar14,&stack0x00000028,
                     *(undefined8 *)Mono_Security_Authenticode_AuthenticodeDeformatter_TypeInfo);
          in_stack_00000050 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
          in_stack_00000060 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
          in_stack_00000058 = in_stack_00000030;
          while( true ) {
            uVar9 = FUN_021b51c8(&stack0x00000050,*(undefined8 *)puVar5);
            if ((uVar9 & 1) == 0) break;
            FUN_01b7a454(&stack0x00000050,&stack0x00000078,*(undefined8 *)puVar6);
            uVar2 = CONCAT62(uStack000000000000007a,uStack0000000000000078);
            uVar9 = FUN_025be440(uVar2,0);
            if ((uVar9 & 1) == 0) {
              FUN_01b5f01c(lVar11,uVar2,*(undefined8 *)puVar3);
            }
          }
          FUN_021b51c4(&stack0x00000050,*(undefined8 *)Photon_Realtime_AuthenticationValues_TypeInfo
                      );
        }
        if (*(int *)(*(long *)System_Net_AuthenticationManager_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        lVar14 = FUN_0325cd34(uVar17,1);
        if (lStack0000000000000020 != 0) {
          if (*(int *)(*(long *)System_Net_AuthenticationManager_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          lVar14 = FUN_0325d2e0(lStack0000000000000020,lVar14);
        }
        if (lVar14 == 0) break;
        lVar14 = System_IO_TextReader_<>c___cctor(lVar14,0);
        if (lVar14 == 0) break;
        uVar9 = FUN_025c2f34(lVar14,0x2f,0);
        if ((uVar9 & 1) != 0) {
          uVar17 = FUN_0325d480(uVar9,lVar14);
          if (lVar10 == 0) break;
          uVar9 = FUN_02216960(lVar10,uVar17,*(undefined8 *)PTR_DAT_03cc2648);
          if ((uVar9 & 1) == 0) {
            if (*(long *)(unaff_x19 + 0x20) == 0) break;
            uVar9 = FUN_0325d4b8(uVar9,*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x20),iVar18);
            if ((uVar9 & 1) != 0) {
              auVar20 = FUN_032835e4(lVar8,uVar17,0);
              _in_stack_00000040 = auVar20;
              auVar20 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                                  (&stack0x00000040,
                                   *(undefined8 *)UniGLTF_AutoGltfFileParser_TypeInfo,0);
              _in_stack_00000040 = auVar20;
              FUN_03283b18(&stack0x00000040,0,0);
              FUN_01b5f01c(lVar10,uVar17,*(undefined8 *)puVar3);
            }
          }
        }
        if (*(int *)(*(long *)System_Net_AuthenticationManager_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = 4;
        switch(uVar12) {
        case 0:
          uVar13 = uVar7;
          break;
        case 1:
          uVar13 = 1;
          break;
        case 2:
        case 3:
          break;
        case 4:
          uVar13 = 8;
          break;
        case 5:
          uVar13 = 0xc;
          break;
        case 6:
          uVar13 = 0x10;
          break;
        case 7:
          uVar13 = 0x68;
          break;
        case 8:
          uVar13 = 0x20;
          break;
        case 9:
          uVar13 = 0x4c;
          break;
        default:
          uVar13 = 0;
        }
        uVar9 = thunk_FUN_025bd1c0(*(undefined8 *)(unaff_x19 + 0x18),
                                   *(undefined8 *)
                                    Unity_Services_Authentication_AuthenticationMetrics_TypeInfo,0);
        if ((uVar9 & 1) == 0) {
          if ((3 < uVar13) && ((uVar19 & 3) != 0)) {
            uVar19 = uVar19 + 4 & 0xfffffffc;
          }
        }
        else if (uVar13 < 5) {
          uVar13 = 4;
        }
        switch(uVar12) {
        case 1:
          auVar20 = FUN_032835e4(lVar8,lVar14,0);
          _in_stack_00000040 = auVar20;
          auVar20 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                              (&stack0x00000040,*(undefined8 *)PTR_DAT_03cdcf08,0);
          _in_stack_00000040 = auVar20;
          auVar20 = FUN_03283b18(&stack0x00000040,uVar19,0);
          lVar14 = *(long *)puVar4;
          _in_stack_00000040 = auVar20;
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar14 = *(long *)puVar4;
          }
          uVar12 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 4);
          break;
        case 2:
          auVar20 = FUN_032835e4(lVar8,lVar14,0);
          _in_stack_00000040 = auVar20;
          auVar20 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                              (&stack0x00000040,*(undefined8 *)PTR_DAT_03d1b580,0);
          _in_stack_00000040 = auVar20;
          auVar20 = FUN_03283b18(&stack0x00000040,uVar19,0);
          lVar14 = *(long *)puVar4;
          _in_stack_00000040 = auVar20;
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar14 = *(long *)puVar4;
          }
          uVar12 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 0xc);
          break;
        case 3:
          auVar20 = FUN_032835e4(lVar8,lVar14,0);
          _in_stack_00000040 = auVar20;
          auVar20 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                              (&stack0x00000040,*(undefined8 *)Mono_CSharp_TypeSpec___TypeInfo,0);
          _in_stack_00000040 = auVar20;
          auVar20 = FUN_03283bf0(0xbf800000,0x3f800000,&stack0x00000040,0);
          _in_stack_00000040 = auVar20;
          auVar20 = FUN_03283b18(&stack0x00000040,uVar19,0);
          lVar14 = *(long *)puVar4;
          _in_stack_00000040 = auVar20;
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar14 = *(long *)puVar4;
          }
          uVar12 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 0x2c);
          break;
        case 4:
          auVar20 = FUN_032835e4(lVar8,lVar14,0);
          _in_stack_00000040 = auVar20;
          auVar20 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                              (&stack0x00000040,*(undefined8 *)Mono_CSharp_Argument_TypeInfo,0);
          _in_stack_00000040 = auVar20;
          auVar20 = FUN_03283b18(&stack0x00000040,uVar19,0);
          lVar16 = *(long *)puVar4;
          _in_stack_00000040 = auVar20;
          if (*(int *)(lVar16 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar16 = *(long *)puVar4;
          }
          auVar20 = FUN_03283ad0(&stack0x00000040,*(undefined4 *)(*(long *)(lVar16 + 0xb8) + 0x34),0
                                );
          _in_stack_00000040 = auVar20;
          FUN_03283e64(&stack0x00000040,lVar11,0);
          uVar17 = FUN_025b1328(lVar14,*(undefined8 *)System_Threading_AutoResetEvent_TypeInfo,0);
          auVar20 = FUN_032835e4(lVar8,uVar17,0);
          _in_stack_00000040 = auVar20;
          auVar20 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                              (&stack0x00000040,*(undefined8 *)Mono_CSharp_TypeSpec___TypeInfo,0);
          _in_stack_00000040 = auVar20;
          FUN_03283bf0(0xbf800000,0x3f800000,&stack0x00000040,0);
          uVar17 = FUN_025b1328(lVar14,*(undefined8 *)System_Net_Authorization_TypeInfo,0);
          auVar20 = FUN_032835e4(lVar8,uVar17,0);
          _in_stack_00000040 = auVar20;
          auVar20 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                              (&stack0x00000040,*(undefined8 *)Mono_CSharp_TypeSpec___TypeInfo,0);
          _in_stack_00000040 = auVar20;
          FUN_03283bf0(0xbf800000,0x3f800000,&stack0x00000040,0);
          goto switchD_0325dbe4_caseD_7;
        case 5:
          auVar20 = FUN_032835e4(lVar8,lVar14,0);
          _in_stack_00000040 = auVar20;
          auVar20 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                              (&stack0x00000040,
                               *(undefined8 *)ToolBuddy_Pooling_ArrayPoolsProvider_TypeInfo,0);
          _in_stack_00000040 = auVar20;
          auVar20 = FUN_03283b18(&stack0x00000040,uVar19,0);
          lVar14 = *(long *)puVar4;
          _in_stack_00000040 = auVar20;
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar14 = *(long *)puVar4;
          }
          uVar12 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 0x38);
          break;
        case 6:
          auVar20 = FUN_032835e4(lVar8,lVar14,0);
          _in_stack_00000040 = auVar20;
          auVar20 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                              (&stack0x00000040,
                               *(undefined8 *)Oculus_Platform_Models_ApplicationInvite_TypeInfo,0);
          _in_stack_00000040 = auVar20;
          auVar20 = FUN_03283b18(&stack0x00000040,uVar19,0);
          lVar14 = *(long *)puVar4;
          _in_stack_00000040 = auVar20;
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar14 = *(long *)puVar4;
          }
          uVar12 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 0x3c);
          break;
        default:
          goto switchD_0325dbe4_caseD_7;
        case 8:
          auVar20 = FUN_032835e4(lVar8,lVar14,0);
          puVar15 = (undefined8 *)System_Data_AutoIncrementInt64_TypeInfo;
          goto LAB_0325dd60;
        case 9:
          auVar20 = FUN_032835e4(lVar8,lVar14,0);
          puVar15 = (undefined8 *)System_Data_AutoIncrementBigInteger_TypeInfo;
LAB_0325dd60:
          _in_stack_00000040 = auVar20;
          auVar20 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                              (&stack0x00000040,*puVar15,0);
          _in_stack_00000040 = auVar20;
          auVar20 = FUN_03283b18(&stack0x00000040,uVar19,0);
          goto LAB_0325dfd8;
        }
        auVar20 = FUN_03283ad0(&stack0x00000040,uVar12,0);
LAB_0325dfd8:
        _in_stack_00000040 = auVar20;
        FUN_03283e64(&stack0x00000040,lVar11,0);
switchD_0325dbe4_caseD_7:
        lVar14 = *(long *)(unaff_x19 + 0x20);
        uVar19 = uVar19 + uVar13;
        iVar18 = iVar18 + 1;
      } while (lVar14 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


