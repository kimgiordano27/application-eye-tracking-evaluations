/*
FUNCTION_NAME: FUN_05d2cbd8
ENTRY_POINT: 05d2cbd8
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05d2cbd8(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

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
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar6 = 
  System_Collections_Generic_Dictionary<Type,_BinaryStorageBuffer_ISerializationAdapter>_TypeInfo;
  if ((DAT_06a7a779 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              System_Collections_Generic_Dictionary<Type,_BinaryStorageBuffer_ISerializationAdapter>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca2c0);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              System_Collections_Generic_Dictionary<Type,_EventInterestReflectionUtils_DefaultEventInterests>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca018);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca020);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cbf18);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca030);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_Dictionary<Type,_ObjectPool_IPoolClass>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Oculus_Interaction_Input_DataModifier<ControllerDataAsset>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_UIElements_UIR_Page_DataSet<ushort>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c40);
    DAT_06a7a779 = 1;
  }
  lVar11 = *(long *)puVar6;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_b0._0_8_ = 0;
  local_b0._8_8_ = 0;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar11 = *(long *)puVar6;
  }
  auVar3._8_8_ = local_b0._8_8_;
  auVar3._0_8_ = local_b0._0_8_;
  lVar11 = **(long **)(lVar11 + 0xb8);
  if (lVar11 != 0) {
    *(undefined4 *)(lVar11 + 0x18) = 0;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    local_b0 = auVar3;
    if (*(long *)(param_4 + 0x28) != 0) {
      FUN_05d2b518(&local_c8);
      puVar10 = System_Collections_Generic_Dictionary<Type,_ObjectPool_IPoolClass>_TypeInfo;
      puVar9 = System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TypeInfo;
      puVar8 = System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>_TypeInfo;
      puVar7 = 
      System_Collections_Generic_Dictionary<Type,_EventInterestReflectionUtils_DefaultEventInterests>_TypeInfo
      ;
      puVar5 = UnityEngine_UIElements_UIR_Page_DataSet<ushort>_TypeInfo;
      puVar4 = PTR_DAT_065ca020;
      uStack_78 = uStack_c0;
      local_80 = local_c8;
      uVar16 = local_80;
      local_80._0_1_ = (char)local_c8;
      local_70 = local_b8;
      bVar1 = (char)local_80 != '\0';
      local_80 = uVar16;
      if (bVar1) {
        if (*(long *)(param_4 + 0x28) == 0) goto LAB_05d2cfac;
        FUN_05d2b518(&local_c8);
        uStack_78 = uStack_c0;
        local_80 = local_c8;
        local_70 = local_b8;
        local_b0 = FUN_03c7c254(&local_80,*(undefined8 *)puVar5);
        FUN_03c6fedc(&local_c8,local_b0,*(undefined8 *)puVar10);
        uStack_98 = uStack_c0;
        local_a0 = local_c8;
        local_90 = local_b8;
        while (uVar12 = FUN_0482dfcc(&local_a0,*(undefined8 *)puVar8), (uVar12 & 1) != 0) {
          uVar15 = FUN_0482e024(&local_a0,*(undefined8 *)puVar9);
          lVar11 = *(long *)puVar6;
          uVar16 = param_2;
          uVar17 = param_3;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
            lVar11 = *(long *)puVar6;
          }
          lVar11 = **(long **)(lVar11 + 0xb8);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar14 = *(long *)(lVar11 + 0x10);
          lVar13 = *(long *)puVar4;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          uVar2 = *(uint *)(lVar11 + 0x18);
          if (uVar2 < *(uint *)(lVar14 + 0x18)) {
            lVar14 = lVar14 + (long)(int)uVar2 * 0xc;
            *(uint *)(lVar11 + 0x18) = uVar2 + 1;
            *(int *)(lVar14 + 0x20) = (int)uVar15;
            *(int *)(lVar14 + 0x24) = (int)param_2;
            *(int *)(lVar14 + 0x28) = (int)param_3;
            param_2 = uVar16;
            param_3 = uVar17;
          }
          else {
            FUN_03a14600(uVar15,lVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
        }
        FUN_0482dfc8(&local_a0,*(undefined8 *)puVar7);
      }
      if (*(long *)(param_4 + 0x20) != 0) {
        FUN_05ed6a1c(*(long *)(param_4 + 0x20),0);
        lVar11 = *(long *)(param_4 + 0x20);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        if (lVar11 != 0) {
          FUN_05ed17fc(lVar11,**(undefined8 **)(*(long *)puVar6 + 0xb8),0);
          puVar5 = PTR_DAT_065ca2c0;
          puVar4 = PTR_DAT_065c8c40;
          if (**(long **)(*(long *)puVar6 + 0xb8) != 0) {
            lVar11 = FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065ca018,
                                  *(undefined4 *)(**(long **)(*(long *)puVar6 + 0xb8) + 0x18));
            lVar13 = *(long *)puVar6;
            uVar12 = 0;
            while( true ) {
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
                lVar13 = *(long *)puVar6;
              }
              if (**(long **)(lVar13 + 0xb8) == 0) goto LAB_05d2cfac;
              if ((long)*(int *)(**(long **)(lVar13 + 0xb8) + 0x18) <= (long)uVar12) break;
              if (lVar11 == 0) goto LAB_05d2cfac;
              if (*(uint *)(lVar11 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
                FUN_02ce7c84();
              }
              *(int *)(lVar11 + 0x20 + uVar12 * 4) = (int)uVar12;
              uVar12 = uVar12 + 1;
            }
            if (*(long *)(param_4 + 0x20) != 0) {
              FUN_05ed5bc4(*(long *)(param_4 + 0x20),lVar11,5,0,0);
              lVar11 = FUN_03392fac(param_4,*(undefined8 *)puVar5);
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_02cd038c(*(long *)puVar4);
              }
              uVar12 = FUN_05ef59b8(lVar11,0,0);
              if ((uVar12 & 1) != 0) {
                if (lVar11 == 0) goto LAB_05d2cfac;
                FUN_05ecdfa4(lVar11,*(undefined8 *)(param_4 + 0x20),0);
              }
              return;
            }
          }
        }
      }
    }
  }
LAB_05d2cfac:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


