/*
FUNCTION_NAME: UnityEngine.LightmapSettings$$get_lightmaps
ENTRY_POINT: 0358aa78
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_19;weak_xr_or_state_hits_19;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_19
*/


/* WARNING: Removing unreachable block (ram,0x0358bce0) */

undefined4 UnityEngine_LightmapSettings__get_lightmaps(void)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long in_x9;
  long lVar10;
  uint uVar11;
  long *unaff_x19;
  undefined4 unaff_w20;
  long lVar12;
  float fVar13;
  long in_stack_00000020;
  undefined4 in_stack_00000070;
  
  lVar8 = *(long *)(in_x9 + 0x88);
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x18) != 0) {
      FUN_025c65fc(0,*(undefined8 *)(in_x9 + 0x80),*(undefined4 *)(lVar8 + 0x2c),
                   *(undefined4 *)(lVar8 + 0x30),0);
      uVar6 = FUN_025b1328();
      uVar6 = FUN_01fe050c(uVar6,*(undefined8 *)
                                  Crosstales_BWF_Manager_PunctuationManager_<replaceAllAsync>d__28_TypeInfo
                          );
      if (*(int *)(*unaff_x19 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar7 = FUN_036d35a8(uVar6,0,0);
      if ((uVar7 & 1) != 0) {
        return 0;
      }
      FUN_035579d8(unaff_w20,uVar6,0);
      *(undefined8 *)(in_stack_00000020 + 0x698) = uVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000020 + 0x698);
      lVar8 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar8 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      }
      lVar9 = *(long *)(lVar8 + 0xb8);
      lVar10 = *(long *)(lVar9 + 0x88);
      if (lVar10 == 0) goto LAB_0358c010;
      if (*(int *)(lVar10 + 0x18) != 0) {
        if (*(int *)(lVar10 + 0x28) == 1) {
          if (*(int *)(lVar8 + 0xe0) == 0) {
            lVar8 = thunk_FUN_01a58e78();
            lVar9 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
            lVar10 = *(long *)(lVar9 + 0x88);
            if (lVar10 == 0) goto LAB_0358c010;
          }
          if (*(int *)(lVar10 + 0x18) == 0) goto LAB_0358bfac;
          in_stack_00000070 = 0;
          fVar13 = (float)FUN_03592a88(lVar8,*(undefined8 *)(lVar9 + 0x80),
                                       *(undefined4 *)(lVar10 + 0x2c),*(undefined4 *)(lVar10 + 0x30)
                                       ,&stack0x00000070);
          iVar4 = -0x80000000;
          if (fVar13 != INFINITY) {
            iVar4 = (int)fVar13;
          }
          if (iVar4 == -0x8000) {
            return 0;
          }
          if ((*(long *)(in_stack_00000020 + 0x698) == 0) ||
             (lVar8 = UnityEngine_Material__DisableKeyword(*(long *)(in_stack_00000020 + 0x698),0),
             lVar8 == 0)) goto LAB_0358c010;
          if (*(int *)(lVar8 + 0x18) + -1 < iVar4) {
            return 0;
          }
          *(int *)(in_stack_00000020 + 0x6a4) = iVar4;
          lVar8 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        }
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar8 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        }
        uVar11 = 0;
        uVar5 = *(undefined4 *)(*(long *)(lVar8 + 0xb8) + 0x68);
        plVar1 = (long *)(in_stack_00000020 + 0x698);
        *(undefined1 *)(in_stack_00000020 + 0x1b9) = 0;
        *(undefined4 *)(in_stack_00000020 + 0x1bc) = uVar5;
LAB_0358bb18:
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar8 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        }
        lVar10 = *(long *)(lVar8 + 0xb8);
        lVar9 = *(long *)(lVar10 + 0x88);
        if (lVar9 == 0) goto LAB_0358c010;
        if (*(int *)(lVar9 + 0x18) <= (int)uVar11) {
LAB_0358bfb0:
          if (*(int *)(in_stack_00000020 + 0x6a4) == -1) {
            return 0;
          }
          lVar9 = *plVar1;
          if (lVar9 != 0) {
            uVar6 = *(undefined8 *)(lVar9 + 0x20);
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar8 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            }
            uVar5 = FUN_03558224(uVar6,lVar9,*(long *)(lVar8 + 0xb8),
                                 *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8),0);
            *(undefined4 *)(in_stack_00000020 + 0x120) = uVar5;
            *(undefined4 *)(in_stack_00000020 + 0x644) = 1;
            return 1;
          }
          goto LAB_0358c010;
        }
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar8 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar10 = *(long *)(lVar8 + 0xb8);
          lVar9 = *(long *)(lVar10 + 0x88);
          if (lVar9 == 0) goto LAB_0358c010;
        }
        if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_0358bfac;
        lVar12 = (long)(int)uVar11;
        if (*(int *)(lVar9 + lVar12 * 0x18 + 0x20) == 0) goto LAB_0358bfb0;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar8 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar10 = *(long *)(lVar8 + 0xb8);
          lVar9 = *(long *)(lVar10 + 0x88);
          if (lVar9 == 0) goto LAB_0358c010;
        }
        if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_0358bfac;
        iVar4 = *(int *)(lVar9 + lVar12 * 0x18 + 0x20);
        if (iVar4 < 0xa954) {
          if (iVar4 < 0x7754) {
            if (iVar4 == 0x6851) {
LAB_0358bd40:
              if (*(int *)(lVar8 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar10 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                lVar9 = *(long *)(lVar10 + 0x88);
                if (lVar9 == 0) goto LAB_0358c010;
              }
              if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_0358bfac;
              lVar9 = lVar9 + lVar12 * 0x18;
              iVar4 = FUN_035929dc(in_stack_00000020,*(undefined8 *)(lVar10 + 0x80),
                                   *(undefined4 *)(lVar9 + 0x2c),*(undefined4 *)(lVar9 + 0x30),
                                   lVar10 + 0x90);
              if (iVar4 != 3) {
                return 0;
              }
              lVar8 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar8 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar8 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              }
              lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x90);
              if (lVar8 == 0) goto LAB_0358c010;
              if (*(int *)(lVar8 + 0x18) == 0) goto LAB_0358bfac;
              iVar4 = -0x80000000;
              if (*(float *)(lVar8 + 0x20) != INFINITY) {
                iVar4 = (int)*(float *)(lVar8 + 0x20);
              }
              *(int *)(in_stack_00000020 + 0x6a4) = iVar4;
              if (*(char *)(in_stack_00000020 + 0x431) == '\0') goto LAB_0358bf98;
              lVar8 = FUN_0357fa1c(in_stack_00000020);
              uVar5 = *(undefined4 *)(in_stack_00000020 + 0x494);
              uVar6 = *(undefined8 *)(in_stack_00000020 + 0x698);
              uVar3 = *(undefined4 *)(in_stack_00000020 + 0x6a4);
              lVar9 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar9 + 0xe0) == 0) {
                thunk_FUN_01a58e78(lVar9);
                lVar9 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              }
              lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x90);
              if (lVar9 == 0) goto LAB_0358c010;
              if ((*(uint *)(lVar9 + 0x18) < 2) || (*(uint *)(lVar9 + 0x18) == 2))
              goto LAB_0358bfac;
              if (lVar8 == 0) goto LAB_0358c010;
              iVar4 = -0x80000000;
              if (*(float *)(lVar9 + 0x24) != INFINITY) {
                iVar4 = (int)*(float *)(lVar9 + 0x24);
              }
              iVar2 = -0x80000000;
              if (*(float *)(lVar9 + 0x28) != INFINITY) {
                iVar2 = (int)*(float *)(lVar9 + 0x28);
              }
              FUN_03599b64(lVar8,uVar5,uVar6,uVar3,iVar4,iVar2,0);
              goto LAB_0358bf98;
            }
            if (iVar4 != 0x7753) {
              return 0;
            }
          }
          else {
            if (iVar4 == 0x80fb) goto LAB_0358bce4;
            if (iVar4 == 0x9a51) goto LAB_0358bd40;
            if (iVar4 != 0xa953) {
              return 0;
            }
          }
          lVar10 = *plVar1;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar9 = *(long *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x88);
            if (lVar9 == 0) goto LAB_0358c010;
          }
          if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_0358bfac;
          lVar8 = FUN_0359ba84(lVar10,*(undefined4 *)(lVar9 + lVar12 * 0x18 + 0x24),1,
                               &stack0x00000288,0);
          *plVar1 = lVar8;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1,lVar8);
          iVar4 = 0;
LAB_0358bf90:
          *(int *)(in_stack_00000020 + 0x6a4) = iVar4;
        }
        else {
          if (0x2ef43 < iVar4) {
            if (iVar4 < 0x4828a) {
              if (iVar4 != 0x3246a) {
                if (iVar4 != 0x44d63) {
                  return 0;
                }
                goto LAB_0358beb8;
              }
            }
            else if (iVar4 != 0x4828a) {
              if ((iVar4 != 0x18b5dd) && (iVar4 != 0x2248dd)) {
                return 0;
              }
              goto LAB_0358bf98;
            }
            if (*(int *)(lVar8 + 0xe0) == 0) {
              lVar8 = thunk_FUN_01a58e78();
              lVar10 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
              lVar9 = *(long *)(lVar10 + 0x88);
              if (lVar9 == 0) goto LAB_0358c010;
            }
            if (1 < *(uint *)(lVar9 + 0x18)) {
              in_stack_00000070 = 0;
              fVar13 = (float)FUN_03592a88(lVar8,*(undefined8 *)(lVar10 + 0x80),
                                           *(undefined4 *)(lVar9 + 0x44),
                                           *(undefined4 *)(lVar9 + 0x48),&stack0x00000070);
              iVar4 = -0x80000000;
              if (fVar13 != INFINITY) {
                iVar4 = (int)fVar13;
              }
              if (iVar4 == -0x8000) {
                return 0;
              }
              if ((*plVar1 != 0) &&
                 (lVar8 = UnityEngine_Material__DisableKeyword(*plVar1,0), lVar8 != 0)) {
                if (*(int *)(lVar8 + 0x18) + -1 < iVar4) {
                  return 0;
                }
                goto LAB_0358bf90;
              }
              goto LAB_0358c010;
            }
            goto LAB_0358bfac;
          }
          if (iVar4 == 0xb2fb) {
LAB_0358bce4:
            if (*(int *)(lVar8 + 0xe0) == 0) {
              lVar8 = thunk_FUN_01a58e78();
              lVar10 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
              lVar9 = *(long *)(lVar10 + 0x88);
              if (lVar9 == 0) goto LAB_0358c010;
            }
            if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_0358bfac;
            lVar9 = lVar9 + lVar12 * 0x18;
            in_stack_00000070 = 0;
            fVar13 = (float)FUN_03592a88(lVar8,*(undefined8 *)(lVar10 + 0x80),
                                         *(undefined4 *)(lVar9 + 0x2c),*(undefined4 *)(lVar9 + 0x30)
                                         ,&stack0x00000070);
            *(bool *)(in_stack_00000020 + 0x1b9) = fVar13 != 0.0;
          }
          else {
            if (iVar4 != 0x2ef43) {
              return 0;
            }
LAB_0358beb8:
            if (*(int *)(lVar8 + 0xe0) == 0) {
              lVar8 = thunk_FUN_01a58e78();
              lVar10 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
              lVar9 = *(long *)(lVar10 + 0x88);
              if (lVar9 == 0) goto LAB_0358c010;
            }
            if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_0358bfac;
            lVar9 = lVar9 + lVar12 * 0x18;
            uVar5 = FUN_03592790(lVar8,*(undefined8 *)(lVar10 + 0x80),*(undefined4 *)(lVar9 + 0x2c),
                                 *(undefined4 *)(lVar9 + 0x30));
            *(undefined4 *)(in_stack_00000020 + 0x1bc) = uVar5;
          }
        }
LAB_0358bf98:
        uVar11 = uVar11 + 1;
        lVar8 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        goto LAB_0358bb18;
      }
    }
LAB_0358bfac:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
LAB_0358c010:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


