/*
FUNCTION_NAME: OVRPlugin$$GetHandTrackingEnabled
ENTRY_POINT: 05d1d1d8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_7;functionality_gaze_retrieval_or_extraction
*/


undefined4 OVRPlugin__GetHandTrackingEnabled(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 in_w8;
  long lVar7;
  undefined4 *puVar8;
  undefined8 in_x9;
  undefined4 *unaff_x20;
  undefined8 *puVar9;
  undefined8 *unaff_x23;
  long unaff_x24;
  int iVar10;
  undefined8 *unaff_x26;
  undefined8 unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  uint in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000b4;
  undefined4 uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  undefined4 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  char in_stack_00000128;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  
  uVar13 = unaff_x23[1];
  uVar5 = *unaff_x23;
  *(undefined4 *)(unaff_x26 + 3) = in_w8;
  unaff_x26[2] = in_x9;
  unaff_x26[1] = uVar13;
  *unaff_x26 = uVar5;
  lVar7 = *unaff_x29;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar7);
    lVar7 = *unaff_x29;
  }
  lVar4 = *(long *)(unaff_x24 + 0x20);
  if (lVar4 != 0) {
    puVar8 = *(undefined4 **)(lVar7 + 0xb8);
    iVar10 = 0;
    uVar16 = puVar8[1];
    uVar15 = puVar8[2];
    uVar17 = *puVar8;
    puVar9 = (undefined8 *)PTR_DAT_06fb8a98;
    do {
      if (*(int *)(lVar4 + 0x18) <= iVar10) {
        return uVar17;
      }
      FUN_04352628(&stack0x00000070,lVar4,iVar10,*puVar9);
      in_stack_00000108 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
      in_stack_00000118 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
      in_stack_00000110 = CONCAT44(uStack0000000000000084,uStack0000000000000080);
      uVar5 = CONCAT44(uStack0000000000000090,uStack000000000000008c);
      in_stack_00000100 = in_stack_00000070;
      *(ulong *)((long)unaff_x28 + 0x54) = CONCAT44(in_stack_00000098,uStack0000000000000094);
      *(undefined8 *)((long)unaff_x28 + 0x4c) = uVar5;
      lVar7 = *(long *)(unaff_x24 + 0x20);
      if (lVar7 == 0) break;
      iVar1 = *(int *)(lVar7 + 0x18);
      iVar10 = iVar10 + 1;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = iVar10 / iVar1;
      }
      FUN_04352628(&stack0x00000070,lVar7,iVar10 - iVar2 * iVar1,*puVar9);
      uVar12 = (undefined4)uVar5;
      in_stack_000000d8 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
      in_stack_000000d0 = in_stack_00000070;
      in_stack_000000e8 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
      in_stack_000000e0 = CONCAT44(uStack0000000000000084,uStack0000000000000080);
      in_stack_000000f0 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
      if (in_stack_00000128 == '\0') {
        if ((in_stack_00000098 & 0xff) == 0) goto LAB_05d1d298;
      }
      else {
        if ((in_stack_00000098 & 0xff) == 0) {
LAB_05d1d298:
          if (*(long *)(unaff_x24 + 0x20) == 0) break;
          if (*(int *)(*(long *)(unaff_x24 + 0x20) + 0x18) == 1) goto LAB_05d1d2ac;
          lVar7 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb8ab8);
          FUN_05b32c00(lVar7,0);
          in_stack_00000158 = in_stack_00000108;
          in_stack_00000150 = in_stack_00000100;
          *(undefined8 *)((long)unaff_x28 + 0x94) = *(undefined8 *)((long)unaff_x28 + 0x44);
          *(undefined8 *)((long)unaff_x28 + 0x8c) = *(undefined8 *)((long)unaff_x28 + 0x3c);
          FUN_05cc3dc8(&stack0x00000070,unaff_x27,&stack0x00000150,0);
          if (lVar7 == 0) break;
          *(ulong *)(lVar7 + 0x24) = CONCAT44(uStack0000000000000088,uStack0000000000000084);
          *(ulong *)(lVar7 + 0x1c) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
          *(ulong *)(lVar7 + 0x18) = CONCAT44(uStack000000000000007c,uStack0000000000000078);
          *(undefined8 *)(lVar7 + 0x10) = in_stack_00000070;
          in_stack_00000158 = in_stack_000000d8;
          in_stack_00000150 = in_stack_000000d0;
          *(undefined8 *)((long)unaff_x28 + 0x94) = *(undefined8 *)((long)unaff_x28 + 0x14);
          *(undefined8 *)((long)unaff_x28 + 0x8c) = *(undefined8 *)((long)unaff_x28 + 0xc);
          FUN_05cc3dc8(&stack0x00000070,unaff_x27,&stack0x00000150,0);
          uVar5 = CONCAT44(uStack0000000000000080,uStack000000000000007c);
          *(ulong *)(lVar7 + 0x40) = CONCAT44(uStack000000000000007c,uStack0000000000000078);
          *(undefined8 *)(lVar7 + 0x38) = in_stack_00000070;
          *(ulong *)(lVar7 + 0x4c) = CONCAT44(uStack0000000000000088,uStack0000000000000084);
          *(undefined8 *)(lVar7 + 0x44) = uVar5;
          uVar11 = FUN_05d1d5b4(&stack0x00000100,unaff_x27);
          *(undefined4 *)(lVar7 + 0x2c) = uVar11;
          *(int *)(lVar7 + 0x30) = (int)uVar5;
          *(undefined4 *)(lVar7 + 0x34) = uVar12;
          FUN_05d1d5d8(*(undefined4 *)unaff_x23,*(undefined4 *)((long)unaff_x23 + 4),
                       *(undefined4 *)(unaff_x23 + 1),*(undefined4 *)(lVar7 + 0x10),
                       *(undefined4 *)(lVar7 + 0x14),*(undefined4 *)(lVar7 + 0x18));
          uVar11 = *(undefined4 *)(unaff_x23 + 2);
          uVar14 = *(undefined4 *)((long)unaff_x23 + 0x14);
          uVar12 = FUN_05d1d83c(*(undefined4 *)((long)unaff_x23 + 0xc),uVar11,uVar14,
                                *(undefined4 *)(unaff_x23 + 3),*(undefined4 *)(lVar7 + 0x1c),
                                *(undefined4 *)(lVar7 + 0x20),*(undefined4 *)(lVar7 + 0x24),
                                *(undefined4 *)(lVar7 + 0x28));
          *(undefined4 *)(lVar7 + 0x58) = uVar12;
          puVar3 = PTR_DAT_06fb8aa0;
          uVar5 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb8aa0);
          FUN_05d1c95c(uVar5,lVar7,*(undefined8 *)PTR_DAT_06fb8aa8);
          uVar5 = thunk_FUN_0301080c(*(undefined8 *)puVar3);
          FUN_05d1c95c(uVar5,lVar7,*(undefined8 *)PTR_DAT_06fb8ab0);
          unaff_x28 = &stack0x000000d0;
          uVar12 = FUN_05d1c52c();
          _uStack00000000000000c0 = CONCAT44(uVar11,uVar12);
          puVar9 = (undefined8 *)PTR_DAT_06fb8a98;
          in_stack_000000c8 = uVar14;
        }
        else {
LAB_05d1d2ac:
          in_stack_00000158 = in_stack_00000108;
          in_stack_00000150 = in_stack_00000100;
          *(undefined8 *)((long)unaff_x28 + 0x94) = *(undefined8 *)((long)unaff_x28 + 0x44);
          *(undefined8 *)((long)unaff_x28 + 0x8c) = *(undefined8 *)((long)unaff_x28 + 0x3c);
          FUN_05cc3dc8(&stack0x00000070,unaff_x27,&stack0x00000150,0);
          uStack00000000000000b4 = CONCAT44(uStack0000000000000088,uStack0000000000000084);
          in_stack_000000a8 = uStack0000000000000078;
          in_stack_000000a0 = in_stack_00000070;
          uStack00000000000000b0 = uStack0000000000000080;
          FUN_05cc3684(&stack0x00000130,&stack0x000000a0,0);
          uStack0000000000000078 = 0;
          in_stack_00000070 = 0;
          FUN_05d18018(*unaff_x20,&stack0x00000070);
          _uStack00000000000000c0 = in_stack_00000070;
          in_stack_000000c8 = uStack0000000000000078;
        }
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar6 = FUN_05d16c04(uVar17,uVar16,uVar15,&stack0x000000c0);
        uVar12 = in_stack_000000c8;
        if ((uVar6 & 1) != 0) {
          uVar17 = uStack00000000000000c0;
          uVar16 = uStack00000000000000c4;
          FUN_05cc3684(unaff_x26,&stack0x00000130,0);
          uVar15 = uVar12;
        }
      }
      lVar4 = *(long *)(unaff_x24 + 0x20);
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


