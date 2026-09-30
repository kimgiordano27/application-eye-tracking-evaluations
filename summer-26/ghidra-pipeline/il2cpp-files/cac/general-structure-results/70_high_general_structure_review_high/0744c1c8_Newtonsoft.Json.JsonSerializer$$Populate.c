/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Populate
ENTRY_POINT: 0744c1c8
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__Populate(short param_1)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int unaff_w19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  short unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  int unaff_w26;
  uint unaff_w27;
  ushort uVar5;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  int iStack000000000000000c;
  
code_r0x0744c1c8:
  if (param_1 != 0) {
    while (uVar1 = FUN_073213d0(), uVar1 < 0x80) {
      while( true ) {
        unaff_w21 = unaff_w21 + 1;
        if (*(int *)(unaff_x20 + 0x10) <= unaff_w21) {
          return;
        }
        if (*(int *)(*(long *)(unaff_x22 + 0x88) + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        iVar2 = FUN_07420bf4();
        if (iVar2 == 0xb) break;
        if (iVar2 == 0xe) {
          param_1 = FUN_073213d0();
          goto code_r0x0744c1c8;
        }
        if (iVar2 - 0x10U < 2) goto LAB_0744c218;
        uVar1 = FUN_073213d0();
        uVar5 = NEON_umaxv(CONCAT26(-(ushort)((ushort)(uVar1 + (short)((ulong)unaff_d8 >> 0x30)) <
                                             (ushort)((ulong)unaff_d9 >> 0x30)),
                                    CONCAT24(-(ushort)((ushort)(uVar1 + (short)((ulong)unaff_d8 >>
                                                                               0x20)) <
                                                      (ushort)((ulong)unaff_d9 >> 0x20)),
                                             CONCAT22(-(ushort)((ushort)(uVar1 + (short)((ulong)
                                                  unaff_d8 >> 0x10)) <
                                                  (ushort)((ulong)unaff_d9 >> 0x10)),
                                                  -(ushort)((ushort)(uVar1 + (short)unaff_d8) <
                                                           (ushort)unaff_d9)))),2);
        if (((uVar5 & 1) != 0) || ((ushort)(uVar1 + unaff_w23) < 6)) goto LAB_0744c218;
        if (unaff_w24 < uVar1) {
          if ((unaff_w25 + (uint)uVar1 < 0x1b) &&
             ((unaff_w26 << (ulong)(unaff_w25 + (uint)uVar1 & 0x1f) & unaff_w27) != 0))
          goto LAB_0744c218;
        }
        else if ((uVar1 - 0x340 < 2) || (uVar1 == unaff_w24)) goto LAB_0744c218;
      }
    }
  }
LAB_0744c218:
  iStack000000000000000c = unaff_w19 + unaff_w21;
  uVar3 = thunk_FUN_03f4e2c4(*(undefined8 *)(unaff_x22 + 0x48),&stack0x0000000c);
  uVar4 = thunk_FUN_03f786f8(PTR_DAT_09131128);
  uVar3 = FUN_0731d5f8(uVar4,uVar3,0);
  thunk_FUN_03f786f8(PTR_DAT_0910e988);
  uVar4 = thunk_FUN_03f4e68c();
  FUN_07419a00(uVar4,uVar3,0);
  uVar3 = thunk_FUN_03f786f8(PTR_DAT_09131130);
                    /* WARNING: Subroutine does not return */
  FUN_03f134f0(uVar4,uVar3);
}


