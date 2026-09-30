/*
FUNCTION_NAME: OVRPlugin.OVRP_1_55_0$$ovrp_PollEvent
ENTRY_POINT: 051e94e0
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_55_0__ovrp_PollEvent(long *param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar7;
  uint unaff_w23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 unaff_x27;
  int unaff_w28;
  undefined8 *unaff_x29;
  undefined8 uVar8;
  undefined8 in_stack_00000040;
  long *in_stack_00000048;
  
  do {
    if (*unaff_x20 != *param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018(unaff_x20);
    }
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w23) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    uVar5 = 0;
    uVar4 = 0;
    uVar8 = 0;
    while( true ) {
      while( true ) {
        lVar6 = unaff_x19 + (long)(int)unaff_w23 * (long)unaff_w28;
        *(undefined8 *)(lVar6 + 0x20) = unaff_x27;
        *(undefined4 *)(lVar6 + 0x28) = uVar5;
        *(undefined4 *)(lVar6 + 0x2c) = 0;
        *(long **)(lVar6 + 0x30) = unaff_x20;
        *(undefined4 *)(lVar6 + 0x38) = uVar4;
        *(undefined4 *)(lVar6 + 0x3c) = 0;
        *(undefined8 *)(lVar6 + 0x40) = uVar8;
        unaff_w23 = unaff_w23 + 1;
        uVar1 = FUN_048a9bcc(&stack0x00000030,*unaff_x24);
        unaff_x20 = in_stack_00000048;
        unaff_x27 = in_stack_00000040;
        if ((uVar1 & 1) == 0) {
          FUN_048a9ce0(&stack0x00000030,*(undefined8 *)PTR_DAT_06602af0);
          return;
        }
        if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        uVar8 = AkMusicSyncCallbackInfo__get_segmentInfo_iRemainingLookAheadTime
                          (in_stack_00000048,0);
        uVar7 = *unaff_x25;
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar7 = FUN_04f3fb68(uVar7,0);
        uVar1 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(uVar8,uVar7,0);
        if ((uVar1 & 1) == 0) break;
        if (*(long *)(*unaff_x20 + 0x40) != *(long *)(*(long *)PTR_DAT_065c8a08 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce8018(unaff_x20);
        }
        puVar2 = (undefined4 *)thunk_FUN_02cea9e8(unaff_x20);
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w23) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        uVar4 = *puVar2;
        unaff_x20 = (long *)0x0;
        uVar8 = 0;
        uVar5 = 1;
      }
      uVar8 = AkMusicSyncCallbackInfo__get_segmentInfo_iRemainingLookAheadTime(unaff_x20,0);
      uVar7 = *unaff_x29;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar7 = FUN_04f3fb68(uVar7,0);
      uVar1 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(uVar8,uVar7,0);
      param_1 = (long *)PTR_DAT_065c8688;
      if ((uVar1 & 1) != 0) break;
      uVar8 = AkMusicSyncCallbackInfo__get_segmentInfo_iRemainingLookAheadTime(unaff_x20,0);
      uVar7 = *(undefined8 *)PTR_DAT_065dd008;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar7 = FUN_04f3fb68(uVar7,0);
      uVar1 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(uVar8,uVar7,0);
      if ((uVar1 & 1) == 0) {
        thunk_FUN_02c7737c(PTR_DAT_065c8580);
        uVar8 = thunk_FUN_02cea894();
        uVar7 = thunk_FUN_02c7737c(PTR_DAT_066094f0);
        FUN_04f68668(uVar8,uVar7,0);
        uVar7 = thunk_FUN_02c7737c(PTR_DAT_066094f8);
                    /* WARNING: Subroutine does not return */
        FUN_02ce7b54(uVar8,uVar7);
      }
      if (*(long *)(*unaff_x20 + 0x40) != *(long *)(*(long *)PTR_DAT_065ca3e0 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(unaff_x20);
      }
      puVar3 = (undefined8 *)thunk_FUN_02cea9e8(unaff_x20);
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w23) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      uVar8 = *puVar3;
      unaff_x20 = (long *)0x0;
      uVar4 = 0;
      uVar5 = 2;
    }
  } while( true );
}


