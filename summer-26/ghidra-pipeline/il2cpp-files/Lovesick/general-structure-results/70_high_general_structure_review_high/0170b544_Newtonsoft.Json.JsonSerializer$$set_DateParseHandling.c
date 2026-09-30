/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_DateParseHandling
ENTRY_POINT: 0170b544
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_JsonSerializer__set_DateParseHandling
              (undefined2 *param_1,int param_2,undefined2 *param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  bool bVar9;
  int iVar10;
  
  puVar3 = Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__;
  if ((DAT_037789ea & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    DAT_037789ea = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar8 = (long *)FUN_01731954(0);
  if (plVar8 != (long *)0x0) {
    plVar8 = (long *)(**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
    bVar9 = 0 < param_2;
    bVar2 = 0 < param_4;
    if ((0 < param_2) && (0 < param_4)) {
      if (plVar8 == (long *)0x0) goto LAB_0170b690;
      iVar10 = 1;
      do {
        sVar4 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*param_1,*(undefined8 *)(*plVar8 + 0x1d0));
        sVar5 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*param_3,*(undefined8 *)(*plVar8 + 0x1d0));
        if (sVar4 != sVar5) goto LAB_0170b638;
        bVar2 = iVar10 < param_4;
        param_1 = param_1 + 1;
        param_3 = param_3 + 1;
        bVar9 = iVar10 < param_2;
      } while ((iVar10 < param_2) && (bVar1 = iVar10 < param_4, iVar10 = iVar10 + 1, bVar1));
    }
    if (bVar9) {
      if (bVar2) {
        if (plVar8 == (long *)0x0) goto LAB_0170b690;
LAB_0170b638:
        uVar6 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*param_1,*(undefined8 *)(*plVar8 + 0x1d0));
        uVar7 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*param_3,*(undefined8 *)(*plVar8 + 0x1d0));
        iVar10 = (uVar6 & 0xffff) - (uVar7 & 0xffff);
      }
      else {
        iVar10 = 1;
      }
    }
    else {
      iVar10 = -(uint)bVar2;
    }
    return iVar10;
  }
LAB_0170b690:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


