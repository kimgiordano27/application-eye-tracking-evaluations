/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector3f>$$.cctor
ENTRY_POINT: 013e1130
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Vector3f>___cctor(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long in_x10;
  int *piVar8;
  int *piVar9;
  uint unaff_w20;
  int unaff_w23;
  long unaff_x24;
  long unaff_x25;
  uint unaff_w26;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lStack0000000000000008;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  lStack0000000000000008 = in_x10;
  do {
    uVar10 = unaff_w26;
    lVar12 = *(long *)(unaff_x24 + 0x18);
    if (lVar12 == 0) goto LAB_013e1338;
    if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_013e133c;
    piVar9 = (int *)(lVar12 + (ulong)uVar10 * 0x30 + 0x20);
    uVar11 = (ulong)uVar10;
    if (*piVar9 == unaff_w23) {
      plVar5 = *(long **)(unaff_x24 + 0x30);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)FUN_012274ec(*(undefined8 *)
                                       (*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x18));
        if (plVar5 == (long *)0x0) goto LAB_013e1338;
        lVar4 = lVar12 + uVar11 * 0x30;
        uVar7 = (**(code **)(*plVar5 + 0x1b8))
                          (plVar5,*(undefined8 *)(lVar4 + 0x28),*(undefined8 *)(lVar4 + 0x30),
                           in_stack_00000020,in_stack_00000028,*(undefined8 *)(*plVar5 + 0x1c0));
      }
      else {
        if (plVar5 == (long *)0x0) goto LAB_013e1338;
        lVar4 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 8);
        lVar6 = lVar12 + uVar11 * 0x30;
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
        uVar7 = (*(code *)*puVar3)(plVar5,uVar1,uVar2,in_stack_00000020,in_stack_00000028,puVar3[1])
        ;
      }
      if ((uVar7 & 1) != 0) {
        if ((int)unaff_w20 < 0) {
          lVar4 = *(long *)(unaff_x24 + 0x10);
          if (lVar4 == 0) goto LAB_013e1338;
          if (*(uint *)(lVar4 + 0x18) <= (uint)lStack0000000000000008) goto LAB_013e133c;
          *(int *)(lVar4 + lStack0000000000000008 * 4 + 0x20) =
               *(int *)(lVar12 + uVar11 * 0x30 + 0x24) + 1;
        }
        else {
          lVar4 = *(long *)(unaff_x24 + 0x18);
          if (lVar4 == 0) {
LAB_013e1338:
                    /* WARNING: Subroutine does not return */
            FUN_00fdc534();
          }
          if (*(uint *)(lVar4 + 0x18) <= unaff_w20) {
LAB_013e133c:
                    /* WARNING: Subroutine does not return */
            FUN_00fdc53c();
          }
          *(undefined4 *)(lVar4 + (ulong)unaff_w20 * 0x30 + 0x24) =
               *(undefined4 *)(lVar12 + uVar11 * 0x30 + 0x24);
        }
        *piVar9 = -1;
        *(undefined4 *)(lVar12 + uVar11 * 0x30 + 0x24) = *(undefined4 *)(unaff_x24 + 0x24);
        *(uint *)(unaff_x24 + 0x24) = uVar10;
        *(ulong *)(unaff_x24 + 0x28) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x24 + 0x28) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x24 + 0x28) + 1);
        return 1;
      }
    }
    unaff_w26 = *(uint *)(lVar12 + uVar11 * 0x30 + 0x24);
    unaff_w20 = uVar10;
    if ((int)unaff_w26 < 0) {
      return 0;
    }
  } while( true );
}


