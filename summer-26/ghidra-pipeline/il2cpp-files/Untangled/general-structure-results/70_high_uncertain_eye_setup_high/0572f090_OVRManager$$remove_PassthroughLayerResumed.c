/*
FUNCTION_NAME: OVRManager$$remove_PassthroughLayerResumed
ENTRY_POINT: 0572f090
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_PassthroughLayerResumed(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long in_x9;
  ulong uVar4;
  long in_x10;
  int *piVar5;
  long *unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long lVar6;
  long *unaff_x26;
  
  piVar5 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar5 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_0572f0c8;
    }
    in_x9 = in_x9 + -1;
    piVar5 = piVar5 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_02eea86c();
LAB_0572f0c8:
  iVar1 = (*(code *)*puVar2)();
  if (iVar1 + -1 == unaff_w20) {
    lVar6 = 0;
  }
  else {
    lVar6 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0572f138;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02eea86c();
LAB_0572f138:
    lVar6 = (*(code *)*puVar2)();
  }
  if (unaff_x23 != 0) {
    *(long **)(unaff_x23 + 0x10) = unaff_x19;
    thunk_FUN_02f411dc();
    *(long *)(unaff_x23 + 0x18) = unaff_x24;
    thunk_FUN_02f411dc();
    if (unaff_x24 != 0) {
      *(long *)(unaff_x24 + 0x20) = unaff_x23;
      thunk_FUN_02f411dc((long *)(unaff_x24 + 0x20));
    }
    *(long *)(unaff_x23 + 0x20) = lVar6;
    thunk_FUN_02f411dc((long *)(unaff_x23 + 0x20),lVar6);
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x18) = unaff_x23;
      thunk_FUN_02f411dc((long *)(lVar6 + 0x18));
    }
    lVar6 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar6 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_0572f1f8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02eea86c();
LAB_0572f1f8:
    (*(code *)*puVar2)();
    if (unaff_x22 != 0) {
      *(undefined8 *)(unaff_x22 + 0x10) = 0;
      thunk_FUN_02f411dc((undefined8 *)(unaff_x22 + 0x10),0);
      *(undefined8 *)(unaff_x22 + 0x18) = 0;
      thunk_FUN_02f411dc((undefined8 *)(unaff_x22 + 0x18),0);
      *(undefined8 *)(unaff_x22 + 0x20) = 0;
      thunk_FUN_02f411dc((undefined8 *)(unaff_x22 + 0x20),0);
      if (unaff_x19[6] != 0) {
        uVar3 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3aef0);
        FUN_05fcf3e0(uVar3,4,unaff_w20,0);
        (**(code **)(*unaff_x19 + 0x618))();
      }
      if (unaff_x19[8] != 0) {
        uVar3 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d58898);
        FUN_06016ea8(uVar3,2);
                    /* WARNING: Could not recover jumptable at 0x0572f2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*unaff_x19 + 0x628))();
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


