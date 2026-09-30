/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopyFrom
ENTRY_POINT: 05cd1754
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05cd17c8) */
/* WARNING: Removing unreachable block (ram,0x05cd18bc) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopyFrom(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  undefined8 unaff_x21;
  long *plVar8;
  char cStack0000000000000014;
  long in_stack_00000018;
  
  do {
    cStack0000000000000014 = '\0';
                    /* try { // try from 05cd175c to 05dd1773 has its CatchHandler @ 05cd17e0 */
    FUN_071e78b0(unaff_x21,&stack0x00000014,0);
    lVar2 = *(long *)(in_stack_00000018 + 0x120);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
                    /* try { // try from 05cd1774 to 05dd17cf has its CatchHandler @ 05cd164c */
    if (*(int *)(lVar2 + 0x20) < 1) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_0607266c(lVar2,*(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf0));
    }
    if (cStack0000000000000014 != '\0') {
      thunk_FUN_03d180a8(unaff_x21,0);
    }
    if (lVar2 == 0) {
      if (*(char *)(in_stack_00000018 + 0x148) != '\0') goto LAB_05cd1944;
      plVar8 = *(long **)(in_stack_00000018 + 0x128);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
    }
    else {
      FUN_05cd1b4c(in_stack_00000018,lVar2,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 200));
      plVar8 = *(long **)(in_stack_00000018 + 0x138);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb8);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03d8f26c(lVar4);
      }
      lVar5 = *plVar8;
      uVar1 = *(undefined4 *)(lVar2 + 0x18);
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
            goto LAB_05cd1868;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03d8f370(plVar8,lVar4,3);
LAB_05cd1868:
      (*(code *)*puVar3)(plVar8,lVar2,uVar1,puVar3[1]);
    }
    if (*(char *)(in_stack_00000018 + 0x148) != '\0') {
LAB_05cd1944:
      FUN_03877148();
      return;
    }
    unaff_x21 = *(undefined8 *)(in_stack_00000018 + 0x120);
  } while( true );
}


