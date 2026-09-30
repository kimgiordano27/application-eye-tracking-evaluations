/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.SpaceDiscoveryResult>$$.cctor
ENTRY_POINT: 05846090
PROGRAM: vandalizer-libil2cpp.so
SCORE: 115
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_EmptyArray<OVRPlugin_SpaceDiscoveryResult>___cctor(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x22;
  undefined8 unaff_x23;
  uint uVar7;
  ulong unaff_x24;
  int *unaff_x25;
  long unaff_x26;
  int unaff_w27;
  ulong unaff_x28;
  uint uVar8;
  ulong unaff_x29;
  long in_stack_00000000;
  long in_stack_00000008;
  
code_r0x05846090:
  uVar7 = (uint)unaff_x24;
  uVar8 = (uint)unaff_x29;
  uVar2 = (*(code *)*param_1)(unaff_x22,unaff_x23);
  uVar5 = unaff_x24;
  unaff_x24 = unaff_x28;
  if ((uVar2 & 1) == 0) {
    while( true ) {
      do {
        uVar7 = *(uint *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x24);
        unaff_x24 = (ulong)uVar7;
        unaff_x29 = uVar5 & 0xffffffff;
        uVar8 = (uint)uVar5;
        if ((int)uVar7 < 0) {
          return 0;
        }
        unaff_x26 = *(long *)(unaff_x19 + 0x18);
        if (unaff_x26 == 0) goto LAB_0584618c;
        if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_05846190;
        unaff_x25 = (int *)(unaff_x26 + unaff_x24 * (unaff_x20 & 0xffffffff) + 0x20);
        uVar5 = unaff_x24;
      } while (*unaff_x25 != unaff_w27);
      unaff_x22 = *(long **)(unaff_x19 + 0x30);
      if (unaff_x22 != (long *)0x0) break;
      plVar1 = (long *)FUN_0386ce64(*(undefined8 *)
                                     (*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 0x18))
      ;
      if (plVar1 == (long *)0x0) goto LAB_0584618c;
      uVar2 = (**(code **)(*plVar1 + 0x1b8))
                        (plVar1,*(undefined8 *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x28));
      if ((uVar2 & 1) != 0) goto LAB_058460e4;
    }
    if (unaff_x22 == (long *)0x0) goto LAB_0584618c;
    lVar3 = *(long *)(*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 8);
    unaff_x23 = *(undefined8 *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x28);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0322bef4(lVar3);
    }
    lVar4 = *unaff_x22;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    unaff_x28 = unaff_x24;
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          param_1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto code_r0x05846090;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    param_1 = (undefined8 *)FUN_0322c1e8(unaff_x22,lVar3,0);
    goto code_r0x05846090;
  }
LAB_058460e4:
  if ((int)uVar8 < 0) {
    lVar3 = *(long *)(unaff_x19 + 0x10);
    if (lVar3 != 0) {
      if (*(uint *)(lVar3 + 0x18) <= (uint)in_stack_00000000) goto LAB_05846190;
      *(int *)(lVar3 + in_stack_00000000 * 4 + 0x20) =
           *(int *)(unaff_x26 + unaff_x24 * 0xe0 + 0x24) + 1;
      goto LAB_05846148;
    }
  }
  else {
    lVar3 = *(long *)(unaff_x19 + 0x18);
    if (lVar3 != 0) {
      if (*(uint *)(lVar3 + 0x18) <= uVar8) {
LAB_05846190:
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      *(undefined4 *)(lVar3 + (ulong)uVar8 * 0xe0 + 0x24) =
           *(undefined4 *)(unaff_x26 + unaff_x24 * 0xe0 + 0x24);
LAB_05846148:
      *unaff_x25 = -1;
      lVar3 = unaff_x26 + unaff_x24 * 0xe0;
      *(undefined4 *)(lVar3 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
      memset((void *)(lVar3 + 0x28),0,0xd8);
      *(uint *)(unaff_x19 + 0x24) = uVar7;
      *(ulong *)(unaff_x19 + 0x28) =
           CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                    (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
      return 1;
    }
  }
LAB_0584618c:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


