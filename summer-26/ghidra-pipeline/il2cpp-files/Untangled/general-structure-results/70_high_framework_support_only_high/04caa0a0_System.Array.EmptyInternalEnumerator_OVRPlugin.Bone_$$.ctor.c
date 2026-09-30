/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Bone>$$.ctor
ENTRY_POINT: 04caa0a0
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>___ctor(void)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  int in_w8;
  int iVar8;
  int in_w9;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x24;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000068;
  
  if (in_w9 < in_w8) {
    FUN_05622cbc(5,0);
  }
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    FUN_02eea768(lVar7);
  }
  lVar7 = thunk_FUN_02ef170c();
  if (lVar7 == 0) {
    lVar7 = thunk_FUN_02ef170c();
    if (lVar7 == 0) {
      plVar3 = (long *)thunk_FUN_02ef170c();
      if (plVar3 == (long *)0x0) {
        FUN_05623574();
      }
      uVar1 = *(uint *)(unaff_x21 + 0x20);
      if (0 < (int)uVar1) {
        lVar7 = *(long *)(unaff_x21 + 0x18);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar10 = 0;
        lVar9 = lVar7 + 0x30;
        do {
          if (*(uint *)(lVar7 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          if (-1 < *(int *)(lVar9 + -0x10)) {
            in_stack_00000048 = 0;
            in_stack_00000040 = 0;
            in_stack_00000058 = 0;
            in_stack_00000050 = 0;
            FUN_03e59ea0(&stack0x00000040,*(undefined8 *)(lVar9 + -8));
            lVar4 = thunk_FUN_02ef1438(*(undefined8 *)
                                        (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa8));
            if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            if ((lVar4 != 0) &&
               (lVar5 = thunk_FUN_02ef170c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
              uVar6 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
              FUN_02f07f94(uVar6,0);
            }
            if (*(uint *)(plVar3 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
            plVar3[(long)(int)unaff_w19 + 4] = lVar4;
            thunk_FUN_02f411dc(plVar3 + (long)(int)unaff_w19 + 4,lVar4);
            unaff_w19 = unaff_w19 + 1;
          }
          uVar10 = uVar10 + 1;
          lVar9 = lVar9 + 0x28;
        } while (uVar1 != uVar10);
      }
    }
    else {
      iVar8 = *(int *)(unaff_x21 + 0x20);
      if (0 < iVar8) {
        lVar9 = *(long *)(unaff_x21 + 0x18);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar10 = 0;
        puVar11 = (undefined8 *)(lVar9 + 0x30);
        do {
          if (*(uint *)(lVar9 + 0x18) <= uVar10) {
LAB_04caa2f0:
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          if (-1 < *(int *)(puVar11 + -2)) {
            in_stack_00000050 = puVar11[2];
            in_stack_00000048 = puVar11[1];
            in_stack_00000040 = *puVar11;
            thunk_FUN_02ef1438(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x78)
                               ,&stack0x00000040);
            FUN_055cd8c4();
            if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_04caa2f0;
            lVar4 = lVar7 + (long)(int)unaff_w19 * 0x10;
            puVar2 = (undefined8 *)(lVar4 + 0x20);
            *(undefined8 *)(lVar4 + 0x28) = 0;
            *puVar2 = 0;
            unaff_w19 = unaff_w19 + 1;
            thunk_FUN_02f411dc(puVar2,0);
            iVar8 = *(int *)(unaff_x21 + 0x20);
          }
          uVar10 = uVar10 + 1;
          puVar11 = puVar11 + 5;
        } while ((long)uVar10 < (long)iVar8);
      }
    }
  }
  else {
    FUN_04ca85a0();
  }
  if (*(long *)(unaff_x24 + 0x28) != in_stack_00000068) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


