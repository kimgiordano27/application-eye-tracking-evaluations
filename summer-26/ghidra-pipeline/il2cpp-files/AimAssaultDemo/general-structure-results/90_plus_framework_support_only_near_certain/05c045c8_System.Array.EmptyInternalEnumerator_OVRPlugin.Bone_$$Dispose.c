/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Bone>$$Dispose
ENTRY_POINT: 05c045c8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>__Dispose(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x24;
  uint unaff_w25;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  int unaff_w29;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000018;
  
  uVar9 = 0xffffffff;
  do {
    lVar12 = *(long *)(unaff_x19 + 0x18);
    if (lVar12 == 0) goto LAB_05c047f4;
    if (*(uint *)(lVar12 + 0x18) <= unaff_w25) goto LAB_05c047f8;
    piVar13 = (int *)(lVar12 + (ulong)unaff_w25 * 0x38 + 0x20);
    uVar11 = (ulong)unaff_w25;
    if (*piVar13 == unaff_w29) {
      plVar5 = *(long **)(unaff_x19 + 0x30);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)FUN_03e0c914(*(undefined8 *)
                                       (*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x18));
        if (plVar5 == (long *)0x0) goto LAB_05c047f4;
        uVar7 = (**(code **)(*plVar5 + 0x1b8))
                          (plVar5,*(undefined8 *)(lVar12 + uVar11 * 0x38 + 0x28),in_stack_00000018,
                           *(undefined8 *)(*plVar5 + 0x1c0));
      }
      else {
        if (plVar5 == (long *)0x0) goto LAB_05c047f4;
        lVar4 = *(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 8);
        uVar10 = *(undefined8 *)(lVar12 + uVar11 * 0x38 + 0x28);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03775678(lVar4);
        }
        lVar6 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar4) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_05c046cc;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_0377596c(plVar5,lVar4,0);
LAB_05c046cc:
        uVar7 = (*(code *)*puVar3)(plVar5,uVar10,in_stack_00000018,puVar3[1]);
      }
      if ((uVar7 & 1) != 0) {
        if ((int)(uint)uVar9 < 0) {
          lVar4 = *(long *)(unaff_x19 + 0x10);
          if (lVar4 == 0) goto LAB_05c047f4;
          if (*(uint *)(lVar4 + 0x18) <= (uint)in_stack_00000000) goto LAB_05c047f8;
          *(int *)(lVar4 + in_stack_00000000 * 4 + 0x20) =
               *(int *)(lVar12 + uVar11 * 0x38 + 0x24) + 1;
        }
        else {
          lVar4 = *(long *)(unaff_x19 + 0x18);
          if (lVar4 == 0) {
LAB_05c047f4:
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          if (*(uint *)(lVar4 + 0x18) <= (uint)uVar9) {
LAB_05c047f8:
                    /* WARNING: Subroutine does not return */
            FUN_0373b7bc();
          }
          *(undefined4 *)(lVar4 + uVar9 * 0x38 + 0x24) =
               *(undefined4 *)(lVar12 + uVar11 * 0x38 + 0x24);
        }
        lVar12 = lVar12 + uVar11 * 0x38;
        uVar16 = *(undefined8 *)(lVar12 + 0x38);
        uVar15 = *(undefined8 *)(lVar12 + 0x30);
        uVar14 = *(undefined8 *)(lVar12 + 0x48);
        uVar10 = *(undefined8 *)(lVar12 + 0x40);
        in_stack_00000008[4] = *(undefined8 *)(lVar12 + 0x50);
        in_stack_00000008[1] = uVar16;
        *in_stack_00000008 = uVar15;
        in_stack_00000008[3] = uVar14;
        in_stack_00000008[2] = uVar10;
        thunk_FUN_037aeb94(in_stack_00000008,0);
        *piVar13 = -1;
        uVar2 = *(undefined4 *)(unaff_x19 + 0x24);
        *(undefined8 *)(lVar12 + 0x38) = 0;
        *(undefined8 *)(lVar12 + 0x30) = 0;
        *(undefined8 *)(lVar12 + 0x48) = 0;
        *(undefined8 *)(lVar12 + 0x40) = 0;
        *(undefined8 *)(lVar12 + 0x50) = 0;
        *(undefined4 *)(lVar12 + 0x24) = uVar2;
        *(uint *)(unaff_x19 + 0x24) = unaff_w25;
        *(ulong *)(unaff_x19 + 0x28) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
        return 1;
      }
    }
    uVar1 = *(uint *)(lVar12 + uVar11 * 0x38 + 0x24);
    uVar9 = (ulong)unaff_w25;
    unaff_w25 = uVar1;
    if ((int)uVar1 < 0) {
      in_stack_00000008[4] = 0;
      in_stack_00000008[1] = 0;
      *in_stack_00000008 = 0;
      in_stack_00000008[3] = 0;
      in_stack_00000008[2] = 0;
      return 0;
    }
  } while( true );
}


