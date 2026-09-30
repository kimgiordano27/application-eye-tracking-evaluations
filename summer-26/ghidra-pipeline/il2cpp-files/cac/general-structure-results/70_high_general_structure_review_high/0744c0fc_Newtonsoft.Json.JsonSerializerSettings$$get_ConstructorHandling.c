/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_ConstructorHandling
ENTRY_POINT: 0744c0fc
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_ConstructorHandling
               (undefined8 param_1,undefined8 param_2,int param_3)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  long in_x9;
  long unaff_x20;
  int iVar5;
  long unaff_x22;
  ushort uVar6;
  undefined8 unaff_d8;
  undefined8 uVar7;
  int iStack000000000000000c;
  
  uVar7 = *(undefined8 *)(in_x9 + 0xba8);
  iVar5 = 0;
  do {
    if (*(int *)(*(long *)(unaff_x22 + 0x88) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    iVar3 = FUN_07420bf4();
    if (iVar3 == 0xb) {
LAB_0744c1d0:
      uVar1 = FUN_073213d0();
      if (0x7f < uVar1) {
LAB_0744c218:
        iStack000000000000000c = param_3 + iVar5;
        uVar7 = thunk_FUN_03f4e2c4(*(undefined8 *)(unaff_x22 + 0x48),&stack0x0000000c);
        uVar4 = thunk_FUN_03f786f8(PTR_DAT_09131128);
        uVar7 = FUN_0731d5f8(uVar4,uVar7,0);
        thunk_FUN_03f786f8(PTR_DAT_0910e988);
        uVar4 = thunk_FUN_03f4e68c();
        FUN_07419a00(uVar4,uVar7,0);
        uVar7 = thunk_FUN_03f786f8(PTR_DAT_09131130);
                    /* WARNING: Subroutine does not return */
        FUN_03f134f0(uVar4,uVar7);
      }
    }
    else {
      if (iVar3 == 0xe) {
        sVar2 = FUN_073213d0();
        if (sVar2 == 0) goto LAB_0744c218;
        goto LAB_0744c1d0;
      }
      if (iVar3 - 0x10U < 2) goto LAB_0744c218;
      uVar1 = FUN_073213d0();
      uVar6 = NEON_umaxv(CONCAT26(-(ushort)((ushort)(uVar1 + (short)((ulong)unaff_d8 >> 0x30)) <
                                           (ushort)((ulong)uVar7 >> 0x30)),
                                  CONCAT24(-(ushort)((ushort)(uVar1 + (short)((ulong)unaff_d8 >>
                                                                             0x20)) <
                                                    (ushort)((ulong)uVar7 >> 0x20)),
                                           CONCAT22(-(ushort)((ushort)(uVar1 + (short)((ulong)
                                                  unaff_d8 >> 0x10)) <
                                                  (ushort)((ulong)uVar7 >> 0x10)),
                                                  -(ushort)((ushort)(uVar1 + (short)unaff_d8) <
                                                           (ushort)uVar7)))),2);
      if (((uVar6 & 1) != 0) || ((ushort)(uVar1 + 0xdf96) < 6)) goto LAB_0744c218;
      if (uVar1 < 0x200f) {
        if ((uVar1 - 0x340 < 2) || (uVar1 == 0x200e)) goto LAB_0744c218;
      }
      else if ((uVar1 - 0x200f < 0x1b) && ((1 << (ulong)(uVar1 - 0x200f & 0x1f) & 0x6000001U) != 0))
      goto LAB_0744c218;
    }
    iVar5 = iVar5 + 1;
    if (*(int *)(unaff_x20 + 0x10) <= iVar5) {
      return;
    }
  } while( true );
}


