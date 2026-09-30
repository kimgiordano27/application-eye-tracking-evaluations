/*
FUNCTION_NAME: OVRManager$$add_SpaceSaveComplete
ENTRY_POINT: 0572e614
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


undefined8 OVRManager__add_SpaceSaveComplete(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x25;
  long *unaff_x26;
  
  lVar2 = (*(code *)*param_1)();
  lVar5 = *unaff_x21;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x26) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0572e674;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_02eea86c();
LAB_0572e674:
  iVar1 = (*(code *)*puVar3)();
  if (iVar1 == unaff_w20) {
    lVar5 = 0;
  }
  else {
    lVar5 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0572e6dc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02eea86c();
LAB_0572e6dc:
    lVar5 = (*(code *)*puVar3)();
  }
  (**(code **)(*unaff_x19 + 0x6d8))();
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  *(long **)(unaff_x22 + 0x10) = unaff_x19;
  thunk_FUN_02f411dc();
  *(long *)(unaff_x22 + 0x18) = lVar2;
  thunk_FUN_02f411dc((long *)(unaff_x22 + 0x18),lVar2);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x20) = unaff_x22;
    thunk_FUN_02f411dc((long *)(lVar2 + 0x20));
  }
  *(long *)(unaff_x22 + 0x20) = lVar5;
  thunk_FUN_02f411dc((long *)(unaff_x22 + 0x20),lVar5);
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x18) = unaff_x22;
    thunk_FUN_02f411dc((long *)(lVar5 + 0x18));
  }
  lVar2 = *unaff_x21;
  uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x25) {
        puVar3 = (undefined8 *)(lVar2 + (long)(*piVar7 + 3) * 0x10 + 0x138);
        goto LAB_0572e7b8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_02eea86c();
LAB_0572e7b8:
  (*(code *)*puVar3)();
  if (unaff_x19[6] != 0) {
    uVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3aef0);
    FUN_05fcf3e0(uVar4,1,unaff_w20,0);
    (**(code **)(*unaff_x19 + 0x618))();
  }
  if (unaff_x19[8] != 0) {
    uVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d58898);
    FUN_06016cb8(uVar4,0);
    (**(code **)(*unaff_x19 + 0x628))();
  }
  return 1;
}


