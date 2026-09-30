/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Bone>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 058a6720
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>__System_Collections_IEnumerator_get_Current
          (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long in_x9;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x23;
  uint uVar13;
  uint *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 in_stack_00000018;
  
  piVar12 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar12 + -2) == param_3) {
      puVar6 = (undefined8 *)(param_1 + (long)(*piVar12 + 1) * 0x10 + 0x138);
      goto LAB_058a6778;
    }
    in_x9 = in_x9 + -1;
    piVar12 = piVar12 + 4;
  } while (in_x9 != 0);
  puVar6 = (undefined8 *)FUN_0322c1e8();
LAB_058a6778:
  uVar5 = (*(code *)*puVar6)();
  lVar8 = *(long *)(unaff_x19 + 0x10);
  if (lVar8 != 0) {
    uVar13 = *(uint *)(lVar8 + 0x18);
    uVar5 = uVar5 & 0x7fffffff;
    iVar4 = 0;
    if (uVar13 != 0) {
      iVar4 = (int)uVar5 / (int)uVar13;
    }
    uVar3 = uVar5 - iVar4 * uVar13;
    if (uVar13 <= uVar3) {
LAB_058a69b4:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    uVar13 = *(int *)(lVar8 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar13) {
      uVar16 = 0xffffffff;
      do {
        lVar8 = *(long *)(unaff_x19 + 0x18);
        if (lVar8 == 0) goto LAB_058a69b0;
        if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_058a69b4;
        puVar14 = (uint *)(lVar8 + (ulong)uVar13 * 0x24 + 0x20);
        uVar15 = (ulong)uVar13;
        if (*puVar14 == uVar5) {
          plVar9 = *(long **)(unaff_x19 + 0x30);
          if (plVar9 == (long *)0x0) {
            plVar9 = (long *)FUN_03e98388(*(undefined8 *)
                                           (*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x18));
            if (plVar9 == (long *)0x0) goto LAB_058a69b0;
            uVar11 = (**(code **)(*plVar9 + 0x1b8))
                               (plVar9,*(undefined4 *)(lVar8 + uVar15 * 0x24 + 0x28),
                                in_stack_00000018._4_4_,*(undefined8 *)(*plVar9 + 0x1c0));
          }
          else {
            if (plVar9 == (long *)0x0) goto LAB_058a69b0;
            lVar7 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar8 + uVar15 * 0x24 + 0x28);
            if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_0322bef4(lVar7);
            }
            lVar10 = *plVar9;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar7) {
                  puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_058a68c0;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)FUN_0322c1e8(plVar9,lVar7,0);
LAB_058a68c0:
            uVar11 = (*(code *)*puVar6)(plVar9,uVar1,in_stack_00000018._4_4_,puVar6[1]);
          }
          if ((uVar11 & 1) != 0) {
            if ((int)(uint)uVar16 < 0) {
              lVar7 = *(long *)(unaff_x19 + 0x10);
              if (lVar7 == 0) goto LAB_058a69b0;
              if (*(uint *)(lVar7 + 0x18) <= uVar3) goto LAB_058a69b4;
              *(int *)(lVar7 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar8 + uVar15 * 0x24 + 0x24) + 1
              ;
            }
            else {
              lVar7 = *(long *)(unaff_x19 + 0x18);
              if (lVar7 == 0) goto LAB_058a69b0;
              if (*(uint *)(lVar7 + 0x18) <= (uint)uVar16) goto LAB_058a69b4;
              *(undefined4 *)(lVar7 + uVar16 * 0x24 + 0x24) =
                   *(undefined4 *)(lVar8 + uVar15 * 0x24 + 0x24);
            }
            *puVar14 = 0xffffffff;
            *(undefined4 *)(lVar8 + uVar15 * 0x24 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
            *(uint *)(unaff_x19 + 0x24) = uVar13;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
        }
        uVar2 = *(uint *)(lVar8 + uVar15 * 0x24 + 0x24);
        uVar16 = (ulong)uVar13;
        uVar13 = uVar2;
      } while (-1 < (int)uVar2);
    }
    return 0;
  }
LAB_058a69b0:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


