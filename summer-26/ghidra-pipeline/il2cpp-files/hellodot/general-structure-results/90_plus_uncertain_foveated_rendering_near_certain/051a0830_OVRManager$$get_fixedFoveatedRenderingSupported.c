/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 051a0830
PROGRAM: hellodot-libil2cpp.so
SCORE: 109
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_fixedFoveatedRenderingSupported(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  undefined4 uVar7;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  
  FUN_0519e3e8(&stack0x00000020);
  uStack0000000000000014 = uStack0000000000000034;
  FUN_051a0958();
  lVar2 = *(long *)(unaff_x19 + 0x28);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x50) = unaff_s11;
    *(undefined4 *)(lVar2 + 0x54) = unaff_s10;
    *(undefined4 *)(lVar2 + 0x58) = unaff_s9;
    *(undefined4 *)(lVar2 + 0x5c) = unaff_s8;
    plVar6 = *(long **)(unaff_x19 + 0x48);
    lVar2 = *(long *)(unaff_x19 + 0x28);
    if (plVar6 == (long *)0x0) {
      uVar7 = 0;
    }
    else {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06604d90) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_051a08e4;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_02ce0a7c(plVar6,*(long *)PTR_DAT_06604d90,0);
LAB_051a08e4:
      uVar7 = (*(code *)*puVar1)(plVar6,puVar1[1]);
    }
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x78) = uVar7;
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        FUN_050e6f30(*(long *)(unaff_x19 + 0x28),*(undefined8 *)(unaff_x19 + 0x68),0,0);
        FUN_051a0f64();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


