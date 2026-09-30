/*
FUNCTION_NAME: OVRPlugin.OVRP_1_67_0$$.cctor
ENTRY_POINT: 069760f0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_67_0___cctor(float param_1,float param_2,float param_3,long *param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  long lVar12;
  uint unaff_w19;
  long unaff_x20;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *unaff_x22;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float unaff_s8;
  float fVar30;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar31;
  float unaff_s14;
  float fVar32;
  float fVar33;
  float fStack0000000000000014;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined8 in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  float fStack000000000000006c;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 uStack0000000000000088;
  float fStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined4 uStack00000000000000b8;
  float fStack00000000000000bc;
  undefined4 uStack00000000000000c0;
  undefined8 uStack00000000000000c4;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined4 uStack00000000000000e8;
  float fStack00000000000000ec;
  undefined4 uStack00000000000000f0;
  undefined8 uStack00000000000000f4;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined4 uStack0000000000000118;
  float fStack000000000000011c;
  undefined4 uStack0000000000000120;
  undefined8 uStack0000000000000124;
  
  if (param_4 != (long *)0x0) {
    (**(code **)(*param_4 + 0x1e8))(param_4,*(undefined8 *)(*param_4 + 0x1f0));
    fVar18 = (float)FUN_07c8b18c(0);
    if (*(long *)(unaff_x20 + 0x58) != 0) {
      fVar25 = unaff_s8;
      fVar22 = unaff_s9;
      fVar19 = (float)FUN_07cac7a8(*(long *)(unaff_x20 + 0x58),0);
      fVar20 = (float)FUN_07c8b18c(180.0 / (float)(unaff_w19 & 0x7ffffffe),fVar19,fVar25,fVar22,0);
      if (DAT_08974d8a == '\0') {
        FUN_03a8a718(PTR_DAT_08486860);
        DAT_08974d8a = '\x01';
      }
      puVar3 = PTR_DAT_084b7448;
      lVar8 = *(long *)(unaff_x20 + 0x70);
      if (lVar8 != 0) {
        uVar17 = 0;
        pfVar11 = *(float **)(*(long *)PTR_DAT_08486860 + 0xb8);
        fVar33 = *pfVar11;
        fVar32 = pfVar11[1];
        fVar31 = pfVar11[2];
        fVar30 = pfVar11[3];
        *(undefined4 *)(lVar8 + 0x18) = 0;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        lVar8 = 0x60;
        fStack0000000000000014 = unaff_s14;
        fStack000000000000006c = unaff_s11;
        if (in_stack_00000058._4_4_ < unaff_s11) {
          lVar8 = 0x68;
        }
        do {
          fVar23 = (unaff_s9 * fVar33 + unaff_s10 * fVar32 + unaff_s8 * fVar30) - fVar18 * fVar31;
          fVar24 = (fVar18 * fVar32 + unaff_s10 * fVar31 + unaff_s9 * fVar30) - unaff_s8 * fVar33;
          fVar21 = (float)FUN_07c8b548((unaff_s8 * fVar31 + unaff_s10 * fVar33 + fVar18 * fVar30) -
                                       unaff_s9 * fVar32,fVar23,fVar24,
                                       ((unaff_s10 * fVar30 - fVar18 * fVar33) - unaff_s8 * fVar32)
                                       - unaff_s9 * fVar31,param_1 * unaff_s14,param_2 * unaff_s14,
                                       param_3 * unaff_s14,0);
          lVar15 = *(long *)(unaff_x20 + lVar8);
          uVar5 = FUN_07c9da10(in_stack_00000050,0);
          lVar9 = *(long *)PTR_DAT_08486c50;
          if (in_stack_00000058._4_4_ < fStack000000000000006c) {
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_03ae8be4(lVar9);
            }
            uVar6 = FUN_07d2b360(fStack0000000000000060 + fVar21,fStack0000000000000064 + fVar23,
                                 in_stack_00000068 + fVar24,fStack000000000000006c,
                                 uStack0000000000000048,uStack0000000000000044,
                                 uStack0000000000000040,uStack000000000000004c,lVar15,uVar5,1,0);
          }
          else {
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_03ae8be4(lVar9);
            }
            uVar6 = FUN_07d2a554(fStack0000000000000060 + fVar21,fStack0000000000000064 + fVar23,
                                 in_stack_00000068 + fVar24,uStack0000000000000048,
                                 uStack0000000000000044,uStack0000000000000040,
                                 uStack000000000000004c,lVar15,uVar5,1,0);
          }
          if (0 < (int)uVar6) {
            if (lVar15 == 0) goto LAB_06976640;
            uVar16 = 0;
            puVar14 = (undefined8 *)(lVar15 + 0x20);
            do {
              if (*(uint *)(lVar15 + 0x18) <= uVar16) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c8();
              }
              lVar9 = *(long *)(unaff_x20 + 0x70);
              if (lVar9 == 0) goto LAB_06976640;
              in_stack_000000d8 = puVar14[1];
              in_stack_000000d0 = *puVar14;
              in_stack_000000e0 = puVar14[2];
              uStack00000000000000f4 = *(undefined8 *)((long)puVar14 + 0x24);
              uVar26 = *(undefined8 *)((long)puVar14 + 0x1c);
              lVar10 = *(long *)(lVar9 + 0x10);
              lVar12 = *(long *)puVar3;
              uStack00000000000000e8 = (undefined4)puVar14[3];
              fStack00000000000000ec = (float)uVar26;
              uStack00000000000000f0 = (undefined4)((ulong)uVar26 >> 0x20);
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar10 == 0) goto LAB_06976640;
              uVar1 = *(uint *)(lVar9 + 0x18);
              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                lVar10 = lVar10 + (long)(int)uVar1 * 0x2c;
                *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar10 + 0x28) = in_stack_000000d8;
                *(undefined8 *)(lVar10 + 0x20) = in_stack_000000d0;
                *(ulong *)(lVar10 + 0x38) = CONCAT44(fStack00000000000000ec,uStack00000000000000e8);
                *(undefined8 *)(lVar10 + 0x30) = in_stack_000000e0;
                *(undefined8 *)(lVar10 + 0x44) = uStack00000000000000f4;
                *(undefined8 *)(lVar10 + 0x3c) = uVar26;
              }
              else {
                uStack0000000000000118 = uStack00000000000000e8;
                in_stack_00000100 = in_stack_000000d0;
                in_stack_00000108 = in_stack_000000d8;
                in_stack_00000110 = in_stack_000000e0;
                fStack000000000000011c = fStack00000000000000ec;
                uStack0000000000000120 = uStack00000000000000f0;
                uStack0000000000000124 = uStack00000000000000f4;
                FUN_04e28380(lVar9,&stack0x00000100,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
              uVar16 = uVar16 + 1;
              puVar14 = (undefined8 *)((long)puVar14 + 0x2c);
            } while (uVar6 != uVar16);
          }
          puVar4 = PTR_DAT_084b7460;
          puVar2 = PTR_DAT_08497e38;
          uVar17 = uVar17 + 1;
          fVar27 = fVar20 * fVar33;
          fVar23 = fVar19 * fVar33;
          fVar28 = fVar19 * fVar32;
          fVar21 = fVar25 * fVar33;
          fVar24 = fVar20 * fVar32;
          fVar29 = fVar25 * fVar31;
          fVar33 = (fVar25 * fVar32 + fVar22 * fVar33 + fVar20 * fVar30) - fVar19 * fVar31;
          fVar32 = (fVar20 * fVar31 + fVar22 * fVar32 + fVar19 * fVar30) - fVar21;
          fVar31 = (fVar23 + fVar22 * fVar31 + fVar25 * fVar30) - fVar24;
          fVar30 = ((fVar22 * fVar30 - fVar27) - fVar28) - fVar29;
        } while (uVar17 != (unaff_w19 | 1));
        lVar8 = *(long *)(unaff_x20 + 0x70);
        if (lVar8 != 0) {
          if (*(int *)(lVar8 + 0x18) < 1) {
            return 0;
          }
          fVar18 = 3.4028235e+38;
          iVar13 = 0;
          uStack00000000000000c4 = 0;
          uStack00000000000000c0 = 0;
          in_stack_000000a8 = 0;
          in_stack_000000a0 = 0;
          uStack00000000000000b8 = 0;
          fStack00000000000000bc = 0.0;
          in_stack_000000b0 = 0;
          do {
            if (*(int *)(lVar8 + 0x18) <= iVar13) {
              if (fVar18 == 3.4028235e+38) {
                return 0;
              }
              unaff_x22[1] = in_stack_000000a8;
              *unaff_x22 = in_stack_000000a0;
              unaff_x22[3] = CONCAT44(fStack00000000000000bc,uStack00000000000000b8);
              unaff_x22[2] = in_stack_000000b0;
              *(undefined8 *)((long)unaff_x22 + 0x24) = uStack00000000000000c4;
              *(ulong *)((long)unaff_x22 + 0x1c) =
                   CONCAT44(uStack00000000000000c0,fStack00000000000000bc);
              return 1;
            }
            FUN_04e28000(&stack0x00000100,lVar8,iVar13,*(undefined8 *)puVar4);
            in_stack_00000078 = in_stack_00000108;
            in_stack_00000070 = in_stack_00000100;
            uStack0000000000000088 = uStack0000000000000118;
            in_stack_00000080 = in_stack_00000110;
            uStack0000000000000094 = uStack0000000000000124;
            fStack000000000000008c = fStack000000000000011c;
            uStack0000000000000090 = uStack0000000000000120;
            if (*(long *)(unaff_x20 + 0x50) == 0) break;
            lVar8 = *(long *)(*(long *)(unaff_x20 + 0x50) + 0xd0);
            uVar26 = in_stack_00000110;
            fVar25 = fStack000000000000011c;
            uVar7 = FUN_07d2fce4(&stack0x00000070,0);
            fVar22 = (float)uVar26;
            if (lVar8 == 0) break;
            uVar16 = FUN_049d96b4(lVar8,uVar7,*(undefined8 *)puVar2);
            if ((uVar16 & 1) == 0) {
              fVar19 = (float)FUN_07d2fd90(&stack0x00000070,0);
              if (*(long *)(unaff_x20 + 0x58) == 0) break;
              fVar25 = fVar25 - in_stack_00000068;
              fVar22 = (float)FUN_07cadd74(fVar19 - fStack0000000000000060,
                                           fVar22 - fStack0000000000000064,
                                           *(long *)(unaff_x20 + 0x58),0);
              if ((((-fStack000000000000006c <= fVar22) && (fVar22 <= fStack000000000000006c)) &&
                  (fVar25 <= fStack0000000000000014)) &&
                 ((-fStack0000000000000014 <= fVar25 &&
                  (fVar25 = (float)FUN_07d2fdc0(&stack0x00000070,0), fVar25 < fVar18)))) {
                fVar18 = (float)FUN_07d2fdc0(&stack0x00000070,0);
                in_stack_000000a8 = in_stack_00000078;
                in_stack_000000a0 = in_stack_00000070;
                in_stack_000000b0 = in_stack_00000080;
                uStack00000000000000c4 = uStack0000000000000094;
                uStack00000000000000b8 = uStack0000000000000088;
                fStack00000000000000bc = fStack000000000000008c;
                uStack00000000000000c0 = uStack0000000000000090;
              }
            }
            lVar8 = *(long *)(unaff_x20 + 0x70);
            iVar13 = iVar13 + 1;
          } while (lVar8 != 0);
        }
      }
    }
  }
LAB_06976640:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


