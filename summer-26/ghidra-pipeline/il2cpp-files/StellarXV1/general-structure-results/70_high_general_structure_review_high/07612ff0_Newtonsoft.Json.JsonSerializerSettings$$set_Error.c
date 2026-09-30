/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_Error
ENTRY_POINT: 07612ff0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_Error(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *in_x10;
  int *piVar7;
  long *unaff_x19;
  
  do {
    if ((bool)in_ZR) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_0761301c:
      plVar3 = (long *)(*(code *)*puVar2)();
      puVar1 = PTR_DAT_092860c8;
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      do {
        lVar5 = *plVar3;
        lVar4 = *(long *)puVar1;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar4) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_07613084;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_040b1e00(plVar3,lVar4,0);
LAB_07613084:
        uVar6 = (*(code *)*puVar2)(plVar3,puVar2[1]);
        if ((uVar6 & 1) == 0) {
          return;
        }
        lVar5 = *plVar3;
        lVar4 = *(long *)puVar1;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar4) {
              puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_076130e4;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_040b1e00(plVar3,lVar4,1);
LAB_076130e4:
        (*(code *)*puVar2)(plVar3,puVar2[1]);
        (**(code **)(*unaff_x19 + 0x228))();
      } while( true );
    }
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_040b1e00();
      goto LAB_0761301c;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  } while( true );
}


