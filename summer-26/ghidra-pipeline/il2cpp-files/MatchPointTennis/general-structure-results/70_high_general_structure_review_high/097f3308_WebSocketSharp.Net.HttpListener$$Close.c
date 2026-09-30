/*
FUNCTION_NAME: WebSocketSharp.Net.HttpListener$$Close
ENTRY_POINT: 097f3308
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


uint WebSocketSharp_Net_HttpListener__Close(float param_1,float param_2,float param_3,float param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar8;
  undefined8 *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 in_stack_000000b0;
  undefined4 in_stack_000000d0;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000150;
  undefined4 uStack00000000000001b0;
  undefined4 uStack00000000000001b4;
  
  fVar14 = DAT_01c759c8;
  fVar16 = (unaff_s9 - param_2) * (unaff_s9 - param_2);
  fVar17 = (unaff_s10 - param_3) * (unaff_s10 - param_3);
  fVar19 = (unaff_s11 - param_4) * (unaff_s11 - param_4);
  uVar9 = unaff_w21 | 0x2000;
  if (fVar19 + fVar17 + param_1 * param_1 + fVar16 < DAT_01c759c8) {
    uVar9 = unaff_w21;
  }
  if ((uVar9 & 0x8080808) == 0) {
    uVar5 = FUN_097de7d0();
    uVar6 = FUN_097de7d0();
    if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
    }
    uVar7 = FUN_09531730(uVar5,uVar6,0);
    if ((uVar7 & 1) == 0) {
      iVar3 = FUN_097deb44();
      iVar4 = FUN_097deb44();
      if (iVar3 == iVar4) {
        uVar5 = FUN_097da2bc();
        uVar6 = FUN_097da2bc();
        uVar7 = FUN_096ac31c(uVar5,uVar6,0);
        if ((uVar7 & 1) == 0) {
          auVar22 = FUN_097de820();
          auVar23 = FUN_097de820();
          uVar7 = FUN_097fcb40(auVar22._0_8_,auVar22._8_8_,auVar23._0_8_,auVar23._8_8_,0);
          if ((uVar7 & 1) == 0) {
            iVar3 = FUN_097de874();
            iVar4 = FUN_097de874();
            if (iVar3 == iVar4) {
              fVar10 = (float)FUN_097debe8();
              fVar11 = (float)FUN_097debe8();
              if (fVar10 == fVar11) {
                uVar5 = FUN_097dde08();
                uVar6 = FUN_097dde08();
                uVar7 = FUN_096ac31c(uVar5,uVar6,0);
                if ((uVar7 & 1) == 0) {
                  uVar5 = FUN_097ded78();
                  uVar6 = FUN_097ded78();
                  uVar7 = FUN_096ac31c(uVar5,uVar6,0);
                  if ((uVar7 & 1) == 0) {
                    iVar3 = FUN_097de780();
                    iVar4 = FUN_097de780();
                    if (iVar3 == iVar4) {
                      uVar5 = FUN_097de914();
                      uVar6 = FUN_097de914();
                      uVar7 = FUN_096ac31c(uVar5,uVar6,0);
                      if ((uVar7 & 1) == 0) goto LAB_097f34e0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar9 = uVar9 | 0x808;
  }
LAB_097f34e0:
  if ((uVar9 >> 0xb & 1) == 0) {
    FUN_097de464(&stack0x00000080);
    FUN_097de464(&stack0x000001a0);
    uVar5 = *(undefined8 *)(unaff_x24 + 0xc);
    uVar18 = *(undefined8 *)(unaff_x25 + 0x28);
    uVar6 = *(undefined8 *)(unaff_x25 + 0x20);
    uVar21 = *(undefined8 *)(unaff_x25 + 0x34);
    uVar20 = *(undefined8 *)(unaff_x25 + 0x2c);
    *(undefined8 *)(unaff_x24 + 0x108) = in_stack_00000088;
    *(undefined8 *)(unaff_x24 + 0x100) = in_stack_00000080;
    *(undefined8 *)(unaff_x25 + 0x14) = *(undefined8 *)(unaff_x24 + 0x14);
    *(undefined8 *)(unaff_x25 + 0xc) = uVar5;
    *(undefined8 *)(unaff_x24 + 0xe8) = uVar18;
    *(undefined8 *)(unaff_x24 + 0xe0) = uVar6;
    *(undefined8 *)(unaff_x24 + 0xf4) = uVar21;
    *(undefined8 *)(unaff_x24 + 0xec) = uVar20;
    uVar7 = FUN_096ce56c(&stack0x00000180,&stack0x00000160,0);
    fVar19 = (float)uVar20;
    fVar17 = (float)uVar6;
    fVar16 = (float)uVar5;
    if ((uVar7 & 1) == 0) {
      iVar3 = FUN_097deaf4();
      iVar4 = FUN_097deaf4();
      if (iVar3 == iVar4) {
        fVar12 = (float)FUN_097deb94();
        fVar10 = fVar16;
        fVar11 = fVar17;
        fVar15 = fVar19;
        fVar13 = (float)FUN_097deb94();
        fVar10 = fVar16 - fVar10;
        fVar19 = fVar19 - fVar15;
        fVar17 = (fVar17 - fVar11) * (fVar17 - fVar11);
        fVar16 = fVar19 * fVar19;
        if (fVar16 + fVar17 + (fVar12 - fVar13) * (fVar12 - fVar13) + fVar10 * fVar10 < fVar14)
        goto LAB_097f35a4;
      }
    }
    uVar9 = uVar9 | 0x800;
  }
LAB_097f35a4:
  iVar3 = FUN_097dec88();
  iVar4 = FUN_097dec88();
  if (iVar3 != iVar4) {
    uVar9 = uVar9 | 0x100800;
  }
  iVar3 = FUN_097decd8();
  iVar4 = FUN_097decd8();
  puVar2 = System_Func<DebugUI_Widget,_bool>_TypeInfo;
  if (iVar3 != iVar4) {
    uVar9 = uVar9 | 8;
  }
  uVar7 = FUN_0676eab4(unaff_x20 + 0x18,*(undefined8 *)(unaff_x19 + 0x18),*unaff_x23);
  uVar8 = uVar9;
  if ((uVar7 & 1) == 0) {
    auVar22 = FUN_097de3c0();
    auVar23 = FUN_097de3c0();
    uVar7 = FUN_096ace90(auVar22._0_8_,auVar22._8_8_,auVar23._0_8_,auVar23._8_8_,0);
    if ((uVar7 & 1) == 0) {
      FUN_097de358(&stack0x00000080);
      FUN_097de358(&stack0x000001a0);
      in_stack_00000150 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
      uVar6 = *(undefined8 *)(unaff_x25 + 0x28);
      uVar5 = *(undefined8 *)(unaff_x25 + 0x20);
      in_stack_00000130 = CONCAT44(uStack00000000000001b4,uStack00000000000001b0);
      *(undefined8 *)(unaff_x24 + 200) = in_stack_00000088;
      *(undefined8 *)(unaff_x24 + 0xc0) = in_stack_00000080;
      *(undefined8 *)(unaff_x24 + 0xa8) = uVar6;
      *(undefined8 *)(unaff_x24 + 0xa0) = uVar5;
      uVar7 = FUN_096aca04(&stack0x00000140,&stack0x00000120,0);
      fVar16 = (float)uVar5;
      if ((uVar7 & 1) == 0) {
        FUN_097de6c4(&stack0x00000080);
        FUN_097de6c4(&stack0x000001a0);
        in_stack_00000110 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
        uVar6 = *(undefined8 *)(unaff_x25 + 0x28);
        uVar5 = *(undefined8 *)(unaff_x25 + 0x20);
        in_stack_000000f0 = CONCAT44(uStack00000000000001b4,uStack00000000000001b0);
        *(undefined8 *)(unaff_x24 + 0x88) = in_stack_00000088;
        *(undefined8 *)(unaff_x24 + 0x80) = in_stack_00000080;
        *(undefined8 *)(unaff_x24 + 0x68) = uVar6;
        *(undefined8 *)(unaff_x24 + 0x60) = uVar5;
        uVar7 = FUN_096b0fd0(&stack0x00000100,&stack0x000000e0,0);
        fVar16 = (float)uVar5;
        if ((uVar7 & 1) == 0) {
          FUN_097de51c(&stack0x00000080);
          FUN_097de51c(&stack0x000001a0);
          uVar6 = *(undefined8 *)(unaff_x25 + 0x28);
          uVar5 = *(undefined8 *)(unaff_x25 + 0x20);
          *(undefined8 *)(unaff_x24 + 0x48) = in_stack_00000088;
          *(undefined8 *)(unaff_x24 + 0x40) = in_stack_00000080;
          in_stack_000000d0 = uStack0000000000000090;
          *(undefined8 *)(unaff_x24 + 0x28) = uVar6;
          *(undefined8 *)(unaff_x24 + 0x20) = uVar5;
          in_stack_000000b0 = uStack00000000000001b0;
          uVar7 = FUN_096b091c(&stack0x000000c0,&stack0x000000a0,0);
          fVar16 = (float)uVar5;
          uVar8 = uVar9 | 0x200;
          if ((uVar7 & 1) == 0) {
            uVar8 = uVar9;
          }
          goto LAB_097f36d8;
        }
      }
    }
    uVar8 = uVar9 | 0x200;
  }
LAB_097f36d8:
  puVar1 = System_Func<fsDataType,_string>_TypeInfo;
  uVar7 = FUN_0676ef6c(unaff_x20 + 0x20,*(undefined8 *)(unaff_x19 + 0x20),*(undefined8 *)puVar2);
  if ((uVar7 & 1) == 0) {
    if (*(int *)(*(long *)UnityEngine_SerializeField_var + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar7 = FUN_097fafb8();
    if ((uVar7 & 1) == 0) {
      uVar8 = uVar8 | 0x8000;
    }
  }
  puVar2 = System_Func<DefaultEventSystem_LegacyInputProcessor,_EventBase>_TypeInfo;
  uVar7 = FUN_0676f42c(unaff_x20 + 0x28,*(undefined8 *)(unaff_x19 + 0x28),*(undefined8 *)puVar1);
  if ((uVar7 & 1) != 0) goto LAB_097f3ad0;
  if ((uVar8 >> 0xd & 1) == 0) {
    fVar12 = (float)FUN_097dd440();
    fVar10 = fVar16;
    fVar11 = fVar17;
    fVar15 = fVar19;
    fVar13 = (float)FUN_097dd440();
    fVar14 = DAT_01c759c8;
    fVar10 = fVar16 - fVar10;
    fVar19 = fVar19 - fVar15;
    fVar17 = (fVar17 - fVar11) * (fVar17 - fVar11);
    fVar16 = fVar19 * fVar19;
    if (fVar16 + fVar17 + (fVar12 - fVar13) * (fVar12 - fVar13) + fVar10 * fVar10 < DAT_01c759c8) {
      fVar12 = (float)FUN_097dd65c();
      fVar10 = fVar16;
      fVar11 = fVar17;
      fVar15 = fVar19;
      fVar13 = (float)FUN_097dd65c();
      fVar10 = fVar16 - fVar10;
      fVar19 = fVar19 - fVar15;
      fVar17 = (fVar17 - fVar11) * (fVar17 - fVar11);
      fVar16 = fVar19 * fVar19;
      if (fVar16 + fVar17 + (fVar12 - fVar13) * (fVar12 - fVar13) + fVar10 * fVar10 < fVar14) {
        fVar12 = (float)FUN_097dd7a0();
        fVar10 = fVar16;
        fVar11 = fVar17;
        fVar15 = fVar19;
        fVar13 = (float)FUN_097dd7a0();
        fVar10 = fVar16 - fVar10;
        fVar19 = fVar19 - fVar15;
        fVar17 = (fVar17 - fVar11) * (fVar17 - fVar11);
        fVar16 = fVar19 * fVar19;
        if (fVar16 + fVar17 + (fVar12 - fVar13) * (fVar12 - fVar13) + fVar10 * fVar10 < fVar14) {
          fVar12 = (float)FUN_097dd844();
          fVar10 = fVar16;
          fVar11 = fVar17;
          fVar15 = fVar19;
          fVar13 = (float)FUN_097dd844();
          fVar10 = fVar16 - fVar10;
          fVar19 = fVar19 - fVar15;
          fVar17 = (fVar17 - fVar11) * (fVar17 - fVar11);
          fVar16 = fVar19 * fVar19;
          if (fVar16 + fVar17 + (fVar12 - fVar13) * (fVar12 - fVar13) + fVar10 * fVar10 < fVar14) {
            fVar12 = (float)FUN_097dd8e8();
            fVar10 = fVar16;
            fVar11 = fVar17;
            fVar15 = fVar19;
            fVar13 = (float)FUN_097dd8e8();
            fVar10 = fVar16 - fVar10;
            fVar19 = fVar19 - fVar15;
            fVar17 = (fVar17 - fVar11) * (fVar17 - fVar11);
            fVar16 = fVar19 * fVar19;
            if (fVar16 + fVar17 + (fVar12 - fVar13) * (fVar12 - fVar13) + fVar10 * fVar10 < fVar14)
            goto LAB_097f38f8;
          }
        }
      }
    }
    uVar8 = uVar8 | 0x2000;
  }
LAB_097f38f8:
  if ((uVar8 >> 0xb & 1) == 0) {
    FUN_097dd494(&stack0x00000080);
    FUN_097dd494(&stack0x00000040);
    in_stack_00000078 = *(undefined8 *)(unaff_x24 + 0x18);
    uVar5 = *(undefined8 *)(unaff_x24 + 0x10);
    in_stack_00000068 = in_stack_00000088;
    in_stack_00000060 = in_stack_00000080;
    in_stack_00000070 = uVar5;
    uVar7 = FUN_097f9cc8(&stack0x00000060,&stack0x00000040,0);
    fVar16 = (float)uVar5;
    if ((uVar7 & 1) == 0) {
      auVar22 = FUN_097dd4f4();
      auVar23 = FUN_097dd4f4();
      uVar7 = FUN_0964b924(auVar22._0_8_,auVar22._8_8_ & 0xffffffff,auVar23._0_8_,
                           auVar23._8_8_ & 0xffffffff,0);
      if ((uVar7 & 1) == 0) {
        auVar22 = FUN_097dd54c();
        auVar23 = FUN_097dd54c();
        uVar7 = FUN_0964b924(auVar22._0_8_,auVar22._8_8_ & 0xffffffff,auVar23._0_8_,
                             auVar23._8_8_ & 0xffffffff,0);
        if ((uVar7 & 1) == 0) {
          uVar5 = FUN_097dd5a4();
          uVar6 = FUN_097dd5a4();
          uVar7 = FUN_0964c278(uVar5,uVar6,0);
          if ((uVar7 & 1) == 0) {
            FUN_097dd5f4(&stack0x00000080);
            FUN_097dd5f4(&stack0x00000008);
            in_stack_00000028 = in_stack_00000088;
            in_stack_00000020 = in_stack_00000080;
            in_stack_00000030 = uStack0000000000000090;
            uVar7 = FUN_0964c774(&stack0x00000020,&stack0x00000008,0);
            if ((uVar7 & 1) == 0) goto LAB_097f3a0c;
          }
        }
      }
    }
    uVar8 = uVar8 | 0x800;
  }
LAB_097f3a0c:
  uVar5 = FUN_097dd6b0();
  uVar6 = FUN_097dd6b0();
  uVar7 = FUN_096ac31c(uVar5,uVar6,0);
  if ((uVar7 & 1) == 0) {
    uVar5 = FUN_097dd700();
    uVar6 = FUN_097dd700();
    uVar7 = FUN_096ac31c(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_097f3a84;
    uVar5 = FUN_097dd93c();
    uVar6 = FUN_097dd93c();
    uVar7 = FUN_096ac31c(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_097f3a84;
    uVar5 = FUN_097dd98c();
    uVar6 = FUN_097dd98c();
    uVar7 = FUN_096ac31c(uVar5,uVar6,0);
    uVar9 = uVar8 | 0x880;
    if ((uVar7 & 1) == 0) {
      uVar9 = uVar8;
    }
  }
  else {
LAB_097f3a84:
    uVar9 = uVar8 | 0x880;
  }
  fVar14 = (float)FUN_097de0d8();
  fVar10 = (float)FUN_097de0d8();
  uVar8 = uVar9 | 0x1000;
  if (fVar14 == fVar10) {
    uVar8 = uVar9;
  }
  iVar3 = FUN_097de128();
  iVar4 = FUN_097de128();
  if (iVar3 != iVar4) {
    uVar8 = uVar8 | 0x48;
  }
LAB_097f3ad0:
  uVar7 = FUN_0676e5f4(unaff_x20 + 0x10,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)puVar2);
  if ((uVar7 & 1) == 0) {
    iVar3 = FUN_097de414();
    iVar4 = FUN_097de414();
    if (iVar3 == iVar4) {
      fVar14 = (float)FUN_097dea54();
      fVar10 = (float)FUN_097dea54();
      uVar9 = uVar8;
      if (fVar14 != fVar10) {
        uVar9 = uVar8 | 0x808;
      }
    }
    else {
      uVar9 = uVar8 | 0x808;
    }
    fVar15 = (float)FUN_097de72c();
    fVar14 = fVar16;
    fVar10 = fVar17;
    fVar11 = fVar19;
    fVar12 = (float)FUN_097de72c();
    uVar8 = uVar9 | 0x2000;
    if ((fVar19 - fVar11) * (fVar19 - fVar11) +
        (fVar17 - fVar10) * (fVar17 - fVar10) +
        (fVar15 - fVar12) * (fVar15 - fVar12) + (fVar16 - fVar14) * (fVar16 - fVar14) < DAT_01c759c8
       ) {
      uVar8 = uVar9;
    }
    if ((uVar8 >> 0xb & 1) == 0) {
      iVar3 = FUN_097de8c4();
      iVar4 = FUN_097de8c4();
      if (iVar3 == iVar4) {
        iVar3 = FUN_097de964();
        iVar4 = FUN_097de964();
        if (iVar3 == iVar4) {
          iVar3 = FUN_097de9b4();
          iVar4 = FUN_097de9b4();
          if (iVar3 == iVar4) {
            iVar3 = FUN_097dea04();
            iVar4 = FUN_097dea04();
            if (iVar3 == iVar4) {
              iVar3 = FUN_097deaa4();
              iVar4 = FUN_097deaa4();
              if (iVar3 == iVar4) {
                iVar3 = FUN_097dec38();
                iVar4 = FUN_097dec38();
                if (iVar3 == iVar4) {
                  return uVar8;
                }
              }
            }
          }
        }
      }
      uVar8 = uVar8 | 0x800;
    }
  }
  return uVar8;
}


