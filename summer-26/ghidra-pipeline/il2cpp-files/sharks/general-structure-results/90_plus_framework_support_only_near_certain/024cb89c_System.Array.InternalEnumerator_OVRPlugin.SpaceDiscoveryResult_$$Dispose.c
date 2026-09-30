/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 024cb89c
PROGRAM: sharks-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__Dispose(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  int in_w9;
  int *piVar7;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  
  if (in_w9 == 0) {
    lVar2 = *(long *)(param_1 + 0x60);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4(lVar2);
    }
    lVar6 = *unaff_x22;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar2) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_024cb9cc;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_0185dba8();
LAB_024cb9cc:
    iVar1 = (*(code *)*puVar5)();
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    if (((*(byte *)(lVar2 + 0x130) <= *(byte *)(*unaff_x21 + 0x130)) &&
        (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) == lVar2)
        ) && (uVar3 = FUN_024cea64(), (uVar3 & 1) != 0)) {
      if ((int)unaff_x21[4] <= *(int *)(unaff_x20 + 0x20)) {
        return 0;
      }
      uVar3 = FUN_024cd18c();
      return uVar3;
    }
    uVar4 = FUN_024ce364();
    if (*(int *)(unaff_x20 + 0x20) != (int)uVar4) {
      return 0;
    }
    iVar1 = (int)((ulong)uVar4 >> 0x20);
  }
  return (ulong)(0 < iVar1);
}


