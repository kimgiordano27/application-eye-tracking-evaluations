/*
FUNCTION_NAME: FUN_016e6be0
ENTRY_POINT: 016e6be0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_gaze_retrieval_or_extraction
*/


void FUN_016e6be0(long param_1,long param_2,long param_3,undefined1 *param_4)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  if ((DAT_03778857 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_2672);
    thunk_FUN_00d48444(Newtonsoft_Json_Linq_JToken_TypeInfo);
    thunk_FUN_00d48444(System_Xml_Schema_XmlSchemaWhiteSpace_TypeInfo);
    DAT_03778857 = 1;
  }
  puVar4 = System_Xml_Schema_XmlSchemaWhiteSpace_TypeInfo;
  if (param_1 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar7 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar9 = thunk_FUN_00d48444(System_Func<JsonProperty,_int>_TypeInfo);
    FUN_016ec5b8(uVar7,uVar9);
  }
  else {
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar7 = thunk_FUN_00d48444(
                                Method_System_Collections_Generic_List<VA_Wireframe_Pair>_get_Count__
                                );
      uVar7 = FUN_015e14fc(uVar7,param_1,0);
      thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
      uVar9 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar5 = thunk_FUN_00d48444(System_Func<JsonProperty,_int>_TypeInfo);
      FUN_016ec624(uVar9,uVar7,uVar5);
      uVar7 = thunk_FUN_00d48444(Method_OVRTaskBuilder<OVRPlugin_Result>_SetException__);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar9,uVar7);
    }
    if (*(int *)(*(long *)System_Xml_Schema_XmlSchemaWhiteSpace_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar3 = FUN_016efc5c(param_2);
    if ((uVar3 & 1) == 0) {
      if (*(int *)(*(long *)Newtonsoft_Json_Linq_JToken_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (param_2 % 600000000 == 0) {
        *param_4 = 0;
        if ((param_3 != 0) && (*(long *)(param_3 + 0x18) != 0)) {
          *param_4 = 1;
          puVar2 = StringLiteral_2672;
          uVar1 = *(uint *)(param_3 + 0x18);
          if (0 < (int)uVar1) {
            lVar10 = 0;
            lVar8 = 0;
            do {
              if (uVar1 <= (uint)lVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              lVar6 = *(long *)(param_3 + 0x20 + lVar10 * 8);
              if (lVar6 == 0) {
                thunk_FUN_00d48444(StringLiteral_10833);
                uVar7 = thunk_FUN_00d62348();
                FUN_00ac2be8();
                puVar4 = 
                Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<AlternatingRowBackground>_set_defaultValue__
                ;
LAB_016e6de0:
                uVar9 = thunk_FUN_00d48444(puVar4);
                FUN_017714d8(uVar7,uVar9,0);
                goto LAB_016e6df4;
              }
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar3 = FUN_016e9820(param_2,lVar6);
              if ((uVar3 & 1) == 0) {
                thunk_FUN_00d48444(StringLiteral_10833);
                uVar7 = thunk_FUN_00d62348();
                FUN_00ac2be8();
                puVar4 = PTR_DAT_033eea38;
                goto LAB_016e6de0;
              }
              if (lVar8 != 0) {
                uVar7 = *(undefined8 *)(lVar6 + 0x10);
                uVar9 = *(undefined8 *)(lVar8 + 0x18);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar3 = FUN_01751398(uVar7,uVar9,0);
                if ((uVar3 & 1) != 0) {
                  thunk_FUN_00d48444(StringLiteral_10833);
                  uVar7 = thunk_FUN_00d62348();
                  FUN_00ac2be8();
                  puVar4 = 
                  Method_UnityEngine_XR_ARFoundation_ARTrackable<XREnvironmentProbe,_AREnvironmentProbe>_get_trackableId__
                  ;
                  goto LAB_016e6de0;
                }
              }
              uVar1 = *(uint *)(param_3 + 0x18);
              lVar10 = lVar10 + 1;
              lVar8 = lVar6;
            } while ((int)lVar10 < (int)uVar1);
          }
        }
        return;
      }
      thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
      uVar7 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar9 = thunk_FUN_00d48444(PTR_DAT_033f0b90);
      uVar5 = thunk_FUN_00d48444(StringLiteral_11904);
      FUN_016ec624(uVar7,uVar9,uVar5);
    }
    else {
      thunk_FUN_00d48444(StringLiteral_8570);
      uVar7 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar9 = thunk_FUN_00d48444(StringLiteral_11904);
      uVar5 = thunk_FUN_00d48444(StringLiteral_4711);
      FUN_016efd4c(uVar7,uVar9,uVar5);
    }
  }
LAB_016e6df4:
  uVar9 = thunk_FUN_00d48444(Method_OVRTaskBuilder<OVRPlugin_Result>_SetException__);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar7,uVar9);
}


