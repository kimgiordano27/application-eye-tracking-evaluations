/*
FUNCTION_NAME: OVRPlugin$$RetrieveSpaceQueryResults
ENTRY_POINT: 0601e668
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__RetrieveSpaceQueryResults(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *in_x10;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  long lVar5;
  long *unaff_x23;
  undefined8 uStack0000000000000014;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000048;
  undefined1 in_stack_00000060 [16];
  
  uVar1 = (**(code **)(param_1 + (long)(*in_x10 + 0x12) * 0x10 + 0x138))();
  if ((uVar1 & 1) != 0) {
    lVar3 = *unaff_x20;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 0xd) * 0x10 + 0x138);
          goto LAB_0601e6dc;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_0322c1e8();
LAB_0601e6dc:
    uVar1 = (*(code *)*puVar2)();
    if ((uVar1 & 1) != 0) {
      lVar5 = *(long *)(unaff_x19 + 0x18);
      uStack0000000000000034 = in_stack_00000060._4_8_;
      lVar3 = *unaff_x20;
      uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar1 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x23) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_0601e754;
          }
          uVar1 = uVar1 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_0322c1e8();
LAB_0601e754:
      (*(code *)*puVar2)();
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      uStack0000000000000014 = uStack0000000000000034;
      FUN_0601e7bc(lVar5,in_stack_00000048);
      uVar1 = (ulong)*(uint *)(unaff_x19 + 0x10);
      if (*(uint *)(unaff_x19 + 0x10) == 0xffffffff) {
        uVar1 = FUN_0601ddfc();
        *(int *)(unaff_x19 + 0x10) = (int)uVar1;
      }
      FUN_0601de64(uVar1,*(undefined8 *)(unaff_x19 + 0x18));
    }
  }
  return;
}


