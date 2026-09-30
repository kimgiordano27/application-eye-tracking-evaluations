/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.SpaceDiscoveryResult>$$.cctor
ENTRY_POINT: 0494b2ec
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 115
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_EmptyArray<OVRPlugin_SpaceDiscoveryResult>___cctor(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  int unaff_w20;
  ulong unaff_x21;
  undefined8 uVar9;
  ulong unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  int *unaff_x28;
  ulong unaff_x29;
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
code_r0x0494b2ec:
  plVar4 = (long *)FUN_03296274(*(undefined8 *)
                                 (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18));
  if (plVar4 == (long *)0x0) {
LAB_0494b434:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar5 = (**(code **)(*plVar4 + 0x1b8))
                    (plVar4,*(undefined8 *)
                             (unaff_x27 + (unaff_x29 & 0xffffffff) * (unaff_x21 & 0xffffffff) + 8));
  do {
    if ((uVar5 & 1) != 0) {
      if ((int)(uint)unaff_x26 < 0) {
        lVar6 = *(long *)(in_stack_00000018 + 0x10);
        if (lVar6 == 0) goto LAB_0494b434;
        if ((uint)in_stack_00000000 < *(uint *)(lVar6 + 0x18)) {
          *(int *)(lVar6 + in_stack_00000000 * 4 + 0x20) =
               *(int *)(unaff_x27 + (unaff_x29 & 0xffffffff) * 0x18 + 4) + 1;
          goto LAB_0494b3f0;
        }
      }
      else {
        lVar6 = *(long *)(in_stack_00000018 + 0x18);
        if (lVar6 == 0) goto LAB_0494b434;
        if ((uint)unaff_x26 < *(uint *)(lVar6 + 0x18)) {
          *(undefined4 *)(lVar6 + (unaff_x26 & 0xffffffff) * 0x18 + 0x24) =
               *(undefined4 *)(unaff_x27 + (unaff_x29 & 0xffffffff) * 0x18 + 4);
LAB_0494b3f0:
          lVar6 = unaff_x27 + (unaff_x29 & 0xffffffff) * 0x18;
          *in_stack_00000008 = *(undefined8 *)(lVar6 + 0x10);
          uVar2 = *(undefined4 *)(in_stack_00000018 + 0x24);
          *unaff_x28 = -1;
          *(undefined8 *)(lVar6 + 8) = 0;
          *(undefined4 *)(lVar6 + 4) = uVar2;
          *(int *)(in_stack_00000018 + 0x24) = (int)unaff_x25;
          *(ulong *)(in_stack_00000018 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(in_stack_00000018 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(in_stack_00000018 + 0x28) + 1);
          return 1;
        }
      }
LAB_0494b438:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    do {
      unaff_x26 = unaff_x25 & 0xffffffff;
      uVar1 = *(uint *)(unaff_x27 + (unaff_x29 & 0xffffffff) * (unaff_x21 & 0xffffffff) + 4);
      unaff_x25 = (ulong)uVar1;
      if ((int)uVar1 < 0) {
        *in_stack_00000008 = 0;
        return 0;
      }
      lVar6 = *(long *)(in_stack_00000018 + 0x18);
      if (lVar6 == 0) goto LAB_0494b434;
      if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_0494b438;
      unaff_x27 = lVar6 + 0x20;
      unaff_x28 = (int *)(unaff_x27 + unaff_x25 * (unaff_x21 & 0xffffffff));
      unaff_x29 = unaff_x25;
    } while (*unaff_x28 != unaff_w20);
    plVar4 = *(long **)(in_stack_00000018 + 0x30);
    if (plVar4 == (long *)0x0) goto code_r0x0494b2ec;
    lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
    uVar9 = *(undefined8 *)(unaff_x27 + unaff_x25 * (unaff_x21 & 0xffffffff) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02f41e9c(lVar6);
    }
    lVar7 = *plVar4;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar6) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0494b330;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_02f421d0(plVar4,lVar6,0);
LAB_0494b330:
    uVar5 = (*(code *)*puVar3)(plVar4,uVar9);
  } while( true );
}


