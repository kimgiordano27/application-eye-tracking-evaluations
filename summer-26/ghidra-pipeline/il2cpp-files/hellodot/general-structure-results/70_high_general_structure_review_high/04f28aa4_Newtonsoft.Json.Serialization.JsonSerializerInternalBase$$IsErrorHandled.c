/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$IsErrorHandled
ENTRY_POINT: 04f28aa4
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalBase__IsErrorHandled(void)

{
  ulong uVar1;
  undefined2 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 (*unaff_x19) [16];
  long *unaff_x22;
  uint uVar6;
  undefined2 unaff_w25;
  long lVar7;
  long unaff_x26;
  long unaff_x27;
  long *plVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  puVar3 = PTR_DAT_065e9d88;
  plVar8 = *(long **)(unaff_x27 + 0x808);
  uVar1 = 0;
  do {
    uVar9 = uVar1;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    if ((*(byte *)(unaff_x26 + 0x5d3) & 1) == 0) {
      AkMIDIEventCallbackInfo__get_byProgramNum(puVar3);
      *(undefined1 *)(unaff_x26 + 0x5d3) = 1;
    }
    uVar1 = uVar9 + 1;
    if ((long)(int)*(uint *)(*unaff_x19 + 8) <= (long)uVar1) break;
    if (*(uint *)(*unaff_x19 + 8) <= uVar1) goto LAB_04f28c2c;
    uVar2 = *(undefined2 *)(*(long *)*unaff_x19 + uVar9 * 2 + 2);
    if (*(int *)(*plVar8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar4 = System_Threading_LockQueue__get_IsEmpty(uVar2,0);
  } while ((uVar4 & 1) != 0);
  uVar6 = (uint)uVar9;
  if (uVar6 != 0) {
    uVar5 = FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065ce570,*(int *)(*unaff_x19 + 8) - uVar6);
    auVar10 = FUN_03fc240c(uVar5,*(undefined8 *)PTR_DAT_065f1aa0);
    if (auVar10._8_4_ == 0) {
LAB_04f28c2c:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    *auVar10._0_8_ = unaff_w25;
    lVar7 = *(long *)PTR_DAT_065f7688;
    if (*(uint *)(*unaff_x19 + 8) <= uVar6) {
      FUN_04f51680(0);
    }
    if ((*(byte *)(*(long *)(lVar7 + 0x20) + 0x135) & 1) == 0) {
      FUN_02ce0978();
    }
    if ((*(byte *)(*(long *)(*(long *)PTR_DAT_065f1848 + 0x20) + 0x135) & 1) == 0) {
      FUN_02ce0978();
    }
    FUN_03f4bc78();
    auVar10 = FUN_03fc1fe8(auVar10._0_8_,auVar10._8_8_,*(undefined8 *)PTR_DAT_065f0fd0);
    *unaff_x19 = auVar10;
  }
  return;
}


