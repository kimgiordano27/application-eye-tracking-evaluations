/*
FUNCTION_NAME: FUN_05837850
ENTRY_POINT: 05837850
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_05837850(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar3 = Oculus_Avatar2_OvrAvatarEyeTrackingBehaviorOvrPlugin_TypeInfo;
  puVar2 = PTR_DAT_06a10570;
  puVar1 = PTR_DAT_06a0f8a8;
  if ((DAT_06dc0779 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0f8a8);
    FUN_02d965b8(PTR_DAT_06a0f8c0);
    FUN_02d965b8(PTR_DAT_06a10570);
    FUN_02d965b8(OVRHumanBodyBonesMappingsInterface_TypeInfo);
    FUN_02d965b8(Oculus_Avatar2_OvrAvatarEyeTrackingBehaviorOvrPlugin_TypeInfo);
    FUN_02d965b8(System_Runtime_Serialization_ObjectHolderList_TypeInfo);
    FUN_02d965b8(OVROverlay_TypeInfo);
    FUN_02d965b8(UnityEngine_ObjectGUIState_TypeInfo);
    DAT_06dc0779 = 1;
  }
  FUN_0588c430(param_1,*(undefined8 *)puVar3,0);
  FUN_0588c430(param_2,*(undefined8 *)puVar2,0);
  uVar7 = *(undefined8 *)puVar1;
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar7 = FUN_054f73b4(uVar7,0);
  if (param_1 != (long *)0x0) {
    uVar4 = (**(code **)(*param_1 + 0x318))(param_1,uVar7,*(undefined8 *)(*param_1 + 800));
    puVar2 = OVRHumanBodyBonesMappingsInterface_TypeInfo;
    puVar1 = PTR_DAT_06a0f8c0;
    if ((uVar4 & 1) == 0) {
      uVar7 = FUN_05838210();
      uVar6 = thunk_FUN_02dfd288(Oculus_Platform_PlatformInitializeResult_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar7,uVar6);
    }
    uVar7 = FUN_05838294(param_1);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)puVar1);
    }
    lVar5 = FUN_05891648(uVar7,0);
    FUN_05890e58(uVar7,0x32,5,lVar5,0);
    FUN_0583845c(param_3,*(undefined8 *)puVar2,0xffffffff);
    puVar1 = OVROverlay_TypeInfo;
    if (lVar5 != 0) {
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
        FUN_05890f04(uVar7,0x32,param_3,*(undefined8 *)(lVar5 + 0x28),*(undefined8 *)puVar3,
                     *(undefined8 *)puVar2,0xffffffff,0);
        FUN_0583845c(param_4,*(undefined8 *)puVar1,0xffffffff);
        puVar2 = UnityEngine_ObjectGUIState_TypeInfo;
        if (2 < *(uint *)(lVar5 + 0x18)) {
          FUN_05890f04(uVar7,0x32,param_4,*(undefined8 *)(lVar5 + 0x30),*(undefined8 *)puVar3,
                       *(undefined8 *)puVar1,0xffffffff,0);
          FUN_0583845c(param_5,*(undefined8 *)puVar2,0xffffffff);
          puVar1 = System_Runtime_Serialization_ObjectHolderList_TypeInfo;
          if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) != 0) {
            FUN_05890f04(uVar7,0x32,param_5,*(undefined8 *)(lVar5 + 0x38),*(undefined8 *)puVar3,
                         *(undefined8 *)puVar2,0xffffffff,0);
            FUN_0583845c(param_6,*(undefined8 *)puVar1,0xffffffff);
            if (4 < *(uint *)(lVar5 + 0x18)) {
              FUN_05890f04(uVar7,0x32,param_6,*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)puVar3,
                           *(undefined8 *)puVar1,0xffffffff,0);
              uVar7 = FUN_058922dc(uVar7,0);
              FUN_05836884(uVar7,param_1,param_2,param_3,param_4,param_5,param_6);
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


