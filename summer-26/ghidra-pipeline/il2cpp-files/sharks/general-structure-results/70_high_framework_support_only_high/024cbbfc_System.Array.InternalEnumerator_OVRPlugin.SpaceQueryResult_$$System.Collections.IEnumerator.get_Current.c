/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 024cbbfc
PROGRAM: sharks-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_get_Current
                (long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  if (param_1 == param_2) {
    return 0;
  }
  if (*(int *)(unaff_x20 + 0x20) == 0) {
    return 0;
  }
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    FUN_0185daa4(lVar4);
  }
  plVar2 = (long *)thunk_FUN_01861ac0();
  if (plVar2 != (long *)0x0) {
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4(lVar4);
    }
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_024cbca8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0185dba8(plVar2,lVar4,0);
LAB_024cbca8:
    iVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if (iVar1 == 0) {
      return 1;
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    if (((*(byte *)(lVar4 + 0x130) <= *(byte *)(*unaff_x21 + 0x130)) &&
        (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) == lVar4)
        ) && (uVar6 = FUN_024cea64(), (uVar6 & 1) != 0)) {
      if (*(int *)(unaff_x20 + 0x20) <= (int)unaff_x21[4]) {
        return 0;
      }
      uVar6 = FUN_024cce80();
      return uVar6;
    }
  }
  uVar6 = FUN_024ce364();
  return (ulong)(uVar6 >> 0x20 == 0 && (int)uVar6 < *(int *)(unaff_x20 + 0x20));
}


