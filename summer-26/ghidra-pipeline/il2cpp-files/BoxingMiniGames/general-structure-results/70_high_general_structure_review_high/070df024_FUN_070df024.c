/*
FUNCTION_NAME: FUN_070df024
ENTRY_POINT: 070df024
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_15;telemetry_or_network_hits_4
*/


void FUN_070df024(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  
  if ((DAT_07eec283 & 1) == 0) {
    FUN_03642964(PTR_DAT_07a02820);
    FUN_03642964(
                System_Runtime_Serialization_XmlFormatWriterInterpreter_<>c__DisplayClass33_0_TypeInfo
                );
    FUN_03642964(
                System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver_TypeInfo
                );
    FUN_03642964(
                System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo_TypeInfo
                );
    FUN_03642964(
                System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey_TypeInfo
                );
    DAT_07eec283 = 1;
  }
  puVar4 = 
  System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey_TypeInfo
  ;
  puVar3 = System_Runtime_Serialization_XmlFormatWriterInterpreter_<>c__DisplayClass33_0_TypeInfo;
  puVar2 = PTR_DAT_07a02820;
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    iVar11 = 0;
    while (iVar1 = *(int *)(lVar7 + 0x18), iVar11 < iVar1) {
      lVar7 = FUN_070deb0c();
      if (((lVar7 == 0) || (*(long *)(lVar7 + 0x10) == 0)) ||
         (plVar5 = (long *)FUN_0459ed6c(*(long *)(lVar7 + 0x10),iVar11,*(undefined8 *)puVar4),
         plVar5 == (long *)0x0)) goto LAB_070df220;
      lVar8 = *plVar5;
      lVar7 = *(long *)puVar3;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_070df128;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_0367cd30(plVar5,lVar7,0);
LAB_070df128:
      (*(code *)*puVar6)(plVar5,0,puVar6[1]);
      lVar7 = *(long *)(param_1 + 0x10);
      iVar11 = iVar11 + 1;
      if (lVar7 == 0) goto LAB_070df220;
    }
    if (0 < iVar1) {
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      FUN_05e3b0f4(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_070df220;
      FUN_041e5e38(*(long *)(param_1 + 0x18),*(undefined8 *)puVar2);
    }
    lVar7 = *(long *)(param_1 + 0x20);
    if (lVar7 != 0) {
      iVar11 = 0;
      goto LAB_070df188;
    }
  }
LAB_070df220:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
LAB_070df188:
  iVar1 = *(int *)(lVar7 + 0x18);
  if (iVar1 <= iVar11) {
    if (iVar1 < 1) {
      return;
    }
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    FUN_05e3b0f4(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_041e5e38(*(long *)(param_1 + 0x28),*(undefined8 *)puVar2);
      return;
    }
    goto LAB_070df220;
  }
  lVar7 = FUN_070deb0c();
  if (((lVar7 == 0) || (*(long *)(lVar7 + 0x20) == 0)) ||
     (plVar5 = (long *)FUN_0459ed6c(*(long *)(lVar7 + 0x20),iVar11,*(undefined8 *)puVar4),
     plVar5 == (long *)0x0)) goto LAB_070df220;
  lVar8 = *plVar5;
  lVar7 = *(long *)puVar3;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar7) {
        puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_070df204;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_0367cd30(plVar5,lVar7,0);
LAB_070df204:
  (*(code *)*puVar6)(plVar5,3,puVar6[1]);
  lVar7 = *(long *)(param_1 + 0x20);
  iVar11 = iVar11 + 1;
  if (lVar7 == 0) goto LAB_070df220;
  goto LAB_070df188;
}


