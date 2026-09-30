/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BoneCapsule>$$.ctor
ENTRY_POINT: 060321e8
PROGRAM: DirtBikerVR-libil2cpp.so
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
System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>___ctor
          (long param_1,undefined4 param_2,long param_3)

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
  undefined4 uStack000000000000001c;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar13 = *(long **)(param_1 + 0x30);
    lVar7 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    uStack000000000000001c = param_2;
    if (plVar13 == (long *)0x0) {
      uVar5 = FUN_0676d8d4(&stack0x0000001c,*(undefined8 *)(lVar7 + 400));
    }
    else {
      lVar7 = *(long *)(lVar7 + 8);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03ac4090(lVar7);
      }
      lVar8 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_06032288;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_03ac43c4(plVar13,lVar7,1);
LAB_06032288:
      uVar5 = (*(code *)*puVar6)(plVar13,param_2,puVar6[1]);
    }
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 == 0) {
LAB_060324c8:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar14 = *(uint *)(lVar7 + 0x18);
    uVar5 = uVar5 & 0x7fffffff;
    iVar4 = 0;
    if (uVar14 != 0) {
      iVar4 = (int)uVar5 / (int)uVar14;
    }
    uVar3 = uVar5 - iVar4 * uVar14;
    if (uVar14 <= uVar3) {
LAB_060324cc:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    uVar14 = *(int *)(lVar7 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar14) {
      uVar10 = 0xffffffff;
      do {
        uVar2 = uStack000000000000001c;
        lVar7 = *(long *)(param_1 + 0x18);
        if (lVar7 == 0) goto LAB_060324c8;
        if (*(uint *)(lVar7 + 0x18) <= uVar14) goto LAB_060324cc;
        lVar7 = lVar7 + 0x20;
        puVar16 = (uint *)(lVar7 + (ulong)uVar14 * 0x24);
        uVar15 = (ulong)uVar14;
        if (*puVar16 == uVar5) {
          plVar13 = *(long **)(param_1 + 0x30);
          if (plVar13 == (long *)0x0) {
            plVar13 = (long *)FUN_04039e78(*(undefined8 *)
                                            (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18));
            if (plVar13 == (long *)0x0) goto LAB_060324c8;
            uVar11 = (**(code **)(*plVar13 + 0x1b8))
                               (plVar13,*(undefined4 *)(lVar7 + uVar15 * 0x24 + 8),
                                uStack000000000000001c,*(undefined8 *)(*plVar13 + 0x1c0));
          }
          else {
            lVar8 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar7 + uVar15 * 0x24 + 8);
            if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_03ac4090(lVar8);
            }
            lVar9 = *plVar13;
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar8) {
                  puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_060323dc;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)FUN_03ac43c4(plVar13,lVar8,0);
LAB_060323dc:
            uVar11 = (*(code *)*puVar6)(plVar13,uVar1,uVar2,puVar6[1]);
          }
          if ((uVar11 & 1) != 0) {
            if ((int)(uint)uVar10 < 0) {
              lVar8 = *(long *)(param_1 + 0x10);
              if (lVar8 == 0) goto LAB_060324c8;
              if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_060324cc;
              *(int *)(lVar8 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar7 + uVar15 * 0x24 + 4) + 1;
            }
            else {
              lVar8 = *(long *)(param_1 + 0x18);
              if (lVar8 == 0) goto LAB_060324c8;
              if (*(uint *)(lVar8 + 0x18) <= (uint)uVar10) goto LAB_060324cc;
              *(undefined4 *)(lVar8 + uVar10 * 0x24 + 0x24) =
                   *(undefined4 *)(lVar7 + uVar15 * 0x24 + 4);
            }
            uVar2 = *(undefined4 *)(param_1 + 0x24);
            *puVar16 = 0xffffffff;
            *(uint *)(param_1 + 0x24) = uVar14;
            *(undefined4 *)(lVar7 + uVar15 * 0x24 + 4) = uVar2;
            *(ulong *)(param_1 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(param_1 + 0x28) + 1);
            return 1;
          }
        }
        uVar10 = (ulong)uVar14;
        uVar14 = *(uint *)(lVar7 + uVar15 * 0x24 + 4);
      } while (-1 < (int)uVar14);
    }
  }
  return 0;
}


