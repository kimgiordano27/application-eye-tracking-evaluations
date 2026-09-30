/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$MoveNext
ENTRY_POINT: 05830bb0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 157
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_5;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__MoveNext(undefined8 param_1)

{
  void *__src;
  long *plVar1;
  int *piVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long in_x9;
  long unaff_x19;
  void *unaff_x20;
  size_t unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 unaff_x26;
  long lVar6;
  undefined8 *puVar7;
  long unaff_x27;
  ulong uVar8;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x20) = unaff_x26;
  *(undefined8 *)(unaff_x29 + -0x18) = param_1;
  (**(code **)(*(long *)(in_x9 + 0x1c0) + 0x10))(*(undefined8 *)(*(long *)(in_x9 + 0x1c0) + 8));
  if (*(char *)(unaff_x29 + -0xc) == '\0') {
                    /* try { // try from 05830bdc to 05930c43 has its CatchHandler @ 05830ca8 */
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    plVar1 = (long *)thunk_FUN_040d6b00();
    if (*plVar1 == 0) {
      plVar1 = (long *)0xffffffff;
    }
    else {
      *(long *)(unaff_x29 + -0x30) = unaff_x27;
      uVar8 = 0;
      while( true ) {
        if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_040b1acc();
        }
        piVar2 = (int *)thunk_FUN_040d6b00();
        if ((long)(*piVar2 + -1) <= (long)uVar8) {
          plVar1 = (long *)0xffffffff;
          goto FUN_05830d98;
        }
        if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_040b1acc();
        }
        plVar1 = (long *)thunk_FUN_040d6b00();
        plVar4 = (long *)*plVar1;
        if (plVar4 == (long *)0x0) {
          if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          goto System_Array_InternalEnumerator<OVRPlugin_Quatf>__get_Current;
        }
        if (*(uint *)(plVar4 + 3) <= uVar8) {
          if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          goto System_Array_InternalEnumerator<OVRPlugin_Quatf>__get_Current;
        }
        memcpy(unaff_x23,(void *)((long)plVar4 + uVar8 * *(uint *)(*plVar4 + 0x104) + 0x20),
               unaff_x22);
        lVar6 = *(long *)(unaff_x19 + 0x20);
        lVar3 = lVar6;
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_040b1acc(lVar6);
          lVar3 = *(long *)(unaff_x19 + 0x20);
        }
        __src = unaff_x20;
        if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x28)) {
          __src = (void *)(unaff_x29 + -0x28);
        }
        memcpy(unaff_x24,__src,unaff_x22);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_040b1acc(lVar3);
        }
        puVar7 = unaff_x23;
        if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x28)) {
          puVar7 = (undefined8 *)*unaff_x23;
        }
        lVar3 = *(long *)(unaff_x19 + 0x20);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_040b1acc();
        }
        puVar5 = unaff_x24;
        if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x28)) {
          puVar5 = (undefined8 *)*unaff_x24;
        }
        lVar3 = *unaff_x25;
        *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
        *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
        (**(code **)(*(long *)(lVar3 + 0x1c0) + 0x10))
                  (*(undefined8 *)(*(long *)(lVar3 + 0x1c0) + 8));
        if (*(char *)(unaff_x29 + -0xc) != '\0') break;
        uVar8 = uVar8 + 1;
      }
      plVar1 = (long *)(ulong)((int)uVar8 + 1);
FUN_05830d98:
      unaff_x27 = *(long *)(unaff_x29 + -0x30);
    }
  }
  else {
    plVar1 = (long *)0x0;
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
System_Array_InternalEnumerator<OVRPlugin_Quatf>__get_Current:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar1);
}


