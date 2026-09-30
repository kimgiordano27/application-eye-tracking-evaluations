/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.Vector3f>$$.cctor
ENTRY_POINT: 05846288
PROGRAM: vandalizer-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_EmptyArray<OVRPlugin_Vector3f>___cctor(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  uint in_w9;
  ulong uVar6;
  long in_x10;
  int *piVar7;
  long unaff_x19;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  int unaff_w29;
  void *in_stack_00000010;
  long in_stack_00000018;
  
  if (in_w9 <= (uint)in_x10) {
LAB_058464dc:
                    /* WARNING: Subroutine does not return */
    FUN_031f2398();
  }
  uVar10 = *(int *)(param_1 + in_x10 * 4 + 0x20) - 1;
  if (-1 < (int)uVar10) {
    uVar11 = 0xffffffff;
    do {
      lVar12 = *(long *)(unaff_x19 + 0x18);
      if (lVar12 == 0) goto LAB_058464d8;
      if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_058464dc;
      piVar13 = (int *)(lVar12 + (ulong)uVar10 * 0xe0 + 0x20);
      uVar8 = (ulong)uVar10;
      if (*piVar13 == unaff_w29) {
        plVar4 = *(long **)(unaff_x19 + 0x30);
        if (plVar4 == (long *)0x0) {
          plVar4 = (long *)FUN_0386ce64(*(undefined8 *)
                                         (*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) +
                                         0x18));
          if (plVar4 == (long *)0x0) goto LAB_058464d8;
          uVar6 = (**(code **)(*plVar4 + 0x1b8))
                            (plVar4,*(undefined8 *)(lVar12 + uVar8 * 0xe0 + 0x28));
        }
        else {
          if (plVar4 == (long *)0x0) goto LAB_058464d8;
          lVar3 = *(long *)(*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 8);
          uVar9 = *(undefined8 *)(lVar12 + uVar8 * 0xe0 + 0x28);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0322bef4(lVar3);
          }
          lVar5 = *plVar4;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == lVar3) {
                puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_058463ac;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar2 = (undefined8 *)FUN_0322c1e8(plVar4,lVar3,0);
LAB_058463ac:
          uVar6 = (*(code *)*puVar2)(plVar4,uVar9);
        }
        if ((uVar6 & 1) != 0) {
          if ((int)(uint)uVar11 < 0) {
            lVar3 = *(long *)(unaff_x19 + 0x10);
            if (lVar3 == 0) goto LAB_058464d8;
            if (*(uint *)(lVar3 + 0x18) <= (uint)in_x10) goto LAB_058464dc;
            *(int *)(lVar3 + in_x10 * 4 + 0x20) = *(int *)(lVar12 + uVar8 * 0xe0 + 0x24) + 1;
          }
          else {
            lVar3 = *(long *)(unaff_x19 + 0x18);
            if (lVar3 == 0) {
LAB_058464d8:
                    /* WARNING: Subroutine does not return */
              FUN_031f2390();
            }
            if (*(uint *)(lVar3 + 0x18) <= (uint)uVar11) goto LAB_058464dc;
            *(undefined4 *)(lVar3 + uVar11 * 0xe0 + 0x24) =
                 *(undefined4 *)(lVar12 + uVar8 * 0xe0 + 0x24);
          }
          lVar12 = lVar12 + uVar8 * 0xe0;
          memmove(in_stack_00000010,(void *)(lVar12 + 0x30),0xd0);
          thunk_FUN_0329bf60(in_stack_00000010,0);
          *piVar13 = -1;
          *(undefined4 *)(lVar12 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
          memset((void *)(lVar12 + 0x28),0,0xd8);
          *(uint *)(unaff_x19 + 0x24) = uVar10;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
      uVar1 = *(uint *)(lVar12 + uVar8 * 0xe0 + 0x24);
      uVar11 = (ulong)uVar10;
      uVar10 = uVar1;
    } while (-1 < (int)uVar1);
  }
  memset(in_stack_00000010,0,0xd0);
  return 0;
}


