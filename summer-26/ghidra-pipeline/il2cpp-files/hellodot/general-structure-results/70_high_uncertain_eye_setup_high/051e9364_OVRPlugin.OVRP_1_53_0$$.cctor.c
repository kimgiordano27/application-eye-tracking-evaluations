/*
FUNCTION_NAME: OVRPlugin.OVRP_1_53_0$$.cctor
ENTRY_POINT: 051e9364
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_53_0___cctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  uint uVar17;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long *in_stack_00000048;
  undefined8 in_stack_00000050;
  
  iVar5 = FUN_04678fbc();
  if (iVar5 == 0) {
    lVar7 = 0;
  }
  else {
    uVar6 = FUN_04678fbc();
    lVar7 = FUN_02ce7ad4(*(undefined8 *)PTR_DAT_066094e0,uVar6);
    FUN_046796b0(&stack0x00000008);
    puVar4 = PTR_DAT_06602af8;
    puVar3 = PTR_DAT_065dd340;
    puVar2 = PTR_DAT_065dd010;
    puVar1 = PTR_DAT_065c89e8;
    uVar17 = 0;
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000050 = in_stack_00000028;
    while (uVar8 = FUN_048a9bcc(&stack0x00000030,*(undefined8 *)puVar4), plVar15 = in_stack_00000048
          , uVar12 = in_stack_00000040, (uVar8 & 1) != 0) {
      if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar9 = AkMusicSyncCallbackInfo__get_segmentInfo_iRemainingLookAheadTime(in_stack_00000048,0);
      uVar16 = *(undefined8 *)puVar2;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar16 = FUN_04f3fb68(uVar16,0);
      uVar8 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(uVar9,uVar16,0);
      if ((uVar8 & 1) == 0) {
        uVar9 = AkMusicSyncCallbackInfo__get_segmentInfo_iRemainingLookAheadTime(plVar15,0);
        uVar16 = *(undefined8 *)puVar3;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar16 = FUN_04f3fb68(uVar16,0);
        uVar8 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(uVar9,uVar16,0);
        if ((uVar8 & 1) == 0) {
          uVar9 = AkMusicSyncCallbackInfo__get_segmentInfo_iRemainingLookAheadTime(plVar15,0);
          uVar16 = *(undefined8 *)PTR_DAT_065dd008;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar16 = FUN_04f3fb68(uVar16,0);
          uVar8 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(uVar9,uVar16,0);
          if ((uVar8 & 1) == 0) {
            thunk_FUN_02c7737c(PTR_DAT_065c8580);
            uVar12 = thunk_FUN_02cea894();
            uVar9 = thunk_FUN_02c7737c(PTR_DAT_066094f0);
            FUN_04f68668(uVar12,uVar9,0);
            uVar9 = thunk_FUN_02c7737c(PTR_DAT_066094f8);
                    /* WARNING: Subroutine does not return */
            FUN_02ce7b54(uVar12,uVar9);
          }
          if (*(long *)(*plVar15 + 0x40) != *(long *)(*(long *)PTR_DAT_065ca3e0 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce8018(plVar15);
          }
          puVar11 = (undefined8 *)thunk_FUN_02cea9e8(plVar15);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          if (*(uint *)(lVar7 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          uVar9 = *puVar11;
          plVar15 = (long *)0x0;
          uVar6 = 0;
          uVar13 = 2;
        }
        else {
          if (*plVar15 != *(long *)PTR_DAT_065c8688) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce8018(plVar15);
          }
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          if (*(uint *)(lVar7 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          uVar13 = 0;
          uVar6 = 0;
          uVar9 = 0;
        }
      }
      else {
        if (*(long *)(*plVar15 + 0x40) != *(long *)(*(long *)PTR_DAT_065c8a08 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce8018(plVar15);
        }
        puVar10 = (undefined4 *)thunk_FUN_02cea9e8(plVar15);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        uVar6 = *puVar10;
        plVar15 = (long *)0x0;
        uVar9 = 0;
        uVar13 = 1;
      }
      lVar14 = lVar7 + (long)(int)uVar17 * 0x28;
      *(undefined8 *)(lVar14 + 0x20) = uVar12;
      *(undefined4 *)(lVar14 + 0x28) = uVar13;
      *(undefined4 *)(lVar14 + 0x2c) = 0;
      *(long **)(lVar14 + 0x30) = plVar15;
      *(undefined4 *)(lVar14 + 0x38) = uVar6;
      *(undefined4 *)(lVar14 + 0x3c) = 0;
      *(undefined8 *)(lVar14 + 0x40) = uVar9;
      uVar17 = uVar17 + 1;
    }
    FUN_048a9ce0(&stack0x00000030,*(undefined8 *)PTR_DAT_06602af0);
  }
  return lVar7;
}


