/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<InstanceOcclusionEventDebugArray.Request>$$get_Current
ENTRY_POINT: 070b2a54
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


undefined8
System_Array_EmptyInternalEnumerator<InstanceOcclusionEventDebugArray_Request>__get_Current
          (long param_1,long param_2,undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  uint uVar14;
  ulong uVar15;
  uint *puVar16;
  undefined8 in_stack_00000018;
  
  if (param_1 != 0) {
    plVar13 = *(long **)(param_2 + 0x30);
    lVar7 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
    if (plVar13 == (long *)0x0) {
      uVar5 = FUN_07501be0((long)&stack0x00000018 + 4,*(undefined8 *)(lVar7 + 400));
    }
    else {
      lVar7 = *(long *)(lVar7 + 8);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0406aaec(lVar7);
      }
      lVar8 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_070b2aec;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_0406ae20(plVar13,lVar7,1);
LAB_070b2aec:
      uVar5 = (*(code *)*puVar6)(plVar13,param_3,puVar6[1]);
    }
    lVar7 = *(long *)(param_2 + 0x10);
    if (lVar7 == 0) {
LAB_070b2d30:
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    uVar14 = *(uint *)(lVar7 + 0x18);
    uVar5 = uVar5 & 0x7fffffff;
    iVar4 = 0;
    if (uVar14 != 0) {
      iVar4 = (int)uVar5 / (int)uVar14;
    }
    uVar3 = uVar5 - iVar4 * uVar14;
    if (uVar14 <= uVar3) {

      System_Array_EmptyInternalEnumerator<JointRotationActiveState_JointRotationFeatureState>__System_Collections_IEnumerator_get_Current
      :
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    uVar14 = *(int *)(lVar7 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar14) {
      uVar10 = 0xffffffff;
      do {
        uVar2 = in_stack_00000018._4_4_;
        lVar7 = *(long *)(param_2 + 0x18);
        if (lVar7 == 0) goto LAB_070b2d30;
        if (*(uint *)(lVar7 + 0x18) <= uVar14)
        goto 
        System_Array_EmptyInternalEnumerator<JointRotationActiveState_JointRotationFeatureState>__System_Collections_IEnumerator_get_Current
        ;
        lVar7 = lVar7 + 0x20;
        puVar16 = (uint *)(lVar7 + (ulong)uVar14 * 0x18);
        uVar15 = (ulong)uVar14;
        if (*puVar16 == uVar5) {
          plVar13 = *(long **)(param_2 + 0x30);
          if (plVar13 == (long *)0x0) {
            plVar13 = (long *)FUN_04ec3220(*(undefined8 *)
                                            (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x18));
            if (plVar13 == (long *)0x0) goto LAB_070b2d30;
            uVar11 = (**(code **)(*plVar13 + 0x1b8))
                               (plVar13,*(undefined4 *)(lVar7 + uVar15 * 0x18 + 8),
                                in_stack_00000018._4_4_,*(undefined8 *)(*plVar13 + 0x1c0));
          }
          else {
            lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar7 + uVar15 * 0x18 + 8);
            if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_0406aaec(lVar8);
            }
            lVar9 = *plVar13;
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar8) {
                  puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_070b2c40;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)FUN_0406ae20(plVar13,lVar8,0);
LAB_070b2c40:
            uVar11 = (*(code *)*puVar6)(plVar13,uVar1,uVar2,puVar6[1]);
          }
          if ((uVar11 & 1) != 0) {
            if ((int)(uint)uVar10 < 0) {
              lVar8 = *(long *)(param_2 + 0x10);
              if (lVar8 == 0) goto LAB_070b2d30;
              if (*(uint *)(lVar8 + 0x18) <= uVar3)
              goto 
              System_Array_EmptyInternalEnumerator<JointRotationActiveState_JointRotationFeatureState>__System_Collections_IEnumerator_get_Current
              ;
              *(int *)(lVar8 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar7 + uVar15 * 0x18 + 4) + 1;
            }
            else {
              lVar8 = *(long *)(param_2 + 0x18);
              if (lVar8 == 0) goto LAB_070b2d30;
              if (*(uint *)(lVar8 + 0x18) <= (uint)uVar10)
              goto 
              System_Array_EmptyInternalEnumerator<JointRotationActiveState_JointRotationFeatureState>__System_Collections_IEnumerator_get_Current
              ;
              *(undefined4 *)(lVar8 + uVar10 * 0x18 + 0x24) =
                   *(undefined4 *)(lVar7 + uVar15 * 0x18 + 4);
            }
            uVar2 = *(undefined4 *)(param_2 + 0x24);
            lVar7 = lVar7 + uVar15 * 0x18;
            *puVar16 = 0xffffffff;
            *(undefined4 *)(lVar7 + 4) = uVar2;
            *(undefined8 *)(lVar7 + 0x10) = 0;
            *(uint *)(param_2 + 0x24) = uVar14;
            *(ulong *)(param_2 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(param_2 + 0x28) + 1);
            return 1;
          }
        }
        uVar10 = (ulong)uVar14;
        uVar14 = *(uint *)(lVar7 + uVar15 * 0x18 + 4);
      } while (-1 < (int)uVar14);
    }
  }
  return 0;
}


