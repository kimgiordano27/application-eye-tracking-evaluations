/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.ScanFilter$$.ctor
ENTRY_POINT: 051149a0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void Newtonsoft_Json_Linq_JsonPath_ScanFilter___ctor(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar6 = *(undefined8 **)(unaff_x20 + 0xaf0);
  plVar3 = (long *)FUN_02f0880c(**(undefined8 **)(param_1 + 0x1a8),2);
  uVar7 = *puVar6;
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
  }
  lVar4 = FUN_050e4454(uVar7,0);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_02f45174(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_05114ad4:
    uVar7 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar7,0);
  }
  puVar2 = Unity_AppUI_UI_Checkbox_UxmlSerializedData_var;
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    lVar4 = FUN_050e4454(*(undefined8 *)puVar2,0);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_02f45174(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_05114ad4;
    if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
      plVar3[5] = lVar4;
      plVar3 = (long *)FUN_050ef4e0();
      if (plVar3 == (long *)0x0) {
        *(undefined8 *)(unaff_x19 + 0x28) = 0;
      }
      else {
        bVar1 = *(byte *)(*(long *)PTR_DAT_067da158 + 0x130);
        if (*(byte *)(*plVar3 + 0x130) < bVar1) {
          plVar3 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) !=
                 *(long *)PTR_DAT_067da158) {
          plVar3 = (long *)0x0;
        }
        *(long **)(unaff_x19 + 0x28) = plVar3;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


