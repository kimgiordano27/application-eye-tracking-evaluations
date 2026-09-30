/*
FUNCTION_NAME: FUN_061edbe8
ENTRY_POINT: 061edbe8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


undefined8 FUN_061edbe8(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((DAT_076dde73 & 1) == 0) {
    thunk_FUN_032e1da0(System_Runtime_CompilerServices_StrongBox<int>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072794f8);
    thunk_FUN_032e1da0(Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>_TypeInfo);
    thunk_FUN_032e1da0(
                      UnityEngine_XR_ARFoundation_SubsystemLifecycleManager<XROcclusionSubsystem,_XROcclusionSubsystemDescriptor,_XROcclusionSubsystem_Provider>_TypeInfo
                      );
    thunk_FUN_032e1da0(PTR_DAT_07289f00);
    thunk_FUN_032e1da0(PTR_DAT_07283318);
    thunk_FUN_032e1da0(
                      UnityEngine_XR_ARFoundation_SubsystemLifecycleManager<XRSessionSubsystem,_XRSessionSubsystemDescriptor,_XRSessionSubsystem_Provider>_TypeInfo
                      );
    thunk_FUN_032e1da0(PTR_DAT_07294990);
    DAT_076dde73 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) goto LAB_061edea8;
  if (*(int *)(lVar6 + 0x1c) == 0x2a) {
    uVar4 = **(undefined8 **)(*(long *)PTR_DAT_072794f8 + 0xb8);
    FUN_061ee4b4(lVar6);
    uVar5 = uVar4;
  }
  else {
    if (*(int *)(lVar6 + 0x1c) != 0x6e) {
      FUN_02d9d3f0(lVar6);
      uVar4 = *(undefined8 *)(lVar6 + 0x10);
      uVar5 = thunk_FUN_032e1da0(System_Runtime_CompilerServices_StrongBox<object>_TypeInfo);
      uVar5 = FUN_0624d5f4(uVar5,uVar4,0);
      uVar4 = thunk_FUN_032e1da0(System_Threading_Tasks_TaskCompletionSource<int>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar5,uVar4);
    }
    if (*(char *)(lVar6 + 0x48) != '\0') {
      if (*(int *)(*(long *)
                    Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar2 = FUN_061ed24c(lVar6);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(param_1 + 0x10) != 0) {
          uVar4 = **(undefined8 **)(*(long *)PTR_DAT_072794f8 + 0xb8);
          uVar2 = thunk_FUN_057aa644(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28),
                                     *(undefined8 *)
                                      UnityEngine_XR_ARFoundation_SubsystemLifecycleManager<XROcclusionSubsystem,_XROcclusionSubsystemDescriptor,_XROcclusionSubsystem_Provider>_TypeInfo
                                     ,0);
          if ((uVar2 & 1) == 0) {
            if (*(long *)(param_1 + 0x10) == 0) goto LAB_061edea8;
            uVar2 = thunk_FUN_057aa644(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28),
                                       *(undefined8 *)PTR_DAT_07289f00,0);
            if ((uVar2 & 1) == 0) {
              if (*(long *)(param_1 + 0x10) == 0) goto LAB_061edea8;
              uVar2 = thunk_FUN_057aa644(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28),
                                         *(undefined8 *)PTR_DAT_07283318,0);
              if ((uVar2 & 1) == 0) {
                if (*(long *)(param_1 + 0x10) == 0) goto LAB_061edea8;
                uVar1 = thunk_FUN_057aa644(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28),
                                           *(undefined8 *)
                                            UnityEngine_XR_ARFoundation_SubsystemLifecycleManager<XRSessionSubsystem,_XRSessionSubsystemDescriptor,_XRSessionSubsystem_Provider>_TypeInfo
                                           ,0);
                param_4 = 7;
                if ((uVar1 & 1) == 0) {
                  param_4 = 0;
                }
              }
              else {
                uVar1 = 0;
                param_4 = 9;
              }
            }
            else {
              uVar1 = 0;
              param_4 = 4;
            }
          }
          else {
            uVar1 = 0;
            param_4 = 8;
          }
          if (*(long *)(param_1 + 0x10) != 0) {
            FUN_061ee4b4();
            FUN_061ed934(param_1,0x28);
            uVar5 = uVar4;
            if ((uVar1 & 1) != 0) {
              if (*(long *)(param_1 + 0x10) == 0) goto LAB_061edea8;
              if (*(int *)(*(long *)(param_1 + 0x10) + 0x1c) != 0x29) {
                FUN_061edeec(param_1,0x73);
                if (*(long *)(param_1 + 0x10) == 0) goto LAB_061edea8;
                uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x38);
                FUN_061ee4b4();
              }
            }
            FUN_061ed934(param_1,0x29);
            goto LAB_061ede64;
          }
        }
LAB_061edea8:
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar6 = *(long *)(param_1 + 0x10);
      if (lVar6 == 0) goto LAB_061edea8;
    }
    uVar5 = *(undefined8 *)(lVar6 + 0x28);
    uVar4 = *(undefined8 *)(lVar6 + 0x30);
    FUN_061ee4b4(lVar6);
    uVar2 = thunk_FUN_057aa644(uVar5,*(undefined8 *)PTR_DAT_07294990,0);
    if ((uVar2 & 1) != 0) {
      uVar5 = **(undefined8 **)(*(long *)PTR_DAT_072794f8 + 0xb8);
    }
  }
LAB_061ede64:
  uVar3 = thunk_FUN_032a56a0(*(undefined8 *)System_Runtime_CompilerServices_StrongBox<int>_TypeInfo)
  ;
  FUN_061ebe90(uVar3,param_3,param_2,uVar4,uVar5,param_4);
  return uVar3;
}


