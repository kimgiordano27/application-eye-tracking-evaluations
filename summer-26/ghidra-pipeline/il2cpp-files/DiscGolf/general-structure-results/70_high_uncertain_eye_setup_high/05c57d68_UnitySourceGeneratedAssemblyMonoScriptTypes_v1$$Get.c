/*
FUNCTION_NAME: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
ENTRY_POINT: 05c57d68
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  int unaff_w23;
  
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x94);
  uVar4 = thunk_FUN_02dd3144();
  FUN_05c583b4(uVar4,*unaff_x20,0x50,uVar1);
  puVar5 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x10);
  *puVar5 = uVar4;
  LeanTween__value(puVar5,uVar4);
  puVar3 = Method_Newtonsoft_Json_Utilities_DynamicProxyMetaObject<JValue>__ctor__;
  lVar7 = (*(long **)(*unaff_x21 + 0xb8))[2];
  if ((lVar7 != 0) && (lVar6 = **(long **)(*unaff_x21 + 0xb8), lVar6 != 0)) {
    FUN_04e935dc(lVar6,*(undefined8 *)(lVar7 + 0x20),lVar7,
                 *(undefined8 *)
                  Method_Newtonsoft_Json_Utilities_DynamicProxyMetaObject<JValue>__ctor__);
    puVar2 = OVRPlugin_OVRP_1_0_0_TypeInfo;
    lVar7 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x10);
    if (lVar7 != 0) {
      uVar1 = *(undefined4 *)(lVar7 + 0x10);
      uVar4 = thunk_FUN_02dd3144(*unaff_x22);
      FUN_05c583b4(uVar4,*(undefined8 *)puVar2,0x1bb,uVar1);
      puVar5 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x18);
      *puVar5 = uVar4;
      LeanTween__value(puVar5,uVar4);
      puVar2 = Method_Oculus_Avatar2_EntityJointMonitorBase<InterpolatingJoint>__ctor__;
      lVar7 = (*(long **)(*unaff_x21 + 0xb8))[3];
      if ((lVar7 != 0) && (lVar6 = **(long **)(*unaff_x21 + 0xb8), lVar6 != 0)) {
        FUN_04e935dc(lVar6,*(undefined8 *)(lVar7 + 0x20),lVar7,*(undefined8 *)puVar3);
        uVar1 = *(undefined4 *)(*(long *)(*unaff_x21 + 0xb8) + 0x94);
        uVar4 = thunk_FUN_02dd3144(*unaff_x22);
        FUN_05c583b4(uVar4,*(undefined8 *)puVar2,0x50,uVar1);
        puVar5 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x20);
        *puVar5 = uVar4;
        LeanTween__value(puVar5,uVar4);
        puVar2 = OVRPlugin_OVRP_1_100_0_TypeInfo;
        lVar7 = (*(long **)(*unaff_x21 + 0xb8))[4];
        if ((lVar7 != 0) && (lVar6 = **(long **)(*unaff_x21 + 0xb8), lVar6 != 0)) {
          FUN_04e935dc(lVar6,*(undefined8 *)(lVar7 + 0x20),lVar7,*(undefined8 *)puVar3);
          uVar1 = *(undefined4 *)(*(long *)(*unaff_x21 + 0xb8) + 0x94);
          uVar4 = thunk_FUN_02dd3144(*unaff_x22);
          FUN_05c583b4(uVar4,*(undefined8 *)puVar2,0x1bb,uVar1);
          puVar5 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x28);
          *puVar5 = uVar4;
          LeanTween__value(puVar5,uVar4);
          puVar2 = 
          Method_Oculus_Avatar2_EntityJointMonitorBase<JobTransformHolder>_CreateNewTransform__;
          lVar7 = (*(long **)(*unaff_x21 + 0xb8))[5];
          if ((lVar7 != 0) && (lVar6 = **(long **)(*unaff_x21 + 0xb8), lVar6 != 0)) {
            FUN_04e935dc(lVar6,*(undefined8 *)(lVar7 + 0x20),lVar7,*(undefined8 *)puVar3);
            uVar4 = thunk_FUN_02dd3144(*unaff_x22);
            FUN_05c583b4(uVar4,*(undefined8 *)puVar2,0x15,0x15e00f5d);
            puVar5 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x30);
            *puVar5 = uVar4;
            LeanTween__value(puVar5,uVar4);
            puVar2 = 
            Method_System_Collections_Generic_Dictionary<int,_TextResourceManager_FontAssetRef>_get_Item__
            ;
            lVar7 = (*(long **)(*unaff_x21 + 0xb8))[6];
            if ((lVar7 != 0) && (lVar6 = **(long **)(*unaff_x21 + 0xb8), lVar6 != 0)) {
              FUN_04e935dc(lVar6,*(undefined8 *)(lVar7 + 0x20),lVar7,*(undefined8 *)puVar3);
              uVar1 = *(undefined4 *)(*(long *)(*unaff_x21 + 0xb8) + 0x98);
              uVar4 = thunk_FUN_02dd3144(*unaff_x22);
              FUN_05c583b4(uVar4,*(undefined8 *)puVar2,0xffffffff,uVar1);
              puVar5 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x38);
              *puVar5 = uVar4;
              LeanTween__value(puVar5,uVar4);
              puVar2 = Method_UnityEngine_Rendering_DebugUI_EnumField<Enum>__ctor__;
              lVar7 = (*(long **)(*unaff_x21 + 0xb8))[7];
              if ((lVar7 != 0) && (lVar6 = **(long **)(*unaff_x21 + 0xb8), lVar6 != 0)) {
                FUN_04e935dc(lVar6,*(undefined8 *)(lVar7 + 0x20),lVar7,*(undefined8 *)puVar3);
                uVar4 = thunk_FUN_02dd3144(*unaff_x22);
                FUN_05c583b4(uVar4,*(undefined8 *)puVar2,0x46,0x14200f5d);
                puVar5 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x40);
                *puVar5 = uVar4;
                LeanTween__value(puVar5,uVar4);
                puVar2 = 
                Method_Oculus_Avatar2_EntityJointMonitorBase<TransformHolder>_CreateNewTransform__;
                lVar7 = (*(long **)(*unaff_x21 + 0xb8))[8];
                if ((lVar7 != 0) && (lVar6 = **(long **)(*unaff_x21 + 0xb8), lVar6 != 0)) {
                  FUN_04e935dc(lVar6,*(undefined8 *)(lVar7 + 0x20),lVar7,*(undefined8 *)puVar3);
                  uVar4 = thunk_FUN_02dd3144(*unaff_x22);
                  FUN_05c583b4(uVar4,*(undefined8 *)puVar2,0x77,0x14200f5d);
                  puVar5 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x48);
                  *puVar5 = uVar4;
                  LeanTween__value(puVar5,uVar4);
                  puVar2 = 
                  Method_Oculus_Avatar2_EntityJointMonitorBase<InterpolatingJoint>_GetAllJointData__
                  ;
                  lVar7 = (*(long **)(*unaff_x21 + 0xb8))[9];
                  if ((lVar7 != 0) && (lVar6 = **(long **)(*unaff_x21 + 0xb8), lVar6 != 0)) {
                    FUN_04e935dc(lVar6,*(undefined8 *)(lVar7 + 0x20),lVar7,*(undefined8 *)puVar3);
                    uVar4 = thunk_FUN_02dd3144(*unaff_x22);
                    FUN_05c583b4(uVar4,*(undefined8 *)puVar2,0xffffffff,0x10000050);
                    puVar5 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x50);
                    *puVar5 = uVar4;
                    LeanTween__value(puVar5,uVar4);
                    puVar2 = Method_UnityEngine_Rendering_DebugUI_EnumField<Enum>_get_enumValues__;
                    lVar7 = (*(long **)(*unaff_x21 + 0xb8))[10];
                    if ((lVar7 != 0) && (lVar6 = **(long **)(*unaff_x21 + 0xb8), lVar6 != 0)) {
                      FUN_04e935dc(lVar6,*(undefined8 *)(lVar7 + 0x20),lVar7,*(undefined8 *)puVar3);
                      uVar4 = thunk_FUN_02dd3144(*unaff_x22);
                      FUN_05c583b4(uVar4,*(undefined8 *)puVar2,0x19,0x14004ffc);
                      puVar5 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x58);
                      *puVar5 = uVar4;
                      LeanTween__value(puVar5,uVar4);
                      lVar7 = (*(long **)(*unaff_x21 + 0xb8))[0xb];
                      if ((lVar7 != 0) && (lVar6 = **(long **)(*unaff_x21 + 0xb8), lVar6 != 0)) {
                        FUN_04e935dc(lVar6,*(undefined8 *)(lVar7 + 0x20),lVar7,*(undefined8 *)puVar3
                                    );
                        puVar2 = PTR_DAT_06a12628;
                        lVar7 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x50);
                        if (lVar7 != 0) {
                          uVar1 = *(undefined4 *)(lVar7 + 0x10);
                          uVar4 = thunk_FUN_02dd3144(*unaff_x22);
                          FUN_05c583b4(uVar4,*(undefined8 *)puVar2,0xffffffff,uVar1);
                          puVar5 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x60);
                          *puVar5 = uVar4;
                          LeanTween__value(puVar5,uVar4);
                          puVar2 = 
                          Method_Oculus_Avatar2_EntityJointMonitorBase<InterpolatingJoint>_CreateNewTransform__
                          ;
                          lVar7 = (*(long **)(*unaff_x21 + 0xb8))[0xc];
                          if ((lVar7 != 0) && (lVar6 = **(long **)(*unaff_x21 + 0xb8), lVar6 != 0))
                          {
                            FUN_04e935dc(lVar6,*(undefined8 *)(lVar7 + 0x20),lVar7,
                                         *(undefined8 *)puVar3);
                            uVar4 = thunk_FUN_02dd3144(*unaff_x22);
                            FUN_05c583b4(uVar4,*(undefined8 *)puVar2,0x17,0x14200f5d);
                            puVar5 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x68);
                            *puVar5 = uVar4;
                            LeanTween__value(puVar5,uVar4);
                            puVar2 = 
                            Method_Oculus_Avatar2_EntityJointMonitorBase<JobTransformHolder>_GetAllJointData__
                            ;
                            lVar7 = (*(long **)(*unaff_x21 + 0xb8))[0xd];
                            if ((lVar7 != 0) && (lVar6 = **(long **)(*unaff_x21 + 0xb8), lVar6 != 0)
                               ) {
                              FUN_04e935dc(lVar6,*(undefined8 *)(lVar7 + 0x20),lVar7,
                                           *(undefined8 *)puVar3);
                              uVar4 = thunk_FUN_02dd3144(*unaff_x22);
                              FUN_05c583b4(uVar4,*(undefined8 *)puVar2,0x185,0x14200ffd);
                              puVar5 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x70);
                              *puVar5 = uVar4;
                              LeanTween__value(puVar5,uVar4);
                              puVar2 = 
                              Method_UnityEngine_Rendering_DebugUI_EnumField<Enum>_AutoFillFromType__
                              ;
                              lVar7 = (*(long **)(*unaff_x21 + 0xb8))[0xe];
                              if ((lVar7 != 0) &&
                                 (lVar6 = **(long **)(*unaff_x21 + 0xb8), lVar6 != 0)) {
                                FUN_04e935dc(lVar6,*(undefined8 *)(lVar7 + 0x20),lVar7,
                                             *(undefined8 *)puVar3);
                                uVar4 = thunk_FUN_02dd3144(*unaff_x22);
                                FUN_05c583b4(uVar4,*(undefined8 *)puVar2,0x328,unaff_w23 + 8);
                                puVar5 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x78);
                                *puVar5 = uVar4;
                                LeanTween__value(puVar5,uVar4);
                                puVar2 = 
                                Method_Newtonsoft_Json_Utilities_DynamicProxy<JValue>__ctor__;
                                lVar7 = (*(long **)(*unaff_x21 + 0xb8))[0xf];
                                if ((lVar7 != 0) &&
                                   (lVar6 = **(long **)(*unaff_x21 + 0xb8), lVar6 != 0)) {
                                  FUN_04e935dc(lVar6,*(undefined8 *)(lVar7 + 0x20),lVar7,
                                               *(undefined8 *)puVar3);
                                  uVar4 = thunk_FUN_02dd3144(*unaff_x22);
                                  FUN_05c583b4(uVar4,*(undefined8 *)puVar2,0xffffffff,0x17e00e71);
                                  puVar5 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x80);
                                  *puVar5 = uVar4;
                                  LeanTween__value(puVar5,uVar4);
                                  puVar2 = 
                                  Method_Newtonsoft_Json_Utilities_DynamicProxy<JToken>__ctor__;
                                  lVar7 = (*(long **)(*unaff_x21 + 0xb8))[0x10];
                                  if ((lVar7 != 0) &&
                                     (lVar6 = **(long **)(*unaff_x21 + 0xb8), lVar6 != 0)) {
                                    FUN_04e935dc(lVar6,*(undefined8 *)(lVar7 + 0x20),lVar7,
                                                 *(undefined8 *)puVar3);
                                    uVar4 = thunk_FUN_02dd3144(*unaff_x22);
                                    FUN_05c583b4(uVar4,*(undefined8 *)puVar2,0xffffffff,0x17d02fd1);
                                    puVar5 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x88);
                                    *puVar5 = uVar4;
                                    LeanTween__value(puVar5,uVar4);
                                    lVar7 = (*(long **)(*unaff_x21 + 0xb8))[0x11];
                                    if ((lVar7 != 0) &&
                                       (lVar6 = **(long **)(*unaff_x21 + 0xb8), lVar6 != 0)) {
                                      FUN_04e935dc(lVar6,*(undefined8 *)(lVar7 + 0x20),lVar7,
                                                   *(undefined8 *)puVar3);
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


