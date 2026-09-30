/*
FUNCTION_NAME: FUN_0530b7c4
ENTRY_POINT: 0530b7c4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0530b978) */

int FUN_0530b7c4(undefined8 param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  int *piVar10;
  int iVar11;
  
  if ((DAT_066d0359 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(UnityEngine_UIElements_ExecuteCommandEvent_<>c_TypeInfo);
    FUN_02b3c81c(
                Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_OpenCloseStateBuilder_TypeInfo
                );
    DAT_066d0359 = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar6 = FUN_054d0428(param_2,0);
  puVar4 = 
  Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_OpenCloseStateBuilder_TypeInfo;
  puVar3 = UnityEngine_UIElements_ExecuteCommandEvent_<>c_TypeInfo;
  if (lVar6 != 0) {
    iVar11 = 0;
    do {
      uVar7 = FUN_054d0730(lVar6,0);
      puVar2 = PTR_DAT_06312f78;
      if ((uVar7 & 1) == 0) {
        plVar8 = (long *)thunk_FUN_02b79548(lVar6,*(undefined8 *)PTR_DAT_06312f78);
        if (plVar8 == (long *)0x0) {
          return iVar11;
        }
        lVar6 = *plVar8;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 == 0) goto LAB_0530b920;
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_0530b908;
      }
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      plVar8 = (long *)FUN_054d07d0(lVar6,0);
      if (plVar8 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
        if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3ce44();
        }
      }
      uVar5 = FUN_0530b9d4(plVar8,plVar8,*(undefined8 *)puVar4,0);
      iVar11 = iVar11 + (uVar5 & 1);
    } while (lVar6 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar10 = piVar10 + 4;
    if (uVar7 == 0) break;
LAB_0530b908:
    if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
      puVar9 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
      goto System_Runtime_Serialization_XmlObjectSerializerWriteContextComplex__WriteQName;
    }
  }
LAB_0530b920:
  puVar9 = (undefined8 *)FUN_02b7654c(plVar8,*(long *)puVar2,0);
System_Runtime_Serialization_XmlObjectSerializerWriteContextComplex__WriteQName:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return iVar11;
}


