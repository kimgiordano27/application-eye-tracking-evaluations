/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector2f>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02b19254
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__System_Collections_IEnumerator_get_Current
          (long param_1,long *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 uVar8;
  uint uVar9;
  ulong unaff_x24;
  ulong uVar10;
  int *unaff_x25;
  long unaff_x26;
  int unaff_w27;
  ulong unaff_x28;
  uint uVar11;
  ulong unaff_x29;
  long in_stack_00000000;
  long in_stack_00000008;
  
code_r0x02b19254:
  uVar9 = (uint)unaff_x24;
  uVar11 = (uint)unaff_x29;
  uVar3 = (**(code **)(param_1 + 0x1b8))(param_2,param_3);
  uVar10 = unaff_x24;
  unaff_x24 = unaff_x28;
  do {
    if ((uVar3 & 1) != 0) {
      if ((int)uVar11 < 0) {
        lVar6 = *(long *)(unaff_x19 + 0x10);
        if (lVar6 == 0) goto LAB_02b19368;
        if ((uint)in_stack_00000000 < *(uint *)(lVar6 + 0x18)) {
          *(int *)(lVar6 + in_stack_00000000 * 4 + 0x20) =
               *(int *)(unaff_x26 + unaff_x24 * 0x18 + 0x24) + 1;
          goto System_Array_EmptyInternalEnumerator<OVRPlugin_Vector3f>__Dispose;
        }
      }
      else {
        lVar6 = *(long *)(unaff_x19 + 0x18);
        if (lVar6 == 0) goto LAB_02b19368;
        if (uVar11 < *(uint *)(lVar6 + 0x18)) {
          *(undefined4 *)(lVar6 + (ulong)uVar11 * 0x18 + 0x24) =
               *(undefined4 *)(unaff_x26 + unaff_x24 * 0x18 + 0x24);
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector3f>__Dispose:
          *unaff_x25 = -1;
          uVar1 = *(undefined4 *)(unaff_x19 + 0x24);
          lVar6 = unaff_x26 + unaff_x24 * 0x18;
          *(undefined8 *)(lVar6 + 0x28) = 0;
          *(undefined4 *)(lVar6 + 0x24) = uVar1;
          *(uint *)(unaff_x19 + 0x24) = uVar9;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
LAB_02b1936c:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    do {
      uVar9 = *(uint *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x24);
      unaff_x24 = (ulong)uVar9;
      unaff_x29 = uVar10 & 0xffffffff;
      uVar11 = (uint)uVar10;
      if ((int)uVar9 < 0) {
        return 0;
      }
      unaff_x26 = *(long *)(unaff_x19 + 0x18);
      if (unaff_x26 == 0) goto LAB_02b19368;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar9) goto LAB_02b1936c;
      unaff_x25 = (int *)(unaff_x26 + unaff_x24 * (unaff_x20 & 0xffffffff) + 0x20);
      uVar10 = unaff_x24;
    } while (*unaff_x25 != unaff_w27);
    plVar4 = *(long **)(unaff_x19 + 0x30);
    if (plVar4 == (long *)0x0) break;
    if (plVar4 == (long *)0x0) goto LAB_02b19368;
    lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 8);
    uVar8 = *(undefined8 *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x28);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01dde7f8(lVar6);
    }
    lVar5 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar6) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02b19278;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01dde8fc(plVar4,lVar6,0);
LAB_02b19278:
    uVar3 = (*(code *)*puVar2)(plVar4,uVar8);
  } while( true );
  param_2 = (long *)FUN_0201725c(*(undefined8 *)
                                  (*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 0x18));
  if (param_2 == (long *)0x0) {
LAB_02b19368:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  param_1 = *param_2;
  param_3 = *(undefined8 *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x28);
  unaff_x28 = unaff_x24;
  goto code_r0x02b19254;
}


