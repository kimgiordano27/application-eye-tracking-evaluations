/*
FUNCTION_NAME: FUN_054e49b8
ENTRY_POINT: 054e49b8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior
*/


void FUN_054e49b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  long *plVar20;
  
  if ((DAT_066d120a & 1) == 0) {
    FUN_02b3c81c(UnityEngine_AI_NavMesh_OnNavMeshPreUpdate_TypeInfo);
    FUN_02b3c81c(Method_UnityEngine_UIElements_BaseField<Rect>_get_labelElement__);
    FUN_02b3c81c(EmeraldAI_AbilityData_KnockbackData_<KnockbackSequence>d__6_TypeInfo);
    FUN_02b3c81c(Method_UnityEngine_UIElements_BaseField<Vector2>_set_value__);
    DAT_066d120a = 1;
  }
  puVar5 = Method_UnityEngine_UIElements_BaseField<Rect>_get_labelElement__;
  lVar14 = *(long *)(param_1 + 0x48);
  if ((lVar14 != 0) && (lVar9 = *(long *)(param_1 + 0x40), lVar9 != 0)) {
    iVar16 = *(int *)(param_1 + 0x1c);
    uVar1 = *(undefined8 *)(lVar14 + 0x30);
    uVar2 = *(undefined8 *)(lVar14 + 0x38);
    lVar14 = *(long *)(lVar14 + 0x20);
    puVar13 = (undefined8 *)Method_UnityEngine_UIElements_BaseField<Vector2>_set_value__;
    do {
      if (*(int *)(lVar9 + 0x1c) <= iVar16) {
        return;
      }
      plVar10 = (long *)FUN_055717e0(lVar9,iVar16,0);
      if (plVar10 == (long *)0x0) break;
      if (*plVar10 != *(long *)EmeraldAI_AbilityData_KnockbackData_<KnockbackSequence>d__6_TypeInfo)
      {
LAB_054e4d64:
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44(plVar10);
      }
      if (plVar10[8] != 0) {
        if ((*(long *)(param_1 + 0x40) == 0) ||
           (plVar10 = (long *)FUN_055717e0(*(long *)(param_1 + 0x40),iVar16,0),
           plVar10 == (long *)0x0)) break;
        if (*plVar10 !=
            *(long *)EmeraldAI_AbilityData_KnockbackData_<KnockbackSequence>d__6_TypeInfo)
        goto LAB_054e4d64;
        lVar9 = plVar10[8];
        if (lVar9 == 0) break;
        uVar3 = *(uint *)(lVar9 + 0x18);
        if (0 < (int)uVar3) {
          uVar19 = 0;
          do {
            if (uVar3 <= uVar19) {
LAB_054e4d5c:
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            plVar20 = (long *)(lVar9 + (long)(int)uVar19 * 8 + 0x20);
            if ((*plVar20 == 0) || (lVar11 = *(long *)(*plVar20 + 0x18), lVar11 == 0))
            goto LAB_054e4d38;
            uVar12 = FUN_055bbd60(lVar11,uVar1,uVar2,0);
            if ((uVar12 & 1) != 0) {
              if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_054e4d5c;
              if ((*plVar20 == 0) || (plVar10 = *(long **)(param_1 + 200), plVar10 == (long *)0x0))
              goto LAB_054e4d38;
              lVar11 = *plVar10;
              lVar18 = *(long *)(*plVar20 + 0x18);
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 != 0) {
                piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) ==
                      *(long *)UnityEngine_AI_NavMesh_OnNavMeshPreUpdate_TypeInfo) {
                    puVar13 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                    goto LAB_054e4b78;
                  }
                  uVar12 = uVar12 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar12 != 0);
              }
              puVar13 = (undefined8 *)
                        FUN_02b7654c(plVar10,*(long *)
                                              UnityEngine_AI_NavMesh_OnNavMeshPreUpdate_TypeInfo,1);
LAB_054e4b78:
              uVar6 = (*(code *)*puVar13)(plVar10,puVar13[1]);
              plVar10 = *(long **)(param_1 + 200);
              if (plVar10 == (long *)0x0) goto LAB_054e4d38;
              lVar11 = *plVar10;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 != 0) {
                piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) ==
                      *(long *)UnityEngine_AI_NavMesh_OnNavMeshPreUpdate_TypeInfo) {
                    puVar13 = (undefined8 *)(lVar11 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                    goto LAB_054e4be8;
                  }
                  uVar12 = uVar12 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar12 != 0);
              }
              puVar13 = (undefined8 *)
                        FUN_02b7654c(plVar10,*(long *)
                                              UnityEngine_AI_NavMesh_OnNavMeshPreUpdate_TypeInfo,2);
LAB_054e4be8:
              uVar7 = (*(code *)*puVar13)(plVar10,puVar13[1]);
              if (lVar18 == 0) goto LAB_054e4d38;
              FUN_055c0834(lVar18,uVar6,uVar7,0);
              puVar13 = (undefined8 *)Method_UnityEngine_UIElements_BaseField<Vector2>_set_value__;
            }
            if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_054e4d5c;
            iVar17 = 0;
            while( true ) {
              if ((*plVar20 == 0) || (plVar10 = *(long **)(*plVar20 + 0x20), plVar10 == (long *)0x0)
                 ) goto LAB_054e4d38;
              iVar8 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
              if (iVar8 <= iVar17) break;
              if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_054e4d5c;
              if (((*plVar20 == 0) ||
                  (plVar10 = *(long **)(*plVar20 + 0x20), plVar10 == (long *)0x0)) ||
                 (plVar10 = (long *)(**(code **)(*plVar10 + 0x2e8))
                                              (plVar10,iVar17,*(undefined8 *)(*plVar10 + 0x2f0)),
                 plVar10 == (long *)0x0)) goto LAB_054e4d38;
              bVar4 = *(byte *)(*(long *)puVar5 + 0x130);
              if ((*(byte *)(*plVar10 + 0x130) < bVar4) ||
                 (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)puVar5))
              goto LAB_054e4d64;
              uVar12 = FUN_055bbd60(plVar10,uVar1,uVar2,0);
              if (((uVar12 & 1) != 0) && (lVar14 != 0)) {
                if (*(long *)(lVar14 + 0x30) != 0) {
                  if (*(long *)(lVar14 + 0x80) == 0) goto LAB_054e4d38;
                  if (*(int *)(*(long *)(lVar14 + 0x80) + 0x10) != 3) {
                    *(undefined1 *)((long)plVar10 + 0x2c) = 1;
                    goto LAB_054e4d04;
                  }
                }
                FUN_054defd8(param_1,*puVar13,uVar1);
              }
LAB_054e4d04:
              iVar17 = iVar17 + 1;
              if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_054e4d5c;
            }
            uVar3 = *(uint *)(lVar9 + 0x18);
            uVar19 = uVar19 + 1;
          } while ((int)uVar19 < (int)uVar3);
        }
      }
      lVar9 = *(long *)(param_1 + 0x40);
      iVar16 = iVar16 + 1;
    } while (lVar9 != 0);
  }
LAB_054e4d38:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


