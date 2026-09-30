/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$IsPositionInBoundary
ENTRY_POINT: 06de2b74
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKAnchor__IsPositionInBoundary
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  void *unaff_x20;
  long *unaff_x21;
  long *plVar8;
  ulong in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
  FUN_05a5327c(param_2,*(undefined8 *)((long)unaff_x20 + 0x18),param_4,0,
               **(undefined8 **)(param_1 + 0x910));
  puVar2 = PTR_DAT_08e91908;
  in_stack_000000c0 = *(ulong *)((long)unaff_x20 + 0x40);
  in_stack_000000c8 = *(undefined8 *)((long)unaff_x20 + 0x48);
  if ((in_stack_000000c0 & 0xff) != 0) {
    lVar3 = FUN_056b4cd4(&stack0x000000c0,*(undefined8 *)PTR_DAT_08e91908);
    puVar1 = PTR_DAT_08e91798;
    if (lVar3 != 0) {
      lVar3 = *(long *)PTR_DAT_08e91798;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar3 = *(long *)puVar1;
      }
      if (*(long *)(*(long *)(lVar3 + 0xb8) + 8) != 0) {
        FUN_06f7c2f0();
        lVar3 = *(long *)puVar1;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar3 = *(long *)puVar1;
        }
        in_stack_000000c8 = *(undefined8 *)((long)unaff_x20 + 0x48);
        in_stack_000000c0 = *(ulong *)((long)unaff_x20 + 0x40);
        plVar8 = *(long **)(*(long *)(lVar3 + 0xb8) + 8);
        uVar4 = FUN_056b4cd4(&stack0x000000c0,*(undefined8 *)puVar2);
        if (plVar8 == (long *)0x0) goto LAB_06de2d64;
        lVar3 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08e918f8) {
              puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_06de2c9c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)FUN_03cf1348(plVar8,*(long *)PTR_DAT_08e918f8,0);
LAB_06de2c9c:
        (*(code *)*puVar5)(plVar8,uVar4,puVar5[1]);
        FUN_06f7c2f0();
      }
    }
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    if ((*(int *)(*(long *)(unaff_x19 + 0x20) + 0x18) <= *(int *)((long)unaff_x20 + 0x30)) &&
       (*(long *)((long)unaff_x20 + 0x50) != 0)) {
      FUN_06f7c2f0();
      if ((*(long *)(unaff_x19 + 0x20) == 0) || (*(long *)((long)unaff_x20 + 0x50) == 0))
      goto LAB_06de2d64;
      FUN_06de0814();
    }
    uVar4 = (**(code **)(*unaff_x21 + 0x168))();
    *(undefined8 *)((long)unaff_x20 + 0x18) = uVar4;
    thunk_FUN_03d233cc();
    memcpy(&stack0x00000008,unaff_x20,0x58);
    FUN_06de2f6c();
    return;
  }
LAB_06de2d64:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


