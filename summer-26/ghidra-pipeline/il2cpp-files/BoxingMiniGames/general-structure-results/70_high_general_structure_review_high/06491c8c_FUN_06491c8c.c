/*
FUNCTION_NAME: FUN_06491c8c
ENTRY_POINT: 06491c8c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_11;validity_or_gating_hits_14;telemetry_or_network_hits_11
*/


void FUN_06491c8c(long param_1,long *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  
  if ((DAT_07ee5bff & 1) == 0) {
    FUN_03642964(PTR_DAT_07a1fe70);
    FUN_03642964(PTR_DAT_07a3a848);
    DAT_07ee5bff = 1;
  }
  lVar6 = FUN_064aa290(param_2,0);
  plVar11 = (long *)(param_1 + 0x60);
  *plVar11 = lVar6;
  thunk_FUN_036b7ad0(plVar11,lVar6);
  plVar7 = (long *)*plVar11;
  if (plVar7 == (long *)0x0)
  goto System_Runtime_Serialization_XmlObjectSerializerReadContext__ReadDataContractValue;
  iVar3 = (**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200));
  if (*(char *)(param_1 + 0x58) == '\0') {
    if (*(long *)(param_1 + 0x10) == 0)
    goto System_Runtime_Serialization_XmlObjectSerializerReadContext__ReadDataContractValue;
    bVar2 = *(char *)(*(long *)(param_1 + 0x10) + 0x58) != '\0';
  }
  else {
    if (*(long *)(param_1 + 0x50) == 0)
    goto System_Runtime_Serialization_XmlObjectSerializerReadContext__ReadDataContractValue;
    bVar2 = FUN_06412d18(*(long *)(param_1 + 0x50),0);
  }
  FUN_06491984(param_1);
  plVar7 = (long *)(param_1 + 0x18);
  if (*plVar7 == 0) {
    plVar8 = *(long **)(param_1 + 0x60);
    if (*(char *)(param_1 + 0x58) == '\0') {
      if (plVar8 == (long *)0x0)
      goto System_Runtime_Serialization_XmlObjectSerializerReadContext__ReadDataContractValue;
      uVar9 = (**(code **)(*plVar8 + 0x4a8))(plVar8,*(undefined8 *)(*plVar8 + 0x4b0));
      uVar12 = *(undefined8 *)(param_1 + 0x10);
      lVar6 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a3a848);
      FUN_05e5ae34(lVar6,0);
      FUN_064949cc(lVar6,uVar9,uVar12);
    }
    else {
      if (plVar8 == (long *)0x0)
      goto System_Runtime_Serialization_XmlObjectSerializerReadContext__ReadDataContractValue;
      uVar9 = (**(code **)(*plVar8 + 0x4a8))(plVar8,*(undefined8 *)(*plVar8 + 0x4b0));
      uVar12 = *(undefined8 *)(param_1 + 0x50);
      lVar6 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a3a848);
      FUN_05e5ae34(lVar6,0);
      FUN_06495770(lVar6,uVar9,uVar12);
    }
    *plVar7 = lVar6;
    thunk_FUN_036b7ad0(plVar7,lVar6);
  }
  if (*(char *)(param_1 + 0x58) == '\0') {
    if (*(long *)(param_1 + 0x10) == 0)
    goto System_Runtime_Serialization_XmlObjectSerializerReadContext__ReadDataContractValue;
    FUN_06432a88(*(long *)(param_1 + 0x10),0,0);
    if (*(long *)(param_1 + 0x10) == 0)
    goto System_Runtime_Serialization_XmlObjectSerializerReadContext__ReadDataContractValue;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x69) = 1;
  }
  else {
    if (*(long *)(param_1 + 0x50) == 0)
    goto System_Runtime_Serialization_XmlObjectSerializerReadContext__ReadDataContractValue;
    System_Drawing_GDIPlus_GdiPlusStreamHelper__StreamSizeImpl(*(long *)(param_1 + 0x50),0,0);
  }
  plVar7 = (long *)(param_1 + 0x40);
  lVar6 = *plVar7;
  if (lVar6 != 0) {
    if ((*(char *)(param_1 + 0x39) == '\0') && (*(char *)(param_1 + 0x58) == '\0')) {
      lVar13 = *(long *)(param_1 + 0x18);
      uVar5 = FUN_06490254(param_1,lVar6);
      if (lVar13 == 0) {
System_Runtime_Serialization_XmlObjectSerializerReadContext__ReadDataContractValue:
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      plVar8 = (long *)FUN_0649090c(lVar13,lVar6,uVar5 & 1);
      if (plVar8 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_07a1fe70 + 0x130);
        if ((bVar1 <= *(byte *)(*plVar8 + 0x130)) &&
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_07a1fe70
           )) {
          FUN_0649206c(param_1,plVar8);
        }
      }
    }
    *plVar7 = 0;
    thunk_FUN_036b7ad0(plVar7,0);
  }
LAB_06491e7c:
  while (plVar7 = (long *)*plVar11, plVar7 != (long *)0x0) {
    uVar10 = (**(code **)(*plVar7 + 0x468))(plVar7,*(undefined8 *)(*plVar7 + 0x470));
    if ((uVar10 & 1) != 0) {
LAB_06491f38:
      if (*(char *)(param_1 + 0x58) == '\0') {
        lVar6 = *(long *)(param_1 + 0x10);
        if (lVar6 != 0) {
          *(undefined1 *)(lVar6 + 0x69) = 0;
          FUN_06432a88(lVar6,bVar2 & 1,0);
          return;
        }
      }
      else if (*(long *)(param_1 + 0x50) != 0) {
        System_Drawing_GDIPlus_GdiPlusStreamHelper__StreamSizeImpl
                  (*(long *)(param_1 + 0x50),bVar2 & 1,0);
        return;
      }
      break;
    }
    plVar7 = (long *)*plVar11;
    if (plVar7 == (long *)0x0) break;
    iVar4 = (**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200));
    if (iVar4 < iVar3) goto LAB_06491f38;
    if (param_2 == (long *)0x0) break;
    iVar4 = (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
    if (iVar4 != 1) goto LAB_06491f1c;
    uVar9 = *(undefined8 *)(param_1 + 0x60);
    lVar6 = *(long *)(param_1 + 0x18);
    uVar5 = FUN_06490524(param_1,uVar9);
    if (lVar6 == 0) break;
    lVar6 = FUN_064929a0(lVar6,uVar9,uVar5 & 1);
    if (lVar6 == 0) goto LAB_06491f10;
    FUN_06492ca0(param_1,lVar6,0);
  }
  goto System_Runtime_Serialization_XmlObjectSerializerReadContext__ReadDataContractValue;
LAB_06491f10:
  uVar10 = FUN_06492a80(param_1);
  if ((uVar10 & 1) == 0) {
LAB_06491f1c:
    plVar7 = (long *)*plVar11;
    if (plVar7 == (long *)0x0)
    goto System_Runtime_Serialization_XmlObjectSerializerReadContext__ReadDataContractValue;
    (**(code **)(*plVar7 + 0x458))(plVar7,*(undefined8 *)(*plVar7 + 0x460));
  }
  goto LAB_06491e7c;
}


