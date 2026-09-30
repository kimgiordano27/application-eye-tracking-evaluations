/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Bone>$$get_Current
ENTRY_POINT: 058a66d8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>__get_Current
          (long param_1,undefined4 param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  uint uVar15;
  uint *puVar16;
  ulong uVar17;
  undefined8 in_stack_00000018;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar14 = *(long **)(param_1 + 0x30);
    if (plVar14 == (long *)0x0) {
      uVar6 = FUN_05e1e2bc((long)&stack0x00000018 + 4,
                           *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x188));
    }
    else {
      lVar8 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0322bef4(lVar8);
      }
      lVar9 = *plVar14;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar8) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_058a6778;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_0322c1e8(plVar14,lVar8,1);
LAB_058a6778:
      uVar6 = (*(code *)*puVar7)(plVar14,param_2,puVar7[1]);
    }
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 == 0) {
LAB_058a69b0:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    uVar15 = *(uint *)(lVar8 + 0x18);
    uVar6 = uVar6 & 0x7fffffff;
    iVar4 = 0;
    if (uVar15 != 0) {
      iVar4 = (int)uVar6 / (int)uVar15;
    }
    uVar3 = uVar6 - iVar4 * uVar15;
    if (uVar15 <= uVar3) {
LAB_058a69b4:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    uVar15 = *(int *)(lVar8 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar15) {
      uVar11 = 0xffffffff;
      do {
        uVar5 = in_stack_00000018._4_4_;
        lVar8 = *(long *)(param_1 + 0x18);
        if (lVar8 == 0) goto LAB_058a69b0;
        if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_058a69b4;
        puVar16 = (uint *)(lVar8 + (ulong)uVar15 * 0x24 + 0x20);
        uVar17 = (ulong)uVar15;
        if (*puVar16 == uVar6) {
          plVar14 = *(long **)(param_1 + 0x30);
          if (plVar14 == (long *)0x0) {
            plVar14 = (long *)FUN_03e98388(*(undefined8 *)
                                            (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18));
            if (plVar14 == (long *)0x0) goto LAB_058a69b0;
            uVar12 = (**(code **)(*plVar14 + 0x1b8))
                               (plVar14,*(undefined4 *)(lVar8 + uVar17 * 0x24 + 0x28),
                                in_stack_00000018._4_4_,*(undefined8 *)(*plVar14 + 0x1c0));
          }
          else {
            if (plVar14 == (long *)0x0) goto LAB_058a69b0;
            lVar9 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar8 + uVar17 * 0x24 + 0x28);
            if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_0322bef4(lVar9);
            }
            lVar10 = *plVar14;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar9) {
                  puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_058a68c0;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)FUN_0322c1e8(plVar14,lVar9,0);
LAB_058a68c0:
            uVar12 = (*(code *)*puVar7)(plVar14,uVar1,uVar5,puVar7[1]);
          }
          if ((uVar12 & 1) != 0) {
            if ((int)(uint)uVar11 < 0) {
              lVar9 = *(long *)(param_1 + 0x10);
              if (lVar9 == 0) goto LAB_058a69b0;
              if (*(uint *)(lVar9 + 0x18) <= uVar3) goto LAB_058a69b4;
              *(int *)(lVar9 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar8 + uVar17 * 0x24 + 0x24) + 1
              ;
            }
            else {
              lVar9 = *(long *)(param_1 + 0x18);
              if (lVar9 == 0) goto LAB_058a69b0;
              if (*(uint *)(lVar9 + 0x18) <= (uint)uVar11) goto LAB_058a69b4;
              *(undefined4 *)(lVar9 + uVar11 * 0x24 + 0x24) =
                   *(undefined4 *)(lVar8 + uVar17 * 0x24 + 0x24);
            }
            *puVar16 = 0xffffffff;
            *(undefined4 *)(lVar8 + uVar17 * 0x24 + 0x24) = *(undefined4 *)(param_1 + 0x24);
            *(uint *)(param_1 + 0x24) = uVar15;
            *(ulong *)(param_1 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(param_1 + 0x28) + 1);
            return 1;
          }
        }
        uVar2 = *(uint *)(lVar8 + uVar17 * 0x24 + 0x24);
        uVar11 = (ulong)uVar15;
        uVar15 = uVar2;
      } while (-1 < (int)uVar2);
    }
  }
  return 0;
}


