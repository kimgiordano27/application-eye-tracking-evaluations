/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateList
ENTRY_POINT: 05aba958
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateList(void)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar7;
  long lVar8;
  char cStack000000000000000c;
  
  FUN_02fe925c();
  FUN_02fe925c(PTR_DAT_06fac538);
  *(undefined1 *)(unaff_x21 + 0x54) = 1;
  cStack000000000000000c = '\0';
  plVar3 = (long *)thunk_FUN_0301080c(*unaff_x20);
  FUN_0597c668(plVar3,0);
  puVar1 = PTR_DAT_06fac538;
  lVar7 = *(long *)(unaff_x19 + 0x18);
  if ((lVar7 != 0) && (uVar6 = *(uint *)(lVar7 + 0x18), 0 < (int)uVar6)) {
    lVar8 = 0;
    uVar2 = 0;
    do {
      if (uVar6 <= (uint)lVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      lVar4 = *(long *)(lVar7 + 0x20 + lVar8 * 8);
      if (lVar4 == 0) goto LAB_05abaa7c;
      uVar2 = FUN_05ab99d8(lVar4,plVar3,uVar2 & 1,&stack0x0000000c);
      if (((uVar2 & 1) != 0) && (cStack000000000000000c == '\0')) {
        uVar5 = FUN_05b369cc(0);
        if (plVar3 == (long *)0x0) goto LAB_05abaa7c;
        FUN_0597e018(plVar3,uVar5,0);
        FUN_0597e018(plVar3,*(undefined8 *)puVar1,0);
        uVar5 = FUN_05b369cc(0);
        FUN_0597e018(plVar3,uVar5,0);
      }
      uVar6 = *(uint *)(lVar7 + 0x18);
      lVar8 = lVar8 + 1;
    } while ((int)lVar8 < (int)uVar6);
  }
  FUN_05ab99d8();
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x05abaa78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    return;
  }
LAB_05abaa7c:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


