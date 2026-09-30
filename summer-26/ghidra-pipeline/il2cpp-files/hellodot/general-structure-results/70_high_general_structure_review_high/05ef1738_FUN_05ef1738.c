/*
FUNCTION_NAME: FUN_05ef1738
ENTRY_POINT: 05ef1738
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_4
*/


long * FUN_05ef1738(long *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  uint uVar16;
  
  if ((DAT_06a7ee5b & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dc6a0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066005f0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dcd40);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dcd48);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065eced8);
    AkMIDIEventCallbackInfo__get_byProgramNum(Niantic_Peridot_ArdkHdTelemetryPublisher_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_ARDK_AR_Protobuf_ArdkTelemetryReflection_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c92b8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c89e8);
    DAT_06a7ee5b = 1;
  }
  puVar7 = Niantic_ARDK_AR_Protobuf_ArdkTelemetryReflection_TypeInfo;
  puVar6 = Niantic_Peridot_ArdkHdTelemetryPublisher_TypeInfo;
  puVar5 = PTR_DAT_065eced8;
  puVar4 = PTR_DAT_065dc6a0;
  puVar3 = PTR_DAT_065c89e8;
  lVar14 = 0;
  puVar2 = (undefined8 *)PTR_DAT_066005f0;
  do {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar8 = FUN_04f497f4(param_1,0,0);
    if ((uVar8 & 1) == 0) {
LAB_05ef1afc:
      if (lVar14 == 0) {
        return (long *)0x0;
      }
      plVar11 = (long *)System_Collections_Generic_List<FocusController_FocusedElement>__get_Item
                                  (lVar14,*puVar2);
      return plVar11;
    }
    uVar15 = *(undefined8 *)puVar5;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar15 = FUN_04f3fb68(uVar15,0);
    uVar8 = FUN_04f497f4(param_1,uVar15,0);
    if ((uVar8 & 1) == 0) goto LAB_05ef1afc;
    uVar15 = *(undefined8 *)puVar7;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar15 = FUN_04f3fb68(uVar15,0);
    if (param_1 == (long *)0x0) {
LAB_05ef1bec:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar9 = (**(code **)(*param_1 + 0x218))(param_1,uVar15,0,*(undefined8 *)(*param_1 + 0x220));
    if (lVar9 == 0) {
      lVar10 = 0;
    }
    else {
      uVar15 = *(undefined8 *)puVar6;
      lVar10 = thunk_FUN_02cea798(lVar9,uVar15);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(lVar9,uVar15);
      }
    }
    param_1 = (long *)(**(code **)(*param_1 + 0x8a8))(param_1,*(undefined8 *)(*param_1 + 0x8b0));
    if (lVar10 == 0) goto LAB_05ef1bec;
    uVar8 = *(ulong *)(lVar10 + 0x18);
    if (0 < (int)uVar8) {
      uVar16 = 0;
      do {
        if ((uint)uVar8 <= uVar16) {
LAB_05ef1bf0:
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        lVar9 = *(long *)(lVar10 + (long)(int)uVar16 * 8 + 0x20);
        if (lVar14 == 0) {
          if ((uint)uVar8 == 1) {
            uVar15 = *(undefined8 *)puVar5;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            uVar15 = FUN_04f3fb68(uVar15,0);
            uVar8 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(param_1,uVar15,0);
            if ((uVar8 & 1) != 0) {
              plVar11 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c92b8,3);
              if ((lVar9 != 0) && (plVar11 != (long *)0x0)) {
                lVar14 = *(long *)(lVar9 + 0x10);
                if ((lVar14 != 0) &&
                   (lVar10 = thunk_FUN_02cea798(lVar14,*(undefined8 *)(*plVar11 + 0x40)),
                   lVar10 == 0)) {
UnityEngine_UIElements_VisualElementFocusChangeTarget__set_target:
                  uVar15 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
                  FUN_02ce7b54(uVar15,0);
                }
                uVar16 = *(uint *)(plVar11 + 3);
                if (uVar16 == 0) goto LAB_05ef1bf0;
                plVar11[4] = lVar14;
                lVar14 = *(long *)(lVar9 + 0x18);
                if (lVar14 != 0) {
                  lVar10 = thunk_FUN_02cea798(lVar14,*(undefined8 *)(*plVar11 + 0x40));
                  if (lVar10 == 0)
                  goto UnityEngine_UIElements_VisualElementFocusChangeTarget__set_target;
                  uVar16 = *(uint *)(plVar11 + 3);
                }
                if (uVar16 < 2) goto LAB_05ef1bf0;
                plVar11[5] = lVar14;
                lVar14 = *(long *)(lVar9 + 0x20);
                if (lVar14 != 0) {
                  lVar9 = thunk_FUN_02cea798(lVar14,*(undefined8 *)(*plVar11 + 0x40));
                  if (lVar9 == 0)
                  goto UnityEngine_UIElements_VisualElementFocusChangeTarget__set_target;
                  uVar16 = *(uint *)(plVar11 + 3);
                }
                if (2 < uVar16) {
                  plVar11[6] = lVar14;
                  return plVar11;
                }
                goto LAB_05ef1bf0;
              }
              goto LAB_05ef1bec;
            }
          }
          lVar14 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065dcd48);
          System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                    (lVar14,*(undefined8 *)PTR_DAT_065dcd40);
        }
        if (lVar9 == 0) goto LAB_05ef1bec;
        uVar15 = *(undefined8 *)(lVar9 + 0x10);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar8 = FUN_04f497f4(uVar15,0,0);
        if ((uVar8 & 1) != 0) {
          if (lVar14 == 0) goto LAB_05ef1bec;
          uVar15 = *(undefined8 *)(lVar9 + 0x10);
          lVar12 = *(long *)(lVar14 + 0x10);
          lVar13 = *(long *)puVar4;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_05ef1bec;
          uVar1 = *(uint *)(lVar14 + 0x18);
          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar15;
          }
          else {
            FUN_039683cc(lVar14,uVar15,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar15 = *(undefined8 *)(lVar9 + 0x18);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar8 = FUN_04f497f4(uVar15,0,0);
        if ((uVar8 & 1) != 0) {
          if (lVar14 == 0) goto LAB_05ef1bec;
          uVar15 = *(undefined8 *)(lVar9 + 0x18);
          lVar12 = *(long *)(lVar14 + 0x10);
          lVar13 = *(long *)puVar4;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_05ef1bec;
          uVar1 = *(uint *)(lVar14 + 0x18);
          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar15;
          }
          else {
            FUN_039683cc(lVar14,uVar15,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar15 = *(undefined8 *)(lVar9 + 0x20);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar8 = FUN_04f497f4(uVar15,0,0);
        if ((uVar8 & 1) != 0) {
          if (lVar14 == 0) goto LAB_05ef1bec;
          uVar15 = *(undefined8 *)(lVar9 + 0x20);
          lVar9 = *(long *)(lVar14 + 0x10);
          lVar12 = *(long *)puVar4;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_05ef1bec;
          uVar1 = *(uint *)(lVar14 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar15;
          }
          else {
            FUN_039683cc(lVar14,uVar15,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar8 = (ulong)*(uint *)(lVar10 + 0x18);
        uVar16 = uVar16 + 1;
        puVar2 = (undefined8 *)PTR_DAT_066005f0;
      } while ((int)uVar16 < (int)*(uint *)(lVar10 + 0x18));
    }
  } while( true );
}


