/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_DefaultValueHandling
ENTRY_POINT: 0744c0c0
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_DefaultValueHandling
               (undefined8 param_1,long param_2,int param_3)

{
  undefined *puVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  ushort uVar8;
  int iStack000000000000000c;
  
  puVar1 = PTR_DAT_0910b550;
  uVar6 = DAT_018c3ba8;
  uVar5 = DAT_018c3918;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  if (0 < *(int *)(param_2 + 0x10)) {
    iVar7 = 0;
    do {
      if (*(int *)(*(long *)(puVar1 + 0x88) + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      iVar4 = FUN_07420bf4(param_2,iVar7,0);
      if (iVar4 == 0xb) {
LAB_0744c1d0:
        uVar2 = FUN_073213d0(param_2,iVar7,0);
        if (0x7f < uVar2) {
LAB_0744c218:
          iStack000000000000000c = param_3 + iVar7;
          uVar5 = thunk_FUN_03f4e2c4(*(undefined8 *)(puVar1 + 0x48),&stack0x0000000c);
          uVar6 = thunk_FUN_03f786f8(PTR_DAT_09131128);
          uVar5 = FUN_0731d5f8(uVar6,uVar5,0);
          thunk_FUN_03f786f8(PTR_DAT_0910e988);
          uVar6 = thunk_FUN_03f4e68c();
          FUN_07419a00(uVar6,uVar5,0);
          uVar5 = thunk_FUN_03f786f8(PTR_DAT_09131130);
                    /* WARNING: Subroutine does not return */
          FUN_03f134f0(uVar6,uVar5);
        }
      }
      else {
        if (iVar4 == 0xe) {
          sVar3 = FUN_073213d0(param_2,iVar7,0);
          if (sVar3 == 0) goto LAB_0744c218;
          goto LAB_0744c1d0;
        }
        if (iVar4 - 0x10U < 2) goto LAB_0744c218;
        uVar2 = FUN_073213d0(param_2,iVar7,0);
        uVar8 = NEON_umaxv(CONCAT26(-(ushort)((ushort)(uVar2 + (short)((ulong)uVar5 >> 0x30)) <
                                             (ushort)((ulong)uVar6 >> 0x30)),
                                    CONCAT24(-(ushort)((ushort)(uVar2 + (short)((ulong)uVar5 >> 0x20
                                                                               )) <
                                                      (ushort)((ulong)uVar6 >> 0x20)),
                                             CONCAT22(-(ushort)((ushort)(uVar2 + (short)((ulong)
                                                  uVar5 >> 0x10)) < (ushort)((ulong)uVar6 >> 0x10)),
                                                  -(ushort)((ushort)(uVar2 + (short)uVar5) <
                                                           (ushort)uVar6)))),2);
        if (((uVar8 & 1) != 0) || ((ushort)(uVar2 + 0xdf96) < 6)) goto LAB_0744c218;
        if (uVar2 < 0x200f) {
          if ((uVar2 - 0x340 < 2) || (uVar2 == 0x200e)) goto LAB_0744c218;
        }
        else if ((uVar2 - 0x200f < 0x1b) &&
                ((1 << (ulong)(uVar2 - 0x200f & 0x1f) & 0x6000001U) != 0)) goto LAB_0744c218;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_2 + 0x10));
  }
  return;
}


