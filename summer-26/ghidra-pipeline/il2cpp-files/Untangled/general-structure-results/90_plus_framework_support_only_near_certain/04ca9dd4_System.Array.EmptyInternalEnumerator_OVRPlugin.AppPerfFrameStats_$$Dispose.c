/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$Dispose
ENTRY_POINT: 04ca9dd4
PROGRAM: Untangled-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>__Dispose(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint in_w8;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  ulong unaff_x21;
  undefined8 uVar8;
  ulong unaff_x25;
  ulong uVar9;
  long lVar10;
  int unaff_w28;
  int *piVar11;
  undefined8 uVar12;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  
  do {
    uVar9 = (ulong)in_w8;
    if ((int)in_w8 < 0) {
      *in_stack_00000010 = 0;
      in_stack_00000010[1] = 0;
      in_stack_00000010[2] = 0;
      return 0;
    }
    lVar10 = *(long *)(unaff_x19 + 0x18);
    if (lVar10 == 0) goto LAB_04ca9ec4;
    if (*(uint *)(lVar10 + 0x18) <= in_w8) goto LAB_04ca9ec8;
    piVar11 = (int *)(lVar10 + (ulong)in_w8 * (unaff_x21 & 0xffffffff) + 0x20);
    if (*piVar11 == unaff_w28) {
      plVar4 = *(long **)(unaff_x19 + 0x30);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)FUN_03378db8(*(undefined8 *)
                                       (*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 0x18
                                       ));
        if (plVar4 == (long *)0x0) goto LAB_04ca9ec4;
        uVar6 = (**(code **)(*plVar4 + 0x1b8))
                          (plVar4,*(undefined8 *)(lVar10 + uVar9 * unaff_x21 + 0x28));
      }
      else {
        if (plVar4 == (long *)0x0) goto LAB_04ca9ec4;
        lVar3 = *(long *)(*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 8);
        uVar8 = *(undefined8 *)(lVar10 + uVar9 * unaff_x21 + 0x28);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02eea768(lVar3);
        }
        lVar5 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar3) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_04ca9db4;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_02eea86c(plVar4,lVar3,0);
LAB_04ca9db4:
        uVar6 = (*(code *)*puVar2)(plVar4,uVar8);
      }
      if ((uVar6 & 1) != 0) {
        if ((int)(uint)unaff_x25 < 0) {
          lVar3 = *(long *)(unaff_x19 + 0x10);
          if (lVar3 == 0) goto LAB_04ca9ec4;
          if (*(uint *)(lVar3 + 0x18) <= (uint)in_stack_00000008) goto LAB_04ca9ec8;
          *(int *)(lVar3 + in_stack_00000008 * 4 + 0x20) =
               *(int *)(lVar10 + uVar9 * 0x28 + 0x24) + 1;
        }
        else {
          lVar3 = *(long *)(unaff_x19 + 0x18);
          if (lVar3 == 0) {
LAB_04ca9ec4:
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          if (*(uint *)(lVar3 + 0x18) <= (uint)unaff_x25) {
LAB_04ca9ec8:
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          *(undefined4 *)(lVar3 + (unaff_x25 & 0xffffffff) * 0x28 + 0x24) =
               *(undefined4 *)(lVar10 + uVar9 * 0x28 + 0x24);
        }
        lVar10 = lVar10 + uVar9 * 0x28;
        uVar12 = *(undefined8 *)(lVar10 + 0x38);
        uVar8 = *(undefined8 *)(lVar10 + 0x30);
        in_stack_00000010[2] = *(undefined8 *)(lVar10 + 0x40);
        in_stack_00000010[1] = uVar12;
        *in_stack_00000010 = uVar8;
        *piVar11 = -1;
        uVar1 = *(undefined4 *)(unaff_x19 + 0x24);
        *(undefined8 *)(lVar10 + 0x28) = 0;
        *(undefined4 *)(lVar10 + 0x24) = uVar1;
        *(uint *)(unaff_x19 + 0x24) = in_w8;
        *(ulong *)(unaff_x19 + 0x28) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
        return 1;
      }
    }
    in_w8 = *(uint *)(lVar10 + uVar9 * unaff_x21 + 0x24);
    unaff_x25 = uVar9;
  } while( true );
}


