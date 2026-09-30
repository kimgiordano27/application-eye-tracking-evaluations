/*
FUNCTION_NAME: FUN_025013f8
ENTRY_POINT: 025013f8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_025013f8(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_037828c4 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_5581);
    thunk_FUN_00d48444(
                      Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>__ctor__
                      );
    thunk_FUN_00d48444(PTR_DAT_033eb838);
    thunk_FUN_00d48444(
                      System_Collections_Generic_IEnumerator<ValueTuple<HandFinger,_IReadOnlyList<ShapeRecognizer_FingerFeatureConfig>>>_TypeInfo
                      );
    thunk_FUN_00d48444(OVRMeshRenderer_TypeInfo);
    thunk_FUN_00d48444(Method_Autohand_HandProjector_OnGrab__);
    thunk_FUN_00d48444(Method_System_Xml_Schema_XdrBuilder_ProcessAttribute__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<ValueTuple<MRUKAnchor,_MRUKAnchor>>_get_Item__
                      );
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_9DA6B2C4638D1DC7611B7F458BBFE7FD49FE1B36B67239B00B8A051F4E49558F
                      );
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<AndroidRelativeHumidity>__
                      );
    DAT_037828c4 = 1;
  }
  uStack_68 = 0;
  local_60 = 0;
  local_70 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                Field_<PrivateImplementationDetails>_9DA6B2C4638D1DC7611B7F458BBFE7FD49FE1B36B67239B00B8A051F4E49558F
                              );
    if (lVar9 != 0) {
      FUN_01320e50(lVar9,*(undefined8 *)Method_System_Xml_Schema_XdrBuilder_ProcessAttribute__);
      *(long *)(param_1 + 0x38) = lVar9;
      return;
    }
  }
  else {
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x18);
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                Field_<PrivateImplementationDetails>_9DA6B2C4638D1DC7611B7F458BBFE7FD49FE1B36B67239B00B8A051F4E49558F
                              );
    puVar5 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    if (lVar9 != 0) {
      FUN_01320ebc(lVar9,uVar1,*(undefined8 *)Method_Autohand_HandProjector_OnGrab__);
      *(long *)(param_1 + 0x38) = lVar9;
      uVar12 = *(undefined8 *)(param_1 + 0x58);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      puVar4 = 
      System_Collections_Generic_IEnumerator<ValueTuple<HandFinger,_IReadOnlyList<ShapeRecognizer_FingerFeatureConfig>>>_TypeInfo
      ;
      uVar10 = FUN_02681b9c(uVar12,0,0);
      if ((uVar10 & 1) != 0) {
        if (*(long *)(param_1 + 0x38) == 0) goto LAB_02501674;
        FUN_00cb95fc(*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),*(undefined8 *)puVar4
                    );
      }
      puVar8 = StringLiteral_5581;
      puVar7 = Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<AndroidRelativeHumidity>__;
      puVar6 = Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>__ctor__;
      puVar3 = PTR_DAT_033eb838;
      if (*(long *)(param_1 + 0x20) != 0) {
        FUN_01323390(*(long *)(param_1 + 0x20),&local_88,*(undefined8 *)OVRMeshRenderer_TypeInfo);
        uStack_68 = uStack_80;
        local_70 = local_88;
        local_60 = local_78;
        do {
          uVar10 = FUN_012b894c(&local_70,*(undefined8 *)puVar6);
          if ((uVar10 & 1) == 0) {
            FUN_012b8948(&local_70,*(undefined8 *)puVar8);
            return;
          }
          plVar11 = (long *)FUN_00cb97ec(&local_70,*(undefined8 *)puVar3);
          if (plVar11 == (long *)0x0) {
LAB_025015c8:
            plVar11 = (long *)0x0;
          }
          else {
            bVar2 = *(byte *)(*(long *)puVar7 + 300);
            if (*(byte *)(*plVar11 + 300) < bVar2) goto LAB_025015c8;
            if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar7) {
              plVar11 = (long *)0x0;
            }
          }
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar10 = FUN_02681b9c(plVar11,0,0);
          if ((uVar10 & 1) != 0) {
            if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_00cb95fc(*(long *)(param_1 + 0x38),plVar11,*(undefined8 *)puVar4);
          }
        } while( true );
      }
    }
  }
LAB_02501674:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


