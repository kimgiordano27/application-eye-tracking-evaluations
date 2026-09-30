/*
FUNCTION_NAME: FUN_00f6a3fc
ENTRY_POINT: 00f6a3fc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_00f6a3fc(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar5 = StringLiteral_12735;
  puVar4 = Method_UnityEngine_InputSystem_InputActionMap_ReadFileJson_ToMaps__;
  puVar3 = Method_System_Xml_Linq_XElement_AppendAttribute__;
  puVar2 = Method_System_Collections_Generic_Queue<string>_get_Count__;
  puVar1 = Oculus_Platform_MessageWithUserAccountAgeCategory_TypeInfo;
  if ((DAT_037757dc & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<CollisionMaterial>_GetIntPtr__);
    thunk_FUN_00d48444(Method_System_Xml_Linq_XElement_AppendAttribute__);
    thunk_FUN_00d48444(Oculus_Platform_MessageWithUserAccountAgeCategory_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputActionMap_ReadFileJson_ToMaps__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Queue<string>_get_Count__);
    thunk_FUN_00d48444(StringLiteral_12735);
    thunk_FUN_00d48444(
                      UnityEngine_InputSystem_LowLevel_NativeInputRuntime_<>c__DisplayClass13_0_TypeInfo
                      );
    DAT_037757dc = 1;
  }
  uVar6 = FUN_01600424(*(undefined8 *)puVar5,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)puVar2,0
                      );
  uVar9 = *(undefined8 *)puVar3;
  uVar7 = FUN_01600424(*(undefined8 *)puVar4,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)puVar1,0
                      );
  puVar1 = Method_Obi_ObiNativeList<CollisionMaterial>_GetIntPtr__;
  lVar8 = *(long *)(param_1 + 0x28);
  if (lVar8 != 0) {
    uVar10 = *(undefined8 *)
              UnityEngine_InputSystem_LowLevel_NativeInputRuntime_<>c__DisplayClass13_0_TypeInfo;
    if (0 < *(int *)(lVar8 + 0x10)) {
      uVar9 = FUN_015f5b28(uVar9,lVar8,0);
      uVar10 = FUN_015f5b28(uVar10,*(undefined8 *)puVar1,0);
    }
    if (param_2 != 0) {
      uVar11 = *(undefined8 *)(param_2 + 0x10);
      if (*(int *)(*(long *)Method_OVRPlugin_<>c_<_cctor>b__796_105__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar6 = FUN_02020524(uVar11,uVar6,uVar9,2,0);
      *(undefined8 *)(param_2 + 0x10) = uVar6;
      uVar6 = FUN_02020524(uVar6,uVar7,uVar10,2,0);
      *(undefined8 *)(param_2 + 0x10) = uVar6;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


