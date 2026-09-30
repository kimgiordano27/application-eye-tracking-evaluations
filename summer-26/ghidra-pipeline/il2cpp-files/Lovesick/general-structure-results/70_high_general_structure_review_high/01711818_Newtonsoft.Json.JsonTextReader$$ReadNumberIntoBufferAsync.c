/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$ReadNumberIntoBufferAsync
ENTRY_POINT: 01711818
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_1;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonTextReader__ReadNumberIntoBufferAsync(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long unaff_x19;
  undefined8 unaff_x20;
  int iVar8;
  long *unaff_x22;
  long unaff_x23;
  
  *(undefined1 *)(unaff_x23 + 0xa3f) = 1;
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *unaff_x22;
  }
  if (**(char **)(lVar4 + 0xb8) == '\0') {
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if (lVar4 == 0) {
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_01711f1c;
      lVar4 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x50);
      *(long *)(unaff_x19 + 0x20) = lVar4;
      if (lVar4 == 0) goto LAB_01711f1c;
    }
    FUN_015fe250(lVar4,*(undefined8 *)
                        Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetException__
                 ,0);
  }
  lVar4 = *(long *)(unaff_x19 + 0x60);
  if (lVar4 == 0) {
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_01711f1c;
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20);
    *(long *)(unaff_x19 + 0x60) = lVar4;
    if (lVar4 == 0) goto LAB_01711f1c;
  }
  puVar2 = Method_System_Globalization_ThaiBuddhistCalendar_set_TwoDigitYearMax__;
  puVar1 = Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__;
  uVar5 = FUN_01604318(lVar4,0);
  uVar6 = FUN_015fe7e8(*(undefined8 *)puVar2,uVar5,0);
  if ((uVar6 & 1) != 0) {
    FUN_01711fc0();
  }
  uVar6 = FUN_015fe7e8(*(undefined8 *)puVar1,uVar5,0);
  if ((uVar6 & 1) != 0) {
    FUN_01711fc0();
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (*(char *)(unaff_x23 + 0xa3f) == '\0') {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__);
    *(undefined1 *)(unaff_x23 + 0xa3f) = 1;
  }
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *unaff_x22;
  }
  if ((((**(char **)(lVar4 + 0xb8) == '\0') &&
       (uVar6 = FUN_015fe7e8(*(undefined8 *)MedleyBossPhase1_<DestroyRingsCoroutine>d__30_TypeInfo,
                             uVar5,0), (uVar6 & 1) != 0)) &&
      (uVar6 = FUN_015fe7e8(*(undefined8 *)StringLiteral_8592,uVar5,0), (uVar6 & 1) != 0)) &&
     (uVar6 = FUN_015fe7e8(*(undefined8 *)PTR_DAT_033ecd20,uVar5,0), (uVar6 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x60) == 0) {
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_01711f1c;
      *(undefined8 *)(unaff_x19 + 0x60) = *(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x20);
    }
    FUN_01711fc0();
  }
  if (*(long *)(unaff_x19 + 0x38) == 0) {
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_01711f1c;
    *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x10);
  }
  FUN_01711fc0();
  if (*(long *)(unaff_x19 + 0x40) == 0) {
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_01711f1c;
    *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x18);
  }
  FUN_01711fc0();
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (*(char *)(unaff_x23 + 0xa3f) == '\0') {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__);
    *(undefined1 *)(unaff_x23 + 0xa3f) = 1;
  }
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *unaff_x22;
  }
  if (**(char **)(lVar4 + 0xb8) == '\0') {
    FUN_017122bc();
    lVar4 = *unaff_x22;
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (*(char *)(unaff_x23 + 0xa3f) == '\0') {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__);
    *(undefined1 *)(unaff_x23 + 0xa3f) = 1;
  }
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *unaff_x22;
  }
  if (**(char **)(lVar4 + 0xb8) == '\0') {
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if (lVar4 == 0) {
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_01711f1c;
      lVar4 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x50);
      *(long *)(unaff_x19 + 0x20) = lVar4;
      if (lVar4 == 0) goto LAB_01711f1c;
    }
    FUN_015fe250(lVar4,*(undefined8 *)StringLiteral_8902,0);
  }
  FUN_01711fc0();
  FUN_0170f380();
  FUN_01711fc0();
  puVar1 = Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_SetResult__;
  FUN_01712b98();
  iVar8 = 1;
  do {
    FUN_017108b8();
    FUN_01711fc0();
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0xe);
  if (*(uint *)(unaff_x19 + 0x144) == 0xffffffff) {
    uVar6 = FUN_01710fb8();
    if ((uVar6 & 1) != 0) goto LAB_01711bec;
  }
  else if ((*(uint *)(unaff_x19 + 0x144) & 1) != 0) {
LAB_01711bec:
    iVar8 = 1;
    do {
      FUN_0170fd38();
      FUN_01711fc0();
      iVar8 = iVar8 + 1;
    } while (iVar8 != 0xe);
  }
  uVar3 = *(uint *)(unaff_x19 + 0x144);
  if (uVar3 == 0xffffffff) {
    uVar3 = FUN_01710fb8();
  }
  if ((uVar3 >> 1 & 1) != 0) {
    iVar8 = 1;
    do {
      FUN_0170fd38();
      FUN_01711fc0();
      iVar8 = iVar8 + 1;
    } while (iVar8 != 0xe);
  }
  iVar8 = 0;
  do {
    FUN_017107b8();
    FUN_01711fc0();
    FUN_0170ff8c();
    FUN_01711fc0();
    iVar8 = iVar8 + 1;
  } while (iVar8 != 7);
  plVar7 = *(long **)(unaff_x19 + 0x78);
  if ((plVar7 != (long *)0x0) &&
     (lVar4 = (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240)), lVar4 != 0))
  {
    if (0 < *(int *)(lVar4 + 0x18)) {
      iVar8 = 1;
      do {
        Newtonsoft_Json_JsonSerializerSettings__set_DateFormatString();
        FUN_01711fc0();
        FUN_0170f240();
        FUN_01711fc0();
        iVar8 = iVar8 + 1;
      } while (iVar8 <= *(int *)(lVar4 + 0x18));
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar4 = FUN_0170ea70();
    if (lVar4 != 0) {
      if (*(long *)(lVar4 + 0x38) == 0) {
        if (*(long *)(lVar4 + 0x10) == 0) goto LAB_01711f1c;
        *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x10);
      }
      FUN_01711fc0();
      lVar4 = FUN_0170ea70();
      if (lVar4 != 0) {
        if (*(long *)(lVar4 + 0x40) == 0) {
          if (*(long *)(lVar4 + 0x10) == 0) goto LAB_01711f1c;
          *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x18);
        }
        iVar8 = 1;
        FUN_01711fc0();
        do {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar4 = FUN_0170ea70();
          if (lVar4 == 0) goto LAB_01711f1c;
          FUN_017109bc(lVar4,iVar8);
          FUN_01711fc0();
          lVar4 = FUN_0170ea70();
          if (lVar4 == 0) goto LAB_01711f1c;
          FUN_017108b8(lVar4,iVar8);
          FUN_01711fc0();
          iVar8 = iVar8 + 1;
        } while (iVar8 != 0xd);
        iVar8 = 0;
        do {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar4 = FUN_0170ea70();
          if (lVar4 == 0) goto LAB_01711f1c;
          FUN_017107b8(lVar4,iVar8);
          FUN_01711fc0();
          lVar4 = FUN_0170ea70();
          if (lVar4 == 0) goto LAB_01711f1c;
          FUN_0170ff8c(lVar4,iVar8);
          FUN_01711fc0();
          iVar8 = iVar8 + 1;
        } while (iVar8 != 7);
        lVar4 = FUN_0170f32c();
        if (lVar4 != 0) {
          uVar6 = 0;
          do {
            if ((long)*(int *)(lVar4 + 0x18) <= (long)uVar6) {
              FUN_01711fc0();
              FUN_01711fc0();
              FUN_01711fc0();
              FUN_01711fc0();
              FUN_01711fc0();
              *(undefined8 *)(unaff_x19 + 0x158) = unaff_x20;
              return;
            }
            lVar4 = FUN_0170f32c();
            if (lVar4 == 0) break;
            if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            uVar6 = uVar6 + 1;
            FUN_01711fc0();
            lVar4 = FUN_0170f32c();
          } while (lVar4 != 0);
        }
      }
    }
  }
LAB_01711f1c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


