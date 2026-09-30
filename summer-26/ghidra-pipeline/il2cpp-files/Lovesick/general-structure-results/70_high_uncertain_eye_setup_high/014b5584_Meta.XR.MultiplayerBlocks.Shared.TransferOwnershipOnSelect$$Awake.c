/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.TransferOwnershipOnSelect$$Awake
ENTRY_POINT: 014b5584
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_TransferOwnershipOnSelect__Awake(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long unaff_x19;
  undefined8 uVar7;
  undefined8 in_stack_00000008;
  
  puVar1 = Method_System_Enum_EnumResult_SetFailure__;
  if ((param_1 == 0) || (unaff_x19 == 0)) goto LAB_014b57f4;
  FUN_013df3d0();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  FUN_026bdcf4(param_1,0);
  FUN_010c2c5c();
  *(undefined8 *)(unaff_x19 + 0x68) = in_stack_00000008;
  FUN_010c2c5c();
  *(undefined8 *)(unaff_x19 + 0x58) = in_stack_00000008;
  if ((*(long *)(unaff_x19 + 0x70) == 0) && (lVar3 = FUN_014b4bb0(), lVar3 != 0)) {
    lVar3 = FUN_014b4bb0();
    if (lVar3 == 0) goto LAB_014b57f4;
    lVar4 = *(long *)puVar1;
    uVar7 = *(undefined8 *)(lVar3 + 0x40);
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar4);
    }
    uVar6 = FUN_0268b5e4(uVar7,0);
    if ((uVar6 & 1) != 0) {
      lVar3 = FUN_014b4bb0();
      if (lVar3 == 0) goto LAB_014b57f4;
      FUN_014a9dfc();
    }
  }
  lVar3 = FUN_014b4bb0();
  if (lVar3 != 0) {
    lVar3 = FUN_014b4bb0();
    puVar2 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
    if (lVar3 == 0) goto LAB_014b57f4;
    uVar7 = *(undefined8 *)(lVar3 + 0x68);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    if (lVar4 == 0) goto LAB_014b57f4;
    FUN_016f27fc();
    plVar5 = (long *)FUN_017b76bc(uVar7,lVar4,0);
    if (plVar5 == (long *)0x0) {
      *(undefined8 *)(lVar3 + 0x68) = 0;
    }
    else {
      lVar4 = *(long *)puVar2;
      if (*plVar5 != lVar4) {
LAB_014b5698:
                    /* WARNING: Subroutine does not return */
        FUN_00da544c();
      }
      *(long **)(lVar3 + 0x68) = plVar5;
      if (*plVar5 != lVar4) goto LAB_014b5698;
    }
  }
  FUN_014b57f8();
  FUN_014b4a48();
  uVar7 = *(undefined8 *)(unaff_x19 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar6 = FUN_02681b9c(uVar7,0,0);
  if ((uVar6 & 1) != 0) {
    lVar4 = *(long *)(unaff_x19 + 0x28);
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f7118);
    if ((lVar3 != 0) &&
       (FUN_014c8ec0(),
       puVar1 = Method_Meta_XR_MRUtilityKit_SceneDecorator_SceneDecorator_<Start>b__13_0__,
       lVar4 != 0)) {
      FUN_014ca914(lVar4,lVar3,0);
      lVar4 = *(long *)(unaff_x19 + 0x28);
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if ((lVar3 != 0) && (FUN_011c181c(), lVar4 != 0)) {
        FUN_014caa4c(lVar4,lVar3,0);
        goto LAB_014b57c8;
      }
    }
LAB_014b57f4:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
LAB_014b57c8:
  uVar7 = FUN_010c3320();
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar7;
  return;
}


