/*
FUNCTION_NAME: UnityEngine.Experimental.Rendering.XRSystem$$get_foveatedRenderingCaps
ENTRY_POINT: 06d87154
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering
MODULES: validity_gate;telemetry;foveation_rendering;keyword_support
EVIDENCE: validity_or_gating_hits_8;telemetry_or_network_hits_2;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


undefined8 UnityEngine_Experimental_Rendering_XRSystem__get_foveatedRenderingCaps(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  int in_w8;
  undefined8 *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int unaff_w22;
  int unaff_w23;
  long unaff_x24;
  void *unaff_x25;
  undefined8 uVar6;
  long unaff_x26;
  undefined8 uVar7;
  ulong unaff_x27;
  uint unaff_w28;
  long *plVar8;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  uint in_stack_000000a0;
  undefined8 in_stack_000000a8;
  uint uStack00000000000000b0;
  int iStack00000000000000b4;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  long in_stack_00000118;
  
  while (in_w8 != 1) {
    while( true ) {
      unaff_x27 = unaff_x27 + 1;
      unaff_x25 = (void *)((long)unaff_x25 + 0x48);
      if ((long)(int)unaff_w28 <= (long)unaff_x27) goto LAB_06d87180;
      if (unaff_w28 <= unaff_x27) {
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00000118) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        goto LAB_06d87754;
      }
      memcpy(&stack0x000000b0,unaff_x25,0x48);
      in_w8 = iStack00000000000000b4;
      if ((uStack00000000000000b0 & 0xfffffffe) == 0x30) break;
      lVar2 = FUN_06d89ef8(&stack0x000000b0);
      if (lVar2 != 0) goto LAB_06d87188;
      unaff_w28 = *(uint *)(unaff_x26 + 0x18);
    }
  }
LAB_06d87188:
  puVar1 = PTR_DAT_079f4610;
  uVar6 = *(undefined8 *)System_Security_Cryptography_HMACSHA512_TypeInfo;
  if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar2 = FUN_05e26f18(uVar6,0);
  uVar6 = *unaff_x29;
  if ((unaff_w22 == 1) && ((unaff_w21 & 0xfffffffe) == 4)) {
    uVar6 = *(undefined8 *)UnityEngine_UIElements_DropdownMenuSeparator_TypeInfo;
    uVar7 = *(undefined8 *)Unity_IntegerTime_DiscreteTime_TypeInfo;
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar2 = FUN_05e26f18(uVar7,0);
  }
  uVar7 = *(undefined8 *)PTR_DAT_079f49e0;
  uVar3 = FUN_05c966c0(uVar6,*(undefined8 *)UnityEngine_UIElements_DropdownMenuSeparator_TypeInfo,0)
  ;
  if ((uVar3 & 1) != 0) {
    if (unaff_w22 == 1) {
      in_stack_00000060 = CONCAT44(in_stack_00000060._4_4_,unaff_w21);
      uVar7 = thunk_FUN_0367fa58(*(undefined8 *)System_Security_Cryptography_HMACSHA256_TypeInfo,
                                 &stack0x00000060);
      uVar7 = FUN_05c8e390(*(undefined8 *)PTR_DAT_07a13168,uVar7,0);
    }
    else {
      in_stack_00000060 = CONCAT44(in_stack_00000060._4_4_,unaff_w22);
      uVar7 = thunk_FUN_0367fa58(*(undefined8 *)UnityEngine_XR_Hand_TypeInfo,&stack0x00000060);
      in_stack_000000a0 = unaff_w21;
      uVar5 = thunk_FUN_0367fa58(*(undefined8 *)(puVar1 + 0x48),&stack0x000000a0);
      uVar7 = FUN_05c98b2c(*(undefined8 *)SpiderSenseSerializer_HandByHandSerializer_TypeInfo,uVar7,
                           uVar5,0);
    }
  }
  plVar8 = (long *)PTR_DAT_079fe340;
  in_stack_00000068 = unaff_x19[1];
  in_stack_00000060 = *unaff_x19;
  in_stack_00000078 = unaff_x19[3];
  in_stack_00000070 = unaff_x19[2];
  in_stack_00000088 = unaff_x19[5];
  in_stack_00000080 = unaff_x19[4];
  in_stack_00000090 = unaff_x19[6];
  if (*(int *)(*(long *)PTR_DAT_079fe340 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  in_stack_00000028 = in_stack_00000068;
  in_stack_00000020 = in_stack_00000060;
  in_stack_00000038 = in_stack_00000078;
  in_stack_00000030 = in_stack_00000070;
  in_stack_00000048 = in_stack_00000088;
  in_stack_00000040 = in_stack_00000080;
  in_stack_00000050 = in_stack_00000090;
  in_stack_000000f8 = FUN_06cdb9f4(&stack0x00000020,0);
  uVar3 = FUN_05c97640(unaff_x19[3],0);
  if (((uVar3 & 1) == 0) && (uVar3 = FUN_05c97640(unaff_x19[2],0), (uVar3 & 1) == 0)) {
    lVar4 = FUN_03642a4c(*(undefined8 *)PTR_DAT_079f4a08,5);
    if (lVar4 != 0) {
      FUN_03154bd8(lVar4,0,*(undefined8 *)Oculus_Interaction_Input_HandDataSourceConfig_TypeInfo);
      FUN_03154bd8(lVar4,1,unaff_x19[2]);
      FUN_03154bd8(lVar4,2,*(undefined8 *)PTR_DAT_079f73b0);
      FUN_03154bd8(lVar4,3,unaff_x19[3]);
      FUN_03154bd8(lVar4,4,uVar7);
      uVar7 = FUN_05c98834(lVar4,0);
      goto LAB_06d87558;
    }
  }
  else {
    uVar3 = FUN_05c97640(unaff_x19[3],0);
    if ((uVar3 & 1) != 0) {
      if (unaff_w23 != 0) {
        lVar4 = FUN_03642a4c(*(undefined8 *)PTR_DAT_079f4558,4);
        if (lVar4 == 0) goto LAB_06d87740;
        FUN_03154b74(lVar4,*unaff_x29);
        FUN_03154bd8(lVar4,0,*unaff_x29);
        in_stack_00000060 = CONCAT44(in_stack_00000060._4_4_,unaff_w23);
        uVar5 = thunk_FUN_0367fa58(*(undefined8 *)(PTR_DAT_079f4610 + 0x48),&stack0x00000060);
        FUN_03154b74(lVar4,uVar5);
        FUN_03154bd8(lVar4,1,uVar5);
        in_stack_000000a0 = in_stack_00000008._4_4_;
        uVar5 = thunk_FUN_0367fa58(*(undefined8 *)(PTR_DAT_079f4610 + 0x48),&stack0x000000a0);
        FUN_03154b74(lVar4,uVar5);
        FUN_03154bd8(lVar4,2,uVar5);
        FUN_03154b74(lVar4,uVar7);
        FUN_03154bd8(lVar4,3,uVar7);
        uVar7 = FUN_05c98bb4(*(undefined8 *)Oculus_Interaction_HandGrab_HandGrabPose_TypeInfo,lVar4,
                             0);
        if (*(int *)(*(long *)PTR_DAT_079fe340 + 0xe4) == 0) {
          thunk_FUN_036a1978(*(long *)PTR_DAT_079fe340);
        }
        puVar1 = Server_Firebase_HallOfFameSeason_TypeInfo;
        in_stack_000000a8 =
             FUN_03d77c98(&stack0x000000f8,
                          *(undefined8 *)Oculus_Interaction_Input_HandDataAsset_TypeInfo,
                          in_stack_00000008._4_4_,
                          *(undefined8 *)Server_Firebase_HallOfFameSeason_TypeInfo);
        in_stack_000000f8 =
             FUN_03d77c98(&stack0x000000a8,
                          *(undefined8 *)Oculus_Interaction_HandFingerMaskGenerator_TypeInfo,
                          unaff_w23,*(undefined8 *)puVar1);
        plVar8 = (long *)PTR_DAT_079fe340;
        goto LAB_06d87558;
      }
LAB_06d87180:
      uVar7 = 0;
LAB_06d876f8:
      if (*(long *)(unaff_x24 + 0x28) == in_stack_00000118) {
        return uVar7;
      }
      goto LAB_06d87754;
    }
    uVar7 = FUN_05c981c8(*(undefined8 *)Oculus_Interaction_Input_HandDataSourceConfig_TypeInfo,
                         unaff_x19[3],uVar7,0);
LAB_06d87558:
    if (*(int *)(*plVar8 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    in_stack_000000a8 =
         FUN_03d77c98(&stack0x000000f8,
                      *(undefined8 *)System_Xml_Schema_Datatype_unsignedByte_TypeInfo,unaff_w21,
                      *(undefined8 *)Server_Firebase_HallOfFameSeason_TypeInfo);
    in_stack_000000f8 =
         FUN_03d77d50(&stack0x000000a8,*(undefined8 *)Oculus_Interaction_Input_HandFinger_TypeInfo,
                      unaff_w22,*(undefined8 *)UnityEngine_Rendering_Hammersley_TypeInfo);
    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)System_Security_Cryptography_HMACSHA384_TypeInfo);
    FUN_05e5ae34(lVar4,0);
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x10) = unaff_x19[3];
      thunk_FUN_036b7ad0();
      *(uint *)(lVar4 + 0x20) = unaff_w21;
      *(int *)(lVar4 + 0x24) = unaff_w22;
      *(undefined8 *)(lVar4 + 0x30) = in_stack_00000108;
      *(undefined8 *)(lVar4 + 0x28) = in_stack_00000100;
      *(int *)(lVar4 + 0x18) = unaff_w23;
      *(uint *)(lVar4 + 0x1c) = in_stack_00000008._4_4_;
      *(undefined8 *)(lVar4 + 0x40) = in_stack_00000018;
      *(undefined8 *)(lVar4 + 0x38) = in_stack_00000010;
      thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x38),0);
      *(undefined8 *)(lVar4 + 0x48) = uVar6;
      thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x48),uVar6);
      if (lVar2 == 0) {
        uVar5 = *(undefined8 *)System_Security_Cryptography_HMACSHA512_TypeInfo;
        if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        lVar2 = FUN_05e26f18(uVar5,0);
      }
      *(long *)(lVar4 + 0x50) = lVar2;
      thunk_FUN_036b7ad0((long *)(lVar4 + 0x50),lVar2);
      if (unaff_x20 != 0) {
        *(long *)(unaff_x20 + 0x10) = lVar4;
        thunk_FUN_036b7ad0((long *)(unaff_x20 + 0x10),lVar4);
        uVar5 = thunk_FUN_0367fe20(*(undefined8 *)System_IO_FileNotFoundException_TypeInfo);
        FUN_0414d3cc();
        in_stack_00000060 = 0;
        in_stack_00000068 = 0;
        FUN_0493a3fc(&stack0x00000060,in_stack_000000f8,
                     *(undefined8 *)Unity_AppUI_UI_FloatField_TypeInfo);
        if (*(int *)(*(long *)PTR_DAT_079fe1e0 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        FUN_06cf4a5c(uVar5,uVar7,uVar6,in_stack_00000060,in_stack_00000068,0);
        goto LAB_06d876f8;
      }
    }
  }
LAB_06d87740:
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000118) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
LAB_06d87754:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


