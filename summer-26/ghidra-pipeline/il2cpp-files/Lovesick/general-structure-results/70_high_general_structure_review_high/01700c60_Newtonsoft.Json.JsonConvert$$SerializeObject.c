/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 01700c60
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonConvert__SerializeObject(ulong param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_5282);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_JsonSchemaNode>_MoveNext__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    *(undefined1 *)(unaff_x20 + 0x986) = 1;
  }
  plVar2 = (long *)thunk_FUN_00d6225c();
  puVar1 = 
  Method_System_Collections_Generic_Dictionary_Enumerator<string,_JsonSchemaNode>_MoveNext__;
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)thunk_FUN_00d6225c();
    if (plVar2 == (long *)0x0) {
      if (unaff_x21 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01700d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*unaff_x21 + 0x168))();
        return uVar4;
      }
      return **(undefined8 **)
               (*(long *)
                 System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo + 0xb8
               );
    }
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_01700d98;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_00d59724(plVar2,*(long *)puVar1,0);
LAB_01700d98:
                    /* WARNING: Could not recover jumptable at 0x01700db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)*puVar3)(plVar2,0);
    return uVar4;
  }
  lVar5 = *plVar2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x22) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xf) * 0x10 + 0x138);
        goto LAB_01700d50;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_00d59724(plVar2,*unaff_x22,0xf);
LAB_01700d50:
                    /* WARNING: Could not recover jumptable at 0x01700d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)*puVar3)(plVar2);
  return uVar4;
}


