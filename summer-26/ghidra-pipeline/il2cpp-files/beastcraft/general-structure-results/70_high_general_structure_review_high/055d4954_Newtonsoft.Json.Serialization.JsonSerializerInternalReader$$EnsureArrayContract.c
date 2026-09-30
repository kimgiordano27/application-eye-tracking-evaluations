/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EnsureArrayContract
ENTRY_POINT: 055d4954
PROGRAM: beastcraft-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureArrayContract(void)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long unaff_x19;
  long unaff_x20;
  long *plVar7;
  undefined4 uVar8;
  
  if ((*(byte *)(unaff_x20 + 0x5f3) & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06a2efe8);
    FUN_02e3ca1c(PTR_DAT_06a2f548);
    *(undefined1 *)(unaff_x20 + 0x5f3) = 1;
  }
  plVar3 = *(long **)(unaff_x19 + 0x10);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
    if ((uVar4 & 1) != 0) {
      plVar3 = *(long **)(unaff_x19 + 0x10);
      if (plVar3 == (long *)0x0) goto LAB_055d4b68;
      (**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210));
    }
    plVar3 = (long *)(unaff_x19 + 0x28);
    if (*plVar3 == 0) {
      lVar5 = FUN_02e3cb08(*(undefined8 *)PTR_DAT_06a2efe8,0x80);
      *plVar3 = lVar5;
      thunk_FUN_02ee2be8(plVar3,lVar5);
    }
    plVar7 = (long *)(unaff_x19 + 0x30);
    if (*plVar7 == 0) {
      lVar5 = FUN_02e3cb08(*(undefined8 *)PTR_DAT_06a2f548,1);
      *plVar7 = lVar5;
      thunk_FUN_02ee2be8(plVar7,lVar5);
    }
    iVar2 = 0;
    while (iVar2 == 0) {
      cVar1 = *(char *)(unaff_x19 + 0x44);
      plVar6 = *(long **)(unaff_x19 + 0x10);
      uVar8 = 1;
      if (cVar1 != '\0') {
        uVar8 = 2;
      }
      if (plVar6 == (long *)0x0) goto LAB_055d4b68;
      uVar4 = (**(code **)(*plVar6 + 0x378))(plVar6,*(undefined8 *)(*plVar6 + 0x380));
      lVar5 = *plVar3;
      if (lVar5 == 0) goto LAB_055d4b68;
      if (*(int *)(lVar5 + 0x18) == 0) goto LAB_055d4b00;
      *(char *)(lVar5 + 0x20) = (char)uVar4;
      if (((int)uVar4 == -1) || (cVar1 == '\0')) {
        if ((int)uVar4 == -1) {
          return uVar4;
        }
      }
      else {
        plVar6 = *(long **)(unaff_x19 + 0x10);
        if (plVar6 == (long *)0x0) goto LAB_055d4b68;
        iVar2 = (**(code **)(*plVar6 + 0x378))(plVar6,*(undefined8 *)(*plVar6 + 0x380));
        lVar5 = *plVar3;
        if (lVar5 == 0) goto LAB_055d4b68;
        if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) goto LAB_055d4b00;
        *(char *)(lVar5 + 0x21) = (char)iVar2;
        uVar8 = 1;
        if (iVar2 != -1) {
          uVar8 = 2;
        }
      }
      plVar6 = *(long **)(unaff_x19 + 0x20);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      iVar2 = (**(code **)(*plVar6 + 0x1b8))
                        (plVar6,*plVar3,0,uVar8,*plVar7,0,*(undefined8 *)(*plVar6 + 0x1c0));
    }
    lVar5 = *plVar7;
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) != 0) {
        return (ulong)*(ushort *)(lVar5 + 0x20);
      }
LAB_055d4b00:
                    /* WARNING: Subroutine does not return */
      FUN_02e3cccc();
    }
  }
LAB_055d4b68:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


