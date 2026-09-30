/*
FUNCTION_NAME: FUN_05d2d3b4
ENTRY_POINT: 05d2d3b4
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05d2d3b4(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  bool bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  
  puVar5 = System_Collections_Generic_Dictionary<uint,_Character>_TypeInfo;
  if ((DAT_06a7a780 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_Dictionary<uint,_Character>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              System_Collections_Generic_Dictionary<Type,_EventInterestReflectionUtils_DefaultEventInterests>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca020);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cbf18);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca030);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca038);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_Dictionary<Type,_ObjectPool_IPoolClass>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Oculus_Interaction_Input_DataModifier<ControllerDataAsset>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_UIElements_UIR_Page_DataSet<ushort>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              System_Collections_Generic_Dictionary<ObjectIntPair<IDescriptor>,_EnumValueDescriptor>_TypeInfo
              );
    DAT_06a7a780 = 1;
  }
  lVar12 = *(long *)puVar5;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  local_e0._0_8_ = 0;
  local_e0._8_8_ = 0;
  local_f0 = 0;
  local_e8 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_138 = 0;
  local_140 = 0;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar12 = *(long *)puVar5;
  }
  auVar3._8_8_ = local_e0._8_8_;
  auVar3._0_8_ = local_e0._0_8_;
  lVar12 = **(long **)(lVar12 + 0xb8);
  if (lVar12 != 0) {
    *(undefined4 *)(lVar12 + 0x18) = 0;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    local_e0 = auVar3;
    if (*(long *)(param_5 + 0x20) != 0) {
      FUN_05d2b518(&local_178);
      puVar10 = System_Collections_Generic_Dictionary<Type,_ObjectPool_IPoolClass>_TypeInfo;
      puVar9 = System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TypeInfo;
      puVar8 = System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>_TypeInfo;
      puVar7 = 
      System_Collections_Generic_Dictionary<Type,_EventInterestReflectionUtils_DefaultEventInterests>_TypeInfo
      ;
      puVar6 = UnityEngine_UIElements_UIR_Page_DataSet<ushort>_TypeInfo;
      puVar4 = PTR_DAT_065ca020;
      uStack_a8 = uStack_170;
      local_b0 = local_178;
      uVar15 = local_b0;
      local_b0._0_1_ = (char)local_178;
      local_a0 = local_168;
      bVar1 = (char)local_b0 != '\0';
      local_b0 = uVar15;
      if (bVar1) {
        if (*(long *)(param_5 + 0x20) == 0) goto LAB_05d2d8cc;
        FUN_05d2b518(&local_178);
        uStack_a8 = uStack_170;
        local_b0 = local_178;
        local_a0 = local_168;
        local_e0 = FUN_03c7c254(&local_b0,*(undefined8 *)puVar6);
        FUN_03c6fedc(&local_178,local_e0,*(undefined8 *)puVar10);
        uStack_c8 = uStack_170;
        local_d0 = local_178;
        local_c0 = local_168;
        while (uVar13 = FUN_0482dfcc(&local_d0,*(undefined8 *)puVar8), (uVar13 & 1) != 0) {
          uVar19 = FUN_0482e024(&local_d0,*(undefined8 *)puVar9);
          lVar14 = *(long *)puVar5;
          uVar15 = param_2;
          uVar21 = param_3;
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
            lVar14 = *(long *)puVar5;
          }
          lVar14 = **(long **)(lVar14 + 0xb8);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar17 = *(long *)(lVar14 + 0x10);
          lVar16 = *(long *)puVar4;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          uVar2 = *(uint *)(lVar14 + 0x18);
          if (uVar2 < *(uint *)(lVar17 + 0x18)) {
            lVar17 = lVar17 + (long)(int)uVar2 * 0xc;
            *(uint *)(lVar14 + 0x18) = uVar2 + 1;
            *(int *)(lVar17 + 0x20) = (int)uVar19;
            *(int *)(lVar17 + 0x24) = (int)param_2;
            *(int *)(lVar17 + 0x28) = (int)param_3;
            param_2 = uVar15;
            param_3 = uVar21;
          }
          else {
            FUN_03a14600(uVar19,lVar14,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
        }
        FUN_0482dfc8(&local_d0,*(undefined8 *)puVar7);
      }
      uVar2 = *(uint *)(lVar12 + 0x18);
      uVar13 = (ulong)uVar2;
      if ((*(long *)(param_5 + 0x30) == 0) ||
         (*(int *)(*(long *)(param_5 + 0x30) + 0x18) < (int)uVar2)) {
        uVar15 = FUN_02ce7ad4(*(undefined8 *)
                               System_Collections_Generic_Dictionary<ObjectIntPair<IDescriptor>,_EnumValueDescriptor>_TypeInfo
                              ,uVar13);
        *(undefined8 *)(param_5 + 0x30) = uVar15;
      }
      if (*(long *)(param_5 + 0x28) != 0) {
        local_e8 = FUN_05f429e8(*(long *)(param_5 + 0x28),0);
        FUN_05f43314(&local_178,&local_e8,0);
        uStack_118 = uStack_170;
        local_120 = local_178;
        uStack_108 = uStack_160;
        local_110 = local_168;
        uStack_f8 = uStack_150;
        local_100 = local_158;
        local_f0 = local_148;
        uVar15 = local_168;
        uVar21 = local_158;
        uVar19 = FUN_05f4338c(&local_120,0);
        if (*(long *)(param_5 + 0x28) != 0) {
          local_e8 = FUN_05f429e8(*(long *)(param_5 + 0x28),0);
          FUN_05f45be4(&local_178,&local_e8,0);
          uStack_138 = uStack_170;
          local_140 = local_178;
          uStack_128 = uStack_160;
          local_130 = local_168;
          uVar20 = FUN_05f46710(&local_140,0);
          puVar5 = PTR_DAT_065ca038;
          if (0 < (int)uVar2) {
            uVar18 = 0;
            lVar14 = 0x20;
            do {
              lVar16 = *(long *)(param_5 + 0x30);
              if (lVar16 == 0) goto LAB_05d2d8cc;
              uVar11 = FUN_04d40de4(uVar19,uVar15,uVar21,param_4,0);
              if (*(uint *)(lVar16 + 0x18) <= uVar18) goto LAB_05d2d8d0;
              FUN_05f42910(lVar16 + lVar14,uVar11,0);
              lVar16 = *(long *)(param_5 + 0x30);
              if (lVar16 == 0) goto LAB_05d2d8cc;
              if (*(uint *)(lVar16 + 0x18) <= uVar18) goto LAB_05d2d8d0;
              FUN_05f428ac(uVar20,lVar16 + lVar14,0);
              lVar16 = *(long *)(param_5 + 0x30);
              if (lVar16 == 0) goto LAB_05d2d8cc;
              FUN_03a142d0(lVar12,uVar18 & 0xffffffff,*(undefined8 *)puVar5);
              if (*(uint *)(lVar16 + 0x18) <= uVar18) goto LAB_05d2d8d0;
              FUN_05f42884(lVar16 + lVar14,0);
              lVar16 = *(long *)(param_5 + 0x30);
              if (lVar16 == 0) goto LAB_05d2d8cc;
              if (*(uint *)(lVar16 + 0x18) <= uVar18) goto LAB_05d2d8d0;
              FUN_05f466b4(0x3f800000,lVar16 + lVar14,0);
              uVar18 = uVar18 + 1;
              lVar14 = lVar14 + 0x84;
            } while (uVar13 != uVar18);
          }
          uVar18 = (ulong)*(uint *)(param_5 + 0x38);
          if ((int)uVar2 < (int)*(uint *)(param_5 + 0x38)) {
            lVar12 = (long)(int)uVar2;
            lVar14 = lVar12 * 0x84 + 0x20;
            do {
              lVar16 = *(long *)(param_5 + 0x30);
              if (lVar16 == 0) goto LAB_05d2d8cc;
              if (*(uint *)(lVar16 + 0x18) <= (uint)lVar12) {
LAB_05d2d8d0:
                    /* WARNING: Subroutine does not return */
                FUN_02ce7c84();
              }
              FUN_05f466b4(0xbf800000,lVar16 + lVar14,0);
              uVar18 = (ulong)*(int *)(param_5 + 0x38);
              lVar12 = lVar12 + 1;
              lVar14 = lVar14 + 0x84;
            } while (lVar12 < (long)uVar18);
          }
          lVar12 = *(long *)(param_5 + 0x28);
          uVar15 = *(undefined8 *)(param_5 + 0x30);
          if (*(int *)(*(long *)PTR_DAT_065c8d28 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar11 = FUN_04f32070(uVar13,uVar18 & 0xffffffff,0);
          if (lVar12 != 0) {
            FUN_05f4434c(lVar12,uVar15,uVar11,0);
            *(uint *)(param_5 + 0x38) = uVar2;
            return;
          }
        }
      }
    }
  }
LAB_05d2d8cc:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


