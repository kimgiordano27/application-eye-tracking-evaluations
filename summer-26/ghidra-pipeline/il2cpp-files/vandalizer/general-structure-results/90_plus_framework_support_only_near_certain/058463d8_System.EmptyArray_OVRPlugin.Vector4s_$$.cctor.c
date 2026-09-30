/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.Vector4s>$$.cctor
ENTRY_POINT: 058463d8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_EmptyArray<OVRPlugin_Vector4s>___cctor(void)

{
  undefined8 *puVar1;
  long lVar2;
  uint in_w8;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  ulong uVar7;
  ulong unaff_x21;
  undefined8 uVar8;
  uint unaff_w25;
  uint uVar9;
  uint unaff_w26;
  long lVar10;
  int *piVar11;
  int unaff_w29;
  long in_stack_00000008;
  void *in_stack_00000010;
  long in_stack_00000018;
  
  do {
    uVar9 = unaff_w25;
    if ((int)in_w8 < 0) {
      memset(in_stack_00000010,0,0xd0);
      return 0;
    }
    lVar10 = *(long *)(unaff_x19 + 0x18);
    if (lVar10 == 0) goto LAB_058464d8;
    if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_058464dc;
    piVar11 = (int *)(lVar10 + (ulong)uVar9 * (unaff_x21 & 0xffffffff) + 0x20);
    uVar7 = (ulong)uVar9;
    if (*piVar11 == unaff_w29) {
      plVar3 = *(long **)(unaff_x19 + 0x30);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)FUN_0386ce64(*(undefined8 *)
                                       (*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 0x18
                                       ));
        if (plVar3 == (long *)0x0) goto LAB_058464d8;
        uVar5 = (**(code **)(*plVar3 + 0x1b8))
                          (plVar3,*(undefined8 *)(lVar10 + uVar7 * unaff_x21 + 0x28));
      }
      else {
        if (plVar3 == (long *)0x0) goto LAB_058464d8;
        lVar2 = *(long *)(*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 8);
        uVar8 = *(undefined8 *)(lVar10 + uVar7 * unaff_x21 + 0x28);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0322bef4(lVar2);
        }
        lVar4 = *plVar3;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == lVar2) {
              puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_058463ac;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar1 = (undefined8 *)FUN_0322c1e8(plVar3,lVar2,0);
LAB_058463ac:
        uVar5 = (*(code *)*puVar1)(plVar3,uVar8);
      }
      if ((uVar5 & 1) != 0) {
        if ((int)unaff_w26 < 0) {
          lVar2 = *(long *)(unaff_x19 + 0x10);
          if (lVar2 == 0) goto LAB_058464d8;
          if (*(uint *)(lVar2 + 0x18) <= (uint)in_stack_00000008) goto LAB_058464dc;
          *(int *)(lVar2 + in_stack_00000008 * 4 + 0x20) =
               *(int *)(lVar10 + uVar7 * 0xe0 + 0x24) + 1;
        }
        else {
          lVar2 = *(long *)(unaff_x19 + 0x18);
          if (lVar2 == 0) {
LAB_058464d8:
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          if (*(uint *)(lVar2 + 0x18) <= unaff_w26) {
LAB_058464dc:
                    /* WARNING: Subroutine does not return */
            FUN_031f2398();
          }
          *(undefined4 *)(lVar2 + (ulong)unaff_w26 * 0xe0 + 0x24) =
               *(undefined4 *)(lVar10 + uVar7 * 0xe0 + 0x24);
        }
        lVar10 = lVar10 + uVar7 * 0xe0;
        memmove(in_stack_00000010,(void *)(lVar10 + 0x30),0xd0);
        thunk_FUN_0329bf60(in_stack_00000010,0);
        *piVar11 = -1;
        *(undefined4 *)(lVar10 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
        memset((void *)(lVar10 + 0x28),0,0xd8);
        *(uint *)(unaff_x19 + 0x24) = uVar9;
        *(ulong *)(unaff_x19 + 0x28) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
        return 1;
      }
    }
    in_w8 = *(uint *)(lVar10 + uVar7 * unaff_x21 + 0x24);
    unaff_w25 = in_w8;
    unaff_w26 = uVar9;
  } while( true );
}


