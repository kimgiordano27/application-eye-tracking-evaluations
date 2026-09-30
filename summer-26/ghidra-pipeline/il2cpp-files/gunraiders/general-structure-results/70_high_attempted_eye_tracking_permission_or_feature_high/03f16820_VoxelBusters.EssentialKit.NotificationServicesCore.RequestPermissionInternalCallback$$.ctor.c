/*
FUNCTION_NAME: VoxelBusters.EssentialKit.NotificationServicesCore.RequestPermissionInternalCallback$$.ctor
ENTRY_POINT: 03f16820
PROGRAM: gunraiders-libil2cpp.so
SCORE: 77
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


/* WARNING: Removing unreachable block (ram,0x03f16a50) */
/* WARNING: Removing unreachable block (ram,0x03f16a08) */

void VoxelBusters_EssentialKit_NotificationServicesCore_RequestPermissionInternalCallback___ctor
               (undefined8 param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000038;
  
  if (param_2 == 1) {
    plVar1 = (long *)__cxa_begin_catch(param_1);
    lVar2 = *plVar1;
    __cxa_end_catch();
    if (in_stack_00000018._4_4_ != 0) {
      in_stack_00000038 = in_stack_00000008;
      VoxelBusters_EssentialKit_MediaServicesCore_Android_Converter__from(&stack0x00000038,0);
    }
    if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c01e80(lVar2);
    }
    lVar2 = 0;
  }
  else {
    if (in_stack_00000018._4_4_ != 0) {
      in_stack_00000038 = in_stack_00000008;
      VoxelBusters_EssentialKit_MediaServicesCore_Android_Converter__from(&stack0x00000038,0);
    }
    if (param_2 != 1) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonSerializationException_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_03e3c18c();
                    /* WARNING: Subroutine does not return */
      FUN_01cf64e4(param_1);
    }
    plVar1 = (long *)__cxa_begin_catch(param_1);
    lVar2 = *plVar1;
    __cxa_end_catch();
  }
  if (*(int *)(*(long *)Newtonsoft_Json_JsonSerializationException_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_03e3c18c();
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c01e80(lVar2);
  }
  return;
}


