/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.AppPerfFrameStats>
ENTRY_POINT: 03b0ca9c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_AppPerfFrameStats>
               (undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  void *unaff_x22;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_037756d4();
    param_1 = *(undefined8 **)(unaff_x19 + 0x38);
  }
  plVar1 = (long *)FUN_03b0d078(param_2,*param_1);
  lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678(lVar4);
  }
  if (plVar1 == (long *)0x0) {
    memcpy(&stack0x00000000,unaff_x22,0x50);
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
     (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4)) {
                    /* WARNING: Subroutine does not return */
    FUN_0373bb54(plVar1);
  }
  memcpy(&stack0x00000000,unaff_x22,0x50);
  memcpy(plVar1 + 2,&stack0x00000000,0x50);
  thunk_FUN_037aeb94(plVar1 + 3,0);
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678(lVar4);
  }
  lVar5 = *plVar1;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
        goto LAB_03b0cbb0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_0377596c(plVar1,lVar4,2);
LAB_03b0cbb0:
  uVar3 = (*(code *)*puVar2)(plVar1,puVar2[1]);
  lVar4 = *param_3;
  if (lVar4 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x38) + 0x20) + 0x135) & 1) ==
        0) {
      FUN_03775678();
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 != 0) {
      FUN_075a643c(lVar4,uVar3,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


