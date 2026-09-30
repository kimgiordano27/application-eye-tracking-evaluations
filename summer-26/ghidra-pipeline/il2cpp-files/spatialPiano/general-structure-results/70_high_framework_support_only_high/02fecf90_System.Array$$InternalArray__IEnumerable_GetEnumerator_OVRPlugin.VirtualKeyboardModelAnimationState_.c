/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>
ENTRY_POINT: 02fecf90
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>
               (long param_1,void *param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  long lVar3;
  ulong in_x9;
  size_t sVar4;
  ulong uVar5;
  ulong in_x10;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar6;
  
  if (in_x10 < in_x9) {
    sVar4 = in_x10 * 2;
    uVar5 = param_1 + 0x3e1;
    if (sVar4 < uVar5 || sVar4 - uVar5 == 0) {
      sVar4 = uVar5;
    }
    unaff_x19[2] = sVar4;
    param_2 = realloc(param_2,sVar4);
    *unaff_x19 = param_2;
    if (param_2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    param_1 = unaff_x19[1];
    in_x9 = param_1 + 1;
  }
  unaff_x19[1] = in_x9;
  *(undefined1 *)((long)param_2 + param_1) = 0x7d;
  if (*(char *)(unaff_x20 + 0x18) != '\0') {
    lVar3 = unaff_x19[1];
    pvVar2 = (void *)*unaff_x19;
    if ((ulong)unaff_x19[2] < lVar3 + 9U) {
      sVar4 = unaff_x19[2] * 2;
      uVar5 = lVar3 + 0x3e9;
      if (sVar4 < uVar5 || sVar4 - uVar5 == 0) {
        sVar4 = uVar5;
      }
      unaff_x19[2] = sVar4;
      pvVar2 = realloc(pvVar2,sVar4);
      *unaff_x19 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = unaff_x19[1];
    }
    uVar1 = s_noexcept_011dfbd1._0_8_;
    ((char *)((long)pvVar2 + lVar3))[8] = 't';
    *(undefined8 *)((long)pvVar2 + lVar3) = uVar1;
    unaff_x19[1] = unaff_x19[1] + 9;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    lVar3 = unaff_x19[1];
    pvVar2 = (void *)*unaff_x19;
    if ((ulong)unaff_x19[2] < lVar3 + 4U) {
      sVar4 = unaff_x19[2] * 2;
      uVar5 = lVar3 + 0x3e4;
      if (sVar4 < uVar5 || sVar4 - uVar5 == 0) {
        sVar4 = uVar5;
      }
      unaff_x19[2] = sVar4;
      pvVar2 = realloc(pvVar2,sVar4);
      *unaff_x19 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = unaff_x19[1];
    }
    *(undefined4 *)((long)pvVar2 + lVar3) = 0x203e2d20;
    plVar6 = *(long **)(unaff_x20 + 0x20);
    lVar3 = *plVar6;
    unaff_x19[1] = unaff_x19[1] + 4;
    (**(code **)(lVar3 + 0x20))(plVar6);
    if ((*(ushort *)((long)plVar6 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar6 + 0x28))(plVar6);
    }
  }
  lVar3 = unaff_x19[1];
  pvVar2 = (void *)*unaff_x19;
  uVar5 = lVar3 + 1;
  if ((ulong)unaff_x19[2] < uVar5) {
    sVar4 = unaff_x19[2] * 2;
    uVar5 = lVar3 + 0x3e1;
    if (sVar4 < uVar5 || sVar4 - uVar5 == 0) {
      sVar4 = uVar5;
    }
    unaff_x19[2] = sVar4;
    pvVar2 = realloc(pvVar2,sVar4);
    *unaff_x19 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = unaff_x19[1];
    uVar5 = lVar3 + 1;
  }
  unaff_x19[1] = uVar5;
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x3b;
  return;
}


