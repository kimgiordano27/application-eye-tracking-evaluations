/*
FUNCTION_NAME: FUN_06028ad4
ENTRY_POINT: 06028ad4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_17;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3
*/


undefined8 FUN_06028ad4(undefined8 *param_1,ulong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  if ((DAT_06bc54bd & 1) == 0) {
    FUN_02f08768(Method_UnityEngine_XR_OpenXR_OpenXRSettings_<>c_<ApplyRenderSettings>b__53_0__);
    FUN_02f08768(Method_UnityEngine_XR_OpenXR_OpenXRSettings_<>c_<get_colorSubmissionModes>b__36_0__
                );
    FUN_02f08768(Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_3__);
    FUN_02f08768(Method_UnityEngine_XR_OpenXR_OpenXRSettings_<>c_<set_colorSubmissionModes>b__37_0__
                );
    FUN_02f08768(
                Method_System_Collections_Specialized_OrderedDictionary_OrderedDictionaryKeyValueCollection_System_Collections_ICollection_CopyTo__
                );
    FUN_02f08768(Method_Mono_Security_PKCS7_ContentInfo__ctor__);
    FUN_02f08768(Method_System_Xml_Linq_XElement_WriteTo__);
    FUN_02f08768(Method_System_Xml_Linq_XElement_set_Value__);
    FUN_02f08768(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    FUN_02f08768(PTR_DAT_067c97b0);
    DAT_06bc54bd = 1;
  }
  puVar4 = Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_3__;
  local_70 = 0;
  uStack_68 = 0;
  local_48 = 0;
  local_80 = 0;
  uStack_78 = 0;
  if (param_1 != (undefined8 *)0x0) {
    if ((int)param_2 == 0) {
      return 0;
    }
    lVar5 = *(long *)
             Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_3__;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar5 = *(long *)puVar4;
    }
    puVar3 = PTR_DAT_067c97b0;
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 != 0) {
      lVar5 = FUN_0336dfb0(lVar5,*(undefined8 *)Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      auVar12 = FUN_050cd784(0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05ed5704(&local_70,auVar12._0_8_,auVar12._8_8_,0);
      puVar3 = Method_Mono_Security_PKCS7_ContentInfo__ctor__;
      if (**(long **)(*(long *)puVar4 + 0xb8) != 0) {
        FUN_049847a8(**(long **)(*(long *)puVar4 + 0xb8),local_70,uStack_68,lVar5,param_3,
                     *(undefined8 *)
                      Method_UnityEngine_XR_OpenXR_OpenXRSettings_<>c_<set_colorSubmissionModes>b__37_0__
                    );
        uVar9 = uStack_68;
        uVar11 = local_70;
        local_48 = 0;
        uVar6 = Unity_Properties_TypeConversion__Convert<double,_byte>
                          (param_1,param_2,*(undefined8 *)puVar3);
        FUN_06028e20(uVar11,uVar9,uVar6,param_2 & 0xffffffff,
                     *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10),&local_48);
        uVar7 = FUN_05edb354(&local_48,0);
        if ((uVar7 & 1) == 0) {
          if (lVar5 != 0) {
            return *(undefined8 *)(lVar5 + 0x18);
          }
        }
        else {
          FUN_03d6421c(&local_80,param_2 & 0xffffffff,param_3,1,
                       *(undefined8 *)Method_System_Xml_Linq_XElement_WriteTo__);
          if (0 < (int)param_2) {
            lVar10 = 0;
            do {
              uVar9 = param_1[1];
              uVar11 = *param_1;
              puVar1 = (undefined8 *)(local_80 + lVar10);
              lVar10 = lVar10 + 0x18;
              *puVar1 = local_48;
              puVar1[2] = uVar9;
              puVar1[1] = uVar11;
              param_1 = param_1 + 2;
            } while (((param_2 & 0xffffffff) * 2 + (param_2 & 0xffffffff)) * 8 - lVar10 != 0);
          }
          lVar10 = *(long *)puVar4;
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar10 = *(long *)puVar4;
          }
          if (**(long **)(lVar10 + 0xb8) != 0) {
            FUN_04985cd0(**(long **)(lVar10 + 0xb8),local_70,uStack_68,
                         *(undefined8 *)
                          Method_System_Collections_Specialized_OrderedDictionary_OrderedDictionaryKeyValueCollection_System_Collections_ICollection_CopyTo__
                        );
            lVar10 = *(long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRSettings_<>c_<get_colorSubmissionModes>b__36_0__
            ;
            uStack_58 = uStack_78;
            local_60 = local_80;
            if (lVar5 != 0) {
              lVar8 = *(long *)(lVar10 + 0x20);
              uVar2 = *(ushort *)(lVar8 + 0x135);
              if ((uVar2 & 1) == 0) {
                FUN_02f41e9c();
                lVar8 = *(long *)(lVar10 + 0x20);
                uVar2 = *(ushort *)(lVar8 + 0x135);
              }
              uVar11 = *(undefined8 *)(lVar5 + 0x18);
              if ((uVar2 & 1) == 0) {
                lVar8 = FUN_02f41e9c();
              }
              FUN_03d7df50(lVar5,&local_60,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x20));
              lVar10 = *(long *)(lVar10 + 0x20);
              if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_02f41e9c();
              }
              FUN_03d7e1b8(lVar5,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x30));
              return uVar11;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  thunk_FUN_02f6ef30(PTR_DAT_067c99e8);
  uVar11 = thunk_FUN_02f45270();
  uVar9 = thunk_FUN_02f6ef30(Method_System_Data_XMLDiffLoader_ReadOldRowData__);
  FUN_05055664(uVar11,uVar9,0);
  uVar9 = thunk_FUN_02f6ef30(Method_Mono_Security_PKCS7_SignedData__ctor__);
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar11,uVar9);
}


