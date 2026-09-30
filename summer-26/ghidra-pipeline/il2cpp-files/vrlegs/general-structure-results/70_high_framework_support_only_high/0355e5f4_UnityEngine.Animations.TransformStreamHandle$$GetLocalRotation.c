/*
FUNCTION_NAME: UnityEngine.Animations.TransformStreamHandle$$GetLocalRotation
ENTRY_POINT: 0355e5f4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


undefined4 UnityEngine_Animations_TransformStreamHandle__GetLocalRotation(long param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  void *__dest;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long in_x9;
  long lVar11;
  long unaff_x19;
  long *unaff_x20;
  uint uVar12;
  ulong unaff_x21;
  long *unaff_x22;
  undefined8 uVar13;
  long *plVar14;
  long *unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  
  while (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(in_x9 + unaff_x28 + -0x24);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    do {
      lVar7 = *unaff_x24;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar7 = *unaff_x24;
      }
      lVar10 = **(long **)(lVar7 + 0xb8);
      if (lVar10 == 0) goto LAB_0355e9f0;
      if (*(uint *)(lVar10 + 0x18) <= unaff_x26) goto LAB_0355e9f4;
      if (*(char *)(lVar10 + unaff_x28 + -0x13) != '\0') {
        lVar11 = *unaff_x22;
        if (lVar11 == 0) goto LAB_0355e9f0;
        if (*(uint *)(lVar11 + 0x18) <= unaff_x26) goto LAB_0355e9f4;
        lVar11 = *(long *)(lVar11 + unaff_x26 * 8 + 0x20);
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar10 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar10 == 0) goto LAB_0355e9f0;
        }
        if (*(uint *)(lVar10 + 0x18) <= unaff_x26) goto LAB_0355e9f4;
        if (lVar11 == 0) goto LAB_0355e9f0;
        FUN_0359d25c(lVar11,*(undefined8 *)(lVar10 + unaff_x28 + -0x1c),0);
        lVar7 = *unaff_x22;
        if (lVar7 == 0) goto LAB_0355e9f0;
        if (*(uint *)(lVar7 + 0x18) <= unaff_x26) goto LAB_0355e9f4;
        lVar10 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar10 == 0) goto LAB_0355e9f0;
        if (*(uint *)(lVar10 + 0x18) <= unaff_x26) goto LAB_0355e9f4;
        lVar7 = *(long *)(lVar7 + unaff_x26 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_0355e9f0;
        *(undefined8 *)(lVar7 + 0x48) = *(undefined8 *)(lVar10 + unaff_x28 + -0xc);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      do {
        uVar8 = unaff_x26;
        lVar7 = *unaff_x24;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar7 = *unaff_x24;
        }
        lVar7 = **(long **)(lVar7 + 0xb8);
        if (lVar7 == 0) goto LAB_0355e9f0;
        if (*(uint *)(lVar7 + 0x18) <= uVar8) goto LAB_0355e9f4;
        if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x60), lVar10 == 0))
        goto LAB_0355e9f0;
        if (*(uint *)(lVar10 + 0x18) <= uVar8) goto LAB_0355e9f4;
        lVar11 = *(long *)(lVar10 + unaff_x25 + 0x30);
        iVar3 = *(int *)(lVar7 + unaff_x28);
        if (lVar11 == 0) {
          if (uVar8 == 0) {
            in_stack_00000118 = 0;
            in_stack_00000110 = 0;
            in_stack_00000128 = 0;
            in_stack_00000120 = 0;
            in_stack_000000f8 = 0;
            in_stack_000000f0 = 0;
            in_stack_00000108 = 0;
            in_stack_00000100 = 0;
            in_stack_000000e8 = 0;
            in_stack_000000e0 = 0;
            FUN_03595600(&stack0x000000e0,*(undefined8 *)(unaff_x19 + 0x3a0),iVar3 + 1,0);
            memcpy(&stack0x00000090,&stack0x000000e0,0x50);
            if (*(int *)(lVar10 + 0x18) == 0) goto LAB_0355e9f4;
            memcpy((void *)(lVar10 + unaff_x25 + 0x20),&stack0x00000090,0x50);
            __dest = (void *)(lVar10 + 0x20);
          }
          else {
            lVar7 = *unaff_x22;
            if (lVar7 == 0) goto LAB_0355e9f0;
            if (*(uint *)(lVar7 + 0x18) <= uVar8) goto LAB_0355e9f4;
            lVar7 = *(long *)(lVar7 + uVar8 * 8 + 0x20);
            if (lVar7 == 0) goto LAB_0355e9f0;
            uVar13 = FUN_0359d5ac(lVar7,0);
            in_stack_00000118 = 0;
            in_stack_00000110 = 0;
            in_stack_00000128 = 0;
            in_stack_00000120 = 0;
            in_stack_000000f8 = 0;
            in_stack_000000f0 = 0;
            in_stack_00000108 = 0;
            in_stack_00000100 = 0;
            in_stack_000000e8 = 0;
            in_stack_000000e0 = 0;
            FUN_03595600(&stack0x000000e0,uVar13,iVar3 + 1,0);
            memcpy(&stack0x00000040,&stack0x000000e0,0x50);
            if (*(uint *)(lVar10 + 0x18) <= uVar8) goto LAB_0355e9f4;
            __dest = (void *)(lVar10 + unaff_x25 + 0x20);
            memcpy(__dest,&stack0x00000040,0x50);
          }
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(__dest,0);
        }
        else {
          iVar4 = *(int *)(lVar11 + 0x18);
          if (iVar4 < iVar3 * 4) {
LAB_0355e77c:
            if (iVar3 < 0x401) {
              iVar3 = FUN_036c1d60(iVar3 + 1,0);
            }
            else {
              iVar3 = iVar3 + 0x100;
            }
            if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_03595b9c(lVar10 + unaff_x25 + 0x20,iVar3,0);
          }
          else if ((0 < iVar3) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
            iVar1 = iVar4 + 3;
            if (-1 < iVar4) {
              iVar1 = iVar4;
            }
            if (0x100 < (iVar1 >> 2) - iVar3) goto LAB_0355e77c;
          }
        }
        unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*unaff_x20 == 0) goto LAB_0355e9f0;
        lVar7 = *(long *)(*unaff_x20 + 0x60);
        if (lVar7 == 0) goto LAB_0355e9f0;
        lVar10 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar10 = *unaff_x24;
        }
        lVar10 = **(long **)(lVar10 + 0xb8);
        if (lVar10 == 0) goto LAB_0355e9f0;
        if ((*(uint *)(lVar10 + 0x18) <= uVar8) || (*(uint *)(lVar7 + 0x18) <= uVar8))
        goto LAB_0355e9f4;
        *(undefined8 *)(lVar7 + unaff_x25 + 0x68) = *(undefined8 *)(lVar10 + unaff_x28 + -0x1c);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        puVar2 = OVRPlugin_Media_TypeInfo;
        unaff_x26 = uVar8 + 1;
        unaff_x25 = unaff_x25 + 0x50;
        unaff_x28 = unaff_x28 + 0x38;
        unaff_x29 = unaff_x29 + 8;
        if (unaff_x27 == unaff_x26) {
          lVar7 = *unaff_x22;
          if (lVar7 == 0) goto LAB_0355e9f0;
          lVar10 = (-(unaff_x21 >> 0x1f & 1) & 0xfffffff800000000 | (unaff_x21 & 0xffffffff) << 3) +
                   0x20;
          lVar11 = (long)(int)unaff_x21 * 0x50 + 0x20;
          goto LAB_0355e950;
        }
      } while (unaff_x26 == 0);
      lVar7 = *unaff_x22;
      if (lVar7 == 0) goto LAB_0355e9f0;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x26) goto LAB_0355e9f4;
      uVar13 = *(undefined8 *)(lVar7 + unaff_x26 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar5 = FUN_036d35a8(uVar13,0,0);
      if ((uVar5 & 1) != 0) {
        lVar7 = *unaff_x24;
        plVar14 = (long *)*unaff_x22;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar7 = *unaff_x24;
        }
        lVar7 = **(long **)(lVar7 + 0xb8);
        if (lVar7 == 0) goto LAB_0355e9f0;
        if (*(uint *)(lVar7 + 0x18) <= unaff_x26) goto LAB_0355e9f4;
        lVar7 = lVar7 + unaff_x28;
        in_stack_00000160 = *(undefined8 *)(lVar7 + -4);
        in_stack_00000158 = *(undefined8 *)(lVar7 + -0xc);
        in_stack_00000150 = *(undefined8 *)(lVar7 + -0x14);
        in_stack_00000148 = *(undefined8 *)(lVar7 + -0x1c);
        in_stack_00000140 = *(undefined8 *)(lVar7 + -0x24);
        in_stack_00000138 = *(undefined8 *)(lVar7 + -0x2c);
        in_stack_00000130 = *(undefined8 *)(lVar7 + -0x34);
        lVar7 = FUN_0359d71c();
        if (plVar14 == (long *)0x0) goto LAB_0355e9f0;
        if ((lVar7 != 0) &&
           (lVar10 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar14 + 0x40)), lVar10 == 0)) {
          uVar13 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar13,0);
        }
        if (*(uint *)(plVar14 + 3) <= unaff_x26) goto LAB_0355e9f4;
        plVar14[uVar8 + 5] = lVar7;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((long)plVar14 + unaff_x29,lVar7);
        unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*unaff_x20 == 0) goto LAB_0355e9f0;
        lVar7 = *(long *)(*unaff_x20 + 0x60);
        if (lVar7 == 0) goto LAB_0355e9f0;
        if (*(uint *)(lVar7 + 0x18) <= unaff_x26) goto LAB_0355e9f4;
        puVar6 = (undefined8 *)(lVar7 + unaff_x25 + 0x30);
        *puVar6 = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar6,0);
      }
      lVar7 = *unaff_x22;
      if (lVar7 == 0) goto LAB_0355e9f0;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x26) goto LAB_0355e9f4;
      lVar7 = *(long *)(lVar7 + unaff_x26 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_0355e9f0;
      uVar13 = *(undefined8 *)(lVar7 + 0x38);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar8 = FUN_036d35a8(uVar13,0,0);
      if ((uVar8 & 1) != 0) break;
      lVar7 = *unaff_x22;
      if (lVar7 == 0) goto LAB_0355e9f0;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x26) goto LAB_0355e9f4;
      lVar7 = *(long *)(lVar7 + unaff_x26 * 8 + 0x20);
      if ((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x38), lVar7 == 0)) goto LAB_0355e9f0;
      iVar3 = FUN_036d3364(lVar7,0);
      lVar7 = *unaff_x24;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar7);
        lVar7 = *unaff_x24;
      }
      lVar7 = **(long **)(lVar7 + 0xb8);
      if (lVar7 == 0) goto LAB_0355e9f0;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x26) goto LAB_0355e9f4;
      lVar7 = *(long *)(lVar7 + unaff_x28 + -0x1c);
      if (lVar7 == 0) goto LAB_0355e9f0;
      iVar4 = FUN_036d3364(lVar7,0);
    } while (iVar3 == iVar4);
    lVar7 = *unaff_x22;
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x26) goto LAB_0355e9f4;
    lVar10 = *unaff_x24;
    lVar7 = *(long *)(lVar7 + unaff_x26 * 8 + 0x20);
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar10 = *unaff_x24;
    }
    lVar10 = **(long **)(lVar10 + 0xb8);
    if (lVar10 == 0) break;
    if (*(uint *)(lVar10 + 0x18) <= unaff_x26) goto LAB_0355e9f4;
    if (lVar7 == 0) break;
    thunk_FUN_0359d22c(lVar7,*(undefined8 *)(lVar10 + unaff_x28 + -0x1c),0);
    lVar7 = *unaff_x22;
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x26) goto LAB_0355e9f4;
    lVar10 = **(long **)(*unaff_x24 + 0xb8);
    if (lVar10 == 0) break;
    if (*(uint *)(lVar10 + 0x18) <= unaff_x26) goto LAB_0355e9f4;
    lVar7 = *(long *)(lVar7 + unaff_x26 * 8 + 0x20);
    if (lVar7 == 0) break;
    *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar10 + unaff_x28 + -0x2c);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar7 = *unaff_x22;
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x26) goto LAB_0355e9f4;
    in_x9 = **(long **)(*unaff_x24 + 0xb8);
    if (in_x9 == 0) break;
    if (*(uint *)(in_x9 + 0x18) <= unaff_x26) goto LAB_0355e9f4;
    param_1 = *(long *)(lVar7 + unaff_x26 * 8 + 0x20);
  }
  goto LAB_0355e9f0;
  while( true ) {
    uVar9 = *(uint *)(lVar7 + 0x18);
    if ((int)uVar12 < (int)uVar9) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        uVar9 = *(uint *)(lVar7 + 0x18);
      }
      if (uVar9 <= uVar12) goto LAB_0355e9f4;
      FUN_03596a5c(lVar7 + lVar11,0,1,0);
    }
    lVar7 = *unaff_x22;
    unaff_x21 = (ulong)(uVar12 + 1);
    lVar11 = lVar11 + 0x50;
    lVar10 = lVar10 + 8;
    if (lVar7 == 0) break;
LAB_0355e950:
    uVar12 = (uint)unaff_x21;
    if ((int)*(uint *)(lVar7 + 0x18) <= (int)uVar12) {
LAB_0355e188:
      return *(undefined4 *)(unaff_x19 + 0x490);
    }
    if (*(uint *)(lVar7 + 0x18) <= uVar12) {
LAB_0355e9f4:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    uVar13 = *(undefined8 *)(lVar7 + lVar10);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar8 = FUN_036cee6c(uVar13,0,0);
    if ((uVar8 & 1) == 0) goto LAB_0355e188;
    if ((*unaff_x20 == 0) || (lVar7 = *(long *)(*unaff_x20 + 0x60), lVar7 == 0)) break;
  }
LAB_0355e9f0:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


