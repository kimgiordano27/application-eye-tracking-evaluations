/*
FUNCTION_NAME: OVRPlugin$$SetHandSkeletonVersion
ENTRY_POINT: 051b6868
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin__SetHandSkeletonVersion(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined4 *unaff_x20;
  long *unaff_x21;
  undefined8 *puVar11;
  undefined8 *unaff_x23;
  long unaff_x24;
  int iVar12;
  long unaff_x25;
  undefined8 *unaff_x27;
  undefined8 *unaff_x29;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  undefined8 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 in_stack_000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 in_stack_000000b8;
  undefined4 uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  undefined4 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  char in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  char in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined4 in_stack_00000148;
  
  AkMIDIEventCallbackInfo__get_byProgramNum();
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608b28);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608b30);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065d62a0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608b38);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608b40);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608b48);
  *(undefined1 *)(unaff_x25 + 0x339) = 1;
  lVar6 = *unaff_x21;
  in_stack_00000130 = 0;
  in_stack_00000138 = 0;
  in_stack_00000148 = 0;
  in_stack_00000140 = 0;
  in_stack_000000c8 = 0;
  _uStack00000000000000c0 = 0;
  *(undefined8 *)((long)unaff_x27 + 0x54) = 0;
  *(undefined8 *)((long)unaff_x27 + 0x4c) = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_00000118 = 0;
  in_stack_00000110 = 0;
  *(undefined8 *)((long)unaff_x27 + 0x24) = 0;
  *(undefined8 *)((long)unaff_x27 + 0x1c) = 0;
  puVar3 = PTR_DAT_06606500;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  uStack00000000000000ac = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  uStack00000000000000b4 = 0;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_05f002ac(&stack0x00000070,0);
  in_stack_00000138 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
  in_stack_00000130 = in_stack_00000070;
  *(ulong *)((long)unaff_x27 + 0x74) = CONCAT44(uStack0000000000000088,uStack0000000000000084);
  *(ulong *)((long)unaff_x27 + 0x6c) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
  FUN_05f002ac(&stack0x00000070,0);
  uVar10 = unaff_x23[2];
  uVar16 = unaff_x23[1];
  uVar15 = *unaff_x23;
  *(undefined4 *)(unaff_x29 + 3) = *(undefined4 *)(unaff_x23 + 3);
  unaff_x29[2] = uVar10;
  unaff_x29[1] = uVar16;
  *unaff_x29 = uVar15;
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_02cd038c(lVar6);
    lVar6 = *(long *)puVar3;
  }
  lVar7 = *(long *)(unaff_x24 + 0x20);
  if (lVar7 != 0) {
    puVar9 = *(undefined4 **)(lVar6 + 0xb8);
    iVar12 = 0;
    uVar19 = puVar9[1];
    uVar18 = puVar9[2];
    uVar20 = *puVar9;
    puVar11 = (undefined8 *)PTR_DAT_06608b28;
    do {
      if (*(int *)(lVar7 + 0x18) <= iVar12) {
        return uVar20;
      }
      FUN_038c4204(&stack0x00000070,lVar7,iVar12,*puVar11);
      in_stack_00000108 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
      in_stack_00000118 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
      in_stack_00000110 = CONCAT44(uStack0000000000000084,uStack0000000000000080);
      in_stack_00000100 = in_stack_00000070;
      *(undefined8 *)((long)unaff_x27 + 0x54) = uStack0000000000000094;
      *(ulong *)((long)unaff_x27 + 0x4c) = CONCAT44(uStack0000000000000090,uStack000000000000008c);
      lVar6 = *(long *)(unaff_x24 + 0x20);
      if (lVar6 == 0) break;
      iVar1 = *(int *)(lVar6 + 0x18);
      iVar12 = iVar12 + 1;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = iVar12 / iVar1;
      }
      FUN_038c4204(&stack0x00000070,lVar6,iVar12 - iVar2 * iVar1,*puVar11);
      cVar5 = in_stack_00000128;
      in_stack_000000d8 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
      in_stack_000000e8 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
      uVar10 = CONCAT44(uStack0000000000000084,uStack0000000000000080);
      *(undefined8 *)((long)unaff_x27 + 0x24) = uStack0000000000000094;
      *(ulong *)((long)unaff_x27 + 0x1c) = CONCAT44(uStack0000000000000090,uStack000000000000008c);
      in_stack_000000d0 = in_stack_00000070;
      in_stack_000000e0 = uVar10;
      if (cVar5 == '\0') {
        if (in_stack_000000f8 == '\0') goto LAB_051b69f8;
      }
      else {
        if (in_stack_000000f8 == '\0') {
LAB_051b69f8:
          if (*(long *)(unaff_x24 + 0x20) == 0) break;
          if (*(int *)(*(long *)(unaff_x24 + 0x20) + 0x18) == 1) goto LAB_051b6a0c;
          lVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06608b48);
          uVar14 = (undefined4)uVar10;
          FUN_051b874c(lVar6,0);
          FUN_051b88b0(&stack0x00000050,&stack0x00000100);
          uStack0000000000000078 = uStack0000000000000058;
          in_stack_00000070 = in_stack_00000050;
          uStack0000000000000084 = (undefined4)uStack0000000000000064;
          uStack0000000000000088 = SUB84(uStack0000000000000064,4);
          uStack000000000000007c = uStack000000000000005c;
          uStack0000000000000080 = uStack0000000000000060;
          if (lVar6 == 0) break;
          *(undefined8 *)(lVar6 + 0x24) = uStack0000000000000064;
          *(ulong *)(lVar6 + 0x1c) = CONCAT44(uStack0000000000000060,uStack000000000000005c);
          *(ulong *)(lVar6 + 0x18) = CONCAT44(uStack000000000000005c,uStack0000000000000058);
          *(undefined8 *)(lVar6 + 0x10) = in_stack_00000050;
          FUN_051b88b0(&stack0x00000030,&stack0x000000d0);
          uStack0000000000000064 = uStack0000000000000044;
          uStack0000000000000060 = uStack0000000000000040;
          uStack0000000000000058 = uStack0000000000000038;
          uStack000000000000005c = uStack000000000000003c;
          in_stack_00000050 = in_stack_00000030;
          uVar10 = CONCAT44(uStack0000000000000040,uStack000000000000003c);
          *(ulong *)(lVar6 + 0x40) = CONCAT44(uStack000000000000003c,uStack0000000000000038);
          *(undefined8 *)(lVar6 + 0x38) = in_stack_00000030;
          *(undefined8 *)(lVar6 + 0x4c) = uStack0000000000000044;
          *(undefined8 *)(lVar6 + 0x44) = uVar10;
          uVar13 = FUN_051b895c(&stack0x00000100);
          *(undefined4 *)(lVar6 + 0x2c) = uVar13;
          *(int *)(lVar6 + 0x30) = (int)uVar10;
          *(undefined4 *)(lVar6 + 0x34) = uVar14;
          FUN_051b6c88(*(undefined4 *)unaff_x23,*(undefined4 *)((long)unaff_x23 + 4),
                       *(undefined4 *)(unaff_x23 + 1),*(undefined4 *)(lVar6 + 0x10),
                       *(undefined4 *)(lVar6 + 0x14),*(undefined4 *)(lVar6 + 0x18));
          uVar13 = *(undefined4 *)(unaff_x23 + 2);
          uVar17 = *(undefined4 *)((long)unaff_x23 + 0x14);
          uVar14 = FUN_051b6eec(*(undefined4 *)((long)unaff_x23 + 0xc),uVar13,uVar17,
                                *(undefined4 *)(unaff_x23 + 3),*(undefined4 *)(lVar6 + 0x1c),
                                *(undefined4 *)(lVar6 + 0x20),*(undefined4 *)(lVar6 + 0x24),
                                *(undefined4 *)(lVar6 + 0x28));
          *(undefined4 *)(lVar6 + 0x58) = uVar14;
          puVar4 = PTR_DAT_06608b30;
          uVar10 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06608b30);
          FUN_051b6114(uVar10,lVar6,*(undefined8 *)PTR_DAT_06608b38);
          uVar10 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
          FUN_051b6114(uVar10,lVar6,*(undefined8 *)PTR_DAT_06608b40);
          uVar14 = FUN_051b5de0();
          _uStack00000000000000c0 = CONCAT44(uVar13,uVar14);
          unaff_x27 = &stack0x000000d0;
          puVar11 = (undefined8 *)PTR_DAT_06608b28;
          in_stack_000000c8 = uVar17;
        }
        else {
LAB_051b6a0c:
          FUN_051b88b0(&stack0x00000070,&stack0x00000100);
          in_stack_000000a8 = uStack0000000000000078;
          in_stack_000000a0 = in_stack_00000070;
          uStack00000000000000b4 = uStack0000000000000084;
          in_stack_000000b8 = uStack0000000000000088;
          uStack00000000000000ac = uStack000000000000007c;
          in_stack_000000b0 = uStack0000000000000080;
          FUN_05167a3c(&stack0x00000130,&stack0x000000a0,0);
          uStack0000000000000078 = 0;
          in_stack_00000070 = 0;
          FUN_051b20a8(*unaff_x20,&stack0x00000070);
          _uStack00000000000000c0 = in_stack_00000070;
          in_stack_000000c8 = uStack0000000000000078;
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar8 = FUN_051b088c(uVar20,uVar19,uVar18,&stack0x000000c0);
        uVar14 = in_stack_000000c8;
        if ((uVar8 & 1) != 0) {
          uVar20 = uStack00000000000000c0;
          uVar19 = uStack00000000000000c4;
          FUN_05167a3c();
          uVar18 = uVar14;
        }
      }
      lVar7 = *(long *)(unaff_x24 + 0x20);
    } while (lVar7 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


