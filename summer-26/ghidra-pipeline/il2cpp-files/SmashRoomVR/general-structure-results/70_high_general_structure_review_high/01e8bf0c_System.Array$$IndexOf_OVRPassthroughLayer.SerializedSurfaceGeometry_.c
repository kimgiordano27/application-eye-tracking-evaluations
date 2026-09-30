/*
FUNCTION_NAME: System.Array$$IndexOf<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 01e8bf0c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__IndexOf<OVRPassthroughLayer_SerializedSurfaceGeometry>(void)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long *plVar6;
  long *unaff_x25;
  uint unaff_w26;
  undefined8 *unaff_x27;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
code_r0x01e8bf0c:
  FUN_02b599e4();
LAB_01e8bf10:
  do {
    do {
      unaff_w26 = unaff_w26 + 1;
      if ((int)*(uint *)(unaff_x22 + 0x18) <= (int)unaff_w26) {
        if (unaff_x21 != 0) {
          in_stack_00000028 = FUN_02b5b460();
          thunk_FUN_01b4f09c(&stack0x00000028);
          lVar5 = *unaff_x25;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar5 = *unaff_x25;
          }
          if (**(long **)(lVar5 + 0xb8) != 0) {
            in_stack_00000038 = in_stack_00000020;
            in_stack_00000030 = in_stack_00000018;
            in_stack_00000040 = in_stack_00000028;
            FUN_025d6c10();
            lVar5 = *unaff_x25;
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar5 = *unaff_x25;
            }
            if (**(long **)(lVar5 + 0xb8) != 0) {
              FUN_025d6b90(&stack0x00000030);
              unaff_x19[2] = in_stack_00000040;
              unaff_x19[1] = in_stack_00000038;
              *unaff_x19 = in_stack_00000030;
              return;
            }
          }
        }
        goto LAB_01e8c00c;
      }
      if (*(uint *)(unaff_x22 + 0x18) <= unaff_w26) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      plVar6 = *(long **)(unaff_x22 + (long)(int)unaff_w26 * 8 + 0x20);
      if (plVar6 == (long *)0x0) goto LAB_01e8c00c;
      uVar2 = (**(code **)(*plVar6 + 0x218))(plVar6,*(undefined8 *)(*plVar6 + 0x220));
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*unaff_x25);
      }
      uVar3 = FUN_02e79bac(uVar2,0);
    } while ((((uVar3 & 1) != 0) ||
             (uVar3 = (**(code **)(*plVar6 + 0x298))(plVar6,*(undefined8 *)(*plVar6 + 0x2a0)),
             (uVar3 & 1) == 0)) ||
            (uVar3 = (**(code **)(*plVar6 + 0x288))(plVar6,*(undefined8 *)(*plVar6 + 0x290)),
            (uVar3 & 1) == 0));
    uVar2 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
    uVar3 = FUN_02ee6388(uVar2,*unaff_x27,0);
  } while ((uVar3 & 1) != 0);
  if (unaff_x21 != 0) {
    lVar5 = *(long *)(unaff_x21 + 0x10);
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (lVar5 != 0) {
      uVar1 = *(uint *)(unaff_x21 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
        puVar4 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
        *puVar4 = plVar6;
        thunk_FUN_01b4f09c(puVar4,plVar6);
        goto LAB_01e8bf10;
      }
      goto code_r0x01e8bf0c;
    }
  }
LAB_01e8c00c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


