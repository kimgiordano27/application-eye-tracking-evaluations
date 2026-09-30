/*
FUNCTION_NAME: UnityEngine.LightmapSettings$$set_lightmapsMode
ENTRY_POINT: 0358ab04
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

undefined4
UnityEngine_LightmapSettings__set_lightmapsMode(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  float fVar12;
  long in_stack_00000020;
  undefined4 in_stack_00000070;
  
  *(undefined8 *)(param_1 + 0x698) = param_3;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar6 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar6 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  }
  lVar7 = *(long *)(lVar6 + 0xb8);
  lVar8 = *(long *)(lVar7 + 0x88);
  if (lVar8 == 0) {
LAB_0358c010:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(int *)(lVar8 + 0x18) == 0) {
LAB_0358bfac:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  if (*(int *)(lVar8 + 0x28) == 1) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      lVar6 = thunk_FUN_01a58e78();
      lVar7 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
      lVar8 = *(long *)(lVar7 + 0x88);
      if (lVar8 == 0) goto LAB_0358c010;
    }
    if (*(int *)(lVar8 + 0x18) == 0) goto LAB_0358bfac;
    in_stack_00000070 = 0;
    fVar12 = (float)FUN_03592a88(lVar6,*(undefined8 *)(lVar7 + 0x80),*(undefined4 *)(lVar8 + 0x2c),
                                 *(undefined4 *)(lVar8 + 0x30),&stack0x00000070);
    iVar4 = -0x80000000;
    if (fVar12 != INFINITY) {
      iVar4 = (int)fVar12;
    }
    if (iVar4 == -0x8000) {
      return 0;
    }
    if ((*(long *)(in_stack_00000020 + 0x698) == 0) ||
       (lVar6 = UnityEngine_Material__DisableKeyword(*(long *)(in_stack_00000020 + 0x698),0),
       lVar6 == 0)) goto LAB_0358c010;
    if (*(int *)(lVar6 + 0x18) + -1 < iVar4) {
      return 0;
    }
    *(int *)(in_stack_00000020 + 0x6a4) = iVar4;
    lVar6 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar6 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  }
  uVar9 = 0;
  uVar5 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x68);
  plVar1 = (long *)(in_stack_00000020 + 0x698);
  *(undefined1 *)(in_stack_00000020 + 0x1b9) = 0;
  *(undefined4 *)(in_stack_00000020 + 0x1bc) = uVar5;
LAB_0358bb18:
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar6 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  }
  lVar8 = *(long *)(lVar6 + 0xb8);
  lVar7 = *(long *)(lVar8 + 0x88);
  if (lVar7 == 0) goto LAB_0358c010;
  if (*(int *)(lVar7 + 0x18) <= (int)uVar9) {
LAB_0358bfb0:
    if (*(int *)(in_stack_00000020 + 0x6a4) == -1) {
      return 0;
    }
    lVar7 = *plVar1;
    if (lVar7 != 0) {
      uVar10 = *(undefined8 *)(lVar7 + 0x20);
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar6 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      }
      uVar5 = FUN_03558224(uVar10,lVar7,*(long *)(lVar6 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8),0);
      *(undefined4 *)(in_stack_00000020 + 0x120) = uVar5;
      *(undefined4 *)(in_stack_00000020 + 0x644) = 1;
      return 1;
    }
    goto LAB_0358c010;
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar6 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    lVar8 = *(long *)(lVar6 + 0xb8);
    lVar7 = *(long *)(lVar8 + 0x88);
    if (lVar7 == 0) goto LAB_0358c010;
  }
  if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_0358bfac;
  lVar11 = (long)(int)uVar9;
  if (*(int *)(lVar7 + lVar11 * 0x18 + 0x20) == 0) goto LAB_0358bfb0;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar6 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    lVar8 = *(long *)(lVar6 + 0xb8);
    lVar7 = *(long *)(lVar8 + 0x88);
    if (lVar7 == 0) goto LAB_0358c010;
  }
  if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_0358bfac;
  iVar4 = *(int *)(lVar7 + lVar11 * 0x18 + 0x20);
  if (iVar4 < 0xa954) {
    if (iVar4 < 0x7754) {
      if (iVar4 == 0x6851) {
LAB_0358bd40:
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar8 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          lVar7 = *(long *)(lVar8 + 0x88);
          if (lVar7 == 0) goto LAB_0358c010;
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_0358bfac;
        lVar7 = lVar7 + lVar11 * 0x18;
        iVar4 = FUN_035929dc(in_stack_00000020,*(undefined8 *)(lVar8 + 0x80),
                             *(undefined4 *)(lVar7 + 0x2c),*(undefined4 *)(lVar7 + 0x30),
                             lVar8 + 0x90);
        if (iVar4 != 3) {
          return 0;
        }
        lVar6 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar6 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x90);
        if (lVar6 == 0) goto LAB_0358c010;
        if (*(int *)(lVar6 + 0x18) == 0) goto LAB_0358bfac;
        iVar4 = -0x80000000;
        if (*(float *)(lVar6 + 0x20) != INFINITY) {
          iVar4 = (int)*(float *)(lVar6 + 0x20);
        }
        *(int *)(in_stack_00000020 + 0x6a4) = iVar4;
        if (*(char *)(in_stack_00000020 + 0x431) == '\0') goto LAB_0358bf98;
        lVar6 = FUN_0357fa1c(in_stack_00000020);
        uVar5 = *(undefined4 *)(in_stack_00000020 + 0x494);
        uVar10 = *(undefined8 *)(in_stack_00000020 + 0x698);
        uVar3 = *(undefined4 *)(in_stack_00000020 + 0x6a4);
        lVar7 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar7);
          lVar7 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x90);
        if (lVar7 == 0) goto LAB_0358c010;
        if ((*(uint *)(lVar7 + 0x18) < 2) || (*(uint *)(lVar7 + 0x18) == 2)) goto LAB_0358bfac;
        if (lVar6 == 0) goto LAB_0358c010;
        iVar4 = -0x80000000;
        if (*(float *)(lVar7 + 0x24) != INFINITY) {
          iVar4 = (int)*(float *)(lVar7 + 0x24);
        }
        iVar2 = -0x80000000;
        if (*(float *)(lVar7 + 0x28) != INFINITY) {
          iVar2 = (int)*(float *)(lVar7 + 0x28);
        }
        FUN_03599b64(lVar6,uVar5,uVar10,uVar3,iVar4,iVar2,0);
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
    lVar8 = *plVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar7 = *(long *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x88);
      if (lVar7 == 0) goto LAB_0358c010;
    }
    if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_0358bfac;
    lVar6 = FUN_0359ba84(lVar8,*(undefined4 *)(lVar7 + lVar11 * 0x18 + 0x24),1,&stack0x00000288,0);
    *plVar1 = lVar6;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1,lVar6);
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
      if (*(int *)(lVar6 + 0xe0) == 0) {
        lVar6 = thunk_FUN_01a58e78();
        lVar8 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        lVar7 = *(long *)(lVar8 + 0x88);
        if (lVar7 == 0) goto LAB_0358c010;
      }
      if (1 < *(uint *)(lVar7 + 0x18)) {
        in_stack_00000070 = 0;
        fVar12 = (float)FUN_03592a88(lVar6,*(undefined8 *)(lVar8 + 0x80),
                                     *(undefined4 *)(lVar7 + 0x44),*(undefined4 *)(lVar7 + 0x48),
                                     &stack0x00000070);
        iVar4 = -0x80000000;
        if (fVar12 != INFINITY) {
          iVar4 = (int)fVar12;
        }
        if (iVar4 == -0x8000) {
          return 0;
        }
        if ((*plVar1 != 0) && (lVar6 = UnityEngine_Material__DisableKeyword(*plVar1,0), lVar6 != 0))
        {
          if (*(int *)(lVar6 + 0x18) + -1 < iVar4) {
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
      if (*(int *)(lVar6 + 0xe0) == 0) {
        lVar6 = thunk_FUN_01a58e78();
        lVar8 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        lVar7 = *(long *)(lVar8 + 0x88);
        if (lVar7 == 0) goto LAB_0358c010;
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_0358bfac;
      lVar7 = lVar7 + lVar11 * 0x18;
      in_stack_00000070 = 0;
      fVar12 = (float)FUN_03592a88(lVar6,*(undefined8 *)(lVar8 + 0x80),*(undefined4 *)(lVar7 + 0x2c)
                                   ,*(undefined4 *)(lVar7 + 0x30),&stack0x00000070);
      *(bool *)(in_stack_00000020 + 0x1b9) = fVar12 != 0.0;
    }
    else {
      if (iVar4 != 0x2ef43) {
        return 0;
      }
LAB_0358beb8:
      if (*(int *)(lVar6 + 0xe0) == 0) {
        lVar6 = thunk_FUN_01a58e78();
        lVar8 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        lVar7 = *(long *)(lVar8 + 0x88);
        if (lVar7 == 0) goto LAB_0358c010;
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_0358bfac;
      lVar7 = lVar7 + lVar11 * 0x18;
      uVar5 = FUN_03592790(lVar6,*(undefined8 *)(lVar8 + 0x80),*(undefined4 *)(lVar7 + 0x2c),
                           *(undefined4 *)(lVar7 + 0x30));
      *(undefined4 *)(in_stack_00000020 + 0x1bc) = uVar5;
    }
  }
LAB_0358bf98:
  uVar9 = uVar9 + 1;
  lVar6 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  goto LAB_0358bb18;
}


