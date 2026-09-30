/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeConvertable
ENTRY_POINT: 05ac41c0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeConvertable
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_x9;
  int *piVar5;
  long unaff_x19;
  int unaff_w21;
  undefined1 uStack000000000000000c;
  
  piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar5 + -2) == param_3) {
                    /* try { // try from 05ac41f0 to 05bc41fb has its CatchHandler @ 05ac4500 */
                    /* try { // try from 05ac41fc to 05bc4203 has its CatchHandler @ 05ac44f8 */
      puVar2 = (undefined8 *)(param_1 + (long)(*piVar5 + 1) * 0x10 + 0x138);
      goto LAB_05ac4200;
    }
    in_x9 = in_x9 + -1;
    piVar5 = piVar5 + 4;
                    /* try { // try from 05ac41dc to 05bc41eb has its CatchHandler @ 05ac453c */
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_02feb5b8();
LAB_05ac4200:
  iVar1 = (*(code *)*puVar2)();
  if (unaff_w21 < iVar1) {
                    /* try { // try from 05ac4214 to 05bc421b has its CatchHandler @ 05ac44fc */
                    /* try { // try from 05ac421c to 05bc427f has its CatchHandler @ 05ac3df4 */
    uStack000000000000000c = *(undefined1 *)(unaff_x19 + 0x20);
    thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f72008,&stack0x0000000c);
    return;
  }
  thunk_FUN_03037804(PTR_DAT_06f6d640);
  uVar3 = thunk_FUN_0301080c();
                    /* try { // try from 05ac4280 to 05bc42a7 has its CatchHandler @ 05ac4538 */
  uVar4 = thunk_FUN_03037804(PTR_DAT_06f9ce50);
  FUN_05aeefcc(uVar3,uVar4,0);
  uVar4 = thunk_FUN_03037804(PTR_DAT_06fac8e8);
                    /* WARNING: Subroutine does not return */
  FUN_02fe93c0(uVar3,uVar4);
}


