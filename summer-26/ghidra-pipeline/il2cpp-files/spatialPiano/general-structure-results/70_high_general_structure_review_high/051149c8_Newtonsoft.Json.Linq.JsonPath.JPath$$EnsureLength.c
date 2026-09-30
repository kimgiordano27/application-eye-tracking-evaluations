/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.JPath$$EnsureLength
ENTRY_POINT: 051149c8
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


void Newtonsoft_Json_Linq_JsonPath_JPath__EnsureLength(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x19;
  long *unaff_x20;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02f6670c(param_1);
  }
  lVar3 = FUN_050e4454();
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_02f45174(lVar3,*(undefined8 *)(*unaff_x20 + 0x40)), lVar4 == 0)) {
LAB_05114ad4:
    uVar6 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar6,0);
  }
  puVar2 = Unity_AppUI_UI_Checkbox_UxmlSerializedData_var;
  if ((int)unaff_x20[3] != 0) {
    unaff_x20[4] = lVar3;
    lVar3 = FUN_050e4454(*(undefined8 *)puVar2,0);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_02f45174(lVar3,*(undefined8 *)(*unaff_x20 + 0x40)), lVar4 == 0))
    goto LAB_05114ad4;
    if ((*(uint *)(unaff_x20 + 3) & 0xfffffffe) != 0) {
      unaff_x20[5] = lVar3;
      plVar5 = (long *)FUN_050ef4e0();
      if (plVar5 == (long *)0x0) {
        *(undefined8 *)(unaff_x19 + 0x28) = 0;
      }
      else {
        bVar1 = *(byte *)(*(long *)PTR_DAT_067da158 + 0x130);
        if (*(byte *)(*plVar5 + 0x130) < bVar1) {
          plVar5 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
                 *(long *)PTR_DAT_067da158) {
          plVar5 = (long *)0x0;
        }
        *(long **)(unaff_x19 + 0x28) = plVar5;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


