/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings.<>c__DisplayClass93_0$$<set_ReferenceResolver>b__0
ENTRY_POINT: 061e2c38
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


void Newtonsoft_Json_JsonSerializerSettings_<>c__DisplayClass93_0__<set_ReferenceResolver>b__0
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  
  FUN_0373b518(*(undefined8 *)(param_1 + 0x78));
  FUN_0373b518(PTR_DAT_07d882c0);
  *(undefined1 *)(unaff_x21 + 0x607) = 1;
  FUN_062855bc();
  puVar3 = PTR_DAT_07d99530;
  puVar2 = PTR_DAT_07d882c0;
  puVar1 = PTR_DAT_07d88078;
  if (-1 < unaff_w20) {
    uVar4 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d882c0,unaff_w20);
    *(undefined8 *)(unaff_x19 + 0x10) = uVar4;
    thunk_FUN_037aeb94();
    uVar4 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar2,unaff_w20);
    *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
    thunk_FUN_037aeb94();
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar4 = FUN_061d5328();
    uVar5 = thunk_FUN_037788cc(*(undefined8 *)puVar3);
    FUN_061decb8(uVar5,uVar4);
    *(undefined8 *)(unaff_x19 + 0x28) = uVar5;
    thunk_FUN_037aeb94((undefined8 *)(unaff_x19 + 0x28),uVar5);
    return;
  }
  thunk_FUN_037a15ac(PTR_DAT_07d8eed0);
  uVar4 = thunk_FUN_037788cc();
  uVar5 = thunk_FUN_037a15ac(PTR_DAT_07d99188);
  uVar6 = thunk_FUN_037a15ac(PTR_DAT_07d95d88);
  FUN_061a5334(uVar4,uVar5,uVar6,0);
  uVar5 = thunk_FUN_037a15ac(PTR_DAT_07dad000);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar4,uVar5);
}


