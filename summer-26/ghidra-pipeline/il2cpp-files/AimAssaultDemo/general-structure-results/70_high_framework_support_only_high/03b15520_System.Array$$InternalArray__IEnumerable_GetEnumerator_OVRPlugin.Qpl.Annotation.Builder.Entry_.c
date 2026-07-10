/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 03b15520
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03b157bc) */

void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>
               (long *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  long in_stack_00000030;
  
  do {
    thunk_FUN_037aeb94(param_1,param_2);
    uVar5 = FUN_060c205c(*(undefined8 *)PTR_DAT_07d95a68,unaff_x23,0);
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_0755df88(uVar5);
LAB_03b15300:
    while( true ) {
      uVar1 = FUN_05d64e98(&stack0x00000020,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x30));
      lVar4 = in_stack_00000030;
      if ((uVar1 & 1) == 0) {
        FUN_05d64e94(&stack0x00000020,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x38));
        return;
      }
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar1 = FUN_075aa744(lVar4,0,0);
      if ((uVar1 & 1) == 0) break;
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03775678(lVar7);
      }
      lVar7 = thunk_FUN_037787d0(lVar4,lVar7);
      if (lVar7 == 0) break;
      FUN_0442a0dc();
    }
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar1 = FUN_075aa744();
    if ((uVar1 & 1) == 0) {
      plVar2 = (long *)RootMotion_FinalIK_Finger___ctor(*unaff_x26,4);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      if ((lVar4 != 0) &&
         (lVar7 = thunk_FUN_037787d0(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar7 == 0)) {
        uVar5 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar5,0);
      }
      if ((int)plVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      plVar2[4] = lVar4;
      thunk_FUN_037aeb94(plVar2 + 4,lVar4);
      uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
      if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      plVar6 = (long *)FUN_062519f8(uVar5,0);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
      if ((lVar7 != 0) &&
         (lVar3 = thunk_FUN_037787d0(lVar7,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
        uVar5 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar5,0);
      }
      if (*(uint *)(plVar2 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      plVar2[5] = lVar7;
      thunk_FUN_037aeb94(plVar2 + 5,lVar7);
      if ((lVar4 != 0) &&
         (lVar7 = thunk_FUN_037787d0(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar7 == 0)) {
        uVar5 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar5,0);
      }
      if (*(uint *)(plVar2 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      plVar2[6] = lVar4;
      thunk_FUN_037aeb94(plVar2 + 6,lVar4);
      plVar6 = (long *)FUN_062519f8(*(undefined8 *)
                                     (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60),0);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar4 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
      if ((lVar4 != 0) &&
         (lVar7 = thunk_FUN_037787d0(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar7 == 0)) {
        uVar5 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar5,0);
      }
      if (*(uint *)(plVar2 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      plVar2[7] = lVar4;
      thunk_FUN_037aeb94(plVar2 + 7,lVar4);
      uVar5 = FUN_060c205c(*unaff_x28,plVar2,0);
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_0755de80(uVar5,0);
      goto LAB_03b15300;
    }
    unaff_x23 = (long *)RootMotion_FinalIK_Finger___ctor(*unaff_x26,5);
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if ((lVar4 != 0) &&
       (lVar7 = thunk_FUN_037787d0(lVar4,*(undefined8 *)(*unaff_x23 + 0x40)), lVar7 == 0)) {
      uVar5 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar5,0);
    }
    if ((int)unaff_x23[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    unaff_x23[4] = lVar4;
    thunk_FUN_037aeb94(unaff_x23 + 4,lVar4);
    uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
    if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    plVar2 = (long *)FUN_062519f8(uVar5,0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar7 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
    if ((lVar7 != 0) &&
       (lVar3 = thunk_FUN_037787d0(lVar7,*(undefined8 *)(*unaff_x23 + 0x40)), lVar3 == 0)) {
      uVar5 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar5,0);
    }
    if (*(uint *)(unaff_x23 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    unaff_x23[5] = lVar7;
    thunk_FUN_037aeb94(unaff_x23 + 5,lVar7);
    if ((unaff_x20 != 0) && (lVar7 = thunk_FUN_037787d0(), lVar7 == 0)) {
      uVar5 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar5,0);
    }
    if (*(uint *)(unaff_x23 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    unaff_x23[6] = unaff_x20;
    thunk_FUN_037aeb94();
    if ((lVar4 != 0) &&
       (lVar7 = thunk_FUN_037787d0(lVar4,*(undefined8 *)(*unaff_x23 + 0x40)), lVar7 == 0)) {
      uVar5 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar5,0);
    }
    if (*(uint *)(unaff_x23 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    unaff_x23[7] = lVar4;
    thunk_FUN_037aeb94(unaff_x23 + 7,lVar4);
    plVar2 = (long *)FUN_062519f8(*(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60),0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    param_2 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
    if ((param_2 != 0) &&
       (lVar4 = thunk_FUN_037787d0(param_2,*(undefined8 *)(*unaff_x23 + 0x40)), lVar4 == 0)) {
      uVar5 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar5,0);
    }
    if (*(uint *)(unaff_x23 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    param_1 = unaff_x23 + 8;
    *param_1 = param_2;
  } while( true );
}


