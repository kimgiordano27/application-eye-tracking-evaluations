/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 060325b4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 129
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_6
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint in_w9;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  ulong uVar11;
  long unaff_x24;
  uint uVar12;
  int unaff_w26;
  int *piVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *in_stack_00000010;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  
  iVar3 = 0;
  if (in_w9 != 0) {
    iVar3 = unaff_w26 / (int)in_w9;
  }
  uVar2 = unaff_w26 - iVar3 * in_w9;
  if (in_w9 <= uVar2) {
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__Dispose:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c8();
  }
  uVar12 = *(int *)(param_1 + (ulong)uVar2 * 4 + 0x20) - 1;
  if (-1 < (int)uVar12) {
    uVar11 = 0xffffffff;
    do {
      lVar6 = *(long *)(unaff_x24 + 0x18);
      if (lVar6 == 0) goto LAB_060327f4;
      if (*(uint *)(lVar6 + 0x18) <= uVar12)
      goto System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__Dispose;
      lVar6 = lVar6 + 0x20;
      piVar13 = (int *)(lVar6 + (ulong)uVar12 * 0x24);
      uVar14 = (ulong)uVar12;
      if (*piVar13 == unaff_w26) {
        plVar10 = *(long **)(unaff_x24 + 0x30);
        if (plVar10 == (long *)0x0) {
          plVar10 = (long *)FUN_04039e78(*(undefined8 *)
                                          (*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) +
                                          0x18));
          if (plVar10 == (long *)0x0) goto LAB_060327f4;
          uVar8 = (**(code **)(*plVar10 + 0x1b8))
                            (plVar10,*(undefined4 *)(lVar6 + uVar14 * 0x24 + 8),
                             in_stack_00000028._4_4_,*(undefined8 *)(*plVar10 + 0x1c0));
        }
        else {
          lVar5 = *(long *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 8);
          uVar1 = *(undefined4 *)(lVar6 + uVar14 * 0x24 + 8);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03ac4090(lVar5);
          }
          lVar7 = *plVar10;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_060326e8;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_03ac43c4(plVar10,lVar5,0);
LAB_060326e8:
          uVar8 = (*(code *)*puVar4)(plVar10,uVar1,in_stack_00000028._4_4_,puVar4[1]);
        }
        if ((uVar8 & 1) != 0) {
          if ((int)(uint)uVar11 < 0) {
            lVar5 = *(long *)(unaff_x24 + 0x10);
            if (lVar5 == 0) goto LAB_060327f4;
            if (*(uint *)(lVar5 + 0x18) <= uVar2)
            goto System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__Dispose;
            *(int *)(lVar5 + (ulong)uVar2 * 4 + 0x20) = *(int *)(lVar6 + uVar14 * 0x24 + 4) + 1;
          }
          else {
            lVar5 = *(long *)(unaff_x24 + 0x18);
            if (lVar5 == 0) {
LAB_060327f4:
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            if (*(uint *)(lVar5 + 0x18) <= (uint)uVar11)
            goto System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__Dispose;
            *(undefined4 *)(lVar5 + uVar11 * 0x24 + 0x24) =
                 *(undefined4 *)(lVar6 + uVar14 * 0x24 + 4);
          }
          lVar6 = lVar6 + uVar14 * 0x24;
          uVar16 = *(undefined8 *)(lVar6 + 0x14);
          uVar15 = *(undefined8 *)(lVar6 + 0xc);
          in_stack_00000010[2] = *(undefined8 *)(lVar6 + 0x1c);
          in_stack_00000010[1] = uVar16;
          *in_stack_00000010 = uVar15;
          uVar1 = *(undefined4 *)(unaff_x24 + 0x24);
          *piVar13 = -1;
          *(uint *)(unaff_x24 + 0x24) = uVar12;
          *(undefined4 *)(lVar6 + 4) = uVar1;
          *(ulong *)(unaff_x24 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x24 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x24 + 0x28) + 1);
          return 1;
        }
      }
      uVar11 = (ulong)uVar12;
      uVar12 = *(uint *)(lVar6 + uVar14 * 0x24 + 4);
    } while (-1 < (int)uVar12);
  }
  *in_stack_00000010 = 0;
  in_stack_00000010[1] = 0;
  in_stack_00000010[2] = 0;
  return 0;
}


