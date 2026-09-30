/*
FUNCTION_NAME: UnityEngine.AudioSource$$get_minVolume
ENTRY_POINT: 03565830
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


undefined4
UnityEngine_AudioSource__get_minVolume(long param_1,undefined1 param_2 [16],ulong param_3)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  void *__dest;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  long *unaff_x20;
  uint uVar11;
  ulong unaff_x21;
  long *unaff_x22;
  long *plVar12;
  undefined8 uVar13;
  long *unaff_x24;
  ulong uVar14;
  long *unaff_x27;
  long lVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
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
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01a58e78(param_1);
  }
  FUN_01ff025c();
  if (*(char *)(unaff_x19 + 0x321) != '\0') {
    if (*unaff_x20 == 0) goto LAB_03566068;
    plVar12 = (long *)(*unaff_x20 + 0x38);
    lVar9 = *plVar12;
    if (lVar9 == 0) goto LAB_03566068;
    iVar3 = *(int *)(unaff_x19 + 0x490);
    if (0x100 < *(int *)(lVar9 + 0x18) - iVar3) {
      iVar4 = 0x100;
      if (0x100 < iVar3 + 1) {
        iVar4 = iVar3 + 1;
      }
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff02b8(plVar12,iVar4,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
      unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    }
  }
  fVar2 = DAT_00d38798;
  if (0 < (int)unaff_x21) {
    lVar9 = 0;
    uVar14 = 0;
    lVar15 = 0x54;
    lVar16 = 0x20;
    do {
      fVar20 = (float)param_3;
      if (uVar14 != 0) {
        lVar8 = *unaff_x22;
        if (lVar8 == 0) goto LAB_03566068;
        if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_035660f8;
        uVar13 = *(undefined8 *)(lVar8 + uVar14 * 8 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar5 = FUN_036d35a8(uVar13,0,0);
        if ((uVar5 & 1) != 0) {
          lVar8 = *unaff_x24;
          plVar12 = (long *)*unaff_x22;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar8 = *unaff_x24;
          }
          lVar8 = **(long **)(lVar8 + 0xb8);
          if (lVar8 == 0) goto LAB_03566068;
          if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_035660f8;
          lVar8 = lVar8 + lVar15;
          in_stack_00000160 = *(undefined8 *)(lVar8 + -4);
          in_stack_00000158 = *(undefined8 *)(lVar8 + -0xc);
          in_stack_00000150 = *(undefined8 *)(lVar8 + -0x14);
          in_stack_00000148 = *(undefined8 *)(lVar8 + -0x1c);
          uVar13 = *(undefined8 *)(lVar8 + -0x24);
          in_stack_00000138 = *(undefined8 *)(lVar8 + -0x2c);
          in_stack_00000130 = *(undefined8 *)(lVar8 + -0x34);
          in_stack_00000140 = uVar13;
          lVar8 = FUN_0359e964();
          fVar20 = (float)uVar13;
          if (plVar12 == (long *)0x0) goto LAB_03566068;
          if ((lVar8 != 0) &&
             (lVar6 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)(*plVar12 + 0x40)), lVar6 == 0)) {
            uVar13 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar13,0);
          }
          if (*(uint *)(plVar12 + 3) <= uVar14) goto LAB_035660f8;
          plVar12[uVar14 + 4] = lVar8;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((long)plVar12 + lVar16,lVar8);
          unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if ((*unaff_x20 == 0) || (lVar8 = *(long *)(*unaff_x20 + 0x60), lVar8 == 0))
          goto LAB_03566068;
          if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_035660f8;
          puVar7 = (undefined8 *)(lVar8 + lVar9 + 0x30);
          *puVar7 = 0;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar7,0);
        }
        if (*(long *)(unaff_x19 + 0x380) == 0) goto LAB_03566068;
        fVar17 = (float)FUN_036dba50(*(long *)(unaff_x19 + 0x380),0);
        lVar8 = *unaff_x22;
        if (lVar8 == 0) goto LAB_03566068;
        if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_035660f8;
        lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
        if ((lVar8 == 0) || (fVar19 = fVar20, lVar8 = FUN_037b4844(lVar8,0), lVar8 == 0))
        goto LAB_03566068;
        fVar18 = (float)FUN_036dba50(lVar8,0);
        fVar20 = (fVar20 - fVar19) * (fVar20 - fVar19);
        param_3 = (ulong)(uint)fVar20;
        if (fVar2 <= (fVar17 - fVar18) * (fVar17 - fVar18) + fVar20) {
          lVar8 = *unaff_x22;
          if (lVar8 == 0) goto LAB_03566068;
          if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_035660f8;
          lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_03566068;
          lVar8 = FUN_037b4844(lVar8,0);
          if ((*(long *)(unaff_x19 + 0x380) == 0) ||
             (FUN_036dba50(*(long *)(unaff_x19 + 0x380),0), lVar8 == 0)) goto LAB_03566068;
          FUN_036dbae0(lVar8,0);
        }
        lVar8 = *unaff_x22;
        if (lVar8 == 0) goto LAB_03566068;
        if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_035660f8;
        lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
        if (lVar8 == 0) goto LAB_03566068;
        uVar13 = *(undefined8 *)(lVar8 + 0xf0);
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar5 = FUN_036d35a8(uVar13,0,0);
        if ((uVar5 & 1) == 0) {
          lVar8 = *unaff_x22;
          if (lVar8 == 0) goto LAB_03566068;
          if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_035660f8;
          lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
          if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0xf0), lVar8 == 0)) goto LAB_03566068;
          iVar3 = FUN_036d3364(lVar8,0);
          lVar8 = *unaff_x24;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar8);
            lVar8 = *unaff_x24;
          }
          lVar8 = **(long **)(lVar8 + 0xb8);
          if (lVar8 == 0) goto LAB_03566068;
          if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_035660f8;
          lVar8 = *(long *)(lVar8 + lVar15 + -0x1c);
          if (lVar8 == 0) goto LAB_03566068;
          iVar4 = FUN_036d3364(lVar8,0);
          if (iVar3 != iVar4) goto LAB_03565b98;
        }
        else {
LAB_03565b98:
          lVar8 = *unaff_x22;
          if (lVar8 == 0) goto LAB_03566068;
          if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_035660f8;
          lVar6 = *unaff_x24;
          lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar6 = *unaff_x24;
          }
          lVar6 = **(long **)(lVar6 + 0xb8);
          if (lVar6 == 0) goto LAB_03566068;
          if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_035660f8;
          if (lVar8 == 0) goto LAB_03566068;
          thunk_FUN_0359e5ac(lVar8,*(undefined8 *)(lVar6 + lVar15 + -0x1c),0);
          lVar8 = *unaff_x22;
          if (lVar8 == 0) goto LAB_03566068;
          if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_035660f8;
          lVar6 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar6 == 0) goto LAB_03566068;
          if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_035660f8;
          lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_03566068;
          *(undefined8 *)(lVar8 + 0xd8) = *(undefined8 *)(lVar6 + lVar15 + -0x2c);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          lVar8 = *unaff_x22;
          if (lVar8 == 0) goto LAB_03566068;
          if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_035660f8;
          lVar6 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar6 == 0) goto LAB_03566068;
          if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_035660f8;
          lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_03566068;
          *(undefined8 *)(lVar8 + 0xe0) = *(undefined8 *)(lVar6 + lVar15 + -0x24);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        }
        lVar8 = *unaff_x24;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar8 = *unaff_x24;
        }
        lVar6 = **(long **)(lVar8 + 0xb8);
        if (lVar6 == 0) goto LAB_03566068;
        if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_035660f8;
        if (*(char *)(lVar6 + lVar15 + -0x13) != '\0') {
          lVar10 = *unaff_x22;
          if (lVar10 == 0) goto LAB_03566068;
          if (*(uint *)(lVar10 + 0x18) <= uVar14) goto LAB_035660f8;
          lVar10 = *(long *)(lVar10 + uVar14 * 8 + 0x20);
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar6 = **(long **)(*unaff_x24 + 0xb8);
            if (lVar6 == 0) goto LAB_03566068;
          }
          if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_035660f8;
          if (lVar10 == 0) goto LAB_03566068;
          FUN_0359e608(lVar10,*(undefined8 *)(lVar6 + lVar15 + -0x1c),0);
          lVar8 = *unaff_x22;
          if (lVar8 == 0) goto LAB_03566068;
          if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_035660f8;
          lVar6 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar6 == 0) goto LAB_03566068;
          if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_035660f8;
          lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_03566068;
          *(undefined8 *)(lVar8 + 0x100) = *(undefined8 *)(lVar6 + lVar15 + -0xc);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar8 + 0x100);
        }
      }
      lVar8 = *unaff_x24;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar8 = *unaff_x24;
      }
      lVar8 = **(long **)(lVar8 + 0xb8);
      if (lVar8 == 0) goto LAB_03566068;
      if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_035660f8;
      if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x60), lVar6 == 0))
      goto LAB_03566068;
      if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_035660f8;
      lVar10 = *(long *)(lVar6 + lVar9 + 0x30);
      iVar3 = *(int *)(lVar8 + lVar15);
      if (lVar10 == 0) {
        if (uVar14 == 0) {
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
          if (*(int *)(lVar6 + 0x18) == 0) goto LAB_035660f8;
          memcpy((void *)(lVar6 + lVar9 + 0x20),&stack0x00000090,0x50);
          __dest = (void *)(lVar6 + 0x20);
        }
        else {
          lVar8 = *unaff_x22;
          if (lVar8 == 0) goto LAB_03566068;
          if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_035660f8;
          lVar8 = *(long *)(lVar8 + uVar14 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_03566068;
          uVar13 = UnityEngine_Material__GetColorArray(lVar8,0);
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
          if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_035660f8;
          __dest = (void *)(lVar6 + lVar9 + 0x20);
          memcpy(__dest,&stack0x00000040,0x50);
        }
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(__dest,0);
      }
      else {
        iVar4 = *(int *)(lVar10 + 0x18);
        if (iVar4 < iVar3 * 4) {
LAB_03565e08:
          if (iVar3 < 0x401) {
            iVar3 = FUN_036c1d60(iVar3 + 1,0);
          }
          else {
            iVar3 = iVar3 + 0x100;
          }
          if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_03595b9c(lVar6 + lVar9 + 0x20,iVar3,0);
        }
        else if ((0 < iVar3) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
          iVar1 = iVar4 + 3;
          if (-1 < iVar4) {
            iVar1 = iVar4;
          }
          if (0x100 < (iVar1 >> 2) - iVar3) goto LAB_03565e08;
        }
      }
      unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if ((*unaff_x20 == 0) || (lVar8 = *(long *)(*unaff_x20 + 0x60), lVar8 == 0))
      goto LAB_03566068;
      lVar6 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar6 = *unaff_x24;
      }
      lVar6 = **(long **)(lVar6 + 0xb8);
      if (lVar6 == 0) goto LAB_03566068;
      if ((*(uint *)(lVar6 + 0x18) <= uVar14) || (*(uint *)(lVar8 + 0x18) <= uVar14))
      goto LAB_035660f8;
      *(undefined8 *)(lVar8 + lVar9 + 0x68) = *(undefined8 *)(lVar6 + lVar15 + -0x1c);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      uVar14 = uVar14 + 1;
      lVar9 = lVar9 + 0x50;
      lVar15 = lVar15 + 0x38;
      lVar16 = lVar16 + 8;
    } while ((unaff_x21 & 0xffffffff) != uVar14);
  }
  lVar9 = *unaff_x22;
  if (lVar9 != 0) {
    lVar15 = (-(unaff_x21 >> 0x1f & 1) & 0xfffffff800000000 | (unaff_x21 & 0xffffffff) << 3) + 0x20;
    do {
      uVar11 = (uint)unaff_x21;
      if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar11) {
LAB_03565748:
        return *(undefined4 *)(unaff_x19 + 0x490);
      }
      if (*(uint *)(lVar9 + 0x18) <= uVar11) {
LAB_035660f8:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar13 = *(undefined8 *)(lVar9 + lVar15);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar14 = FUN_036cee6c(uVar13,0,0);
      if ((uVar14 & 1) == 0) goto LAB_03565748;
      if ((*unaff_x20 == 0) || (lVar9 = *(long *)(*unaff_x20 + 0x60), lVar9 == 0)) break;
      if ((int)uVar11 < *(int *)(lVar9 + 0x18)) {
        lVar9 = *unaff_x22;
        if (lVar9 == 0) break;
        if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_035660f8;
        if ((*(long *)(lVar9 + lVar15) == 0) ||
           (lVar9 = FUN_037b514c(*(long *)(lVar9 + lVar15),0), lVar9 == 0)) break;
        FUN_0390f3a4(lVar9,0,0);
      }
      lVar9 = *unaff_x22;
      unaff_x21 = (ulong)(uVar11 + 1);
      lVar15 = lVar15 + 8;
    } while (lVar9 != 0);
  }
LAB_03566068:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


