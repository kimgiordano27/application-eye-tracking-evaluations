/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 053af1fc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>___ctor(void)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  int in_w8;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x24;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  int unaff_w28;
  int *piVar13;
  long in_stack_00000000;
  undefined4 *in_stack_00000008;
  undefined8 in_stack_00000018;
  
  if (-1 < (int)(in_w8 - 1U)) {
    uVar11 = 0xffffffff;
    uVar10 = in_w8 - 1U;
    do {
      lVar12 = *(long *)(unaff_x19 + 0x18);
      if (lVar12 == 0) goto LAB_053af410;
      if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_053af414;
      piVar13 = (int *)(lVar12 + (ulong)uVar10 * 0x14 + 0x20);
      uVar8 = (ulong)uVar10;
      if (*piVar13 == unaff_w28) {
        plVar4 = *(long **)(unaff_x19 + 0x30);
        if (plVar4 == (long *)0x0) {
          plVar4 = (long *)FUN_040052a8(*(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x18));
          if (plVar4 == (long *)0x0) goto LAB_053af410;
          uVar6 = (**(code **)(*plVar4 + 0x1b8))
                            (plVar4,*(undefined8 *)(lVar12 + uVar8 * 0x14 + 0x28),in_stack_00000018,
                             *(undefined8 *)(*plVar4 + 0x1c0));
        }
        else {
          if (plVar4 == (long *)0x0) goto LAB_053af410;
          lVar3 = *(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 8);
          uVar9 = *(undefined8 *)(lVar12 + uVar8 * 0x14 + 0x28);
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
          if ((int)(uint)uVar11 < 0) {
            lVar3 = *(long *)(unaff_x19 + 0x10);
            if (lVar3 == 0) goto LAB_053af410;
            if (*(uint *)(lVar3 + 0x18) <= (uint)in_stack_00000000) goto LAB_053af414;
            *(int *)(lVar3 + in_stack_00000000 * 4 + 0x20) =
                 *(int *)(lVar12 + uVar8 * 0x14 + 0x24) + 1;
          }
          else {
            lVar3 = *(long *)(unaff_x19 + 0x18);
            if (lVar3 == 0) {
LAB_053af410:
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            if (*(uint *)(lVar3 + 0x18) <= (uint)uVar11) {
LAB_053af414:
                    /* WARNING: Subroutine does not return */
              FUN_02fe94f0();
            }
            *(undefined4 *)(lVar3 + uVar11 * 0x14 + 0x24) =
                 *(undefined4 *)(lVar12 + uVar8 * 0x14 + 0x24);
          }
          lVar12 = lVar12 + uVar8 * 0x14;
          *in_stack_00000008 = *(undefined4 *)(lVar12 + 0x30);
          *piVar13 = -1;
          *(undefined4 *)(lVar12 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
          *(uint *)(unaff_x19 + 0x24) = uVar10;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
      uVar1 = *(uint *)(lVar12 + uVar8 * 0x14 + 0x24);
      uVar11 = (ulong)uVar10;
      uVar10 = uVar1;
    } while (-1 < (int)uVar1);
  }
  *in_stack_00000008 = 0;
  return 0;
}


