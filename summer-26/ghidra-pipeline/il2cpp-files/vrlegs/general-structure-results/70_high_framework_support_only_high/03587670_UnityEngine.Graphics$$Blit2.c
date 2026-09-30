/*
FUNCTION_NAME: UnityEngine.Graphics$$Blit2
ENTRY_POINT: 03587670
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_21;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_9
*/


undefined4 UnityEngine_Graphics__Blit2(long param_1,long param_2)

{
  int iVar1;
  short sVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long in_x9;
  undefined8 *puVar7;
  int in_w10;
  int unaff_w24;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uStack0000000000000004;
  long in_stack_00000020;
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
  
  if (in_w10 < 0x4371f) {
    if (in_w10 == 0x435cd) {
      if (*(int *)(param_2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        in_x9 = *(long *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x88);
        if (in_x9 == 0) goto LAB_0358c010;
      }
      if (*(int *)(in_x9 + 0x18) == 0) {
LAB_0358bfac:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      iVar1 = *(int *)(in_x9 + 0x24);
      if (iVar1 < -0x1b4fbb34) {
        if (iVar1 == -0x1f38ae01) {
          uVar9 = 8;
        }
        else {
          if (iVar1 != -0x1b4fbb35) goto LAB_0358c0b4;
          uVar9 = 2;
        }
      }
      else if (iVar1 == 0x825ec40) {
        uVar9 = 4;
      }
      else if (iVar1 == 0x74b6c44) {
        uVar9 = 0x10;
      }
      else {
        if (iVar1 != 0x3998db) goto LAB_0358c0b4;
        uVar9 = 1;
      }
      *(undefined4 *)(in_stack_00000020 + 0x278) = uVar9;
      in_stack_00000020 = in_stack_00000020 + 0x280;
      puVar7 = (undefined8 *)QFSW_QC_QuantumConsoleProcessor_<>c__DisplayClass27_0_TypeInfo;
LAB_0358b3c4:
      uVar5 = *puVar7;
      in_stack_00000070 = CONCAT44(in_stack_00000070._4_4_,uVar9);
LAB_035870e8:
      FUN_0209ad50(in_stack_00000020,&stack0x00000070,uVar5);
    }
    else {
      if (in_w10 != 0x4371e) goto LAB_0358c0b4;
      if (*(int *)(param_2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        param_2 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        param_1 = *(long *)(param_2 + 0xb8);
        in_x9 = *(long *)(param_1 + 0x88);
        if (in_x9 == 0) goto LAB_0358c010;
      }
      if (*(int *)(in_x9 + 0x18) == 0) goto LAB_0358bfac;
      if (*(int *)(in_x9 + 0x30) != 3) goto LAB_0358c0b4;
      if (*(int *)(param_2 + 0xe0) == 0) {
        param_2 = thunk_FUN_01a58e78();
        param_1 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
      }
      lVar4 = *(long *)(param_1 + 0x80);
      if (lVar4 == 0) goto LAB_0358c010;
      if ((*(uint *)(lVar4 + 0x18) < 8) || (*(uint *)(lVar4 + 0x18) == 8)) goto LAB_0358bfac;
      uVar5 = FUN_03591da0(param_2,*(undefined2 *)(lVar4 + 0x2e));
      cVar3 = FUN_03591da0(uVar5,*(undefined2 *)(lVar4 + 0x30));
      *(char *)(in_stack_00000020 + 0x4ef) = cVar3 + (char)uVar5 * '\x10';
    }
    uVar9 = 1;
  }
  else {
    if (in_w10 != 0x44760) {
      if (in_w10 == 0x44d63) {
        if (*(int *)(param_2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          param_2 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          param_1 = *(long *)(param_2 + 0xb8);
        }
        lVar4 = *(long *)(param_1 + 0x80);
        if (lVar4 == 0) {
LAB_0358c010:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(uint *)(lVar4 + 0x18) < 7) goto LAB_0358bfac;
        sVar2 = *(short *)(lVar4 + 0x2c);
        if (*(int *)(param_2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          param_2 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          param_1 = *(long *)(param_2 + 0xb8);
          lVar4 = *(long *)(param_1 + 0x80);
        }
        if (unaff_w24 == 10 && sVar2 == 0x23) {
          uVar5 = 10;
LAB_0358b424:
          uVar9 = FUN_0359237c(param_2,lVar4,uVar5);
        }
        else {
          if (lVar4 == 0) goto LAB_0358c010;
          if (*(uint *)(lVar4 + 0x18) < 7) goto LAB_0358bfac;
          sVar2 = *(short *)(lVar4 + 0x2c);
          if (*(int *)(param_2 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            param_2 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            param_1 = *(long *)(param_2 + 0xb8);
            lVar4 = *(long *)(param_1 + 0x80);
          }
          if (unaff_w24 == 0xb && sVar2 == 0x23) {
            uVar5 = 0xb;
            goto LAB_0358b424;
          }
          if (lVar4 == 0) goto LAB_0358c010;
          if (*(uint *)(lVar4 + 0x18) < 7) goto LAB_0358bfac;
          sVar2 = *(short *)(lVar4 + 0x2c);
          if (*(int *)(param_2 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            param_2 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            param_1 = *(long *)(param_2 + 0xb8);
            lVar4 = *(long *)(param_1 + 0x80);
          }
          if (unaff_w24 == 0xd && sVar2 == 0x23) {
            uVar5 = 0xd;
            goto LAB_0358b424;
          }
          if (lVar4 == 0) goto LAB_0358c010;
          if (*(uint *)(lVar4 + 0x18) < 7) goto LAB_0358bfac;
          sVar2 = *(short *)(lVar4 + 0x2c);
          if (*(int *)(param_2 + 0xe0) == 0) {
            param_2 = thunk_FUN_01a58e78();
            param_1 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          if (unaff_w24 == 0xf && sVar2 == 0x23) {
            lVar4 = *(long *)(param_1 + 0x80);
            uVar5 = 0xf;
            goto LAB_0358b424;
          }
          lVar4 = *(long *)(param_1 + 0x88);
          if (lVar4 == 0) goto LAB_0358c010;
          if (*(int *)(lVar4 + 0x18) == 0) goto LAB_0358bfac;
          iVar1 = *(int *)(lVar4 + 0x24);
          if (iVar1 < 0x3829ca) {
            if (iVar1 < -0x232c3b1) {
              if (iVar1 == -0x3b2cd120) {
                uVar9 = 0xffe6d8ad;
              }
              else {
                if (iVar1 != -0x232c3b2) goto LAB_0358c0b4;
                uVar9 = 0xfff020a0;
              }
            }
            else {
              if (iVar1 == 0x1e9d3) {
                uVar9 = 0x3f800000;
                goto FUN_0358c134;
              }
              if (iVar1 == 0x36863e) {
                uVar9 = 0;
                uVar10 = 0;
                goto LAB_0358c148;
              }
              if (iVar1 != 0x3829c9) goto LAB_0358c0b4;
              uVar9 = 0xff808080;
            }
LAB_0358c100:
            *(undefined4 *)(in_stack_00000020 + 0x4ec) = uVar9;
            in_stack_00000020 = in_stack_00000020 + 0x4f0;
            puVar7 = (undefined8 *)
                     QFSW_QC_QuantumConsoleProcessor_<ExtractCommandMethods>d__28_TypeInfo;
            goto LAB_0358b3c4;
          }
          if (iVar1 < 0x7071a48) {
            if (iVar1 == 0x19536f0) {
              uVar9 = 0xff0080ff;
              goto LAB_0358c100;
            }
            if (iVar1 != 0x7071a47) goto LAB_0358c0b4;
            uVar9 = 0;
FUN_0358c134:
            uVar10 = 0;
LAB_0358c138:
            uVar11 = 0;
          }
          else {
            if (iVar1 == 0x73d641b) {
              uVar9 = 0;
              uVar10 = 0x3f800000;
              goto LAB_0358c138;
            }
            if (iVar1 == 0x85daee7) {
              uVar9 = 0x3f800000;
              uVar10 = 0x3f800000;
LAB_0358c148:
              uVar11 = 0x3f800000;
            }
            else {
              if (iVar1 != 0x21063284) goto LAB_0358c0b4;
              uVar9 = 0x3f800000;
              uVar10 = DAT_00d38808;
              uVar11 = DAT_00d388f0;
            }
          }
          uVar9 = FUN_01b6d7fc(uVar9,uVar10,uVar11,0x3f800000,0);
        }
        *(undefined4 *)(in_stack_00000020 + 0x4ec) = uVar9;
        uVar5 = *(undefined8 *)QFSW_QC_QuantumConsoleProcessor_<ExtractCommandMethods>d__28_TypeInfo
        ;
        in_stack_00000020 = in_stack_00000020 + 0x4f0;
        in_stack_00000070 = CONCAT44(in_stack_00000070._4_4_,uVar9);
        goto LAB_035870e8;
      }
      if (in_w10 == 0x4d122) {
        if (*(int *)(param_2 + 0xe0) == 0) {
          param_2 = thunk_FUN_01a58e78();
          param_1 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          in_x9 = *(long *)(param_1 + 0x88);
          if (in_x9 == 0) goto LAB_0358c010;
        }
        if (*(int *)(in_x9 + 0x18) == 0) goto LAB_0358bfac;
        in_stack_00000070 = in_stack_00000070 & 0xffffffff00000000;
        fVar8 = (float)FUN_03592a88(param_2,*(undefined8 *)(param_1 + 0x80),
                                    *(undefined4 *)(in_x9 + 0x2c),*(undefined4 *)(in_x9 + 0x30),
                                    &stack0x00000070);
        if (fVar8 != -32768.0) {
          if (DAT_0411f172 == '\0') {
            FUN_01ab69ac(PTR_DAT_03cbded8);
            DAT_0411f172 = '\x01';
          }
          puVar6 = *(undefined4 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
          uVar11 = *puVar6;
          uVar10 = puVar6[1];
          uVar9 = puVar6[2];
          if (DAT_0411f169 == '\0') {
            FUN_01ab69ac(PTR_DAT_03cbdeb8);
            DAT_0411f169 = '\x01';
          }
          puVar6 = *(undefined4 **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8);
          uStack0000000000000004 = 0x3f8000003f800000;
          FUN_036bc7e0(&stack0x00000030,uVar11,uVar10,uVar9,*puVar6,puVar6[1],puVar6[2],puVar6[3],0)
          ;
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
    }
LAB_0358c0b4:
    uVar9 = 0;
  }
  return uVar9;
}


