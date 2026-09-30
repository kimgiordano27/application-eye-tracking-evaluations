/*
FUNCTION_NAME: UnityEngine.LightmapData$$set_lightmapDir
ENTRY_POINT: 0358aa00
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_21
*/


/* WARNING: Removing unreachable block (ram,0x0358bce0) */

undefined4 UnityEngine_LightmapData__set_lightmapDir(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  code *in_x9;
  long lVar11;
  uint uVar12;
  long *unaff_x19;
  undefined4 unaff_w20;
  long lVar13;
  float fVar14;
  long in_stack_00000020;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  
  (*in_x9)(param_1,&stack0x00000030,param_2,&stack0x00000070);
  uVar7 = CONCAT44(uStack0000000000000074,uStack0000000000000070);
  if (*(int *)(*unaff_x19 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar6 = FUN_036d35a8(uVar7,0,0);
  if ((uVar6 & 1) != 0) {
    uVar7 = FUN_035977c4(0);
    lVar9 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar9);
      lVar9 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    }
    lVar10 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x88);
    if (lVar10 == 0) goto LAB_0358c010;
    if (*(int *)(lVar10 + 0x18) == 0) goto LAB_0358bfac;
    uVar8 = FUN_025c65fc(0,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x80),
                         *(undefined4 *)(lVar10 + 0x2c),*(undefined4 *)(lVar10 + 0x30),0);
    uVar7 = FUN_025b1328(uVar7,uVar8,0);
    uVar7 = FUN_01fe050c(uVar7,*(undefined8 *)
                                Crosstales_BWF_Manager_PunctuationManager_<replaceAllAsync>d__28_TypeInfo
                        );
  }
  if (*(int *)(*unaff_x19 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar6 = FUN_036d35a8(uVar7,0,0);
  if ((uVar6 & 1) != 0) {
    return 0;
  }
  FUN_035579d8(unaff_w20,uVar7,0);
  *(undefined8 *)(in_stack_00000020 + 0x698) = uVar7;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000020 + 0x698);
  lVar9 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar9 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  }
  lVar10 = *(long *)(lVar9 + 0xb8);
  lVar11 = *(long *)(lVar10 + 0x88);
  if (lVar11 == 0) {
LAB_0358c010:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(int *)(lVar11 + 0x18) == 0) {
LAB_0358bfac:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  if (*(int *)(lVar11 + 0x28) == 1) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      lVar9 = thunk_FUN_01a58e78();
      lVar10 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
      lVar11 = *(long *)(lVar10 + 0x88);
      if (lVar11 == 0) goto LAB_0358c010;
    }
    if (*(int *)(lVar11 + 0x18) == 0) goto LAB_0358bfac;
    uStack0000000000000070 = 0;
    fVar14 = (float)FUN_03592a88(lVar9,*(undefined8 *)(lVar10 + 0x80),*(undefined4 *)(lVar11 + 0x2c)
                                 ,*(undefined4 *)(lVar11 + 0x30),&stack0x00000070);
    iVar4 = -0x80000000;
    if (fVar14 != INFINITY) {
      iVar4 = (int)fVar14;
    }
    if (iVar4 == -0x8000) {
      return 0;
    }
    if ((*(long *)(in_stack_00000020 + 0x698) == 0) ||
       (lVar9 = UnityEngine_Material__DisableKeyword(*(long *)(in_stack_00000020 + 0x698),0),
       lVar9 == 0)) goto LAB_0358c010;
    if (*(int *)(lVar9 + 0x18) + -1 < iVar4) {
      return 0;
    }
    *(int *)(in_stack_00000020 + 0x6a4) = iVar4;
    lVar9 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  }
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar9 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  }
  uVar12 = 0;
  uVar5 = *(undefined4 *)(*(long *)(lVar9 + 0xb8) + 0x68);
  plVar1 = (long *)(in_stack_00000020 + 0x698);
  *(undefined1 *)(in_stack_00000020 + 0x1b9) = 0;
  *(undefined4 *)(in_stack_00000020 + 0x1bc) = uVar5;
LAB_0358bb18:
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar9 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  }
  lVar11 = *(long *)(lVar9 + 0xb8);
  lVar10 = *(long *)(lVar11 + 0x88);
  if (lVar10 == 0) goto LAB_0358c010;
  if (*(int *)(lVar10 + 0x18) <= (int)uVar12) {
LAB_0358bfb0:
    if (*(int *)(in_stack_00000020 + 0x6a4) == -1) {
      return 0;
    }
    lVar10 = *plVar1;
    if (lVar10 != 0) {
      uVar7 = *(undefined8 *)(lVar10 + 0x20);
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar9 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      }
      uVar5 = FUN_03558224(uVar7,lVar10,*(long *)(lVar9 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 8),0);
      *(undefined4 *)(in_stack_00000020 + 0x120) = uVar5;
      *(undefined4 *)(in_stack_00000020 + 0x644) = 1;
      return 1;
    }
    goto LAB_0358c010;
  }
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar9 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    lVar11 = *(long *)(lVar9 + 0xb8);
    lVar10 = *(long *)(lVar11 + 0x88);
    if (lVar10 == 0) goto LAB_0358c010;
  }
  if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_0358bfac;
  lVar13 = (long)(int)uVar12;
  if (*(int *)(lVar10 + lVar13 * 0x18 + 0x20) == 0) goto LAB_0358bfb0;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar9 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    lVar11 = *(long *)(lVar9 + 0xb8);
    lVar10 = *(long *)(lVar11 + 0x88);
    if (lVar10 == 0) goto LAB_0358c010;
  }
  if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_0358bfac;
  iVar4 = *(int *)(lVar10 + lVar13 * 0x18 + 0x20);
  if (iVar4 < 0xa954) {
    if (iVar4 < 0x7754) {
      if (iVar4 == 0x6851) {
LAB_0358bd40:
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar11 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          lVar10 = *(long *)(lVar11 + 0x88);
          if (lVar10 == 0) goto LAB_0358c010;
        }
        if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_0358bfac;
        lVar10 = lVar10 + lVar13 * 0x18;
        iVar4 = FUN_035929dc(in_stack_00000020,*(undefined8 *)(lVar11 + 0x80),
                             *(undefined4 *)(lVar10 + 0x2c),*(undefined4 *)(lVar10 + 0x30),
                             lVar11 + 0x90);
        if (iVar4 != 3) {
          return 0;
        }
        lVar9 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar9 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x90);
        if (lVar9 == 0) goto LAB_0358c010;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_0358bfac;
        iVar4 = -0x80000000;
        if (*(float *)(lVar9 + 0x20) != INFINITY) {
          iVar4 = (int)*(float *)(lVar9 + 0x20);
        }
        *(int *)(in_stack_00000020 + 0x6a4) = iVar4;
        if (*(char *)(in_stack_00000020 + 0x431) == '\0') goto LAB_0358bf98;
        lVar9 = FUN_0357fa1c(in_stack_00000020);
        uVar5 = *(undefined4 *)(in_stack_00000020 + 0x494);
        uVar7 = *(undefined8 *)(in_stack_00000020 + 0x698);
        uVar3 = *(undefined4 *)(in_stack_00000020 + 0x6a4);
        lVar10 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar10);
          lVar10 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x90);
        if (lVar10 == 0) goto LAB_0358c010;
        if ((*(uint *)(lVar10 + 0x18) < 2) || (*(uint *)(lVar10 + 0x18) == 2)) goto LAB_0358bfac;
        if (lVar9 == 0) goto LAB_0358c010;
        iVar4 = -0x80000000;
        if (*(float *)(lVar10 + 0x24) != INFINITY) {
          iVar4 = (int)*(float *)(lVar10 + 0x24);
        }
        iVar2 = -0x80000000;
        if (*(float *)(lVar10 + 0x28) != INFINITY) {
          iVar2 = (int)*(float *)(lVar10 + 0x28);
        }
        FUN_03599b64(lVar9,uVar5,uVar7,uVar3,iVar4,iVar2,0);
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
    lVar11 = *plVar1;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar10 = *(long *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x88);
      if (lVar10 == 0) goto LAB_0358c010;
    }
    if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_0358bfac;
    lVar9 = FUN_0359ba84(lVar11,*(undefined4 *)(lVar10 + lVar13 * 0x18 + 0x24),1,&stack0x00000288,0)
    ;
    *plVar1 = lVar9;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1,lVar9);
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
      if (*(int *)(lVar9 + 0xe0) == 0) {
        lVar9 = thunk_FUN_01a58e78();
        lVar11 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        lVar10 = *(long *)(lVar11 + 0x88);
        if (lVar10 == 0) goto LAB_0358c010;
      }
      if (1 < *(uint *)(lVar10 + 0x18)) {
        uStack0000000000000070 = 0;
        fVar14 = (float)FUN_03592a88(lVar9,*(undefined8 *)(lVar11 + 0x80),
                                     *(undefined4 *)(lVar10 + 0x44),*(undefined4 *)(lVar10 + 0x48),
                                     &stack0x00000070);
        iVar4 = -0x80000000;
        if (fVar14 != INFINITY) {
          iVar4 = (int)fVar14;
        }
        if (iVar4 == -0x8000) {
          return 0;
        }
        if ((*plVar1 != 0) && (lVar9 = UnityEngine_Material__DisableKeyword(*plVar1,0), lVar9 != 0))
        {
          if (*(int *)(lVar9 + 0x18) + -1 < iVar4) {
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
      if (*(int *)(lVar9 + 0xe0) == 0) {
        lVar9 = thunk_FUN_01a58e78();
        lVar11 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        lVar10 = *(long *)(lVar11 + 0x88);
        if (lVar10 == 0) goto LAB_0358c010;
      }
      if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_0358bfac;
      lVar10 = lVar10 + lVar13 * 0x18;
      uStack0000000000000070 = 0;
      fVar14 = (float)FUN_03592a88(lVar9,*(undefined8 *)(lVar11 + 0x80),
                                   *(undefined4 *)(lVar10 + 0x2c),*(undefined4 *)(lVar10 + 0x30),
                                   &stack0x00000070);
      *(bool *)(in_stack_00000020 + 0x1b9) = fVar14 != 0.0;
    }
    else {
      if (iVar4 != 0x2ef43) {
        return 0;
      }
LAB_0358beb8:
      if (*(int *)(lVar9 + 0xe0) == 0) {
        lVar9 = thunk_FUN_01a58e78();
        lVar11 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        lVar10 = *(long *)(lVar11 + 0x88);
        if (lVar10 == 0) goto LAB_0358c010;
      }
      if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_0358bfac;
      lVar10 = lVar10 + lVar13 * 0x18;
      uVar5 = FUN_03592790(lVar9,*(undefined8 *)(lVar11 + 0x80),*(undefined4 *)(lVar10 + 0x2c),
                           *(undefined4 *)(lVar10 + 0x30));
      *(undefined4 *)(in_stack_00000020 + 0x1bc) = uVar5;
    }
  }
LAB_0358bf98:
  uVar12 = uVar12 + 1;
  lVar9 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  goto LAB_0358bb18;
}


