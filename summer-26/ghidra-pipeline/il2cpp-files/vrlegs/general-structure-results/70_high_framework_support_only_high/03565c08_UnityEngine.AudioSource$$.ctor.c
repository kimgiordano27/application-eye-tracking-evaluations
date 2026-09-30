/*
FUNCTION_NAME: UnityEngine.AudioSource$$.ctor
ENTRY_POINT: 03565c08
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


undefined4 UnityEngine_AudioSource___ctor(long param_1,undefined1 param_2 [16],ulong param_3)

{
  int iVar1;
  undefined1 in_CY;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  void *__dest;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long *unaff_x20;
  uint uVar10;
  ulong unaff_x21;
  long *unaff_x22;
  undefined8 uVar11;
  long *plVar12;
  long *unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  long unaff_x28;
  long unaff_x29;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_s10;
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
  
  while (!(bool)in_CY) {
    lVar8 = **(long **)(*unaff_x24 + 0xb8);
    if (lVar8 == 0) goto LAB_03566068;
    if (*(uint *)(lVar8 + 0x18) <= unaff_x26) break;
    lVar6 = *(long *)(param_1 + unaff_x26 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_03566068;
    *(undefined8 *)(lVar6 + 0xd8) = *(undefined8 *)(lVar8 + unaff_x28 + -0x2c);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar8 = *unaff_x22;
    if (lVar8 == 0) goto LAB_03566068;
    if (*(uint *)(lVar8 + 0x18) <= unaff_x26) break;
    lVar6 = **(long **)(*unaff_x24 + 0xb8);
    if (lVar6 == 0) goto LAB_03566068;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x26) break;
    lVar8 = *(long *)(lVar8 + unaff_x26 * 8 + 0x20);
    if (lVar8 == 0) goto LAB_03566068;
    *(undefined8 *)(lVar8 + 0xe0) = *(undefined8 *)(lVar6 + unaff_x28 + -0x24);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    do {
      lVar8 = *unaff_x24;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar8 = *unaff_x24;
      }
      lVar6 = **(long **)(lVar8 + 0xb8);
      if (lVar6 == 0) goto LAB_03566068;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_035660f8;
      if (*(char *)(lVar6 + unaff_x28 + -0x13) != '\0') {
        lVar9 = *unaff_x22;
        if (lVar9 == 0) goto LAB_03566068;
        if (*(uint *)(lVar9 + 0x18) <= unaff_x26) goto LAB_035660f8;
        lVar9 = *(long *)(lVar9 + unaff_x26 * 8 + 0x20);
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar6 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar6 == 0) goto LAB_03566068;
        }
        if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_035660f8;
        if (lVar9 == 0) goto LAB_03566068;
        FUN_0359e608(lVar9,*(undefined8 *)(lVar6 + unaff_x28 + -0x1c),0);
        lVar8 = *unaff_x22;
        if (lVar8 == 0) goto LAB_03566068;
        if (*(uint *)(lVar8 + 0x18) <= unaff_x26) goto LAB_035660f8;
        lVar6 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar6 == 0) goto LAB_03566068;
        if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_035660f8;
        lVar8 = *(long *)(lVar8 + unaff_x26 * 8 + 0x20);
        if (lVar8 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar8 + 0x100) = *(undefined8 *)(lVar6 + unaff_x28 + -0xc);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar8 + 0x100);
      }
      do {
        uVar7 = unaff_x26;
        lVar8 = *unaff_x24;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar8 = *unaff_x24;
        }
        lVar8 = **(long **)(lVar8 + 0xb8);
        if (lVar8 == 0) goto LAB_03566068;
        if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_035660f8;
        if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x60), lVar6 == 0))
        goto LAB_03566068;
        if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_035660f8;
        lVar9 = *(long *)(lVar6 + unaff_x25 + 0x30);
        iVar2 = *(int *)(lVar8 + unaff_x28);
        if (lVar9 == 0) {
          if (uVar7 == 0) {
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
            FUN_03595600(&stack0x000000e0,*(undefined8 *)(unaff_x19 + 0x3a0),iVar2 + 1,0);
            memcpy(&stack0x00000090,&stack0x000000e0,0x50);
            if (*(int *)(lVar6 + 0x18) == 0) goto LAB_035660f8;
            memcpy((void *)(lVar6 + unaff_x25 + 0x20),&stack0x00000090,0x50);
            __dest = (void *)(lVar6 + 0x20);
          }
          else {
            lVar8 = *unaff_x22;
            if (lVar8 == 0) goto LAB_03566068;
            if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_035660f8;
            lVar8 = *(long *)(lVar8 + uVar7 * 8 + 0x20);
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
            FUN_03595600(&stack0x000000e0,uVar11,iVar2 + 1,0);
            memcpy(&stack0x00000040,&stack0x000000e0,0x50);
            if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_035660f8;
            __dest = (void *)(lVar6 + unaff_x25 + 0x20);
            memcpy(__dest,&stack0x00000040,0x50);
          }
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(__dest,0);
        }
        else {
          iVar3 = *(int *)(lVar9 + 0x18);
          if (iVar3 < iVar2 * 4) {
LAB_03565e08:
            if (iVar2 < 0x401) {
              iVar2 = FUN_036c1d60(iVar2 + 1,0);
            }
            else {
              iVar2 = iVar2 + 0x100;
            }
            if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_03595b9c(lVar6 + unaff_x25 + 0x20,iVar2,0);
          }
          else if ((0 < iVar2) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
            iVar1 = iVar3 + 3;
            if (-1 < iVar3) {
              iVar1 = iVar3;
            }
            if (0x100 < (iVar1 >> 2) - iVar2) goto LAB_03565e08;
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
        if ((*(uint *)(lVar6 + 0x18) <= uVar7) || (*(uint *)(lVar8 + 0x18) <= uVar7))
        goto LAB_035660f8;
        *(undefined8 *)(lVar8 + unaff_x25 + 0x68) = *(undefined8 *)(lVar6 + unaff_x28 + -0x1c);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        fVar16 = (float)param_3;
        unaff_x26 = uVar7 + 1;
        unaff_x25 = unaff_x25 + 0x50;
        unaff_x28 = unaff_x28 + 0x38;
        unaff_x29 = unaff_x29 + 8;
        if (unaff_x27 == unaff_x26) {
          lVar8 = *unaff_x22;
          if (lVar8 == 0) goto LAB_03566068;
          lVar6 = (-(unaff_x21 >> 0x1f & 1) & 0xfffffff800000000 | (unaff_x21 & 0xffffffff) << 3) +
                  0x20;
          goto UnityEngine_Microphone__get_devices;
        }
      } while (unaff_x26 == 0);
      lVar8 = *unaff_x22;
      if (lVar8 == 0) goto LAB_03566068;
      if (*(uint *)(lVar8 + 0x18) <= unaff_x26) goto LAB_035660f8;
      uVar11 = *(undefined8 *)(lVar8 + unaff_x26 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar4 = FUN_036d35a8(uVar11,0,0);
      if ((uVar4 & 1) != 0) {
        lVar8 = *unaff_x24;
        plVar12 = (long *)*unaff_x22;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar8 = *unaff_x24;
        }
        lVar8 = **(long **)(lVar8 + 0xb8);
        if (lVar8 == 0) goto LAB_03566068;
        if (*(uint *)(lVar8 + 0x18) <= unaff_x26) goto LAB_035660f8;
        lVar8 = lVar8 + unaff_x28;
        in_stack_00000160 = *(undefined8 *)(lVar8 + -4);
        in_stack_00000158 = *(undefined8 *)(lVar8 + -0xc);
        in_stack_00000150 = *(undefined8 *)(lVar8 + -0x14);
        in_stack_00000148 = *(undefined8 *)(lVar8 + -0x1c);
        uVar11 = *(undefined8 *)(lVar8 + -0x24);
        in_stack_00000138 = *(undefined8 *)(lVar8 + -0x2c);
        in_stack_00000130 = *(undefined8 *)(lVar8 + -0x34);
        in_stack_00000140 = uVar11;
        lVar8 = FUN_0359e964();
        fVar16 = (float)uVar11;
        if (plVar12 == (long *)0x0) goto LAB_03566068;
        if ((lVar8 != 0) &&
           (lVar6 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)(*plVar12 + 0x40)), lVar6 == 0)) {
          uVar11 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar11,0);
        }
        if (*(uint *)(plVar12 + 3) <= unaff_x26) goto LAB_035660f8;
        plVar12[uVar7 + 5] = lVar8;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((long)plVar12 + unaff_x29,lVar8);
        unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if ((*unaff_x20 == 0) || (lVar8 = *(long *)(*unaff_x20 + 0x60), lVar8 == 0))
        goto LAB_03566068;
        if (*(uint *)(lVar8 + 0x18) <= unaff_x26) goto LAB_035660f8;
        puVar5 = (undefined8 *)(lVar8 + unaff_x25 + 0x30);
        *puVar5 = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar5,0);
      }
      if (*(long *)(unaff_x19 + 0x380) == 0) goto LAB_03566068;
      fVar13 = (float)FUN_036dba50(*(long *)(unaff_x19 + 0x380),0);
      lVar8 = *unaff_x22;
      if (lVar8 == 0) goto LAB_03566068;
      if (*(uint *)(lVar8 + 0x18) <= unaff_x26) goto LAB_035660f8;
      lVar8 = *(long *)(lVar8 + unaff_x26 * 8 + 0x20);
      if ((lVar8 == 0) || (fVar15 = fVar16, lVar8 = FUN_037b4844(lVar8,0), lVar8 == 0))
      goto LAB_03566068;
      fVar14 = (float)FUN_036dba50(lVar8,0);
      fVar16 = (fVar16 - fVar15) * (fVar16 - fVar15);
      param_3 = (ulong)(uint)fVar16;
      if (unaff_s10 <= (fVar13 - fVar14) * (fVar13 - fVar14) + fVar16) {
        lVar8 = *unaff_x22;
        if (lVar8 == 0) goto LAB_03566068;
        if (*(uint *)(lVar8 + 0x18) <= unaff_x26) goto LAB_035660f8;
        lVar8 = *(long *)(lVar8 + unaff_x26 * 8 + 0x20);
        if (lVar8 == 0) goto LAB_03566068;
        lVar8 = FUN_037b4844(lVar8,0);
        if ((*(long *)(unaff_x19 + 0x380) == 0) ||
           (FUN_036dba50(*(long *)(unaff_x19 + 0x380),0), lVar8 == 0)) goto LAB_03566068;
        FUN_036dbae0(lVar8,0);
      }
      lVar8 = *unaff_x22;
      if (lVar8 == 0) goto LAB_03566068;
      if (*(uint *)(lVar8 + 0x18) <= unaff_x26) goto LAB_035660f8;
      lVar8 = *(long *)(lVar8 + unaff_x26 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_03566068;
      uVar11 = *(undefined8 *)(lVar8 + 0xf0);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar7 = FUN_036d35a8(uVar11,0,0);
      if ((uVar7 & 1) != 0) break;
      lVar8 = *unaff_x22;
      if (lVar8 == 0) goto LAB_03566068;
      if (*(uint *)(lVar8 + 0x18) <= unaff_x26) goto LAB_035660f8;
      lVar8 = *(long *)(lVar8 + unaff_x26 * 8 + 0x20);
      if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0xf0), lVar8 == 0)) goto LAB_03566068;
      iVar2 = FUN_036d3364(lVar8,0);
      lVar8 = *unaff_x24;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar8);
        lVar8 = *unaff_x24;
      }
      lVar8 = **(long **)(lVar8 + 0xb8);
      if (lVar8 == 0) goto LAB_03566068;
      if (*(uint *)(lVar8 + 0x18) <= unaff_x26) goto LAB_035660f8;
      lVar8 = *(long *)(lVar8 + unaff_x28 + -0x1c);
      if (lVar8 == 0) goto LAB_03566068;
      iVar3 = FUN_036d3364(lVar8,0);
    } while (iVar2 == iVar3);
    lVar8 = *unaff_x22;
    if (lVar8 == 0) goto LAB_03566068;
    if (*(uint *)(lVar8 + 0x18) <= unaff_x26) break;
    lVar6 = *unaff_x24;
    lVar8 = *(long *)(lVar8 + unaff_x26 * 8 + 0x20);
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = *unaff_x24;
    }
    lVar6 = **(long **)(lVar6 + 0xb8);
    if (lVar6 == 0) goto LAB_03566068;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x26) break;
    if (lVar8 == 0) goto LAB_03566068;
    thunk_FUN_0359e5ac(lVar8,*(undefined8 *)(lVar6 + unaff_x28 + -0x1c),0);
    param_1 = *unaff_x22;
    if (param_1 == 0) goto LAB_03566068;
    in_CY = *(uint *)(param_1 + 0x18) <= unaff_x26;
  }
LAB_035660f8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
  while( true ) {
    lVar8 = *unaff_x22;
    unaff_x21 = (ulong)(uVar10 + 1);
    lVar6 = lVar6 + 8;
    if (lVar8 == 0) break;
UnityEngine_Microphone__get_devices:
    uVar10 = (uint)unaff_x21;
    if ((int)*(uint *)(lVar8 + 0x18) <= (int)uVar10) {
LAB_03565748:
      return *(undefined4 *)(unaff_x19 + 0x490);
    }
    if (*(uint *)(lVar8 + 0x18) <= uVar10) goto LAB_035660f8;
    uVar11 = *(undefined8 *)(lVar8 + lVar6);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar7 = FUN_036cee6c(uVar11,0,0);
    if ((uVar7 & 1) == 0) goto LAB_03565748;
    if ((*unaff_x20 == 0) || (lVar8 = *(long *)(*unaff_x20 + 0x60), lVar8 == 0)) break;
    if ((int)uVar10 < *(int *)(lVar8 + 0x18)) {
      lVar8 = *unaff_x22;
      if (lVar8 == 0) break;
      if (*(uint *)(lVar8 + 0x18) <= uVar10) goto LAB_035660f8;
      if ((*(long *)(lVar8 + lVar6) == 0) ||
         (lVar8 = FUN_037b514c(*(long *)(lVar8 + lVar6),0), lVar8 == 0)) break;
      FUN_0390f3a4(lVar8,0,0);
    }
  }
LAB_03566068:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


