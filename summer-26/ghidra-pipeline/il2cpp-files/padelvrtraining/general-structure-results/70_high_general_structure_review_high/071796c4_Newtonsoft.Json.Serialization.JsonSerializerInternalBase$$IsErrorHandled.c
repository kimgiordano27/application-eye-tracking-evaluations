/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$IsErrorHandled
ENTRY_POINT: 071796c4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16]
Newtonsoft_Json_Serialization_JsonSerializerInternalBase__IsErrorHandled(long param_1)

{
  int iVar1;
  long lVar2;
  int unaff_w19;
  uint unaff_w20;
  long *unaff_x21;
  double dVar3;
  undefined1 auVar4 [16];
  double unaff_d8;
  double dVar5;
  double dVar6;
  double in_stack_00000008;
  double in_stack_00000018;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0xb8) + 8);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (*(uint *)(lVar2 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d550();
  }
  dVar6 = *(double *)(lVar2 + (ulong)unaff_w20 * 8 + 0x20);
  dVar5 = dVar6 * unaff_d8;
  in_stack_00000008 = dVar5;
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  if (unaff_w19 == 1) {
    dVar3 = modf(dVar5,&stack0x00000008);
    dVar5 = in_stack_00000008;
    if (0.5 <= ABS(dVar3)) {
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      iVar1 = FUN_07179940(dVar3);
      in_stack_00000008 = dVar5 + (double)iVar1;
    }
  }
  else {
    dVar3 = modf(dVar5,&stack0x00000018);
    if (0.0 <= dVar5) {
      if (dVar3 != 0.5) {
        in_stack_00000008 = (double)(long)(dVar5 + 0.5);
        goto LAB_071797b0;
      }
      dVar5 = 1.0;
    }
    else {
      if (dVar3 != -0.5) {
        in_stack_00000008 = (double)(long)(dVar5 + -0.5);
        goto LAB_071797b0;
      }
      dVar5 = -1.0;
    }
    in_stack_00000008 = in_stack_00000018;
    if (((long)in_stack_00000018 & 1U) != 0) {
      in_stack_00000008 = in_stack_00000018 + dVar5;
    }
  }
LAB_071797b0:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = in_stack_00000008 / dVar6;
  return auVar4;
}


