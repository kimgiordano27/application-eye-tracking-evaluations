/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_TypeNameAssemblyFormatHandling
ENTRY_POINT: 02754688
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02754718) */
/* WARNING: Removing unreachable block (ram,0x02754744) */
/* WARNING: Removing unreachable block (ram,0x02754884) */
/* WARNING: Removing unreachable block (ram,0x0275474c) */

void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameAssemblyFormatHandling(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  int in_w8;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long *unaff_x22;
  undefined8 in_stack_00000018;
  
  if (in_w8 == 0) {
    thunk_FUN_01a58e78();
  }
  uVar2 = FUN_026f3e30(0);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  if (*(int *)(*(long *)PTR_DAT_03cc4b20 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)PTR_DAT_03cc4b20);
  }
  uVar3 = FUN_02786588();
  if ((uVar3 & 1) == 0) {
    lVar6 = *(long *)PTR_DAT_03cfa5c8;
  }
  else {
    lVar6 = *(long *)PTR_DAT_03cc28c8;
  }
  if (DAT_041221cf == '\0') {
    FUN_01ab69ac(PTR_DAT_03cdba00);
    DAT_041221cf = '\x01';
  }
  if (lVar6 != 0) {
    uVar4 = FUN_025bb98c(lVar6,0);
    iVar5 = *(int *)(lVar6 + 0x10);
    if (iVar5 != 1) goto LAB_0275481c;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar6 = FUN_02753930(uVar4,1,&stack0x00000018);
    if (DAT_041221cf == '\0') {
      FUN_01ab69ac(PTR_DAT_03cdba00);
      DAT_041221cf = '\x01';
    }
    if (lVar6 != 0) {
      uVar4 = FUN_025bb98c(lVar6,0);
      iVar5 = *(int *)(lVar6 + 0x10);
      goto LAB_0275481c;
    }
  }
  iVar5 = 0;
  uVar4 = 0;
LAB_0275481c:
  uVar1 = in_stack_00000018;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_02751efc(uVar1,uVar4,iVar5,uVar2);
  return;
}


