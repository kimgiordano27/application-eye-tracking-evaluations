/*
FUNCTION_NAME: System.EmptyArray<OVRAnchor.FilterUnion>$$.cctor
ENTRY_POINT: 05845f40
PROGRAM: vandalizer-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_EmptyArray<OVRAnchor_FilterUnion>___cctor(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  undefined8 uVar12;
  uint uVar13;
  uint *puVar14;
  ulong uVar15;
  ulong uVar16;
  long in_stack_00000008;
  
  uVar4 = (**(code **)(param_1 + 0x138))();
  lVar7 = *(long *)(unaff_x19 + 0x10);
  if (lVar7 != 0) {
    uVar13 = *(uint *)(lVar7 + 0x18);
    uVar4 = uVar4 & 0x7fffffff;
    iVar3 = 0;
    if (uVar13 != 0) {
      iVar3 = (int)uVar4 / (int)uVar13;
    }
    uVar2 = uVar4 - iVar3 * uVar13;
    if (uVar13 <= uVar2) {
LAB_05846190:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    uVar13 = *(int *)(lVar7 + (ulong)uVar2 * 4 + 0x20) - 1;
    if (-1 < (int)uVar13) {
      uVar16 = 0xffffffff;
      do {
        lVar7 = *(long *)(unaff_x19 + 0x18);
        if (lVar7 == 0) goto LAB_0584618c;
        if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_05846190;
        puVar14 = (uint *)(lVar7 + (ulong)uVar13 * 0xe0 + 0x20);
        uVar15 = (ulong)uVar13;
        if (*puVar14 == uVar4) {
          plVar8 = *(long **)(unaff_x19 + 0x30);
          if (plVar8 == (long *)0x0) {
            plVar8 = (long *)FUN_0386ce64(*(undefined8 *)
                                           (*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) +
                                           0x18));
            if (plVar8 == (long *)0x0) goto LAB_0584618c;
            uVar10 = (**(code **)(*plVar8 + 0x1b8))
                               (plVar8,*(undefined8 *)(lVar7 + uVar15 * 0xe0 + 0x28));
          }
          else {
            if (plVar8 == (long *)0x0) goto LAB_0584618c;
            lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 8);
            uVar12 = *(undefined8 *)(lVar7 + uVar15 * 0xe0 + 0x28);
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_0322bef4(lVar6);
            }
            lVar9 = *plVar8;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar6) {
                  puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto System_EmptyArray<OVRPlugin_SpaceDiscoveryResult>___cctor;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar5 = (undefined8 *)FUN_0322c1e8(plVar8,lVar6,0);
System_EmptyArray<OVRPlugin_SpaceDiscoveryResult>___cctor:
            uVar10 = (*(code *)*puVar5)(plVar8,uVar12);
          }
          if ((uVar10 & 1) != 0) {
            if ((int)(uint)uVar16 < 0) {
              lVar6 = *(long *)(unaff_x19 + 0x10);
              if (lVar6 == 0) goto LAB_0584618c;
              if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_05846190;
              *(int *)(lVar6 + (ulong)uVar2 * 4 + 0x20) = *(int *)(lVar7 + uVar15 * 0xe0 + 0x24) + 1
              ;
            }
            else {
              lVar6 = *(long *)(unaff_x19 + 0x18);
              if (lVar6 == 0) goto LAB_0584618c;
              if (*(uint *)(lVar6 + 0x18) <= (uint)uVar16) goto LAB_05846190;
              *(undefined4 *)(lVar6 + uVar16 * 0xe0 + 0x24) =
                   *(undefined4 *)(lVar7 + uVar15 * 0xe0 + 0x24);
            }
            *puVar14 = 0xffffffff;
            lVar7 = lVar7 + uVar15 * 0xe0;
            *(undefined4 *)(lVar7 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
            memset((void *)(lVar7 + 0x28),0,0xd8);
            *(uint *)(unaff_x19 + 0x24) = uVar13;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
        }
        uVar1 = *(uint *)(lVar7 + uVar15 * 0xe0 + 0x24);
        uVar16 = (ulong)uVar13;
        uVar13 = uVar1;
      } while (-1 < (int)uVar1);
    }
    return 0;
  }
LAB_0584618c:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


