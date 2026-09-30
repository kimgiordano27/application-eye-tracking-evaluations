/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4f>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 013e1254
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_Reset
          (ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int *unaff_x19;
  uint uVar9;
  ulong unaff_x20;
  int unaff_w22;
  long unaff_x24;
  uint uVar10;
  ulong unaff_x26;
  ulong unaff_x27;
  long unaff_x28;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
code_r0x013e1254:
  uVar10 = (uint)unaff_x26;
  uVar9 = (uint)unaff_x20;
  uVar7 = unaff_x26;
  unaff_x26 = unaff_x27;
  do {
    if ((param_1 & 1) != 0) {
      if ((int)uVar9 < 0) {
        lVar4 = *(long *)(unaff_x24 + 0x10);
        if (lVar4 == 0) goto LAB_013e1338;
        if ((uint)in_stack_00000008 < *(uint *)(lVar4 + 0x18)) {
          *(int *)(lVar4 + in_stack_00000008 * 4 + 0x20) =
               *(int *)(unaff_x28 + unaff_x26 * 0x30 + 0x24) + 1;
          goto LAB_013e1304;
        }
      }
      else {
        lVar4 = *(long *)(unaff_x24 + 0x18);
        if (lVar4 == 0) goto LAB_013e1338;
        if (uVar9 < *(uint *)(lVar4 + 0x18)) {
          *(undefined4 *)(lVar4 + (ulong)uVar9 * 0x30 + 0x24) =
               *(undefined4 *)(unaff_x28 + unaff_x26 * 0x30 + 0x24);
LAB_013e1304:
          *unaff_x19 = -1;
          *(undefined4 *)(unaff_x28 + unaff_x26 * 0x30 + 0x24) = *(undefined4 *)(unaff_x24 + 0x24);
          *(uint *)(unaff_x24 + 0x24) = uVar10;
          *(ulong *)(unaff_x24 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x24 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x24 + 0x28) + 1);
          return 1;
        }
      }
LAB_013e133c:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    do {
      uVar10 = *(uint *)(unaff_x28 + unaff_x26 * 0x30 + 0x24);
      unaff_x26 = (ulong)uVar10;
      unaff_x20 = uVar7 & 0xffffffff;
      uVar9 = (uint)uVar7;
      if ((int)uVar10 < 0) {
        return 0;
      }
      unaff_x28 = *(long *)(unaff_x24 + 0x18);
      if (unaff_x28 == 0) goto LAB_013e1338;
      if (*(uint *)(unaff_x28 + 0x18) <= uVar10) goto LAB_013e133c;
      unaff_x19 = (int *)(unaff_x28 + unaff_x26 * 0x30 + 0x20);
      uVar7 = unaff_x26;
    } while (*unaff_x19 != unaff_w22);
    plVar5 = *(long **)(unaff_x24 + 0x30);
    if (plVar5 != (long *)0x0) break;
    plVar5 = (long *)FUN_012274ec(*(undefined8 *)
                                   (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18));
    if (plVar5 == (long *)0x0) goto LAB_013e1338;
    lVar4 = unaff_x28 + unaff_x26 * 0x30;
    param_1 = (**(code **)(*plVar5 + 0x1b8))
                        (plVar5,*(undefined8 *)(lVar4 + 0x28),*(undefined8 *)(lVar4 + 0x30),
                         in_stack_00000020,in_stack_00000028,*(undefined8 *)(*plVar5 + 0x1c0));
  } while( true );
  if (plVar5 == (long *)0x0) {
LAB_013e1338:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar4 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
  lVar6 = unaff_x28 + unaff_x26 * 0x30;
  uVar1 = *(undefined8 *)(lVar6 + 0x28);
  uVar2 = *(undefined8 *)(lVar6 + 0x30);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0103c244(lVar4);
  }
  lVar6 = *plVar5;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar4) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_013e1238;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_0103c348(plVar5,lVar4,0);
LAB_013e1238:
  param_1 = (*(code *)*puVar3)(plVar5,uVar1,uVar2,in_stack_00000020,in_stack_00000028,puVar3[1]);
  unaff_x27 = unaff_x26;
  goto code_r0x013e1254;
}


