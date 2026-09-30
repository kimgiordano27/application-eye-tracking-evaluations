/*
FUNCTION_NAME: System.EmptyArray<OVRLocatable.TrackingSpacePose>$$.cctor
ENTRY_POINT: 05845fe8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 115
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


undefined8
System_EmptyArray<OVRLocatable_TrackingSpacePose>___cctor
          (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x22;
  undefined8 uVar7;
  uint uVar8;
  ulong unaff_x24;
  int *unaff_x25;
  long unaff_x26;
  int unaff_w27;
  ulong unaff_x28;
  uint uVar9;
  ulong unaff_x29;
  long in_stack_00000000;
  long in_stack_00000008;
  
code_r0x05845fe8:
  uVar8 = (uint)unaff_x24;
  uVar9 = (uint)unaff_x29;
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
    param_3 = FUN_0322bef4(param_3);
  }
  lVar4 = *unaff_x22;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == param_3) {
        puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto System_EmptyArray<OVRPlugin_SpaceDiscoveryResult>___cctor;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_0322c1e8(unaff_x22,param_3,0);
System_EmptyArray<OVRPlugin_SpaceDiscoveryResult>___cctor:
  uVar3 = (*(code *)*puVar1)(unaff_x22,uVar7);
  uVar5 = unaff_x24;
  unaff_x24 = unaff_x28;
  do {
    if ((uVar3 & 1) != 0) {
      if ((int)uVar9 < 0) {
        lVar4 = *(long *)(unaff_x19 + 0x10);
        if (lVar4 == 0) goto LAB_0584618c;
        if ((uint)in_stack_00000000 < *(uint *)(lVar4 + 0x18)) {
          *(int *)(lVar4 + in_stack_00000000 * 4 + 0x20) =
               *(int *)(unaff_x26 + unaff_x24 * 0xe0 + 0x24) + 1;
          goto LAB_05846148;
        }
      }
      else {
        lVar4 = *(long *)(unaff_x19 + 0x18);
        if (lVar4 == 0) goto LAB_0584618c;
        if (uVar9 < *(uint *)(lVar4 + 0x18)) {
          *(undefined4 *)(lVar4 + (ulong)uVar9 * 0xe0 + 0x24) =
               *(undefined4 *)(unaff_x26 + unaff_x24 * 0xe0 + 0x24);
LAB_05846148:
          *unaff_x25 = -1;
          lVar4 = unaff_x26 + unaff_x24 * 0xe0;
          *(undefined4 *)(lVar4 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
          memset((void *)(lVar4 + 0x28),0,0xd8);
          *(uint *)(unaff_x19 + 0x24) = uVar8;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
LAB_05846190:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    do {
      uVar8 = *(uint *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x24);
      unaff_x24 = (ulong)uVar8;
      unaff_x29 = uVar5 & 0xffffffff;
      uVar9 = (uint)uVar5;
      if ((int)uVar8 < 0) {
        return 0;
      }
      unaff_x26 = *(long *)(unaff_x19 + 0x18);
      if (unaff_x26 == 0) goto LAB_0584618c;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar8) goto LAB_05846190;
      unaff_x25 = (int *)(unaff_x26 + unaff_x24 * (unaff_x20 & 0xffffffff) + 0x20);
      uVar5 = unaff_x24;
    } while (*unaff_x25 != unaff_w27);
    unaff_x22 = *(long **)(unaff_x19 + 0x30);
    if (unaff_x22 != (long *)0x0) break;
    plVar2 = (long *)FUN_0386ce64(*(undefined8 *)
                                   (*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 0x18));
    if (plVar2 == (long *)0x0) goto LAB_0584618c;
    uVar3 = (**(code **)(*plVar2 + 0x1b8))
                      (plVar2,*(undefined8 *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x28));
  } while( true );
  if (unaff_x22 == (long *)0x0) {
LAB_0584618c:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  param_3 = *(long *)(*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 8);
  param_1 = unaff_x26 + unaff_x24 * unaff_x20;
  unaff_x28 = unaff_x24;
  goto code_r0x05845fe8;
}


