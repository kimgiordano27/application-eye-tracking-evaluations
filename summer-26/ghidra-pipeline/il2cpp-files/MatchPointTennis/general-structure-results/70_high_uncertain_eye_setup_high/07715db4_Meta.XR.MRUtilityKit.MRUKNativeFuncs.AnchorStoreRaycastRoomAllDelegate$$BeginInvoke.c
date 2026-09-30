/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreRaycastRoomAllDelegate$$BeginInvoke
ENTRY_POINT: 07715db4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate__BeginInvoke
                 (ulong param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  int *piVar3;
  long unaff_x20;
  long *plVar4;
  long lVar5;
  long unaff_x21;
  
  plVar4 = *(long **)(unaff_x20 + 0x538);
  if ((param_1 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f30b48);
    FUN_04447ba8(PTR_DAT_09f1e538);
    *(undefined1 *)(unaff_x21 + 0x199) = 1;
  }
  lVar5 = param_2[8];
  if (*(int *)(*plVar4 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar1 = FUN_09531730(lVar5,0,0);
  if ((uVar1 & 1) == 0) {
    return param_2;
  }
  plVar4 = (long *)(**(code **)(*param_2 + 0x518))(param_2,*(undefined8 *)(*param_2 + 0x520));
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar5 = *plVar4;
  uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar1 != 0) {
    piVar3 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar3 + -2) == *(long *)PTR_DAT_09f30b48) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar3 * 0x10 + 0x138);
        goto LAB_07715e88;
      }
      uVar1 = uVar1 - 1;
      piVar3 = piVar3 + 4;
    } while (uVar1 != 0);
  }
  puVar2 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f30b48,0);
LAB_07715e88:
                    /* WARNING: Could not recover jumptable at 0x07715e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar4 = (long *)(*(code *)*puVar2)(plVar4,puVar2[1]);
  return plVar4;
}


