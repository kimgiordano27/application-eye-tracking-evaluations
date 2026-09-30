/*
FUNCTION_NAME: FUN_05dbfa38
ENTRY_POINT: 05dbfa38
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_12;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_05dbfa38(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  long *plVar11;
  
  if ((DAT_06a7ae9e & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerable<XRGrabInteractable>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c48);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca370);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Func<CaptureIconService_CaptureRequest,_bool>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerable<YogaNode>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<DebugSettings_Option,_string>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerable<ZenjectBinding>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              System_Collections_Generic_IEnumerable<BinaryStorageBuffer_ISerializationAdapter>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerable<DebugSettings_Setting>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_ICollection<NameValueHeaderValue>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_IEnumerable<MessageDescriptor>_TypeInfo);
    DAT_06a7ae9e = 1;
  }
  puVar1 = System_Collections_Generic_IEnumerable<YogaNode>_TypeInfo;
  if (*(char *)(param_1 + 0x1a) != '\0') {
    return;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = thunk_FUN_02cea798(uVar10,*(undefined8 *)
                                     System_Collections_Generic_IEnumerable<YogaNode>_TypeInfo);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  thunk_FUN_02cea798(uVar10,*(undefined8 *)puVar1);
  puVar2 = System_Func<DebugSettings_Option,_string>_TypeInfo;
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = thunk_FUN_02cea798(uVar10,*(undefined8 *)
                                     System_Func<DebugSettings_Option,_string>_TypeInfo);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  thunk_FUN_02cea798(uVar10,*(undefined8 *)puVar2);
  plVar11 = *(long **)(param_1 + 0x20);
  if ((plVar11 == (long *)0x0) || (*(long *)(param_1 + 0x28) == 0)) {
    if (*(int *)(*(long *)PTR_DAT_065c8c48 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_05eb364c(*(undefined8 *)System_Collections_Generic_IEnumerable<ZenjectBinding>_TypeInfo,0);
    return;
  }
  lVar7 = *plVar11;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_05dbfbe8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_02ce0a7c(plVar11,*(long *)puVar1,0);
LAB_05dbfbe8:
  uVar4 = (*(code *)*puVar5)(plVar11,puVar5[1]);
  plVar11 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  if (plVar11 != (long *)0x0) {
    lVar7 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_05dbfc50;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c(plVar11,*(long *)puVar1,1);
LAB_05dbfc50:
    uVar4 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    plVar11 = *(long **)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x50) = uVar4;
    if (plVar11 != (long *)0x0) {
      lVar7 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)System_Func<CaptureIconService_CaptureRequest,_bool>_TypeInfo) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
            goto LAB_05dbfcc0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_02ce0a7c(plVar11,*(long *)
                                     System_Func<CaptureIconService_CaptureRequest,_bool>_TypeInfo,5
                           );
LAB_05dbfcc0:
      lVar7 = (*(code *)*puVar5)(plVar11,puVar5[1]);
      if ((lVar7 != 0) && (lVar6 = FUN_05ef2cf0(lVar7,0), lVar6 != 0)) {
        uVar4 = FUN_05efa158(lVar6,0);
        puVar2 = System_Collections_Generic_IEnumerable<DebugSettings_Setting>_TypeInfo;
        uVar10 = FUN_04db9398(*(undefined8 *)
                               System_Collections_Generic_IEnumerable<DebugSettings_Setting>_TypeInfo
                              ,uVar4,*(undefined8 *)
                                      System_Collections_Generic_IEnumerable<MessageDescriptor>_TypeInfo
                              ,0);
        puVar1 = PTR_DAT_065ca370;
        lVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ca370);
        FUN_05ef6494(lVar6,uVar10,0);
        if (lVar6 != 0) {
          uVar10 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(lVar6,0);
          *(undefined8 *)(param_1 + 0x68) = uVar10;
          uVar10 = FUN_04db9398(*(undefined8 *)puVar2,uVar4,
                                *(undefined8 *)
                                 System_Collections_Generic_ICollection<NameValueHeaderValue>_TypeInfo
                                ,0);
          lVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
          FUN_05ef6494(lVar6,uVar10,0);
          if (lVar6 != 0) {
            uVar10 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(lVar6,0);
            *(undefined8 *)(param_1 + 0x70) = uVar10;
            if (*(long *)(param_1 + 0x48) != 0) {
              lVar6 = *(long *)(param_1 + 0x68);
              uVar10 = FUN_05f01814(*(long *)(param_1 + 0x48),0);
              if (lVar6 != 0) {
                FUN_05f024ac(lVar6,uVar10,0);
                if (*(long *)(param_1 + 0x70) != 0) {
                  FUN_05f024ac(*(long *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x68),0);
                  bVar3 = FUN_03393e70(lVar7,param_1 + 0x38,
                                       *(undefined8 *)
                                        System_Collections_Generic_IEnumerable<XRGrabInteractable>_TypeInfo
                                      );
                  *(byte *)(param_1 + 0x40) = bVar3 & 1;
                  if ((bVar3 & 1) == 0) {
LAB_05dbfe80:
                    *(undefined1 *)(param_1 + 0x1a) = 1;
                    return;
                  }
                  uVar4 = FUN_04db9398(*(undefined8 *)puVar2,uVar4,
                                       *(undefined8 *)
                                        System_Collections_Generic_IEnumerable<BinaryStorageBuffer_ISerializationAdapter>_TypeInfo
                                       ,0);
                  lVar7 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
                  FUN_05ef6494(lVar7,uVar4,0);
                  if (lVar7 != 0) {
                    lVar7 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(lVar7,0);
                    *(long *)(param_1 + 0x78) = lVar7;
                    if ((*(long *)(param_1 + 0x68) != 0) &&
                       (uVar4 = FUN_05f01814(*(long *)(param_1 + 0x68),0), lVar7 != 0)) {
                      FUN_05f024ac(lVar7,uVar4,0);
                      goto LAB_05dbfe80;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


