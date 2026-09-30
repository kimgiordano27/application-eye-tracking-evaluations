/*
FUNCTION_NAME: OVR.OpenVR.IVROverlay._CloseMessageOverlay$$EndInvoke
ENTRY_POINT: 037118b4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVR_OpenVR_IVROverlay__CloseMessageOverlay__EndInvoke(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x21;
  undefined8 *puVar10;
  long *plVar11;
  long unaff_x22;
  ulong uVar12;
  long unaff_x26;
  long *plVar13;
  
  puVar10 = *(undefined8 **)(unaff_x21 + 0x1b0);
  plVar13 = *(long **)(unaff_x26 + 0xc0);
  if ((*(byte *)(unaff_x22 + 0xd7) & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_UnitCategory_<get_ancestors>d__17_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01efb3a4(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass62_0_<DOLocalJump>b__0__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_UnitCategory_<AndAncestors>d__18_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_UnitPreservation_<>c_<Preserve>b__8_0__);
    thunk_FUN_01efb3a4(
                      Method_Meta_Voice_Audio_UnityAudioClipStream_<>c__DisplayClass18_0_<GetCachedClip>b__0__
                      );
    thunk_FUN_01efb3a4(
                      Method_Sirenix_Serialization_UnitySerializationUtility_<>c_<SerializePrefabModifications>b__34_0__
                      );
    *(undefined1 *)(unaff_x22 + 0xd7) = 1;
  }
  puVar3 = 
  Method_Sirenix_Serialization_UnitySerializationUtility_<>c_<SerializePrefabModifications>b__34_0__
  ;
  puVar2 = Method_Meta_Voice_Audio_UnityAudioClipStream_<>c__DisplayClass18_0_<GetCachedClip>b__0__;
  FUN_02a85830(param_1,*puVar10);
  if (*(int *)(*plVar13 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = FUN_036eb384(param_2,0);
  uVar4 = FUN_035c41ec(uVar5,0);
  lVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
  FUN_030f23f0(lVar6,(ulong)uVar4,*(undefined8 *)puVar2);
  plVar11 = (long *)(param_1 + 0x10);
  *plVar11 = lVar6;
  thunk_FUN_01f51358(plVar11,lVar6);
  puVar3 = Method_Unity_VisualScripting_UnitPreservation_<>c_<Preserve>b__8_0__;
  puVar2 = 
  Method_Unity_VisualScripting_UnitCategory_<get_ancestors>d__17_System_Collections_IEnumerator_Reset__
  ;
  if (0 < (int)uVar4) {
    uVar12 = 0;
    do {
      lVar6 = *plVar11;
      uVar5 = FUN_035c41f0(uVar12,0);
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*plVar13);
      }
      uVar5 = FUN_036eb22c(param_2,uVar5,0);
      uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
      FUN_037117dc(uVar7,uVar5);
      if (lVar6 == 0) {
LAB_03711ab4:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *(long *)(lVar6 + 0x10);
      lVar9 = *(long *)puVar3;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_03711ab4;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        puVar10 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
        *puVar10 = uVar7;
        thunk_FUN_01f51358(puVar10,uVar7);
      }
      else {
        FUN_030f2bb4(lVar6,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      uVar12 = uVar12 + 1;
    } while (uVar4 != uVar12);
  }
  if (*(int *)(*plVar13 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = FUN_036eb2b0(param_2,0);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x18),uVar5);
  return;
}


