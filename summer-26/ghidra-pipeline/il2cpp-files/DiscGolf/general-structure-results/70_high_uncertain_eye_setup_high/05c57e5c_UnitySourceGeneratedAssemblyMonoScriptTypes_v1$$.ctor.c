/*
FUNCTION_NAME: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$.ctor
ENTRY_POINT: 05c57e5c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor(undefined8 param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x21;
  undefined8 *unaff_x22;
  int unaff_w23;
  undefined8 *unaff_x24;
  
  FUN_05c583b4();
  puVar3 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x20);
  *puVar3 = param_1;
  LeanTween__value(puVar3,param_1);
  puVar2 = OVRPlugin_OVRP_1_100_0_TypeInfo;
  lVar6 = (*(long **)(*unaff_x21 + 0xb8))[4];
  if ((lVar6 != 0) && (lVar4 = **(long **)(*unaff_x21 + 0xb8), lVar4 != 0)) {
    FUN_04e935dc(lVar4,*(undefined8 *)(lVar6 + 0x20),lVar6,*unaff_x24);
    uVar1 = *(undefined4 *)(*(long *)(*unaff_x21 + 0xb8) + 0x94);
    uVar5 = thunk_FUN_02dd3144(*unaff_x22);
    FUN_05c583b4(uVar5,*(undefined8 *)puVar2,0x1bb,uVar1);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x28);
    *puVar3 = uVar5;
    LeanTween__value(puVar3,uVar5);
    puVar2 = Method_Oculus_Avatar2_EntityJointMonitorBase<JobTransformHolder>_CreateNewTransform__;
    lVar6 = (*(long **)(*unaff_x21 + 0xb8))[5];
    if ((lVar6 != 0) && (lVar4 = **(long **)(*unaff_x21 + 0xb8), lVar4 != 0)) {
      FUN_04e935dc(lVar4,*(undefined8 *)(lVar6 + 0x20),lVar6,*unaff_x24);
      uVar5 = thunk_FUN_02dd3144(*unaff_x22);
      FUN_05c583b4(uVar5,*(undefined8 *)puVar2,0x15,0x15e00f5d);
      puVar3 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x30);
      *puVar3 = uVar5;
      LeanTween__value(puVar3,uVar5);
      puVar2 = 
      Method_System_Collections_Generic_Dictionary<int,_TextResourceManager_FontAssetRef>_get_Item__
      ;
      lVar6 = (*(long **)(*unaff_x21 + 0xb8))[6];
      if ((lVar6 != 0) && (lVar4 = **(long **)(*unaff_x21 + 0xb8), lVar4 != 0)) {
        FUN_04e935dc(lVar4,*(undefined8 *)(lVar6 + 0x20),lVar6,*unaff_x24);
        uVar1 = *(undefined4 *)(*(long *)(*unaff_x21 + 0xb8) + 0x98);
        uVar5 = thunk_FUN_02dd3144(*unaff_x22);
        FUN_05c583b4(uVar5,*(undefined8 *)puVar2,0xffffffff,uVar1);
        puVar3 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x38);
        *puVar3 = uVar5;
        LeanTween__value(puVar3,uVar5);
        puVar2 = Method_UnityEngine_Rendering_DebugUI_EnumField<Enum>__ctor__;
        lVar6 = (*(long **)(*unaff_x21 + 0xb8))[7];
        if ((lVar6 != 0) && (lVar4 = **(long **)(*unaff_x21 + 0xb8), lVar4 != 0)) {
          FUN_04e935dc(lVar4,*(undefined8 *)(lVar6 + 0x20),lVar6,*unaff_x24);
          uVar5 = thunk_FUN_02dd3144(*unaff_x22);
          FUN_05c583b4(uVar5,*(undefined8 *)puVar2,0x46,0x14200f5d);
          puVar3 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x40);
          *puVar3 = uVar5;
          LeanTween__value(puVar3,uVar5);
          puVar2 = 
          Method_Oculus_Avatar2_EntityJointMonitorBase<TransformHolder>_CreateNewTransform__;
          lVar6 = (*(long **)(*unaff_x21 + 0xb8))[8];
          if ((lVar6 != 0) && (lVar4 = **(long **)(*unaff_x21 + 0xb8), lVar4 != 0)) {
            FUN_04e935dc(lVar4,*(undefined8 *)(lVar6 + 0x20),lVar6,*unaff_x24);
            uVar5 = thunk_FUN_02dd3144(*unaff_x22);
            FUN_05c583b4(uVar5,*(undefined8 *)puVar2,0x77,0x14200f5d);
            puVar3 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x48);
            *puVar3 = uVar5;
            LeanTween__value(puVar3,uVar5);
            puVar2 = 
            Method_Oculus_Avatar2_EntityJointMonitorBase<InterpolatingJoint>_GetAllJointData__;
            lVar6 = (*(long **)(*unaff_x21 + 0xb8))[9];
            if ((lVar6 != 0) && (lVar4 = **(long **)(*unaff_x21 + 0xb8), lVar4 != 0)) {
              FUN_04e935dc(lVar4,*(undefined8 *)(lVar6 + 0x20),lVar6,*unaff_x24);
              uVar5 = thunk_FUN_02dd3144(*unaff_x22);
              FUN_05c583b4(uVar5,*(undefined8 *)puVar2,0xffffffff,0x10000050);
              puVar3 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x50);
              *puVar3 = uVar5;
              LeanTween__value(puVar3,uVar5);
              puVar2 = Method_UnityEngine_Rendering_DebugUI_EnumField<Enum>_get_enumValues__;
              lVar6 = (*(long **)(*unaff_x21 + 0xb8))[10];
              if ((lVar6 != 0) && (lVar4 = **(long **)(*unaff_x21 + 0xb8), lVar4 != 0)) {
                FUN_04e935dc(lVar4,*(undefined8 *)(lVar6 + 0x20),lVar6,*unaff_x24);
                uVar5 = thunk_FUN_02dd3144(*unaff_x22);
                FUN_05c583b4(uVar5,*(undefined8 *)puVar2,0x19,0x14004ffc);
                puVar3 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x58);
                *puVar3 = uVar5;
                LeanTween__value(puVar3,uVar5);
                lVar6 = (*(long **)(*unaff_x21 + 0xb8))[0xb];
                if ((lVar6 != 0) && (lVar4 = **(long **)(*unaff_x21 + 0xb8), lVar4 != 0)) {
                  FUN_04e935dc(lVar4,*(undefined8 *)(lVar6 + 0x20),lVar6,*unaff_x24);
                  puVar2 = PTR_DAT_06a12628;
                  lVar6 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x50);
                  if (lVar6 != 0) {
                    uVar1 = *(undefined4 *)(lVar6 + 0x10);
                    uVar5 = thunk_FUN_02dd3144(*unaff_x22);
                    FUN_05c583b4(uVar5,*(undefined8 *)puVar2,0xffffffff,uVar1);
                    puVar3 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x60);
                    *puVar3 = uVar5;
                    LeanTween__value(puVar3,uVar5);
                    puVar2 = 
                    Method_Oculus_Avatar2_EntityJointMonitorBase<InterpolatingJoint>_CreateNewTransform__
                    ;
                    lVar6 = (*(long **)(*unaff_x21 + 0xb8))[0xc];
                    if ((lVar6 != 0) && (lVar4 = **(long **)(*unaff_x21 + 0xb8), lVar4 != 0)) {
                      FUN_04e935dc(lVar4,*(undefined8 *)(lVar6 + 0x20),lVar6,*unaff_x24);
                      uVar5 = thunk_FUN_02dd3144(*unaff_x22);
                      FUN_05c583b4(uVar5,*(undefined8 *)puVar2,0x17,0x14200f5d);
                      puVar3 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x68);
                      *puVar3 = uVar5;
                      LeanTween__value(puVar3,uVar5);
                      puVar2 = 
                      Method_Oculus_Avatar2_EntityJointMonitorBase<JobTransformHolder>_GetAllJointData__
                      ;
                      lVar6 = (*(long **)(*unaff_x21 + 0xb8))[0xd];
                      if ((lVar6 != 0) && (lVar4 = **(long **)(*unaff_x21 + 0xb8), lVar4 != 0)) {
                        FUN_04e935dc(lVar4,*(undefined8 *)(lVar6 + 0x20),lVar6,*unaff_x24);
                        uVar5 = thunk_FUN_02dd3144(*unaff_x22);
                        FUN_05c583b4(uVar5,*(undefined8 *)puVar2,0x185,0x14200ffd);
                        puVar3 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x70);
                        *puVar3 = uVar5;
                        LeanTween__value(puVar3,uVar5);
                        puVar2 = 
                        Method_UnityEngine_Rendering_DebugUI_EnumField<Enum>_AutoFillFromType__;
                        lVar6 = (*(long **)(*unaff_x21 + 0xb8))[0xe];
                        if ((lVar6 != 0) && (lVar4 = **(long **)(*unaff_x21 + 0xb8), lVar4 != 0)) {
                          FUN_04e935dc(lVar4,*(undefined8 *)(lVar6 + 0x20),lVar6,*unaff_x24);
                          uVar5 = thunk_FUN_02dd3144(*unaff_x22);
                          FUN_05c583b4(uVar5,*(undefined8 *)puVar2,0x328,unaff_w23 + 8);
                          puVar3 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x78);
                          *puVar3 = uVar5;
                          LeanTween__value(puVar3,uVar5);
                          puVar2 = Method_Newtonsoft_Json_Utilities_DynamicProxy<JValue>__ctor__;
                          lVar6 = (*(long **)(*unaff_x21 + 0xb8))[0xf];
                          if ((lVar6 != 0) && (lVar4 = **(long **)(*unaff_x21 + 0xb8), lVar4 != 0))
                          {
                            FUN_04e935dc(lVar4,*(undefined8 *)(lVar6 + 0x20),lVar6,*unaff_x24);
                            uVar5 = thunk_FUN_02dd3144(*unaff_x22);
                            FUN_05c583b4(uVar5,*(undefined8 *)puVar2,0xffffffff,0x17e00e71);
                            puVar3 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x80);
                            *puVar3 = uVar5;
                            LeanTween__value(puVar3,uVar5);
                            puVar2 = Method_Newtonsoft_Json_Utilities_DynamicProxy<JToken>__ctor__;
                            lVar6 = (*(long **)(*unaff_x21 + 0xb8))[0x10];
                            if ((lVar6 != 0) && (lVar4 = **(long **)(*unaff_x21 + 0xb8), lVar4 != 0)
                               ) {
                              FUN_04e935dc(lVar4,*(undefined8 *)(lVar6 + 0x20),lVar6,*unaff_x24);
                              uVar5 = thunk_FUN_02dd3144(*unaff_x22);
                              FUN_05c583b4(uVar5,*(undefined8 *)puVar2,0xffffffff,0x17d02fd1);
                              puVar3 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x88);
                              *puVar3 = uVar5;
                              LeanTween__value(puVar3,uVar5);
                              lVar6 = (*(long **)(*unaff_x21 + 0xb8))[0x11];
                              if ((lVar6 != 0) &&
                                 (lVar4 = **(long **)(*unaff_x21 + 0xb8), lVar4 != 0)) {
                                FUN_04e935dc(lVar4,*(undefined8 *)(lVar6 + 0x20),lVar6,*unaff_x24);
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
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


