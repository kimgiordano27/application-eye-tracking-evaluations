/*
FUNCTION_NAME: OVRPlugin$$EnumerateSpaceSupportedComponents
ENTRY_POINT: 051c74dc
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__EnumerateSpaceSupportedComponents(void)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined8 uStack0000000000000034;
  
  FUN_05f002ac();
  uStack0000000000000034 = uStack0000000000000014;
  in_stack_00000030 = uStack0000000000000010;
  in_stack_00000028 = uStack0000000000000008;
  uStack000000000000002c = uStack000000000000000c;
  in_stack_00000020 = in_stack_00000000;
  unaff_x19[1] = _uStack0000000000000008;
  *unaff_x19 = in_stack_00000000;
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000014;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000010,uStack000000000000000c);
  uVar1 = FUN_051c6dec();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  plVar2 = (long *)FUN_051c6d94();
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06608d10) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_051c7570;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_02ce0a7c(plVar2,*(long *)PTR_DAT_06608d10,0);
LAB_051c7570:
    plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    if (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_066056c0) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto FUN_051c75dc;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_02ce0a7c(plVar2,*(long *)PTR_DAT_066056c0,2);
FUN_051c75dc:
      uVar1 = (*(code *)*puVar3)(plVar2,unaff_w20,puVar3[1]);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      FUN_051c7168();
      if (*(long *)(unaff_x21 + 0x80) != 0) {
        FUN_051e1784(&stack0x00000020,*(long *)(unaff_x21 + 0x80),unaff_w20,0);
        unaff_x19[1] = CONCAT44(uStack000000000000002c,in_stack_00000028);
        *unaff_x19 = in_stack_00000020;
        *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000034;
        *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(in_stack_00000030,uStack000000000000002c);
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


