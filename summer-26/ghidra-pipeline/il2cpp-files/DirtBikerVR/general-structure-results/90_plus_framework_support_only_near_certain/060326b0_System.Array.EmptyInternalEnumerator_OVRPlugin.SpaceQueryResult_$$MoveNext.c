/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$MoveNext
ENTRY_POINT: 060326b0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 129
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__MoveNext(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  uint uVar8;
  ulong unaff_x20;
  ulong unaff_x21;
  long unaff_x24;
  uint uVar9;
  ulong unaff_x25;
  int unaff_w26;
  long unaff_x27;
  int *unaff_x28;
  ulong unaff_x29;
  undefined8 uVar10;
  undefined8 uVar11;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  
code_r0x060326b0:
  uVar9 = (uint)unaff_x25;
  uVar8 = (uint)unaff_x20;
  plVar3 = (long *)FUN_04039e78(param_1);
  if (plVar3 == (long *)0x0) {
LAB_060327f4:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar4 = (**(code **)(*plVar3 + 0x1b8))
                    (plVar3,*(undefined4 *)
                             (unaff_x27 + (unaff_x29 & 0xffffffff) * (unaff_x21 & 0xffffffff) + 8),
                     in_stack_00000028._4_4_,*(undefined8 *)(*plVar3 + 0x1c0));
  do {
    if ((uVar4 & 1) != 0) {
      if ((int)uVar8 < 0) {
        lVar6 = *(long *)(unaff_x24 + 0x10);
        if (lVar6 == 0) goto LAB_060327f4;
        if ((uint)in_stack_00000008 < *(uint *)(lVar6 + 0x18)) {
          *(int *)(lVar6 + in_stack_00000008 * 4 + 0x20) =
               *(int *)(unaff_x27 + (unaff_x29 & 0xffffffff) * 0x24 + 4) + 1;
          goto LAB_060327ac;
        }
      }
      else {
        lVar6 = *(long *)(unaff_x24 + 0x18);
        if (lVar6 == 0) goto LAB_060327f4;
        if (uVar8 < *(uint *)(lVar6 + 0x18)) {
          *(undefined4 *)(lVar6 + (ulong)uVar8 * 0x24 + 0x24) =
               *(undefined4 *)(unaff_x27 + (unaff_x29 & 0xffffffff) * 0x24 + 4);
LAB_060327ac:
          lVar6 = unaff_x27 + (unaff_x29 & 0xffffffff) * 0x24;
          uVar11 = *(undefined8 *)(lVar6 + 0x14);
          uVar10 = *(undefined8 *)(lVar6 + 0xc);
          in_stack_00000010[2] = *(undefined8 *)(lVar6 + 0x1c);
          in_stack_00000010[1] = uVar11;
          *in_stack_00000010 = uVar10;
          uVar1 = *(undefined4 *)(unaff_x24 + 0x24);
          *unaff_x28 = -1;
          *(uint *)(unaff_x24 + 0x24) = uVar9;
          *(undefined4 *)(lVar6 + 4) = uVar1;
          *(ulong *)(unaff_x24 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x24 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x24 + 0x28) + 1);
          return 1;
        }
      }
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__Dispose:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    do {
      unaff_x20 = unaff_x25 & 0xffffffff;
      uVar8 = (uint)unaff_x25;
      uVar9 = *(uint *)(unaff_x27 + (unaff_x29 & 0xffffffff) * (unaff_x21 & 0xffffffff) + 4);
      unaff_x25 = (ulong)uVar9;
      if ((int)uVar9 < 0) {
        *in_stack_00000010 = 0;
        in_stack_00000010[1] = 0;
        in_stack_00000010[2] = 0;
        return 0;
      }
      lVar6 = *(long *)(unaff_x24 + 0x18);
      if (lVar6 == 0) goto LAB_060327f4;
      if (*(uint *)(lVar6 + 0x18) <= uVar9)
      goto System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__Dispose;
      unaff_x27 = lVar6 + 0x20;
      unaff_x28 = (int *)(unaff_x27 + unaff_x25 * (unaff_x21 & 0xffffffff));
      unaff_x29 = unaff_x25;
    } while (*unaff_x28 != unaff_w26);
    plVar3 = *(long **)(unaff_x24 + 0x30);
    if (plVar3 == (long *)0x0) break;
    lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 8);
    uVar1 = *(undefined4 *)(unaff_x27 + unaff_x25 * (unaff_x21 & 0xffffffff) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03ac4090(lVar6);
    }
    lVar5 = *plVar3;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar6) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_060326e8;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03ac43c4(plVar3,lVar6,0);
LAB_060326e8:
    uVar4 = (*(code *)*puVar2)(plVar3,uVar1,in_stack_00000028._4_4_,puVar2[1]);
    unaff_x24 = in_stack_00000018;
  } while( true );
  param_1 = *(undefined8 *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 0x18);
  goto code_r0x060326b0;
}


