/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsJsonParser$$TryParseArray
ENTRY_POINT: 03a00a48
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


ulong Unity_VisualScripting_FullSerializer_fsJsonParser__TryParseArray
                (undefined1 param_1 [16],uint param_2)

{
  int iVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  undefined4 *puVar5;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  ulong unaff_x27;
  long unaff_x28;
  long unaff_x29;
  float fVar6;
  float fVar7;
  uint uVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined4 unaff_s8;
  ulong unaff_d9;
  ulong unaff_d10;
  uint uVar11;
  undefined4 unaff_s11;
  undefined4 uVar12;
  ulong unaff_d12;
  undefined8 unaff_d13;
  ulong unaff_d14;
  ulong unaff_d15;
  undefined4 uStack0000000000000000;
  uint uStack0000000000000004;
  uint uStack0000000000000008;
  undefined4 uStack0000000000000010;
  uint uStack0000000000000014;
  uint uStack0000000000000018;
  uint in_stack_00000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  float fStack000000000000005c;
  uint uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  uint uStack0000000000000070;
  uint uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  
  uStack0000000000000058 = unaff_s8;
  do {
    uStack0000000000000004 = uStack0000000000000074;
    uStack0000000000000014 = (uint)unaff_d12;
    uStack0000000000000018 = (uint)unaff_d14;
    uStack0000000000000000 = uStack0000000000000078;
    uStack0000000000000008 = param_2;
    uStack0000000000000010 = unaff_s11;
    uVar2 = FUN_039ffd8c(uStack000000000000006c,uStack0000000000000068,uStack0000000000000064,
                         uStack000000000000007c,unaff_d10,unaff_d15);
    if ((uVar2 & 1) != 0) {
LAB_03a00bcc:
      return unaff_x24 & 0xffffffff;
    }
    uStack0000000000000050 = (undefined4)unaff_d13;
    uStack0000000000000054 = (undefined4)unaff_d9;
    if (*(int *)(*(long *)PTR_DAT_04235bb0 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uStack0000000000000060 = (uint)unaff_d15;
    uStack0000000000000004 = uStack0000000000000068;
    fStack0000000000000040 =
         (float)FUN_039ffe4c(uStack000000000000007c,unaff_d10,unaff_d15,uStack0000000000000078,
                             uStack0000000000000074,uStack0000000000000070);
    uVar2 = unaff_d12 & 0xffffffff;
    uVar9 = unaff_d14 & 0xffffffff;
    uStack0000000000000004 = uStack0000000000000068;
    fStack000000000000003c =
         (float)FUN_039ffe4c(uStack0000000000000078,uStack0000000000000074,uStack0000000000000070,
                             unaff_s11,uVar2,uVar9);
LAB_03a00b1c:
    uStack0000000000000004 = uStack0000000000000068;
    fVar6 = (float)FUN_039ffe4c(unaff_s11,uVar2,uVar9,uStack0000000000000058,uStack0000000000000054,
                                uStack0000000000000050);
    uStack0000000000000004 = uStack0000000000000068;
    unaff_d15 = (ulong)uStack0000000000000060;
    fVar7 = (float)FUN_039ffe4c(uStack0000000000000058,uStack0000000000000054,uStack0000000000000050
                                ,uStack000000000000007c,unaff_d10,unaff_d15);
    bVar3 = 0;
    if (fStack000000000000003c <= fStack0000000000000040) {
      fStack0000000000000040 = fStack000000000000003c;
    }
    if (fVar6 <= fStack0000000000000040) {
      fStack0000000000000040 = fVar6;
    }
    if (fVar7 <= fStack0000000000000040) {
      fStack0000000000000040 = fVar7;
    }
    if (fStack0000000000000040 < fStack000000000000005c) {
      in_stack_00000038 = (uint)unaff_x24;
      fStack000000000000005c = fStack0000000000000040;
    }
    while( true ) {
      unaff_x21 = unaff_x21 - 1;
      unaff_x26 = unaff_x26 + unaff_x29;
      unaff_x25 = unaff_x25 - 1;
      unaff_x27 = unaff_x27 + 1;
      if (unaff_x25 == 0) {
        do {
          lVar4 = *(long *)(unaff_x19 + 0x368);
          unaff_x24 = unaff_x24 + 1;
          if (lVar4 == 0) goto LAB_03a00bc8;
          if ((long)*(int *)(lVar4 + 0x24) <= (long)unaff_x24) {
            return (ulong)in_stack_00000038;
          }
          lVar4 = *(long *)(lVar4 + 0x40);
          if (lVar4 == 0) goto LAB_03a00bc8;
          if (*(uint *)(lVar4 + 0x18) <= unaff_x24) goto LAB_03a00c08;
          lVar4 = lVar4 + unaff_x24 * 0x18;
          unaff_x27 = (ulong)*(uint *)(lVar4 + 0x28);
          uVar11 = *(uint *)(lVar4 + 0x30);
          unaff_x22 = (ulong)uVar11;
          if (DAT_044a2dbb == '\0') {
            FUN_01d7d918(Field_System_AppDomainSetup_domain_initializer_args);
            DAT_044a2dbb = '\x01';
          }
        } while ((int)uVar11 < 1);
        bVar3 = 0;
        unaff_x21 = (ulong)(uVar11 - 1);
        unaff_x26 = unaff_x27 << 0x20;
        puVar5 = *(undefined4 **)
                  (*(long *)Field_System_AppDomainSetup_domain_initializer_args + 0xb8);
        uStack0000000000000078 = *puVar5;
        uStack0000000000000074 = puVar5[1];
        unaff_d10 = (ulong)uStack0000000000000074;
        uStack0000000000000070 = puVar5[2];
        unaff_d15 = (ulong)uStack0000000000000070;
        unaff_x25 = unaff_x22;
        uStack000000000000007c = uStack0000000000000078;
      }
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar4 == 0)) goto LAB_03a00bc8;
      if (*(uint *)(lVar4 + 0x18) <= unaff_x27) goto LAB_03a00c08;
      lVar4 = lVar4 + (unaff_x26 >> 0x20) * unaff_x28;
      iVar1 = *(int *)(lVar4 + 100);
      uVar12 = *(undefined4 *)(lVar4 + 0x128);
      uVar11 = *(uint *)(lVar4 + 0x148);
      unaff_d12 = (ulong)uVar11;
      unaff_d9 = (ulong)*(uint *)(lVar4 + 0x150);
      if ((*(byte *)(lVar4 + 0x194) & (bVar3 ^ 0xff) & 1) != 0) break;
      if (bVar3 == 0) {
        bVar3 = 0;
      }
      else {
        if (unaff_x21 == 0) {
LAB_03a009e0:
          if (unaff_x20 == 0) {
LAB_03a00bc8:
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          goto LAB_03a009e4;
        }
LAB_03a009a0:
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar4 == 0)) goto LAB_03a00bc8;
        if ((ulong)*(uint *)(lVar4 + 0x18) <= unaff_x27 + 1) {
LAB_03a00c08:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (iVar1 != *(int *)(lVar4 + (unaff_x26 + unaff_x29 >> 0x20) * unaff_x28 + 100))
        goto LAB_03a009e0;
        bVar3 = 1;
      }
    }
    if (unaff_x20 == 0) goto LAB_03a00bc8;
    uVar10 = *(undefined4 *)(lVar4 + 0x11c);
    unaff_d15 = 0;
    unaff_d10 = unaff_d9;
    uStack000000000000007c = FUN_03d7d548(uVar10);
    uStack0000000000000070 = 0;
    uStack0000000000000074 = uVar11;
    uStack0000000000000078 = FUN_03d7d548(uVar10);
    if ((int)unaff_x22 == 1) {
      uStack0000000000000050 = 0;
      uStack0000000000000058 = FUN_03d7d548(uVar12);
      uVar8 = 0;
      unaff_s11 = FUN_03d7d548(uVar12);
      if (*(int *)(*(long *)PTR_DAT_04235bb0 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uStack0000000000000000 = uStack0000000000000078;
      uStack0000000000000004 = uStack0000000000000074;
      uStack0000000000000008 = uStack0000000000000070;
      uStack0000000000000010 = unaff_s11;
      uStack0000000000000014 = uVar11;
      uStack0000000000000018 = uVar8;
      uVar2 = FUN_039ffd8c(uStack000000000000006c,uStack0000000000000068,uStack0000000000000064,
                           uStack000000000000007c,unaff_d10,unaff_d15);
      if ((uVar2 & 1) != 0) goto LAB_03a00bcc;
      uStack0000000000000054 = (undefined4)unaff_d9;
      if (*(int *)(*(long *)PTR_DAT_04235bb0 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uStack0000000000000060 = (uint)unaff_d15;
      uStack0000000000000004 = uStack0000000000000068;
      fStack0000000000000040 =
           (float)FUN_039ffe4c(uStack000000000000007c,unaff_d10,unaff_d15,uStack0000000000000078,
                               uStack0000000000000074,uStack0000000000000070);
      uVar2 = (ulong)uVar11;
      uVar9 = (ulong)uVar8;
      uStack0000000000000004 = uStack0000000000000068;
      fStack000000000000003c =
           (float)FUN_039ffe4c(uStack0000000000000078,uStack0000000000000074,uStack0000000000000070,
                               unaff_s11,uVar2,uVar9);
      goto LAB_03a00b1c;
    }
    if (unaff_x21 != 0) goto LAB_03a009a0;
LAB_03a009e4:
    unaff_d13 = 0;
    uStack0000000000000058 = FUN_03d7d548(uVar12);
    unaff_d14 = 0;
    unaff_s11 = FUN_03d7d548(uVar12);
    param_2 = uStack0000000000000070;
    if (*(int *)(*(long *)PTR_DAT_04235bb0 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
  } while( true );
}


