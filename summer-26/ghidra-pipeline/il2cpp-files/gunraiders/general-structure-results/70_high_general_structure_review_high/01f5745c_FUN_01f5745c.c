/*
FUNCTION_NAME: FUN_01f5745c
ENTRY_POINT: 01f5745c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01f57e90) */

void FUN_01f5745c(long param_1,int param_2,int param_3,ulong param_4,ulong param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_0452e91a & 1) == 0) {
    FUN_01c5d288(PTR_DAT_04239e58);
    FUN_01c5d288(PTR_DAT_04239450);
    FUN_01c5d288(PTR_DAT_042396f8);
    FUN_01c5d288(System_ComponentModel_InheritanceLevel_var);
    FUN_01c5d288(UnityEngine_UI_InputField_var);
    FUN_01c5d288(UnityEngine_InspectorNameAttribute_var);
    FUN_01c5d288(UnityEngine_InspectorOrderAttribute_var);
    FUN_01c5d288(System_ComponentModel_Design_Serialization_InstanceDescriptor_var);
    FUN_01c5d288(short_var);
    FUN_01c5d288(System_ComponentModel_Int16Converter_var);
    FUN_01c5d288(int_var);
    FUN_01c5d288(System_ComponentModel_Int32Converter_var);
    FUN_01c5d288(long_var);
    FUN_01c5d288(PTR_DAT_04239378);
    FUN_01c5d288(PTR_DAT_04239578);
    FUN_01c5d288(System_ComponentModel_Int64Converter_var);
    FUN_01c5d288(IntPtr_var);
    FUN_01c5d288(System_Runtime_InteropServices_InterfaceTypeAttribute_var);
    FUN_01c5d288(PTR_DAT_04237a90);
    FUN_01c5d288(PTR_DAT_042392d8);
    FUN_01c5d288(System_Linq_Expressions_Interpreter_InterpretedFrameInfo_var);
    FUN_01c5d288(Newtonsoft_Json_Linq_JObject_var);
    FUN_01c5d288(Newtonsoft_Json_Linq_JProperty_var);
    FUN_01c5d288(Newtonsoft_Json_Linq_JRaw_var);
    FUN_01c5d288(Newtonsoft_Json_Linq_JToken_var);
    FUN_01c5d288(Newtonsoft_Json_Linq_JValue_var);
    FUN_01c5d288(PTR_DAT_04239e28);
    FUN_01c5d288(PTR_DAT_04239358);
    FUN_01c5d288(System_Globalization_JapaneseCalendar_var);
    FUN_01c5d288(UnityEngine_ResourceManagement_ResourceProviders_JsonAssetProvider_var);
    FUN_01c5d288(Newtonsoft_Json_JsonConstructorAttribute_var);
    FUN_01c5d288(Newtonsoft_Json_JsonExtensionDataAttribute_var);
    FUN_01c5d288(Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_var);
    FUN_01c5d288(Newtonsoft_Json_JsonTextReader_var);
    FUN_01c5d288(Newtonsoft_Json_JsonTextWriter_var);
    FUN_01c5d288(Newtonsoft_Json_JsonToken_var);
    FUN_01c5d288(Reign_MobileInputCapture_Key_var);
    DAT_0452e91a = 1;
  }
  puVar6 = PTR_DAT_04239358;
  puVar5 = PTR_DAT_042392d8;
  uVar16 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (((param_4 & 1) == 0) && ((param_5 & 1) == 0)) {
    lVar12 = **(long **)(*(long *)PTR_DAT_04239450 + 0xb8);
    if (lVar12 == 0) goto LAB_01f57fb0;
    if (*(int *)(lVar12 + 0x20) == 8) {
      lVar12 = *(long *)PTR_DAT_042392d8;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar12 = *(long *)puVar5;
      }
      if ((**(long **)(lVar12 + 0xb8) == 0) ||
         (lVar14 = **(long **)(*(long *)PTR_DAT_042396f8 + 0xb8), lVar14 == 0)) goto LAB_01f57fb0;
      if (*(int *)(**(long **)(lVar12 + 0xb8) + 0x1a0) != *(int *)(lVar14 + 0x54)) {
        iVar1 = *(int *)(lVar14 + 0x234);
        if (iVar1 == 2) {
          lVar12 = *(long *)puVar6;
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar12 = *(long *)puVar6;
          }
          lVar12 = **(long **)(lVar12 + 0xb8);
          if (lVar12 == 0) goto LAB_01f57fb0;
          uVar9 = 0xf;
LAB_01f578f4:
          FUN_01f232e4(lVar12,uVar9,0,0);
        }
        else {
          if (iVar1 == 1) {
            lVar12 = *(long *)puVar6;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
              lVar12 = *(long *)puVar6;
            }
            lVar12 = **(long **)(lVar12 + 0xb8);
            if (lVar12 == 0) goto LAB_01f57fb0;
            uVar9 = 0xe;
            goto LAB_01f578f4;
          }
          if (3 < iVar1 + 1) {
            lVar12 = *(long *)puVar6;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
              lVar12 = *(long *)puVar6;
            }
            lVar12 = **(long **)(lVar12 + 0xb8);
            if (lVar12 == 0) goto LAB_01f57fb0;
            uVar9 = 0x10;
            goto LAB_01f578f4;
          }
        }
        lVar12 = *(long *)puVar6;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar12 = *(long *)puVar6;
        }
        plVar13 = *(long **)(lVar12 + 0xb8);
LAB_01f57918:
        lVar12 = *plVar13;
        if (lVar12 == 0) goto LAB_01f57fb0;
        uVar16 = *(undefined4 *)(lVar12 + 0xa0);
        goto LAB_01f57924;
      }
      lVar12 = *(long *)puVar6;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar12 = *(long *)puVar6;
      }
      lVar12 = **(long **)(lVar12 + 0xb8);
      if (lVar12 == 0) goto LAB_01f57fb0;
      uVar9 = 0xd;
LAB_01f577c0:
      FUN_01f232e4(lVar12,uVar9,0,0);
      lVar12 = **(long **)(*(long *)puVar6 + 0xb8);
      if (lVar12 == 0) goto LAB_01f57fb0;
      FUN_01f23cc8(*(undefined4 *)(lVar12 + 0x9c),lVar12,7,0);
      uVar16 = 1;
    }
    else {
      if (*(int *)(lVar12 + 0x20) == 0x40) {
        if (*(long *)(lVar12 + 0xa8) == 0) goto LAB_01f57fb0;
        lVar12 = *(long *)(*(long *)(lVar12 + 0xa8) + 0x78);
        if (*(int *)(*(long *)PTR_DAT_04237a90 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar9 = FUN_035679d0(0);
        if (lVar12 == 0) goto LAB_01f57fb0;
        uVar10 = FUN_02d503d4(lVar12,uVar9,*(undefined8 *)System_ComponentModel_Int64Converter_var);
        lVar12 = *(long *)puVar6;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(lVar12);
          lVar12 = *(long *)puVar6;
        }
        lVar12 = **(long **)(lVar12 + 0xb8);
        if (lVar12 == 0) goto LAB_01f57fb0;
        if ((uVar10 & 1) == 0) goto LAB_01f5781c;
LAB_01f577bc:
        uVar9 = 2;
        goto LAB_01f577c0;
      }
      if (param_3 < param_2) {
        lVar12 = *(long *)PTR_DAT_04239358;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar12 = *(long *)puVar6;
        }
        lVar12 = **(long **)(lVar12 + 0xb8);
        if (lVar12 == 0) goto LAB_01f57fb0;
        goto LAB_01f577bc;
      }
      lVar12 = *(long *)PTR_DAT_04239358;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar12 = *(long *)puVar6;
      }
      lVar12 = **(long **)(lVar12 + 0xb8);
      if (lVar12 == 0) goto LAB_01f57fb0;
      if (param_2 < param_3) {
LAB_01f5781c:
        FUN_01f232e4(lVar12,3,0,0);
        plVar13 = *(long **)(*(long *)puVar6 + 0xb8);
        goto LAB_01f57918;
      }
      FUN_01f232e4(lVar12,6,0,0);
      lVar12 = **(long **)(*(long *)puVar6 + 0xb8);
      if (lVar12 == 0) goto LAB_01f57fb0;
      uVar16 = *(undefined4 *)(lVar12 + 0xa4);
LAB_01f57924:
      FUN_01f23cc8(uVar16,lVar12,7,0);
      uVar16 = 0;
    }
    uVar10 = FUN_01f57ffc();
    if ((uVar10 & 1) != 0) {
      lVar12 = *(long *)puVar6;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar12 = *(long *)puVar6;
      }
      lVar12 = **(long **)(lVar12 + 0xb8);
      if (lVar12 == 0) goto LAB_01f57fb0;
      FUN_01f23cc8(*(undefined4 *)(lVar12 + 0xa8),lVar12,8,0);
    }
  }
  puVar7 = PTR_DAT_04239e58;
  lVar12 = *(long *)puVar5;
  lVar14 = **(long **)(*(long *)PTR_DAT_04239e58 + 0xb8);
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar12 = *(long *)puVar5;
  }
  if (**(long **)(lVar12 + 0xb8) != 0) {
    lVar11 = *(long *)puVar6;
    uVar2 = *(undefined4 *)(**(long **)(lVar12 + 0xb8) + 0x1a0);
    fVar17 = *(float *)(param_1 + 0x40);
    uVar3 = *(undefined4 *)(param_1 + 0x44);
    uVar4 = *(undefined4 *)(param_1 + 0x38);
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar11 = *(long *)puVar6;
    }
    if ((**(long **)(lVar11 + 0xb8) != 0) && (lVar14 != 0)) {
      FUN_0202d05c(fVar17 * 100.0,lVar14,uVar2,uVar16,uVar3,uVar4,
                   *(undefined4 *)(**(long **)(lVar11 + 0xb8) + 0x3c),0);
      puVar5 = Newtonsoft_Json_Linq_JRaw_var;
      if (**(long **)(*(long *)puVar7 + 0xb8) != 0) {
        FUN_0202d344(**(long **)(*(long *)puVar7 + 0xb8),*(undefined8 *)(param_1 + 0x50),0);
        lVar12 = *(long *)puVar5;
        uVar9 = *(undefined8 *)(param_1 + 0x50);
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(lVar12);
          lVar12 = *(long *)puVar5;
        }
        lVar14 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
        if (lVar14 == 0) {
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(lVar12);
            lVar12 = *(long *)puVar5;
          }
          uVar15 = **(undefined8 **)(lVar12 + 0xb8);
          lVar14 = thunk_FUN_01c496e0(*(undefined8 *)long_var);
          FUN_02b67c90(lVar14,uVar15,
                       *(undefined8 *)System_Linq_Expressions_Interpreter_InterpretedFrameInfo_var,0
                      );
          *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8) = lVar14;
        }
        uVar9 = FUN_02358a2c(uVar9,lVar14,*(undefined8 *)UnityEngine_InspectorOrderAttribute_var);
        lVar12 = *(long *)puVar5;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(lVar12);
          lVar12 = *(long *)puVar5;
        }
        lVar14 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
        if (lVar14 == 0) {
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(lVar12);
            lVar12 = *(long *)puVar5;
          }
          uVar15 = **(undefined8 **)(lVar12 + 0xb8);
          lVar14 = thunk_FUN_01c496e0(*(undefined8 *)int_var);
          FUN_02b681f4(lVar14,uVar15,*(undefined8 *)Newtonsoft_Json_Linq_JObject_var,0);
          *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10) = lVar14;
        }
        uVar9 = FUN_02346428(uVar9,lVar14,*(undefined8 *)System_ComponentModel_InheritanceLevel_var)
        ;
        lVar12 = *(long *)puVar5;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(lVar12);
          lVar12 = *(long *)puVar5;
        }
        lVar14 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x20);
        if (lVar14 == 0) {
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(lVar12);
            lVar12 = *(long *)puVar5;
          }
          uVar15 = **(undefined8 **)(lVar12 + 0xb8);
          lVar14 = thunk_FUN_01c496e0(*(undefined8 *)System_ComponentModel_Int32Converter_var);
          FUN_02b6841c(lVar14,uVar15,*(undefined8 *)Newtonsoft_Json_Linq_JProperty_var,0);
          *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20) = lVar14;
        }
        uVar9 = FUN_0234eea4(uVar9,lVar14,*(undefined8 *)UnityEngine_UI_InputField_var);
        lVar12 = FUN_02357630(uVar9,*(undefined8 *)UnityEngine_InspectorNameAttribute_var);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        FUN_02d50a3c(&local_98,lVar12,*(undefined8 *)IntPtr_var);
        puVar8 = System_Globalization_JapaneseCalendar_var;
        puVar7 = short_var;
        puVar6 = System_ComponentModel_Design_Serialization_InstanceDescriptor_var;
        puVar5 = PTR_DAT_04239e28;
        local_70 = CONCAT44(uStack_84,local_88);
        uStack_78 = uStack_90;
        local_80 = local_98;
        while (uVar10 = FUN_029fd614(&local_80,*(undefined8 *)puVar7), lVar12 = local_70,
              (uVar10 & 1) != 0) {
          if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          local_98 = *(undefined8 *)puVar5;
          local_88 = *(undefined4 *)(local_70 + 0x10);
          uStack_90 = 0xffffffffffffffff;
          uVar9 = FUN_03307544(&local_98,0);
          uVar9 = FUN_03146988(*(undefined8 *)puVar8,uVar9,0);
          FUN_0213e934((float)*(int *)(lVar12 + 0x14),uVar9,0);
        }
        FUN_029fd610(&local_80,*(undefined8 *)puVar6);
        puVar5 = PTR_DAT_04239450;
        if ((param_5 & 1) != 0) {
          return;
        }
        if (**(long **)(*(long *)PTR_DAT_04239450 + 0xb8) != 0) {
          local_98 = *(undefined8 *)PTR_DAT_04239578;
          uStack_90 = 0xffffffffffffffff;
          local_88 = *(undefined4 *)(**(long **)(*(long *)PTR_DAT_04239450 + 0xb8) + 0x20);
          uVar9 = FUN_03307544(&local_98,0);
          uVar9 = FUN_03146988(*(undefined8 *)Newtonsoft_Json_JsonToken_var,uVar9,0);
          FUN_0213e7b4(uVar9,0);
          lVar12 = *(long *)(*(long *)(*(long *)PTR_DAT_04239378 + 0xb8) + 8);
          if (lVar12 != 0) {
            uVar9 = FUN_03146988(*(undefined8 *)
                                  Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_var,
                                 *(undefined8 *)(lVar12 + 0x158),0);
            FUN_0213e7b4(uVar9,0);
            if (**(long **)(*(long *)puVar5 + 0xb8) != 0) {
              local_b0 = *(undefined8 *)System_Runtime_InteropServices_InterfaceTypeAttribute_var;
              uStack_a8 = 0xffffffffffffffff;
              local_a0 = *(undefined4 *)(**(long **)(*(long *)puVar5 + 0xb8) + 0x24);
              uVar9 = FUN_03307544(&local_b0,0);
              uVar9 = FUN_03146988(*(undefined8 *)
                                    UnityEngine_ResourceManagement_ResourceProviders_JsonAssetProvider_var
                                   ,uVar9,0);
              FUN_0213e7b4(uVar9,0);
              if (*(long *)(param_1 + 0x20) != 0) {
                FUN_0213e934((float)*(int *)(*(long *)(param_1 + 0x20) + 0x14),
                             *(undefined8 *)Newtonsoft_Json_JsonExtensionDataAttribute_var,0);
                if (*(long *)(param_1 + 0x20) != 0) {
                  FUN_0213e934((float)*(int *)(*(long *)(param_1 + 0x20) + 0x1c),
                               *(undefined8 *)Reign_MobileInputCapture_Key_var,0);
                  if (*(long *)(param_1 + 0x20) != 0) {
                    FUN_0213e934((float)*(int *)(*(long *)(param_1 + 0x20) + 0x20),
                                 *(undefined8 *)Newtonsoft_Json_JsonTextReader_var,0);
                    if (*(long *)(param_1 + 0x20) != 0) {
                      FUN_0213e934((float)*(int *)(*(long *)(param_1 + 0x20) + 0x2c),
                                   *(undefined8 *)Newtonsoft_Json_JsonTextWriter_var,0);
                      if (*(long *)(param_1 + 0x20) != 0) {
                        FUN_0213e934((float)*(int *)(*(long *)(param_1 + 0x20) + 0x18),
                                     *(undefined8 *)Newtonsoft_Json_JsonConstructorAttribute_var,0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01f57fb0:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


