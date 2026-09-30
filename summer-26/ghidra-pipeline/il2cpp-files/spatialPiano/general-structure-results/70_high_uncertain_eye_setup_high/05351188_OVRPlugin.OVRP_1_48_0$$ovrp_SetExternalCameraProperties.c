/*
FUNCTION_NAME: OVRPlugin.OVRP_1_48_0$$ovrp_SetExternalCameraProperties
ENTRY_POINT: 05351188
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_48_0__ovrp_SetExternalCameraProperties(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x19;
  uint uVar11;
  long unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong in_stack_00000040;
  undefined8 in_stack_00000048;
  
  FUN_02f08768(*(undefined8 *)(param_1 + 0xce0));
  FUN_02f08768(UnityEngine_TextCore_Text_FontStyles_TypeInfo);
  FUN_02f08768(UnityEngine_UI_FontUpdateTracker_TypeInfo);
  FUN_02f08768(UnityEngine_InputSystem_Utilities_ForDeviceEventObservable_TypeInfo);
  *(undefined1 *)(unaff_x19 + 0x573) = 1;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  if ((unaff_x20 != 0) && (iVar5 = FUN_049bff3c(), iVar5 != 0)) {
    uVar6 = FUN_049bff3c();
    lVar7 = FUN_02f0880c(*(undefined8 *)
                          UnityEngine_InputSystem_Utilities_ForDeviceEventObservable_TypeInfo,uVar6)
    ;
    FUN_049c0630(&stack0x00000030);
    puVar3 = UnityEngine_TextCore_Text_FontFeatureTable_TypeInfo;
    puVar2 = UnityEngine_TextCore_LowLevel_FontEngine_TypeInfo;
    uVar1 = DAT_011b1100;
    uVar11 = 0;
    in_stack_00000020 = 0;
    in_stack_00000028 = &stack0x00000030;
    while( true ) {
      uVar8 = FUN_04c00b04(&stack0x00000030,*(undefined8 *)puVar2);
      uVar4 = in_stack_00000040;
      if ((uVar8 & 1) == 0) {
        FUN_04c00c14(&stack0x00000030,*(undefined8 *)UnityEngine_UIElements_FontDefinition_TypeInfo)
        ;
        return lVar7;
      }
      in_stack_00000008 = *(undefined8 *)puVar3;
      in_stack_00000010 = 0xffffffffffffffff;
      in_stack_00000018 = (undefined4)in_stack_00000040;
      uVar9 = FUN_0510aa48(&stack0x00000008,0);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar10 = lVar7 + (long)(int)uVar11 * 0x28;
      uVar11 = uVar11 + 1;
      *(undefined8 *)(lVar10 + 0x20) = uVar9;
      *(undefined8 *)(lVar10 + 0x28) = uVar1;
      *(undefined8 *)(lVar10 + 0x30) = 0;
      *(uint *)(lVar10 + 0x38) = (uint)((uVar4 & 0xff00000000) != 0);
      *(undefined4 *)(lVar10 + 0x3c) = 0;
      *(undefined8 *)(lVar10 + 0x40) = 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  return 0;
}


