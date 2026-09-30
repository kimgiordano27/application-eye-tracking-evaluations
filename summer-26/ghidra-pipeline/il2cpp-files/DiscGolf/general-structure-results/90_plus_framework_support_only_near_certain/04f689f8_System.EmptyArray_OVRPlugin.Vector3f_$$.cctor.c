/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.Vector3f>$$.cctor
ENTRY_POINT: 04f689f8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_EmptyArray<OVRPlugin_Vector3f>___cctor(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long in_x9;
  ulong uVar8;
  ulong in_x10;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x24;
  long unaff_x25;
  int unaff_w26;
  ulong unaff_x28;
  long *plVar10;
  undefined8 in_stack_00000008;
  
code_r0x04f689f8:
  puVar1 = (undefined4 *)(param_1 + in_x10 * 0x10);
  if (*(int *)(param_1 + in_x9) == unaff_w26) {
    plVar10 = *(long **)(unaff_x19 + 0x30);
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)FUN_0390b820(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18));
      if (plVar10 == (long *)0x0) goto LAB_04f68b8c;
      uVar8 = (**(code **)(*plVar10 + 0x1b8))
                        (plVar10,*(undefined2 *)(puVar1 + 2),in_stack_00000008._4_2_,
                         *(undefined8 *)(*plVar10 + 0x1c0));
    }
    else {
      uVar4 = *(undefined2 *)(puVar1 + 2);
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02dcfd18(lVar6);
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_04f68ac8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_02dd004c(plVar10,lVar6,0);
LAB_04f68ac8:
      uVar8 = (*(code *)*puVar5)(plVar10,uVar4,in_stack_00000008._4_2_,puVar5[1]);
    }
    if ((uVar8 & 1) != 0) {
      if (-1 < (int)(uint)unaff_x28) {
        lVar6 = *(long *)(unaff_x19 + 0x18);
        if (lVar6 == 0) goto LAB_04f68b8c;
        if ((uint)unaff_x28 < *(uint *)(lVar6 + 0x18)) {
          *(undefined4 *)(lVar6 + (unaff_x28 & 0xffffffff) * 0x10 + 0x24) = puVar1[1];
LAB_04f68b64:
          uVar3 = *(undefined4 *)(unaff_x19 + 0x24);
          *(int *)(unaff_x19 + 0x24) = (int)unaff_x24;
          *puVar1 = 0xffffffff;
          puVar1[1] = uVar3;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
        goto LAB_04f68b90;
      }
      lVar6 = *(long *)(unaff_x19 + 0x10);
      if (lVar6 != 0) {
        if ((uint)unaff_x25 < *(uint *)(lVar6 + 0x18)) {
          *(int *)(lVar6 + unaff_x25 * 4 + 0x20) = puVar1[1] + 1;
          goto LAB_04f68b64;
        }
LAB_04f68b90:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      goto LAB_04f68b8c;
    }
  }
  uVar2 = puVar1[1];
  in_x10 = (ulong)uVar2;
  unaff_x28 = unaff_x24 & 0xffffffff;
  if ((int)uVar2 < 0) {
    return 0;
  }
  param_1 = *(long *)(unaff_x19 + 0x18);
  if (param_1 != 0) {
    if (*(uint *)(param_1 + 0x18) <= uVar2) goto LAB_04f68b90;
    in_x9 = in_x10 << 4;
    param_1 = param_1 + 0x20;
    unaff_x24 = in_x10;
    goto code_r0x04f689f8;
  }
LAB_04f68b8c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


