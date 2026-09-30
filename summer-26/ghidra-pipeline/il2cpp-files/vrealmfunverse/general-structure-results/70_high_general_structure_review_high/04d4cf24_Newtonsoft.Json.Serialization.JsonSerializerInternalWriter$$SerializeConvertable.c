/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeConvertable
ENTRY_POINT: 04d4cf24
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeConvertable
          (long param_1,ulong param_2)

{
  int iVar1;
  short sVar2;
  undefined8 uVar3;
  long unaff_x19;
  int iVar4;
  uint uVar5;
  ulong unaff_x20;
  
  do {
    sVar2 = FUN_04c045f0(param_1,param_2,0);
    iVar4 = (int)unaff_x20;
    if ((sVar2 == 0xd) || (sVar2 == 10)) {
      if (*(long *)(unaff_x19 + 0x18) != 0) {
        uVar3 = FUN_04c0c288(*(long *)(unaff_x19 + 0x18),*(int *)(unaff_x19 + 0x20),
                             iVar4 - *(int *)(unaff_x19 + 0x20),0);
        iVar4 = iVar4 + 1;
        *(int *)(unaff_x19 + 0x20) = iVar4;
        if (sVar2 != 0xd) {
          return uVar3;
        }
        if (*(int *)(unaff_x19 + 0x24) <= iVar4) {
          return uVar3;
        }
        if (*(long *)(unaff_x19 + 0x18) != 0) {
          sVar2 = FUN_04c045f0(*(long *)(unaff_x19 + 0x18),iVar4,0);
          if (sVar2 != 10) {
            return uVar3;
          }
          uVar5 = *(int *)(unaff_x19 + 0x20) + 1;
LAB_04d4cfe8:
          *(uint *)(unaff_x19 + 0x20) = uVar5;
          return uVar3;
        }
      }
      goto LAB_04d4d000;
    }
    uVar5 = iVar4 + 1;
    param_2 = (ulong)uVar5;
    if (*(int *)(unaff_x19 + 0x24) <= (int)uVar5) {
      iVar1 = *(int *)(unaff_x19 + 0x20);
      if (iVar4 < iVar1) {
        return 0;
      }
      if (*(long *)(unaff_x19 + 0x18) != 0) {
        uVar3 = FUN_04c0c288(*(long *)(unaff_x19 + 0x18),iVar1,uVar5 - iVar1,0);
        goto LAB_04d4cfe8;
      }
      goto LAB_04d4d000;
    }
    param_1 = *(long *)(unaff_x19 + 0x18);
    unaff_x20 = param_2;
    if (param_1 == 0) {
LAB_04d4d000:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  } while( true );
}


