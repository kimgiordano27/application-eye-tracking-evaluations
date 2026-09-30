/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Bone>$$get_Current
ENTRY_POINT: 05c045d4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>__get_Current(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  uint unaff_w20;
  ulong unaff_x21;
  undefined8 uVar8;
  long unaff_x24;
  uint unaff_w25;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  int unaff_w29;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    uVar9 = unaff_w25;
    lVar11 = *(long *)(unaff_x19 + 0x18);
    if (lVar11 == 0) goto LAB_05c047f4;
    if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_05c047f8;
    piVar12 = (int *)(lVar11 + (ulong)uVar9 * (unaff_x21 & 0xffffffff) + 0x20);
    uVar10 = (ulong)uVar9;
    if (*piVar12 == unaff_w29) {
      plVar4 = *(long **)(unaff_x19 + 0x30);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)FUN_03e0c914(*(undefined8 *)
                                       (*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x18));
        if (plVar4 == (long *)0x0) goto LAB_05c047f4;
        uVar6 = (**(code **)(*plVar4 + 0x1b8))
                          (plVar4,*(undefined8 *)(lVar11 + uVar10 * unaff_x21 + 0x28),
                           in_stack_00000018,*(undefined8 *)(*plVar4 + 0x1c0));
      }
      else {
        if (plVar4 == (long *)0x0) goto LAB_05c047f4;
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 8);
        uVar8 = *(undefined8 *)(lVar11 + uVar10 * unaff_x21 + 0x28);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03775678(lVar3);
        }
        lVar5 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar3) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_05c046cc;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_0377596c(plVar4,lVar3,0);
LAB_05c046cc:
        uVar6 = (*(code *)*puVar2)(plVar4,uVar8,in_stack_00000018,puVar2[1]);
        unaff_x24 = in_stack_00000010;
      }
      if ((uVar6 & 1) != 0) {
        if ((int)unaff_w20 < 0) {
          lVar3 = *(long *)(unaff_x19 + 0x10);
          if (lVar3 == 0) goto LAB_05c047f4;
          if (*(uint *)(lVar3 + 0x18) <= (uint)in_stack_00000000) goto LAB_05c047f8;
          *(int *)(lVar3 + in_stack_00000000 * 4 + 0x20) =
               *(int *)(lVar11 + uVar10 * 0x38 + 0x24) + 1;
        }
        else {
          lVar3 = *(long *)(unaff_x19 + 0x18);
          if (lVar3 == 0) {
LAB_05c047f4:
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          if (*(uint *)(lVar3 + 0x18) <= unaff_w20) {
LAB_05c047f8:
                    /* WARNING: Subroutine does not return */
            FUN_0373b7bc();
          }
          *(undefined4 *)(lVar3 + (ulong)unaff_w20 * 0x38 + 0x24) =
               *(undefined4 *)(lVar11 + uVar10 * 0x38 + 0x24);
        }
        lVar11 = lVar11 + uVar10 * 0x38;
        uVar15 = *(undefined8 *)(lVar11 + 0x38);
        uVar14 = *(undefined8 *)(lVar11 + 0x30);
        uVar13 = *(undefined8 *)(lVar11 + 0x48);
        uVar8 = *(undefined8 *)(lVar11 + 0x40);
        in_stack_00000008[4] = *(undefined8 *)(lVar11 + 0x50);
        in_stack_00000008[1] = uVar15;
        *in_stack_00000008 = uVar14;
        in_stack_00000008[3] = uVar13;
        in_stack_00000008[2] = uVar8;
        thunk_FUN_037aeb94(in_stack_00000008,0);
        *piVar12 = -1;
        uVar1 = *(undefined4 *)(unaff_x19 + 0x24);
        *(undefined8 *)(lVar11 + 0x38) = 0;
        *(undefined8 *)(lVar11 + 0x30) = 0;
        *(undefined8 *)(lVar11 + 0x48) = 0;
        *(undefined8 *)(lVar11 + 0x40) = 0;
        *(undefined8 *)(lVar11 + 0x50) = 0;
        *(undefined4 *)(lVar11 + 0x24) = uVar1;
        *(uint *)(unaff_x19 + 0x24) = uVar9;
        *(ulong *)(unaff_x19 + 0x28) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
        return 1;
      }
    }
    unaff_w25 = *(uint *)(lVar11 + uVar10 * unaff_x21 + 0x24);
    unaff_w20 = uVar9;
    if ((int)unaff_w25 < 0) {
      in_stack_00000008[4] = 0;
      in_stack_00000008[1] = 0;
      *in_stack_00000008 = 0;
      in_stack_00000008[3] = 0;
      in_stack_00000008[2] = 0;
      return 0;
    }
  } while( true );
}


