/*
FUNCTION_NAME: RopeSweepCut$$LateUpdate
ENTRY_POINT: 00e61fb4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void RopeSweepCut__LateUpdate(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x22;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  
  puVar1 = PTR_DAT_033f60a0;
  puVar6 = *(undefined8 **)(unaff_x22 + 0x1c0);
  uVar3 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                    (param_1,0);
  fVar8 = 1.0;
  fVar7 = fVar8;
  if (*(char *)(unaff_x19 + 0x70) != '\0') {
    fVar7 = -1.0;
  }
  uVar3 = FUN_010759a8(0,-(*(float *)(unaff_x19 + 0x68) * fVar7),0,*(undefined4 *)(unaff_x19 + 100),
                       uVar3,0,0);
  uVar3 = FUN_0114db20(uVar3,6,*puVar6);
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar2 = Method_System_Guid_StringToInt__;
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (lVar4 != 0) {
    UnityEngine_Rendering_ListPool_<>c<__Il2CppFullySharedGenericType>___ctor();
    FUN_0114d2b8(uVar3,lVar4,*(undefined8 *)puVar2);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x80);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar5 = FUN_0268b5e4(uVar3,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_00e62150;
      uVar3 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (*(long *)(unaff_x19 + 0x80),0);
      if (*(char *)(unaff_x19 + 0x70) != '\0') {
        fVar8 = -1.0;
      }
      uVar3 = FUN_010759a8(0,*(float *)(unaff_x19 + 0x68) * fVar8,0,*(undefined4 *)(unaff_x19 + 100)
                           ,uVar3,0,0);
      FUN_0114db20(uVar3,6,*puVar6);
    }
    *(undefined1 *)(unaff_x19 + 0x21) = 1;
    lVar4 = FUN_00ed56f0(0);
    if (lVar4 != 0) {
      lVar4 = *(long *)(lVar4 + 0x40);
      uVar3 = FUN_015f5b28(*(undefined8 *)(unaff_x19 + 0x18),
                           *(undefined8 *)OVRPlugin_OVRP_1_104_0_TypeInfo,0);
      if (lVar4 != 0) {
        FUN_00fdb3d8(lVar4,uVar3,0);
        lVar4 = FUN_00ed56f0(0);
        if (lVar4 != 0) {
          lVar4 = *(long *)(lVar4 + 0x40);
          uVar3 = FUN_015f5b28(*(undefined8 *)(unaff_x19 + 0x18),
                               *(undefined8 *)
                                Method_System_ByReference<__Il2CppFullySharedGenericType>_get_Value__
                               ,0);
          if (lVar4 != 0) {
            FUN_00fcbec8(lVar4,uVar3,0);
            return;
          }
        }
      }
    }
  }
LAB_00e62150:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


