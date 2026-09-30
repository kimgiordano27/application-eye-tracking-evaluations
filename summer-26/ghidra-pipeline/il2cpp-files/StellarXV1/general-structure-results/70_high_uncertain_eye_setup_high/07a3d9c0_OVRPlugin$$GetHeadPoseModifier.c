/*
FUNCTION_NAME: OVRPlugin$$GetHeadPoseModifier
ENTRY_POINT: 07a3d9c0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetHeadPoseModifier(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  FUN_07a3db44();
  *(undefined1 *)(unaff_x19 + 0x60) = 0;
  FUN_07a24f10(&stack0x00000040);
  plVar5 = *(long **)(unaff_x19 + 0x70);
  if (plVar5 == (long *)0x0) {
    in_stack_00000028 = in_stack_00000048;
    in_stack_00000020 = in_stack_00000040;
    uStack0000000000000034 = uStack0000000000000054;
    uStack0000000000000030 = uStack0000000000000050;
  }
  else {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_092ed800) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
          goto LAB_07a3da54;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)PTR_DAT_092ed800,2);
LAB_07a3da54:
    (*(code *)*puVar1)(&stack0x00000020,plVar5,&stack0x00000040,puVar1[1]);
  }
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    uStack0000000000000014 = uStack0000000000000034;
    FUN_07a52108(0x3f800000);
    *(undefined1 *)(unaff_x19 + 0x61) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


