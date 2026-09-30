/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$get_Current
ENTRY_POINT: 046491ac
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 155
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__get_Current
               (undefined8 param_1,int param_2,void *param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *__dest;
  ulong __n;
  long *plVar8;
  long unaff_x29;
  
  lVar2 = tpidr_el0;
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(lVar2 + 0x28);
  *(void **)(unaff_x29 + -0x10) = param_3;
  lVar7 = *(long *)(param_4 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03775678(lVar7);
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0xfc);
  __dest = &stack0x00000000 + -(__n + 0xf & 0x1fffffff0);
  if (-1 < param_2) {
    lVar7 = *(long *)(param_4 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03775678();
    }
    piVar3 = (int *)thunk_FUN_03799158(param_1,*(undefined8 *)(**(long **)(lVar7 + 0xc0) + 0x80));
    if (param_2 < *piVar3) {
      lVar7 = *(long *)(param_4 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03775678();
      }
      if (param_2 != 0) {
        puVar4 = (undefined8 *)
                 thunk_FUN_03799158(param_1,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) + 0x40);
        lVar7 = *(long *)(param_4 + 0x20);
        plVar8 = (long *)*puVar4;
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_03775678();
        }
        if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0x28)) {
          param_3 = (void *)(unaff_x29 + -0x10);
        }
        memcpy(__dest,param_3,__n);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar1 = param_2 - 1;
        if (uVar1 < *(uint *)(plVar8 + 3)) {
          memcpy((void *)((long)plVar8 + (ulong)*(uint *)(*plVar8 + 0x104) * (long)(int)uVar1 + 0x20
                         ),__dest,__n);
          lVar7 = *(long *)(param_4 + 0x20);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03775678();
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03775678();
          }
          if (uVar1 < *(uint *)(plVar8 + 3)) {
            FUN_0373b4c8(lVar7,(long)plVar8 +
                               (ulong)*(uint *)(*plVar8 + 0x104) * (long)(int)uVar1 + 0x20,__dest);
            goto LAB_04649378;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      if (-1 < *(int *)((*(long **)(lVar7 + 0xc0))[2] + 0x28)) {
        param_3 = (void *)(unaff_x29 + -0x10);
      }
      memcpy(__dest,param_3,__n);
      lVar7 = *(long *)(param_4 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03775678();
      }
      FUN_0373b540(param_1,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) + 0x20,__dest,__n);
LAB_04649378:
      if (*(long *)(lVar2 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  thunk_FUN_037a15ac(PTR_DAT_07d8eed0);
  uVar5 = thunk_FUN_037788cc();
  uVar6 = thunk_FUN_037a15ac(PTR_DAT_07d868a0);
  FUN_061a99e4(uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar5,param_4);
}


