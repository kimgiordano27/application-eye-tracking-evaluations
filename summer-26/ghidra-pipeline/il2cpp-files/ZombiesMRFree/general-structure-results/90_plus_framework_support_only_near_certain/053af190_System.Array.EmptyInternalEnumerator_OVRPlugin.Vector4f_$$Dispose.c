/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 053af190
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>__Dispose(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  int in_w8;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  ulong uVar13;
  undefined8 uVar14;
  long unaff_x24;
  uint uVar15;
  ulong uVar16;
  uint *puVar17;
  undefined4 *in_stack_00000008;
  undefined8 in_stack_00000018;
  
  if (in_w8 == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar5 = FUN_03789dd8(&stack0x00000018,
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x188));
  lVar8 = *(long *)(unaff_x19 + 0x10);
  if (lVar8 != 0) {
    uVar15 = *(uint *)(lVar8 + 0x18);
    uVar5 = uVar5 & 0x7fffffff;
    iVar3 = 0;
    if (uVar15 != 0) {
      iVar3 = (int)uVar5 / (int)uVar15;
    }
    uVar2 = uVar5 - iVar3 * uVar15;
    if (uVar15 <= uVar2) {
LAB_053af414:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    uVar15 = *(int *)(lVar8 + (ulong)uVar2 * 4 + 0x20) - 1;
    if (-1 < (int)uVar15) {
      uVar16 = 0xffffffff;
      do {
        uVar4 = in_stack_00000018;
        lVar8 = *(long *)(unaff_x19 + 0x18);
        if (lVar8 == 0) goto LAB_053af410;
        if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_053af414;
        puVar17 = (uint *)(lVar8 + (ulong)uVar15 * 0x14 + 0x20);
        uVar13 = (ulong)uVar15;
        if (*puVar17 == uVar5) {
          plVar9 = *(long **)(unaff_x19 + 0x30);
          if (plVar9 == (long *)0x0) {
            plVar9 = (long *)FUN_040052a8(*(undefined8 *)
                                           (*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x18));
            if (plVar9 == (long *)0x0) goto LAB_053af410;
            uVar11 = (**(code **)(*plVar9 + 0x1b8))
                               (plVar9,*(undefined8 *)(lVar8 + uVar13 * 0x14 + 0x28),
                                in_stack_00000018,*(undefined8 *)(*plVar9 + 0x1c0));
          }
          else {
            if (plVar9 == (long *)0x0) goto LAB_053af410;
            lVar7 = *(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 8);
            uVar14 = *(undefined8 *)(lVar8 + uVar13 * 0x14 + 0x28);
            if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_02feb2c4(lVar7);
            }
            lVar10 = *plVar9;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar7) {
                  puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_053af30c;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)FUN_02feb5b8(plVar9,lVar7,0);
LAB_053af30c:
            uVar11 = (*(code *)*puVar6)(plVar9,uVar14,uVar4,puVar6[1]);
          }
          if ((uVar11 & 1) != 0) {
            if ((int)(uint)uVar16 < 0) {
              lVar7 = *(long *)(unaff_x19 + 0x10);
              if (lVar7 == 0) goto LAB_053af410;
              if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_053af414;
              *(int *)(lVar7 + (ulong)uVar2 * 4 + 0x20) = *(int *)(lVar8 + uVar13 * 0x14 + 0x24) + 1
              ;
            }
            else {
              lVar7 = *(long *)(unaff_x19 + 0x18);
              if (lVar7 == 0) goto LAB_053af410;
              if (*(uint *)(lVar7 + 0x18) <= (uint)uVar16) goto LAB_053af414;
              *(undefined4 *)(lVar7 + uVar16 * 0x14 + 0x24) =
                   *(undefined4 *)(lVar8 + uVar13 * 0x14 + 0x24);
            }
            lVar8 = lVar8 + uVar13 * 0x14;
            *in_stack_00000008 = *(undefined4 *)(lVar8 + 0x30);
            *puVar17 = 0xffffffff;
            *(undefined4 *)(lVar8 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
            *(uint *)(unaff_x19 + 0x24) = uVar15;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
        }
        uVar1 = *(uint *)(lVar8 + uVar13 * 0x14 + 0x24);
        uVar16 = (ulong)uVar15;
        uVar15 = uVar1;
      } while (-1 < (int)uVar1);
    }
    *in_stack_00000008 = 0;
    return 0;
  }
LAB_053af410:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


