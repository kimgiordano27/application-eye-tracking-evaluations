/*
FUNCTION_NAME: UnityEngine.Graphics$$Internal_DrawMeshInstancedIndirect_Injected
ENTRY_POINT: 0358753c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_21
*/


/* WARNING: Removing unreachable block (ram,0x0358bce0) */

undefined4 UnityEngine_Graphics__Internal_DrawMeshInstancedIndirect_Injected(void)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined4 unaff_w20;
  undefined8 uVar14;
  long lVar15;
  float fVar16;
  long in_stack_00000020;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined8 in_stack_000002f8;
  
  puVar5 = PTR_DAT_03cbdf88;
  lVar11 = *(long *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x88);
  if (lVar11 == 0) goto LAB_0358c010;
  if (*(int *)(lVar11 + 0x18) == 0) goto LAB_0358bfac;
  if (*(int *)(lVar11 + 0x28) == 1) {
    uVar14 = *(undefined8 *)(in_stack_00000020 + 0x1b0);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar8 = FUN_036cee6c(uVar14,0,0);
    if ((uVar8 & 1) == 0) {
      uVar14 = *(undefined8 *)(in_stack_00000020 + 0x690);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar8 = FUN_036cee6c(uVar14,0,0);
      if ((uVar8 & 1) != 0) {
UnityEngine_HDROutputSettings__get_main:
        uVar14 = *(undefined8 *)(in_stack_00000020 + 0x690);
        goto LAB_0358b9b0;
      }
      puVar1 = (undefined8 *)(in_stack_00000020 + 0x690);
      uVar14 = *puVar1;
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar8 = FUN_036d35a8(uVar14,0,0);
      if ((uVar8 & 1) != 0) {
        uVar14 = FUN_035977a8(0);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)puVar5);
        }
        uVar8 = FUN_036cee6c(uVar14,0,0);
        if ((uVar8 & 1) == 0) {
          uVar14 = FUN_01fe050c(*(undefined8 *)
                                 Unity_Entities_RateUtils_FixedRateCatchUpManager_TypeInfo,
                                *(undefined8 *)
                                 Crosstales_BWF_Manager_PunctuationManager_<replaceAllAsync>d__28_TypeInfo
                               );
        }
        else {
          uVar14 = FUN_035977a8(0);
        }
        *puVar1 = uVar14;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar1,uVar14);
        goto UnityEngine_HDROutputSettings__get_main;
      }
    }
    else {
      uVar14 = *(undefined8 *)(in_stack_00000020 + 0x1b0);
LAB_0358b9b0:
      *(undefined8 *)(in_stack_00000020 + 0x698) = uVar14;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000020 + 0x698);
    }
    uVar14 = *(undefined8 *)(in_stack_00000020 + 0x698);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar8 = FUN_036d35a8(uVar14,0,0);
    if ((uVar8 & 1) != 0) {
      return 0;
    }
  }
  else {
    uVar8 = FUN_03557d14(unaff_w20,&stack0x000002f8,0);
    puVar5 = PTR_DAT_03cbdf88;
    if ((uVar8 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar8 = FUN_036d35a8(in_stack_000002f8,0,0);
      if ((uVar8 & 1) != 0) {
        lVar11 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar11 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        }
        lVar10 = *(long *)(lVar11 + 0xb8);
        lVar12 = *(long *)(lVar10 + 0x78);
        in_stack_000002f8 = 0;
        if (lVar12 != 0) {
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar10 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          }
          lVar11 = *(long *)(lVar10 + 0x88);
          if (lVar11 == 0) goto LAB_0358c010;
          if (*(int *)(lVar11 + 0x18) == 0) goto LAB_0358bfac;
          uVar14 = FUN_025c65fc(0,*(undefined8 *)(lVar10 + 0x80),*(undefined4 *)(lVar11 + 0x2c),
                                *(undefined4 *)(lVar11 + 0x30),0);
          in_stack_00000030 = unaff_w20;
          (**(code **)(lVar12 + 0x18))
                    (*(undefined8 *)(lVar12 + 0x40),&stack0x00000030,uVar14,&stack0x00000070,
                     *(undefined8 *)(lVar12 + 0x28));
          in_stack_000002f8 = CONCAT44(uStack0000000000000074,uStack0000000000000070);
        }
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar8 = FUN_036d35a8(in_stack_000002f8,0,0);
        if ((uVar8 & 1) != 0) {
          uVar14 = FUN_035977c4(0);
          lVar11 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar11);
            lVar11 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          }
          lVar10 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x88);
          if (lVar10 == 0) goto LAB_0358c010;
          if (*(int *)(lVar10 + 0x18) == 0) goto LAB_0358bfac;
          uVar9 = FUN_025c65fc(0,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x80),
                               *(undefined4 *)(lVar10 + 0x2c),*(undefined4 *)(lVar10 + 0x30),0);
          uVar14 = FUN_025b1328(uVar14,uVar9,0);
          in_stack_000002f8 =
               FUN_01fe050c(uVar14,*(undefined8 *)
                                    Crosstales_BWF_Manager_PunctuationManager_<replaceAllAsync>d__28_TypeInfo
                           );
        }
      }
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar8 = FUN_036d35a8(in_stack_000002f8,0,0);
      if ((uVar8 & 1) != 0) {
        return 0;
      }
      FUN_035579d8(unaff_w20,in_stack_000002f8,0);
    }
    *(undefined8 *)(in_stack_00000020 + 0x698) = in_stack_000002f8;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000020 + 0x698);
  }
  lVar11 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar11 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  }
  lVar10 = *(long *)(lVar11 + 0xb8);
  lVar12 = *(long *)(lVar10 + 0x88);
  if (lVar12 == 0) {
LAB_0358c010:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(int *)(lVar12 + 0x18) == 0) {
LAB_0358bfac:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  if (*(int *)(lVar12 + 0x28) == 1) {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      lVar11 = thunk_FUN_01a58e78();
      lVar10 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
      lVar12 = *(long *)(lVar10 + 0x88);
      if (lVar12 == 0) goto LAB_0358c010;
    }
    if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0358bfac;
    uStack0000000000000070 = 0;
    fVar16 = (float)FUN_03592a88(lVar11,*(undefined8 *)(lVar10 + 0x80),
                                 *(undefined4 *)(lVar12 + 0x2c),*(undefined4 *)(lVar12 + 0x30),
                                 &stack0x00000070);
    iVar6 = -0x80000000;
    if (fVar16 != INFINITY) {
      iVar6 = (int)fVar16;
    }
    if (iVar6 == -0x8000) {
      return 0;
    }
    if ((*(long *)(in_stack_00000020 + 0x698) == 0) ||
       (lVar11 = UnityEngine_Material__DisableKeyword(*(long *)(in_stack_00000020 + 0x698),0),
       lVar11 == 0)) goto LAB_0358c010;
    if (*(int *)(lVar11 + 0x18) + -1 < iVar6) {
      return 0;
    }
    *(int *)(in_stack_00000020 + 0x6a4) = iVar6;
    lVar11 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar11 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  }
  uVar13 = 0;
  uVar7 = *(undefined4 *)(*(long *)(lVar11 + 0xb8) + 0x68);
  plVar2 = (long *)(in_stack_00000020 + 0x698);
  *(undefined1 *)(in_stack_00000020 + 0x1b9) = 0;
  *(undefined4 *)(in_stack_00000020 + 0x1bc) = uVar7;
LAB_0358bb18:
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar11 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  }
  lVar12 = *(long *)(lVar11 + 0xb8);
  lVar10 = *(long *)(lVar12 + 0x88);
  if (lVar10 == 0) goto LAB_0358c010;
  if (*(int *)(lVar10 + 0x18) <= (int)uVar13) {
LAB_0358bfb0:
    if (*(int *)(in_stack_00000020 + 0x6a4) == -1) {
      return 0;
    }
    lVar10 = *plVar2;
    if (lVar10 != 0) {
      uVar14 = *(undefined8 *)(lVar10 + 0x20);
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar11 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      }
      uVar7 = FUN_03558224(uVar14,lVar10,*(long *)(lVar11 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8),0);
      *(undefined4 *)(in_stack_00000020 + 0x120) = uVar7;
      *(undefined4 *)(in_stack_00000020 + 0x644) = 1;
      return 1;
    }
    goto LAB_0358c010;
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar11 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    lVar12 = *(long *)(lVar11 + 0xb8);
    lVar10 = *(long *)(lVar12 + 0x88);
    if (lVar10 == 0) goto LAB_0358c010;
  }
  if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_0358bfac;
  lVar15 = (long)(int)uVar13;
  if (*(int *)(lVar10 + lVar15 * 0x18 + 0x20) == 0) goto LAB_0358bfb0;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar11 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    lVar12 = *(long *)(lVar11 + 0xb8);
    lVar10 = *(long *)(lVar12 + 0x88);
    if (lVar10 == 0) goto LAB_0358c010;
  }
  if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_0358bfac;
  iVar6 = *(int *)(lVar10 + lVar15 * 0x18 + 0x20);
  if (iVar6 < 0xa954) {
    if (iVar6 < 0x7754) {
      if (iVar6 == 0x6851) {
LAB_0358bd40:
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar12 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          lVar10 = *(long *)(lVar12 + 0x88);
          if (lVar10 == 0) goto LAB_0358c010;
        }
        if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_0358bfac;
        lVar10 = lVar10 + lVar15 * 0x18;
        iVar6 = FUN_035929dc(in_stack_00000020,*(undefined8 *)(lVar12 + 0x80),
                             *(undefined4 *)(lVar10 + 0x2c),*(undefined4 *)(lVar10 + 0x30),
                             lVar12 + 0x90);
        if (iVar6 != 3) {
          return 0;
        }
        lVar11 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar11 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x90);
        if (lVar11 == 0) goto LAB_0358c010;
        if (*(int *)(lVar11 + 0x18) == 0) goto LAB_0358bfac;
        iVar6 = -0x80000000;
        if (*(float *)(lVar11 + 0x20) != INFINITY) {
          iVar6 = (int)*(float *)(lVar11 + 0x20);
        }
        *(int *)(in_stack_00000020 + 0x6a4) = iVar6;
        if (*(char *)(in_stack_00000020 + 0x431) == '\0') goto LAB_0358bf98;
        lVar11 = FUN_0357fa1c(in_stack_00000020);
        uVar7 = *(undefined4 *)(in_stack_00000020 + 0x494);
        uVar14 = *(undefined8 *)(in_stack_00000020 + 0x698);
        uVar4 = *(undefined4 *)(in_stack_00000020 + 0x6a4);
        lVar10 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar10);
          lVar10 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x90);
        if (lVar10 == 0) goto LAB_0358c010;
        if ((*(uint *)(lVar10 + 0x18) < 2) || (*(uint *)(lVar10 + 0x18) == 2)) goto LAB_0358bfac;
        if (lVar11 == 0) goto LAB_0358c010;
        iVar6 = -0x80000000;
        if (*(float *)(lVar10 + 0x24) != INFINITY) {
          iVar6 = (int)*(float *)(lVar10 + 0x24);
        }
        iVar3 = -0x80000000;
        if (*(float *)(lVar10 + 0x28) != INFINITY) {
          iVar3 = (int)*(float *)(lVar10 + 0x28);
        }
        FUN_03599b64(lVar11,uVar7,uVar14,uVar4,iVar6,iVar3,0);
        goto LAB_0358bf98;
      }
      if (iVar6 != 0x7753) {
        return 0;
      }
    }
    else {
      if (iVar6 == 0x80fb) goto LAB_0358bce4;
      if (iVar6 == 0x9a51) goto LAB_0358bd40;
      if (iVar6 != 0xa953) {
        return 0;
      }
    }
    lVar12 = *plVar2;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar10 = *(long *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x88);
      if (lVar10 == 0) goto LAB_0358c010;
    }
    if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_0358bfac;
    lVar11 = FUN_0359ba84(lVar12,*(undefined4 *)(lVar10 + lVar15 * 0x18 + 0x24),1,&stack0x00000288,0
                         );
    *plVar2 = lVar11;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar2,lVar11);
    iVar6 = 0;
LAB_0358bf90:
    *(int *)(in_stack_00000020 + 0x6a4) = iVar6;
  }
  else {
    if (0x2ef43 < iVar6) {
      if (iVar6 < 0x4828a) {
        if (iVar6 != 0x3246a) {
          if (iVar6 != 0x44d63) {
            return 0;
          }
          goto LAB_0358beb8;
        }
      }
      else if (iVar6 != 0x4828a) {
        if ((iVar6 != 0x18b5dd) && (iVar6 != 0x2248dd)) {
          return 0;
        }
        goto LAB_0358bf98;
      }
      if (*(int *)(lVar11 + 0xe0) == 0) {
        lVar11 = thunk_FUN_01a58e78();
        lVar12 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        lVar10 = *(long *)(lVar12 + 0x88);
        if (lVar10 == 0) goto LAB_0358c010;
      }
      if (1 < *(uint *)(lVar10 + 0x18)) {
        uStack0000000000000070 = 0;
        fVar16 = (float)FUN_03592a88(lVar11,*(undefined8 *)(lVar12 + 0x80),
                                     *(undefined4 *)(lVar10 + 0x44),*(undefined4 *)(lVar10 + 0x48),
                                     &stack0x00000070);
        iVar6 = -0x80000000;
        if (fVar16 != INFINITY) {
          iVar6 = (int)fVar16;
        }
        if (iVar6 == -0x8000) {
          return 0;
        }
        if ((*plVar2 != 0) &&
           (lVar11 = UnityEngine_Material__DisableKeyword(*plVar2,0), lVar11 != 0)) {
          if (*(int *)(lVar11 + 0x18) + -1 < iVar6) {
            return 0;
          }
          goto LAB_0358bf90;
        }
        goto LAB_0358c010;
      }
      goto LAB_0358bfac;
    }
    if (iVar6 == 0xb2fb) {
LAB_0358bce4:
      if (*(int *)(lVar11 + 0xe0) == 0) {
        lVar11 = thunk_FUN_01a58e78();
        lVar12 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        lVar10 = *(long *)(lVar12 + 0x88);
        if (lVar10 == 0) goto LAB_0358c010;
      }
      if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_0358bfac;
      lVar10 = lVar10 + lVar15 * 0x18;
      uStack0000000000000070 = 0;
      fVar16 = (float)FUN_03592a88(lVar11,*(undefined8 *)(lVar12 + 0x80),
                                   *(undefined4 *)(lVar10 + 0x2c),*(undefined4 *)(lVar10 + 0x30),
                                   &stack0x00000070);
      *(bool *)(in_stack_00000020 + 0x1b9) = fVar16 != 0.0;
    }
    else {
      if (iVar6 != 0x2ef43) {
        return 0;
      }
LAB_0358beb8:
      if (*(int *)(lVar11 + 0xe0) == 0) {
        lVar11 = thunk_FUN_01a58e78();
        lVar12 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        lVar10 = *(long *)(lVar12 + 0x88);
        if (lVar10 == 0) goto LAB_0358c010;
      }
      if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_0358bfac;
      lVar10 = lVar10 + lVar15 * 0x18;
      uVar7 = FUN_03592790(lVar11,*(undefined8 *)(lVar12 + 0x80),*(undefined4 *)(lVar10 + 0x2c),
                           *(undefined4 *)(lVar10 + 0x30));
      *(undefined4 *)(in_stack_00000020 + 0x1bc) = uVar7;
    }
  }
LAB_0358bf98:
  uVar13 = uVar13 + 1;
  lVar11 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  goto LAB_0358bb18;
}


