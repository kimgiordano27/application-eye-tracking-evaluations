/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector3f>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 053af0c8
PROGRAM: ZombiesMRFree-libil2cpp.so
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
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector3f>__System_Collections_IEnumerator_Reset
          (long param_1,undefined8 param_2,undefined4 *param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 *puStack0000000000000008;
  undefined8 uStack0000000000000018;
  
  puStack0000000000000008 = param_3;
  uStack0000000000000018 = param_2;
  if ((DAT_07394cbc & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f95d50);
    DAT_07394cbc = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar14 = *(long **)(param_1 + 0x30);
    if (plVar14 == (long *)0x0) {
      if (*(int *)(*(long *)PTR_DAT_06f95d50 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar5 = FUN_03789dd8(&stack0x00000018,
                           *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x188));
    }
    else {
      lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02feb2c4(lVar7);
      }
      lVar8 = *plVar14;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_053af1c0;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_02feb5b8(plVar14,lVar7,1);
LAB_053af1c0:
      uVar5 = (*(code *)*puVar6)(plVar14,param_2,puVar6[1]);
    }
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 == 0) {
LAB_053af410:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar16 = *(uint *)(lVar7 + 0x18);
    uVar5 = uVar5 & 0x7fffffff;
    iVar3 = 0;
    if (uVar16 != 0) {
      iVar3 = (int)uVar5 / (int)uVar16;
    }
    uVar2 = uVar5 - iVar3 * uVar16;
    if (uVar16 <= uVar2) {
LAB_053af414:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    uVar16 = *(int *)(lVar7 + (ulong)uVar2 * 4 + 0x20) - 1;
    if (-1 < (int)uVar16) {
      uVar10 = 0xffffffff;
      do {
        uVar4 = uStack0000000000000018;
        lVar7 = *(long *)(param_1 + 0x18);
        if (lVar7 == 0) goto LAB_053af410;
        if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_053af414;
        puVar17 = (uint *)(lVar7 + (ulong)uVar16 * 0x14 + 0x20);
        uVar13 = (ulong)uVar16;
        if (*puVar17 == uVar5) {
          plVar14 = *(long **)(param_1 + 0x30);
          if (plVar14 == (long *)0x0) {
            plVar14 = (long *)FUN_040052a8(*(undefined8 *)
                                            (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x18));
            if (plVar14 == (long *)0x0) goto LAB_053af410;
            uVar11 = (**(code **)(*plVar14 + 0x1b8))
                               (plVar14,*(undefined8 *)(lVar7 + uVar13 * 0x14 + 0x28),
                                uStack0000000000000018,*(undefined8 *)(*plVar14 + 0x1c0));
          }
          else {
            if (plVar14 == (long *)0x0) goto LAB_053af410;
            lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 8);
            uVar15 = *(undefined8 *)(lVar7 + uVar13 * 0x14 + 0x28);
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_02feb2c4(lVar8);
            }
            lVar9 = *plVar14;
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar8) {
                  puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_053af30c;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)FUN_02feb5b8(plVar14,lVar8,0);
LAB_053af30c:
            uVar11 = (*(code *)*puVar6)(plVar14,uVar15,uVar4,puVar6[1]);
          }
          if ((uVar11 & 1) != 0) {
            if ((int)(uint)uVar10 < 0) {
              lVar8 = *(long *)(param_1 + 0x10);
              if (lVar8 == 0) goto LAB_053af410;
              if (*(uint *)(lVar8 + 0x18) <= uVar2) goto LAB_053af414;
              *(int *)(lVar8 + (ulong)uVar2 * 4 + 0x20) = *(int *)(lVar7 + uVar13 * 0x14 + 0x24) + 1
              ;
            }
            else {
              lVar8 = *(long *)(param_1 + 0x18);
              if (lVar8 == 0) goto LAB_053af410;
              if (*(uint *)(lVar8 + 0x18) <= (uint)uVar10) goto LAB_053af414;
              *(undefined4 *)(lVar8 + uVar10 * 0x14 + 0x24) =
                   *(undefined4 *)(lVar7 + uVar13 * 0x14 + 0x24);
            }
            lVar7 = lVar7 + uVar13 * 0x14;
            *puStack0000000000000008 = *(undefined4 *)(lVar7 + 0x30);
            *puVar17 = 0xffffffff;
            *(undefined4 *)(lVar7 + 0x24) = *(undefined4 *)(param_1 + 0x24);
            *(uint *)(param_1 + 0x24) = uVar16;
            *(ulong *)(param_1 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(param_1 + 0x28) + 1);
            return 1;
          }
        }
        uVar1 = *(uint *)(lVar7 + uVar13 * 0x14 + 0x24);
        uVar10 = (ulong)uVar16;
        uVar16 = uVar1;
      } while (-1 < (int)uVar1);
    }
  }
  *puStack0000000000000008 = 0;
  return 0;
}


