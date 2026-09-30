/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$.cctor
ENTRY_POINT: 060325d4
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


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>___cctor(void)

{
  undefined4 uVar1;
  bool in_NG;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  ulong uVar9;
  long unaff_x24;
  uint unaff_w25;
  int unaff_w26;
  int *piVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if (!in_NG) {
    uVar9 = 0xffffffff;
    do {
      lVar4 = *(long *)(unaff_x24 + 0x18);
      if (lVar4 == 0) goto LAB_060327f4;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w25)
      goto System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__Dispose;
      lVar4 = lVar4 + 0x20;
      piVar10 = (int *)(lVar4 + (ulong)unaff_w25 * 0x24);
      uVar11 = (ulong)unaff_w25;
      if (*piVar10 == unaff_w26) {
        plVar8 = *(long **)(unaff_x24 + 0x30);
        if (plVar8 == (long *)0x0) {
          plVar8 = (long *)FUN_04039e78(*(undefined8 *)
                                         (*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) +
                                         0x18));
          if (plVar8 == (long *)0x0) goto LAB_060327f4;
          uVar6 = (**(code **)(*plVar8 + 0x1b8))
                            (plVar8,*(undefined4 *)(lVar4 + uVar11 * 0x24 + 8),
                             in_stack_00000028._4_4_,*(undefined8 *)(*plVar8 + 0x1c0));
        }
        else {
          lVar3 = *(long *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 8);
          uVar1 = *(undefined4 *)(lVar4 + uVar11 * 0x24 + 8);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_03ac4090(lVar3);
          }
          lVar5 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == lVar3) {
                puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_060326e8;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar2 = (undefined8 *)FUN_03ac43c4(plVar8,lVar3,0);
LAB_060326e8:
          uVar6 = (*(code *)*puVar2)(plVar8,uVar1,in_stack_00000028._4_4_,puVar2[1]);
        }
        if ((uVar6 & 1) != 0) {
          if ((int)(uint)uVar9 < 0) {
            lVar3 = *(long *)(unaff_x24 + 0x10);
            if (lVar3 == 0) goto LAB_060327f4;
            if (*(uint *)(lVar3 + 0x18) <= (uint)in_stack_00000008)
            goto System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__Dispose;
            *(int *)(lVar3 + in_stack_00000008 * 4 + 0x20) = *(int *)(lVar4 + uVar11 * 0x24 + 4) + 1
            ;
          }
          else {
            lVar3 = *(long *)(unaff_x24 + 0x18);
            if (lVar3 == 0) {
LAB_060327f4:
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            if (*(uint *)(lVar3 + 0x18) <= (uint)uVar9) {
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__Dispose:
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c8();
            }
            *(undefined4 *)(lVar3 + uVar9 * 0x24 + 0x24) =
                 *(undefined4 *)(lVar4 + uVar11 * 0x24 + 4);
          }
          lVar4 = lVar4 + uVar11 * 0x24;
          uVar13 = *(undefined8 *)(lVar4 + 0x14);
          uVar12 = *(undefined8 *)(lVar4 + 0xc);
          in_stack_00000010[2] = *(undefined8 *)(lVar4 + 0x1c);
          in_stack_00000010[1] = uVar13;
          *in_stack_00000010 = uVar12;
          uVar1 = *(undefined4 *)(unaff_x24 + 0x24);
          *piVar10 = -1;
          *(uint *)(unaff_x24 + 0x24) = unaff_w25;
          *(undefined4 *)(lVar4 + 4) = uVar1;
          *(ulong *)(unaff_x24 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x24 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x24 + 0x28) + 1);
          return 1;
        }
      }
      uVar9 = (ulong)unaff_w25;
      unaff_w25 = *(uint *)(lVar4 + uVar11 * 0x24 + 4);
    } while (-1 < (int)unaff_w25);
  }
  *in_stack_00000010 = 0;
  in_stack_00000010[1] = 0;
  in_stack_00000010[2] = 0;
  return 0;
}


