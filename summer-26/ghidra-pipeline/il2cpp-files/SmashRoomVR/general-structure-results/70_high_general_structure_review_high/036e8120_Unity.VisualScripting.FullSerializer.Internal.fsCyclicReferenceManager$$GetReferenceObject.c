/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager$$GetReferenceObject
ENTRY_POINT: 036e8120
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_4
*/


undefined4
Unity_VisualScripting_FullSerializer_Internal_fsCyclicReferenceManager__GetReferenceObject
          (long param_1,long param_2)

{
  short sVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 *puVar7;
  long in_x9;
  int in_w10;
  int in_w11;
  int unaff_w24;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uStack0000000000000004;
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
  ulong in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  if (in_w10 <= in_w11) {
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
      iVar6 = 0x37302;
    }
    else {
      if (in_w10 < 0x4371f) {
        if (in_w10 != 0x435cd) {
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
          if (*(int *)(in_x9 + 0x18) == 0) goto LAB_036ecd10;
          if (*(int *)(in_x9 + 0x30) != 3) {
            return 0;
          }
          if (*(int *)(param_2 + 0xe0) == 0) {
            param_2 = thunk_FUN_01ac7298();
            param_1 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
          }
          lVar4 = *(long *)(param_1 + 0x80);
          if (lVar4 != 0) {
            if ((7 < *(uint *)(lVar4 + 0x18)) && (*(uint *)(lVar4 + 0x18) != 8)) {
              uVar5 = FUN_036f2b64(param_2,*(undefined2 *)(lVar4 + 0x2e));
              cVar2 = FUN_036f2b64(uVar5,*(undefined2 *)(lVar4 + 0x30));
              *(char *)(in_stack_00000020 + 0x4ef) = cVar2 + (char)uVar5 * '\x10';
              return 1;
            }
            goto LAB_036ecd10;
          }
          goto LAB_036ecd74;
        }
        if (*(int *)(param_2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          in_x9 = *(long *)(*(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 0x88);
          if (in_x9 == 0) goto LAB_036ecd74;
        }
        if (*(int *)(in_x9 + 0x18) != 0) {
          iVar6 = *(int *)(in_x9 + 0x24);
          if (iVar6 < -0x1b4fbb34) {
            if (iVar6 == -0x1f38ae01) {
              uVar3 = 8;
              uVar5 = 8;
            }
            else {
              if (iVar6 != -0x1b4fbb35) {
                return 0;
              }
              uVar3 = 2;
              uVar5 = 2;
            }
          }
          else if (iVar6 == 0x825ec40) {
            uVar3 = 4;
            uVar5 = 4;
          }
          else if (iVar6 == 0x74b6c44) {
            uVar3 = 0x10;
            uVar5 = 0x10;
          }
          else {
            if (iVar6 != 0x3998db) {
              return 0;
            }
            uVar3 = 1;
            uVar5 = 1;
          }
          *(undefined4 *)(in_stack_00000020 + 0x278) = uVar3;
          FUN_021773b8(in_stack_00000020 + 0x280,uVar5,*(undefined8 *)PTR_DAT_03d9d6b0);
          return 1;
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
        lVar4 = *(long *)(param_1 + 0x80);
        if (lVar4 == 0) goto LAB_036ecd74;
        if (*(uint *)(lVar4 + 0x18) < 7) goto LAB_036ecd10;
        sVar1 = *(short *)(lVar4 + 0x2c);
        if (*(int *)(param_2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          param_2 = *(long *)PTR_DAT_03d9c920;
          param_1 = *(long *)(param_2 + 0xb8);
          lVar4 = *(long *)(param_1 + 0x80);
        }
        if (unaff_w24 == 10 && sVar1 == 0x23) {
          uVar5 = 10;
LAB_036ec17c:
          uVar3 = FUN_036f3140(param_2,lVar4,uVar5);
LAB_036e7e8c:
          *(undefined4 *)(in_stack_00000020 + 0x4ec) = uVar3;
          uVar5 = *(undefined8 *)PTR_DAT_03d9d6d0;
        }
        else {
          if (lVar4 == 0) goto LAB_036ecd74;
          if (*(uint *)(lVar4 + 0x18) < 7) goto LAB_036ecd10;
          sVar1 = *(short *)(lVar4 + 0x2c);
          if (*(int *)(param_2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            param_2 = *(long *)PTR_DAT_03d9c920;
            param_1 = *(long *)(param_2 + 0xb8);
            lVar4 = *(long *)(param_1 + 0x80);
          }
          if (unaff_w24 == 0xb && sVar1 == 0x23) {
            uVar5 = 0xb;
            goto LAB_036ec17c;
          }
          if (lVar4 == 0) goto LAB_036ecd74;
          if (*(uint *)(lVar4 + 0x18) < 7) goto LAB_036ecd10;
          sVar1 = *(short *)(lVar4 + 0x2c);
          if (*(int *)(param_2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            param_2 = *(long *)PTR_DAT_03d9c920;
            param_1 = *(long *)(param_2 + 0xb8);
            lVar4 = *(long *)(param_1 + 0x80);
          }
          if (unaff_w24 == 0xd && sVar1 == 0x23) {
            uVar5 = 0xd;
            goto LAB_036ec17c;
          }
          if (lVar4 == 0) goto LAB_036ecd74;
          if (*(uint *)(lVar4 + 0x18) < 7) goto LAB_036ecd10;
          sVar1 = *(short *)(lVar4 + 0x2c);
          if (*(int *)(param_2 + 0xe0) == 0) {
            param_2 = thunk_FUN_01ac7298();
            param_1 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
          }
          if (unaff_w24 == 0xf && sVar1 == 0x23) {
            lVar4 = *(long *)(param_1 + 0x80);
            uVar5 = 0xf;
            goto LAB_036ec17c;
          }
          lVar4 = *(long *)(param_1 + 0x88);
          if (lVar4 == 0) goto LAB_036ecd74;
          if (*(int *)(lVar4 + 0x18) == 0) goto LAB_036ecd10;
          iVar6 = *(int *)(lVar4 + 0x24);
          if (iVar6 < 0x3829ca) {
            if (iVar6 < -0x232c3b1) {
              if (iVar6 == -0x3b2cd120) {
                *(undefined4 *)(in_stack_00000020 + 0x4ec) = 0xffe6d8ad;
                uVar3 = 0xffe6d8ad;
              }
              else {
                if (iVar6 != -0x232c3b2) {
                  return 0;
                }
                *(undefined4 *)(in_stack_00000020 + 0x4ec) = 0xfff020a0;
                uVar3 = 0xfff020a0;
              }
            }
            else {
              if (iVar6 == 0x1e9d3) {
                uVar10 = 0x3f800000;
LAB_036ecef8:
                uVar3 = 0;
LAB_036ecefc:
                uVar11 = 0;
                goto LAB_036ecf10;
              }
              if (iVar6 == 0x36863e) {
                uVar10 = 0;
                uVar3 = 0;
LAB_036ecf0c:
                uVar11 = 0x3f800000;
                goto LAB_036ecf10;
              }
              if (iVar6 != 0x3829c9) {
                return 0;
              }
              *(undefined4 *)(in_stack_00000020 + 0x4ec) = 0xff808080;
              uVar3 = 0xff808080;
            }
          }
          else {
            if (0x7071a47 < iVar6) {
              if (iVar6 == 0x73d641b) {
                uVar10 = 0;
                uVar3 = 0x3f800000;
                goto LAB_036ecefc;
              }
              if (iVar6 == 0x85daee7) {
                uVar10 = 0x3f800000;
                uVar3 = 0x3f800000;
                goto LAB_036ecf0c;
              }
              if (iVar6 != 0x21063284) {
                return 0;
              }
              uVar10 = 0x3f800000;
              uVar3 = DAT_00b550e0;
              uVar11 = DAT_00b551c8;
LAB_036ecf10:
              uVar3 = FUN_01bd7168(uVar10,uVar3,uVar11,0x3f800000,0);
              goto LAB_036e7e8c;
            }
            if (iVar6 != 0x19536f0) {
              if (iVar6 != 0x7071a47) {
                return 0;
              }
              uVar10 = 0;
              goto LAB_036ecef8;
            }
            *(undefined4 *)(in_stack_00000020 + 0x4ec) = 0xff0080ff;
            uVar3 = 0xff0080ff;
          }
          uVar5 = *(undefined8 *)PTR_DAT_03d9d6d0;
        }
        FUN_02176154(in_stack_00000020 + 0x4f0,uVar3,uVar5);
        return 1;
      }
      iVar6 = 0x4d122;
    }
    if (in_w10 == iVar6) {
      if (*(int *)(param_2 + 0xe0) == 0) {
        param_2 = thunk_FUN_01ac7298();
        param_1 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        in_x9 = *(long *)(param_1 + 0x88);
        if (in_x9 == 0) goto LAB_036ecd74;
      }
      if (*(int *)(in_x9 + 0x18) == 0) goto LAB_036ecd10;
      in_stack_00000070 = in_stack_00000070 & 0xffffffff00000000;
      fVar8 = (float)FUN_036f384c(param_2,*(undefined8 *)(param_1 + 0x80),
                                  *(undefined4 *)(in_x9 + 0x2c),*(undefined4 *)(in_x9 + 0x30),
                                  &stack0x00000070);
      if (fVar8 != -32768.0) {
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
        puVar7 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
        uVar11 = *puVar7;
        uVar10 = puVar7[1];
        uVar3 = puVar7[2];
        if (DAT_03fed256 == '\0') {
          thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__)
          ;
          DAT_03fed256 = '\x01';
        }
        puVar7 = *(undefined4 **)
                  (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                  0xb8);
        uStack0000000000000004 = 0x3f8000003f800000;
        FUN_03910ecc(&stack0x00000030,uVar11,uVar10,uVar3,*puVar7,puVar7[1],puVar7[2],puVar7[3],0);
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
    return 0;
  }
  if (0xefcec < in_w10) {
    if (in_w10 < 0xf8790) {
      if (in_w10 == 0xf80ab) {
        *(undefined1 *)(in_stack_00000020 + 0x474) = 0;
        return 1;
      }
      if (in_w10 == 0xf878f) {
        return 1;
      }
      return 0;
    }
    if (in_w10 == 0xfaf07) {
      *(undefined4 *)(in_stack_00000020 + 0x360) = 0xbf800000;
      return 1;
    }
    if (in_w10 != 0x104376) {
      iVar6 = 0x105b0c;
LAB_036e8674:
      if (in_w10 == iVar6) {
        uVar3 = FUN_0217619c(in_stack_00000020 + 0x4f0,*(undefined8 *)PTR_DAT_03d9d720);
        *(undefined4 *)(in_stack_00000020 + 0x4ec) = uVar3;
        return 1;
      }
      return 0;
    }
LAB_036eac48:
    uVar3 = FUN_02177400(in_stack_00000020 + 0x280,*(undefined8 *)PTR_DAT_03d9d728);
    *(undefined4 *)(in_stack_00000020 + 0x278) = uVar3;
    return 1;
  }
  if (0x4e24e < in_w10) {
    if (in_w10 != 0x4ff7e) {
      if (in_w10 != 0xee556) {
        iVar6 = 0xefcec;
        goto LAB_036e8674;
      }
      goto LAB_036eac48;
    }
LAB_036e8c88:
    if (*(int *)(param_2 + 0xe0) == 0) {
      param_2 = thunk_FUN_01ac7298();
      param_1 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
      in_x9 = *(long *)(param_1 + 0x88);
      if (in_x9 == 0) goto LAB_036ecd74;
    }
    if (*(int *)(in_x9 + 0x18) != 0) {
      in_stack_00000070 = in_stack_00000070 & 0xffffffff00000000;
      fVar8 = (float)FUN_036f384c(param_2,*(undefined8 *)(param_1 + 0x80),
                                  *(undefined4 *)(in_x9 + 0x2c),*(undefined4 *)(in_x9 + 0x30),
                                  &stack0x00000070);
      if (fVar8 == -32768.0) {
        return 0;
      }
      if (in_stack_00000028._4_4_ == 0) {
        fVar9 = DAT_00b55290;
        if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
          fVar9 = 1.0;
        }
        *(float *)(in_stack_00000020 + 0x360) = fVar8 * fVar9;
        return 1;
      }
      if (in_stack_00000028._4_4_ == 1) {
        return 0;
      }
      if (in_stack_00000028._4_4_ != 2) {
        return 1;
      }
      *(float *)(in_stack_00000020 + 0x360) =
           (fVar8 * *(float *)(in_stack_00000020 + 0x358)) / 100.0;
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
    if (in_x9 == 0) {
LAB_036ecd74:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
  if (*(int *)(in_x9 + 0x18) != 0) {
    in_stack_00000070 = in_stack_00000070 & 0xffffffff00000000;
    fVar8 = (float)FUN_036f384c(param_2,*(undefined8 *)(param_1 + 0x80),
                                *(undefined4 *)(in_x9 + 0x2c),*(undefined4 *)(in_x9 + 0x30),
                                &stack0x00000070);
    if (fVar8 == -32768.0) {
      return 0;
    }
    if (in_stack_00000028._4_4_ == 1) {
      fVar9 = DAT_00b55290;
      if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
        fVar9 = 1.0;
      }
      fVar8 = *(float *)(in_stack_00000020 + 0x640) +
              *(float *)(in_stack_00000020 + 0x1e8) * fVar8 * fVar9;
    }
    else {
      if (in_stack_00000028._4_4_ != 0) {
        return 0;
      }
      fVar9 = DAT_00b55290;
      if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
        fVar9 = 1.0;
      }
      fVar8 = *(float *)(in_stack_00000020 + 0x640) + fVar8 * fVar9;
    }
    *(float *)(in_stack_00000020 + 0x640) = fVar8;
    return 1;
  }
LAB_036ecd10:
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


