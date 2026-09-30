/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.AREnvironmentProbeManager$$set_automaticPlacementRequested
ENTRY_POINT: 05d95200
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_5;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_XR_ARFoundation_AREnvironmentProbeManager__set_automaticPlacementRequested
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  long unaff_x24;
  long lVar9;
  undefined8 *unaff_x26;
  undefined8 uVar10;
  long *unaff_x27;
  long *unaff_x28;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 in_stack_00000010;
  undefined1 *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined1 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined1 *in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined1 *in_stack_000000a0;
  
  uVar8 = *(undefined8 *)(unaff_x21 + 0x10);
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar1 = PTR_DAT_067c9e50;
  lVar4 = FUN_05ce02e4();
  uVar5 = FUN_05ce02e4(*(undefined8 *)(unaff_x19 + 200),*(undefined8 *)(unaff_x19 + 0xd0),0);
  uVar6 = FUN_034dac00(0x26,*unaff_x26);
  FUN_05c5cb44(&stack0x000000ac,uVar6,0);
  in_stack_00000010 = 0;
  in_stack_00000018 = &stack0x000000ac;
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  thunk_FUN_060bfdac(*(undefined4 *)(unaff_x19 + 0x40),*(undefined4 *)(unaff_x19 + 0x44),
                     *(undefined4 *)(unaff_x19 + 0x48),0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05cb163c();
  if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  thunk_FUN_060bfdac(*(undefined4 *)(unaff_x19 + 0x40),*(undefined4 *)(unaff_x19 + 0x44),
                     *(undefined4 *)(unaff_x19 + 0x48),0);
  FUN_05cb163c();
  uVar6 = *(undefined8 *)(unaff_x19 + 0x50);
  uVar7 = *(undefined8 *)(unaff_x19 + 0x58);
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar6 = FUN_05ce02e4(uVar6,uVar7,0);
  FUN_05d95b90(uVar8,uVar6);
  fVar11 = (float)*(int *)(unaff_x19 + 0x10);
  thunk_FUN_060bfdac(1.0 / fVar11,1.0 / fVar11,fVar11,fVar11);
  FUN_05c5cb50(&stack0x000000ac,0);
  puVar3 = Method_System_IO_Path_InsecureGetFullPath__;
  puVar2 = 
  Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__;
  uVar6 = FUN_034dac00(0x27,*(undefined8 *)Method_System_Net_Sockets_NetworkStream_Close__);
  FUN_05c5cb44(&stack0x000000ac,uVar6,0);
  in_stack_00000010 = 0;
  in_stack_00000018 = &stack0x000000ac;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar6 = *(undefined8 *)(unaff_x19 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x19 + 0x68);
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*unaff_x28);
  }
  FUN_05cdffec(uVar6,uVar7,0);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  UnityEngine_TextCore_Text_SpriteAsset__get_height();
  uVar6 = FUN_05ce02e4(*(undefined8 *)(unaff_x19 + 0x50),*(undefined8 *)(unaff_x19 + 0x58),0);
  uVar7 = FUN_05ce02e4(*(undefined8 *)(unaff_x19 + 0x90),*(undefined8 *)(unaff_x19 + 0x98),0);
  uVar10 = *(undefined8 *)(unaff_x19 + 0x78);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05cab3f0(uVar8,uVar6,uVar7,uVar10,0,0);
  FUN_05c5cb50(&stack0x000000ac,0);
  uVar6 = FUN_034dac00(0x28,*(undefined8 *)Method_System_Net_Sockets_NetworkStream_Close__);
  FUN_05c5cb44(&stack0x000000ac,uVar6,0);
  in_stack_00000098 = 0;
  in_stack_000000a0 = &stack0x000000ac;
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar6 = *(undefined8 *)(unaff_x19 + 0x90);
  uVar7 = *(undefined8 *)(unaff_x19 + 0x98);
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*unaff_x28);
  }
  FUN_05cdffec(uVar6,uVar7,0);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  UnityEngine_TextCore_Text_SpriteAsset__get_height();
  lVar9 = *(long *)(unaff_x19 + 0xc0);
  FUN_05cdfe40(&stack0x00000010,*(undefined8 *)(unaff_x19 + 0x80),*(undefined8 *)(unaff_x19 + 0x88),
               0);
  in_stack_00000090 = CONCAT44(uStack0000000000000034,uStack0000000000000030);
  in_stack_00000078 = in_stack_00000018;
  in_stack_00000070 = in_stack_00000010;
  in_stack_00000088 = in_stack_00000028;
  in_stack_00000080 = in_stack_00000020;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (*(int *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  *(undefined8 *)(lVar9 + 0x40) = in_stack_00000090;
  *(undefined1 **)(lVar9 + 0x28) = in_stack_00000018;
  *(undefined8 *)(lVar9 + 0x20) = in_stack_00000010;
  *(undefined8 *)(lVar9 + 0x38) = in_stack_00000028;
  *(undefined8 *)(lVar9 + 0x30) = in_stack_00000020;
  lVar9 = *(long *)(unaff_x19 + 0xc0);
  FUN_05cdfe40(&stack0x00000010,*(undefined8 *)(unaff_x19 + 0xa0),*(undefined8 *)(unaff_x19 + 0xa8),
               0);
  in_stack_00000060 = CONCAT44(uStack0000000000000034,uStack0000000000000030);
  in_stack_00000048 = in_stack_00000018;
  in_stack_00000040 = in_stack_00000010;
  in_stack_00000058 = in_stack_00000028;
  in_stack_00000050 = in_stack_00000020;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  *(undefined8 *)(lVar9 + 0x68) = in_stack_00000060;
  *(undefined1 **)(lVar9 + 0x50) = in_stack_00000018;
  *(undefined8 *)(lVar9 + 0x48) = in_stack_00000010;
  *(undefined8 *)(lVar9 + 0x60) = in_stack_00000028;
  *(undefined8 *)(lVar9 + 0x58) = in_stack_00000020;
  uVar7 = *(undefined8 *)(unaff_x19 + 0xc0);
  uVar6 = FUN_05ce02e4(*(undefined8 *)(unaff_x19 + 0x80),*(undefined8 *)(unaff_x19 + 0x88),0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05cafe98(uVar8,uVar7,uVar6,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (*(char *)(lVar4 + 0xa8) == '\0') {
    if (DAT_06bb8a4a == '\0') {
      FUN_02f08768(PTR_DAT_067c9848);
      DAT_06bb8a4a = '\x01';
    }
    uVar12 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_067c9848 + 0xb8) + 8);
    uVar13 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_067c9848 + 0xb8) + 0xc);
  }
  else {
    FUN_05c9cc94(&stack0x00000010,lVar4,0);
    uVar12 = uStack0000000000000030;
    FUN_05c9cc94(&stack0x00000010,lVar4,0);
    uVar13 = uStack0000000000000034;
  }
  uVar6 = *(undefined8 *)(unaff_x19 + 0x50);
  uVar7 = *(undefined8 *)(unaff_x19 + 0x58);
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar6 = FUN_05ce02e4(uVar6,uVar7,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05caa088(uVar12,uVar13,0,0,uVar8,uVar6);
  FUN_05c5cb50(&stack0x000000ac,0);
  uVar6 = FUN_034dac00(0x29,*(undefined8 *)Method_System_Net_Sockets_NetworkStream_Close__);
  FUN_05c5cb44(&stack0x000000ac,uVar6,0);
  in_stack_00000010 = 0;
  in_stack_00000018 = &stack0x000000ac;
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar6 = *(undefined8 *)(unaff_x19 + 0x80);
  uVar7 = *(undefined8 *)(unaff_x19 + 0x88);
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*unaff_x28);
  }
  FUN_05cdffec(uVar6,uVar7,0);
  if (unaff_x20 != 0) {
    UnityEngine_TextCore_Text_SpriteAsset__get_height();
    uVar6 = FUN_05ce02e4(*(undefined8 *)(unaff_x19 + 0xa0),*(undefined8 *)(unaff_x19 + 0xa8),0);
    uVar7 = FUN_05ce02e4(*(undefined8 *)(unaff_x19 + 0xb0),*(undefined8 *)(unaff_x19 + 0xb8),0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05cab3f0(uVar8,uVar6,uVar7);
    FUN_05c5cb50(&stack0x000000ac,0);
    uVar6 = FUN_034dac00(0x2a,*(undefined8 *)Method_System_Net_Sockets_NetworkStream_Close__);
    FUN_05c5cb44(&stack0x000000ac,uVar6,0);
    uVar6 = *(undefined8 *)(unaff_x19 + 0xb0);
    uVar7 = *(undefined8 *)(unaff_x19 + 0xb8);
    in_stack_00000010 = 0;
    in_stack_00000018 = &stack0x000000ac;
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar6 = FUN_05ce02e4(uVar6,uVar7,0);
    uVar7 = FUN_05ce02e4(*(undefined8 *)(unaff_x19 + 0xa0),*(undefined8 *)(unaff_x19 + 0xa8),0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05cab3f0(uVar8,uVar6,uVar7);
    FUN_05c5cb50(&stack0x000000ac,0);
    uVar6 = FUN_034dac00(0x2d,*(undefined8 *)Method_System_Net_Sockets_NetworkStream_Close__);
    FUN_05c5cb44(&stack0x000000ac,uVar6,0);
    in_stack_00000010 = 0;
    in_stack_00000018 = &stack0x000000ac;
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar6 = *(undefined8 *)(unaff_x19 + 0xa0);
    uVar7 = *(undefined8 *)(unaff_x19 + 0xa8);
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*unaff_x28);
    }
    FUN_05cdffec(uVar6,uVar7,0);
    if (unaff_x20 != 0) {
      UnityEngine_TextCore_Text_SpriteAsset__get_height();
      FUN_05cdffec(*(undefined8 *)(unaff_x19 + 0x90),*(undefined8 *)(unaff_x19 + 0x98),0);
      UnityEngine_TextCore_Text_SpriteAsset__get_height();
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05cab3f0(uVar8,lVar4,uVar5);
      FUN_05c5cb50(&stack0x000000ac,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


