/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_Converters
ENTRY_POINT: 058baf60
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_JsonSerializerSettings__get_Converters
              (undefined2 *param_1,int param_2,undefined2 *param_3,int param_4)

{
  int iVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long unaff_x21;
  bool bVar7;
  long unaff_x24;
  long *plVar8;
  bool bVar9;
  int iVar10;
  
  plVar8 = *(long **)(unaff_x24 + 0x380);
  if ((*(byte *)(unaff_x21 + 0x1f) & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07280380);
    *(undefined1 *)(unaff_x21 + 0x1f) = 1;
  }
  if (*(int *)(*plVar8 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  plVar8 = (long *)FUN_058e6bb4(0);
  if (plVar8 != (long *)0x0) {
    plVar8 = (long *)(**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
    bVar9 = 0 < param_2;
    bVar7 = 0 < param_4;
    if ((0 < param_2) && (0 < param_4)) {
      if (plVar8 == (long *)0x0) goto LAB_058bb0c0;
      iVar6 = param_4;
      if (param_2 - 1U <= param_4 - 1U) {
        iVar6 = param_2;
      }
      bVar7 = true;
      iVar10 = -1;
      bVar9 = true;
      do {
        sVar2 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*param_1,*(undefined8 *)(*plVar8 + 0x1d0));
        sVar3 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*param_3,*(undefined8 *)(*plVar8 + 0x1d0));
        if (sVar2 != sVar3) break;
        iVar1 = iVar10 + 2;
        iVar10 = iVar10 + 1;
        bVar9 = iVar1 < param_2;
        param_1 = param_1 + 1;
        bVar7 = iVar1 < param_4;
        param_3 = param_3 + 1;
      } while (iVar6 + -1 != iVar10);
    }
    if (bVar9) {
      if (bVar7) {
        if (plVar8 == (long *)0x0) goto LAB_058bb0c0;
        uVar4 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*param_1,*(undefined8 *)(*plVar8 + 0x1d0));
        uVar5 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*param_3,*(undefined8 *)(*plVar8 + 0x1d0));
        iVar6 = (uVar4 & 0xffff) - (uVar5 & 0xffff);
      }
      else {
        iVar6 = 1;
      }
    }
    else {
      iVar6 = -(uint)bVar7;
    }
    return iVar6;
  }
LAB_058bb0c0:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


