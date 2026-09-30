/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 053af32c
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


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4s>___ctor(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  ulong unaff_x21;
  undefined8 uVar9;
  long unaff_x24;
  ulong unaff_x25;
  int unaff_w28;
  int *piVar10;
  long in_stack_00000000;
  undefined4 *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    uVar1 = *(uint *)(param_1 + 0x24);
    uVar6 = (ulong)uVar1;
    if ((int)uVar1 < 0) {
      *in_stack_00000008 = 0;
      return 0;
    }
    param_1 = *(long *)(unaff_x19 + 0x18);
    if (param_1 == 0) goto LAB_053af410;
    if (*(uint *)(param_1 + 0x18) <= uVar1) goto LAB_053af414;
    piVar10 = (int *)(param_1 + uVar6 * (unaff_x21 & 0xffffffff) + 0x20);
    if (*piVar10 == unaff_w28) {
      plVar4 = *(long **)(unaff_x19 + 0x30);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)FUN_040052a8(*(undefined8 *)
                                       (*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x18));
        if (plVar4 == (long *)0x0) goto LAB_053af410;
        uVar7 = (**(code **)(*plVar4 + 0x1b8))
                          (plVar4,*(undefined8 *)(param_1 + uVar6 * unaff_x21 + 0x28),
                           in_stack_00000018,*(undefined8 *)(*plVar4 + 0x1c0));
      }
      else {
        if (plVar4 == (long *)0x0) goto LAB_053af410;
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 8);
        uVar9 = *(undefined8 *)(param_1 + uVar6 * unaff_x21 + 0x28);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02feb2c4(lVar3);
        }
        lVar5 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar3) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_053af30c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)FUN_02feb5b8(plVar4,lVar3,0);
LAB_053af30c:
        uVar7 = (*(code *)*puVar2)(plVar4,uVar9,in_stack_00000018,puVar2[1]);
        unaff_x24 = in_stack_00000010;
      }
      if ((uVar7 & 1) != 0) {
        if ((int)(uint)unaff_x25 < 0) {
          lVar3 = *(long *)(unaff_x19 + 0x10);
          if (lVar3 == 0) goto LAB_053af410;
          if (*(uint *)(lVar3 + 0x18) <= (uint)in_stack_00000000) goto LAB_053af414;
          *(int *)(lVar3 + in_stack_00000000 * 4 + 0x20) =
               *(int *)(param_1 + uVar6 * 0x14 + 0x24) + 1;
        }
        else {
          lVar3 = *(long *)(unaff_x19 + 0x18);
          if (lVar3 == 0) {
LAB_053af410:
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          if (*(uint *)(lVar3 + 0x18) <= (uint)unaff_x25) {
LAB_053af414:
                    /* WARNING: Subroutine does not return */
            FUN_02fe94f0();
          }
          *(undefined4 *)(lVar3 + (unaff_x25 & 0xffffffff) * 0x14 + 0x24) =
               *(undefined4 *)(param_1 + uVar6 * 0x14 + 0x24);
        }
        param_1 = param_1 + uVar6 * 0x14;
        *in_stack_00000008 = *(undefined4 *)(param_1 + 0x30);
        *piVar10 = -1;
        *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
        *(uint *)(unaff_x19 + 0x24) = uVar1;
        *(ulong *)(unaff_x19 + 0x28) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
        return 1;
      }
    }
    param_1 = param_1 + uVar6 * unaff_x21;
    unaff_x25 = uVar6;
  } while( true );
}


