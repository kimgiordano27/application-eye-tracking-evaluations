/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.<>c__DisplayClass20_0<Vector3>$$.ctor
ENTRY_POINT: 0424d684
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_<>c__DisplayClass20_0<Vector3>___ctor(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  long unaff_x21;
  long lVar7;
  undefined8 in_stack_00000018;
  
  lVar7 = *(long *)(param_1 + 0x38);
  lVar1 = *(long *)(lVar7 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03775678();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03775678();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar1 = *(long *)(lVar7 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03775678();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03775678();
  }
  if (*(char *)(*(long *)(lVar1 + 0xb8) + 0xc) != '\0') {
    plVar2 = (long *)FUN_03e0c434(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x48));
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar3 = (**(code **)(*plVar2 + 0x1b8))
                      (plVar2,in_stack_00000018._4_4_,0,*(undefined8 *)(*plVar2 + 0x1c0));
    if ((uVar3 & 1) != 0) {
      uVar4 = FUN_050122ec();
      plVar2 = (long *)FUN_07644180(uVar4,0);
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar1 = *plVar2;
      uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07d978a0) {
            puVar5 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0424d7cc;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_0377596c(plVar2,*(long *)PTR_DAT_07d978a0,0);
LAB_0424d7cc:
      (*(code *)*puVar5)(plVar2);
      return;
    }
  }
  Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<DrawInstance>();
  return;
}


