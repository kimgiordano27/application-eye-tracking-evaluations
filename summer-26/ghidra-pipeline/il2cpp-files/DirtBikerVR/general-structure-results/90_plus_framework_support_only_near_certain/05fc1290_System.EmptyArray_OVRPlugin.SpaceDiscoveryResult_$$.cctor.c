/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.SpaceDiscoveryResult>$$.cctor
ENTRY_POINT: 05fc1290
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 115
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_EmptyArray<OVRPlugin_SpaceDiscoveryResult>___cctor(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *in_x9;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  uint *puVar15;
  ulong uVar16;
  undefined4 *in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  uVar4 = (*in_x9)();
  lVar7 = *(long *)(in_stack_00000018 + 0x10);
  if (lVar7 == 0) {
LAB_05fc14f8:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar13 = *(uint *)(lVar7 + 0x18);
  uVar4 = uVar4 & 0x7fffffff;
  iVar3 = 0;
  if (uVar13 != 0) {
    iVar3 = (int)uVar4 / (int)uVar13;
  }
  uVar2 = uVar4 - iVar3 * uVar13;
  if (uVar13 <= uVar2) {
LAB_05fc14fc:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c8();
  }
  uVar13 = *(int *)(lVar7 + (ulong)uVar2 * 4 + 0x20) - 1;
  if (-1 < (int)uVar13) {
    uVar14 = 0xffffffff;
    do {
      lVar7 = *(long *)(in_stack_00000018 + 0x18);
      if (lVar7 == 0) goto LAB_05fc14f8;
      if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_05fc14fc;
      lVar7 = lVar7 + 0x20;
      puVar15 = (uint *)(lVar7 + (ulong)uVar13 * 0x18);
      uVar16 = (ulong)uVar13;
      if (*puVar15 == uVar4) {
        plVar11 = *(long **)(in_stack_00000018 + 0x30);
        if (plVar11 == (long *)0x0) {
          plVar11 = (long *)FUN_04036464(*(undefined8 *)
                                          (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) +
                                          0x18));
          if (plVar11 == (long *)0x0) goto LAB_05fc14f8;
          uVar9 = (**(code **)(*plVar11 + 0x1b8))
                            (plVar11,*(undefined8 *)(lVar7 + uVar16 * 0x18 + 8));
        }
        else {
          lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
          uVar12 = *(undefined8 *)(lVar7 + uVar16 * 0x18 + 8);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_03ac4090(lVar6);
          }
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar6) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_05fc13f4;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)FUN_03ac43c4(plVar11,lVar6,0);
LAB_05fc13f4:
          uVar9 = (*(code *)*puVar5)(plVar11,uVar12);
        }
        if ((uVar9 & 1) != 0) {
          if ((int)(uint)uVar14 < 0) {
            lVar6 = *(long *)(in_stack_00000018 + 0x10);
            if (lVar6 == 0) goto LAB_05fc14f8;
            if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_05fc14fc;
            *(int *)(lVar6 + (ulong)uVar2 * 4 + 0x20) = *(int *)(lVar7 + uVar16 * 0x18 + 4) + 1;
          }
          else {
            lVar6 = *(long *)(in_stack_00000018 + 0x18);
            if (lVar6 == 0) goto LAB_05fc14f8;
            if (*(uint *)(lVar6 + 0x18) <= (uint)uVar14) goto LAB_05fc14fc;
            *(undefined4 *)(lVar6 + uVar14 * 0x18 + 0x24) =
                 *(undefined4 *)(lVar7 + uVar16 * 0x18 + 4);
          }
          lVar7 = lVar7 + uVar16 * 0x18;
          *in_stack_00000008 = *(undefined4 *)(lVar7 + 0x10);
          uVar1 = *(undefined4 *)(in_stack_00000018 + 0x24);
          *puVar15 = 0xffffffff;
          *(undefined8 *)(lVar7 + 8) = 0;
          *(undefined4 *)(lVar7 + 4) = uVar1;
          *(uint *)(in_stack_00000018 + 0x24) = uVar13;
          *(ulong *)(in_stack_00000018 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(in_stack_00000018 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(in_stack_00000018 + 0x28) + 1);
          return 1;
        }
      }
      uVar14 = (ulong)uVar13;
      uVar13 = *(uint *)(lVar7 + uVar16 * 0x18 + 4);
    } while (-1 < (int)uVar13);
  }
  *in_stack_00000008 = 0;
  return 0;
}


