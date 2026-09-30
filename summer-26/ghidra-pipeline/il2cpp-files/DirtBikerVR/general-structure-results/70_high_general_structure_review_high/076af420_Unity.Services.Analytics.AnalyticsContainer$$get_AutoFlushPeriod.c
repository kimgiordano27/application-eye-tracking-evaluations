/*
FUNCTION_NAME: Unity.Services.Analytics.AnalyticsContainer$$get_AutoFlushPeriod
ENTRY_POINT: 076af420
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x076af590) */
/* WARNING: Removing unreachable block (ram,0x076af5a4) */

void Unity_Services_Analytics_AnalyticsContainer__get_AutoFlushPeriod(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  long lVar5;
  long *unaff_x22;
  long in_stack_00000008;
  long *in_stack_00000148;
  long in_stack_000004d8;
  
  FUN_056e0a20();
  puVar1 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8);
  *puVar1 = param_1;
  thunk_FUN_03afed3c(puVar1,param_1);
  if (unaff_x19 == (long *)0x0) {
    if (*(long *)(in_stack_00000008 + 0x28) == in_stack_000004d8) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
  else {
    lVar2 = *unaff_x19;
    lVar5 = *(long *)PTR_DAT_08504510;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)(lVar5 + 0x20)) {
          lVar2 = lVar2 + (long)(int)(*piVar4 + (uint)*(ushort *)(lVar5 + 0x50)) * 0x10 + 0x138;
          goto Unity_Services_Analytics_AnalyticsContainer__Enable;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    lVar2 = FUN_03ac43c4();
Unity_Services_Analytics_AnalyticsContainer__Enable:
    lVar2 = thunk_FUN_03aa9644(*(undefined8 *)(lVar2 + 8),lVar5);
    (**(code **)(lVar2 + 8))();
    if (in_stack_00000148 != (long *)0x0) {
      lVar2 = *in_stack_00000148;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_08488550) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_076af534;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_03ac43c4(in_stack_00000148,*(long *)PTR_DAT_08488550,0);
LAB_076af534:
      (*(code *)*puVar1)(in_stack_00000148,puVar1[1]);
    }
    if (*(long *)(in_stack_00000008 + 0x28) == in_stack_000004d8) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


