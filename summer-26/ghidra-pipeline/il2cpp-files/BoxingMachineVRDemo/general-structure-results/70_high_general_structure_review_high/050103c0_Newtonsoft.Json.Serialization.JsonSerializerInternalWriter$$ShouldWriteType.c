/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteType
ENTRY_POINT: 050103c0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteType(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  short *psVar5;
  int iVar6;
  long unaff_x19;
  ulong unaff_x20;
  ulong uVar7;
  int unaff_w21;
  long unaff_x22;
  long lVar8;
  ulong unaff_x23;
  undefined4 unaff_w24;
  long lVar9;
  long unaff_x25;
  long unaff_x29;
  short asStack_e [7];
  
  FUN_04ea5848(param_1,unaff_w24,0);
  if (-1 < (int)unaff_x20) {
    if ((unaff_x23 & 1) != 0) {
      if (unaff_x22 != 0) {
        lVar8 = *(long *)(unaff_x22 + 0x28);
        if (DAT_06b79233 == '\0') {
          FUN_02d6084c(PTR_DAT_067714a8);
          DAT_06b79233 = '\x01';
        }
        if (lVar8 != 0) {
          if (*(int *)(lVar8 + 0x10) == 1) {
            uVar2 = *(uint *)(unaff_x19 + 0x18);
            if ((int)uVar2 < (int)*(uint *)(unaff_x19 + 0x10)) {
              if (*(uint *)(unaff_x19 + 0x10) <= uVar2) goto LAB_0501053c;
              lVar9 = *(long *)(unaff_x19 + 8);
              uVar4 = FUN_04e87a5c(lVar8,0,0);
              *(undefined2 *)(lVar9 + (long)(int)uVar2 * 2) = uVar4;
              *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
              goto LAB_05010470;
            }
          }
          FUN_04ea5974();
          goto LAB_05010470;
        }
      }
      goto LAB_05010538;
    }
    goto LAB_05010470;
  }
  if (unaff_x22 == 0) {
LAB_05010538:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar8 = *(long *)(unaff_x22 + 0x30);
  if (DAT_06b79233 == '\0') {
    FUN_02d6084c(PTR_DAT_067714a8);
    DAT_06b79233 = '\x01';
  }
  if (lVar8 == 0) goto LAB_05010538;
  if (*(int *)(lVar8 + 0x10) == 1) {
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    if ((int)*(uint *)(unaff_x19 + 0x10) <= (int)uVar2) goto LAB_05010448;
    if (*(uint *)(unaff_x19 + 0x10) <= uVar2) {
LAB_0501053c:
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    lVar9 = *(long *)(unaff_x19 + 8);
    uVar4 = FUN_04e87a5c(lVar8,0,0);
    *(undefined2 *)(lVar9 + (long)(int)uVar2 * 2) = uVar4;
    *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
  }
  else {
LAB_05010448:
    FUN_04ea5974();
  }
  unaff_x20 = (ulong)(uint)-(int)unaff_x20;
LAB_05010470:
  if (*(int *)(*(long *)PTR_DAT_06777060 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  psVar5 = asStack_e + 1;
  if ((-1 < unaff_w21 + -1) || ((int)unaff_x20 != 0)) {
    iVar6 = unaff_w21 + -2;
    do {
      do {
        uVar2 = (uint)unaff_x20;
        uVar7 = (unaff_x20 & 0xffffffff) / 10;
        psVar5 = psVar5 + -1;
        *psVar5 = (short)unaff_x20 + (short)((unaff_x20 & 0xffffffff) / 10) * -10 + 0x30;
        iVar3 = iVar6 + -1;
        bVar1 = -1 < iVar6;
        unaff_x20 = uVar7;
        iVar6 = iVar3;
      } while (bVar1);
    } while (9 < uVar2);
  }
  FUN_04ea5e10();
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


