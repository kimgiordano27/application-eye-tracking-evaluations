/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4f>$$.cctor
ENTRY_POINT: 053af204
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>___cctor(void)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x24;
  uint unaff_w25;
  ulong uVar10;
  long lVar11;
  int unaff_w28;
  int *piVar12;
  long in_stack_00000000;
  undefined4 *in_stack_00000008;
  undefined8 in_stack_00000018;
  
  uVar10 = 0xffffffff;
  do {
    lVar11 = *(long *)(unaff_x19 + 0x18);
    if (lVar11 == 0) goto LAB_053af410;
    if (*(uint *)(lVar11 + 0x18) <= unaff_w25) goto LAB_053af414;
    piVar12 = (int *)(lVar11 + (ulong)unaff_w25 * 0x14 + 0x20);
    uVar8 = (ulong)unaff_w25;
    if (*piVar12 == unaff_w28) {
      plVar4 = *(long **)(unaff_x19 + 0x30);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)FUN_040052a8(*(undefined8 *)
                                       (*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x18));
        if (plVar4 == (long *)0x0) goto LAB_053af410;
        uVar6 = (**(code **)(*plVar4 + 0x1b8))
                          (plVar4,*(undefined8 *)(lVar11 + uVar8 * 0x14 + 0x28),in_stack_00000018,
                           *(undefined8 *)(*plVar4 + 0x1c0));
      }
      else {
        if (plVar4 == (long *)0x0) goto LAB_053af410;
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 8);
        uVar9 = *(undefined8 *)(lVar11 + uVar8 * 0x14 + 0x28);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02feb2c4(lVar3);
        }
        lVar5 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar3) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_053af30c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_02feb5b8(plVar4,lVar3,0);
LAB_053af30c:
        uVar6 = (*(code *)*puVar2)(plVar4,uVar9,in_stack_00000018,puVar2[1]);
      }
      if ((uVar6 & 1) != 0) {
        if ((int)(uint)uVar10 < 0) {
          lVar3 = *(long *)(unaff_x19 + 0x10);
          if (lVar3 == 0) goto LAB_053af410;
          if (*(uint *)(lVar3 + 0x18) <= (uint)in_stack_00000000) goto LAB_053af414;
          *(int *)(lVar3 + in_stack_00000000 * 4 + 0x20) =
               *(int *)(lVar11 + uVar8 * 0x14 + 0x24) + 1;
        }
        else {
          lVar3 = *(long *)(unaff_x19 + 0x18);
          if (lVar3 == 0) {
LAB_053af410:
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          if (*(uint *)(lVar3 + 0x18) <= (uint)uVar10) {
LAB_053af414:
                    /* WARNING: Subroutine does not return */
            FUN_02fe94f0();
          }
          *(undefined4 *)(lVar3 + uVar10 * 0x14 + 0x24) =
               *(undefined4 *)(lVar11 + uVar8 * 0x14 + 0x24);
        }
        lVar11 = lVar11 + uVar8 * 0x14;
        *in_stack_00000008 = *(undefined4 *)(lVar11 + 0x30);
        *piVar12 = -1;
        *(undefined4 *)(lVar11 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
        *(uint *)(unaff_x19 + 0x24) = unaff_w25;
        *(ulong *)(unaff_x19 + 0x28) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
        return 1;
      }
    }
    uVar1 = *(uint *)(lVar11 + uVar8 * 0x14 + 0x24);
    uVar10 = (ulong)unaff_w25;
    unaff_w25 = uVar1;
    if ((int)uVar1 < 0) {
      *in_stack_00000008 = 0;
      return 0;
    }
  } while( true );
}


