/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$ParseUnquotedPropertyAsync
ENTRY_POINT: 017118f4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_1;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonTextReader__ParseUnquotedPropertyAsync(void)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  int iVar6;
  long *unaff_x22;
  long unaff_x23;
  
  FUN_01711fc0();
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (*(char *)(unaff_x23 + 0xa3f) == '\0') {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__);
    *(undefined1 *)(unaff_x23 + 0xa3f) = 1;
  }
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar3 = *unaff_x22;
  }
  if ((((**(char **)(lVar3 + 0xb8) == '\0') &&
       (uVar4 = FUN_015fe7e8(*(undefined8 *)MedleyBossPhase1_<DestroyRingsCoroutine>d__30_TypeInfo),
       (uVar4 & 1) != 0)) &&
      (uVar4 = FUN_015fe7e8(*(undefined8 *)StringLiteral_8592), (uVar4 & 1) != 0)) &&
     (uVar4 = FUN_015fe7e8(*(undefined8 *)PTR_DAT_033ecd20), (uVar4 & 1) != 0)) {
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
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar3 = *unaff_x22;
  }
  if (**(char **)(lVar3 + 0xb8) == '\0') {
    FUN_017122bc();
    lVar3 = *unaff_x22;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (*(char *)(unaff_x23 + 0xa3f) == '\0') {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__);
    *(undefined1 *)(unaff_x23 + 0xa3f) = 1;
  }
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar3 = *unaff_x22;
  }
  if (**(char **)(lVar3 + 0xb8) == '\0') {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if (lVar3 == 0) {
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_01711f1c;
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x50);
      *(long *)(unaff_x19 + 0x20) = lVar3;
      if (lVar3 == 0) goto LAB_01711f1c;
    }
    FUN_015fe250(lVar3,*(undefined8 *)StringLiteral_8902,0);
  }
  FUN_01711fc0();
  FUN_0170f380();
  FUN_01711fc0();
  puVar1 = Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_SetResult__;
  FUN_01712b98();
  iVar6 = 1;
  do {
    FUN_017108b8();
    FUN_01711fc0();
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0xe);
  if (*(uint *)(unaff_x19 + 0x144) == 0xffffffff) {
    uVar4 = FUN_01710fb8();
    if ((uVar4 & 1) != 0) goto LAB_01711bec;
  }
  else if ((*(uint *)(unaff_x19 + 0x144) & 1) != 0) {
LAB_01711bec:
    iVar6 = 1;
    do {
      FUN_0170fd38();
      FUN_01711fc0();
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0xe);
  }
  uVar2 = *(uint *)(unaff_x19 + 0x144);
  if (uVar2 == 0xffffffff) {
    uVar2 = FUN_01710fb8();
  }
  if ((uVar2 >> 1 & 1) != 0) {
    iVar6 = 1;
    do {
      FUN_0170fd38();
      FUN_01711fc0();
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0xe);
  }
  iVar6 = 0;
  do {
    FUN_017107b8();
    FUN_01711fc0();
    FUN_0170ff8c();
    FUN_01711fc0();
    iVar6 = iVar6 + 1;
  } while (iVar6 != 7);
  plVar5 = *(long **)(unaff_x19 + 0x78);
  if ((plVar5 != (long *)0x0) &&
     (lVar3 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240)), lVar3 != 0))
  {
    if (0 < *(int *)(lVar3 + 0x18)) {
      iVar6 = 1;
      do {
        Newtonsoft_Json_JsonSerializerSettings__set_DateFormatString();
        FUN_01711fc0();
        FUN_0170f240();
        FUN_01711fc0();
        iVar6 = iVar6 + 1;
      } while (iVar6 <= *(int *)(lVar3 + 0x18));
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar3 = FUN_0170ea70();
    if (lVar3 != 0) {
      if (*(long *)(lVar3 + 0x38) == 0) {
        if (*(long *)(lVar3 + 0x10) == 0) goto LAB_01711f1c;
        *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x10);
      }
      FUN_01711fc0();
      lVar3 = FUN_0170ea70();
      if (lVar3 != 0) {
        if (*(long *)(lVar3 + 0x40) == 0) {
          if (*(long *)(lVar3 + 0x10) == 0) goto LAB_01711f1c;
          *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x18);
        }
        iVar6 = 1;
        FUN_01711fc0();
        do {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar3 = FUN_0170ea70();
          if (lVar3 == 0) goto LAB_01711f1c;
          FUN_017109bc(lVar3,iVar6);
          FUN_01711fc0();
          lVar3 = FUN_0170ea70();
          if (lVar3 == 0) goto LAB_01711f1c;
          FUN_017108b8(lVar3,iVar6);
          FUN_01711fc0();
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0xd);
        iVar6 = 0;
        do {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar3 = FUN_0170ea70();
          if (lVar3 == 0) goto LAB_01711f1c;
          FUN_017107b8(lVar3,iVar6);
          FUN_01711fc0();
          lVar3 = FUN_0170ea70();
          if (lVar3 == 0) goto LAB_01711f1c;
          FUN_0170ff8c(lVar3,iVar6);
          FUN_01711fc0();
          iVar6 = iVar6 + 1;
        } while (iVar6 != 7);
        lVar3 = FUN_0170f32c();
        if (lVar3 != 0) {
          uVar4 = 0;
          do {
            if ((long)*(int *)(lVar3 + 0x18) <= (long)uVar4) {
              FUN_01711fc0();
              FUN_01711fc0();
              FUN_01711fc0();
              FUN_01711fc0();
              FUN_01711fc0();
              *(undefined8 *)(unaff_x19 + 0x158) = unaff_x20;
              return;
            }
            lVar3 = FUN_0170f32c();
            if (lVar3 == 0) break;
            if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            uVar4 = uVar4 + 1;
            FUN_01711fc0();
            lVar3 = FUN_0170f32c();
          } while (lVar3 != 0);
        }
      }
    }
  }
LAB_01711f1c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


