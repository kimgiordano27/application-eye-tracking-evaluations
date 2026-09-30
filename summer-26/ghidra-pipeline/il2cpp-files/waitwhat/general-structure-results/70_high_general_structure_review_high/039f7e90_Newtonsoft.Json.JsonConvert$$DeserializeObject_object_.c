/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<object>
ENTRY_POINT: 039f7e90
PROGRAM: waitwhat-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__DeserializeObject<object>(ushort *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  long unaff_x22;
  undefined8 in_stack_00000008;
  
  if ((*param_1 & 1) == 0) {
    param_2 = FUN_031c09d4();
  }
  lVar2 = *(long *)(*(long *)(param_2 + 0xc0) + 8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_031c09d4();
  }
  lVar5 = *(long *)(unaff_x22 + 0x38);
  if (*(char *)(*(long *)(lVar2 + 0xb8) + 0xc) != '\0') {
    plVar3 = (long *)FUN_039fac20(*(undefined8 *)(lVar5 + 0x38));
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar4 = (**(code **)(*plVar3 + 0x1b8))();
    if ((uVar4 & 1) != 0) goto LAB_039f7f7c;
    lVar5 = *(long *)(unaff_x22 + 0x38);
  }
  uVar4 = FUN_03bab228(&stack0x00000018,&stack0x00000008,*(undefined8 *)(lVar5 + 0x58));
  uVar1 = in_stack_00000008;
  if ((uVar4 & 1) != 0) {
    lVar2 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x68);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_031c09d4(lVar2);
    }
    plVar3 = (long *)thunk_FUN_031c3cac(uVar1,lVar2);
    if (plVar3 == (long *)0x0) {
      FUN_03bcfa80();
      return;
    }
    lVar2 = *plVar3;
    lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x70);
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)(lVar5 + 0x20)) {
          lVar2 = lVar2 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar5 + 0x50)) * 0x10 + 0x138;
          goto LAB_039f7fc8;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    lVar2 = FUN_031c0d08(plVar3);
LAB_039f7fc8:
    lVar2 = thunk_FUN_031a5ef4(*(undefined8 *)(lVar2 + 8),lVar5);
    (**(code **)(lVar2 + 8))(plVar3);
    return;
  }
LAB_039f7f7c:
  FUN_048022d4();
  FUN_06bc5f50();
  return;
}


