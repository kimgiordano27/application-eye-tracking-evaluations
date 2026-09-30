/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateObject
ENTRY_POINT: 05ab7cb0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateObject(void)

{
  undefined *puVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int unaff_w19;
  long unaff_x20;
  int iVar7;
  int iStack000000000000000c;
  
  puVar1 = PTR_DAT_06f6d8a0;
  iVar7 = 0;
  do {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    iVar4 = FUN_05a6c57c();
    if (iVar4 == 0xb) {
LAB_05ab7db4:
      uVar2 = FUN_0596d0e4();
      if (0x7f < uVar2) {
LAB_05ab7dfc:
        iStack000000000000000c = unaff_w19 + iVar7;
        uVar5 = thunk_FUN_03037804(PTR_DAT_06f6df30);
        uVar5 = thunk_FUN_0301043c(uVar5,&stack0x0000000c);
        uVar6 = thunk_FUN_03037804(PTR_DAT_06fac380);
        uVar5 = FUN_059693f4(uVar6,uVar5,0);
        thunk_FUN_03037804(PTR_DAT_06f6d8e8);
        uVar6 = thunk_FUN_0301080c();
        FUN_05a64d00(uVar6,uVar5,0);
        uVar5 = thunk_FUN_03037804(PTR_DAT_06fac388);
                    /* WARNING: Subroutine does not return */
        FUN_02fe93c0(uVar6,uVar5);
      }
    }
    else {
      if (iVar4 == 0xe) {
        sVar3 = FUN_0596d0e4();
        if (sVar3 == 0) goto LAB_05ab7dfc;
        goto LAB_05ab7db4;
      }
      if (((((iVar4 - 0x10U < 2) || (uVar2 = FUN_0596d0e4(), (ushort)(uVar2 + 0xdf96) < 6)) ||
           ((ushort)(uVar2 + 0xdfd6) < 5)) ||
          (((ushort)(uVar2 + 0xd010) < 0xc || ((ushort)(uVar2 + 7) < 6)))) ||
         ((ushort)(uVar2 + 0x221) < 0x11)) goto LAB_05ab7dfc;
      if (uVar2 < 0x200f) {
        if ((uVar2 - 0x340 < 2) || (uVar2 == 0x200e)) goto LAB_05ab7dfc;
      }
      else if ((uVar2 - 0x200f < 0x1b) && ((1 << (ulong)(uVar2 - 0x200f & 0x1f) & 0x6000001U) != 0))
      goto LAB_05ab7dfc;
    }
    iVar7 = iVar7 + 1;
    if (*(int *)(unaff_x20 + 0x10) <= iVar7) {
      return;
    }
  } while( true );
}


