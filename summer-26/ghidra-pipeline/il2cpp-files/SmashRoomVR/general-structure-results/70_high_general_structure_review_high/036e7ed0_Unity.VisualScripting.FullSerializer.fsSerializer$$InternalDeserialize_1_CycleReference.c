/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$InternalDeserialize_1_CycleReference
ENTRY_POINT: 036e7ed0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;telemetry_or_network_hits_18
*/


/* WARNING: Removing unreachable block (ram,0x036eca44) */

undefined4
Unity_VisualScripting_FullSerializer_fsSerializer__InternalDeserialize_1_CycleReference
          (long param_1,long param_2)

{
  int iVar1;
  short sVar2;
  undefined *puVar3;
  char in_NG;
  bool in_ZR;
  char in_OV;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  long lVar11;
  long *plVar12;
  uint *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long in_x9;
  long lVar16;
  int in_w10;
  undefined8 uVar17;
  long lVar18;
  int unaff_w24;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulong uVar23;
  ulong uVar24;
  ulong in_d3;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uStack0000000000000004;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined4 uStack0000000000000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  
  if (!in_ZR && in_NG == in_OV) {
    if (in_w10 < 0x3434823) {
      if (in_w10 < 0x765e9b) {
        if (in_w10 < 0x719366) {
          if (in_w10 < 0x6afe3e) {
            if (in_w10 == 0x6a5e93) goto LAB_036ea3d4;
            if (in_w10 != 0x6afe3d) {
              return 0;
            }
LAB_036e9ff4:
            *(undefined8 *)(in_stack_00000020 + 0x350) = 0;
            return 1;
          }
          if (in_w10 == 0x6ba308) {
Unity_VisualScripting_FullSerializer_fsMetaProperty__set_CanRead:
            *(undefined4 *)(in_stack_00000020 + 0x2b0) = 0;
            return 1;
          }
          if (in_w10 != 0x6ccb9a) {
            if (in_w10 != 0x719365) {
              return 0;
            }
            goto LAB_036e8acc;
          }
LAB_036e9ea0:
          *(undefined1 *)(in_stack_00000020 + 0x474) = 0;
          return 1;
        }
        if (0x73f193 < in_w10) {
          if (in_w10 == 0x74913d) goto LAB_036e9ff4;
          if (in_w10 == 0x753608)
          goto Unity_VisualScripting_FullSerializer_fsMetaProperty__set_CanRead;
          if (in_w10 != 0x765e9a) {
            return 0;
          }
          goto LAB_036e9ea0;
        }
        if (in_w10 != 0x72a582) {
          if (in_w10 != 0x73f193) {
            return 0;
          }
LAB_036ea3d4:
          uVar5 = System_ValueTuple<object,_object>__ToString
                            (in_stack_00000020 + 0x410,*(undefined8 *)PTR_DAT_03d9d730);
          *(undefined4 *)(in_stack_00000020 + 0x40c) = uVar5;
          return 1;
        }
LAB_036ea6ec:
        if (*(char *)(in_stack_00000020 + 0x431) == '\0') {
          return 1;
        }
        uVar6 = *(int *)(in_stack_00000020 + 0x494) - 1;
        if (*(int *)(in_stack_00000020 + 0x494) < 1) {
LAB_036ea744:
          *(undefined4 *)(in_stack_00000020 + 0x2ac) = 0;
          return 1;
        }
        fVar19 = *(float *)(in_stack_00000020 + 0x640) - *(float *)(in_stack_00000020 + 0x2ac);
        *(float *)(in_stack_00000020 + 0x640) = fVar19;
        if ((*(long *)(in_stack_00000020 + 0x368) == 0) ||
           (lVar11 = *(long *)(*(long *)(in_stack_00000020 + 0x368) + 0x38), lVar11 == 0))
        goto LAB_036ecd74;
        if (uVar6 < *(uint *)(lVar11 + 0x18)) {
          *(float *)(lVar11 + (ulong)uVar6 * 0x178 + 0x144) = fVar19;
          goto LAB_036ea744;
        }
        goto LAB_036ecd10;
      }
      if (in_w10 < 0xe6a57b) {
        if (in_w10 < 0xa3a05b) {
          if (in_w10 != 0x8b5eea) {
            iVar7 = 0xa3a05a;
LAB_036e99cc:
            if (in_w10 != iVar7) {
              return 0;
            }
            *(undefined1 *)(in_stack_00000020 + 0x430) = 1;
            return 1;
          }
        }
        else {
          if (in_w10 == 0xb1a5a9) goto LAB_036ea468;
          if (in_w10 != 0xce640a) {
            iVar7 = 0xe6a57a;
            goto LAB_036e99cc;
          }
        }
LAB_036e99e4:
        uVar9 = 0x10;
        uVar6 = *(uint *)(in_stack_00000020 + 0x25c) | 0x10;
LAB_036eabb4:
        *(uint *)(in_stack_00000020 + 0x25c) = uVar6;
        FUN_03705178(in_stack_00000020 + 0x260,uVar9,0);
        return 1;
      }
      if (0x2d9fc43 < in_w10) {
        if (in_w10 != 0x3004302) {
          if (in_w10 == 0x31d0163) goto LAB_036e8f94;
          if (in_w10 != 0x3434822) {
            return 0;
          }
        }
        *(undefined4 *)(in_stack_00000020 + 0x61c) = 0;
        return 1;
      }
      if (in_w10 != 0xf4aac9) {
        if (in_w10 != 0x2d9fc43) {
          return 0;
        }
LAB_036e8f94:
        if ((*(byte *)(in_stack_00000020 + 600) >> 4 & 1) != 0) {
          return 1;
        }
        cVar4 = FUN_03705274(in_stack_00000020 + 0x260,0x10,0);
        if (cVar4 != '\0') {
          return 1;
        }
        *(uint *)(in_stack_00000020 + 0x25c) = *(uint *)(in_stack_00000020 + 0x25c) & 0xffffffef;
        return 1;
      }
LAB_036ea468:
      if (*(int *)(param_2 + 0xe0) == 0) {
        param_2 = thunk_FUN_01ac7298();
        param_1 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        in_x9 = *(long *)(param_1 + 0x88);
        if (in_x9 == 0) goto LAB_036ecd74;
      }
      if (*(int *)(in_x9 + 0x18) != 0) {
        _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
        fVar19 = (float)FUN_036f384c(param_2,*(undefined8 *)(param_1 + 0x80),
                                     *(undefined4 *)(in_x9 + 0x2c),*(undefined4 *)(in_x9 + 0x30),
                                     &stack0x00000070);
        if (fVar19 == -32768.0) {
          return 0;
        }
        if (in_stack_00000028._4_4_ == 1) {
          fVar27 = DAT_00b55290;
          if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
            fVar27 = 1.0;
          }
          fVar19 = *(float *)(in_stack_00000020 + 0x1e8) * fVar19 * fVar27;
        }
        else {
          if (in_stack_00000028._4_4_ != 0) {
            return 0;
          }
          fVar27 = DAT_00b55290;
          if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
            fVar27 = 1.0;
          }
          fVar19 = fVar19 * fVar27;
        }
        *(float *)(in_stack_00000020 + 0x61c) = fVar19;
        return 1;
      }
      goto LAB_036ecd10;
    }
    if (0x1eaf47a1 < in_w10) {
      if (in_w10 < 0x2e9af08b) {
        if (in_w10 < 0x21c6f46b) {
          if (in_w10 == 0x20d7f9c8) {
LAB_036ea93c:
            uVar9 = 0x20;
            uVar6 = *(uint *)(in_stack_00000020 + 0x25c) | 0x20;
            goto LAB_036eabb4;
          }
          iVar7 = 0x21c6f46a;
        }
        else {
          if (in_w10 == 0x2b8343c1) goto LAB_036eaba0;
          if (in_w10 == 0x2dabf5e8) goto LAB_036ea93c;
          iVar7 = 0x2e9af08a;
        }
        if (in_w10 != iVar7) {
          return 0;
        }
        goto LAB_036e99e4;
      }
      if (in_w10 < 0x421fe49e) {
        if (in_w10 == 0x419bc966) {
          if (*(int *)(param_2 + 0xe0) == 0) {
            param_2 = thunk_FUN_01ac7298();
            param_1 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
            in_x9 = *(long *)(param_1 + 0x88);
            if (in_x9 == 0) goto LAB_036ecd74;
          }
          if (*(int *)(in_x9 + 0x18) != 0) {
            _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
            fVar19 = (float)FUN_036f384c(param_2,*(undefined8 *)(param_1 + 0x80),
                                         *(undefined4 *)(in_x9 + 0x2c),*(undefined4 *)(in_x9 + 0x30)
                                         ,&stack0x00000070);
            if (fVar19 != -32768.0) {
              if (in_stack_00000028._4_4_ == 0) {
                fVar27 = DAT_00b55290;
                if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                  fVar27 = 1.0;
                }
                fVar19 = fVar19 * fVar27;
              }
              else if (in_stack_00000028._4_4_ == 1) {
                fVar27 = DAT_00b55290;
                if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                  fVar27 = 1.0;
                }
                fVar19 = *(float *)(in_stack_00000020 + 0x1e8) * fVar19 * fVar27;
              }
              else if (in_stack_00000028._4_4_ == 2) {
                fVar27 = 0.0;
                if (*(float *)(in_stack_00000020 + 0x360) != -1.0) {
                  fVar27 = *(float *)(in_stack_00000020 + 0x360);
                }
                fVar19 = (fVar19 * (*(float *)(in_stack_00000020 + 0x358) - fVar27)) / 100.0;
              }
              else {
                fVar19 = *(float *)(in_stack_00000020 + 0x350);
              }
              if (fVar19 < 0.0) {
                fVar19 = 0.0;
              }
              *(float *)(in_stack_00000020 + 0x350) = fVar19;
              return 1;
            }
            return 0;
          }
          goto LAB_036ecd10;
        }
        if (in_w10 != 0x421f5578) {
          if (in_w10 != 0x421fe49d) {
            return 0;
          }
          if (*(int *)(param_2 + 0xe0) == 0) {
            param_2 = thunk_FUN_01ac7298();
            param_1 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
            in_x9 = *(long *)(param_1 + 0x88);
            if (in_x9 == 0) goto LAB_036ecd74;
          }
          if (*(int *)(in_x9 + 0x18) == 0) goto LAB_036ecd10;
          _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
          fVar19 = (float)FUN_036f384c(param_2,*(undefined8 *)(param_1 + 0x80),
                                       *(undefined4 *)(in_x9 + 0x2c),*(undefined4 *)(in_x9 + 0x30),
                                       &stack0x00000070);
          if (fVar19 == -32768.0) {
            return 0;
          }
          if (in_stack_00000028._4_4_ == 0) {
            fVar27 = DAT_00b55290;
            if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
              fVar27 = 1.0;
            }
            fVar19 = fVar19 * fVar27;
          }
          else {
            if (in_stack_00000028._4_4_ != 1) {
              if (in_stack_00000028._4_4_ == 2) {
                fVar19 = (fVar19 * *(float *)(in_stack_00000020 + 0x358)) / 100.0;
                *(float *)(in_stack_00000020 + 0x408) = fVar19;
              }
              else {
                fVar19 = *(float *)(in_stack_00000020 + 0x408);
              }
              goto LAB_036ebd10;
            }
            fVar27 = DAT_00b55290;
            if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
              fVar27 = 1.0;
            }
            fVar19 = *(float *)(in_stack_00000020 + 0x1e8) * fVar19 * fVar27;
          }
          *(float *)(in_stack_00000020 + 0x408) = fVar19;
LAB_036ebd10:
          *(float *)(in_stack_00000020 + 0x640) = *(float *)(in_stack_00000020 + 0x640) + fVar19;
          return 1;
        }
        if (*(int *)(param_2 + 0xe0) == 0) {
          param_2 = thunk_FUN_01ac7298();
          param_1 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
          in_x9 = *(long *)(param_1 + 0x88);
          if (in_x9 == 0) goto LAB_036ecd74;
        }
        if (*(int *)(in_x9 + 0x18) == 0) goto LAB_036ecd10;
        _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
        fVar19 = (float)FUN_036f384c(param_2,*(undefined8 *)(param_1 + 0x80),
                                     *(undefined4 *)(in_x9 + 0x2c),*(undefined4 *)(in_x9 + 0x30),
                                     &stack0x00000070);
        if (fVar19 == -32768.0) {
          return 0;
        }
        if (in_stack_00000028._4_4_ != 2) {
          if (in_stack_00000028._4_4_ == 1) {
            fVar27 = DAT_00b55290;
            if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
              fVar27 = 1.0;
            }
            fVar19 = *(float *)(in_stack_00000020 + 0x1e8) * fVar19 * fVar27;
          }
          else {
            if (in_stack_00000028._4_4_ != 0) {
              return 1;
            }
            fVar27 = DAT_00b55290;
            if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
              fVar27 = 1.0;
            }
            fVar19 = fVar19 * fVar27;
          }
          *(float *)(in_stack_00000020 + 0x2c0) = fVar19;
          return 1;
        }
        if (*(long *)(in_stack_00000020 + 0x100) != 0) {
          fVar27 = *(float *)(in_stack_00000020 + 0x1e8);
          memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
          iVar7 = FUN_0396ac24(&stack0x00000270,0);
          if (*(long *)(in_stack_00000020 + 0x100) != 0) {
            memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x50),0x60);
            fVar21 = (float)FUN_0396ac34(&stack0x00000270,0);
            if (*(long *)(in_stack_00000020 + 0xf8) != 0) {
              fVar20 = DAT_00b55290;
              if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                fVar20 = 1.0;
              }
              memmove(&stack0x00000270,(void *)(*(long *)(in_stack_00000020 + 0xf8) + 0x50),0x60);
              fVar22 = (float)FUN_0396ac44(&stack0x00000270,0);
              *(float *)(in_stack_00000020 + 0x2c0) =
                   (fVar27 / (float)iVar7) * fVar21 * fVar20 * ((fVar19 * fVar22) / 100.0);
              return 1;
            }
          }
        }
        goto LAB_036ecd74;
      }
      if (in_w10 == 0x71174431) {
        *(undefined4 *)(in_stack_00000020 + 0x2c0) = 0xc6fffe00;
        return 1;
      }
      if (in_w10 == 0x7117d356) {
        *(undefined4 *)(in_stack_00000020 + 0x408) = 0;
        return 1;
      }
      if (in_w10 != 0x77eef5be) {
        return 0;
      }
      if (*(int *)(param_2 + 0xe0) == 0) {
        param_2 = thunk_FUN_01ac7298();
        param_1 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        in_x9 = *(long *)(param_1 + 0x88);
        if (in_x9 == 0) goto LAB_036ecd74;
      }
      if (*(int *)(in_x9 + 0x18) == 0) goto LAB_036ecd10;
      _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
      fVar19 = (float)FUN_036f384c(param_2,*(undefined8 *)(param_1 + 0x80),
                                   *(undefined4 *)(in_x9 + 0x2c),*(undefined4 *)(in_x9 + 0x30),
                                   &stack0x00000070);
      if (fVar19 == -32768.0) {
        return 0;
      }
      iVar7 = -0x80000000;
      if (fVar19 != INFINITY) {
        iVar7 = (int)fVar19;
      }
      if (iVar7 < 0x191) {
        if (iVar7 < 0xc9) {
          if ((iVar7 == 100) || (iVar7 == 200)) goto LAB_036ec0d4;
        }
        else if ((iVar7 == 300) || (iVar7 == 400)) goto LAB_036ec0d4;
      }
      else if (iVar7 < 0x259) {
        if ((iVar7 == 500) || (iVar7 == 600)) goto LAB_036ec0d4;
      }
      else if ((iVar7 == 700) || ((iVar7 == 800 || (iVar7 == 900)))) {
LAB_036ec0d4:
        *(int *)(in_stack_00000020 + 0x214) = iVar7;
      }
      uVar5 = *(undefined4 *)(in_stack_00000020 + 0x214);
      in_stack_00000020 = in_stack_00000020 + 0x218;
      puVar15 = (undefined8 *)PTR_DAT_03d9d6e0;
LAB_036ec120:
      FUN_021773b8(in_stack_00000020,uVar5,*puVar15);
      return 1;
    }
    if (0x14495107 < in_w10) {
      if (in_w10 < 0x161e7508) {
        if (in_w10 != 0x147b2766) {
          iVar7 = 0x161e7507;
LAB_036e9144:
          if (in_w10 != iVar7) {
            return 0;
          }
          uVar9 = FUN_02178218(in_stack_00000020 + 0x588,*(undefined8 *)PTR_DAT_03d9d710);
          *(undefined8 *)(in_stack_00000020 + 0x580) = uVar9;
          thunk_FUN_01b4f09c(in_stack_00000020 + 0x580);
          return 1;
        }
LAB_036ea5f8:
        if (*(int *)(param_2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          param_1 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        }
        FUN_02177af0(&stack0x00000070,param_1 + 0x10,*(undefined8 *)PTR_DAT_03d9d740);
        uVar5 = uStack0000000000000070;
        *(undefined8 *)(in_stack_00000020 + 0x118) = in_stack_00000088;
        thunk_FUN_01b4f09c(in_stack_00000020 + 0x118);
        *(undefined4 *)(in_stack_00000020 + 0x120) = uVar5;
        return 1;
      }
      if (in_w10 == 0x16504b66) goto LAB_036ea5f8;
      if (in_w10 == 0x1b40b577) {
        FUN_02177400(in_stack_00000020 + 0x218,*(undefined8 *)PTR_DAT_03d9d748);
        if (*(int *)(in_stack_00000020 + 0x25c) == 1) {
          *(undefined4 *)(in_stack_00000020 + 0x214) = 700;
          return 1;
        }
        uVar5 = FUN_021775b8(in_stack_00000020 + 0x218,*(undefined8 *)PTR_DAT_03d9d6f0);
        *(undefined4 *)(in_stack_00000020 + 0x214) = uVar5;
        return 1;
      }
      if (in_w10 != 0x1eaf47a1) {
        return 0;
      }
LAB_036eaba0:
      uVar9 = 8;
      uVar6 = *(uint *)(in_stack_00000020 + 0x25c) | 8;
      goto LAB_036eabb4;
    }
    if (in_w10 < 0x454d9f8) {
      if (in_w10 == 0x4230398) goto LAB_036ea9f8;
      if (in_w10 != 0x454d9f7) {
        return 0;
      }
    }
    else {
      if (in_w10 == 0x5f82798) {
LAB_036ea9f8:
        if (*(int *)(param_2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          in_x9 = *(long *)(*(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 0x88);
          if (in_x9 == 0) goto LAB_036ecd74;
        }
        if (*(int *)(in_x9 + 0x18) != 0) {
          uVar5 = *(undefined4 *)(in_x9 + 0x24);
          uVar8 = FUN_036b0828(uVar5,&stack0x000002e0,0);
          puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
          if ((uVar8 & 1) == 0) {
            if (*(int *)(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar8 = FUN_03922f24(in_stack_000002e0,0,0);
            if ((uVar8 & 1) != 0) {
              uVar9 = FUN_036fbaf0(0);
              lVar11 = *(long *)PTR_DAT_03d9c920;
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01ac7298(lVar11);
                lVar11 = *(long *)PTR_DAT_03d9c920;
              }
              lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
              if (lVar14 == 0) goto LAB_036ecd74;
              if (*(int *)(lVar14 + 0x18) == 0) goto LAB_036ecd10;
              uVar17 = FUN_02eeda98(0,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x80),
                                    *(undefined4 *)(lVar14 + 0x2c),*(undefined4 *)(lVar14 + 0x30),0)
              ;
              uVar9 = FUN_02edd6e8(uVar9,uVar17,0);
              in_stack_000002e0 = FUN_01f2f4f0(uVar9,*(undefined8 *)PTR_DAT_03d9d698);
            }
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar8 = FUN_03922f24(in_stack_000002e0,0,0);
            if ((uVar8 & 1) != 0) {
              return 0;
            }
            FUN_036b054c(uVar5,in_stack_000002e0,0);
          }
          *(undefined8 *)(in_stack_00000020 + 0x580) = in_stack_000002e0;
          thunk_FUN_01b4f09c(in_stack_00000020 + 0x580);
          uVar6 = 1;
          *(undefined1 *)(in_stack_00000020 + 0x5b0) = 0;
          plVar12 = (long *)PTR_DAT_03d9c920;
          do {
            lVar11 = *plVar12;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar11 = *plVar12;
            }
            lVar14 = *(long *)(lVar11 + 0xb8);
            lVar16 = *(long *)(lVar14 + 0x88);
            if (lVar16 == 0) goto LAB_036ecd74;
            if (*(int *)(lVar16 + 0x18) <= (int)uVar6) {
LAB_036eba14:
              FUN_021781c8(in_stack_00000020 + 0x588,*(undefined8 *)(in_stack_00000020 + 0x580),
                           *(undefined8 *)PTR_DAT_03d9d6c0);
              return 1;
            }
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar11 = *plVar12;
              lVar14 = *(long *)(lVar11 + 0xb8);
              lVar16 = *(long *)(lVar14 + 0x88);
              plVar12 = (long *)PTR_DAT_03d9c920;
              if (lVar16 == 0) goto LAB_036ecd74;
            }
            if (*(uint *)(lVar16 + 0x18) <= uVar6) break;
            lVar18 = (long)(int)uVar6;
            if (*(int *)(lVar16 + lVar18 * 0x18 + 0x20) == 0) goto LAB_036eba14;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar11 = *plVar12;
              lVar14 = *(long *)(lVar11 + 0xb8);
              lVar16 = *(long *)(lVar14 + 0x88);
              plVar12 = (long *)PTR_DAT_03d9c920;
              if (lVar16 == 0) goto LAB_036ecd74;
            }
            if (*(uint *)(lVar16 + 0x18) <= uVar6) break;
            iVar7 = *(int *)(lVar16 + lVar18 * 0x18 + 0x20);
            if ((iVar7 == 0xb2fb) || (iVar7 == 0x80fb)) {
              if (*(int *)(lVar11 + 0xe0) == 0) {
                lVar11 = thunk_FUN_01ac7298();
                lVar14 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
                lVar16 = *(long *)(lVar14 + 0x88);
                if (lVar16 == 0) goto LAB_036ecd74;
              }
              if (*(uint *)(lVar16 + 0x18) <= uVar6) break;
              lVar16 = lVar16 + lVar18 * 0x18;
              _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
              fVar19 = (float)FUN_036f384c(lVar11,*(undefined8 *)(lVar14 + 0x80),
                                           *(undefined4 *)(lVar16 + 0x2c),
                                           *(undefined4 *)(lVar16 + 0x30),&stack0x00000070);
              *(bool *)(in_stack_00000020 + 0x5b0) = fVar19 != 0.0;
              plVar12 = (long *)PTR_DAT_03d9c920;
            }
            uVar6 = uVar6 + 1;
          } while( true );
        }
        goto LAB_036ecd10;
      }
      if (in_w10 != 0x629fdf7) {
        iVar7 = 0x14495107;
        goto LAB_036e9144;
      }
    }
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      param_2 = *(long *)PTR_DAT_03d9c920;
      in_x9 = *(long *)(*(long *)(param_2 + 0xb8) + 0x88);
      if (in_x9 == 0) goto LAB_036ecd74;
    }
    if (*(int *)(in_x9 + 0x18) == 0) goto LAB_036ecd10;
    iVar7 = *(int *)(in_x9 + 0x24);
    if ((iVar7 != 0x2d93756b) && (iVar7 != 0x1f31f54b)) {
      uVar8 = FUN_036b08d0(iVar7,&stack0x000002e8,0);
      if ((uVar8 & 1) == 0) {
        uVar9 = FUN_036fb900(0);
        lVar11 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01ac7298(lVar11);
          lVar11 = *(long *)PTR_DAT_03d9c920;
        }
        lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
        if (lVar14 != 0) {
          if (*(int *)(lVar14 + 0x18) != 0) {
            uVar17 = FUN_02eeda98(0,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x80),
                                  *(undefined4 *)(lVar14 + 0x2c),*(undefined4 *)(lVar14 + 0x30),0);
            uVar9 = FUN_02edd6e8(uVar9,uVar17,0);
            uVar9 = FUN_01f2f4f0(uVar9,*(undefined8 *)StringLiteral_430);
            if (*(int *)(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)
                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                );
            }
            uVar8 = FUN_03922f24(uVar9,0,0);
            if ((uVar8 & 1) != 0) {
              return 0;
            }
            FUN_036b04b4(iVar7,uVar9,0);
            *(undefined8 *)(in_stack_00000020 + 0x118) = uVar9;
            thunk_FUN_01b4f09c(in_stack_00000020 + 0x118);
            uVar9 = *(undefined8 *)(in_stack_00000020 + 0x118);
            uVar17 = *(undefined8 *)(in_stack_00000020 + 0x100);
            lVar11 = *(long *)PTR_DAT_03d9c920;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar11 = *(long *)PTR_DAT_03d9c920;
            }
            uVar6 = FUN_036b0b30(uVar9,uVar17,*(long *)(lVar11 + 0xb8),
                                 *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8),0);
            *(uint *)(in_stack_00000020 + 0x120) = uVar6;
            plVar12 = *(long **)(*(long *)PTR_DAT_03d9c920 + 0xb8);
            lVar11 = *plVar12;
            if (lVar11 == 0) goto LAB_036ecd74;
            if (uVar6 < *(uint *)(lVar11 + 0x18)) {
              lVar11 = lVar11 + (long)(int)uVar6 * 0x38;
              in_stack_00000088 = *(undefined8 *)(lVar11 + 0x38);
              in_stack_00000080 = *(undefined8 *)(lVar11 + 0x30);
              in_stack_00000098 = *(undefined8 *)(lVar11 + 0x48);
              in_stack_00000090 = *(undefined8 *)(lVar11 + 0x40);
              in_stack_000000a0 = *(undefined8 *)(lVar11 + 0x50);
              in_stack_00000078 = *(undefined8 *)(lVar11 + 0x28);
              _uStack0000000000000070 = *(undefined8 *)(lVar11 + 0x20);
              uVar9 = *(undefined8 *)PTR_DAT_03d9d6d8;
              in_stack_000000b0 = _uStack0000000000000070;
              in_stack_000000b8 = in_stack_00000078;
              in_stack_000000c0 = in_stack_00000080;
              in_stack_000000c8 = in_stack_00000088;
              in_stack_000000d0 = in_stack_00000090;
              in_stack_000000d8 = in_stack_00000098;
              in_stack_000000e0 = in_stack_000000a0;
              goto LAB_036e9d54;
            }
          }
          goto LAB_036ecd10;
        }
      }
      else {
        *(undefined8 *)(in_stack_00000020 + 0x118) = in_stack_000002e8;
        thunk_FUN_01b4f09c(in_stack_00000020 + 0x118);
        uVar9 = *(undefined8 *)(in_stack_00000020 + 0x118);
        uVar17 = *(undefined8 *)(in_stack_00000020 + 0x100);
        lVar11 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar11 = *(long *)PTR_DAT_03d9c920;
        }
        uVar6 = FUN_036b0b30(uVar9,uVar17,*(long *)(lVar11 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8),0);
        *(uint *)(in_stack_00000020 + 0x120) = uVar6;
        plVar12 = *(long **)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        lVar11 = *plVar12;
        if (lVar11 != 0) {
          if (uVar6 < *(uint *)(lVar11 + 0x18)) {
            lVar11 = lVar11 + (long)(int)uVar6 * 0x38;
            in_stack_00000088 = *(undefined8 *)(lVar11 + 0x38);
            in_stack_00000080 = *(undefined8 *)(lVar11 + 0x30);
            in_stack_00000098 = *(undefined8 *)(lVar11 + 0x48);
            in_stack_00000090 = *(undefined8 *)(lVar11 + 0x40);
            in_stack_000000a0 = *(undefined8 *)(lVar11 + 0x50);
            in_stack_00000078 = *(undefined8 *)(lVar11 + 0x28);
            _uStack0000000000000070 = *(undefined8 *)(lVar11 + 0x20);
            uVar9 = *(undefined8 *)PTR_DAT_03d9d6d8;
            in_stack_000000f0 = _uStack0000000000000070;
            in_stack_000000f8 = in_stack_00000078;
            in_stack_00000100 = in_stack_00000080;
            in_stack_00000108 = in_stack_00000088;
            in_stack_00000110 = in_stack_00000090;
            in_stack_00000118 = in_stack_00000098;
            in_stack_00000120 = in_stack_000000a0;
LAB_036e9d54:
            FUN_02177a60(plVar12 + 2,&stack0x00000070,uVar9);
            return 1;
          }
          goto LAB_036ecd10;
        }
      }
      goto LAB_036ecd74;
    }
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      param_2 = *(long *)PTR_DAT_03d9c920;
    }
    lVar11 = **(long **)(param_2 + 0xb8);
    if (lVar11 == 0) goto LAB_036ecd74;
    if (*(int *)(lVar11 + 0x18) != 0) {
      *(undefined8 *)(in_stack_00000020 + 0x118) = *(undefined8 *)(lVar11 + 0x38);
      thunk_FUN_01b4f09c(in_stack_00000020 + 0x118);
      *(undefined4 *)(in_stack_00000020 + 0x120) = 0;
      plVar12 = *(long **)(*(long *)PTR_DAT_03d9c920 + 0xb8);
      lVar11 = *plVar12;
      if (lVar11 == 0) goto LAB_036ecd74;
      if (*(int *)(lVar11 + 0x18) != 0) {
        in_stack_00000078 = *(undefined8 *)(lVar11 + 0x28);
        _uStack0000000000000070 = *(undefined8 *)(lVar11 + 0x20);
        in_stack_00000088 = *(undefined8 *)(lVar11 + 0x38);
        in_stack_00000080 = *(undefined8 *)(lVar11 + 0x30);
        in_stack_00000098 = *(undefined8 *)(lVar11 + 0x48);
        in_stack_00000090 = *(undefined8 *)(lVar11 + 0x40);
        in_stack_000000a0 = *(undefined8 *)(lVar11 + 0x50);
        uVar9 = *(undefined8 *)PTR_DAT_03d9d6d8;
        in_stack_00000130 = _uStack0000000000000070;
        in_stack_00000138 = in_stack_00000078;
        in_stack_00000140 = in_stack_00000080;
        in_stack_00000148 = in_stack_00000088;
        in_stack_00000150 = in_stack_00000090;
        in_stack_00000158 = in_stack_00000098;
        in_stack_00000160 = in_stack_000000a0;
        goto LAB_036e9d54;
      }
    }
    goto LAB_036ecd10;
  }
  if (in_w10 < 0x105b0d) {
    if (in_w10 < 0x4d123) {
      if (in_w10 < 0x3a15f) {
        if (0x37302 < in_w10) {
          if (in_w10 == 0x379e6) {
            return 0;
          }
          if (in_w10 != 0x3842e) {
            if (in_w10 != 0x3a15e) {
              return 0;
            }
            goto LAB_036e8c88;
          }
          goto LAB_036e9b08;
        }
        if (in_w10 == 0x2ef43) goto LAB_036eaaf4;
        iVar7 = 0x37302;
      }
      else {
        if (in_w10 < 0x4371f) {
          if (in_w10 == 0x435cd) {
            if (*(int *)(param_2 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              in_x9 = *(long *)(*(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 0x88);
              if (in_x9 == 0) goto LAB_036ecd74;
            }
            if (*(int *)(in_x9 + 0x18) == 0) goto LAB_036ecd10;
            iVar7 = *(int *)(in_x9 + 0x24);
            if (iVar7 < -0x1b4fbb34) {
              if (iVar7 == -0x1f38ae01) {
                uVar26 = 8;
                uVar5 = 8;
              }
              else {
                if (iVar7 != -0x1b4fbb35) {
                  return 0;
                }
                uVar26 = 2;
                uVar5 = 2;
              }
            }
            else if (iVar7 == 0x825ec40) {
              uVar26 = 4;
              uVar5 = 4;
            }
            else if (iVar7 == 0x74b6c44) {
              uVar26 = 0x10;
              uVar5 = 0x10;
            }
            else {
              if (iVar7 != 0x3998db) {
                return 0;
              }
              uVar26 = 1;
              uVar5 = 1;
            }
            *(undefined4 *)(in_stack_00000020 + 0x278) = uVar26;
            in_stack_00000020 = in_stack_00000020 + 0x280;
            puVar15 = (undefined8 *)PTR_DAT_03d9d6b0;
            goto LAB_036ec120;
          }
          if (in_w10 != 0x4371e) {
            return 0;
          }
          if (*(int *)(param_2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            param_2 = *(long *)PTR_DAT_03d9c920;
            param_1 = *(long *)(param_2 + 0xb8);
            in_x9 = *(long *)(param_1 + 0x88);
            if (in_x9 == 0) goto LAB_036ecd74;
          }
          if (*(int *)(in_x9 + 0x18) != 0) {
            if (*(int *)(in_x9 + 0x30) != 3) {
              return 0;
            }
            if (*(int *)(param_2 + 0xe0) == 0) {
              param_2 = thunk_FUN_01ac7298();
              param_1 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
            }
            lVar11 = *(long *)(param_1 + 0x80);
            if (lVar11 == 0) goto LAB_036ecd74;
            if ((7 < *(uint *)(lVar11 + 0x18)) && (*(uint *)(lVar11 + 0x18) != 8)) {
              uVar9 = FUN_036f2b64(param_2,*(undefined2 *)(lVar11 + 0x2e));
              cVar4 = FUN_036f2b64(uVar9,*(undefined2 *)(lVar11 + 0x30));
              *(char *)(in_stack_00000020 + 0x4ef) = cVar4 + (char)uVar9 * '\x10';
              return 1;
            }
          }
          goto LAB_036ecd10;
        }
        if (in_w10 == 0x44760) {
          return 0;
        }
        if (in_w10 == 0x44d63) {
LAB_036eaaf4:
          if (*(int *)(param_2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            param_2 = *(long *)PTR_DAT_03d9c920;
            param_1 = *(long *)(param_2 + 0xb8);
          }
          lVar11 = *(long *)(param_1 + 0x80);
          if (lVar11 == 0) goto LAB_036ecd74;
          if (*(uint *)(lVar11 + 0x18) < 7) goto LAB_036ecd10;
          sVar2 = *(short *)(lVar11 + 0x2c);
          if (*(int *)(param_2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            param_2 = *(long *)PTR_DAT_03d9c920;
            param_1 = *(long *)(param_2 + 0xb8);
            lVar11 = *(long *)(param_1 + 0x80);
          }
          if (unaff_w24 == 10 && sVar2 == 0x23) {
            uVar9 = 10;
LAB_036ec17c:
            uVar5 = FUN_036f3140(param_2,lVar11,uVar9);
LAB_036e7e8c:
            *(undefined4 *)(in_stack_00000020 + 0x4ec) = uVar5;
            uVar9 = *(undefined8 *)PTR_DAT_03d9d6d0;
          }
          else {
            if (lVar11 == 0) goto LAB_036ecd74;
            if (*(uint *)(lVar11 + 0x18) < 7) goto LAB_036ecd10;
            sVar2 = *(short *)(lVar11 + 0x2c);
            if (*(int *)(param_2 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              param_2 = *(long *)PTR_DAT_03d9c920;
              param_1 = *(long *)(param_2 + 0xb8);
              lVar11 = *(long *)(param_1 + 0x80);
            }
            if (unaff_w24 == 0xb && sVar2 == 0x23) {
              uVar9 = 0xb;
              goto LAB_036ec17c;
            }
            if (lVar11 == 0) goto LAB_036ecd74;
            if (*(uint *)(lVar11 + 0x18) < 7) goto LAB_036ecd10;
            sVar2 = *(short *)(lVar11 + 0x2c);
            if (*(int *)(param_2 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              param_2 = *(long *)PTR_DAT_03d9c920;
              param_1 = *(long *)(param_2 + 0xb8);
              lVar11 = *(long *)(param_1 + 0x80);
            }
            if (unaff_w24 == 0xd && sVar2 == 0x23) {
              uVar9 = 0xd;
              goto LAB_036ec17c;
            }
            if (lVar11 == 0) goto LAB_036ecd74;
            if (*(uint *)(lVar11 + 0x18) < 7) goto LAB_036ecd10;
            sVar2 = *(short *)(lVar11 + 0x2c);
            if (*(int *)(param_2 + 0xe0) == 0) {
              param_2 = thunk_FUN_01ac7298();
              param_1 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
            }
            if (unaff_w24 == 0xf && sVar2 == 0x23) {
              lVar11 = *(long *)(param_1 + 0x80);
              uVar9 = 0xf;
              goto LAB_036ec17c;
            }
            lVar11 = *(long *)(param_1 + 0x88);
            if (lVar11 == 0) goto LAB_036ecd74;
            if (*(int *)(lVar11 + 0x18) == 0) goto LAB_036ecd10;
            iVar7 = *(int *)(lVar11 + 0x24);
            if (iVar7 < 0x3829ca) {
              if (iVar7 < -0x232c3b1) {
                if (iVar7 == -0x3b2cd120) {
                  *(undefined4 *)(in_stack_00000020 + 0x4ec) = 0xffe6d8ad;
                  uVar5 = 0xffe6d8ad;
                }
                else {
                  if (iVar7 != -0x232c3b2) {
                    return 0;
                  }
                  *(undefined4 *)(in_stack_00000020 + 0x4ec) = 0xfff020a0;
                  uVar5 = 0xfff020a0;
                }
              }
              else {
                if (iVar7 == 0x1e9d3) {
                  uVar26 = 0x3f800000;
LAB_036ecef8:
                  uVar5 = 0;
LAB_036ecefc:
                  uVar25 = 0;
                  goto LAB_036ecf10;
                }
                if (iVar7 == 0x36863e) {
                  uVar26 = 0;
                  uVar5 = 0;
LAB_036ecf0c:
                  uVar25 = 0x3f800000;
                  goto LAB_036ecf10;
                }
                if (iVar7 != 0x3829c9) {
                  return 0;
                }
                *(undefined4 *)(in_stack_00000020 + 0x4ec) = 0xff808080;
                uVar5 = 0xff808080;
              }
            }
            else {
              if (0x7071a47 < iVar7) {
                if (iVar7 == 0x73d641b) {
                  uVar26 = 0;
                  uVar5 = 0x3f800000;
                  goto LAB_036ecefc;
                }
                if (iVar7 == 0x85daee7) {
                  uVar26 = 0x3f800000;
                  uVar5 = 0x3f800000;
                  goto LAB_036ecf0c;
                }
                if (iVar7 != 0x21063284) {
                  return 0;
                }
                uVar26 = 0x3f800000;
                uVar5 = DAT_00b550e0;
                uVar25 = DAT_00b551c8;
LAB_036ecf10:
                uVar5 = FUN_01bd7168(uVar26,uVar5,uVar25,0x3f800000,0);
                goto LAB_036e7e8c;
              }
              if (iVar7 != 0x19536f0) {
                if (iVar7 != 0x7071a47) {
                  return 0;
                }
                uVar26 = 0;
                goto LAB_036ecef8;
              }
              *(undefined4 *)(in_stack_00000020 + 0x4ec) = 0xff0080ff;
              uVar5 = 0xff0080ff;
            }
            uVar9 = *(undefined8 *)PTR_DAT_03d9d6d0;
          }
          FUN_02176154(in_stack_00000020 + 0x4f0,uVar5,uVar9);
          return 1;
        }
        iVar7 = 0x4d122;
      }
      if (in_w10 != iVar7) {
        return 0;
      }
      if (*(int *)(param_2 + 0xe0) == 0) {
        param_2 = thunk_FUN_01ac7298();
        param_1 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        in_x9 = *(long *)(param_1 + 0x88);
        if (in_x9 == 0) goto LAB_036ecd74;
      }
      if (*(int *)(in_x9 + 0x18) != 0) {
        _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
        fVar19 = (float)FUN_036f384c(param_2,*(undefined8 *)(param_1 + 0x80),
                                     *(undefined4 *)(in_x9 + 0x2c),*(undefined4 *)(in_x9 + 0x30),
                                     &stack0x00000070);
        if (fVar19 == -32768.0) {
          return 0;
        }
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
        puVar10 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8)
        ;
        uVar5 = *puVar10;
        uVar26 = puVar10[1];
        uVar25 = puVar10[2];
        if (DAT_03fed256 == '\0') {
          thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__)
          ;
          DAT_03fed256 = '\x01';
        }
        puVar13 = *(uint **)(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                            + 0xb8);
        uVar8 = (ulong)*puVar13;
        uVar23 = (ulong)puVar13[1];
        uVar24 = (ulong)puVar13[2];
        in_d3 = (ulong)puVar13[3];
        uStack0000000000000004 = 0x3f800000;
LAB_036ea110:
        FUN_03910ecc(&stack0x00000030,uVar5,uVar26,uVar25,uVar8,uVar23,uVar24,in_d3,0);
        *(undefined8 *)(in_stack_00000020 + 0x45c) = in_stack_00000058;
        *(undefined8 *)(in_stack_00000020 + 0x454) = in_stack_00000050;
        *(undefined8 *)(in_stack_00000020 + 0x46c) = in_stack_00000068;
        *(undefined8 *)(in_stack_00000020 + 0x464) = in_stack_00000060;
        *(undefined8 *)(in_stack_00000020 + 0x43c) = in_stack_00000038;
        *(undefined8 *)(in_stack_00000020 + 0x434) = in_stack_00000030;
        *(undefined8 *)(in_stack_00000020 + 0x44c) = in_stack_00000048;
        *(undefined8 *)(in_stack_00000020 + 0x444) = in_stack_00000040;
        *(undefined1 *)(in_stack_00000020 + 0x474) = 1;
        return 1;
      }
    }
    else {
      if (0xefcec < in_w10) {
        if (in_w10 < 0xf8790) {
          if (in_w10 == 0xf80ab) goto LAB_036e9ea0;
          iVar7 = 0xf878f;
          goto LAB_036e9e94;
        }
        if (in_w10 == 0xfaf07) goto LAB_036eb020;
        if (in_w10 == 0x104376) {
LAB_036eac48:
          uVar5 = FUN_02177400(in_stack_00000020 + 0x280,*(undefined8 *)PTR_DAT_03d9d728);
          *(undefined4 *)(in_stack_00000020 + 0x278) = uVar5;
          return 1;
        }
        iVar7 = 0x105b0c;
LAB_036e8674:
        if (in_w10 != iVar7) {
          return 0;
        }
        uVar5 = FUN_0217619c(in_stack_00000020 + 0x4f0,*(undefined8 *)PTR_DAT_03d9d720);
        *(undefined4 *)(in_stack_00000020 + 0x4ec) = uVar5;
        return 1;
      }
      if (0x4e24e < in_w10) {
        if (in_w10 != 0x4ff7e) {
          if (in_w10 == 0xee556) goto LAB_036eac48;
          iVar7 = 0xefcec;
          goto LAB_036e8674;
        }
LAB_036e8c88:
        if (*(int *)(param_2 + 0xe0) == 0) {
          param_2 = thunk_FUN_01ac7298();
          param_1 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
          in_x9 = *(long *)(param_1 + 0x88);
          if (in_x9 == 0) goto LAB_036ecd74;
        }
        if (*(int *)(in_x9 + 0x18) != 0) {
          _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
          fVar19 = (float)FUN_036f384c(param_2,*(undefined8 *)(param_1 + 0x80),
                                       *(undefined4 *)(in_x9 + 0x2c),*(undefined4 *)(in_x9 + 0x30),
                                       &stack0x00000070);
          if (fVar19 == -32768.0) {
            return 0;
          }
          if (in_stack_00000028._4_4_ == 0) {
            fVar27 = DAT_00b55290;
            if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
              fVar27 = 1.0;
            }
            *(float *)(in_stack_00000020 + 0x360) = fVar19 * fVar27;
            return 1;
          }
          if (in_stack_00000028._4_4_ == 1) {
            return 0;
          }
          if (in_stack_00000028._4_4_ != 2) {
            return 1;
          }
          *(float *)(in_stack_00000020 + 0x360) =
               (fVar19 * *(float *)(in_stack_00000020 + 0x358)) / 100.0;
          return 1;
        }
        goto LAB_036ecd10;
      }
      if (in_w10 == 0x4d806) {
        return 0;
      }
      if (in_w10 != 0x4e24e) {
        return 0;
      }
LAB_036e9b08:
      if (*(int *)(param_2 + 0xe0) == 0) {
        param_2 = thunk_FUN_01ac7298();
        param_1 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        in_x9 = *(long *)(param_1 + 0x88);
        if (in_x9 == 0) goto LAB_036ecd74;
      }
      if (*(int *)(in_x9 + 0x18) != 0) {
        _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
        fVar19 = (float)FUN_036f384c(param_2,*(undefined8 *)(param_1 + 0x80),
                                     *(undefined4 *)(in_x9 + 0x2c),*(undefined4 *)(in_x9 + 0x30),
                                     &stack0x00000070);
        if (fVar19 == -32768.0) {
          return 0;
        }
        if (in_stack_00000028._4_4_ == 1) {
          fVar27 = DAT_00b55290;
          if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
            fVar27 = 1.0;
          }
          fVar19 = *(float *)(in_stack_00000020 + 0x640) +
                   *(float *)(in_stack_00000020 + 0x1e8) * fVar19 * fVar27;
        }
        else {
          if (in_stack_00000028._4_4_ != 0) {
            return 0;
          }
          fVar27 = DAT_00b55290;
          if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
            fVar27 = 1.0;
          }
          fVar19 = *(float *)(in_stack_00000020 + 0x640) + fVar19 * fVar27;
        }
        *(float *)(in_stack_00000020 + 0x640) = fVar19;
        return 1;
      }
    }
    goto LAB_036ecd10;
  }
  if (in_w10 < 0x18b5de) {
    if (in_w10 < 0x14b2e4) {
      if (in_w10 < 0x10e5b0) {
        if (in_w10 == 0x10decb) goto LAB_036e9ea0;
        iVar7 = 0x10e5af;
LAB_036e9e94:
        if (in_w10 != iVar7) {
          return 0;
        }
        return 1;
      }
      if (in_w10 == 0x110d27) {
LAB_036eb020:
        *(undefined4 *)(in_stack_00000020 + 0x360) = 0xbf800000;
        return 1;
      }
      if (in_w10 != 0x13a0c6) {
        if (in_w10 != 0x14b2e3) {
          return 0;
        }
        goto LAB_036e898c;
      }
      goto LAB_036e9864;
    }
    if (in_w10 < 0x169e9f) {
      if (in_w10 == 0x15fef4) {
LAB_036ea65c:
        if (*(int *)(param_2 + 0xe0) == 0) {
          param_2 = thunk_FUN_01ac7298();
          param_1 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
          in_x9 = *(long *)(param_1 + 0x88);
          if (in_x9 == 0) goto LAB_036ecd74;
        }
        if (*(int *)(in_x9 + 0x18) != 0) {
          _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
          fVar19 = (float)FUN_036f384c(param_2,*(undefined8 *)(param_1 + 0x80),
                                       *(undefined4 *)(in_x9 + 0x2c),*(undefined4 *)(in_x9 + 0x30),
                                       &stack0x00000070);
          if (fVar19 == -32768.0) {
            return 0;
          }
          if (in_stack_00000028._4_4_ == 0) {
            fVar27 = DAT_00b55290;
            if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
              fVar27 = 1.0;
            }
            fVar19 = fVar19 * fVar27;
          }
          else {
            if (in_stack_00000028._4_4_ != 1) {
              if (in_stack_00000028._4_4_ == 2) {
                fVar19 = (fVar19 * *(float *)(in_stack_00000020 + 0x358)) / 100.0;
                *(float *)(in_stack_00000020 + 0x40c) = fVar19;
              }
              else {
                fVar19 = *(float *)(in_stack_00000020 + 0x40c);
              }
              goto LAB_036ebe18;
            }
            fVar27 = DAT_00b55290;
            if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
              fVar27 = 1.0;
            }
            fVar19 = *(float *)(in_stack_00000020 + 0x1e8) * fVar19 * fVar27;
          }
          *(float *)(in_stack_00000020 + 0x40c) = fVar19;
LAB_036ebe18:
          FUN_0217877c(fVar19,in_stack_00000020 + 0x410,*(undefined8 *)PTR_DAT_03d9d6c8);
          *(undefined4 *)(in_stack_00000020 + 0x640) = *(undefined4 *)(in_stack_00000020 + 0x40c);
          return 1;
        }
        goto LAB_036ecd10;
      }
      iVar7 = 0x169e9e;
      goto LAB_036e91ac;
    }
    if (in_w10 == 0x174369) goto LAB_036ea3f4;
    if (in_w10 == 0x186bfb) goto LAB_036e8e60;
    if (in_w10 != 0x18b5dd) {
      return 0;
    }
  }
  else {
    if (in_w10 < 0x20319f) {
      if (0x1d33c6 < in_w10) {
        if (in_w10 == 0x1e45e3) {
LAB_036e898c:
          if (*(int *)(param_2 + 0xe0) == 0) {
            param_2 = thunk_FUN_01ac7298();
            param_1 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
            in_x9 = *(long *)(param_1 + 0x88);
            if (in_x9 == 0) goto LAB_036ecd74;
          }
          if (*(int *)(in_x9 + 0x18) != 0) {
            _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
            fVar19 = (float)FUN_036f384c(param_2,*(undefined8 *)(param_1 + 0x80),
                                         *(undefined4 *)(in_x9 + 0x2c),*(undefined4 *)(in_x9 + 0x30)
                                         ,&stack0x00000070);
            if (fVar19 == -32768.0) {
              return 0;
            }
            if (in_stack_00000028._4_4_ == 0) {
              fVar27 = DAT_00b55290;
              if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                fVar27 = 1.0;
              }
              fVar19 = fVar19 * fVar27;
LAB_036ebf68:
              *(float *)(in_stack_00000020 + 0x2ac) = fVar19;
              return 1;
            }
            if (in_stack_00000028._4_4_ == 1) {
              fVar27 = DAT_00b55290;
              if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                fVar27 = 1.0;
              }
              fVar19 = *(float *)(in_stack_00000020 + 0x1e8) * fVar19 * fVar27;
              goto LAB_036ebf68;
            }
            goto LAB_036ea458;
          }
          goto LAB_036ecd10;
        }
        if (in_w10 == 0x1f91f4) goto LAB_036ea65c;
        iVar7 = 0x20319e;
LAB_036e91ac:
        if (in_w10 != iVar7) {
          return 0;
        }
        if (*(int *)(param_2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          param_2 = *(long *)PTR_DAT_03d9c920;
          param_1 = *(long *)(param_2 + 0xb8);
          in_x9 = *(long *)(param_1 + 0x88);
          if (in_x9 == 0) goto LAB_036ecd74;
        }
        fVar19 = DAT_00b55290;
        if (*(int *)(in_x9 + 0x18) != 0) {
          if (*(int *)(in_x9 + 0x28) != 1) {
            if (*(int *)(in_x9 + 0x28) != 0) {
              return 0;
            }
            uVar6 = 1;
            fVar27 = 0.0;
            do {
              if (*(int *)(param_2 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                param_2 = *(long *)PTR_DAT_03d9c920;
              }
              lVar11 = *(long *)(*(long *)(param_2 + 0xb8) + 0x88);
              if (lVar11 == 0) goto LAB_036ecd74;
              if (*(int *)(lVar11 + 0x18) <= (int)uVar6) {
                return 1;
              }
              if (*(int *)(param_2 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                param_2 = *(long *)PTR_DAT_03d9c920;
                lVar11 = *(long *)(*(long *)(param_2 + 0xb8) + 0x88);
                if (lVar11 == 0) goto LAB_036ecd74;
              }
              if (*(uint *)(lVar11 + 0x18) <= uVar6) goto LAB_036ecd10;
              lVar14 = (long)(int)uVar6;
              if (*(int *)(lVar11 + lVar14 * 0x18 + 0x20) == 0) {
                return 1;
              }
              if (*(int *)(param_2 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                param_2 = *(long *)PTR_DAT_03d9c920;
              }
              lVar16 = *(long *)(param_2 + 0xb8);
              lVar11 = *(long *)(lVar16 + 0x88);
              if (lVar11 == 0) goto LAB_036ecd74;
              if (*(uint *)(lVar11 + 0x18) <= uVar6) goto LAB_036ecd10;
              iVar7 = *(int *)(lVar11 + lVar14 * 0x18 + 0x20);
              if (iVar7 == 0x4d0e4) {
                if (*(int *)(param_2 + 0xe0) == 0) {
                  param_2 = thunk_FUN_01ac7298();
                  lVar16 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
                  lVar11 = *(long *)(lVar16 + 0x88);
                  if (lVar11 == 0) goto LAB_036ecd74;
                }
                if (*(uint *)(lVar11 + 0x18) <= uVar6) goto LAB_036ecd10;
                lVar11 = lVar11 + lVar14 * 0x18;
                _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
                fVar21 = (float)FUN_036f384c(param_2,*(undefined8 *)(lVar16 + 0x80),
                                             *(undefined4 *)(lVar11 + 0x2c),
                                             *(undefined4 *)(lVar11 + 0x30),&stack0x00000070);
                if (fVar21 == -32768.0) {
                  return 0;
                }
                param_2 = *(long *)PTR_DAT_03d9c920;
                if (*(int *)(param_2 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  param_2 = *(long *)PTR_DAT_03d9c920;
                }
                lVar11 = *(long *)(*(long *)(param_2 + 0xb8) + 0x88);
                if (lVar11 == 0) goto LAB_036ecd74;
                if (*(uint *)(lVar11 + 0x18) <= uVar6) goto LAB_036ecd10;
                iVar7 = *(int *)(lVar11 + lVar14 * 0x18 + 0x34);
                if (iVar7 == 0) {
                  fVar20 = fVar19;
                  if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                    fVar20 = 1.0;
                  }
                  fVar21 = fVar21 * fVar20;
                }
                else if (iVar7 == 1) {
                  fVar20 = fVar19;
                  if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                    fVar20 = 1.0;
                  }
                  fVar21 = fVar21 * fVar20 * *(float *)(in_stack_00000020 + 0x1e8);
                }
                else if (iVar7 == 2) {
                  fVar20 = fVar27;
                  if (*(float *)(in_stack_00000020 + 0x360) != -1.0) {
                    fVar20 = *(float *)(in_stack_00000020 + 0x360);
                  }
                  fVar21 = (fVar21 * (*(float *)(in_stack_00000020 + 0x358) - fVar20)) / 100.0;
                }
                else {
                  fVar21 = *(float *)(in_stack_00000020 + 0x354);
                }
                if (fVar21 < 0.0) {
                  fVar21 = fVar27;
                }
                *(float *)(in_stack_00000020 + 0x354) = fVar21;
              }
              else if (iVar7 == 0xa747) {
                if (*(int *)(param_2 + 0xe0) == 0) {
                  param_2 = thunk_FUN_01ac7298();
                  lVar16 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
                  lVar11 = *(long *)(lVar16 + 0x88);
                  if (lVar11 == 0) goto LAB_036ecd74;
                }
                if (*(uint *)(lVar11 + 0x18) <= uVar6) goto LAB_036ecd10;
                lVar11 = lVar11 + lVar14 * 0x18;
                _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
                fVar21 = (float)FUN_036f384c(param_2,*(undefined8 *)(lVar16 + 0x80),
                                             *(undefined4 *)(lVar11 + 0x2c),
                                             *(undefined4 *)(lVar11 + 0x30),&stack0x00000070);
                if (fVar21 == -32768.0) {
                  return 0;
                }
                param_2 = *(long *)PTR_DAT_03d9c920;
                if (*(int *)(param_2 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  param_2 = *(long *)PTR_DAT_03d9c920;
                }
                lVar11 = *(long *)(*(long *)(param_2 + 0xb8) + 0x88);
                if (lVar11 == 0) goto LAB_036ecd74;
                if (*(uint *)(lVar11 + 0x18) <= uVar6) goto LAB_036ecd10;
                iVar7 = *(int *)(lVar11 + lVar14 * 0x18 + 0x34);
                if (iVar7 == 0) {
                  fVar20 = fVar19;
                  if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                    fVar20 = 1.0;
                  }
                  fVar21 = fVar21 * fVar20;
                }
                else if (iVar7 == 1) {
                  fVar20 = fVar19;
                  if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                    fVar20 = 1.0;
                  }
                  fVar21 = fVar21 * fVar20 * *(float *)(in_stack_00000020 + 0x1e8);
                }
                else if (iVar7 == 2) {
                  fVar20 = fVar27;
                  if (*(float *)(in_stack_00000020 + 0x360) != -1.0) {
                    fVar20 = *(float *)(in_stack_00000020 + 0x360);
                  }
                  fVar21 = (fVar21 * (*(float *)(in_stack_00000020 + 0x358) - fVar20)) / 100.0;
                }
                else {
                  fVar21 = *(float *)(in_stack_00000020 + 0x350);
                }
                if (fVar21 < 0.0) {
                  fVar21 = fVar27;
                }
                *(float *)(in_stack_00000020 + 0x350) = fVar21;
              }
              uVar6 = uVar6 + 1;
            } while( true );
          }
          if (*(int *)(param_2 + 0xe0) == 0) {
            param_2 = thunk_FUN_01ac7298();
            param_1 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
            in_x9 = *(long *)(param_1 + 0x88);
            if (in_x9 == 0) goto LAB_036ecd74;
          }
          if (*(int *)(in_x9 + 0x18) != 0) {
            _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
            fVar19 = (float)FUN_036f384c(param_2,*(undefined8 *)(param_1 + 0x80),
                                         *(undefined4 *)(in_x9 + 0x2c),*(undefined4 *)(in_x9 + 0x30)
                                         ,&stack0x00000070);
            if (fVar19 != -32768.0) {
              if (in_stack_00000028._4_4_ == 0) {
                fVar27 = DAT_00b55290;
                if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                  fVar27 = 1.0;
                }
                fVar19 = fVar19 * fVar27;
              }
              else if (in_stack_00000028._4_4_ == 1) {
                fVar27 = DAT_00b55290;
                if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
                  fVar27 = 1.0;
                }
                fVar19 = *(float *)(in_stack_00000020 + 0x1e8) * fVar19 * fVar27;
              }
              else if (in_stack_00000028._4_4_ == 2) {
                fVar27 = 0.0;
                if (*(float *)(in_stack_00000020 + 0x360) != -1.0) {
                  fVar27 = *(float *)(in_stack_00000020 + 0x360);
                }
                fVar19 = (fVar19 * (*(float *)(in_stack_00000020 + 0x358) - fVar27)) / 100.0;
              }
              else {
                fVar19 = *(float *)(in_stack_00000020 + 0x350);
              }
              if (fVar19 < 0.0) {
                fVar19 = 0.0;
              }
              *(float *)(in_stack_00000020 + 0x350) = fVar19;
              *(float *)(in_stack_00000020 + 0x354) = fVar19;
              return 1;
            }
            return 0;
          }
        }
        goto LAB_036ecd10;
      }
      if (in_w10 == 0x1ab5ba) {
        return 0;
      }
      if (in_w10 != 0x1d33c6) {
        return 0;
      }
LAB_036e9864:
      if (*(int *)(param_2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        in_x9 = *(long *)(*(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 0x88);
        if (in_x9 == 0) goto LAB_036ecd74;
      }
      if (*(int *)(in_x9 + 0x18) != 0) {
        if (*(char *)(in_stack_00000020 + 0x431) == '\0') {
          return 1;
        }
        FUN_02176e2c(in_stack_00000020 + 0x5f8,*(undefined4 *)(in_x9 + 0x24),
                     *(undefined8 *)PTR_DAT_03d9d6b8);
        uVar9 = FUN_0303de64(&stack0x000002d4,0);
        uVar17 = FUN_0303de64(in_stack_00000020 + 0x494,0);
        uVar9 = FUN_02ee6d10(*(undefined8 *)PTR_DAT_03d9d750,uVar9,*(undefined8 *)PTR_DAT_03d9d758,
                             uVar17,0);
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                            );
        }
        FUN_038f2acc(uVar9,0);
        return 1;
      }
      goto LAB_036ecd10;
    }
    if (in_w10 < 0x21fefc) {
      if (in_w10 != 0x20d669) {
        if (in_w10 != 0x21fefb) {
          return 0;
        }
LAB_036e8e60:
        if (*(int *)(param_2 + 0xe0) == 0) {
          param_2 = thunk_FUN_01ac7298();
          param_1 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
          in_x9 = *(long *)(param_1 + 0x88);
          if (in_x9 == 0) goto LAB_036ecd74;
        }
        if (*(int *)(in_x9 + 0x18) != 0) {
          _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
          fVar19 = (float)FUN_036f384c(param_2,*(undefined8 *)(param_1 + 0x80),
                                       *(undefined4 *)(in_x9 + 0x2c),*(undefined4 *)(in_x9 + 0x30),
                                       &stack0x00000070);
          if (fVar19 == -32768.0) {
            return 0;
          }
          if (DAT_03fed257 == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed257 = '\x01';
          }
          puVar3 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
          uVar23 = 0;
          uVar24 = (ulong)(uint)(fVar19 * DAT_00b552c8);
          puVar10 = *(undefined4 **)
                     (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
          uVar5 = *puVar10;
          uVar26 = puVar10[1];
          uVar25 = puVar10[2];
          uVar8 = FUN_03914564(0,0,uVar24,0);
          if (DAT_03fed258 == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed258 = '\x01';
          }
          uStack0000000000000004 =
               (undefined4)((ulong)*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc) >> 0x20)
          ;
          goto LAB_036ea110;
        }
        goto LAB_036ecd10;
      }
LAB_036ea3f4:
      if (*(int *)(param_2 + 0xe0) == 0) {
        param_2 = thunk_FUN_01ac7298();
        param_1 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        in_x9 = *(long *)(param_1 + 0x88);
        if (in_x9 == 0) goto LAB_036ecd74;
      }
      if (*(int *)(in_x9 + 0x18) != 0) {
        _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
        fVar19 = (float)FUN_036f384c(param_2,*(undefined8 *)(param_1 + 0x80),
                                     *(undefined4 *)(in_x9 + 0x2c),*(undefined4 *)(in_x9 + 0x30),
                                     &stack0x00000070);
        if (fVar19 == -32768.0) {
          return 0;
        }
        if (in_stack_00000028._4_4_ == 0) {
          fVar27 = DAT_00b55290;
          if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
            fVar27 = 1.0;
          }
          fVar19 = fVar19 * fVar27;
        }
        else {
          if (in_stack_00000028._4_4_ != 1) {
LAB_036ea458:
            if (in_stack_00000028._4_4_ == 2) {
              return 0;
            }
            return 1;
          }
          fVar27 = DAT_00b55290;
          if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
            fVar27 = 1.0;
          }
          fVar19 = *(float *)(in_stack_00000020 + 0x1e8) * fVar19 * fVar27;
        }
        *(float *)(in_stack_00000020 + 0x2b0) = fVar19;
        return 1;
      }
      goto LAB_036ecd10;
    }
    if (in_w10 != 0x2248dd) {
      if (in_w10 == 0x680065) {
LAB_036e8acc:
        if (*(char *)(in_stack_00000020 + 0x431) != '\0') {
          FUN_02177074(in_stack_00000020 + 0x5f8,*(undefined8 *)PTR_DAT_03d9d6e8);
          uVar9 = FUN_0303de64(&stack0x0000026c,0);
          uVar17 = FUN_0303de64(&stack0x0000026c,0);
          uVar9 = FUN_02ee6d10(*(undefined8 *)PTR_DAT_03d9d750,uVar9,*(undefined8 *)PTR_DAT_03d9d768
                               ,uVar17,0);
          if (*(int *)(*(long *)
                        Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)
                                Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                              );
          }
          FUN_038f2acc(uVar9,0);
        }
        FUN_02176e74(in_stack_00000020 + 0x5f8,*(undefined8 *)PTR_DAT_03d9d718);
        return 1;
      }
      if (in_w10 != 0x691282) {
        return 0;
      }
      goto LAB_036ea6ec;
    }
  }
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    param_2 = *(long *)PTR_DAT_03d9c920;
    in_x9 = *(long *)(*(long *)(param_2 + 0xb8) + 0x88);
    if (in_x9 == 0) goto LAB_036ecd74;
  }
  if (*(int *)(in_x9 + 0x18) == 0) goto LAB_036ecd10;
  uVar5 = *(undefined4 *)(in_x9 + 0x24);
  *(undefined4 *)(in_stack_00000020 + 0x6a4) = 0xffffffff;
  if (*(int *)(in_x9 + 0x28) == 0) {
LAB_036e8314:
    puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    uVar9 = *(undefined8 *)(in_stack_00000020 + 0x1b0);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar8 = FUN_0391f968(uVar9,0,0);
    if ((uVar8 & 1) == 0) {
      uVar9 = *(undefined8 *)(in_stack_00000020 + 0x690);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar8 = FUN_0391f968(uVar9,0,0);
      if ((uVar8 & 1) != 0) {
LAB_036ec70c:
        uVar9 = *(undefined8 *)(in_stack_00000020 + 0x690);
        goto LAB_036ec714;
      }
      puVar15 = (undefined8 *)(in_stack_00000020 + 0x690);
      uVar9 = *puVar15;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar8 = FUN_03922f24(uVar9,0,0);
      if ((uVar8 & 1) != 0) {
        uVar9 = FUN_036fba3c(0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar3);
        }
        uVar8 = FUN_0391f968(uVar9,0,0);
        if ((uVar8 & 1) == 0) {
          uVar9 = FUN_01f2f4f0(*(undefined8 *)PTR_DAT_03d9d760,*(undefined8 *)PTR_DAT_03d9d6a0);
        }
        else {
          uVar9 = FUN_036fba3c(0);
        }
        *puVar15 = uVar9;
        thunk_FUN_01b4f09c(puVar15,uVar9);
        goto LAB_036ec70c;
      }
    }
    else {
      uVar9 = *(undefined8 *)(in_stack_00000020 + 0x1b0);
LAB_036ec714:
      *(undefined8 *)(in_stack_00000020 + 0x698) = uVar9;
      thunk_FUN_01b4f09c(in_stack_00000020 + 0x698);
    }
    uVar9 = *(undefined8 *)(in_stack_00000020 + 0x698);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar8 = FUN_03922f24(uVar9,0,0);
    if ((uVar8 & 1) != 0) {
      return 0;
    }
  }
  else {
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      in_x9 = *(long *)(*(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 0x88);
      if (in_x9 == 0) goto LAB_036ecd74;
    }
    if (*(int *)(in_x9 + 0x18) == 0) goto LAB_036ecd10;
    if (*(int *)(in_x9 + 0x28) == 1) goto LAB_036e8314;
    uVar8 = FUN_036b0780(uVar5,&stack0x000002d8,0);
    puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if ((uVar8 & 1) == 0) {
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar8 = FUN_03922f24(in_stack_000002d8,0,0);
      if ((uVar8 & 1) != 0) {
        lVar11 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar11 = *(long *)PTR_DAT_03d9c920;
        }
        lVar14 = *(long *)(lVar11 + 0xb8);
        lVar16 = *(long *)(lVar14 + 0x78);
        in_stack_000002d8 = 0;
        if (lVar16 != 0) {
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar14 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
          }
          lVar11 = *(long *)(lVar14 + 0x88);
          if (lVar11 == 0) goto LAB_036ecd74;
          if (*(int *)(lVar11 + 0x18) == 0) goto LAB_036ecd10;
          uVar9 = FUN_02eeda98(0,*(undefined8 *)(lVar14 + 0x80),*(undefined4 *)(lVar11 + 0x2c),
                               *(undefined4 *)(lVar11 + 0x30),0);
          in_stack_000002d8 =
               (**(code **)(lVar16 + 0x18))
                         (*(undefined8 *)(lVar16 + 0x40),uVar5,uVar9,*(undefined8 *)(lVar16 + 0x28))
          ;
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar8 = FUN_03922f24(in_stack_000002d8,0,0);
        if ((uVar8 & 1) != 0) {
          uVar9 = FUN_036fba58(0);
          lVar11 = *(long *)PTR_DAT_03d9c920;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01ac7298(lVar11);
            lVar11 = *(long *)PTR_DAT_03d9c920;
          }
          lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
          if (lVar14 == 0) goto LAB_036ecd74;
          if (*(int *)(lVar14 + 0x18) == 0) goto LAB_036ecd10;
          uVar17 = FUN_02eeda98(0,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x80),
                                *(undefined4 *)(lVar14 + 0x2c),*(undefined4 *)(lVar14 + 0x30),0);
          uVar9 = FUN_02edd6e8(uVar9,uVar17,0);
          in_stack_000002d8 = FUN_01f2f4f0(uVar9,*(undefined8 *)PTR_DAT_03d9d6a0);
        }
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar8 = FUN_03922f24(in_stack_000002d8,0,0);
      if ((uVar8 & 1) != 0) {
        return 0;
      }
      FUN_036b03b0(uVar5,in_stack_000002d8,0);
    }
    *(undefined8 *)(in_stack_00000020 + 0x698) = in_stack_000002d8;
    thunk_FUN_01b4f09c(in_stack_00000020 + 0x698);
  }
  lVar11 = *(long *)PTR_DAT_03d9c920;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar11 = *(long *)PTR_DAT_03d9c920;
  }
  lVar14 = *(long *)(lVar11 + 0xb8);
  lVar16 = *(long *)(lVar14 + 0x88);
  if (lVar16 == 0) {
LAB_036ecd74:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  if (*(int *)(lVar16 + 0x18) == 0) {
LAB_036ecd10:
                    /* WARNING: Subroutine does not return */
    FUN_01b48180();
  }
  if (*(int *)(lVar16 + 0x28) == 1) {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      lVar11 = thunk_FUN_01ac7298();
      lVar14 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
      lVar16 = *(long *)(lVar14 + 0x88);
      if (lVar16 == 0) goto LAB_036ecd74;
    }
    if (*(int *)(lVar16 + 0x18) == 0) goto LAB_036ecd10;
    _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
    fVar19 = (float)FUN_036f384c(lVar11,*(undefined8 *)(lVar14 + 0x80),
                                 *(undefined4 *)(lVar16 + 0x2c),*(undefined4 *)(lVar16 + 0x30),
                                 &stack0x00000070);
    iVar7 = -0x80000000;
    if (fVar19 != INFINITY) {
      iVar7 = (int)fVar19;
    }
    if (iVar7 == -0x8000) {
      return 0;
    }
    if ((*(long *)(in_stack_00000020 + 0x698) == 0) ||
       (lVar11 = FUN_036fe7c0(*(long *)(in_stack_00000020 + 0x698),0), lVar11 == 0))
    goto LAB_036ecd74;
    if (*(int *)(lVar11 + 0x18) + -1 < iVar7) {
      return 0;
    }
    *(int *)(in_stack_00000020 + 0x6a4) = iVar7;
    lVar11 = *(long *)PTR_DAT_03d9c920;
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar11 = *(long *)PTR_DAT_03d9c920;
  }
  uVar6 = 0;
  uVar5 = *(undefined4 *)(*(long *)(lVar11 + 0xb8) + 0x68);
  plVar12 = (long *)(in_stack_00000020 + 0x698);
  *(undefined1 *)(in_stack_00000020 + 0x1b9) = 0;
  *(undefined4 *)(in_stack_00000020 + 0x1bc) = uVar5;
LAB_036ec87c:
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar11 = *(long *)PTR_DAT_03d9c920;
  }
  lVar16 = *(long *)(lVar11 + 0xb8);
  lVar14 = *(long *)(lVar16 + 0x88);
  if (lVar14 == 0) goto LAB_036ecd74;
  if (*(int *)(lVar14 + 0x18) <= (int)uVar6) {
LAB_036ecd14:
    if (*(int *)(in_stack_00000020 + 0x6a4) == -1) {
      return 0;
    }
    lVar14 = *plVar12;
    if (lVar14 != 0) {
      uVar9 = *(undefined8 *)(lVar14 + 0x20);
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar11 = *(long *)PTR_DAT_03d9c920;
      }
      uVar5 = FUN_036b0d60(uVar9,lVar14,*(long *)(lVar11 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8),0);
      *(undefined4 *)(in_stack_00000020 + 0x120) = uVar5;
      *(undefined4 *)(in_stack_00000020 + 0x644) = 1;
      return 1;
    }
    goto LAB_036ecd74;
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar11 = *(long *)PTR_DAT_03d9c920;
    lVar16 = *(long *)(lVar11 + 0xb8);
    lVar14 = *(long *)(lVar16 + 0x88);
    if (lVar14 == 0) goto LAB_036ecd74;
  }
  if (*(uint *)(lVar14 + 0x18) <= uVar6) goto LAB_036ecd10;
  lVar18 = (long)(int)uVar6;
  if (*(int *)(lVar14 + lVar18 * 0x18 + 0x20) == 0) goto LAB_036ecd14;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar11 = *(long *)PTR_DAT_03d9c920;
    lVar16 = *(long *)(lVar11 + 0xb8);
    lVar14 = *(long *)(lVar16 + 0x88);
    if (lVar14 == 0) goto LAB_036ecd74;
  }
  if (*(uint *)(lVar14 + 0x18) <= uVar6) goto LAB_036ecd10;
  iVar7 = *(int *)(lVar14 + lVar18 * 0x18 + 0x20);
  if (iVar7 < 0xa954) {
    if (iVar7 < 0x7754) {
      if (iVar7 == 0x6851) {
LAB_036ecaa4:
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar16 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
          lVar14 = *(long *)(lVar16 + 0x88);
          if (lVar14 == 0) goto LAB_036ecd74;
        }
        if (*(uint *)(lVar14 + 0x18) <= uVar6) goto LAB_036ecd10;
        lVar14 = lVar14 + lVar18 * 0x18;
        iVar7 = FUN_036f37a0(in_stack_00000020,*(undefined8 *)(lVar16 + 0x80),
                             *(undefined4 *)(lVar14 + 0x2c),*(undefined4 *)(lVar14 + 0x30),
                             lVar16 + 0x90);
        if (iVar7 != 3) {
          return 0;
        }
        lVar11 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar11 = *(long *)PTR_DAT_03d9c920;
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x90);
        if (lVar11 == 0) goto LAB_036ecd74;
        if (*(int *)(lVar11 + 0x18) == 0) goto LAB_036ecd10;
        iVar7 = -0x80000000;
        if (*(float *)(lVar11 + 0x20) != INFINITY) {
          iVar7 = (int)*(float *)(lVar11 + 0x20);
        }
        *(int *)(in_stack_00000020 + 0x6a4) = iVar7;
        if (*(char *)(in_stack_00000020 + 0x431) == '\0') goto LAB_036eccfc;
        lVar11 = FUN_036e087c(in_stack_00000020);
        uVar5 = *(undefined4 *)(in_stack_00000020 + 0x494);
        uVar9 = *(undefined8 *)(in_stack_00000020 + 0x698);
        uVar26 = *(undefined4 *)(in_stack_00000020 + 0x6a4);
        lVar14 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01ac7298(lVar14);
          lVar14 = *(long *)PTR_DAT_03d9c920;
        }
        lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x90);
        if (lVar14 == 0) goto LAB_036ecd74;
        if ((*(uint *)(lVar14 + 0x18) < 2) || (*(uint *)(lVar14 + 0x18) == 2)) goto LAB_036ecd10;
        if (lVar11 == 0) goto LAB_036ecd74;
        iVar7 = -0x80000000;
        if (*(float *)(lVar14 + 0x24) != INFINITY) {
          iVar7 = (int)*(float *)(lVar14 + 0x24);
        }
        iVar1 = -0x80000000;
        if (*(float *)(lVar14 + 0x28) != INFINITY) {
          iVar1 = (int)*(float *)(lVar14 + 0x28);
        }
        FUN_036fdc28(lVar11,uVar5,uVar9,uVar26,iVar7,iVar1,0);
        goto LAB_036eccfc;
      }
      if (iVar7 != 0x7753) {
        return 0;
      }
    }
    else {
      if (iVar7 == 0x80fb) goto LAB_036eca48;
      if (iVar7 == 0x9a51) goto LAB_036ecaa4;
      if (iVar7 != 0xa953) {
        return 0;
      }
    }
    lVar16 = *plVar12;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar14 = *(long *)(*(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 0x88);
      if (lVar14 == 0) goto LAB_036ecd74;
    }
    if (*(uint *)(lVar14 + 0x18) <= uVar6) goto LAB_036ecd10;
    lVar11 = FUN_036ffb0c(lVar16,*(undefined4 *)(lVar14 + lVar18 * 0x18 + 0x24),1,&stack0x00000268,0
                         );
    *plVar12 = lVar11;
    thunk_FUN_01b4f09c(plVar12,lVar11);
    iVar7 = 0;
LAB_036eccf4:
    *(int *)(in_stack_00000020 + 0x6a4) = iVar7;
  }
  else {
    if (0x2ef43 < iVar7) {
      if (iVar7 < 0x4828a) {
        if (iVar7 != 0x3246a) {
          if (iVar7 != 0x44d63) {
            return 0;
          }
          goto LAB_036ecc1c;
        }
      }
      else if (iVar7 != 0x4828a) {
        if ((iVar7 != 0x18b5dd) && (iVar7 != 0x2248dd)) {
          return 0;
        }
        goto LAB_036eccfc;
      }
      if (*(int *)(lVar11 + 0xe0) == 0) {
        lVar11 = thunk_FUN_01ac7298();
        lVar16 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        lVar14 = *(long *)(lVar16 + 0x88);
        if (lVar14 == 0) goto LAB_036ecd74;
      }
      if (1 < *(uint *)(lVar14 + 0x18)) {
        _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
        fVar19 = (float)FUN_036f384c(lVar11,*(undefined8 *)(lVar16 + 0x80),
                                     *(undefined4 *)(lVar14 + 0x44),*(undefined4 *)(lVar14 + 0x48),
                                     &stack0x00000070);
        iVar7 = -0x80000000;
        if (fVar19 != INFINITY) {
          iVar7 = (int)fVar19;
        }
        if (iVar7 == -0x8000) {
          return 0;
        }
        if ((*plVar12 != 0) && (lVar11 = FUN_036fe7c0(*plVar12,0), lVar11 != 0)) {
          if (*(int *)(lVar11 + 0x18) + -1 < iVar7) {
            return 0;
          }
          goto LAB_036eccf4;
        }
        goto LAB_036ecd74;
      }
      goto LAB_036ecd10;
    }
    if (iVar7 == 0xb2fb) {
LAB_036eca48:
      if (*(int *)(lVar11 + 0xe0) == 0) {
        lVar11 = thunk_FUN_01ac7298();
        lVar16 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        lVar14 = *(long *)(lVar16 + 0x88);
        if (lVar14 == 0) goto LAB_036ecd74;
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar6) goto LAB_036ecd10;
      lVar14 = lVar14 + lVar18 * 0x18;
      _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
      fVar19 = (float)FUN_036f384c(lVar11,*(undefined8 *)(lVar16 + 0x80),
                                   *(undefined4 *)(lVar14 + 0x2c),*(undefined4 *)(lVar14 + 0x30),
                                   &stack0x00000070);
      *(bool *)(in_stack_00000020 + 0x1b9) = fVar19 != 0.0;
    }
    else {
      if (iVar7 != 0x2ef43) {
        return 0;
      }
LAB_036ecc1c:
      if (*(int *)(lVar11 + 0xe0) == 0) {
        lVar11 = thunk_FUN_01ac7298();
        lVar16 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        lVar14 = *(long *)(lVar16 + 0x88);
        if (lVar14 == 0) goto LAB_036ecd74;
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar6) goto LAB_036ecd10;
      lVar14 = lVar14 + lVar18 * 0x18;
      uVar5 = FUN_036f3554(lVar11,*(undefined8 *)(lVar16 + 0x80),*(undefined4 *)(lVar14 + 0x2c),
                           *(undefined4 *)(lVar14 + 0x30));
      *(undefined4 *)(in_stack_00000020 + 0x1bc) = uVar5;
    }
  }
LAB_036eccfc:
  uVar6 = uVar6 + 1;
  lVar11 = *(long *)PTR_DAT_03d9c920;
  goto LAB_036ec87c;
}


