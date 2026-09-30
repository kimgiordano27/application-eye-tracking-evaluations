/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<object>
ENTRY_POINT: 04efb720
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04efb8d8) */

int Newtonsoft_Json_JsonConvert__DeserializeObject<object>(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  int iVar8;
  
  lVar2 = FUN_03d8f26c(param_2);
  lVar5 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar2) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_04efb79c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_03d8f370();
LAB_04efb79c:
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar1 = PTR_DAT_091a1508;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  iVar8 = 0;
  do {
    lVar2 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04efb80c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03d8f370(plVar4,*(long *)puVar1,0);
LAB_04efb80c:
    uVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        return iVar8;
      }
      lVar2 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar6 == 0) goto LAB_04efb86c;
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    if (iVar8 == 0x7fffffff) {
      FUN_03d2d558();
                    /* WARNING: Subroutine does not return */
      FUN_03d2d414();
    }
    iVar8 = iVar8 + 1;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_091a14e0) {
      puVar3 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
      goto FUN_04efb888;
    }
  }
LAB_04efb86c:
  puVar3 = (undefined8 *)FUN_03d8f370(plVar4,*(long *)PTR_DAT_091a14e0,0);
FUN_04efb888:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return iVar8;
}


