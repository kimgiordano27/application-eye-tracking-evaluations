/*
FUNCTION_NAME: DG.Tweening.DOTween$$CompleteAndReturnKilledTot
ENTRY_POINT: 00f6a460
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void DG_Tweening_DOTween__CompleteAndReturnKilledTot(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar5;
  undefined8 *unaff_x23;
  undefined8 uVar6;
  undefined8 *unaff_x24;
  undefined8 uVar7;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(Method_System_Xml_Linq_XElement_AppendAttribute__);
  thunk_FUN_00d48444(Oculus_Platform_MessageWithUserAccountAgeCategory_TypeInfo);
  thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputActionMap_ReadFileJson_ToMaps__);
  thunk_FUN_00d48444(Method_System_Collections_Generic_Queue<string>_get_Count__);
  thunk_FUN_00d48444(StringLiteral_12735);
  thunk_FUN_00d48444(
                    UnityEngine_InputSystem_LowLevel_NativeInputRuntime_<>c__DisplayClass13_0_TypeInfo
                    );
  *(undefined1 *)(unaff_x26 + 0x7dc) = 1;
  uVar2 = FUN_01600424(*unaff_x24,*(undefined8 *)(unaff_x20 + 0x20),*unaff_x25,0);
  uVar5 = *unaff_x22;
  uVar3 = FUN_01600424(*unaff_x21,*(undefined8 *)(unaff_x20 + 0x20),*unaff_x23,0);
  puVar1 = Method_Obi_ObiNativeList<CollisionMaterial>_GetIntPtr__;
  lVar4 = *(long *)(unaff_x20 + 0x28);
  if (lVar4 != 0) {
    uVar6 = *(undefined8 *)
             UnityEngine_InputSystem_LowLevel_NativeInputRuntime_<>c__DisplayClass13_0_TypeInfo;
    if (0 < *(int *)(lVar4 + 0x10)) {
      uVar5 = FUN_015f5b28(uVar5,lVar4,0);
      uVar6 = FUN_015f5b28(uVar6,*(undefined8 *)puVar1,0);
    }
    if (unaff_x19 != 0) {
      uVar7 = *(undefined8 *)(unaff_x19 + 0x10);
      if (*(int *)(*(long *)Method_OVRPlugin_<>c_<_cctor>b__796_105__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar2 = FUN_02020524(uVar7,uVar2,uVar5,2,0);
      *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
      uVar2 = FUN_02020524(uVar2,uVar3,uVar6,2,0);
      *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


