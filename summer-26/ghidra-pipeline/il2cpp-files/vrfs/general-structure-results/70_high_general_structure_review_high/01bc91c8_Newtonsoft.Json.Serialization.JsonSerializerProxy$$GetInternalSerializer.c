/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$GetInternalSerializer
ENTRY_POINT: 01bc91c8
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


int Newtonsoft_Json_Serialization_JsonSerializerProxy__GetInternalSerializer
              (undefined8 param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 *puVar4;
  long unaff_x23;
  undefined8 uVar5;
  
  puVar4 = *(undefined8 **)(unaff_x22 + 0xc10);
  uVar5 = *(undefined8 *)(unaff_x23 + 0xe88);
  while( true ) {
    if ((DAT_0722bd13 & 1) == 0) {
      thunk_FUN_0159f088(puVar4);
      thunk_FUN_0159f088();
      thunk_FUN_0159f088();
      thunk_FUN_0159f088(uVar5);
      DAT_0722bd13 = 1;
    }
    if (param_3 == 0x37) {
      return 0x37;
    }
    if (param_2 == 0) break;
    uVar1 = FUN_02679270(param_2,param_3,0);
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_016466fc(*unaff_x20);
    }
    uVar2 = FUN_051d2ac0(uVar1,0,0);
    if ((uVar2 & 1) != 0) {
      return param_3;
    }
    lVar3 = *unaff_x21;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar3 = *unaff_x21;
    }
    if ((**(long **)(lVar3 + 0xb8) == 0) ||
       (lVar3 = FUN_03d20510(**(long **)(lVar3 + 0xb8),param_3,*puVar4), lVar3 == 0)) break;
    param_3 = *(int *)(lVar3 + 0x14);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


