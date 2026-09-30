/*
FUNCTION_NAME: FullSerializer.fsJsonParser$$TryParseArray
ENTRY_POINT: 044ad7f8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void FullSerializer_fsJsonParser__TryParseArray(ulong param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x29;
  
  do {
    if ((param_1 & 1) == 0) goto switchD_044ad838_default;
    lVar2 = FUN_0449ebb8(*unaff_x22);
    uVar3 = FUN_044a3094((long *)(lVar2 + 0x20));
    unaff_x22 = (long *)(lVar2 + 0x20);
    while ((uVar3 & 1) != 0) {
      lVar2 = FUN_044a2c6c(unaff_x21);
      uVar1 = *(byte *)(lVar2 + 10) - 3;
      if (uVar1 < 9) {
                    /* WARNING: Could not recover jumptable at 0x044ad838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)*(byte *)(unaff_x27 + (ulong)uVar1) * 4 + 0x44ad83c))();
        return;
      }
switchD_044ad838_default:
      do {
        uVar3 = FUN_044a2ce4(unaff_x21);
        if ((uVar3 & 1) != 0) {
          uVar4 = FUN_044ad744(*(undefined8 *)(*unaff_x21 + 8));
          uVar4 = FUN_04463858(*(undefined8 *)*unaff_x21,uVar4);
          lVar2 = FUN_0449ee38(uVar4,1);
          unaff_x21 = (long *)(lVar2 + 0x20);
        }
        while( true ) {
          *(long **)(unaff_x20 + unaff_x24 * 8) = unaff_x21;
          unaff_x24 = unaff_x24 + 1;
          if (*unaff_x19 <= unaff_x24) {
            FUN_044ab414();
            if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          uVar3 = FUN_044a2ed4(*(undefined8 *)(*(long *)(unaff_x19 + 2) + unaff_x24 * 8));
          if ((uVar3 & 1) == 0) break;
          unaff_x21 = (long *)(*(long *)(unaff_x25 + 0x10) + 0x20);
        }
        unaff_x21 = *(long **)(*(long *)(unaff_x19 + 2) + unaff_x24 * 8);
      } while (**(char **)(unaff_x26 + 0xbb0) == '\0');
      uVar3 = FUN_044a3094(unaff_x21);
      unaff_x22 = unaff_x21;
    }
    param_1 = FUN_044a2ce4(unaff_x22);
  } while( true );
}


