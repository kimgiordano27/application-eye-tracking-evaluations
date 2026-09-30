/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 04fd7460
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4s>__Dispose
          (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long in_x9;
  ulong uVar9;
  int *in_x10;
  int *piVar10;
  long in_x11;
  long *plVar11;
  long unaff_x23;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  uint *puVar15;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar5 = (undefined8 *)FUN_02dd004c();
      goto LAB_04fd74a4;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar5 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
LAB_04fd74a4:
  uVar4 = (*(code *)*puVar5)();
  lVar7 = *(long *)(unaff_x23 + 0x10);
  if (lVar7 != 0) {
    uVar12 = *(uint *)(lVar7 + 0x18);
    uVar4 = uVar4 & 0x7fffffff;
    iVar3 = 0;
    if (uVar12 != 0) {
      iVar3 = (int)uVar4 / (int)uVar12;
    }
    uVar2 = uVar4 - iVar3 * uVar12;
    if (uVar12 <= uVar2) {
LAB_04fd76e8:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    uVar12 = *(int *)(lVar7 + (ulong)uVar2 * 4 + 0x20) - 1;
    if (-1 < (int)uVar12) {
      uVar13 = 0xffffffff;
      do {
        lVar7 = *(long *)(unaff_x23 + 0x18);
        if (lVar7 == 0) goto LAB_04fd76e4;
        if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_04fd76e8;
        lVar7 = lVar7 + 0x20;
        puVar15 = (uint *)(lVar7 + (ulong)uVar12 * 0x18);
        uVar14 = (ulong)uVar12;
        if (*puVar15 == uVar4) {
          plVar11 = *(long **)(unaff_x23 + 0x30);
          if (plVar11 == (long *)0x0) {
            plVar11 = (long *)FUN_0390b9f8(*(undefined8 *)
                                            (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) +
                                            0x18));
            if (plVar11 == (long *)0x0) goto LAB_04fd76e4;
            uVar9 = (**(code **)(*plVar11 + 0x1b8))
                              (plVar11,*(undefined4 *)(lVar7 + uVar14 * 0x18 + 8),
                               in_stack_00000018._4_4_,*(undefined8 *)(*plVar11 + 0x1c0));
          }
          else {
            lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar7 + uVar14 * 0x18 + 8);
            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_02dcfd18(lVar6);
            }
            lVar8 = *plVar11;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == lVar6) {
                  puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_04fd75f4;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_02dd004c(plVar11,lVar6,0);
LAB_04fd75f4:
            uVar9 = (*(code *)*puVar5)(plVar11,uVar1,in_stack_00000018._4_4_,puVar5[1]);
          }
          if ((uVar9 & 1) != 0) {
            if ((int)(uint)uVar13 < 0) {
              lVar6 = *(long *)(unaff_x23 + 0x10);
              if (lVar6 == 0) goto LAB_04fd76e4;
              if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_04fd76e8;
              *(int *)(lVar6 + (ulong)uVar2 * 4 + 0x20) = *(int *)(lVar7 + uVar14 * 0x18 + 4) + 1;
            }
            else {
              lVar6 = *(long *)(unaff_x23 + 0x18);
              if (lVar6 == 0) goto LAB_04fd76e4;
              if (*(uint *)(lVar6 + 0x18) <= (uint)uVar13) goto LAB_04fd76e8;
              *(undefined4 *)(lVar6 + uVar13 * 0x18 + 0x24) =
                   *(undefined4 *)(lVar7 + uVar14 * 0x18 + 4);
            }
            uVar1 = *(undefined4 *)(unaff_x23 + 0x24);
            lVar7 = lVar7 + uVar14 * 0x18;
            *puVar15 = 0xffffffff;
            *(undefined4 *)(lVar7 + 4) = uVar1;
            *(undefined8 *)(lVar7 + 0x10) = 0;
            *(uint *)(unaff_x23 + 0x24) = uVar12;
            *(ulong *)(unaff_x23 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x23 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x23 + 0x28) + 1);
            return 1;
          }
        }
        uVar13 = (ulong)uVar12;
        uVar12 = *(uint *)(lVar7 + uVar14 * 0x18 + 4);
      } while (-1 < (int)uVar12);
    }
    return 0;
  }
LAB_04fd76e4:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


