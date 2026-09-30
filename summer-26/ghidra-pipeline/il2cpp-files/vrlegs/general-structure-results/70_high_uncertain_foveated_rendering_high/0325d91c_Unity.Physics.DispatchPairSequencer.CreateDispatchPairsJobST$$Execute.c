/*
FUNCTION_NAME: Unity.Physics.DispatchPairSequencer.CreateDispatchPairsJobST$$Execute
ENTRY_POINT: 0325d91c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;possible_biometrics
MODULES: validity_gate;ray_interaction;foveation_rendering;keyword_support
EVIDENCE: validity_or_gating_hits_11;ray_or_cast_sink_hits_2;strong_foveation_hits_10;eye_or_gaze_keyword_boost_only;functionality_foveated_rendering;functionality_possible_biometrics_hits_8
*/


void Unity_Physics_DispatchPairSequencer_CreateDispatchPairsJobST__Execute(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  long in_x9;
  uint in_w10;
  long unaff_x19;
  undefined4 unaff_w20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  int unaff_w24;
  uint unaff_w25;
  undefined8 unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar9 [16];
  long in_stack_00000008;
  uint uStack0000000000000014;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
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
  
  uStack0000000000000014 = in_w10;
  while( true ) {
    uVar2 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(in_x9 + 0x20) + 0xc0) + 200));
    if ((uVar2 & 1) == 0) {
      *(undefined4 *)(unaff_x23 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(unaff_x23 + 0x18);
      *(undefined4 *)(unaff_x23 + 0x18) = 0;
      if (0 < iVar1) {
        FUN_02793a34(*(undefined8 *)(unaff_x23 + 0x10),0,iVar1,0);
      }
    }
    if (unaff_x27 != 0) {
      Animancer_FadeGroup__get_TargetWeight
                (unaff_x27,&stack0x00000028,
                 *(undefined8 *)Mono_Security_Authenticode_AuthenticodeDeformatter_TypeInfo);
      in_stack_00000060 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
      in_stack_00000058 = in_stack_00000030;
      in_stack_00000050 = in_stack_00000028;
      while( true ) {
        uVar2 = FUN_021b51c8(&stack0x00000050,*unaff_x22);
        if ((uVar2 & 1) == 0) break;
        FUN_01b7a454(&stack0x00000050,&stack0x00000078,*unaff_x29);
        uVar2 = FUN_025be440(in_stack_00000078,0);
        if ((uVar2 & 1) == 0) {
          FUN_01b5f01c();
        }
      }
      FUN_021b51c4(&stack0x00000050,*(undefined8 *)Photon_Realtime_AuthenticationValues_TypeInfo);
    }
    if (*(int *)(*(long *)System_Net_AuthenticationManager_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar3 = FUN_0325cd34(unaff_x26,1);
    if (in_stack_00000020 != 0) {
      if (*(int *)(*(long *)System_Net_AuthenticationManager_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar3 = FUN_0325d2e0(in_stack_00000020,lVar3);
    }
    if (lVar3 == 0) break;
    lVar3 = System_IO_TextReader_<>c___cctor(lVar3,0);
    if (lVar3 == 0) break;
    uVar2 = FUN_025c2f34(lVar3,0x2f,0);
    if ((uVar2 & 1) != 0) {
      uVar4 = FUN_0325d480(uVar2,lVar3);
      if (in_stack_00000008 == 0) break;
      uVar2 = FUN_02216960(in_stack_00000008,uVar4,*(undefined8 *)PTR_DAT_03cc2648);
      if ((uVar2 & 1) == 0) {
        if (*(long *)(unaff_x19 + 0x20) == 0) break;
        uVar2 = FUN_0325d4b8(uVar2,*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x20),unaff_w24);
        if ((uVar2 & 1) != 0) {
          auVar9 = FUN_032835e4(in_stack_00000018,uVar4,0);
          _in_stack_00000040 = auVar9;
          auVar9 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                             (&stack0x00000040,*(undefined8 *)UniGLTF_AutoGltfFileParser_TypeInfo,0)
          ;
          _in_stack_00000040 = auVar9;
          FUN_03283b18(&stack0x00000040,0,0);
          FUN_01b5f01c(in_stack_00000008,uVar4,*unaff_x28);
        }
      }
    }
    if (*(int *)(*(long *)System_Net_AuthenticationManager_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar7 = 4;
    switch(unaff_w20) {
    case 0:
      uVar7 = uStack0000000000000014;
      break;
    case 1:
      uVar7 = 1;
      break;
    case 2:
    case 3:
      break;
    case 4:
      uVar7 = 8;
      break;
    case 5:
      uVar7 = 0xc;
      break;
    case 6:
      uVar7 = 0x10;
      break;
    case 7:
      uVar7 = 0x68;
      break;
    case 8:
      uVar7 = 0x20;
      break;
    case 9:
      uVar7 = 0x4c;
      break;
    default:
      uVar7 = 0;
    }
    uVar2 = thunk_FUN_025bd1c0(*(undefined8 *)(unaff_x19 + 0x18),
                               *(undefined8 *)
                                Unity_Services_Authentication_AuthenticationMetrics_TypeInfo,0);
    if ((uVar2 & 1) == 0) {
      if ((3 < uVar7) && ((unaff_w25 & 3) != 0)) {
        unaff_w25 = unaff_w25 + 4 & 0xfffffffc;
      }
    }
    else if (uVar7 < 5) {
      uVar7 = 4;
    }
    switch(unaff_w20) {
    case 1:
      auVar9 = FUN_032835e4(in_stack_00000018,lVar3,0);
      _in_stack_00000040 = auVar9;
      auVar9 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                         (&stack0x00000040,*(undefined8 *)PTR_DAT_03cdcf08,0);
      _in_stack_00000040 = auVar9;
      auVar9 = FUN_03283b18(&stack0x00000040,unaff_w25,0);
      lVar3 = *unaff_x21;
      _in_stack_00000040 = auVar9;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar3 = *unaff_x21;
      }
      uVar6 = *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 4);
      break;
    case 2:
      auVar9 = FUN_032835e4(in_stack_00000018,lVar3,0);
      _in_stack_00000040 = auVar9;
      auVar9 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                         (&stack0x00000040,*(undefined8 *)PTR_DAT_03d1b580,0);
      _in_stack_00000040 = auVar9;
      auVar9 = FUN_03283b18(&stack0x00000040,unaff_w25,0);
      lVar3 = *unaff_x21;
      _in_stack_00000040 = auVar9;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar3 = *unaff_x21;
      }
      uVar6 = *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0xc);
      break;
    case 3:
      auVar9 = FUN_032835e4(in_stack_00000018,lVar3,0);
      _in_stack_00000040 = auVar9;
      auVar9 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                         (&stack0x00000040,*(undefined8 *)Mono_CSharp_TypeSpec___TypeInfo,0);
      _in_stack_00000040 = auVar9;
      auVar9 = FUN_03283bf0(0xbf800000,0x3f800000,&stack0x00000040,0);
      _in_stack_00000040 = auVar9;
      auVar9 = FUN_03283b18(&stack0x00000040,unaff_w25,0);
      lVar3 = *unaff_x21;
      _in_stack_00000040 = auVar9;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar3 = *unaff_x21;
      }
      uVar6 = *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x2c);
      break;
    case 4:
      auVar9 = FUN_032835e4(in_stack_00000018,lVar3,0);
      _in_stack_00000040 = auVar9;
      auVar9 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                         (&stack0x00000040,*(undefined8 *)Mono_CSharp_Argument_TypeInfo,0);
      _in_stack_00000040 = auVar9;
      auVar9 = FUN_03283b18(&stack0x00000040,unaff_w25,0);
      lVar5 = *unaff_x21;
      _in_stack_00000040 = auVar9;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar5 = *unaff_x21;
      }
      auVar9 = FUN_03283ad0(&stack0x00000040,*(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x34),0);
      _in_stack_00000040 = auVar9;
      FUN_03283e64(&stack0x00000040);
      uVar4 = FUN_025b1328(lVar3,*(undefined8 *)System_Threading_AutoResetEvent_TypeInfo,0);
      auVar9 = FUN_032835e4(in_stack_00000018,uVar4,0);
      _in_stack_00000040 = auVar9;
      auVar9 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                         (&stack0x00000040,*(undefined8 *)Mono_CSharp_TypeSpec___TypeInfo,0);
      _in_stack_00000040 = auVar9;
      FUN_03283bf0(0xbf800000,0x3f800000,&stack0x00000040,0);
      uVar4 = FUN_025b1328(lVar3,*(undefined8 *)System_Net_Authorization_TypeInfo,0);
      auVar9 = FUN_032835e4(in_stack_00000018,uVar4,0);
      _in_stack_00000040 = auVar9;
      auVar9 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                         (&stack0x00000040,*(undefined8 *)Mono_CSharp_TypeSpec___TypeInfo,0);
      _in_stack_00000040 = auVar9;
      FUN_03283bf0(0xbf800000,0x3f800000,&stack0x00000040,0);
      goto switchD_0325dbe4_caseD_7;
    case 5:
      auVar9 = FUN_032835e4(in_stack_00000018,lVar3,0);
      _in_stack_00000040 = auVar9;
      auVar9 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                         (&stack0x00000040,
                          *(undefined8 *)ToolBuddy_Pooling_ArrayPoolsProvider_TypeInfo,0);
      _in_stack_00000040 = auVar9;
      auVar9 = FUN_03283b18(&stack0x00000040,unaff_w25,0);
      lVar3 = *unaff_x21;
      _in_stack_00000040 = auVar9;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar3 = *unaff_x21;
      }
      uVar6 = *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x38);
      break;
    case 6:
      auVar9 = FUN_032835e4(in_stack_00000018,lVar3,0);
      _in_stack_00000040 = auVar9;
      auVar9 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                         (&stack0x00000040,
                          *(undefined8 *)Oculus_Platform_Models_ApplicationInvite_TypeInfo,0);
      _in_stack_00000040 = auVar9;
      auVar9 = FUN_03283b18(&stack0x00000040,unaff_w25,0);
      lVar3 = *unaff_x21;
      _in_stack_00000040 = auVar9;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar3 = *unaff_x21;
      }
      uVar6 = *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x3c);
      break;
    default:
      goto switchD_0325dbe4_caseD_7;
    case 8:
      auVar9 = FUN_032835e4(in_stack_00000018,lVar3,0);
      puVar8 = (undefined8 *)System_Data_AutoIncrementInt64_TypeInfo;
      goto LAB_0325dd60;
    case 9:
      auVar9 = FUN_032835e4(in_stack_00000018,lVar3,0);
      puVar8 = (undefined8 *)System_Data_AutoIncrementBigInteger_TypeInfo;
LAB_0325dd60:
      _in_stack_00000040 = auVar9;
      auVar9 = UnityEngine_Experimental_Rendering_XRPass__set_foveatedRenderingInfo
                         (&stack0x00000040,*puVar8,0);
      _in_stack_00000040 = auVar9;
      auVar9 = FUN_03283b18(&stack0x00000040,unaff_w25,0);
      goto LAB_0325dfd8;
    }
    auVar9 = FUN_03283ad0(&stack0x00000040,uVar6,0);
LAB_0325dfd8:
    _in_stack_00000040 = auVar9;
    FUN_03283e64(&stack0x00000040);
switchD_0325dbe4_caseD_7:
    unaff_w25 = unaff_w25 + uVar7;
    unaff_w24 = unaff_w24 + 1;
    if ((*(long *)(unaff_x19 + 0x20) == 0) ||
       (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x20), lVar3 == 0)) break;
    if (*(int *)(lVar3 + 0x18) <= unaff_w24) {
      FUN_03283748(in_stack_00000018,0);
      return;
    }
    FUN_02215a88(lVar3,unaff_w24,&stack0x00000028,
                 *(undefined8 *)Unity_Services_Authentication_AuthenticationSettings_TypeInfo);
    if (unaff_x23 == 0) break;
    in_x9 = *(long *)PTR_DAT_03cc1b40;
    *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
    unaff_x26 = in_stack_00000028;
    unaff_x27 = in_stack_00000030;
    unaff_w20 = uStack0000000000000038;
    uStack0000000000000014 = uStack000000000000003c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


