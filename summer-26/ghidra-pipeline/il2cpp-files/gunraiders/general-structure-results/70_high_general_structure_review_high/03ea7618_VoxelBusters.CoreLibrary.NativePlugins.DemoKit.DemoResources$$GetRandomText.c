/*
FUNCTION_NAME: VoxelBusters.CoreLibrary.NativePlugins.DemoKit.DemoResources$$GetRandomText
ENTRY_POINT: 03ea7618
PROGRAM: gunraiders-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


void VoxelBusters_CoreLibrary_NativePlugins_DemoKit_DemoResources__GetRandomText(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  long *plVar9;
  
  FUN_01c5d288(*(undefined8 *)(param_1 + 0x900));
  FUN_01c5d288(Powerup_TypeInfo);
  FUN_01c5d288(UnityEngine_ProBuilder_PreferenceKeys_TypeInfo);
  FUN_01c5d288(StringLiteral_9904);
  FUN_01c5d288(MS_Internal_Xml_XPath_Operator_TypeInfo);
  FUN_01c5d288(System_Xml_Schema_Preprocessor_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0xdf6) = 1;
  puVar3 = System_Xml_Schema_Preprocessor_TypeInfo;
  if (unaff_x20 != 0) {
    uVar8 = *(undefined8 *)(unaff_x20 + 0xa0);
    lVar4 = *(long *)System_Xml_Schema_Preprocessor_TypeInfo;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar4 = *(long *)puVar3;
    }
    uVar5 = thunk_FUN_03152714(uVar8,**(undefined8 **)(lVar4 + 0xb8),0);
    puVar3 = MS_Internal_Xml_XPath_Operator_TypeInfo;
    if (((uVar5 & 1) == 0) && (*(char *)(unaff_x20 + 0xa8) != '\0')) {
      iVar2 = *(int *)(unaff_x20 + 0x9c);
      lVar4 = *(long *)MS_Internal_Xml_XPath_Operator_TypeInfo;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar4 = *(long *)puVar3;
      }
      if (iVar2 != *(int *)(*(long *)(lVar4 + 0xb8) + 4)) {
        FUN_03ec2300();
        FUN_03ea6a98();
      }
      plVar9 = (long *)unaff_x19[0x96];
      if (plVar9 != (long *)0x0) {
        lVar4 = *plVar9;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)UnityEngine_PhysicsScene2D_TypeInfo) {
              puVar6 = (undefined8 *)(lVar4 + (long)(*piVar7 + 2) * 0x10 + 0x138);
              goto LAB_03ea7758;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_01c72498(plVar9,*(long *)UnityEngine_PhysicsScene2D_TypeInfo,2);
LAB_03ea7758:
        (*(code *)*puVar6)(plVar9,puVar6[1]);
      }
      if (ABS(*(float *)(unaff_x19 + 0x8e)) <= 10.0) {
        bVar1 = ABS(*(float *)((long)unaff_x19 + 0x474)) <= 10.0;
      }
      else {
        bVar1 = false;
      }
      *(undefined2 *)((long)unaff_x19 + 0x494) = 0x100;
      FUN_03ea781c(*(undefined4 *)(unaff_x20 + 0xb4),*(undefined4 *)(unaff_x20 + 0xb8));
      if (!bVar1) {
        uVar8 = (**(code **)(*unaff_x19 + 0x768))();
        FUN_03ee0730(uVar8,*(undefined4 *)(unaff_x20 + 0x9c),0);
        lVar4 = (**(code **)(*unaff_x19 + 0x768))();
        if (lVar4 == 0) goto VoxelBusters_CoreLibrary_Parser_JsonUtility__ToJson;
        uVar8 = FUN_03f11b9c(lVar4,0);
        FUN_03ee5358(uVar8,*(undefined4 *)(unaff_x20 + 0x9c),0);
        FUN_03ec3408();
        *(undefined1 *)((long)unaff_x19 + 0x496) = 1;
      }
    }
    return;
  }
VoxelBusters_CoreLibrary_Parser_JsonUtility__ToJson:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


