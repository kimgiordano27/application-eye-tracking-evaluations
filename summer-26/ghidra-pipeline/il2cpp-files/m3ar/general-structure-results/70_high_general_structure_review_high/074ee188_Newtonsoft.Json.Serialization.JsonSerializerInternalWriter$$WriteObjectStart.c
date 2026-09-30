/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteObjectStart
ENTRY_POINT: 074ee188
PROGRAM: m3ar-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteObjectStart(void)

{
  short sVar1;
  undefined2 uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
  int iVar6;
  long lVar7;
  long lVar8;
  
  *(undefined1 *)(unaff_x23 + 0xf1f) = 1;
  uVar3 = FUN_074f3a04();
  lVar4 = *(long *)PTR_DAT_08f9f500;
  if ((uVar3 & 1) == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar4 = *(long *)PTR_DAT_08f9f500;
    }
    if ((unaff_x19 == 0) || (lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10), lVar4 == 0))
    goto LAB_074ee3c0;
    uVar5 = *(uint *)(unaff_x19 + 0xc0);
  }
  else {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar4 = *(long *)PTR_DAT_08f9f500;
    }
    if ((unaff_x19 == 0) || (lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18), lVar4 == 0))
    goto LAB_074ee3c0;
    uVar5 = *(uint *)(unaff_x19 + 0xc4);
  }
  if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_074ee3c4:
                    /* WARNING: Subroutine does not return */
    FUN_04031894();
  }
  lVar4 = *(long *)(lVar4 + (long)(int)uVar5 * 8 + 0x20);
  if (lVar4 != 0) {
    if (0 < *(int *)(lVar4 + 0x10)) {
      iVar6 = 0;
      do {
        sVar1 = FUN_07363804(lVar4,iVar6,0);
        if (sVar1 == 0x2d) {
          lVar7 = *(long *)(unaff_x19 + 0x30);
joined_r0x074ee32c:
          if (DAT_09546f42 == '\0') {
            FUN_0403162c(PTR_DAT_08f8ca68);
            DAT_09546f42 = '\x01';
          }
          if (lVar7 == 0) goto LAB_074ee3c0;
          if (*(int *)(lVar7 + 0x10) == 1) {
            uVar5 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar5 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar5 < *(uint *)(unaff_x22 + 0x10)) {
                lVar8 = *(long *)(unaff_x22 + 8);
                uVar2 = FUN_07363804(lVar7,0,0);
                *(undefined2 *)(lVar8 + (long)(int)uVar5 * 2) = uVar2;
                *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
                goto LAB_074ee390;
              }
              goto LAB_074ee3c4;
            }
          }
          FUN_07386af0();
        }
        else {
          if (sVar1 == 0x25) {
            lVar7 = *(long *)(unaff_x19 + 0x90);
            goto joined_r0x074ee32c;
          }
          if (sVar1 == 0x23) {
            if (*(int *)(*(long *)PTR_DAT_08f9f500 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            FUN_074ed3cc();
          }
          else {
            if (DAT_095462cd == '\0') {
              FUN_0403162c(PTR_DAT_08f8ca68);
              DAT_095462cd = '\x01';
            }
            uVar5 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar5 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar5) goto LAB_074ee3c4;
              *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar5 * 2) = sVar1;
            }
            else {
              FUN_073869c4();
            }
          }
        }
LAB_074ee390:
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar4 + 0x10));
    }
    return;
  }
LAB_074ee3c0:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


