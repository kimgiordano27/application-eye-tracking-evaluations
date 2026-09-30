/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewDictionary
ENTRY_POINT: 05e949b4
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


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewDictionary(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  int unaff_w19;
  long lVar8;
  undefined8 uVar9;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  puVar2 = PTR_DAT_079fd0e8;
  if (*(int *)(*(long *)PTR_DAT_079fd0e8 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar3 = FUN_05e7b144(&stack0x00000028,0);
  uVar9 = in_stack_00000028;
  puVar1 = PTR_DAT_079f5558;
  if ((uVar3 & 1) == 0) {
    if (unaff_w19 == 0) {
      if (*(int *)(*(long *)PTR_DAT_079f5558 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      if (DAT_07ed77c9 == '\0') {
        FUN_03642964(PTR_DAT_079f5558);
        DAT_07ed77c9 = '\x01';
      }
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar4 = *(long *)puVar1;
      }
      return *(long *)(*(long *)(lVar4 + 0xb8) + 0x30);
    }
    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a17ce0);
    FUN_05e94cbc(lVar4,uVar9);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar3 = FUN_05e7b18c(&stack0x00000028,0);
    puVar1 = PTR_DAT_07a17cf8;
    if ((uVar3 & 1) != 0) {
      lVar5 = *(long *)PTR_DAT_07a17cf8;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar5 = *(long *)puVar1;
      }
      puVar7 = *(undefined8 **)(lVar5 + 0xb8);
      lVar8 = puVar7[1];
      if (lVar8 == 0) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
        }
        uVar9 = *puVar7;
        lVar8 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fd9a0);
        FUN_0554a400(lVar8,uVar9,*(undefined8 *)PTR_DAT_07a17ce8,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
        *plVar6 = lVar8;
        thunk_FUN_036b7ad0(plVar6,lVar8);
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_05e7b508(&stack0x00000008,&stack0x00000028,lVar8,lVar4,0);
      if (lVar4 == 0) goto LAB_05e94bec;
      *(undefined8 *)(lVar4 + 0x68) = in_stack_00000010;
      *(undefined8 *)(lVar4 + 0x60) = in_stack_00000008;
      *(undefined8 *)(lVar4 + 0x70) = in_stack_00000018;
      thunk_FUN_036b7ad0(lVar4 + 0x60,0);
    }
    puVar2 = PTR_DAT_07a17cf8;
    if (unaff_w19 != -1) {
      lVar5 = *(long *)PTR_DAT_07a17cf8;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar5 = *(long *)puVar2;
      }
      puVar7 = *(undefined8 **)(lVar5 + 0xb8);
      lVar8 = puVar7[2];
      if (lVar8 == 0) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          puVar7 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar9 = *puVar7;
        lVar8 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a0d9c8);
        Newtonsoft_Json_Serialization_JsonDictionaryContract__get_HasParameterizedCreator
                  (lVar8,uVar9,*(undefined8 *)PTR_DAT_07a17cf0);
        plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
        *plVar6 = lVar8;
        thunk_FUN_036b7ad0(plVar6,lVar8);
      }
      lVar5 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a0d9d8);
      FUN_05e5d2dc(lVar5,0);
      FUN_05e8b280(lVar5,lVar8,lVar4,unaff_w19,0xffffffffffffffff);
      if (lVar4 != 0) {
        plVar6 = (long *)(lVar4 + 0x78);
        *plVar6 = lVar5;
        thunk_FUN_036b7ad0(plVar6,lVar5);
        if (*plVar6 != 0) {
          return lVar4;
        }
      }
LAB_05e94bec:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_079f5558 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar4 = FUN_05e9447c(uVar9);
  }
  return lVar4;
}


