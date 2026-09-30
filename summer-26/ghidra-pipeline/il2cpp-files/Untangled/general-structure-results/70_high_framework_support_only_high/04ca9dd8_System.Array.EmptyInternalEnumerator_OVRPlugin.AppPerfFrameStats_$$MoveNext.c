/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$MoveNext
ENTRY_POINT: 04ca9dd8
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>__MoveNext(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint in_w8;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  uint unaff_w20;
  ulong unaff_x21;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  int unaff_w28;
  int *piVar12;
  undefined8 uVar13;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  
  do {
    uVar4 = in_w8;
    uVar10 = (ulong)uVar4;
    if ((int)uVar4 < 0) {
      *in_stack_00000010 = 0;
      in_stack_00000010[1] = 0;
      in_stack_00000010[2] = 0;
      return 0;
    }
    lVar11 = *(long *)(unaff_x19 + 0x18);
    if (lVar11 == 0) goto LAB_04ca9ec4;
    if (*(uint *)(lVar11 + 0x18) <= uVar4) goto LAB_04ca9ec8;
    piVar12 = (int *)(lVar11 + (ulong)uVar4 * (unaff_x21 & 0xffffffff) + 0x20);
    if (*piVar12 == unaff_w28) {
      plVar5 = *(long **)(unaff_x19 + 0x30);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)FUN_03378db8(*(undefined8 *)
                                       (*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 0x18
                                       ));
        if (plVar5 == (long *)0x0) goto LAB_04ca9ec4;
        uVar7 = (**(code **)(*plVar5 + 0x1b8))
                          (plVar5,*(undefined8 *)(lVar11 + uVar10 * unaff_x21 + 0x28));
      }
      else {
        if (plVar5 == (long *)0x0) goto LAB_04ca9ec4;
        lVar3 = *(long *)(*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 8);
        uVar9 = *(undefined8 *)(lVar11 + uVar10 * unaff_x21 + 0x28);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02eea768(lVar3);
        }
        lVar6 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar3) {
              puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_04ca9db4;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)FUN_02eea86c(plVar5,lVar3,0);
LAB_04ca9db4:
        uVar7 = (*(code *)*puVar2)(plVar5,uVar9);
      }
      if ((uVar7 & 1) != 0) {
        if ((int)unaff_w20 < 0) {
          lVar3 = *(long *)(unaff_x19 + 0x10);
          if (lVar3 == 0) goto LAB_04ca9ec4;
          if (*(uint *)(lVar3 + 0x18) <= (uint)in_stack_00000008) goto LAB_04ca9ec8;
          *(int *)(lVar3 + in_stack_00000008 * 4 + 0x20) =
               *(int *)(lVar11 + uVar10 * 0x28 + 0x24) + 1;
        }
        else {
          lVar3 = *(long *)(unaff_x19 + 0x18);
          if (lVar3 == 0) {
LAB_04ca9ec4:
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          if (*(uint *)(lVar3 + 0x18) <= unaff_w20) {
LAB_04ca9ec8:
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          *(undefined4 *)(lVar3 + (ulong)unaff_w20 * 0x28 + 0x24) =
               *(undefined4 *)(lVar11 + uVar10 * 0x28 + 0x24);
        }
        lVar11 = lVar11 + uVar10 * 0x28;
        uVar13 = *(undefined8 *)(lVar11 + 0x38);
        uVar9 = *(undefined8 *)(lVar11 + 0x30);
        in_stack_00000010[2] = *(undefined8 *)(lVar11 + 0x40);
        in_stack_00000010[1] = uVar13;
        *in_stack_00000010 = uVar9;
        *piVar12 = -1;
        uVar1 = *(undefined4 *)(unaff_x19 + 0x24);
        *(undefined8 *)(lVar11 + 0x28) = 0;
        *(undefined4 *)(lVar11 + 0x24) = uVar1;
        *(uint *)(unaff_x19 + 0x24) = uVar4;
        *(ulong *)(unaff_x19 + 0x28) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
        return 1;
      }
    }
    in_w8 = *(uint *)(lVar11 + uVar10 * unaff_x21 + 0x24);
    unaff_w20 = uVar4;
  } while( true );
}


