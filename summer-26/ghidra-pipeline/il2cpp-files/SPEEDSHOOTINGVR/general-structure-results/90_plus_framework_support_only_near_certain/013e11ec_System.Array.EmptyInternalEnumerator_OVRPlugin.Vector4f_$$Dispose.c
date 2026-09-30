/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 013e11ec
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>__Dispose(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  int unaff_w23;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  ulong uVar12;
  ulong unaff_x27;
  long unaff_x28;
  ulong unaff_x29;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  do {
    while( true ) {
      do {
        uVar12 = unaff_x26;
        uVar3 = *(uint *)(unaff_x28 + unaff_x27 * unaff_x29 + 0x24);
        unaff_x27 = (ulong)uVar3;
        if ((int)uVar3 < 0) {
          return 0;
        }
        unaff_x28 = *(long *)(unaff_x24 + 0x18);
        if (unaff_x28 == 0) goto LAB_013e1338;
        if (*(uint *)(unaff_x28 + 0x18) <= uVar3) goto LAB_013e133c;
        piVar10 = (int *)(unaff_x28 + unaff_x27 * (unaff_x29 & 0xffffffff) + 0x20);
        unaff_x26 = unaff_x27;
      } while (*piVar10 != unaff_w23);
      plVar6 = *(long **)(unaff_x24 + 0x30);
      if (plVar6 == (long *)0x0) break;
      if (plVar6 == (long *)0x0) goto LAB_013e1338;
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 8);
      lVar7 = unaff_x28 + unaff_x27 * unaff_x29;
      uVar1 = *(undefined8 *)(lVar7 + 0x28);
      uVar2 = *(undefined8 *)(lVar7 + 0x30);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0103c244(lVar5);
      }
      lVar7 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar5) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_013e1238;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_0103c348(plVar6,lVar5,0);
LAB_013e1238:
      uVar8 = (*(code *)*puVar4)(plVar6,uVar1,uVar2,in_stack_00000020,in_stack_00000028,puVar4[1]);
      unaff_x29 = 0x30;
      unaff_x25 = in_stack_00000010;
      if ((uVar8 & 1) != 0) goto LAB_013e12a0;
    }
    plVar6 = (long *)FUN_012274ec(*(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x18));
    if (plVar6 == (long *)0x0) goto LAB_013e1338;
    lVar5 = unaff_x28 + unaff_x27 * unaff_x29;
    uVar8 = (**(code **)(*plVar6 + 0x1b8))
                      (plVar6,*(undefined8 *)(lVar5 + 0x28),*(undefined8 *)(lVar5 + 0x30),
                       in_stack_00000020,in_stack_00000028,*(undefined8 *)(*plVar6 + 0x1c0));
  } while ((uVar8 & 1) == 0);
LAB_013e12a0:
  uVar11 = (uint)uVar12;
  if ((int)uVar11 < 0) {
    lVar5 = *(long *)(unaff_x24 + 0x10);
    if (lVar5 == 0) goto LAB_013e1338;
    if (*(uint *)(lVar5 + 0x18) <= (uint)in_stack_00000008) goto LAB_013e133c;
    *(int *)(lVar5 + in_stack_00000008 * 4 + 0x20) =
         *(int *)(unaff_x28 + unaff_x27 * 0x30 + 0x24) + 1;
  }
  else {
    lVar5 = *(long *)(unaff_x24 + 0x18);
    if (lVar5 == 0) {
LAB_013e1338:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar11) {
LAB_013e133c:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    *(undefined4 *)(lVar5 + (uVar12 & 0xffffffff) * 0x30 + 0x24) =
         *(undefined4 *)(unaff_x28 + unaff_x27 * 0x30 + 0x24);
  }
  *piVar10 = -1;
  *(undefined4 *)(unaff_x28 + unaff_x27 * 0x30 + 0x24) = *(undefined4 *)(unaff_x24 + 0x24);
  *(uint *)(unaff_x24 + 0x24) = uVar3;
  *(ulong *)(unaff_x24 + 0x28) =
       CONCAT44((int)((ulong)*(undefined8 *)(unaff_x24 + 0x28) >> 0x20) + 1,
                (int)*(undefined8 *)(unaff_x24 + 0x28) + 1);
  return 1;
}


