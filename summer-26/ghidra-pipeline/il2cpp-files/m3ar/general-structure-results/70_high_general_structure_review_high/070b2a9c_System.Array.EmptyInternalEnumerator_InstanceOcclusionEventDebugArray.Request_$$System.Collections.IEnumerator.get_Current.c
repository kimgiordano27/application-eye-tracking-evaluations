/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<InstanceOcclusionEventDebugArray.Request>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 070b2a9c
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


undefined8
System_Array_EmptyInternalEnumerator<InstanceOcclusionEventDebugArray_Request>__System_Collections_IEnumerator_get_Current
          (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long in_x9;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *plVar11;
  long unaff_x23;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  uint *puVar15;
  undefined8 in_stack_00000018;
  
  piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar10 + -2) == param_3) {
      puVar5 = (undefined8 *)(param_1 + (long)(*piVar10 + 1) * 0x10 + 0x138);
      goto LAB_070b2aec;
    }
    in_x9 = in_x9 + -1;
    piVar10 = piVar10 + 4;
  } while (in_x9 != 0);
  puVar5 = (undefined8 *)FUN_0406ae20();
LAB_070b2aec:
  uVar4 = (*(code *)*puVar5)();
  lVar7 = *(long *)(unaff_x23 + 0x10);
  if (lVar7 != 0) {
    uVar12 = *(uint *)(lVar7 + 0x18);
    uVar4 = uVar4 & 0x7fffffff;
    iVar3 = 0;
    if (uVar12 != 0) {
      iVar3 = (int)uVar4 / (int)uVar12;
    }
    uVar2 = uVar4 - iVar3 * uVar12;
    if (uVar12 <= uVar2) {

      System_Array_EmptyInternalEnumerator<JointRotationActiveState_JointRotationFeatureState>__System_Collections_IEnumerator_get_Current
      :
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    uVar12 = *(int *)(lVar7 + (ulong)uVar2 * 4 + 0x20) - 1;
    if (-1 < (int)uVar12) {
      uVar13 = 0xffffffff;
      do {
        lVar7 = *(long *)(unaff_x23 + 0x18);
        if (lVar7 == 0) goto LAB_070b2d30;
        if (*(uint *)(lVar7 + 0x18) <= uVar12)
        goto 
        System_Array_EmptyInternalEnumerator<JointRotationActiveState_JointRotationFeatureState>__System_Collections_IEnumerator_get_Current
        ;
        lVar7 = lVar7 + 0x20;
        puVar15 = (uint *)(lVar7 + (ulong)uVar12 * 0x18);
        uVar14 = (ulong)uVar12;
        if (*puVar15 == uVar4) {
          plVar11 = *(long **)(unaff_x23 + 0x30);
          if (plVar11 == (long *)0x0) {
            plVar11 = (long *)FUN_04ec3220(*(undefined8 *)
                                            (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18));
            if (plVar11 == (long *)0x0) goto LAB_070b2d30;
            uVar9 = (**(code **)(*plVar11 + 0x1b8))
                              (plVar11,*(undefined4 *)(lVar7 + uVar14 * 0x18 + 8),
                               in_stack_00000018._4_4_,*(undefined8 *)(*plVar11 + 0x1c0));
          }
          else {
            lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar7 + uVar14 * 0x18 + 8);
            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_0406aaec(lVar6);
            }
            lVar8 = *plVar11;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == lVar6) {
                  puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_070b2c40;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_0406ae20(plVar11,lVar6,0);
LAB_070b2c40:
            uVar9 = (*(code *)*puVar5)(plVar11,uVar1,in_stack_00000018._4_4_,puVar5[1]);
          }
          if ((uVar9 & 1) != 0) {
            if ((int)(uint)uVar13 < 0) {
              lVar6 = *(long *)(unaff_x23 + 0x10);
              if (lVar6 == 0) goto LAB_070b2d30;
              if (*(uint *)(lVar6 + 0x18) <= uVar2)
              goto 
              System_Array_EmptyInternalEnumerator<JointRotationActiveState_JointRotationFeatureState>__System_Collections_IEnumerator_get_Current
              ;
              *(int *)(lVar6 + (ulong)uVar2 * 4 + 0x20) = *(int *)(lVar7 + uVar14 * 0x18 + 4) + 1;
            }
            else {
              lVar6 = *(long *)(unaff_x23 + 0x18);
              if (lVar6 == 0) goto LAB_070b2d30;
              if (*(uint *)(lVar6 + 0x18) <= (uint)uVar13)
              goto 
              System_Array_EmptyInternalEnumerator<JointRotationActiveState_JointRotationFeatureState>__System_Collections_IEnumerator_get_Current
              ;
              *(undefined4 *)(lVar6 + uVar13 * 0x18 + 0x24) =
                   *(undefined4 *)(lVar7 + uVar14 * 0x18 + 4);
            }
            uVar1 = *(undefined4 *)(unaff_x23 + 0x24);
            lVar7 = lVar7 + uVar14 * 0x18;
            *puVar15 = 0xffffffff;
            *(undefined4 *)(lVar7 + 4) = uVar1;
            *(undefined8 *)(lVar7 + 0x10) = 0;
            *(uint *)(unaff_x23 + 0x24) = uVar12;
            *(ulong *)(unaff_x23 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x23 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x23 + 0x28) + 1);
            return 1;
          }
        }
        uVar13 = (ulong)uVar12;
        uVar12 = *(uint *)(lVar7 + uVar14 * 0x18 + 4);
      } while (-1 < (int)uVar12);
    }
    return 0;
  }
LAB_070b2d30:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


