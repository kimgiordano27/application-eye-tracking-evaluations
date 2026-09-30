/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 06032560
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 129
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_6
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__Dispose
          (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 in_ZR;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long in_x9;
  ulong uVar9;
  int *in_x10;
  int *piVar10;
  long *plVar11;
  ulong uVar12;
  long unaff_x24;
  uint uVar13;
  uint *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *in_stack_00000010;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar5 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
      goto LAB_06032594;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar5 = (undefined8 *)FUN_03ac43c4();
LAB_06032594:
  uVar4 = (*(code *)*puVar5)();
  lVar7 = *(long *)(unaff_x24 + 0x10);
  if (lVar7 != 0) {
    uVar13 = *(uint *)(lVar7 + 0x18);
    uVar4 = uVar4 & 0x7fffffff;
    iVar3 = 0;
    if (uVar13 != 0) {
      iVar3 = (int)uVar4 / (int)uVar13;
    }
    uVar2 = uVar4 - iVar3 * uVar13;
    if (uVar13 <= uVar2) {
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__Dispose:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    uVar13 = *(int *)(lVar7 + (ulong)uVar2 * 4 + 0x20) - 1;
    if (-1 < (int)uVar13) {
      uVar12 = 0xffffffff;
      do {
        lVar7 = *(long *)(unaff_x24 + 0x18);
        if (lVar7 == 0) goto LAB_060327f4;
        if (*(uint *)(lVar7 + 0x18) <= uVar13)
        goto System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__Dispose;
        lVar7 = lVar7 + 0x20;
        puVar14 = (uint *)(lVar7 + (ulong)uVar13 * 0x24);
        uVar15 = (ulong)uVar13;
        if (*puVar14 == uVar4) {
          plVar11 = *(long **)(unaff_x24 + 0x30);
          if (plVar11 == (long *)0x0) {
            plVar11 = (long *)FUN_04039e78(*(undefined8 *)
                                            (*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) +
                                            0x18));
            if (plVar11 == (long *)0x0) goto LAB_060327f4;
            uVar9 = (**(code **)(*plVar11 + 0x1b8))
                              (plVar11,*(undefined4 *)(lVar7 + uVar15 * 0x24 + 8),
                               in_stack_00000028._4_4_,*(undefined8 *)(*plVar11 + 0x1c0));
          }
          else {
            lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar7 + uVar15 * 0x24 + 8);
            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_03ac4090(lVar6);
            }
            lVar8 = *plVar11;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == lVar6) {
                  puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_060326e8;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_03ac43c4(plVar11,lVar6,0);
LAB_060326e8:
            uVar9 = (*(code *)*puVar5)(plVar11,uVar1,in_stack_00000028._4_4_,puVar5[1]);
          }
          if ((uVar9 & 1) != 0) {
            if ((int)(uint)uVar12 < 0) {
              lVar6 = *(long *)(unaff_x24 + 0x10);
              if (lVar6 == 0) goto LAB_060327f4;
              if (*(uint *)(lVar6 + 0x18) <= uVar2)
              goto System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__Dispose;
              *(int *)(lVar6 + (ulong)uVar2 * 4 + 0x20) = *(int *)(lVar7 + uVar15 * 0x24 + 4) + 1;
            }
            else {
              lVar6 = *(long *)(unaff_x24 + 0x18);
              if (lVar6 == 0) goto LAB_060327f4;
              if (*(uint *)(lVar6 + 0x18) <= (uint)uVar12)
              goto System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__Dispose;
              *(undefined4 *)(lVar6 + uVar12 * 0x24 + 0x24) =
                   *(undefined4 *)(lVar7 + uVar15 * 0x24 + 4);
            }
            lVar7 = lVar7 + uVar15 * 0x24;
            uVar17 = *(undefined8 *)(lVar7 + 0x14);
            uVar16 = *(undefined8 *)(lVar7 + 0xc);
            in_stack_00000010[2] = *(undefined8 *)(lVar7 + 0x1c);
            in_stack_00000010[1] = uVar17;
            *in_stack_00000010 = uVar16;
            uVar1 = *(undefined4 *)(unaff_x24 + 0x24);
            *puVar14 = 0xffffffff;
            *(uint *)(unaff_x24 + 0x24) = uVar13;
            *(undefined4 *)(lVar7 + 4) = uVar1;
            *(ulong *)(unaff_x24 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x24 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x24 + 0x28) + 1);
            return 1;
          }
        }
        uVar12 = (ulong)uVar13;
        uVar13 = *(uint *)(lVar7 + uVar15 * 0x24 + 4);
      } while (-1 < (int)uVar13);
    }
    *in_stack_00000010 = 0;
    in_stack_00000010[1] = 0;
    in_stack_00000010[2] = 0;
    return 0;
  }
LAB_060327f4:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


