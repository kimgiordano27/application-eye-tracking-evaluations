/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateJToken
ENTRY_POINT: 07a3f4a8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16] Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateJToken(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  double *pdVar4;
  double dVar5;
  int unaff_w19;
  uint unaff_w20;
  double dVar6;
  undefined1 auVar7 [16];
  double unaff_d8;
  undefined8 in_register_00005108;
  double dVar8;
  double in_stack_00000008;
  double in_stack_00000018;
  
  puVar1 = PTR_DAT_09f1e748;
  lVar3 = *(long *)PTR_DAT_09f1e748;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar3 = *(long *)puVar1;
  }
  pdVar4 = *(double **)(lVar3 + 0xb8);
  if (*pdVar4 <= ABS(unaff_d8)) goto LAB_07a3f5e0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar3 = *(long *)puVar1;
    pdVar4 = *(double **)(lVar3 + 0xb8);
  }
  dVar5 = pdVar4[1];
  if (dVar5 == 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (*(uint *)((long)dVar5 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
  dVar8 = *(double *)((long)dVar5 + (ulong)unaff_w20 * 8 + 0x20);
  dVar5 = dVar8 * unaff_d8;
  in_stack_00000008 = dVar5;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  if (unaff_w19 == 1) {
    dVar6 = modf(dVar5,&stack0x00000008);
    dVar5 = in_stack_00000008;
    if (0.5 <= ABS(dVar6)) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      iVar2 = FUN_07a3f768(dVar6);
      in_stack_00000008 = dVar5 + (double)iVar2;
    }
  }
  else {
    dVar6 = modf(dVar5,&stack0x00000018);
    if (0.0 <= dVar5) {
      if (dVar6 == 0.5) {
        dVar5 = 1.0;
        goto LAB_07a3f5ac;
      }
      in_stack_00000008 = (double)(long)(dVar5 + 0.5);
    }
    else if (dVar6 == -0.5) {
      dVar5 = -1.0;
LAB_07a3f5ac:
      in_stack_00000008 = in_stack_00000018;
      if (((long)in_stack_00000018 & 1U) != 0) {
        in_stack_00000008 = in_stack_00000018 + dVar5;
      }
    }
    else {
      in_stack_00000008 = (double)(long)(dVar5 + -0.5);
    }
  }
  unaff_d8 = in_stack_00000008 / dVar8;
  in_register_00005108 = 0;
LAB_07a3f5e0:
  auVar7._8_8_ = in_register_00005108;
  auVar7._0_8_ = unaff_d8;
  return auVar7;
}


