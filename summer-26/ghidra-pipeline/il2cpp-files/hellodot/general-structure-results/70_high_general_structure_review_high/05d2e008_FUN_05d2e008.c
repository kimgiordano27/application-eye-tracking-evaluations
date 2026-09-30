/*
FUNCTION_NAME: FUN_05d2e008
ENTRY_POINT: 05d2e008
PROGRAM: hellodot-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void FUN_05d2e008(ulong param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long unaff_x20;
  long *plVar9;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  plVar9 = *(long **)(unaff_x20 + 0x4c0);
  if ((param_1 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_Dictionary<uint,_TMP_SpriteGlyph>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_Dictionary<uint,_TMP_SpriteCharacter>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c48);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              System_Collections_Generic_Dictionary<uint,_AkAudioInputManager_AudioFormatDelegate>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              System_Collections_Generic_Dictionary<uint,_AkAudioInputManager_AudioSamplesDelegate>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8918);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_Dictionary<ulong,_Request>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_Dictionary<ulong,_Vector3>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c92a0);
    *(undefined1 *)(unaff_x19 + 0x78b) = 1;
  }
  lVar5 = *plVar9;
  in_stack_00000048 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000020 = 0;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar5 = *plVar9;
  }
  uVar6 = FUN_0612dc14(&stack0x00000050,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0xb0),
                       &stack0x00000040,0);
  if ((uVar6 & 1) == 0) {
    lVar5 = *plVar9;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar5 = *plVar9;
    }
    uVar3 = FUN_0612dc14(&stack0x00000050,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0xb8),
                         &stack0x00000040,0);
  }
  else {
    uVar3 = 1;
  }
  lVar5 = *plVar9;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar5 = *plVar9;
  }
  uVar6 = FUN_0612dd1c(&stack0x00000050,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x178),
                       &stack0x00000030,0);
  if ((uVar6 & 1) == 0) {
    lVar5 = *plVar9;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar5 = *plVar9;
    }
    uVar4 = FUN_0612dd1c(&stack0x00000050,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x180),
                         &stack0x00000030,0);
  }
  else {
    uVar4 = 1;
  }
  puVar2 = System_Collections_Generic_Dictionary<uint,_TMP_SpriteGlyph>_TypeInfo;
  if ((uVar3 & uVar4 & 1) != 0) {
    if (**(char **)(*(long *)System_Collections_Generic_Dictionary<uint,_TMP_SpriteGlyph>_TypeInfo +
                   0xb8) != '\0') {
      lVar5 = FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8918,5);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if (*(int *)(lVar5 + 0x18) != 0) {
        *(undefined8 *)(lVar5 + 0x20) =
             *(undefined8 *)System_Collections_Generic_Dictionary<ulong,_Vector3>_TypeInfo;
        uVar7 = FUN_0612d594(&stack0x00000050,0);
        auVar1._8_8_ = in_stack_00000028;
        auVar1._0_8_ = in_stack_00000020;
        if ((1 < *(uint *)(lVar5 + 0x18)) &&
           (*(undefined8 *)(lVar5 + 0x28) = uVar7, _in_stack_00000020 = auVar1,
           *(uint *)(lVar5 + 0x18) != 2)) {
          *(undefined8 *)(lVar5 + 0x30) =
               *(undefined8 *)System_Collections_Generic_Dictionary<ulong,_Request>_TypeInfo;
          _in_stack_00000020 =
               FUN_03c853f4(*(undefined8 *)(*(long *)puVar2 + 0xb8),
                            *(undefined8 *)
                             System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor>_TypeInfo
                           );
          uVar7 = FUN_0612d594(&stack0x00000020,0);
          if ((3 < *(uint *)(lVar5 + 0x18)) &&
             (*(undefined8 *)(lVar5 + 0x38) = uVar7, *(uint *)(lVar5 + 0x18) != 4)) {
            *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)PTR_DAT_065c92a0;
            uVar7 = FUN_04db97ac(lVar5,0);
            if (*(int *)(*(long *)PTR_DAT_065c8c48 + 0xe0) == 0) {
              thunk_FUN_02cd038c(*(long *)PTR_DAT_065c8c48);
            }
            FUN_05eb364c(uVar7,0);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    in_stack_00000008 = 0;
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    FUN_03c853dc(&stack0x00000008,in_stack_00000050,in_stack_00000058,
                 *(undefined8 *)
                  System_Collections_Generic_Dictionary<uint,_AkAudioInputManager_AudioFormatDelegate>_TypeInfo
                );
    puVar8 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    puVar8[2] = in_stack_00000018;
    puVar8[1] = in_stack_00000010;
    *puVar8 = in_stack_00000008;
  }
  return;
}


