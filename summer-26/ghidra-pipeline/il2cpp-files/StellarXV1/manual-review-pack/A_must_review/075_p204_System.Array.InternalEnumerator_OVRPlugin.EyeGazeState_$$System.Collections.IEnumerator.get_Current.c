/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 05830d18
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 154
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_5;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_get_Current
               (long param_1)

{
  void *__src;
  int *piVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long unaff_x19;
  void *unaff_x20;
  size_t unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long lVar6;
  undefined8 *unaff_x26;
  void *unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  
  do {
    if (-1 < *(int *)(*(long *)(param_1 + 0x10) + 0x28)) {
      unaff_x26 = (undefined8 *)*unaff_x23;
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
    *(undefined8 **)(unaff_x29 + -0x20) = unaff_x26;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
    (**(code **)(*(long *)(lVar3 + 0x1c0) + 0x10))(*(undefined8 *)(*(long *)(lVar3 + 0x1c0) + 8));
    if (*(char *)(unaff_x29 + -0xc) != '\0') {
      plVar2 = (long *)(ulong)((int)unaff_x28 + 1);
FUN_05830d98:
      if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
      goto System_Array_InternalEnumerator<OVRPlugin_Quatf>__get_Current;
    }
    unaff_x28 = unaff_x28 + 1;
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    piVar1 = (int *)thunk_FUN_040d6b00();
    if ((long)(*piVar1 + -1) <= (long)unaff_x28) {
      plVar2 = (long *)0xffffffff;
      goto FUN_05830d98;
    }
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    plVar2 = (long *)thunk_FUN_040d6b00();
    plVar4 = (long *)*plVar2;
    if (plVar4 == (long *)0x0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      goto System_Array_InternalEnumerator<OVRPlugin_Quatf>__get_Current;
    }
    if (*(uint *)(plVar4 + 3) <= unaff_x28) {
      if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
System_Array_InternalEnumerator<OVRPlugin_Quatf>__get_Current:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(plVar2);
    }
    memcpy(unaff_x23,(void *)((long)plVar4 + unaff_x28 * *(uint *)(*plVar4 + 0x104) + 0x20),
           unaff_x22);
    lVar6 = *(long *)(unaff_x19 + 0x20);
    lVar3 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc(lVar6);
      lVar3 = *(long *)(unaff_x19 + 0x20);
    }
    __src = unaff_x20;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x28)) {
      __src = unaff_x27;
    }
    memcpy(unaff_x24,__src,unaff_x22);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc(lVar3);
    }
    param_1 = *(long *)(lVar3 + 0xc0);
    unaff_x26 = unaff_x23;
  } while( true );
}


