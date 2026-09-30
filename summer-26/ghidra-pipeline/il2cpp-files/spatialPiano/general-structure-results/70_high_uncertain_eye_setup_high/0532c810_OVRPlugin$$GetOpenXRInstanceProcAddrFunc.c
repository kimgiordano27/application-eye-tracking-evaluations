/*
FUNCTION_NAME: OVRPlugin$$GetOpenXRInstanceProcAddrFunc
ENTRY_POINT: 0532c810
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetOpenXRInstanceProcAddrFunc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *in_x10;
  int *piVar7;
  undefined4 in_stack_00000028;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)(in_x10[4] + 2) * 0x10 + 0x138);
      goto LAB_0532c838;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar3 = (undefined8 *)FUN_02f421d0();
LAB_0532c838:
  plVar4 = (long *)(*(code *)*puVar3)();
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)OVR_OpenVR_EVRApplicationTransitionState_TypeInfo) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0532c8a0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_02f421d0(plVar4,*(long *)OVR_OpenVR_EVRApplicationTransitionState_TypeInfo,0);
LAB_0532c8a0:
    plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
    if (plVar4 != (long *)0x0) {
      lVar5 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)System_Tuple<bool,_bool,_bool,_bool>_TypeInfo) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_0532c90c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_02f421d0(plVar4,*(long *)System_Tuple<bool,_bool,_bool,_bool>_TypeInfo,1);
LAB_0532c90c:
      puVar2 = System_Tuple<Task,_Task,_TaskContinuation>_TypeInfo;
      puVar1 = System_Tuple<Pose,_float,_float>_TypeInfo;
      (*(code *)*puVar3)(&stack0x00000018,plVar4,puVar3[1]);
      while (uVar6 = FUN_04aeea48(&stack0x00000018,*(undefined8 *)puVar2), (uVar6 & 1) != 0) {
        FUN_05235550();
        FUN_052355c8();
      }
      FUN_04aeea44(&stack0x00000018,*(undefined8 *)puVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


