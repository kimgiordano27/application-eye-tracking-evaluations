/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex$$IsVerticallyInViewport
ENTRY_POINT: 05616704
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex__IsVerticallyInViewport(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long *unaff_x22;
  undefined1 auVar7 [16];
  undefined8 in_stack_00000008;
  
  lVar5 = *(long *)(unaff_x20 + 0x30);
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x22) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 4) * 0x10 + 0x138);
        goto LAB_05616754;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_032937ac();
LAB_05616754:
  auVar7 = (*(code *)*puVar1)();
  if (lVar5 != 0) {
    uVar3 = FUN_04fdea0c(lVar5,auVar7._0_8_,auVar7._8_8_,&stack0x00000008,
                         *(undefined8 *)PTR_DAT_07286470);
    if ((uVar3 & 1) == 0) {
      lVar5 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_07286478) {
            puVar1 = (undefined8 *)(lVar5 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_05616870;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_032937ac();
LAB_05616870:
      plVar2 = (long *)(*(code *)*puVar1)();
      if (plVar2 == (long *)0x0) goto LAB_05616920;
      lVar5 = *plVar2;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_07281fd0) {
            puVar1 = (undefined8 *)(lVar5 + (long)(*piVar4 + 7) * 0x10 + 0x138);
            goto LAB_056168dc;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_032937ac(plVar2,*(long *)PTR_DAT_07281fd0,7);
LAB_056168dc:
      in_stack_00000008 = (*(code *)*puVar1)(plVar2,puVar1[1]);
    }
    else {
      lVar5 = *unaff_x19;
      lVar6 = *(long *)(unaff_x20 + 0x30);
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x22) {
            puVar1 = (undefined8 *)(lVar5 + (long)(*piVar4 + 4) * 0x10 + 0x138);
            goto LAB_0561682c;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_032937ac();
LAB_0561682c:
      auVar7 = (*(code *)*puVar1)();
      if (lVar6 == 0) goto LAB_05616920;
      FUN_04fde3f4(lVar6,auVar7._0_8_,auVar7._8_8_,*(undefined8 *)PTR_DAT_07286468);
    }
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      FUN_050f8b10();
      return in_stack_00000008;
    }
  }
LAB_05616920:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


