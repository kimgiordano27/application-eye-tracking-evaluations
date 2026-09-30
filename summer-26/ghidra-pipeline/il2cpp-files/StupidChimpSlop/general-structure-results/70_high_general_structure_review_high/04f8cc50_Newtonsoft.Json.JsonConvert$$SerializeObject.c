/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 04f8cc50
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long * Newtonsoft_Json_JsonConvert__SerializeObject(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  long in_x10;
  int *piVar6;
  long *unaff_x19;
  undefined8 uVar7;
  
  puVar1 = PTR_DAT_066561f0;
  if ((*(long *)(in_x10 + -8) == in_x9) && ((char)unaff_x19[0x19] == '\0')) {
    plVar3 = (long *)unaff_x19[6];
    thunk_FUN_02d5bde4();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x04f8cd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar3 = (long *)(**(code **)(*unaff_x19 + 0x218))();
      return plVar3;
    }
  }
  else {
    plVar3 = unaff_x19;
    if (param_1 != *(long *)PTR_DAT_066561f0) {
      uVar7 = *(undefined8 *)PTR_DAT_066572a0;
      if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      FUN_050121a8(uVar7,0);
      lVar4 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06650dd0) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_04f8cd08;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_02d87540();
LAB_04f8cd08:
      plVar3 = (long *)(*(code *)*puVar2)();
      if ((plVar3 == (long *)0x0) || (*plVar3 != *(long *)puVar1)) {
        plVar3 = (long *)FUN_04f8cd74();
        return plVar3;
      }
    }
  }
  return plVar3;
}


