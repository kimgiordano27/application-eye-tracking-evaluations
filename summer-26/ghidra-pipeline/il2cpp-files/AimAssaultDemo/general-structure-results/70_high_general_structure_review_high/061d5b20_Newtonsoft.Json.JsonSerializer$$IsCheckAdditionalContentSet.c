/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$IsCheckAdditionalContentSet
ENTRY_POINT: 061d5b20
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonSerializer__IsCheckAdditionalContentSet(void)

{
  int iVar1;
  short sVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *unaff_x20;
  int iVar7;
  
  plVar6 = unaff_x20 + 0x15;
  if (*plVar6 != 0) goto LAB_061d5d2c;
  if ((char)unaff_x20[0x16] == '\0') {
    FUN_03741828();
    *(undefined1 *)(unaff_x20 + 0x16) = 1;
  }
  iVar1 = *(int *)((long)unaff_x20 + 0x14);
  iVar7 = (int)unaff_x20[3];
  if (iVar7 == iVar1) {
    if (iVar7 == 0x7c04) {
      lVar3 = (**(code **)(*unaff_x20 + 600))();
      lVar4 = (**(code **)(*unaff_x20 + 600))();
      if ((lVar4 == 0) || (lVar3 == 0)) goto LAB_061d5d40;
      sVar2 = FUN_060bb390(lVar3,*(int *)(lVar4 + 0x10) + -1,0);
      if (sVar2 == 0x79) {
        lVar3 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d88078);
        puVar5 = (undefined8 *)PTR_DAT_07dac6a0;
        goto LAB_061d5c98;
      }
      iVar7 = (int)unaff_x20[3];
    }
    if (iVar7 != 4) {
      return 0;
    }
    lVar3 = (**(code **)(*unaff_x20 + 600))();
    lVar4 = (**(code **)(*unaff_x20 + 600))();
    if ((lVar4 != 0) && (lVar3 != 0)) {
      sVar2 = FUN_060bb390(lVar3,*(int *)(lVar4 + 0x10) + -1,0);
      if (sVar2 != 0x79) {
        return 0;
      }
      lVar3 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d88078);
      puVar5 = (undefined8 *)PTR_DAT_07dac6a8;
LAB_061d5c98:
      FUN_061d6f54(lVar3,*puVar5,1,0);
      *plVar6 = lVar3;
      thunk_FUN_037aeb94(plVar6,lVar3);
      return lVar3;
    }
LAB_061d5d40:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if (iVar7 == 0x7f) {
    if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    unaff_x20 = (long *)FUN_061d52c8();
    *plVar6 = (long)unaff_x20;
  }
  else {
    if (iVar1 == 0x404) {
      unaff_x20 = (long *)thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d88078);
      FUN_061d6f54(unaff_x20,*(undefined8 *)PTR_DAT_07da4cd8,1,0);
    }
    else {
      if (iVar1 == 0x7f) {
        unaff_x20[0x15] = (long)unaff_x20;
        goto LAB_061d5d28;
      }
      unaff_x20 = (long *)thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d88078);
      FUN_061d6cb0(unaff_x20,iVar7,1,0);
    }
    *plVar6 = (long)unaff_x20;
  }
LAB_061d5d28:
  thunk_FUN_037aeb94(plVar6,unaff_x20);
LAB_061d5d2c:
  return *plVar6;
}


