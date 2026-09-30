/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$IsSpecified
ENTRY_POINT: 06258b1c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__IsSpecified(void)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  undefined4 *puVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar7;
  long unaff_x22;
  
  FUN_0373b518();
  FUN_0373b518(PTR_DAT_07daf060);
  *(undefined1 *)(unaff_x22 + 0xa6a) = 1;
  puVar2 = PTR_DAT_07dace30;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_062855bc();
  uVar7 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_062519f8(uVar7);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  plVar4 = (long *)FUN_06147170();
  if (plVar4 == (long *)0x0) {
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  else {
    lVar6 = *(long *)PTR_DAT_07da51d8;
    bVar1 = *(byte *)(lVar6 + 0x130);
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar4 + 200) + ((ulong)bVar1 - 1) * 8) != lVar6)) goto LAB_06258cb4;
    *(long **)(unaff_x19 + 0x10) = plVar4;
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar4 + 200) + ((ulong)bVar1 - 1) * 8) != lVar6)) goto LAB_06258cb4;
  }
  puVar2 = PTR_DAT_07daf048;
  thunk_FUN_037aeb94(unaff_x19 + 0x10,plVar4);
  uVar3 = FUN_061491ac();
  FUN_062519f8(*(undefined8 *)puVar2);
  plVar4 = (long *)FUN_06147068();
  if (plVar4 != (long *)0x0) {
    if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)PTR_DAT_07dab7e8 + 0x40)) {
LAB_06258cb4:
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(plVar4);
    }
    puVar5 = (undefined4 *)thunk_FUN_03778a20();
    *(undefined4 *)(unaff_x19 + 0x18) = *puVar5;
  }
  *(uint *)(unaff_x19 + 0x18) = *(uint *)(unaff_x19 + 0x18) | uVar3 & 1;
  return;
}


