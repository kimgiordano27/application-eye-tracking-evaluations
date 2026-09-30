/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 01babab4
PROGRAM: sharks-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_SpaceDiscoveryResult>(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar6 = *(undefined8 **)(param_1 + 0x38);
  if (puVar6 == (undefined8 *)0x0) {
    FUN_017fc350(PTR_DAT_037f87b8);
    FUN_017fc350(PTR_DAT_037f2c78);
    puVar6 = *(undefined8 **)(param_1 + 0x38);
    if (puVar6 == (undefined8 *)0x0) {
      FUN_0185db00(param_1);
      puVar6 = *(undefined8 **)(param_1 + 0x38);
    }
  }
  puVar2 = PTR_DAT_037f2c78;
  uVar7 = *puVar6;
  if (*(int *)(*(long *)PTR_DAT_037f2c78 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar3 = FUN_02bddb5c(uVar7,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  uVar4 = UnityEngine_EventSystems_OVRInputModule__GetRectTransformNormal(lVar3,0);
  if ((uVar4 & 1) == 0) {
    return 1;
  }
  uVar7 = **(undefined8 **)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  plVar5 = (long *)FUN_02bddb5c(uVar7,0);
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_037f87b8 + 0x130);
    if (*(byte *)(*plVar5 + 0x130) < bVar1) {
      plVar5 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)PTR_DAT_037f87b8) {
      plVar5 = (long *)0x0;
    }
  }
  uVar7 = thunk_FUN_017edbcc(plVar5,0);
  return uVar7;
}


