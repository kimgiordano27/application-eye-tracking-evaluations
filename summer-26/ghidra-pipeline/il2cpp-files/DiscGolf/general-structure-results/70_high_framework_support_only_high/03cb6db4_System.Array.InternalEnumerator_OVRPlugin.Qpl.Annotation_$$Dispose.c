/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation>$$Dispose
ENTRY_POINT: 03cb6db4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation>__Dispose
              (int *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  lVar5 = *(long *)(param_3 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02dcfd18(lVar5);
  }
  plVar2 = (long *)FUN_03cc1668(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x80));
  if (0 < *param_1) {
    if (plVar2 == (long *)0x0) {
LAB_03cb6f08:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    in_stack_00000068 = *(undefined8 *)(param_1 + 4);
    in_stack_00000060 = *(undefined8 *)(param_1 + 2);
    in_stack_00000078 = *(undefined8 *)(param_1 + 8);
    in_stack_00000070 = *(undefined8 *)(param_1 + 6);
    in_stack_00000080 = *(undefined8 *)(param_1 + 10);
    in_stack_00000038 = param_2[1];
    in_stack_00000030 = *param_2;
    in_stack_00000048 = param_2[3];
    in_stack_00000040 = param_2[2];
    in_stack_00000050 = param_2[4];
    uVar3 = (**(code **)(*plVar2 + 0x1b8))
                      (plVar2,&stack0x00000060,&stack0x00000030,*(undefined8 *)(*plVar2 + 0x1c0));
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    if ((*(long *)(param_1 + 0xc) != 0) && (0 < *param_1 + -1)) {
      uVar3 = 0;
      lVar5 = 0x20;
      do {
        lVar6 = *(long *)(param_1 + 0xc);
        if (lVar6 == 0) goto LAB_03cb6f08;
        if (*(uint *)(lVar6 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        puVar1 = (undefined8 *)(lVar6 + lVar5);
        in_stack_00000038 = param_2[1];
        in_stack_00000030 = *param_2;
        in_stack_00000048 = param_2[3];
        in_stack_00000040 = param_2[2];
        in_stack_00000068 = puVar1[1];
        in_stack_00000060 = *puVar1;
        in_stack_00000078 = puVar1[3];
        in_stack_00000070 = puVar1[2];
        in_stack_00000080 = puVar1[4];
        in_stack_00000050 = param_2[4];
        uVar4 = (**(code **)(*plVar2 + 0x1b8))
                          (plVar2,&stack0x00000060,&stack0x00000030,*(undefined8 *)(*plVar2 + 0x1c0)
                          );
        if ((uVar4 & 1) != 0) {
          return (int)uVar3 + 1;
        }
        uVar3 = uVar3 + 1;
        lVar5 = lVar5 + 0x28;
      } while ((long)uVar3 < (long)(*param_1 + -1));
    }
  }
  return -1;
}


