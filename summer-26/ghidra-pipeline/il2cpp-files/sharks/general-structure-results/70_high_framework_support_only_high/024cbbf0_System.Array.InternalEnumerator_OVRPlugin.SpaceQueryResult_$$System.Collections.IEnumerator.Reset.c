/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 024cbbf0
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


ulong System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_Reset
                (long *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  
  if (param_2 == (long *)0x0) {
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar4 = thunk_FUN_01861bbc();
    uVar5 = thunk_FUN_01851c08(PTR_DAT_037fa330);
    FUN_02b3cbec(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar4);
  }
  if (param_1 == param_2) {
    return 0;
  }
  if ((int)param_1[4] == 0) {
    return 0;
  }
  lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0185daa4(lVar6);
  }
  plVar2 = (long *)thunk_FUN_01861ac0(param_2,lVar6);
  if (plVar2 != (long *)0x0) {
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0185daa4(lVar6);
    }
    lVar7 = *plVar2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_024cbca8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_0185dba8(plVar2,lVar6,0);
LAB_024cbca8:
    iVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if (iVar1 == 0) {
      return 1;
    }
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0185daa4();
    }
    if (((*(byte *)(lVar6 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
        (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) == lVar6))
       && (uVar8 = FUN_024cea64(param_1,param_2,
                                *(undefined8 *)
                                 (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48)),
          (uVar8 & 1) != 0)) {
      if ((int)param_1[4] <= (int)param_2[4]) {
        return 0;
      }
      uVar8 = FUN_024cce80(param_1,param_2,
                           *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x180));
      return uVar8;
    }
  }
  uVar8 = FUN_024ce364(param_1,param_2,1,
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x170));
  return (ulong)(uVar8 >> 0x20 == 0 && (int)uVar8 < (int)param_1[4]);
}


