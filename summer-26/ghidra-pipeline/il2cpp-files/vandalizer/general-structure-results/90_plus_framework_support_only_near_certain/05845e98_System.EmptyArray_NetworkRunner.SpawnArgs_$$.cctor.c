/*
FUNCTION_NAME: System.EmptyArray<NetworkRunner.SpawnArgs>$$.cctor
ENTRY_POINT: 05845e98
PROGRAM: vandalizer-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_EmptyArray<NetworkRunner_SpawnArgs>___cctor(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x21;
  long *plVar12;
  undefined8 uVar13;
  uint uVar14;
  uint *puVar15;
  ulong uVar16;
  long lStack0000000000000008;
  
  lStack0000000000000008 = param_3;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_05e134d8(5);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar12 = *(long **)(param_1 + 0x30);
    if (plVar12 == (long *)0x0) {
      if (unaff_x21 == (long *)0x0) goto LAB_0584618c;
      uVar4 = (**(code **)(*unaff_x21 + 0x158))();
    }
    else {
      lVar6 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0322bef4(lVar6);
      }
      lVar7 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_05845f44;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_0322c1e8(plVar12,lVar6,1);
LAB_05845f44:
      uVar4 = (*(code *)*puVar5)(plVar12);
    }
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 == 0) {
LAB_0584618c:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    uVar14 = *(uint *)(lVar6 + 0x18);
    uVar4 = uVar4 & 0x7fffffff;
    iVar3 = 0;
    if (uVar14 != 0) {
      iVar3 = (int)uVar4 / (int)uVar14;
    }
    uVar2 = uVar4 - iVar3 * uVar14;
    if (uVar14 <= uVar2) {
LAB_05846190:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    uVar14 = *(int *)(lVar6 + (ulong)uVar2 * 4 + 0x20) - 1;
    if (-1 < (int)uVar14) {
      uVar9 = 0xffffffff;
      do {
        lVar6 = *(long *)(param_1 + 0x18);
        if (lVar6 == 0) goto LAB_0584618c;
        if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_05846190;
        puVar15 = (uint *)(lVar6 + (ulong)uVar14 * 0xe0 + 0x20);
        uVar16 = (ulong)uVar14;
        if (*puVar15 == uVar4) {
          plVar12 = *(long **)(param_1 + 0x30);
          if (plVar12 == (long *)0x0) {
            plVar12 = (long *)FUN_0386ce64(*(undefined8 *)
                                            (*(long *)(*(long *)(lStack0000000000000008 + 0x20) +
                                                      0xc0) + 0x18));
            if (plVar12 == (long *)0x0) goto LAB_0584618c;
            uVar10 = (**(code **)(*plVar12 + 0x1b8))
                               (plVar12,*(undefined8 *)(lVar6 + uVar16 * 0xe0 + 0x28));
          }
          else {
            if (plVar12 == (long *)0x0) goto LAB_0584618c;
            lVar7 = *(long *)(*(long *)(*(long *)(lStack0000000000000008 + 0x20) + 0xc0) + 8);
            uVar13 = *(undefined8 *)(lVar6 + uVar16 * 0xe0 + 0x28);
            if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_0322bef4(lVar7);
            }
            lVar8 = *plVar12;
            uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar7) {
                  puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                  goto System_EmptyArray<OVRPlugin_SpaceDiscoveryResult>___cctor;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar5 = (undefined8 *)FUN_0322c1e8(plVar12,lVar7,0);
System_EmptyArray<OVRPlugin_SpaceDiscoveryResult>___cctor:
            uVar10 = (*(code *)*puVar5)(plVar12,uVar13);
          }
          if ((uVar10 & 1) != 0) {
            if ((int)(uint)uVar9 < 0) {
              lVar7 = *(long *)(param_1 + 0x10);
              if (lVar7 == 0) goto LAB_0584618c;
              if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_05846190;
              *(int *)(lVar7 + (ulong)uVar2 * 4 + 0x20) = *(int *)(lVar6 + uVar16 * 0xe0 + 0x24) + 1
              ;
            }
            else {
              lVar7 = *(long *)(param_1 + 0x18);
              if (lVar7 == 0) goto LAB_0584618c;
              if (*(uint *)(lVar7 + 0x18) <= (uint)uVar9) goto LAB_05846190;
              *(undefined4 *)(lVar7 + uVar9 * 0xe0 + 0x24) =
                   *(undefined4 *)(lVar6 + uVar16 * 0xe0 + 0x24);
            }
            *puVar15 = 0xffffffff;
            lVar6 = lVar6 + uVar16 * 0xe0;
            *(undefined4 *)(lVar6 + 0x24) = *(undefined4 *)(param_1 + 0x24);
            memset((void *)(lVar6 + 0x28),0,0xd8);
            *(uint *)(param_1 + 0x24) = uVar14;
            *(ulong *)(param_1 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(param_1 + 0x28) + 1);
            return 1;
          }
        }
        uVar1 = *(uint *)(lVar6 + uVar16 * 0xe0 + 0x24);
        uVar9 = (ulong)uVar14;
        uVar14 = uVar1;
      } while (-1 < (int)uVar1);
    }
  }
  return 0;
}


