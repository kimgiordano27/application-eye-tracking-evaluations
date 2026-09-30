/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EndProcessProperty
ENTRY_POINT: 05e99df0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EndProcessProperty
          (ulong param_1,long *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar7;
  uint unaff_w19;
  uint unaff_w20;
  uint unaff_w21;
  long unaff_x23;
  long unaff_x25;
  undefined1 auVar8 [16];
  undefined *puVar6;
  
  if ((param_1 & 1) == 0) {
    FUN_03642964(PTR_DAT_079fe5f8);
    FUN_03642964(PTR_DAT_07a0b8d8);
    *(undefined1 *)(unaff_x25 + 0x1cc) = 1;
  }
  puVar6 = PTR_DAT_079fe5f8;
  if ((param_3 == 0) || (unaff_x23 == 0)) {
    puVar6 = PTR_DAT_07a0b8a0;
    if (param_3 != 0) {
      puVar6 = PTR_DAT_079ff530;
    }
    uVar3 = thunk_FUN_036aa1c8(puVar6);
    thunk_FUN_036aa1c8(PTR_DAT_079fb6c0);
    uVar5 = thunk_FUN_0367fe20();
    uVar4 = thunk_FUN_036aa1c8(PTR_DAT_07a0b8c0);
    FUN_05d86244(uVar5,uVar3,uVar4,0);
  }
  else {
    if (-1 < (int)(unaff_w19 | unaff_w21)) {
      iVar7 = (int)*(ulong *)(param_3 + 0x18);
      if ((int)(iVar7 - unaff_w21) < (int)unaff_w19) {
        thunk_FUN_036aa1c8(PTR_DAT_079fb6d0);
        uVar3 = thunk_FUN_0367fe20();
        uVar4 = thunk_FUN_036aa1c8(PTR_DAT_07a0b8a0);
        puVar6 = PTR_DAT_07a0b6d0;
      }
      else {
        if ((-1 < (int)unaff_w20) && (iVar1 = *(int *)(unaff_x23 + 0x18), (int)unaff_w20 <= iVar1))
        {
          if (unaff_w19 == 0) {
            return 0;
          }
          if ((*(ulong *)(param_3 + 0x18) & 0xffffffff) == 0) {
            param_3 = 0;
          }
          else {
            if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            param_3 = param_3 + 0x20;
          }
          auVar8 = FUN_04e658dc();
          lVar2 = FUN_03daae28(auVar8._0_8_,auVar8._8_8_,*(undefined8 *)puVar6);
                    /* WARNING: Could not recover jumptable at 0x05e99ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (**(code **)(*param_2 + 0x288))
                            (param_2,param_3 + (ulong)unaff_w21 * 2,unaff_w19,
                             lVar2 + (ulong)unaff_w20,iVar1 - unaff_w20,0,
                             *(undefined8 *)(*param_2 + 0x290));
          return uVar3;
        }
        thunk_FUN_036aa1c8(PTR_DAT_079fb6d0);
        uVar3 = thunk_FUN_0367fe20();
        uVar4 = thunk_FUN_036aa1c8(PTR_DAT_07a0b8e0);
        puVar6 = PTR_DAT_079fd430;
      }
      uVar5 = thunk_FUN_036aa1c8(puVar6);
      FUN_05d81a8c(uVar3,uVar4,uVar5,0);
      uVar4 = thunk_FUN_036aa1c8(PTR_DAT_07a17f18);
                    /* WARNING: Subroutine does not return */
      FUN_03642acc(uVar3,uVar4);
    }
    puVar6 = PTR_DAT_07a0b8f0;
    if ((int)unaff_w21 < 0) {
      puVar6 = PTR_DAT_07a0b8e8;
    }
    uVar3 = thunk_FUN_036aa1c8(puVar6);
    thunk_FUN_036aa1c8(PTR_DAT_079fb6d0);
    uVar5 = thunk_FUN_0367fe20();
    uVar4 = thunk_FUN_036aa1c8(PTR_DAT_079fd440);
    FUN_05d81a8c(uVar5,uVar3,uVar4,0);
  }
  uVar3 = thunk_FUN_036aa1c8(PTR_DAT_07a17f18);
                    /* WARNING: Subroutine does not return */
  FUN_03642acc(uVar5,uVar3);
}


