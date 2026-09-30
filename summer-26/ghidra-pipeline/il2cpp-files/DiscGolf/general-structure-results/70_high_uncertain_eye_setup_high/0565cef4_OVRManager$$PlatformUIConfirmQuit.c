/*
FUNCTION_NAME: OVRManager$$PlatformUIConfirmQuit
ENTRY_POINT: 0565cef4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__PlatformUIConfirmQuit(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long in_x9;
  int *in_x10;
  undefined4 uVar6;
  long in_stack_00000028;
  
  do {
    if ((bool)in_ZR) {
      puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_0565cf20:
      uVar6 = (*(code *)*puVar3)();
      lVar4 = FUN_050e3a74();
      puVar2 = System_Collections_Generic_List<List<IDeserializable>>_TypeInfo;
      puVar1 = System_Collections_Generic_List<List<IDeserializable>>_TypeInfo;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_049bc914(&stack0x00000018,lVar4,
                   *(undefined8 *)System_Collections_Generic_List<List<IDeserializable>>_TypeInfo);
      while( true ) {
        uVar5 = FUN_05219f18(&stack0x00000018,*(undefined8 *)puVar2);
        if ((uVar5 & 1) == 0) {
          FUN_05219f14(&stack0x00000018,*(undefined8 *)puVar1);
          return;
        }
        if (in_stack_00000028 == 0) break;
        FUN_0565cc58(uVar6);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_02dd004c();
      goto LAB_0565cf20;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  } while( true );
}


