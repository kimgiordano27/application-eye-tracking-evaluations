/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils.<>c$$<.cctor>b__2_4
ENTRY_POINT: 07299b9c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Manager_WatchUtils_<>c__<_cctor>b__2_4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long in_x9;
  long unaff_x19;
  long lVar6;
  undefined8 uVar7;
  long *unaff_x22;
  undefined8 *in_stack_00000008;
  
  uVar7 = *param_1;
  uVar1 = thunk_FUN_040b4efc(**(undefined8 **)(in_x9 + 0x398));
  FUN_06c31f48(uVar1,uVar7,*(undefined8 *)PTR_DAT_092c23b0,0);
  puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8);
  *puVar2 = uVar1;
  thunk_FUN_040ec700(puVar2,uVar1);
  FUN_04df6a74();
  uVar5 = *(uint *)(unaff_x19 + 0x18);
  if (1 < (int)uVar5) {
    lVar6 = 0;
    do {
      if (uVar5 <= (int)lVar6 + 1U) goto LAB_07299c7c;
      lVar3 = unaff_x19 + lVar6 * 8;
      lVar4 = *(long *)(lVar3 + 0x28);
      if (lVar4 == 0) {
LAB_07299c78:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (0x1869e < *(int *)(lVar4 + 0x14)) goto LAB_07299c50;
      lVar3 = *(long *)(lVar3 + 0x20);
      if (lVar3 == 0) goto LAB_07299c78;
      *(long *)(lVar3 + 0x20) = lVar4;
      thunk_FUN_040ec700();
      uVar5 = *(uint *)(unaff_x19 + 0x18);
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 + 1 < (int)uVar5);
  }
  if (uVar5 != 0) {
LAB_07299c50:
    return *in_stack_00000008;
  }
LAB_07299c7c:
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


