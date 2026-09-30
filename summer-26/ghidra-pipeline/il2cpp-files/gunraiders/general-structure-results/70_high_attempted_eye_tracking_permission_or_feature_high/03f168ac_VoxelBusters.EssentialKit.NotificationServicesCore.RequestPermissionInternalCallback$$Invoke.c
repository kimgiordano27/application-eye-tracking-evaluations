/*
FUNCTION_NAME: VoxelBusters.EssentialKit.NotificationServicesCore.RequestPermissionInternalCallback$$Invoke
ENTRY_POINT: 03f168ac
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x03f166c0) */
/* WARNING: Removing unreachable block (ram,0x03f16a50) */
/* WARNING: Removing unreachable block (ram,0x03f169f0) */
/* WARNING: Removing unreachable block (ram,0x03f16a08) */
/* WARNING: Removing unreachable block (ram,0x03f167ac) */
/* WARNING: Removing unreachable block (ram,0x03f168f4) */

void VoxelBusters_EssentialKit_NotificationServicesCore_RequestPermissionInternalCallback__Invoke
               (undefined8 param_1,int param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *unaff_x27;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  int iStack0000000000000018;
  int iStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  
  if (param_2 == 1) {
    plVar2 = (long *)__cxa_begin_catch(param_1);
    lVar3 = *plVar2;
    __cxa_end_catch();
    FUN_029fd610(&stack0x00000060,*(undefined8 *)StringLiteral_12005);
    if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c01e80(lVar3);
    }
    FUN_02d50a3c(&stack0x00000020);
    in_stack_00000048 = in_stack_00000028;
    in_stack_00000040 = in_stack_00000020;
    in_stack_00000050 = in_stack_00000030;
    while (uVar1 = FUN_029fd614(&stack0x00000040,*unaff_x27), (uVar1 & 1) != 0) {
      if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      FUN_03f16d88();
    }
    lVar3 = 0;
    FUN_029fd610(&stack0x00000040,*(undefined8 *)StringLiteral_12005);
LAB_03f166e4:
    if (iStack0000000000000018 != 0) {
      in_stack_00000038 = in_stack_00000010;
      VoxelBusters_EssentialKit_MediaServicesCore_Android_Converter__from(&stack0x00000038,0);
    }
    lVar4 = 0;
    if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c01e80(lVar3);
    }
  }
  else {
    FUN_029fd610(&stack0x00000060,*(undefined8 *)StringLiteral_12005);
    if (param_2 == 1) {
      plVar2 = (long *)__cxa_begin_catch(param_1);
      lVar3 = *plVar2;
      __cxa_end_catch();
      goto LAB_03f166e4;
    }
    if (iStack0000000000000018 != 0) {
      in_stack_00000038 = in_stack_00000010;
      VoxelBusters_EssentialKit_MediaServicesCore_Android_Converter__from(&stack0x00000038,0);
    }
    if (param_2 != 1) {
      if (iStack000000000000001c != 0) {
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
      plVar2 = (long *)__cxa_begin_catch(param_1);
      lVar3 = *plVar2;
      __cxa_end_catch();
      goto LAB_03f16728;
    }
    plVar2 = (long *)__cxa_begin_catch(param_1);
    lVar4 = *plVar2;
    __cxa_end_catch();
  }
  if (iStack000000000000001c != 0) {
    in_stack_00000038 = in_stack_00000008;
    VoxelBusters_EssentialKit_MediaServicesCore_Android_Converter__from(&stack0x00000038,0);
  }
  if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c01e80(lVar4);
  }
  lVar3 = 0;
LAB_03f16728:
  if (*(int *)(*(long *)Newtonsoft_Json_JsonSerializationException_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_03e3c18c();
  if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c01e80(lVar3);
  }
  return;
}


