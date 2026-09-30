/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewList
ENTRY_POINT: 055d4ad4
PROGRAM: beastcraft-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewList(int param_1)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  int iVar6;
  int unaff_w24;
  
  while (param_1 == 0) {
    cVar1 = *(char *)(unaff_x19 + 0x44);
    plVar3 = *(long **)(unaff_x19 + 0x10);
    iVar6 = unaff_w24;
    if (cVar1 != '\0') {
      iVar6 = unaff_w24 + 1;
    }
    if (plVar3 == (long *)0x0) goto LAB_055d4b68;
    uVar4 = (**(code **)(*plVar3 + 0x378))(plVar3,*(undefined8 *)(*plVar3 + 0x380));
    lVar5 = *unaff_x21;
    if (lVar5 == 0) goto LAB_055d4b68;
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_055d4b00;
    *(char *)(lVar5 + 0x20) = (char)uVar4;
    if (((int)uVar4 == -1) || (cVar1 == '\0')) {
      if ((int)uVar4 == -1) {
        return uVar4;
      }
    }
    else {
      plVar3 = *(long **)(unaff_x19 + 0x10);
      if (plVar3 == (long *)0x0) goto LAB_055d4b68;
      iVar2 = (**(code **)(*plVar3 + 0x378))(plVar3,*(undefined8 *)(*plVar3 + 0x380));
      lVar5 = *unaff_x21;
      if (lVar5 == 0) goto LAB_055d4b68;
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) goto LAB_055d4b00;
      *(char *)(lVar5 + 0x21) = (char)iVar2;
      iVar6 = unaff_w24;
      if (iVar2 != -1) {
        iVar6 = unaff_w24 + 1;
      }
    }
    plVar3 = *(long **)(unaff_x19 + 0x20);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    param_1 = (**(code **)(*plVar3 + 0x1b8))
                        (plVar3,*unaff_x21,0,iVar6,*unaff_x22,0,*(undefined8 *)(*plVar3 + 0x1c0));
  }
  lVar5 = *unaff_x22;
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) != 0) {
      return (ulong)*(ushort *)(lVar5 + 0x20);
    }
LAB_055d4b00:
                    /* WARNING: Subroutine does not return */
    FUN_02e3cccc();
  }
LAB_055d4b68:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


