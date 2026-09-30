/*
FUNCTION_NAME: UnityEngine.AudioSource$$GetSpectrumData
ENTRY_POINT: 035657d4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_8;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


undefined4 UnityEngine_AudioSource__GetSpectrumData(undefined1 param_1 [16],ulong param_2)

{
  long *plVar1;
  float fVar2;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  void *__dest;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long unaff_x19;
  long *unaff_x20;
  uint uVar13;
  ulong unaff_x21;
  long *plVar14;
  undefined8 uVar15;
  long *unaff_x24;
  ulong uVar16;
  long *unaff_x27;
  long lVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
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
  
  if (!in_ZR && in_NG == in_OV) {
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_01ff02b8();
  }
  if (*(long *)(unaff_x19 + 0x708) == 0) goto LAB_03566068;
  plVar1 = (long *)(unaff_x19 + 0x708);
  iVar4 = (int)unaff_x21;
  if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < iVar4) {
    uVar3 = FUN_036c1d60(iVar4 + 1,0);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*unaff_x27);
    }
    FUN_01ff025c(plVar1,uVar3,*(undefined8 *)OVRSystemPerfMetrics_PerfMetrics_TypeInfo);
  }
  if (*(char *)(unaff_x19 + 0x321) != '\0') {
    if (*unaff_x20 == 0) goto LAB_03566068;
    plVar14 = (long *)(*unaff_x20 + 0x38);
    lVar10 = *plVar14;
    if (lVar10 == 0) goto LAB_03566068;
    iVar5 = *(int *)(unaff_x19 + 0x490);
    if (0x100 < *(int *)(lVar10 + 0x18) - iVar5) {
      iVar12 = 0x100;
      if (0x100 < iVar5 + 1) {
        iVar12 = iVar5 + 1;
      }
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff02b8(plVar14,iVar12,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
      unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    }
  }
  fVar2 = DAT_00d38798;
  if (0 < iVar4) {
    lVar10 = 0;
    uVar16 = 0;
    lVar17 = 0x54;
    lVar18 = 0x20;
    do {
      fVar22 = (float)param_2;
      if (uVar16 != 0) {
        lVar9 = *plVar1;
        if (lVar9 == 0) goto LAB_03566068;
        if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_035660f8;
        uVar15 = *(undefined8 *)(lVar9 + uVar16 * 8 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar6 = FUN_036d35a8(uVar15,0,0);
        if ((uVar6 & 1) != 0) {
          lVar9 = *unaff_x24;
          plVar14 = (long *)*plVar1;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar9 = *unaff_x24;
          }
          lVar9 = **(long **)(lVar9 + 0xb8);
          if (lVar9 == 0) goto LAB_03566068;
          if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_035660f8;
          lVar9 = lVar9 + lVar17;
          in_stack_00000160 = *(undefined8 *)(lVar9 + -4);
          in_stack_00000158 = *(undefined8 *)(lVar9 + -0xc);
          in_stack_00000150 = *(undefined8 *)(lVar9 + -0x14);
          in_stack_00000148 = *(undefined8 *)(lVar9 + -0x1c);
          uVar15 = *(undefined8 *)(lVar9 + -0x24);
          in_stack_00000138 = *(undefined8 *)(lVar9 + -0x2c);
          in_stack_00000130 = *(undefined8 *)(lVar9 + -0x34);
          in_stack_00000140 = uVar15;
          lVar9 = FUN_0359e964();
          fVar22 = (float)uVar15;
          if (plVar14 == (long *)0x0) goto LAB_03566068;
          if ((lVar9 != 0) &&
             (lVar7 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar7 == 0)) {
            uVar15 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar15,0);
          }
          if (*(uint *)(plVar14 + 3) <= uVar16) goto LAB_035660f8;
          plVar14[uVar16 + 4] = lVar9;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((long)plVar14 + lVar18,lVar9);
          unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if ((*unaff_x20 == 0) || (lVar9 = *(long *)(*unaff_x20 + 0x60), lVar9 == 0))
          goto LAB_03566068;
          if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_035660f8;
          puVar8 = (undefined8 *)(lVar9 + lVar10 + 0x30);
          *puVar8 = 0;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar8,0);
        }
        if (*(long *)(unaff_x19 + 0x380) == 0) goto LAB_03566068;
        fVar19 = (float)FUN_036dba50(*(long *)(unaff_x19 + 0x380),0);
        lVar9 = *plVar1;
        if (lVar9 == 0) goto LAB_03566068;
        if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_035660f8;
        lVar9 = *(long *)(lVar9 + uVar16 * 8 + 0x20);
        if ((lVar9 == 0) || (fVar21 = fVar22, lVar9 = FUN_037b4844(lVar9,0), lVar9 == 0))
        goto LAB_03566068;
        fVar20 = (float)FUN_036dba50(lVar9,0);
        fVar22 = (fVar22 - fVar21) * (fVar22 - fVar21);
        param_2 = (ulong)(uint)fVar22;
        if (fVar2 <= (fVar19 - fVar20) * (fVar19 - fVar20) + fVar22) {
          lVar9 = *plVar1;
          if (lVar9 == 0) goto LAB_03566068;
          if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_035660f8;
          lVar9 = *(long *)(lVar9 + uVar16 * 8 + 0x20);
          if (lVar9 == 0) goto LAB_03566068;
          lVar9 = FUN_037b4844(lVar9,0);
          if ((*(long *)(unaff_x19 + 0x380) == 0) ||
             (FUN_036dba50(*(long *)(unaff_x19 + 0x380),0), lVar9 == 0)) goto LAB_03566068;
          FUN_036dbae0(lVar9,0);
        }
        lVar9 = *plVar1;
        if (lVar9 == 0) goto LAB_03566068;
        if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_035660f8;
        lVar9 = *(long *)(lVar9 + uVar16 * 8 + 0x20);
        if (lVar9 == 0) goto LAB_03566068;
        uVar15 = *(undefined8 *)(lVar9 + 0xf0);
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar6 = FUN_036d35a8(uVar15,0,0);
        if ((uVar6 & 1) == 0) {
          lVar9 = *plVar1;
          if (lVar9 == 0) goto LAB_03566068;
          if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_035660f8;
          lVar9 = *(long *)(lVar9 + uVar16 * 8 + 0x20);
          if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0xf0), lVar9 == 0)) goto LAB_03566068;
          iVar4 = FUN_036d3364(lVar9,0);
          lVar9 = *unaff_x24;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar9);
            lVar9 = *unaff_x24;
          }
          lVar9 = **(long **)(lVar9 + 0xb8);
          if (lVar9 == 0) goto LAB_03566068;
          if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_035660f8;
          lVar9 = *(long *)(lVar9 + lVar17 + -0x1c);
          if (lVar9 == 0) goto LAB_03566068;
          iVar5 = FUN_036d3364(lVar9,0);
          if (iVar4 != iVar5) goto LAB_03565b98;
        }
        else {
LAB_03565b98:
          lVar9 = *plVar1;
          if (lVar9 == 0) goto LAB_03566068;
          if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_035660f8;
          lVar7 = *unaff_x24;
          lVar9 = *(long *)(lVar9 + uVar16 * 8 + 0x20);
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar7 = *unaff_x24;
          }
          lVar7 = **(long **)(lVar7 + 0xb8);
          if (lVar7 == 0) goto LAB_03566068;
          if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_035660f8;
          if (lVar9 == 0) goto LAB_03566068;
          thunk_FUN_0359e5ac(lVar9,*(undefined8 *)(lVar7 + lVar17 + -0x1c),0);
          lVar9 = *plVar1;
          if (lVar9 == 0) goto LAB_03566068;
          if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_035660f8;
          lVar7 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar7 == 0) goto LAB_03566068;
          if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_035660f8;
          lVar9 = *(long *)(lVar9 + uVar16 * 8 + 0x20);
          if (lVar9 == 0) goto LAB_03566068;
          *(undefined8 *)(lVar9 + 0xd8) = *(undefined8 *)(lVar7 + lVar17 + -0x2c);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          lVar9 = *plVar1;
          if (lVar9 == 0) goto LAB_03566068;
          if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_035660f8;
          lVar7 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar7 == 0) goto LAB_03566068;
          if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_035660f8;
          lVar9 = *(long *)(lVar9 + uVar16 * 8 + 0x20);
          if (lVar9 == 0) goto LAB_03566068;
          *(undefined8 *)(lVar9 + 0xe0) = *(undefined8 *)(lVar7 + lVar17 + -0x24);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        }
        lVar9 = *unaff_x24;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar9 = *unaff_x24;
        }
        lVar7 = **(long **)(lVar9 + 0xb8);
        if (lVar7 == 0) goto LAB_03566068;
        if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_035660f8;
        if (*(char *)(lVar7 + lVar17 + -0x13) != '\0') {
          lVar11 = *plVar1;
          if (lVar11 == 0) goto LAB_03566068;
          if (*(uint *)(lVar11 + 0x18) <= uVar16) goto LAB_035660f8;
          lVar11 = *(long *)(lVar11 + uVar16 * 8 + 0x20);
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar7 = **(long **)(*unaff_x24 + 0xb8);
            if (lVar7 == 0) goto LAB_03566068;
          }
          if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_035660f8;
          if (lVar11 == 0) goto LAB_03566068;
          FUN_0359e608(lVar11,*(undefined8 *)(lVar7 + lVar17 + -0x1c),0);
          lVar9 = *plVar1;
          if (lVar9 == 0) goto LAB_03566068;
          if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_035660f8;
          lVar7 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar7 == 0) goto LAB_03566068;
          if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_035660f8;
          lVar9 = *(long *)(lVar9 + uVar16 * 8 + 0x20);
          if (lVar9 == 0) goto LAB_03566068;
          *(undefined8 *)(lVar9 + 0x100) = *(undefined8 *)(lVar7 + lVar17 + -0xc);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar9 + 0x100);
        }
      }
      lVar9 = *unaff_x24;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar9 = *unaff_x24;
      }
      lVar9 = **(long **)(lVar9 + 0xb8);
      if (lVar9 == 0) goto LAB_03566068;
      if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_035660f8;
      if ((*unaff_x20 == 0) || (lVar7 = *(long *)(*unaff_x20 + 0x60), lVar7 == 0))
      goto LAB_03566068;
      if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_035660f8;
      lVar11 = *(long *)(lVar7 + lVar10 + 0x30);
      iVar4 = *(int *)(lVar9 + lVar17);
      if (lVar11 == 0) {
        if (uVar16 == 0) {
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
          FUN_03595600(&stack0x000000e0,*(undefined8 *)(unaff_x19 + 0x3a0),iVar4 + 1,0);
          memcpy(&stack0x00000090,&stack0x000000e0,0x50);
          if (*(int *)(lVar7 + 0x18) == 0) goto LAB_035660f8;
          memcpy((void *)(lVar7 + lVar10 + 0x20),&stack0x00000090,0x50);
          __dest = (void *)(lVar7 + 0x20);
        }
        else {
          lVar9 = *plVar1;
          if (lVar9 == 0) goto LAB_03566068;
          if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_035660f8;
          lVar9 = *(long *)(lVar9 + uVar16 * 8 + 0x20);
          if (lVar9 == 0) goto LAB_03566068;
          uVar15 = UnityEngine_Material__GetColorArray(lVar9,0);
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
          FUN_03595600(&stack0x000000e0,uVar15,iVar4 + 1,0);
          memcpy(&stack0x00000040,&stack0x000000e0,0x50);
          if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_035660f8;
          __dest = (void *)(lVar7 + lVar10 + 0x20);
          memcpy(__dest,&stack0x00000040,0x50);
        }
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(__dest,0);
      }
      else {
        iVar5 = *(int *)(lVar11 + 0x18);
        if (iVar5 < iVar4 * 4) {
LAB_03565e08:
          if (iVar4 < 0x401) {
            iVar4 = FUN_036c1d60(iVar4 + 1,0);
          }
          else {
            iVar4 = iVar4 + 0x100;
          }
          if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_03595b9c(lVar7 + lVar10 + 0x20,iVar4,0);
        }
        else if ((0 < iVar4) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
          iVar12 = iVar5 + 3;
          if (-1 < iVar5) {
            iVar12 = iVar5;
          }
          if (0x100 < (iVar12 >> 2) - iVar4) goto LAB_03565e08;
        }
      }
      unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if ((*unaff_x20 == 0) || (lVar9 = *(long *)(*unaff_x20 + 0x60), lVar9 == 0))
      goto LAB_03566068;
      lVar7 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar7 = *unaff_x24;
      }
      lVar7 = **(long **)(lVar7 + 0xb8);
      if (lVar7 == 0) goto LAB_03566068;
      if ((*(uint *)(lVar7 + 0x18) <= uVar16) || (*(uint *)(lVar9 + 0x18) <= uVar16))
      goto LAB_035660f8;
      *(undefined8 *)(lVar9 + lVar10 + 0x68) = *(undefined8 *)(lVar7 + lVar17 + -0x1c);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      uVar16 = uVar16 + 1;
      lVar10 = lVar10 + 0x50;
      lVar17 = lVar17 + 0x38;
      lVar18 = lVar18 + 8;
    } while ((unaff_x21 & 0xffffffff) != uVar16);
  }
  lVar10 = *plVar1;
  if (lVar10 != 0) {
    lVar17 = (-(unaff_x21 >> 0x1f & 1) & 0xfffffff800000000 | (unaff_x21 & 0xffffffff) << 3) + 0x20;
    do {
      uVar13 = (uint)unaff_x21;
      if ((int)*(uint *)(lVar10 + 0x18) <= (int)uVar13) {
LAB_03565748:
        return *(undefined4 *)(unaff_x19 + 0x490);
      }
      if (*(uint *)(lVar10 + 0x18) <= uVar13) {
LAB_035660f8:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar15 = *(undefined8 *)(lVar10 + lVar17);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar16 = FUN_036cee6c(uVar15,0,0);
      if ((uVar16 & 1) == 0) goto LAB_03565748;
      if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x60), lVar10 == 0)) break;
      if ((int)uVar13 < *(int *)(lVar10 + 0x18)) {
        lVar10 = *plVar1;
        if (lVar10 == 0) break;
        if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_035660f8;
        if ((*(long *)(lVar10 + lVar17) == 0) ||
           (lVar10 = FUN_037b514c(*(long *)(lVar10 + lVar17),0), lVar10 == 0)) break;
        FUN_0390f3a4(lVar10,0,0);
      }
      lVar10 = *plVar1;
      unaff_x21 = (ulong)(uVar13 + 1);
      lVar17 = lVar17 + 8;
    } while (lVar10 != 0);
  }
LAB_03566068:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


