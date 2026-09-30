/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 04d407b4
PROGRAM: Untangled-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceDiscoveryResult>___ctor(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long lVar9;
  ulong uVar10;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (param_1 != 0) {
    FUN_04d3ee40();
    return;
  }
  lVar3 = thunk_FUN_02ef170c();
  if (lVar3 == 0) {
    plVar5 = (long *)thunk_FUN_02ef170c();
    if (plVar5 == (long *)0x0) {
      FUN_05623574();
    }
    uVar2 = *(uint *)(unaff_x21 + 0x20);
    if (0 < (int)uVar2) {
      lVar3 = *(long *)(unaff_x21 + 0x18);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar10 = 0;
      puVar4 = (undefined8 *)(lVar3 + 0x38);
      do {
        if (*(uint *)(lVar3 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        if (-1 < *(int *)(puVar4 + -3)) {
          in_stack_00000020 = 0;
          in_stack_00000028 = 0;
          in_stack_00000030 = 0;
          FUN_03e5dd78(&stack0x00000020,puVar4[-2],puVar4[-1],*puVar4,
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x150));
          lVar9 = thunk_FUN_02ef1438(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          if ((lVar9 != 0) &&
             (lVar6 = thunk_FUN_02ef170c(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
            uVar7 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
            FUN_02f07f94(uVar7,0);
          }
          if (*(uint *)(plVar5 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          plVar5[(long)(int)unaff_w20 + 4] = lVar9;
          thunk_FUN_02f411dc(plVar5 + (long)(int)unaff_w20 + 4,lVar9);
          unaff_w20 = unaff_w20 + 1;
        }
        uVar10 = uVar10 + 1;
        puVar4 = puVar4 + 4;
      } while (uVar2 != uVar10);
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
      lVar6 = lVar9 + 0x38;
      do {
        if (*(uint *)(lVar9 + 0x18) <= uVar10) {
LAB_04d409c0:
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        if (-1 < *(int *)(lVar6 + -0x18)) {
          in_stack_00000028 = *(undefined8 *)(lVar6 + -8);
          in_stack_00000020 = *(undefined8 *)(lVar6 + -0x10);
          thunk_FUN_02ef1438(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70),
                             &stack0x00000020);
          if ((*(uint *)(lVar9 + 0x18) <= uVar10) ||
             (FUN_055cd8c4(), *(uint *)(lVar3 + 0x18) <= unaff_w20)) goto LAB_04d409c0;
          lVar1 = lVar3 + (long)(int)unaff_w20 * 0x10;
          puVar4 = (undefined8 *)(lVar1 + 0x20);
          *(undefined8 *)(lVar1 + 0x28) = 0;
          *puVar4 = 0;
          unaff_w20 = unaff_w20 + 1;
          thunk_FUN_02f411dc(puVar4,0);
          iVar8 = *(int *)(unaff_x21 + 0x20);
        }
        uVar10 = uVar10 + 1;
        lVar6 = lVar6 + 0x20;
      } while ((long)uVar10 < (long)iVar8);
    }
  }
  return;
}


