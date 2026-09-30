/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonArrayContract$$get_CanDeserialize
ENTRY_POINT: 0328dc68
PROGRAM: gunraiders-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined4
Newtonsoft_Json_Serialization_JsonArrayContract__get_CanDeserialize(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar11;
  undefined *puVar10;
  
  if (param_1 == (long *)0x0) {
    thunk_FUN_01c273e8(PTR_DAT_0422fa20);
    uVar8 = thunk_FUN_01c496e0();
    puVar10 = 
    Method_System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<char>__ctor__;
  }
  else {
    if (param_2 != (long *)0x0) {
      if (param_1 != param_2) {
        lVar6 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
        lVar7 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
        if (lVar6 != lVar7) {
          lVar6 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
          lVar7 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
          if ((lVar6 == 0) || (lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          iVar2 = *(int *)(lVar6 + 0x18);
          iVar3 = *(int *)(lVar7 + 0x18);
          iVar1 = iVar3;
          if (iVar2 <= iVar3) {
            iVar1 = iVar2;
          }
          if (0 < iVar1) {
            iVar11 = 0;
            do {
              if ((iVar2 == iVar11) || (iVar3 == iVar11)) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4ac();
              }
              bVar4 = *(byte *)(lVar6 + iVar11 + 0x20);
              bVar5 = *(byte *)(lVar7 + iVar11 + 0x20);
              if (bVar4 != bVar5) {
                if (bVar5 <= bVar4) {
                  return 1;
                }
                return 0xffffffff;
              }
              iVar11 = iVar11 + 1;
            } while (iVar1 != iVar11);
          }
          if (iVar2 != iVar3) {
            if (iVar3 <= iVar2) {
              return 1;
            }
            return 0xffffffff;
          }
        }
      }
      return 0;
    }
    thunk_FUN_01c273e8(PTR_DAT_0422fa20);
    uVar8 = thunk_FUN_01c496e0();
    puVar10 = 
    Method_System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<DateTime>__ctor__;
  }
  uVar9 = thunk_FUN_01c273e8(puVar10);
  FUN_0323fc78(uVar8,uVar9,0);
  uVar9 = thunk_FUN_01c273e8(
                            Method_System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<Decimal>__ctor__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar8,uVar9);
}


