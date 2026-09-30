/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector4s>$$MoveNext
ENTRY_POINT: 02bbc354
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
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
Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector4s>__MoveNext(undefined8 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  undefined8 uVar13;
  uint uVar14;
  uint *puVar15;
  ulong uVar16;
  ulong uVar17;
  long in_stack_00000008;
  
  uVar5 = (*(code *)*param_1)();
  lVar8 = *(long *)(unaff_x19 + 0x10);
  if (lVar8 != 0) {
    uVar14 = *(uint *)(lVar8 + 0x18);
    uVar5 = uVar5 & 0x7fffffff;
    iVar4 = 0;
    if (uVar14 != 0) {
      iVar4 = (int)uVar5 / (int)uVar14;
    }
    uVar3 = uVar5 - iVar4 * uVar14;
    if (uVar14 <= uVar3) {
LAB_02bbc5c0:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    uVar14 = *(int *)(lVar8 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar14) {
      uVar17 = 0xffffffff;
      do {
        lVar8 = *(long *)(unaff_x19 + 0x18);
        if (lVar8 == 0) goto LAB_02bbc5bc;
        if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_02bbc5c0;
        puVar15 = (uint *)(lVar8 + (ulong)uVar14 * 0x18 + 0x20);
        uVar16 = (ulong)uVar14;
        if (*puVar15 == uVar5) {
          plVar9 = *(long **)(unaff_x19 + 0x30);
          if (plVar9 == (long *)0x0) {
            plVar9 = (long *)FUN_02249368(*(undefined8 *)
                                           (*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) +
                                           0x18));
            if (plVar9 == (long *)0x0) goto LAB_02bbc5bc;
            uVar11 = (**(code **)(*plVar9 + 0x1b8))
                               (plVar9,*(undefined8 *)(lVar8 + uVar16 * 0x18 + 0x28));
          }
          else {
            if (plVar9 == (long *)0x0) goto LAB_02bbc5bc;
            lVar7 = *(long *)(*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 8);
            uVar13 = *(undefined8 *)(lVar8 + uVar16 * 0x18 + 0x28);
            if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_01ecaf44(lVar7);
            }
            lVar10 = *plVar9;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar7) {
                  puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_02bbc4cc;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)FUN_01ecb238(plVar9,lVar7,0);
LAB_02bbc4cc:
            uVar11 = (*(code *)*puVar6)(plVar9,uVar13);
          }
          if ((uVar11 & 1) != 0) {
            if ((int)(uint)uVar17 < 0) {
              lVar7 = *(long *)(unaff_x19 + 0x10);
              if (lVar7 == 0) goto LAB_02bbc5bc;
              if (*(uint *)(lVar7 + 0x18) <= uVar3) goto LAB_02bbc5c0;
              *(int *)(lVar7 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar8 + uVar16 * 0x18 + 0x24) + 1
              ;
            }
            else {
              lVar7 = *(long *)(unaff_x19 + 0x18);
              if (lVar7 == 0) goto LAB_02bbc5bc;
              if (*(uint *)(lVar7 + 0x18) <= (uint)uVar17) goto LAB_02bbc5c0;
              *(undefined4 *)(lVar7 + uVar17 * 0x18 + 0x24) =
                   *(undefined4 *)(lVar8 + uVar16 * 0x18 + 0x24);
            }
            *puVar15 = 0xffffffff;
            uVar2 = *(undefined4 *)(unaff_x19 + 0x24);
            lVar8 = lVar8 + uVar16 * 0x18;
            *(undefined8 *)(lVar8 + 0x28) = 0;
            *(undefined4 *)(lVar8 + 0x24) = uVar2;
            *(uint *)(unaff_x19 + 0x24) = uVar14;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
        }
        uVar1 = *(uint *)(lVar8 + uVar16 * 0x18 + 0x24);
        uVar17 = (ulong)uVar14;
        uVar14 = uVar1;
      } while (-1 < (int)uVar1);
    }
    return 0;
  }
LAB_02bbc5bc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


