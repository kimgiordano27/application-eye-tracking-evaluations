/*
FUNCTION_NAME: OVRPlugin$$TryLocateSpace
ENTRY_POINT: 0322e370
PROGRAM: vrfs-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__TryLocateSpace(long param_1)

{
  char cVar1;
  undefined *puVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  long *plVar8;
  long unaff_x21;
  
  thunk_FUN_0159f088(*(undefined8 *)(param_1 + 0xfc8));
  thunk_FUN_0159f088(PTR_DAT_06df7368);
  thunk_FUN_0159f088(PTR_DAT_06e37858);
  *(undefined1 *)(unaff_x21 + 0xfec) = 1;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar4 = FUN_0322dd70();
  puVar2 = PTR_DAT_06df7368;
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_06e52cd8 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    FUN_0486672c(*(undefined8 *)puVar2,0);
    FUN_051de334();
    return;
  }
  bVar3 = FUN_0513c7e0(*(undefined8 *)PTR_DAT_06e37858,0);
  *(byte *)(unaff_x19 + 0x28) = bVar3 & 1;
  if ((bVar3 & 1) == 0) {
    return;
  }
  lVar5 = *unaff_x20;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    lVar5 = *unaff_x20;
  }
  plVar8 = *(long **)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  lVar5 = *plVar8;
  cVar1 = *(char *)(unaff_x19 + 0x1c);
  uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
  if (uVar4 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06e44fc8) {
        puVar6 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
        goto LAB_0322e49c;
      }
      uVar4 = uVar4 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar4 != 0);
  }
  puVar6 = (undefined8 *)FUN_015c2a80(plVar8,*(long *)PTR_DAT_06e44fc8,2);
LAB_0322e49c:
                    /* WARNING: Could not recover jumptable at 0x0322e4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar6)(plVar8,1,cVar1 != '\0',puVar6[1]);
  return;
}


