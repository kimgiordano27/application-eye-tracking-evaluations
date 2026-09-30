/*
FUNCTION_NAME: FUN_020baef4
ENTRY_POINT: 020baef4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void FUN_020baef4(long param_1,undefined8 param_2,byte param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_68 [24];
  undefined8 local_48;
  
  puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmuls_lane_f32__;
  if ((DAT_03780e86 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Linq_Expressions_Expression_ValidateCoalesceArgTypes__);
    thunk_FUN_00d48444(Method_System_ComponentModel_DateTimeConverter_ConvertFrom__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmuls_lane_f32__);
    thunk_FUN_00d48444(PTR_DAT_033f58e0);
    thunk_FUN_00d48444(PTR_DAT_033ec578);
    thunk_FUN_00d48444(StringLiteral_562);
    thunk_FUN_00d48444(Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                      );
    thunk_FUN_00d48444(Newtonsoft_Json_Linq_JToken_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_OnRestingHandAxis2DPerformed__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Contains__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_OnInputDeviceChange__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_Observable_Call<__Il2CppFullySharedGenericType>__
                      );
    thunk_FUN_00d48444(
                      Method_MedleyBossPhase1_<FireAtTargetCoroutine>d__33_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(Method_System_Xml_XmlReaderSettings_CreateReader__);
    DAT_03780e86 = 1;
  }
  local_48 = 0;
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
  puVar3 = Method_System_Xml_XmlReaderSettings_CreateReader__;
  if (lVar4 != 0) {
    FUN_017d89fc(lVar4,0);
    *(long *)(param_1 + 0x30) = lVar4;
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    puVar3 = StringLiteral_562;
    if (lVar4 != 0) {
      FUN_017b46ec(lVar4,0);
      *(long *)(param_1 + 0x48) = lVar4;
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      puVar3 = Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__;
      if (lVar4 != 0) {
        FUN_017da380(lVar4,1,1,0);
        *(long *)(param_1 + 0x50) = lVar4;
        *(undefined8 *)(param_1 + 0x7a) = 0;
        *(undefined8 *)(param_1 + 0x72) = 0;
        *(undefined4 *)(param_1 + 0x58) = 2;
        *(undefined2 *)(param_1 + 0x70) = 0x101;
        *(undefined8 *)(param_1 + 0x80) = 0;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_03777b33 == '\0') {
          thunk_FUN_00d48444(
                            Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                            );
          DAT_03777b33 = '\x01';
        }
        puVar2 = Method_System_ComponentModel_DateTimeConverter_ConvertFrom__;
        puVar1 = PTR_DAT_033ec578;
        lVar4 = *(long *)puVar3;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar4 = *(long *)puVar3;
        }
        *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x30);
        FUN_017b46ec(param_1,0);
        *(undefined8 *)(param_1 + 0x10) = param_2;
        *(byte *)(param_1 + 0x18) = param_3 & 1;
        *(undefined8 *)(param_1 + 0x20) = param_4;
        uVar5 = FUN_00da4fb8(*(undefined8 *)puVar2,0x7d);
        auVar8 = FUN_0132cc20(uVar5,*(undefined8 *)puVar1);
        *(undefined1 (*) [16])(param_1 + 0x38) = auVar8;
        puVar3 = 
        Method_MedleyBossPhase1_<FireAtTargetCoroutine>d__33_System_Collections_IEnumerator_Reset__;
        if (*(long *)(param_1 + 0x30) != 0) {
          local_48 = FUN_017d8978(*(long *)(param_1 + 0x30),0);
          lVar4 = *(long *)puVar3;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar4);
            lVar4 = *(long *)puVar3;
          }
          puVar1 = Method_System_Linq_Expressions_Expression_ValidateCoalesceArgTypes__;
          lVar7 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
          if (lVar7 == 0) {
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864(lVar4);
              lVar4 = *(long *)puVar3;
            }
            uVar5 = **(undefined8 **)(lVar4 + 0xb8);
            lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            if (lVar7 == 0) goto LAB_020bb2d0;
            FUN_011c181c(lVar7,uVar5,
                         *(undefined8 *)
                          Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_OnInputDeviceChange__
                         ,0);
            *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = lVar7;
          }
          puVar1 = Newtonsoft_Json_Linq_JToken_TypeInfo;
          if (*(int *)(*(long *)PTR_DAT_033f58e0 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          Newtonsoft_Json_Converters_XmlDeclarationWrapper__set_Standalone
                    (auStack_68,&local_48,lVar7,param_1,0);
          lVar4 = *(long *)puVar1;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar4 = *(long *)puVar1;
          }
          uVar6 = FUN_01789604(param_5,**(undefined8 **)(lVar4 + 0xb8),0);
          if ((uVar6 & 1) != 0) {
            lVar4 = *(long *)puVar3;
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar4 = *(long *)puVar3;
            }
            puVar1 = 
            Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_OnRestingHandAxis2DPerformed__
            ;
            lVar7 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
            if (lVar7 == 0) {
              if (*(int *)(lVar4 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar4 = *(long *)puVar3;
              }
              uVar5 = **(undefined8 **)(lVar4 + 0xb8);
              lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
              if (lVar7 == 0) goto LAB_020bb2d0;
              FUN_017e7614(lVar7,uVar5,
                           *(undefined8 *)
                            Method_UnityEngine_InputSystem_Utilities_Observable_Call<__Il2CppFullySharedGenericType>__
                           ,0);
              *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10) = lVar7;
            }
            lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                        Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Contains__
                                      );
            if (lVar4 == 0) goto LAB_020bb2d0;
            Newtonsoft_Json_Bson_BsonWriter__WriteValue(lVar4,lVar7,param_1,param_5,param_5,0);
            *(long *)(param_1 + 0x28) = lVar4;
          }
          return;
        }
      }
    }
  }
LAB_020bb2d0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


