/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteReference
ENTRY_POINT: 0500f73c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteReference(long *param_1)

{
  uint uVar1;
  short sVar2;
  undefined2 uVar3;
  long unaff_x19;
  long unaff_x22;
  long lVar4;
  int iVar5;
  long *unaff_x25;
  long lVar6;
  long lVar7;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    if (0 < *(int *)(lVar4 + 0x10)) {
      iVar5 = 0;
      do {
        sVar2 = FUN_04e87a5c(lVar4,iVar5,0);
        if (sVar2 == 0x2d) {
          if (unaff_x19 == 0) goto LAB_0500f8d0;
          lVar6 = *(long *)(unaff_x19 + 0x30);
          if (DAT_06b79233 == '\0') {
            FUN_02d6084c(PTR_DAT_067714a8);
            DAT_06b79233 = '\x01';
          }
          if (lVar6 == 0) goto LAB_0500f8d0;
          if (*(int *)(lVar6 + 0x10) == 1) {
            uVar1 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar1 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar1) goto LAB_0500f8d4;
              lVar7 = *(long *)(unaff_x22 + 8);
              uVar3 = FUN_04e87a5c(lVar6,0,0);
              *(undefined2 *)(lVar7 + (long)(int)uVar1 * 2) = uVar3;
              *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
              goto LAB_0500f8a0;
            }
          }
          FUN_04ea5974();
        }
        else if (sVar2 == 0x23) {
          if (unaff_x19 == 0) goto LAB_0500f8d0;
          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_0500f154();
        }
        else {
          if (DAT_06b78666 == '\0') {
            FUN_02d6084c(PTR_DAT_067714a8);
            DAT_06b78666 = '\x01';
          }
          uVar1 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar1 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar1) {
LAB_0500f8d4:
                    /* WARNING: Subroutine does not return */
              FUN_02d60af0();
            }
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar1 * 2) = sVar2;
            *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
          }
          else {
            FUN_04ea5848();
          }
        }
LAB_0500f8a0:
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(lVar4 + 0x10));
    }
    return;
  }
LAB_0500f8d0:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


