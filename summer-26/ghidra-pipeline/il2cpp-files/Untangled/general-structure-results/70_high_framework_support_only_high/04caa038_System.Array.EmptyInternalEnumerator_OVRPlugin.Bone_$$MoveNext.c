/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Bone>$$MoveNext
ENTRY_POINT: 04caa038
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>__MoveNext(void)

{
  bool in_ZR;
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
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
  
  if (!in_ZR) {
    FUN_05622cbc(7,0);
  }
  iVar1 = thunk_FUN_02ebb478();
  if (iVar1 != 0) {
    FUN_05622cbc(6,0);
  }
  uVar2 = FUN_0561a77c();
  if (uVar2 < unaff_w19) {
    FUN_0562353c(0);
  }
  iVar1 = FUN_0561a77c();
  if ((int)(iVar1 - unaff_w19) < *(int *)(unaff_x21 + 0x20) - *(int *)(unaff_x21 + 0x28)) {
    FUN_05622cbc(5,0);
  }
  lVar8 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    FUN_02eea768(lVar8);
  }
  lVar8 = thunk_FUN_02ef170c();
  if (lVar8 == 0) {
    lVar8 = thunk_FUN_02ef170c();
    if (lVar8 == 0) {
      plVar4 = (long *)thunk_FUN_02ef170c();
      if (plVar4 == (long *)0x0) {
        FUN_05623574();
      }
      uVar2 = *(uint *)(unaff_x21 + 0x20);
      if (0 < (int)uVar2) {
        lVar8 = *(long *)(unaff_x21 + 0x18);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar10 = 0;
        lVar9 = lVar8 + 0x30;
        do {
          if (*(uint *)(lVar8 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          if (-1 < *(int *)(lVar9 + -0x10)) {
            in_stack_00000048 = 0;
            in_stack_00000040 = 0;
            in_stack_00000058 = 0;
            in_stack_00000050 = 0;
            FUN_03e59ea0(&stack0x00000040,*(undefined8 *)(lVar9 + -8));
            lVar5 = thunk_FUN_02ef1438(*(undefined8 *)
                                        (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa8));
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
              uVar7 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
              FUN_02f07f94(uVar7,0);
            }
            if (*(uint *)(plVar4 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
            plVar4[(long)(int)unaff_w19 + 4] = lVar5;
            thunk_FUN_02f411dc(plVar4 + (long)(int)unaff_w19 + 4,lVar5);
            unaff_w19 = unaff_w19 + 1;
          }
          uVar10 = uVar10 + 1;
          lVar9 = lVar9 + 0x28;
        } while (uVar2 != uVar10);
      }
    }
    else {
      iVar1 = *(int *)(unaff_x21 + 0x20);
      if (0 < iVar1) {
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
            if (*(uint *)(lVar8 + 0x18) <= unaff_w19) goto LAB_04caa2f0;
            lVar5 = lVar8 + (long)(int)unaff_w19 * 0x10;
            puVar3 = (undefined8 *)(lVar5 + 0x20);
            *(undefined8 *)(lVar5 + 0x28) = 0;
            *puVar3 = 0;
            unaff_w19 = unaff_w19 + 1;
            thunk_FUN_02f411dc(puVar3,0);
            iVar1 = *(int *)(unaff_x21 + 0x20);
          }
          uVar10 = uVar10 + 1;
          puVar11 = puVar11 + 5;
        } while ((long)uVar10 < (long)iVar1);
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


