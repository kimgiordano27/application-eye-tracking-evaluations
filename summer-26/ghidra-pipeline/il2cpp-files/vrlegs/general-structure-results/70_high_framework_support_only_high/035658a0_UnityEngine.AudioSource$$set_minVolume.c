/*
FUNCTION_NAME: UnityEngine.AudioSource$$set_minVolume
ENTRY_POINT: 035658a0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


undefined4 UnityEngine_AudioSource__set_minVolume(undefined1 param_1 [16],ulong param_2)

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
  long unaff_x19;
  long *unaff_x20;
  uint uVar10;
  ulong unaff_x21;
  long *unaff_x22;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
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
  
  thunk_FUN_01a58e78();
  FUN_01ff02b8();
  fVar2 = DAT_00d38798;
  if (0 < (int)unaff_x21) {
    lVar14 = 0;
    uVar15 = 0;
    lVar16 = 0x54;
    lVar17 = 0x20;
    plVar13 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    do {
      fVar21 = (float)param_2;
      if (uVar15 != 0) {
        lVar8 = *unaff_x22;
        if (lVar8 == 0) goto LAB_03566068;
        if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_035660f8;
        uVar11 = *(undefined8 *)(lVar8 + uVar15 * 8 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar5 = FUN_036d35a8(uVar11,0,0);
        if ((uVar5 & 1) != 0) {
          lVar8 = *plVar13;
          plVar12 = (long *)*unaff_x22;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar8 = *plVar13;
          }
          lVar8 = **(long **)(lVar8 + 0xb8);
          if (lVar8 == 0) goto LAB_03566068;
          if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_035660f8;
          lVar8 = lVar8 + lVar16;
          in_stack_00000160 = *(undefined8 *)(lVar8 + -4);
          in_stack_00000158 = *(undefined8 *)(lVar8 + -0xc);
          in_stack_00000150 = *(undefined8 *)(lVar8 + -0x14);
          in_stack_00000148 = *(undefined8 *)(lVar8 + -0x1c);
          uVar11 = *(undefined8 *)(lVar8 + -0x24);
          in_stack_00000138 = *(undefined8 *)(lVar8 + -0x2c);
          in_stack_00000130 = *(undefined8 *)(lVar8 + -0x34);
          in_stack_00000140 = uVar11;
          lVar8 = FUN_0359e964();
          fVar21 = (float)uVar11;
          if (plVar12 == (long *)0x0) goto LAB_03566068;
          if ((lVar8 != 0) &&
             (lVar6 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)(*plVar12 + 0x40)), lVar6 == 0)) {
            uVar11 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar11,0);
          }
          if (*(uint *)(plVar12 + 3) <= uVar15) goto LAB_035660f8;
          plVar12[uVar15 + 4] = lVar8;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((long)plVar12 + lVar17,lVar8);
          plVar13 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if ((*unaff_x20 == 0) || (lVar8 = *(long *)(*unaff_x20 + 0x60), lVar8 == 0))
          goto LAB_03566068;
          if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_035660f8;
          puVar7 = (undefined8 *)(lVar8 + lVar14 + 0x30);
          *puVar7 = 0;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar7,0);
        }
        if (*(long *)(unaff_x19 + 0x380) == 0) goto LAB_03566068;
        fVar18 = (float)FUN_036dba50(*(long *)(unaff_x19 + 0x380),0);
        lVar8 = *unaff_x22;
        if (lVar8 == 0) goto LAB_03566068;
        if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_035660f8;
        lVar8 = *(long *)(lVar8 + uVar15 * 8 + 0x20);
        if ((lVar8 == 0) || (fVar20 = fVar21, lVar8 = FUN_037b4844(lVar8,0), lVar8 == 0))
        goto LAB_03566068;
        fVar19 = (float)FUN_036dba50(lVar8,0);
        fVar21 = (fVar21 - fVar20) * (fVar21 - fVar20);
        param_2 = (ulong)(uint)fVar21;
        if (fVar2 <= (fVar18 - fVar19) * (fVar18 - fVar19) + fVar21) {
          lVar8 = *unaff_x22;
          if (lVar8 == 0) goto LAB_03566068;
          if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_035660f8;
          lVar8 = *(long *)(lVar8 + uVar15 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_03566068;
          lVar8 = FUN_037b4844(lVar8,0);
          if ((*(long *)(unaff_x19 + 0x380) == 0) ||
             (FUN_036dba50(*(long *)(unaff_x19 + 0x380),0), lVar8 == 0)) goto LAB_03566068;
          FUN_036dbae0(lVar8,0);
        }
        lVar8 = *unaff_x22;
        if (lVar8 == 0) goto LAB_03566068;
        if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_035660f8;
        lVar8 = *(long *)(lVar8 + uVar15 * 8 + 0x20);
        if (lVar8 == 0) goto LAB_03566068;
        uVar11 = *(undefined8 *)(lVar8 + 0xf0);
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar5 = FUN_036d35a8(uVar11,0,0);
        if ((uVar5 & 1) == 0) {
          lVar8 = *unaff_x22;
          if (lVar8 == 0) goto LAB_03566068;
          if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_035660f8;
          lVar8 = *(long *)(lVar8 + uVar15 * 8 + 0x20);
          if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0xf0), lVar8 == 0)) goto LAB_03566068;
          iVar3 = FUN_036d3364(lVar8,0);
          lVar8 = *plVar13;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar8);
            lVar8 = *plVar13;
          }
          lVar8 = **(long **)(lVar8 + 0xb8);
          if (lVar8 == 0) goto LAB_03566068;
          if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_035660f8;
          lVar8 = *(long *)(lVar8 + lVar16 + -0x1c);
          if (lVar8 == 0) goto LAB_03566068;
          iVar4 = FUN_036d3364(lVar8,0);
          if (iVar3 != iVar4) goto LAB_03565b98;
        }
        else {
LAB_03565b98:
          lVar8 = *unaff_x22;
          if (lVar8 == 0) goto LAB_03566068;
          if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_035660f8;
          lVar6 = *plVar13;
          lVar8 = *(long *)(lVar8 + uVar15 * 8 + 0x20);
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar6 = *plVar13;
          }
          lVar6 = **(long **)(lVar6 + 0xb8);
          if (lVar6 == 0) goto LAB_03566068;
          if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_035660f8;
          if (lVar8 == 0) goto LAB_03566068;
          thunk_FUN_0359e5ac(lVar8,*(undefined8 *)(lVar6 + lVar16 + -0x1c),0);
          lVar8 = *unaff_x22;
          if (lVar8 == 0) goto LAB_03566068;
          if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_035660f8;
          lVar6 = **(long **)(*plVar13 + 0xb8);
          if (lVar6 == 0) goto LAB_03566068;
          if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_035660f8;
          lVar8 = *(long *)(lVar8 + uVar15 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_03566068;
          *(undefined8 *)(lVar8 + 0xd8) = *(undefined8 *)(lVar6 + lVar16 + -0x2c);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          lVar8 = *unaff_x22;
          if (lVar8 == 0) goto LAB_03566068;
          if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_035660f8;
          lVar6 = **(long **)(*plVar13 + 0xb8);
          if (lVar6 == 0) goto LAB_03566068;
          if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_035660f8;
          lVar8 = *(long *)(lVar8 + uVar15 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_03566068;
          *(undefined8 *)(lVar8 + 0xe0) = *(undefined8 *)(lVar6 + lVar16 + -0x24);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        }
        lVar8 = *plVar13;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar8 = *plVar13;
        }
        lVar6 = **(long **)(lVar8 + 0xb8);
        if (lVar6 == 0) goto LAB_03566068;
        if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_035660f8;
        if (*(char *)(lVar6 + lVar16 + -0x13) != '\0') {
          lVar9 = *unaff_x22;
          if (lVar9 == 0) goto LAB_03566068;
          if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_035660f8;
          lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar6 = **(long **)(*plVar13 + 0xb8);
            if (lVar6 == 0) goto LAB_03566068;
          }
          if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_035660f8;
          if (lVar9 == 0) goto LAB_03566068;
          FUN_0359e608(lVar9,*(undefined8 *)(lVar6 + lVar16 + -0x1c),0);
          lVar8 = *unaff_x22;
          if (lVar8 == 0) goto LAB_03566068;
          if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_035660f8;
          lVar6 = **(long **)(*plVar13 + 0xb8);
          if (lVar6 == 0) goto LAB_03566068;
          if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_035660f8;
          lVar8 = *(long *)(lVar8 + uVar15 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_03566068;
          *(undefined8 *)(lVar8 + 0x100) = *(undefined8 *)(lVar6 + lVar16 + -0xc);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar8 + 0x100);
        }
      }
      lVar8 = *plVar13;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar8 = *plVar13;
      }
      lVar8 = **(long **)(lVar8 + 0xb8);
      if (lVar8 == 0) goto LAB_03566068;
      if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_035660f8;
      if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x60), lVar6 == 0))
      goto LAB_03566068;
      if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_035660f8;
      lVar9 = *(long *)(lVar6 + lVar14 + 0x30);
      iVar3 = *(int *)(lVar8 + lVar16);
      if (lVar9 == 0) {
        if (uVar15 == 0) {
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
          memcpy((void *)(lVar6 + lVar14 + 0x20),&stack0x00000090,0x50);
          __dest = (void *)(lVar6 + 0x20);
        }
        else {
          lVar8 = *unaff_x22;
          if (lVar8 == 0) goto LAB_03566068;
          if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_035660f8;
          lVar8 = *(long *)(lVar8 + uVar15 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_03566068;
          uVar11 = UnityEngine_Material__GetColorArray(lVar8,0);
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
          FUN_03595600(&stack0x000000e0,uVar11,iVar3 + 1,0);
          memcpy(&stack0x00000040,&stack0x000000e0,0x50);
          if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_035660f8;
          __dest = (void *)(lVar6 + lVar14 + 0x20);
          memcpy(__dest,&stack0x00000040,0x50);
        }
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(__dest,0);
      }
      else {
        iVar4 = *(int *)(lVar9 + 0x18);
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
          FUN_03595b9c(lVar6 + lVar14 + 0x20,iVar3,0);
        }
        else if ((0 < iVar3) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
          iVar1 = iVar4 + 3;
          if (-1 < iVar4) {
            iVar1 = iVar4;
          }
          if (0x100 < (iVar1 >> 2) - iVar3) goto LAB_03565e08;
        }
      }
      plVar13 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if ((*unaff_x20 == 0) || (lVar8 = *(long *)(*unaff_x20 + 0x60), lVar8 == 0))
      goto LAB_03566068;
      lVar6 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar6 = *plVar13;
      }
      lVar6 = **(long **)(lVar6 + 0xb8);
      if (lVar6 == 0) goto LAB_03566068;
      if ((*(uint *)(lVar6 + 0x18) <= uVar15) || (*(uint *)(lVar8 + 0x18) <= uVar15))
      goto LAB_035660f8;
      *(undefined8 *)(lVar8 + lVar14 + 0x68) = *(undefined8 *)(lVar6 + lVar16 + -0x1c);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      uVar15 = uVar15 + 1;
      lVar14 = lVar14 + 0x50;
      lVar16 = lVar16 + 0x38;
      lVar17 = lVar17 + 8;
    } while ((unaff_x21 & 0xffffffff) != uVar15);
  }
  lVar14 = *unaff_x22;
  if (lVar14 != 0) {
    lVar16 = (-(unaff_x21 >> 0x1f & 1) & 0xfffffff800000000 | (unaff_x21 & 0xffffffff) << 3) + 0x20;
    do {
      uVar10 = (uint)unaff_x21;
      if ((int)*(uint *)(lVar14 + 0x18) <= (int)uVar10) {
LAB_03565748:
        return *(undefined4 *)(unaff_x19 + 0x490);
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar10) {
LAB_035660f8:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar11 = *(undefined8 *)(lVar14 + lVar16);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar15 = FUN_036cee6c(uVar11,0,0);
      if ((uVar15 & 1) == 0) goto LAB_03565748;
      if ((*unaff_x20 == 0) || (lVar14 = *(long *)(*unaff_x20 + 0x60), lVar14 == 0)) break;
      if ((int)uVar10 < *(int *)(lVar14 + 0x18)) {
        lVar14 = *unaff_x22;
        if (lVar14 == 0) break;
        if (*(uint *)(lVar14 + 0x18) <= uVar10) goto LAB_035660f8;
        if ((*(long *)(lVar14 + lVar16) == 0) ||
           (lVar14 = FUN_037b514c(*(long *)(lVar14 + lVar16),0), lVar14 == 0)) break;
        FUN_0390f3a4(lVar14,0,0);
      }
      lVar14 = *unaff_x22;
      unaff_x21 = (ulong)(uVar10 + 1);
      lVar16 = lVar16 + 8;
    } while (lVar14 != 0);
  }
LAB_03566068:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


