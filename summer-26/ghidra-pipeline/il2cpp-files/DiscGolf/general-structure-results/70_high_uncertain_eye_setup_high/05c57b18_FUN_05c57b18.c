/*
FUNCTION_NAME: FUN_05c57b18
ENTRY_POINT: 05c57b18
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_05c57b18(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined4 uVar12;
  
  puVar2 = PTR_DAT_06a1b6a0;
  if ((DAT_06dc2913 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a1b6a0);
    FUN_02d965b8(Method_Newtonsoft_Json_Utilities_DynamicProxyMetaObject<JObject>__ctor__);
    FUN_02d965b8(Method_Newtonsoft_Json_Utilities_DynamicProxyMetaObject<JToken>__ctor__);
    FUN_02d965b8(Method_Newtonsoft_Json_Utilities_DynamicProxyMetaObject<JValue>__ctor__);
    FUN_02d965b8(Method_Newtonsoft_Json_Utilities_DynamicProxy<JObject>__ctor__);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    FUN_02d965b8(Method_Newtonsoft_Json_Utilities_DynamicProxy<JToken>__ctor__);
    FUN_02d965b8(Method_Newtonsoft_Json_Utilities_DynamicProxy<JValue>__ctor__);
    FUN_02d965b8(OVRPlugin_OVRP_1_100_0_TypeInfo);
    FUN_02d965b8(Method_Oculus_Avatar2_EntityJointMonitorBase<InterpolatingJoint>__ctor__);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<string,_UriParser>_TryGetValue__);
    FUN_02d965b8(
                Method_Oculus_Avatar2_EntityJointMonitorBase<InterpolatingJoint>_CreateNewTransform__
                );
    FUN_02d965b8(Method_Oculus_Avatar2_EntityJointMonitorBase<InterpolatingJoint>_GetAllJointData__)
    ;
    FUN_02d965b8(PTR_DAT_06a12628);
    FUN_02d965b8(
                Method_Oculus_Avatar2_EntityJointMonitorBase<JobTransformHolder>_CreateNewTransform__
                );
    FUN_02d965b8(Method_Oculus_Avatar2_EntityJointMonitorBase<JobTransformHolder>_GetAllJointData__)
    ;
    FUN_02d965b8(Method_Oculus_Avatar2_EntityJointMonitorBase<TransformHolder>_CreateNewTransform__)
    ;
    FUN_02d965b8(Method_UnityEngine_Rendering_DebugUI_EnumField<Enum>__ctor__);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<int,_TextResourceManager_FontAssetRef>_get_Item__
                );
    FUN_02d965b8(Method_UnityEngine_Rendering_DebugUI_EnumField<Enum>_AutoFillFromType__);
    FUN_02d965b8(Method_UnityEngine_Rendering_DebugUI_EnumField<Enum>_get_enumValues__);
    FUN_02d965b8(OVRPlugin_OVRP_1_0_0_TypeInfo);
    DAT_06dc2913 = 1;
  }
  puVar6 = Method_Newtonsoft_Json_Utilities_DynamicProxy<JObject>__ctor__;
  puVar5 = Method_Newtonsoft_Json_Utilities_DynamicProxyMetaObject<JToken>__ctor__;
  puVar4 = Method_Newtonsoft_Json_Utilities_DynamicProxyMetaObject<JObject>__ctor__;
  puVar1 = Method_System_Collections_Generic_Dictionary<string,_UriParser>_TryGetValue__;
  puVar3 = Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__;
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar7 = *(long *)puVar2;
  }
  uVar12 = 2;
  if (**(char **)(lVar7 + 0xb8) != '\0') {
    uVar12 = 3;
  }
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x90) = uVar12;
  uVar8 = FUN_05c5750c();
  uVar12 = 0x17e00f7d;
  if ((uVar8 & 1) == 0) {
    uVar12 = 0x15e00f7d;
  }
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x94) = uVar12;
  uVar8 = FUN_05c5750c();
  uVar9 = *(undefined8 *)puVar6;
  uVar12 = 0x17f02fd1;
  if ((uVar8 & 1) == 0) {
    uVar12 = 0x17f02ff1;
  }
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x98) = uVar12;
  uVar9 = thunk_FUN_02dd3144(uVar9);
  FUN_04e9288c(uVar9,0x19,*(undefined8 *)puVar5);
  **(undefined8 **)(*(long *)puVar3 + 0xb8) = uVar9;
  LeanTween__value(*(undefined8 *)(*(long *)puVar3 + 0xb8),uVar9);
  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
  FUN_04e9288c(uVar9,0x19,*(undefined8 *)puVar5);
  puVar10 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
  *puVar10 = uVar9;
  LeanTween__value(puVar10,uVar9);
  uVar12 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x94);
  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
  FUN_05c583b4(uVar9,*(undefined8 *)puVar1,0x50,uVar12);
  puVar10 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
  *puVar10 = uVar9;
  LeanTween__value(puVar10,uVar9);
  puVar2 = Method_Newtonsoft_Json_Utilities_DynamicProxyMetaObject<JValue>__ctor__;
  lVar7 = (*(long **)(*(long *)puVar3 + 0xb8))[2];
  if ((lVar7 != 0) && (lVar11 = **(long **)(*(long *)puVar3 + 0xb8), lVar11 != 0)) {
    FUN_04e935dc(lVar11,*(undefined8 *)(lVar7 + 0x20),lVar7,
                 *(undefined8 *)
                  Method_Newtonsoft_Json_Utilities_DynamicProxyMetaObject<JValue>__ctor__);
    puVar1 = OVRPlugin_OVRP_1_0_0_TypeInfo;
    lVar7 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
    if (lVar7 != 0) {
      uVar12 = *(undefined4 *)(lVar7 + 0x10);
      uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
      FUN_05c583b4(uVar9,*(undefined8 *)puVar1,0x1bb,uVar12);
      puVar10 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
      *puVar10 = uVar9;
      LeanTween__value(puVar10,uVar9);
      puVar1 = Method_Oculus_Avatar2_EntityJointMonitorBase<InterpolatingJoint>__ctor__;
      lVar7 = (*(long **)(*(long *)puVar3 + 0xb8))[3];
      if ((lVar7 != 0) && (lVar11 = **(long **)(*(long *)puVar3 + 0xb8), lVar11 != 0)) {
        FUN_04e935dc(lVar11,*(undefined8 *)(lVar7 + 0x20),lVar7,*(undefined8 *)puVar2);
        uVar12 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x94);
        uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
        FUN_05c583b4(uVar9,*(undefined8 *)puVar1,0x50,uVar12);
        puVar10 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
        *puVar10 = uVar9;
        LeanTween__value(puVar10,uVar9);
        puVar1 = OVRPlugin_OVRP_1_100_0_TypeInfo;
        lVar7 = (*(long **)(*(long *)puVar3 + 0xb8))[4];
        if ((lVar7 != 0) && (lVar11 = **(long **)(*(long *)puVar3 + 0xb8), lVar11 != 0)) {
          FUN_04e935dc(lVar11,*(undefined8 *)(lVar7 + 0x20),lVar7,*(undefined8 *)puVar2);
          uVar12 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x94);
          uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
          FUN_05c583b4(uVar9,*(undefined8 *)puVar1,0x1bb,uVar12);
          puVar10 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
          *puVar10 = uVar9;
          LeanTween__value(puVar10,uVar9);
          puVar1 = 
          Method_Oculus_Avatar2_EntityJointMonitorBase<JobTransformHolder>_CreateNewTransform__;
          lVar7 = (*(long **)(*(long *)puVar3 + 0xb8))[5];
          if ((lVar7 != 0) && (lVar11 = **(long **)(*(long *)puVar3 + 0xb8), lVar11 != 0)) {
            FUN_04e935dc(lVar11,*(undefined8 *)(lVar7 + 0x20),lVar7,*(undefined8 *)puVar2);
            uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
            FUN_05c583b4(uVar9,*(undefined8 *)puVar1,0x15,0x15e00f5d);
            puVar10 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30);
            *puVar10 = uVar9;
            LeanTween__value(puVar10,uVar9);
            puVar1 = 
            Method_System_Collections_Generic_Dictionary<int,_TextResourceManager_FontAssetRef>_get_Item__
            ;
            lVar7 = (*(long **)(*(long *)puVar3 + 0xb8))[6];
            if ((lVar7 != 0) && (lVar11 = **(long **)(*(long *)puVar3 + 0xb8), lVar11 != 0)) {
              FUN_04e935dc(lVar11,*(undefined8 *)(lVar7 + 0x20),lVar7,*(undefined8 *)puVar2);
              uVar12 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x98);
              uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
              FUN_05c583b4(uVar9,*(undefined8 *)puVar1,0xffffffff,uVar12);
              puVar10 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38);
              *puVar10 = uVar9;
              LeanTween__value(puVar10,uVar9);
              puVar1 = Method_UnityEngine_Rendering_DebugUI_EnumField<Enum>__ctor__;
              lVar7 = (*(long **)(*(long *)puVar3 + 0xb8))[7];
              if ((lVar7 != 0) && (lVar11 = **(long **)(*(long *)puVar3 + 0xb8), lVar11 != 0)) {
                FUN_04e935dc(lVar11,*(undefined8 *)(lVar7 + 0x20),lVar7,*(undefined8 *)puVar2);
                uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                FUN_05c583b4(uVar9,*(undefined8 *)puVar1,0x46,0x14200f5d);
                puVar10 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x40);
                *puVar10 = uVar9;
                LeanTween__value(puVar10,uVar9);
                puVar1 = 
                Method_Oculus_Avatar2_EntityJointMonitorBase<TransformHolder>_CreateNewTransform__;
                lVar7 = (*(long **)(*(long *)puVar3 + 0xb8))[8];
                if ((lVar7 != 0) && (lVar11 = **(long **)(*(long *)puVar3 + 0xb8), lVar11 != 0)) {
                  FUN_04e935dc(lVar11,*(undefined8 *)(lVar7 + 0x20),lVar7,*(undefined8 *)puVar2);
                  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                  FUN_05c583b4(uVar9,*(undefined8 *)puVar1,0x77,0x14200f5d);
                  puVar10 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x48);
                  *puVar10 = uVar9;
                  LeanTween__value(puVar10,uVar9);
                  puVar1 = 
                  Method_Oculus_Avatar2_EntityJointMonitorBase<InterpolatingJoint>_GetAllJointData__
                  ;
                  lVar7 = (*(long **)(*(long *)puVar3 + 0xb8))[9];
                  if ((lVar7 != 0) && (lVar11 = **(long **)(*(long *)puVar3 + 0xb8), lVar11 != 0)) {
                    FUN_04e935dc(lVar11,*(undefined8 *)(lVar7 + 0x20),lVar7,*(undefined8 *)puVar2);
                    uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                    FUN_05c583b4(uVar9,*(undefined8 *)puVar1,0xffffffff,0x10000050);
                    puVar10 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50);
                    *puVar10 = uVar9;
                    LeanTween__value(puVar10,uVar9);
                    puVar1 = Method_UnityEngine_Rendering_DebugUI_EnumField<Enum>_get_enumValues__;
                    lVar7 = (*(long **)(*(long *)puVar3 + 0xb8))[10];
                    if ((lVar7 != 0) && (lVar11 = **(long **)(*(long *)puVar3 + 0xb8), lVar11 != 0))
                    {
                      FUN_04e935dc(lVar11,*(undefined8 *)(lVar7 + 0x20),lVar7,*(undefined8 *)puVar2)
                      ;
                      uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                      FUN_05c583b4(uVar9,*(undefined8 *)puVar1,0x19,0x14004ffc);
                      puVar10 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x58);
                      *puVar10 = uVar9;
                      LeanTween__value(puVar10,uVar9);
                      lVar7 = (*(long **)(*(long *)puVar3 + 0xb8))[0xb];
                      if ((lVar7 != 0) &&
                         (lVar11 = **(long **)(*(long *)puVar3 + 0xb8), lVar11 != 0)) {
                        FUN_04e935dc(lVar11,*(undefined8 *)(lVar7 + 0x20),lVar7,
                                     *(undefined8 *)puVar2);
                        puVar1 = PTR_DAT_06a12628;
                        lVar7 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50);
                        if (lVar7 != 0) {
                          uVar12 = *(undefined4 *)(lVar7 + 0x10);
                          uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                          FUN_05c583b4(uVar9,*(undefined8 *)puVar1,0xffffffff,uVar12);
                          puVar10 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x60);
                          *puVar10 = uVar9;
                          LeanTween__value(puVar10,uVar9);
                          puVar1 = 
                          Method_Oculus_Avatar2_EntityJointMonitorBase<InterpolatingJoint>_CreateNewTransform__
                          ;
                          lVar7 = (*(long **)(*(long *)puVar3 + 0xb8))[0xc];
                          if ((lVar7 != 0) &&
                             (lVar11 = **(long **)(*(long *)puVar3 + 0xb8), lVar11 != 0)) {
                            FUN_04e935dc(lVar11,*(undefined8 *)(lVar7 + 0x20),lVar7,
                                         *(undefined8 *)puVar2);
                            uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                            FUN_05c583b4(uVar9,*(undefined8 *)puVar1,0x17,0x14200f5d);
                            puVar10 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x68);
                            *puVar10 = uVar9;
                            LeanTween__value(puVar10,uVar9);
                            puVar1 = 
                            Method_Oculus_Avatar2_EntityJointMonitorBase<JobTransformHolder>_GetAllJointData__
                            ;
                            lVar7 = (*(long **)(*(long *)puVar3 + 0xb8))[0xd];
                            if ((lVar7 != 0) &&
                               (lVar11 = **(long **)(*(long *)puVar3 + 0xb8), lVar11 != 0)) {
                              FUN_04e935dc(lVar11,*(undefined8 *)(lVar7 + 0x20),lVar7,
                                           *(undefined8 *)puVar2);
                              uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                              FUN_05c583b4(uVar9,*(undefined8 *)puVar1,0x185,0x14200ffd);
                              puVar10 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x70);
                              *puVar10 = uVar9;
                              LeanTween__value(puVar10,uVar9);
                              puVar1 = 
                              Method_UnityEngine_Rendering_DebugUI_EnumField<Enum>_AutoFillFromType__
                              ;
                              lVar7 = (*(long **)(*(long *)puVar3 + 0xb8))[0xe];
                              if ((lVar7 != 0) &&
                                 (lVar11 = **(long **)(*(long *)puVar3 + 0xb8), lVar11 != 0)) {
                                FUN_04e935dc(lVar11,*(undefined8 *)(lVar7 + 0x20),lVar7,
                                             *(undefined8 *)puVar2);
                                uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                                FUN_05c583b4(uVar9,*(undefined8 *)puVar1,0x328,0x17e00e79);
                                puVar10 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x78);
                                *puVar10 = uVar9;
                                LeanTween__value(puVar10,uVar9);
                                puVar1 = 
                                Method_Newtonsoft_Json_Utilities_DynamicProxy<JValue>__ctor__;
                                lVar7 = (*(long **)(*(long *)puVar3 + 0xb8))[0xf];
                                if ((lVar7 != 0) &&
                                   (lVar11 = **(long **)(*(long *)puVar3 + 0xb8), lVar11 != 0)) {
                                  FUN_04e935dc(lVar11,*(undefined8 *)(lVar7 + 0x20),lVar7,
                                               *(undefined8 *)puVar2);
                                  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                                  FUN_05c583b4(uVar9,*(undefined8 *)puVar1,0xffffffff,0x17e00e71);
                                  puVar10 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x80)
                                  ;
                                  *puVar10 = uVar9;
                                  LeanTween__value(puVar10,uVar9);
                                  puVar1 = 
                                  Method_Newtonsoft_Json_Utilities_DynamicProxy<JToken>__ctor__;
                                  lVar7 = (*(long **)(*(long *)puVar3 + 0xb8))[0x10];
                                  if ((lVar7 != 0) &&
                                     (lVar11 = **(long **)(*(long *)puVar3 + 0xb8), lVar11 != 0)) {
                                    FUN_04e935dc(lVar11,*(undefined8 *)(lVar7 + 0x20),lVar7,
                                                 *(undefined8 *)puVar2);
                                    uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                                    FUN_05c583b4(uVar9,*(undefined8 *)puVar1,0xffffffff,0x17d02fd1);
                                    puVar10 = (undefined8 *)
                                              (*(long *)(*(long *)puVar3 + 0xb8) + 0x88);
                                    *puVar10 = uVar9;
                                    LeanTween__value(puVar10,uVar9);
                                    lVar7 = (*(long **)(*(long *)puVar3 + 0xb8))[0x11];
                                    if ((lVar7 != 0) &&
                                       (lVar11 = **(long **)(*(long *)puVar3 + 0xb8), lVar11 != 0))
                                    {
                                      FUN_04e935dc(lVar11,*(undefined8 *)(lVar7 + 0x20),lVar7,
                                                   *(undefined8 *)puVar2);
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
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


