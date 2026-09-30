/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 045df050
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>__Dispose
          (long param_1,undefined4 param_2,undefined8 *param_3,long param_4)

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
  uint *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puStack0000000000000010;
  long lStack0000000000000020;
  undefined4 uStack000000000000002c;
  
  puStack0000000000000010 = param_3;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar13 = *(long **)(param_1 + 0x30);
    lVar7 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
    lStack0000000000000020 = param_4;
    uStack000000000000002c = param_2;
    if (plVar13 == (long *)0x0) {
      uVar5 = FUN_04d98018(&stack0x0000002c,*(undefined8 *)(lVar7 + 400));
    }
    else {
      lVar7 = *(long *)(lVar7 + 8);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02b76218(lVar7);
      }
      lVar8 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_045df108;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_02b7654c(plVar13,lVar7,1);
LAB_045df108:
      uVar5 = (*(code *)*puVar6)(plVar13,param_2,puVar6[1]);
    }
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 == 0) {
LAB_045df368:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar14 = *(uint *)(lVar7 + 0x18);
    uVar5 = uVar5 & 0x7fffffff;
    iVar4 = 0;
    if (uVar14 != 0) {
      iVar4 = (int)uVar5 / (int)uVar14;
    }
    uVar3 = uVar5 - iVar4 * uVar14;
    if (uVar14 <= uVar3) {
LAB_045df36c:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    uVar14 = *(int *)(lVar7 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar14) {
      uVar10 = 0xffffffff;
      do {
        uVar2 = uStack000000000000002c;
        lVar7 = *(long *)(param_1 + 0x18);
        if (lVar7 == 0) goto LAB_045df368;
        if (*(uint *)(lVar7 + 0x18) <= uVar14) goto LAB_045df36c;
        lVar7 = lVar7 + 0x20;
        puVar15 = (uint *)(lVar7 + (ulong)uVar14 * 0x24);
        uVar16 = (ulong)uVar14;
        if (*puVar15 == uVar5) {
          plVar13 = *(long **)(param_1 + 0x30);
          if (plVar13 == (long *)0x0) {
            plVar13 = (long *)FUN_03421e68(*(undefined8 *)
                                            (*(long *)(*(long *)(lStack0000000000000020 + 0x20) +
                                                      0xc0) + 0x18));
            if (plVar13 == (long *)0x0) goto LAB_045df368;
            uVar11 = (**(code **)(*plVar13 + 0x1b8))
                               (plVar13,*(undefined4 *)(lVar7 + uVar16 * 0x24 + 8),
                                uStack000000000000002c,*(undefined8 *)(*plVar13 + 0x1c0));
          }
          else {
            lVar8 = *(long *)(*(long *)(*(long *)(lStack0000000000000020 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar7 + uVar16 * 0x24 + 8);
            if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_02b76218(lVar8);
            }
            lVar9 = *plVar13;
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar8) {
                  puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                  goto FUN_045df25c;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)FUN_02b7654c(plVar13,lVar8,0);
FUN_045df25c:
            uVar11 = (*(code *)*puVar6)(plVar13,uVar1,uVar2,puVar6[1]);
          }
          if ((uVar11 & 1) != 0) {
            if ((int)(uint)uVar10 < 0) {
              lVar8 = *(long *)(param_1 + 0x10);
              if (lVar8 == 0) goto LAB_045df368;
              if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_045df36c;
              *(int *)(lVar8 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar7 + uVar16 * 0x24 + 4) + 1;
            }
            else {
              lVar8 = *(long *)(param_1 + 0x18);
              if (lVar8 == 0) goto LAB_045df368;
              if (*(uint *)(lVar8 + 0x18) <= (uint)uVar10) goto LAB_045df36c;
              *(undefined4 *)(lVar8 + uVar10 * 0x24 + 0x24) =
                   *(undefined4 *)(lVar7 + uVar16 * 0x24 + 4);
            }
            lVar7 = lVar7 + uVar16 * 0x24;
            uVar18 = *(undefined8 *)(lVar7 + 0x14);
            uVar17 = *(undefined8 *)(lVar7 + 0xc);
            puStack0000000000000010[2] = *(undefined8 *)(lVar7 + 0x1c);
            puStack0000000000000010[1] = uVar18;
            *puStack0000000000000010 = uVar17;
            uVar2 = *(undefined4 *)(param_1 + 0x24);
            *puVar15 = 0xffffffff;
            *(uint *)(param_1 + 0x24) = uVar14;
            *(undefined4 *)(lVar7 + 4) = uVar2;
            *(ulong *)(param_1 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(param_1 + 0x28) + 1);
            return 1;
          }
        }
        uVar10 = (ulong)uVar14;
        uVar14 = *(uint *)(lVar7 + uVar16 * 0x24 + 4);
      } while (-1 < (int)uVar14);
    }
  }
  *puStack0000000000000010 = 0;
  puStack0000000000000010[1] = 0;
  puStack0000000000000010[2] = 0;
  return 0;
}


