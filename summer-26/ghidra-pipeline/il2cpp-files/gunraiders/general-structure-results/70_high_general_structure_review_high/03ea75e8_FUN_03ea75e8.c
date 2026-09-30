/*
FUNCTION_NAME: FUN_03ea75e8
ENTRY_POINT: 03ea75e8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_3;telemetry_or_network_hits_4
*/


void FUN_03ea75e8(long *param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 uVar9;
  long *plVar10;
  
  if ((DAT_04542df6 & 1) == 0) {
    FUN_01c5d288(UnityEngine_PhysicsScene2D_TypeInfo);
    FUN_01c5d288(StringLiteral_11703);
    FUN_01c5d288(Powerup_TypeInfo);
    FUN_01c5d288(UnityEngine_ProBuilder_PreferenceKeys_TypeInfo);
    FUN_01c5d288(StringLiteral_9904);
    FUN_01c5d288(MS_Internal_Xml_XPath_Operator_TypeInfo);
    FUN_01c5d288(System_Xml_Schema_Preprocessor_TypeInfo);
    DAT_04542df6 = 1;
  }
  puVar4 = System_Xml_Schema_Preprocessor_TypeInfo;
  if (param_2 != 0) {
    uVar9 = *(undefined8 *)(param_2 + 0xa0);
    lVar5 = *(long *)System_Xml_Schema_Preprocessor_TypeInfo;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar5 = *(long *)puVar4;
    }
    uVar6 = thunk_FUN_03152714(uVar9,**(undefined8 **)(lVar5 + 0xb8),0);
    puVar4 = MS_Internal_Xml_XPath_Operator_TypeInfo;
    if (((uVar6 & 1) == 0) && (*(char *)(param_2 + 0xa8) != '\0')) {
      iVar2 = *(int *)(param_2 + 0x9c);
      lVar5 = *(long *)MS_Internal_Xml_XPath_Operator_TypeInfo;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar5 = *(long *)puVar4;
      }
      if (iVar2 != *(int *)(*(long *)(lVar5 + 0xb8) + 4)) {
        uVar3 = *(undefined4 *)(param_2 + 0x9c);
        uVar9 = FUN_03ec2300(param_2,0);
        FUN_03ea6a98(param_1,uVar3,uVar9);
      }
      plVar10 = (long *)param_1[0x96];
      if (plVar10 != (long *)0x0) {
        lVar5 = *plVar10;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)UnityEngine_PhysicsScene2D_TypeInfo) {
              puVar7 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_03ea7758;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)FUN_01c72498(plVar10,*(long *)UnityEngine_PhysicsScene2D_TypeInfo,2);
LAB_03ea7758:
        (*(code *)*puVar7)(plVar10,puVar7[1]);
      }
      if (ABS(*(float *)(param_1 + 0x8e)) <= 10.0) {
        bVar1 = ABS(*(float *)((long)param_1 + 0x474)) <= 10.0;
      }
      else {
        bVar1 = false;
      }
      *(undefined2 *)((long)param_1 + 0x494) = 0x100;
      FUN_03ea781c(*(undefined4 *)(param_2 + 0xb4),*(undefined4 *)(param_2 + 0xb8),param_1);
      if (!bVar1) {
        uVar9 = (**(code **)(*param_1 + 0x768))(param_1,*(undefined8 *)(*param_1 + 0x770));
        FUN_03ee0730(uVar9,*(undefined4 *)(param_2 + 0x9c),0);
        lVar5 = (**(code **)(*param_1 + 0x768))(param_1,*(undefined8 *)(*param_1 + 0x770));
        if (lVar5 == 0) goto VoxelBusters_CoreLibrary_Parser_JsonUtility__ToJson;
        uVar9 = FUN_03f11b9c(lVar5,0);
        FUN_03ee5358(uVar9,*(undefined4 *)(param_2 + 0x9c),0);
        FUN_03ec3408(param_2,0);
        *(undefined1 *)((long)param_1 + 0x496) = 1;
      }
    }
    return;
  }
VoxelBusters_CoreLibrary_Parser_JsonUtility__ToJson:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


