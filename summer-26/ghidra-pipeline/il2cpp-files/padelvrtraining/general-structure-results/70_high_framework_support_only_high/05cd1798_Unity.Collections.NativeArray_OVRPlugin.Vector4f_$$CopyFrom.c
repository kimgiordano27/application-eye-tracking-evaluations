/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopyFrom
ENTRY_POINT: 05cd1798
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05cd17c8) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopyFrom(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long *plVar7;
  long unaff_x23;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  do {
    if (in_stack_00000010._4_1_ != '\0') {
      thunk_FUN_03d180a8(unaff_x21,0);
    }
    if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d540(unaff_x23);
    }
    if (unaff_x20 == 0) {
      if (*(char *)(in_stack_00000018 + 0x148) != '\0') goto LAB_05cd1944;
      plVar7 = *(long **)(in_stack_00000018 + 0x128);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
    }
    else {
      FUN_05cd1b4c(in_stack_00000018,unaff_x20,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 200));
      plVar7 = *(long **)(in_stack_00000018 + 0x138);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03d8f26c(lVar3);
      }
      lVar4 = *plVar7;
      uVar1 = *(undefined4 *)(unaff_x20 + 0x18);
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
            goto LAB_05cd1868;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03d8f370(plVar7,lVar3,3);
LAB_05cd1868:
      (*(code *)*puVar2)(plVar7,unaff_x20,uVar1,puVar2[1]);
    }
    if (*(char *)(in_stack_00000018 + 0x148) != '\0') {
LAB_05cd1944:
      FUN_03877148();
      return;
    }
    unaff_x21 = *(undefined8 *)(in_stack_00000018 + 0x120);
    in_stack_00000010._4_1_ = '\0';
    FUN_071e78b0(unaff_x21,(long)&stack0x00000010 + 4,0);
    lVar3 = *(long *)(in_stack_00000018 + 0x120);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(int *)(lVar3 + 0x20) < 1) {
      unaff_x23 = 0;
      unaff_x20 = 0;
    }
    else {
      unaff_x20 = FUN_0607266c(lVar3,*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf0));
      unaff_x23 = 0;
    }
  } while( true );
}


