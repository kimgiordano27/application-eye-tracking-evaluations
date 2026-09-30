/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.Vector3f>
ENTRY_POINT: 02fecd5c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_Vector3f>
               (long param_1,void *param_2)

{
  void *__ptr;
  long lVar1;
  ulong in_x9;
  size_t sVar2;
  ulong uVar3;
  ulong in_x10;
  undefined4 in_w11;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar4;
  
  *(undefined4 *)(unaff_x19 + 4) = in_w11;
  if (in_x10 < in_x9) {
    sVar2 = in_x10 * 2;
    uVar3 = param_1 + 0x3e1;
    if (sVar2 < uVar3 || sVar2 - uVar3 == 0) {
      sVar2 = uVar3;
    }
    unaff_x19[2] = sVar2;
    param_2 = realloc(param_2,sVar2);
    *unaff_x19 = param_2;
    if (param_2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    param_1 = unaff_x19[1];
    in_x9 = param_1 + 1;
  }
  unaff_x19[1] = in_x9;
  *(undefined1 *)((long)param_2 + param_1) = 0x28;
  plVar4 = *(long **)(unaff_x20 + 0x18);
  (**(code **)(*plVar4 + 0x20))(plVar4);
  if ((*(ushort *)((long)plVar4 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  lVar1 = unaff_x19[1];
  __ptr = (void *)*unaff_x19;
  uVar3 = lVar1 + 1;
  *(int *)(unaff_x19 + 4) = *(int *)(unaff_x19 + 4) + -1;
  if ((ulong)unaff_x19[2] < uVar3) {
    sVar2 = unaff_x19[2] * 2;
    uVar3 = lVar1 + 0x3e1;
    if (sVar2 < uVar3 || sVar2 - uVar3 == 0) {
      sVar2 = uVar3;
    }
    unaff_x19[2] = sVar2;
    __ptr = realloc(__ptr,sVar2);
    *unaff_x19 = __ptr;
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar1 = unaff_x19[1];
    uVar3 = lVar1 + 1;
  }
  unaff_x19[1] = uVar3;
  *(undefined1 *)((long)__ptr + lVar1) = 0x29;
  return;
}


