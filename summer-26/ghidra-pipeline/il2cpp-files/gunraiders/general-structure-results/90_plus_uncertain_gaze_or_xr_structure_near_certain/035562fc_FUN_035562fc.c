/*
FUNCTION_NAME: FUN_035562fc
ENTRY_POINT: 035562fc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_7;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_gaze_retrieval_or_extraction
*/


uint FUN_035562fc(long *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 local_34 [4];
  
  if ((DAT_04537833 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_042303a0);
    FUN_01c5d288(Method_Oculus_Platform_Message<PurchaseList>_get_Data__);
    FUN_01c5d288(Method_Oculus_Platform_Message<RejoinDialogResult>__ctor__);
    FUN_01c5d288(Method_Oculus_Platform_Message<RejoinDialogResult>_get_Data__);
    FUN_01c5d288(PTR_DAT_042396a0);
    FUN_01c5d288(
                Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_get_originPanel__
                );
    FUN_01c5d288(Method_OVRPlugin_PinnedArray<Guid>__ctor__);
    DAT_04537833 = 1;
  }
  uVar3 = FUN_031532a8(param_2,0);
  if ((uVar3 & 1) == 0) {
    uVar3 = System_Dynamic_GetMemberBinder__get_ReturnType
                      (param_1,0xdb,(int)param_1[0x10],
                       *(undefined8 *)Method_OVRPlugin_PinnedArray<Guid>__ctor__);
    if ((uVar3 & 1) != 0) {
      lVar4 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_Oculus_Platform_Message<RejoinDialogResult>_get_Data__);
      FUN_0286d364(lVar4,*(undefined8 *)Method_Oculus_Platform_Message<RejoinDialogResult>__ctor__);
      puVar1 = Method_Oculus_Platform_Message<PurchaseList>_get_Data__;
      if (lVar4 == 0) {
LAB_035564d4:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      FUN_0286dcdc(lVar4,0xd1,param_2,
                   *(undefined8 *)Method_Oculus_Platform_Message<PurchaseList>_get_Data__);
      if (param_3 != 0) {
        FUN_0286dcdc(lVar4,0xd0,param_3,*(undefined8 *)puVar1);
      }
      if ((param_4 & 1) != 0) {
        local_34[0] = 2;
        uVar5 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042303a0,local_34);
        FUN_0286dcdc(lVar4,0xea,uVar5,*(undefined8 *)puVar1);
      }
      puVar1 = PTR_DAT_042396a0;
      plVar6 = (long *)param_1[2];
      if (*(int *)(*(long *)PTR_DAT_042396a0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      if (plVar6 == (long *)0x0) goto LAB_035564d4;
      uVar2 = (**(code **)(*plVar6 + 0x228))
                        (plVar6,0xdb,lVar4,**(undefined8 **)(*(long *)puVar1 + 0xb8),
                         *(undefined8 *)(*plVar6 + 0x230));
      goto LAB_035564bc;
    }
  }
  else {
    (**(code **)(*param_1 + 0x218))
              (param_1,1,
               *(undefined8 *)
                Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_get_originPanel__
               ,*(undefined8 *)(*param_1 + 0x220));
  }
  uVar2 = 0;
LAB_035564bc:
  return uVar2 & 1;
}


