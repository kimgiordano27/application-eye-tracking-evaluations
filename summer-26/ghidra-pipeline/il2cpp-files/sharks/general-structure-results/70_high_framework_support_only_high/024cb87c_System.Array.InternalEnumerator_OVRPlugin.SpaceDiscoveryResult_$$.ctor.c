/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 024cb87c
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


ulong System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>___ctor(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  
  uVar2 = (**(code **)(param_1 + 0x138))();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  lVar5 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if (*(int *)(unaff_x20 + 0x20) == 0) {
    lVar5 = *(long *)(lVar5 + 0x60);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4(lVar5);
    }
    lVar6 = *unaff_x22;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_024cb9cc;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_0185dba8();
LAB_024cb9cc:
    iVar1 = (*(code *)*puVar4)();
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x28);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    if (((*(byte *)(lVar5 + 0x130) <= *(byte *)(*unaff_x21 + 0x130)) &&
        (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) == lVar5)
        ) && (uVar2 = FUN_024cea64(), (uVar2 & 1) != 0)) {
      if ((int)unaff_x21[4] <= *(int *)(unaff_x20 + 0x20)) {
        return 0;
      }
      uVar2 = FUN_024cd18c();
      return uVar2;
    }
    uVar3 = FUN_024ce364();
    if (*(int *)(unaff_x20 + 0x20) != (int)uVar3) {
      return 0;
    }
    iVar1 = (int)((ulong)uVar3 >> 0x20);
  }
  return (ulong)(0 < iVar1);
}


