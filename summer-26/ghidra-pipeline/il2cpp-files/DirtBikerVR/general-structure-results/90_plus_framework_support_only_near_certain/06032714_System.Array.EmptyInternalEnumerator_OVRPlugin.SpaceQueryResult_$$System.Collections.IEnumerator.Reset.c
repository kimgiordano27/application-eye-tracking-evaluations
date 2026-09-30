/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 06032714
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 129
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_Reset
          (void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint in_w8;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  uint unaff_w20;
  ulong unaff_x21;
  long unaff_x24;
  ulong uVar10;
  int unaff_w26;
  int *piVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  
  do {
    uVar4 = in_w8;
    uVar10 = (ulong)uVar4;
    if ((int)uVar4 < 0) {
      *in_stack_00000010 = 0;
      in_stack_00000010[1] = 0;
      in_stack_00000010[2] = 0;
      return 0;
    }
    lVar5 = *(long *)(unaff_x24 + 0x18);
    if (lVar5 == 0) goto LAB_060327f4;
    if (*(uint *)(lVar5 + 0x18) <= uVar4)
    goto System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__Dispose;
    lVar5 = lVar5 + 0x20;
    piVar11 = (int *)(lVar5 + (ulong)uVar4 * (unaff_x21 & 0xffffffff));
    if (*piVar11 == unaff_w26) {
      plVar9 = *(long **)(unaff_x24 + 0x30);
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)FUN_04039e78(*(undefined8 *)
                                       (*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 0x18
                                       ));
        if (plVar9 == (long *)0x0) goto LAB_060327f4;
        uVar7 = (**(code **)(*plVar9 + 0x1b8))
                          (plVar9,*(undefined4 *)(lVar5 + uVar10 * (unaff_x21 & 0xffffffff) + 8),
                           in_stack_00000028._4_4_,*(undefined8 *)(*plVar9 + 0x1c0));
      }
      else {
        lVar3 = *(long *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 8);
        uVar1 = *(undefined4 *)(lVar5 + uVar10 * (unaff_x21 & 0xffffffff) + 8);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03ac4090(lVar3);
        }
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar3) {
              puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_060326e8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)FUN_03ac43c4(plVar9,lVar3,0);
LAB_060326e8:
        uVar7 = (*(code *)*puVar2)(plVar9,uVar1,in_stack_00000028._4_4_,puVar2[1]);
        unaff_x24 = in_stack_00000018;
      }
      if ((uVar7 & 1) != 0) {
        if ((int)unaff_w20 < 0) {
          lVar3 = *(long *)(unaff_x24 + 0x10);
          if (lVar3 == 0) goto LAB_060327f4;
          if (*(uint *)(lVar3 + 0x18) <= (uint)in_stack_00000008)
          goto System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__Dispose;
          *(int *)(lVar3 + in_stack_00000008 * 4 + 0x20) = *(int *)(lVar5 + uVar10 * 0x24 + 4) + 1;
        }
        else {
          lVar3 = *(long *)(unaff_x24 + 0x18);
          if (lVar3 == 0) {
LAB_060327f4:
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          if (*(uint *)(lVar3 + 0x18) <= unaff_w20) {
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__Dispose:
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          *(undefined4 *)(lVar3 + (ulong)unaff_w20 * 0x24 + 0x24) =
               *(undefined4 *)(lVar5 + uVar10 * 0x24 + 4);
        }
        lVar5 = lVar5 + uVar10 * 0x24;
        uVar13 = *(undefined8 *)(lVar5 + 0x14);
        uVar12 = *(undefined8 *)(lVar5 + 0xc);
        in_stack_00000010[2] = *(undefined8 *)(lVar5 + 0x1c);
        in_stack_00000010[1] = uVar13;
        *in_stack_00000010 = uVar12;
        uVar1 = *(undefined4 *)(unaff_x24 + 0x24);
        *piVar11 = -1;
        *(uint *)(unaff_x24 + 0x24) = uVar4;
        *(undefined4 *)(lVar5 + 4) = uVar1;
        *(ulong *)(unaff_x24 + 0x28) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x24 + 0x28) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x24 + 0x28) + 1);
        return 1;
      }
    }
    in_w8 = *(uint *)(lVar5 + uVar10 * (unaff_x21 & 0xffffffff) + 4);
    unaff_w20 = uVar4;
  } while( true );
}


