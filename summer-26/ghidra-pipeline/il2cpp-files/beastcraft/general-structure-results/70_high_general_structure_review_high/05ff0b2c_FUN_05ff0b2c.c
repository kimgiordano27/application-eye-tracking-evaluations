/*
FUNCTION_NAME: FUN_05ff0b2c
ENTRY_POINT: 05ff0b2c
PROGRAM: beastcraft-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_8;ray_or_cast_sink_hits_2;telemetry_or_network_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x05ff0de4) */

undefined8 FUN_05ff0b2c(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 extraout_x1;
  long lVar18;
  undefined8 uVar19;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  undefined4 local_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar9 = System_Func<InputControlLayout_ControlItem,_string>_TypeInfo;
  puVar3 = System_Converter<Collider,_Bounds>_TypeInfo;
                    /* catch() { ... } // from try @ 05ff0534 with catch @ 05ff0b2c
                       catch() { ... } // from try @ 05ff0a7c with catch @ 05ff0b2c */
  puVar2 = System_Converter<byte,_Value>_TypeInfo;
                    /* catch() { ... } // from try @ 05ff0514 with catch @ 05ff0b30
                       catch() { ... } // from try @ 05ff0a74 with catch @ 05ff0b30 */
                    /* catch() { ... } // from try @ 05ff0878 with catch @ 05ff0b34
                       catch() { ... } // from try @ 05ff0ab8 with catch @ 05ff0b34 */
  if ((DAT_06e94bea & 1) == 0) {
    FUN_02e3ca1c(System_Func<InputControlLayout_ControlItem,_string>_TypeInfo);
    FUN_02e3ca1c(System_Converter<Color,_Value>_TypeInfo);
    FUN_02e3ca1c(System_Converter<Color32,_Value>_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a3fa40);
    FUN_02e3ca1c(PTR_DAT_06a3fa48);
    FUN_02e3ca1c(PTR_DAT_06a3fa50);
    FUN_02e3ca1c(PTR_DAT_06a655a8);
    FUN_02e3ca1c(System_Converter<DateTime,_Value>_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a3fa80);
    FUN_02e3ca1c(System_Converter<Collider,_Bounds>_TypeInfo);
    FUN_02e3ca1c(System_Converter<byte,_Value>_TypeInfo);
    FUN_02e3ca1c(System_Converter<DateTimeOffset,_Value>_TypeInfo);
    DAT_06e94bea = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_88 = 0;
  lVar11 = thunk_FUN_02e78ab8(*(undefined8 *)puVar2);
  FUN_03e3805c(lVar11,*(undefined8 *)puVar3);
  lVar12 = *(long *)puVar9;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar12 = *(long *)puVar9;
  }
  puVar8 = System_Converter<DateTimeOffset,_Value>_TypeInfo;
  puVar7 = System_Converter<DateTime,_Value>_TypeInfo;
  puVar6 = System_Converter<Color32,_Value>_TypeInfo;
  puVar5 = System_Converter<Color,_Value>_TypeInfo;
  puVar4 = PTR_DAT_06a655a8;
  puVar3 = PTR_DAT_06a3fa48;
  puVar2 = PTR_DAT_06a3fa40;
  lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  FUN_03f2c008(&local_a8,lVar12,*(undefined8 *)PTR_DAT_06a3fa80);
  local_80 = local_a8;
  local_a8 = 0;
  uStack_78 = puStack_a0;
  local_70 = local_98;
  puStack_a0 = &local_80;
  while( true ) {
    uVar13 = FUN_04fc1198(&local_80,*(undefined8 *)puVar3);
    uVar16 = local_70;
    lVar12 = local_a8;
    if ((uVar13 & 1) == 0) {
      FUN_04fc1194(puStack_a0,*(undefined8 *)puVar2);
      if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccbc(lVar12);
      }
      iVar10 = FUN_038edd08(lVar11,*(undefined8 *)puVar5);
      puVar2 = System_Func<InputControlLayout_ControlItem,_string>_TypeInfo;
      if (iVar10 == 0) {
        thunk_FUN_02ea289c(System_Func<InputControlLayout_ControlItem,_string>_TypeInfo);
        FUN_02a73238();
        lVar11 = thunk_FUN_02ea289c(puVar2);
        uVar17 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8);
        uVar16 = thunk_FUN_02ea289c(PTR_DAT_06a30020);
        uVar14 = thunk_FUN_02ea289c(PTR_DAT_06a41a60);
        uVar16 = thunk_FUN_03aa2aa0(uVar16,uVar17,uVar14);
        uVar14 = thunk_FUN_02ea289c(System_Converter<Decimal,_Value>_TypeInfo);
      }
      else {
        iVar10 = FUN_038edd08(lVar11,*(undefined8 *)puVar5);
        if (iVar10 < 2) {
          uVar16 = FUN_038f3260(lVar11,*(undefined8 *)puVar6);
          FUN_038f3260(lVar11,*(undefined8 *)puVar6);
          uVar14 = thunk_FUN_02e78ab8(*(undefined8 *)puVar9);
          FUN_05ff07d0(uVar14,uVar16,extraout_x1);
          return uVar14;
        }
        lVar12 = thunk_FUN_02ea289c(
                                   System_Func<JsonSerializerInternalReader_CreatorPropertyContext,_bool>_TypeInfo
                                   );
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        lVar12 = thunk_FUN_02ea289c(
                                   System_Func<JsonSerializerInternalReader_CreatorPropertyContext,_bool>_TypeInfo
                                   );
        lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
        uVar16 = thunk_FUN_02ea289c(PTR_DAT_06a30020);
        uVar14 = thunk_FUN_02ea289c(System_Converter<Guid,_Value>_TypeInfo);
        if (lVar12 == 0) {
          lVar12 = thunk_FUN_02ea289c(
                                     System_Func<JsonSerializerInternalReader_CreatorPropertyContext,_bool>_TypeInfo
                                     );
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          puVar2 = System_Func<JsonSerializerInternalReader_CreatorPropertyContext,_bool>_TypeInfo;
          lVar12 = thunk_FUN_02ea289c(
                                     System_Func<JsonSerializerInternalReader_CreatorPropertyContext,_bool>_TypeInfo
                                     );
          uVar19 = **(undefined8 **)(lVar12 + 0xb8);
          thunk_FUN_02ea289c(System_Converter<short,_Value>_TypeInfo);
          lVar12 = thunk_FUN_02e78ab8();
          uVar17 = thunk_FUN_02ea289c(
                                     System_Func<LckEvents_ActiveCameraChangedEvent,_LckResult<ILckCamera>>_TypeInfo
                                     );
          FUN_0527dac0(lVar12,uVar19,uVar17,0);
          lVar18 = thunk_FUN_02ea289c(puVar2);
          *(long *)(*(long *)(lVar18 + 0xb8) + 8) = lVar12;
          lVar18 = thunk_FUN_02ea289c(puVar2);
          thunk_FUN_02ee2be8(*(long *)(lVar18 + 0xb8) + 8,lVar12);
        }
        uVar17 = thunk_FUN_02ea289c(System_Converter<long,_Value>_TypeInfo);
        uVar17 = thunk_FUN_038fb38c(lVar11,lVar12,uVar17);
        uVar19 = thunk_FUN_02ea289c(PTR_DAT_06a41a60);
        uVar16 = thunk_FUN_03aa2aa0(uVar16,uVar17,uVar19);
      }
      uVar16 = FUN_05482ce0(uVar14,uVar16,0);
      thunk_FUN_02ea289c(PTR_DAT_06a6e210);
      uVar14 = thunk_FUN_02e78ab8();
      FUN_05fffd10(uVar14,uVar16,0);
      uVar16 = thunk_FUN_02ea289c(
                                 System_Func<LckEvents_RecordingSavedEvent,_LckResult<RecordingData>>_TypeInfo
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_02e3cb88(uVar14,uVar16);
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar14 = FUN_05690750(param_1,uVar16,0);
    local_b8 = 0;
    uStack_b0 = 0;
    FUN_0497a970(&local_b8,uVar14,uVar16,*(undefined8 *)puVar8);
    if (lVar11 == 0) break;
    lVar12 = *(long *)(lVar11 + 0x10);
    lVar18 = *(long *)puVar7;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar12 == 0) break;
    uVar1 = *(uint *)(lVar11 + 0x18);
    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
      lVar12 = lVar12 + (long)(int)uVar1 * 0x10;
      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
      puVar15 = (undefined8 *)(lVar12 + 0x20);
      *puVar15 = local_b8;
      *(undefined8 *)(lVar12 + 0x28) = uStack_b0;
      thunk_FUN_02ee2be8(puVar15,0);
    }
    else {
      FUN_03e38908(lVar11,local_b8,uStack_b0,
                   *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


