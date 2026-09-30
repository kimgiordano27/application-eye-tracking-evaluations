/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector3f>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 013e1124
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


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector3f>__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  bool in_NG;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long in_x10;
  int *piVar9;
  int *piVar10;
  ulong uVar11;
  int unaff_w23;
  long unaff_x24;
  long unaff_x25;
  uint unaff_w26;
  ulong uVar12;
  long lVar13;
  long lStack0000000000000008;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if (!in_NG) {
    uVar11 = 0xffffffff;
    lStack0000000000000008 = in_x10;
    do {
      lVar13 = *(long *)(unaff_x24 + 0x18);
      if (lVar13 == 0) goto LAB_013e1338;
      if (*(uint *)(lVar13 + 0x18) <= unaff_w26) goto LAB_013e133c;
      piVar10 = (int *)(lVar13 + (ulong)unaff_w26 * 0x30 + 0x20);
      uVar12 = (ulong)unaff_w26;
      if (*piVar10 == unaff_w23) {
        plVar6 = *(long **)(unaff_x24 + 0x30);
        if (plVar6 == (long *)0x0) {
          plVar6 = (long *)FUN_012274ec(*(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x18));
          if (plVar6 == (long *)0x0) goto LAB_013e1338;
          lVar5 = lVar13 + uVar12 * 0x30;
          uVar8 = (**(code **)(*plVar6 + 0x1b8))
                            (plVar6,*(undefined8 *)(lVar5 + 0x28),*(undefined8 *)(lVar5 + 0x30),
                             in_stack_00000020,in_stack_00000028,*(undefined8 *)(*plVar6 + 0x1c0));
        }
        else {
          if (plVar6 == (long *)0x0) goto LAB_013e1338;
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 8);
          lVar7 = lVar13 + uVar12 * 0x30;
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
          uVar8 = (*(code *)*puVar4)(plVar6,uVar1,uVar2,in_stack_00000020,in_stack_00000028,
                                     puVar4[1]);
        }
        if ((uVar8 & 1) != 0) {
          if ((int)(uint)uVar11 < 0) {
            lVar5 = *(long *)(unaff_x24 + 0x10);
            if (lVar5 == 0) goto LAB_013e1338;
            if (*(uint *)(lVar5 + 0x18) <= (uint)lStack0000000000000008) goto LAB_013e133c;
            *(int *)(lVar5 + lStack0000000000000008 * 4 + 0x20) =
                 *(int *)(lVar13 + uVar12 * 0x30 + 0x24) + 1;
          }
          else {
            lVar5 = *(long *)(unaff_x24 + 0x18);
            if (lVar5 == 0) {
LAB_013e1338:
                    /* WARNING: Subroutine does not return */
              FUN_00fdc534();
            }
            if (*(uint *)(lVar5 + 0x18) <= (uint)uVar11) {
LAB_013e133c:
                    /* WARNING: Subroutine does not return */
              FUN_00fdc53c();
            }
            *(undefined4 *)(lVar5 + uVar11 * 0x30 + 0x24) =
                 *(undefined4 *)(lVar13 + uVar12 * 0x30 + 0x24);
          }
          *piVar10 = -1;
          *(undefined4 *)(lVar13 + uVar12 * 0x30 + 0x24) = *(undefined4 *)(unaff_x24 + 0x24);
          *(uint *)(unaff_x24 + 0x24) = unaff_w26;
          *(ulong *)(unaff_x24 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x24 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x24 + 0x28) + 1);
          return 1;
        }
      }
      uVar3 = *(uint *)(lVar13 + uVar12 * 0x30 + 0x24);
      uVar11 = (ulong)unaff_w26;
      unaff_w26 = uVar3;
    } while (-1 < (int)uVar3);
  }
  return 0;
}


