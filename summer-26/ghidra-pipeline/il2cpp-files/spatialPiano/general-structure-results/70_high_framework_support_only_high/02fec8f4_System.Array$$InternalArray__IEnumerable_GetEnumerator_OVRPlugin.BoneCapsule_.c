/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.BoneCapsule>
ENTRY_POINT: 02fec8f4
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


void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_BoneCapsule>(long param_1)

{
  void *pvVar1;
  long lVar2;
  size_t sVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar5;
  
  plVar5 = *(long **)(unaff_x20 + 0x18);
  lVar2 = *plVar5;
  unaff_x19[1] = param_1 + 5;
  (**(code **)(lVar2 + 0x20))(plVar5);
  if ((*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  lVar2 = unaff_x19[1];
  pvVar1 = (void *)*unaff_x19;
  uVar4 = lVar2 + 1;
  if ((ulong)unaff_x19[2] < uVar4) {
    sVar3 = unaff_x19[2] * 2;
    uVar4 = lVar2 + 0x3e1;
    if (sVar3 < uVar4 || sVar3 - uVar4 == 0) {
      sVar3 = uVar4;
    }
    unaff_x19[2] = sVar3;
    pvVar1 = realloc(pvVar1,sVar3);
    *unaff_x19 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = unaff_x19[1];
    uVar4 = lVar2 + 1;
  }
  unaff_x19[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x5d;
  plVar5 = *(long **)(unaff_x20 + 0x20);
  if (1 < *(byte *)(plVar5 + 1) - 0x51) {
    lVar2 = unaff_x19[1];
    pvVar1 = (void *)*unaff_x19;
    if ((ulong)unaff_x19[2] < lVar2 + 3U) {
      sVar3 = unaff_x19[2] * 2;
      uVar4 = lVar2 + 0x3e3;
      if (sVar3 < uVar4 || sVar3 - uVar4 == 0) {
        sVar3 = uVar4;
      }
      unaff_x19[2] = sVar3;
      pvVar1 = realloc(pvVar1,sVar3);
      *unaff_x19 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = unaff_x19[1];
    }
    *(undefined1 *)((undefined2 *)((long)pvVar1 + lVar2) + 1) = 0x20;
    *(undefined2 *)((long)pvVar1 + lVar2) = 0x3d20;
    plVar5 = *(long **)(unaff_x20 + 0x20);
    unaff_x19[1] = unaff_x19[1] + 3;
  }
  (**(code **)(*plVar5 + 0x20))(plVar5);
  if ((*(ushort *)((long)plVar5 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02feca44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x28))(plVar5);
  return;
}


