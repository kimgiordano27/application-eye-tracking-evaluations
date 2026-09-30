/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$get_Current
ENTRY_POINT: 046daab8
PROGRAM: hellodot-libil2cpp.so
SCORE: 192
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__get_Current
          (long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long in_x9;
  int *piVar7;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 uVar8;
  uint uVar9;
  ulong unaff_x24;
  ulong uVar10;
  uint uVar11;
  ulong unaff_x25;
  long unaff_x26;
  ulong unaff_x27;
  int unaff_w28;
  int *unaff_x29;
  long in_stack_00000000;
  long in_stack_00000008;
  
code_r0x046daab8:
  uVar9 = (uint)unaff_x24;
  uVar11 = (uint)unaff_x25;
  uVar3 = (**(code **)(param_1 + 0x1b8))(param_2,*(undefined8 *)(in_x9 + 0x28));
  uVar10 = unaff_x24;
  unaff_x24 = unaff_x27;
  do {
    if ((uVar3 & 1) != 0) {
      if ((int)uVar11 < 0) {
        lVar6 = *(long *)(unaff_x19 + 0x10);
        if (lVar6 == 0) goto LAB_046dabd8;
        if ((uint)in_stack_00000000 < *(uint *)(lVar6 + 0x18)) {
          *(int *)(lVar6 + in_stack_00000000 * 4 + 0x20) =
               *(int *)(unaff_x26 + unaff_x24 * 0x28 + 0x24) + 1;
          goto LAB_046dab98;
        }
      }
      else {
        lVar6 = *(long *)(unaff_x19 + 0x18);
        if (lVar6 == 0) goto LAB_046dabd8;
        if (uVar11 < *(uint *)(lVar6 + 0x18)) {
          *(undefined4 *)(lVar6 + (ulong)uVar11 * 0x28 + 0x24) =
               *(undefined4 *)(unaff_x26 + unaff_x24 * 0x28 + 0x24);
LAB_046dab98:
          *unaff_x29 = -1;
          uVar1 = *(undefined4 *)(unaff_x19 + 0x24);
          lVar6 = unaff_x26 + unaff_x24 * 0x28;
          *(undefined8 *)(lVar6 + 0x30) = 0;
          *(undefined8 *)(lVar6 + 0x28) = 0;
          *(undefined8 *)(lVar6 + 0x40) = 0;
          *(undefined8 *)(lVar6 + 0x38) = 0;
          *(undefined4 *)(lVar6 + 0x24) = uVar1;
          *(uint *)(unaff_x19 + 0x24) = uVar9;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
System_Array_EmptyInternalEnumerator<OVRRaycaster_RaycastHit>__Dispose:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    do {
      uVar9 = *(uint *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x24);
      unaff_x24 = (ulong)uVar9;
      unaff_x25 = uVar10 & 0xffffffff;
      uVar11 = (uint)uVar10;
      if ((int)uVar9 < 0) {
        return 0;
      }
      unaff_x26 = *(long *)(unaff_x19 + 0x18);
      if (unaff_x26 == 0) goto LAB_046dabd8;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar9)
      goto System_Array_EmptyInternalEnumerator<OVRRaycaster_RaycastHit>__Dispose;
      unaff_x29 = (int *)(unaff_x26 + unaff_x24 * (unaff_x20 & 0xffffffff) + 0x20);
      uVar10 = unaff_x24;
    } while (*unaff_x29 != unaff_w28);
    plVar4 = *(long **)(unaff_x19 + 0x30);
    if (plVar4 == (long *)0x0) break;
    if (plVar4 == (long *)0x0) goto LAB_046dabd8;
    lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 8);
    uVar8 = *(undefined8 *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x28);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02ce0978(lVar6);
    }
    lVar5 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar6) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_046daae0;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar4,lVar6,0);
LAB_046daae0:
    uVar3 = (*(code *)*puVar2)(plVar4,uVar8);
  } while( true );
  param_2 = (long *)FUN_02eb80f0(*(undefined8 *)
                                  (*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 0x18));
  if (param_2 == (long *)0x0) {
LAB_046dabd8:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  param_1 = *param_2;
  in_x9 = unaff_x26 + unaff_x24 * unaff_x20;
  unaff_x27 = unaff_x24;
  goto code_r0x046daab8;
}


