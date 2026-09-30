/*
FUNCTION_NAME: OVRPlugin.OVRP_1_54_0$$.cctor
ENTRY_POINT: 051e93e0
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


void OVRPlugin_OVRP_1_54_0___cctor(undefined8 param_1,undefined8 param_2,undefined1 param_3 [16])

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  long unaff_x19;
  long *plVar9;
  undefined8 uVar10;
  uint unaff_w23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  int unaff_w28;
  undefined8 *unaff_x29;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000040;
  long *plStack0000000000000048;
  undefined8 uStack0000000000000050;
  
  plStack0000000000000048 = param_3._8_8_;
  uStack0000000000000040 = param_3._0_8_;
  uStack0000000000000030 = param_2;
  uStack0000000000000050 = param_1;
  do {
    uVar1 = FUN_048a9bcc(&stack0x00000030,*unaff_x24);
    plVar9 = plStack0000000000000048;
    uVar5 = uStack0000000000000040;
    if ((uVar1 & 1) == 0) {
      FUN_048a9ce0(&stack0x00000030,*(undefined8 *)PTR_DAT_06602af0);
      return;
    }
    if (plStack0000000000000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar2 = AkMusicSyncCallbackInfo__get_segmentInfo_iRemainingLookAheadTime
                      (plStack0000000000000048,0);
    uVar10 = *unaff_x25;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar10 = FUN_04f3fb68(uVar10,0);
    uVar1 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(uVar2,uVar10,0);
    if ((uVar1 & 1) == 0) {
      uVar2 = AkMusicSyncCallbackInfo__get_segmentInfo_iRemainingLookAheadTime(plVar9,0);
      uVar10 = *unaff_x29;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar10 = FUN_04f3fb68(uVar10,0);
      uVar1 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(uVar2,uVar10,0);
      if ((uVar1 & 1) == 0) {
        uVar2 = AkMusicSyncCallbackInfo__get_segmentInfo_iRemainingLookAheadTime(plVar9,0);
        uVar10 = *(undefined8 *)PTR_DAT_065dd008;
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar10 = FUN_04f3fb68(uVar10,0);
        uVar1 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(uVar2,uVar10,0);
        if ((uVar1 & 1) == 0) {
          thunk_FUN_02c7737c(PTR_DAT_065c8580);
          uVar5 = thunk_FUN_02cea894();
          uVar2 = thunk_FUN_02c7737c(PTR_DAT_066094f0);
          FUN_04f68668(uVar5,uVar2,0);
          uVar2 = thunk_FUN_02c7737c(PTR_DAT_066094f8);
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar5,uVar2);
        }
        if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)PTR_DAT_065ca3e0 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce8018(plVar9);
        }
        puVar4 = (undefined8 *)thunk_FUN_02cea9e8(plVar9);
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w23) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        uVar2 = *puVar4;
        plVar9 = (long *)0x0;
        uVar6 = 0;
        uVar7 = 2;
      }
      else {
        if (*plVar9 != *(long *)PTR_DAT_065c8688) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce8018(plVar9);
        }
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w23) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        uVar7 = 0;
        uVar6 = 0;
        uVar2 = 0;
      }
    }
    else {
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)PTR_DAT_065c8a08 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(plVar9);
      }
      puVar3 = (undefined4 *)thunk_FUN_02cea9e8(plVar9);
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w23) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      uVar6 = *puVar3;
      plVar9 = (long *)0x0;
      uVar2 = 0;
      uVar7 = 1;
    }
    lVar8 = unaff_x19 + (long)(int)unaff_w23 * (long)unaff_w28;
    *(undefined8 *)(lVar8 + 0x20) = uVar5;
    *(undefined4 *)(lVar8 + 0x28) = uVar7;
    *(undefined4 *)(lVar8 + 0x2c) = 0;
    *(long **)(lVar8 + 0x30) = plVar9;
    *(undefined4 *)(lVar8 + 0x38) = uVar6;
    *(undefined4 *)(lVar8 + 0x3c) = 0;
    *(undefined8 *)(lVar8 + 0x40) = uVar2;
    unaff_w23 = unaff_w23 + 1;
  } while( true );
}


