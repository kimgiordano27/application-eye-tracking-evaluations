/*
FUNCTION_NAME: UnityEngine.Microphone$$GetDeviceCaps
ENTRY_POINT: 03565d64
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


undefined4 UnityEngine_Microphone__GetDeviceCaps(long param_1,undefined1 param_2 [16],ulong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  void *__dest;
  ulong uVar7;
  long in_x9;
  long lVar8;
  long unaff_x19;
  long *unaff_x20;
  uint uVar9;
  ulong unaff_x21;
  long *unaff_x22;
  long lVar10;
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
  
  do {
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(in_x9 + -0xc);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x100);
    do {
      do {
        uVar7 = unaff_x26;
        lVar6 = *unaff_x24;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar6 = *unaff_x24;
        }
        lVar6 = **(long **)(lVar6 + 0xb8);
        if (lVar6 == 0) goto LAB_03566068;
        if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_035660f8;
        if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x60), lVar10 == 0))
        goto LAB_03566068;
        if (*(uint *)(lVar10 + 0x18) <= uVar7) goto LAB_035660f8;
        lVar8 = *(long *)(lVar10 + unaff_x25 + 0x30);
        iVar2 = *(int *)(lVar6 + unaff_x28);
        if (lVar8 == 0) {
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
            if (*(int *)(lVar10 + 0x18) == 0) goto LAB_035660f8;
            memcpy((void *)(lVar10 + unaff_x25 + 0x20),&stack0x00000090,0x50);
            __dest = (void *)(lVar10 + 0x20);
          }
          else {
            lVar6 = *unaff_x22;
            if (lVar6 == 0) goto LAB_03566068;
            if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_035660f8;
            lVar6 = *(long *)(lVar6 + uVar7 * 8 + 0x20);
            if (lVar6 == 0) goto LAB_03566068;
            uVar11 = UnityEngine_Material__GetColorArray(lVar6,0);
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
            if (*(uint *)(lVar10 + 0x18) <= uVar7) goto LAB_035660f8;
            __dest = (void *)(lVar10 + unaff_x25 + 0x20);
            memcpy(__dest,&stack0x00000040,0x50);
          }
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(__dest,0);
        }
        else {
          iVar3 = *(int *)(lVar8 + 0x18);
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
            FUN_03595b9c(lVar10 + unaff_x25 + 0x20,iVar2,0);
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
        if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x60), lVar6 == 0))
        goto LAB_03566068;
        lVar10 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar10 = *unaff_x24;
        }
        lVar10 = **(long **)(lVar10 + 0xb8);
        if (lVar10 == 0) goto LAB_03566068;
        if ((*(uint *)(lVar10 + 0x18) <= uVar7) || (*(uint *)(lVar6 + 0x18) <= uVar7))
        goto LAB_035660f8;
        *(undefined8 *)(lVar6 + unaff_x25 + 0x68) = *(undefined8 *)(lVar10 + unaff_x28 + -0x1c);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        fVar16 = (float)param_3;
        unaff_x26 = uVar7 + 1;
        unaff_x25 = unaff_x25 + 0x50;
        unaff_x28 = unaff_x28 + 0x38;
        unaff_x29 = unaff_x29 + 8;
        if (unaff_x27 == unaff_x26) {
          lVar6 = *unaff_x22;
          if (lVar6 == 0) goto LAB_03566068;
          lVar10 = (-(unaff_x21 >> 0x1f & 1) & 0xfffffff800000000 | (unaff_x21 & 0xffffffff) << 3) +
                   0x20;
          goto UnityEngine_Microphone__get_devices;
        }
      } while (unaff_x26 == 0);
      lVar6 = *unaff_x22;
      if (lVar6 == 0) goto LAB_03566068;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_035660f8;
      uVar11 = *(undefined8 *)(lVar6 + unaff_x26 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar4 = FUN_036d35a8(uVar11,0,0);
      if ((uVar4 & 1) != 0) {
        lVar6 = *unaff_x24;
        plVar12 = (long *)*unaff_x22;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar6 = *unaff_x24;
        }
        lVar6 = **(long **)(lVar6 + 0xb8);
        if (lVar6 == 0) goto LAB_03566068;
        if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_035660f8;
        lVar6 = lVar6 + unaff_x28;
        in_stack_00000160 = *(undefined8 *)(lVar6 + -4);
        in_stack_00000158 = *(undefined8 *)(lVar6 + -0xc);
        in_stack_00000150 = *(undefined8 *)(lVar6 + -0x14);
        in_stack_00000148 = *(undefined8 *)(lVar6 + -0x1c);
        uVar11 = *(undefined8 *)(lVar6 + -0x24);
        in_stack_00000138 = *(undefined8 *)(lVar6 + -0x2c);
        in_stack_00000130 = *(undefined8 *)(lVar6 + -0x34);
        in_stack_00000140 = uVar11;
        lVar6 = FUN_0359e964();
        fVar16 = (float)uVar11;
        if (plVar12 == (long *)0x0) goto LAB_03566068;
        if ((lVar6 != 0) &&
           (lVar10 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar12 + 0x40)), lVar10 == 0)) {
          uVar11 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar11,0);
        }
        if (*(uint *)(plVar12 + 3) <= unaff_x26) goto LAB_035660f8;
        plVar12[uVar7 + 5] = lVar6;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((long)plVar12 + unaff_x29,lVar6);
        unaff_x24 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x60), lVar6 == 0))
        goto LAB_03566068;
        if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_035660f8;
        puVar5 = (undefined8 *)(lVar6 + unaff_x25 + 0x30);
        *puVar5 = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar5,0);
      }
      if (*(long *)(unaff_x19 + 0x380) == 0) goto LAB_03566068;
      fVar13 = (float)FUN_036dba50(*(long *)(unaff_x19 + 0x380),0);
      lVar6 = *unaff_x22;
      if (lVar6 == 0) goto LAB_03566068;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_035660f8;
      lVar6 = *(long *)(lVar6 + unaff_x26 * 8 + 0x20);
      if ((lVar6 == 0) || (fVar15 = fVar16, lVar6 = FUN_037b4844(lVar6,0), lVar6 == 0))
      goto LAB_03566068;
      fVar14 = (float)FUN_036dba50(lVar6,0);
      fVar16 = (fVar16 - fVar15) * (fVar16 - fVar15);
      param_3 = (ulong)(uint)fVar16;
      if (unaff_s10 <= (fVar13 - fVar14) * (fVar13 - fVar14) + fVar16) {
        lVar6 = *unaff_x22;
        if (lVar6 == 0) goto LAB_03566068;
        if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_035660f8;
        lVar6 = *(long *)(lVar6 + unaff_x26 * 8 + 0x20);
        if (lVar6 == 0) goto LAB_03566068;
        lVar6 = FUN_037b4844(lVar6,0);
        if ((*(long *)(unaff_x19 + 0x380) == 0) ||
           (FUN_036dba50(*(long *)(unaff_x19 + 0x380),0), lVar6 == 0)) goto LAB_03566068;
        FUN_036dbae0(lVar6,0);
      }
      lVar6 = *unaff_x22;
      if (lVar6 == 0) goto LAB_03566068;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_035660f8;
      lVar6 = *(long *)(lVar6 + unaff_x26 * 8 + 0x20);
      if (lVar6 == 0) goto LAB_03566068;
      uVar11 = *(undefined8 *)(lVar6 + 0xf0);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar7 = FUN_036d35a8(uVar11,0,0);
      if ((uVar7 & 1) == 0) {
        lVar6 = *unaff_x22;
        if (lVar6 == 0) goto LAB_03566068;
        if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_035660f8;
        lVar6 = *(long *)(lVar6 + unaff_x26 * 8 + 0x20);
        if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0xf0), lVar6 == 0)) goto LAB_03566068;
        iVar2 = FUN_036d3364(lVar6,0);
        lVar6 = *unaff_x24;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar6);
          lVar6 = *unaff_x24;
        }
        lVar6 = **(long **)(lVar6 + 0xb8);
        if (lVar6 == 0) goto LAB_03566068;
        if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_035660f8;
        lVar6 = *(long *)(lVar6 + unaff_x28 + -0x1c);
        if (lVar6 == 0) goto LAB_03566068;
        iVar3 = FUN_036d3364(lVar6,0);
        if (iVar2 != iVar3) goto LAB_03565b98;
      }
      else {
LAB_03565b98:
        lVar6 = *unaff_x22;
        if (lVar6 == 0) goto LAB_03566068;
        if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_035660f8;
        lVar10 = *unaff_x24;
        lVar6 = *(long *)(lVar6 + unaff_x26 * 8 + 0x20);
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar10 = *unaff_x24;
        }
        lVar10 = **(long **)(lVar10 + 0xb8);
        if (lVar10 == 0) goto LAB_03566068;
        if (*(uint *)(lVar10 + 0x18) <= unaff_x26) goto LAB_035660f8;
        if (lVar6 == 0) goto LAB_03566068;
        thunk_FUN_0359e5ac(lVar6,*(undefined8 *)(lVar10 + unaff_x28 + -0x1c),0);
        lVar6 = *unaff_x22;
        if (lVar6 == 0) goto LAB_03566068;
        if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_035660f8;
        lVar10 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar10 == 0) goto LAB_03566068;
        if (*(uint *)(lVar10 + 0x18) <= unaff_x26) goto LAB_035660f8;
        lVar6 = *(long *)(lVar6 + unaff_x26 * 8 + 0x20);
        if (lVar6 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar6 + 0xd8) = *(undefined8 *)(lVar10 + unaff_x28 + -0x2c);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar6 = *unaff_x22;
        if (lVar6 == 0) goto LAB_03566068;
        if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_035660f8;
        lVar10 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar10 == 0) goto LAB_03566068;
        if (*(uint *)(lVar10 + 0x18) <= unaff_x26) goto LAB_035660f8;
        lVar6 = *(long *)(lVar6 + unaff_x26 * 8 + 0x20);
        if (lVar6 == 0) goto LAB_03566068;
        *(undefined8 *)(lVar6 + 0xe0) = *(undefined8 *)(lVar10 + unaff_x28 + -0x24);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      lVar6 = *unaff_x24;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar6 = *unaff_x24;
      }
      lVar10 = **(long **)(lVar6 + 0xb8);
      if (lVar10 == 0) goto LAB_03566068;
      if (*(uint *)(lVar10 + 0x18) <= unaff_x26) goto LAB_035660f8;
    } while (*(char *)(lVar10 + unaff_x28 + -0x13) == '\0');
    lVar8 = *unaff_x22;
    if (lVar8 == 0) goto LAB_03566068;
    if (*(uint *)(lVar8 + 0x18) <= unaff_x26) goto LAB_035660f8;
    lVar8 = *(long *)(lVar8 + unaff_x26 * 8 + 0x20);
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar10 = **(long **)(*unaff_x24 + 0xb8);
      if (lVar10 == 0) goto LAB_03566068;
    }
    if (*(uint *)(lVar10 + 0x18) <= unaff_x26) goto LAB_035660f8;
    if (lVar8 == 0) goto LAB_03566068;
    FUN_0359e608(lVar8,*(undefined8 *)(lVar10 + unaff_x28 + -0x1c),0);
    lVar6 = *unaff_x22;
    if (lVar6 == 0) goto LAB_03566068;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_035660f8;
    lVar10 = **(long **)(*unaff_x24 + 0xb8);
    if (lVar10 == 0) goto LAB_03566068;
    if (*(uint *)(lVar10 + 0x18) <= unaff_x26) goto LAB_035660f8;
    param_1 = *(long *)(lVar6 + unaff_x26 * 8 + 0x20);
    if (param_1 == 0) goto LAB_03566068;
    in_x9 = lVar10 + unaff_x28;
  } while( true );
  while( true ) {
    lVar6 = *unaff_x22;
    unaff_x21 = (ulong)(uVar9 + 1);
    lVar10 = lVar10 + 8;
    if (lVar6 == 0) break;
UnityEngine_Microphone__get_devices:
    uVar9 = (uint)unaff_x21;
    if ((int)*(uint *)(lVar6 + 0x18) <= (int)uVar9) {
LAB_03565748:
      return *(undefined4 *)(unaff_x19 + 0x490);
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar9) {
LAB_035660f8:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    uVar11 = *(undefined8 *)(lVar6 + lVar10);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar7 = FUN_036cee6c(uVar11,0,0);
    if ((uVar7 & 1) == 0) goto LAB_03565748;
    if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x60), lVar6 == 0)) break;
    if ((int)uVar9 < *(int *)(lVar6 + 0x18)) {
      lVar6 = *unaff_x22;
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_035660f8;
      if ((*(long *)(lVar6 + lVar10) == 0) ||
         (lVar6 = FUN_037b514c(*(long *)(lVar6 + lVar10),0), lVar6 == 0)) break;
      FUN_0390f3a4(lVar6,0,0);
    }
  }
LAB_03566068:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


