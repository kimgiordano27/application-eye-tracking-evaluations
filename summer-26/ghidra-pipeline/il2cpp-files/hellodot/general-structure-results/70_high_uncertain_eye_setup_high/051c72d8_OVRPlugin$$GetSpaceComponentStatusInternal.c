/*
FUNCTION_NAME: OVRPlugin$$GetSpaceComponentStatusInternal
ENTRY_POINT: 051c72d8
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetSpaceComponentStatusInternal(undefined1 param_1 [16])

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  
  unaff_x19[1] = param_1._8_8_;
  *unaff_x19 = param_1._0_8_;
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000034;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
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
          goto LAB_051c7350;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_02ce0a7c(plVar2,*(long *)PTR_DAT_06608d10,0);
LAB_051c7350:
    plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    if (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_066056c0) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto LAB_051c73bc;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_02ce0a7c(plVar2,*(long *)PTR_DAT_066056c0,2);
LAB_051c73bc:
      uVar1 = (*(code *)*puVar3)(plVar2,unaff_w20,puVar3[1]);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      FUN_051c7168();
      if (*(long *)(unaff_x21 + 0x80) != 0) {
        FUN_051e148c(&stack0x00000020,*(long *)(unaff_x21 + 0x80),unaff_w20,0);
        unaff_x19[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
        *unaff_x19 = in_stack_00000020;
        *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000034;
        *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


