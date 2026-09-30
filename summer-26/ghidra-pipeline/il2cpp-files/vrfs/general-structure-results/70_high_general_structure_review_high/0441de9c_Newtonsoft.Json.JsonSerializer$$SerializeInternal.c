/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$SerializeInternal
ENTRY_POINT: 0441de9c
PROGRAM: vrfs-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_JsonSerializer__SerializeInternal(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *unaff_x19;
  long *unaff_x21;
  
  plVar1 = (long *)thunk_FUN_015d0480();
  if (plVar1 == (long *)0x0) {
    lVar4 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e406b0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    FUN_02d76b34(lVar4,0);
    FUN_01600498();
  }
  else {
    lVar4 = *plVar1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_0441df2c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_015c2a80(plVar1,*unaff_x21,2);
LAB_0441df2c:
    uVar3 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    *unaff_x19 = uVar3;
    thunk_FUN_01656ef8();
  }
  return *unaff_x19;
}


