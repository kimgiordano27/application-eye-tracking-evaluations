/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_TypeNameHandling
ENTRY_POINT: 0747c040
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(void)

{
  undefined1 in_ZR;
  ushort uVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int unaff_w19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  short unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  int unaff_w26;
  uint unaff_w27;
  ushort uVar6;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  int iStack000000000000000c;
  
  while (!(bool)in_ZR) {
LAB_0747c07c:
    unaff_w21 = unaff_w21 + 1;
    if (*(int *)(unaff_x20 + 0x10) <= unaff_w21) {
      return;
    }
    if (*(int *)(*(long *)(unaff_x22 + 0x88) + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    iVar3 = FUN_07451744();
    if (iVar3 == 0xb) {
LAB_0747c060:
      uVar1 = FUN_07363804();
      if (0x7f < uVar1) break;
      goto LAB_0747c07c;
    }
    if (iVar3 == 0xe) {
      sVar2 = FUN_07363804();
      if (sVar2 == 0) break;
      goto LAB_0747c060;
    }
    if (iVar3 - 0x10U < 2) break;
    uVar1 = FUN_07363804();
    uVar6 = NEON_umaxv(CONCAT26(-(ushort)((ushort)(uVar1 + (short)((ulong)unaff_d8 >> 0x30)) <
                                         (ushort)((ulong)unaff_d9 >> 0x30)),
                                CONCAT24(-(ushort)((ushort)(uVar1 + (short)((ulong)unaff_d8 >> 0x20)
                                                           ) < (ushort)((ulong)unaff_d9 >> 0x20)),
                                         CONCAT22(-(ushort)((ushort)(uVar1 + (short)((ulong)unaff_d8
                                                                                    >> 0x10)) <
                                                           (ushort)((ulong)unaff_d9 >> 0x10)),
                                                  -(ushort)((ushort)(uVar1 + (short)unaff_d8) <
                                                           (ushort)unaff_d9)))),2);
    if (((uVar6 & 1) != 0) || ((ushort)(uVar1 + unaff_w23) < 6)) break;
    if (unaff_w24 < uVar1) {
      if ((unaff_w25 + (uint)uVar1 < 0x1b) &&
         ((unaff_w26 << (ulong)(unaff_w25 + (uint)uVar1 & 0x1f) & unaff_w27) != 0)) break;
      goto LAB_0747c07c;
    }
    if (uVar1 - 0x340 < 2) break;
    in_ZR = uVar1 == unaff_w24;
  }
  iStack000000000000000c = unaff_w19 + unaff_w21;
  uVar4 = thunk_FUN_0406db0c(*(undefined8 *)(unaff_x22 + 0x48),&stack0x0000000c);
  uVar5 = thunk_FUN_04097b88(PTR_DAT_08fa1230);
  uVar4 = FUN_0735fe18(uVar5,uVar4,0);
  thunk_FUN_04097b88(PTR_DAT_08f66298);
  uVar5 = thunk_FUN_0406deb8();
  FUN_0744a62c(uVar5,uVar4,0);
  uVar4 = thunk_FUN_04097b88(PTR_DAT_08fa1238);
                    /* WARNING: Subroutine does not return */
  FUN_04031750(uVar5,uVar4);
}


