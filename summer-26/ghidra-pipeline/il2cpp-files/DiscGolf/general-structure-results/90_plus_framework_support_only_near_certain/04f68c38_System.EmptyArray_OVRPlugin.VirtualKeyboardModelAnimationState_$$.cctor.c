/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.VirtualKeyboardModelAnimationState>$$.cctor
ENTRY_POINT: 04f68c38
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_EmptyArray<OVRPlugin_VirtualKeyboardModelAnimationState>___cctor(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  undefined2 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long *plVar14;
  long unaff_x21;
  ulong uVar15;
  undefined4 *in_stack_00000000;
  undefined8 in_stack_00000008;
  
  uVar8 = FUN_0550405c((long)&stack0x00000008 + 4);
  lVar10 = *(long *)(unaff_x19 + 0x10);
  if (lVar10 != 0) {
    uVar2 = *(uint *)(lVar10 + 0x18);
    uVar8 = uVar8 & 0x7fffffff;
    iVar6 = 0;
    if (uVar2 != 0) {
      iVar6 = (int)uVar8 / (int)uVar2;
    }
    uVar5 = uVar8 - iVar6 * uVar2;
    if (uVar2 <= uVar5) {
LAB_04f68e68:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    uVar2 = *(int *)(lVar10 + (ulong)uVar5 * 4 + 0x20) - 1;
    if (-1 < (int)uVar2) {
      uVar15 = 0xffffffff;
      do {
        uVar7 = in_stack_00000008._4_2_;
        lVar10 = *(long *)(unaff_x19 + 0x18);
        if (lVar10 == 0) goto LAB_04f68e64;
        if (*(uint *)(lVar10 + 0x18) <= uVar2) goto LAB_04f68e68;
        puVar1 = (undefined4 *)(lVar10 + 0x20 + (ulong)uVar2 * 0x10);
        if (*(uint *)(lVar10 + 0x20 + (ulong)uVar2 * 0x10) == uVar8) {
          plVar14 = *(long **)(unaff_x19 + 0x30);
          if (plVar14 == (long *)0x0) {
            plVar14 = (long *)FUN_0390b820(*(undefined8 *)
                                            (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18));
            if (plVar14 == (long *)0x0) goto LAB_04f68e64;
            uVar12 = (**(code **)(*plVar14 + 0x1b8))
                               (plVar14,*(undefined2 *)(puVar1 + 2),in_stack_00000008._4_2_,
                                *(undefined8 *)(*plVar14 + 0x1c0));
          }
          else {
            uVar4 = *(undefined2 *)(puVar1 + 2);
            lVar10 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
            if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_02dcfd18(lVar10);
            }
            lVar11 = *plVar14;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar10) {
                  puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_04f68d8c;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar9 = (undefined8 *)FUN_02dd004c(plVar14,lVar10,0);
LAB_04f68d8c:
            uVar12 = (*(code *)*puVar9)(plVar14,uVar4,uVar7,puVar9[1]);
          }
          if ((uVar12 & 1) != 0) {
            if ((int)(uint)uVar15 < 0) {
              lVar10 = *(long *)(unaff_x19 + 0x10);
              if (lVar10 == 0) goto LAB_04f68e64;
              if (*(uint *)(lVar10 + 0x18) <= uVar5) goto LAB_04f68e68;
              *(int *)(lVar10 + (ulong)uVar5 * 4 + 0x20) = puVar1[1] + 1;
            }
            else {
              lVar10 = *(long *)(unaff_x19 + 0x18);
              if (lVar10 == 0) goto LAB_04f68e64;
              if (*(uint *)(lVar10 + 0x18) <= (uint)uVar15) goto LAB_04f68e68;
              *(undefined4 *)(lVar10 + uVar15 * 0x10 + 0x24) = puVar1[1];
            }
            *in_stack_00000000 = puVar1[3];
            uVar3 = *(undefined4 *)(unaff_x19 + 0x24);
            *(uint *)(unaff_x19 + 0x24) = uVar2;
            *puVar1 = 0xffffffff;
            puVar1[1] = uVar3;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
        }
        uVar15 = (ulong)uVar2;
        uVar2 = puVar1[1];
      } while (-1 < (int)puVar1[1]);
    }
    *in_stack_00000000 = 0;
    return 0;
  }
LAB_04f68e64:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


