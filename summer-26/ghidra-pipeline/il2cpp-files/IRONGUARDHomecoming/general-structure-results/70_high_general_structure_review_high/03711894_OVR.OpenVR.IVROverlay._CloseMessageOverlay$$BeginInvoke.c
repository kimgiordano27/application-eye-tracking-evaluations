/*
FUNCTION_NAME: OVR.OpenVR.IVROverlay._CloseMessageOverlay$$BeginInvoke
ENTRY_POINT: 03711894
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


void OVR_OpenVR_IVROverlay__CloseMessageOverlay__BeginInvoke(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  
  puVar3 = 
  Method_Unity_VisualScripting_UnitCategory_<AndAncestors>d__18_System_Collections_IEnumerator_Reset__
  ;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 037115c8 with catch @ 03711894
                        */
  puVar2 = Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass62_0_<DOLocalJump>b__0__;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 037116e0 with catch @ 03711898
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0371175c with catch @ 0371189c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 037117d8 with catch @ 037118a0
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03711664 with catch @ 037118a4
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 037115e4 with catch @ 037118a8
                        */
  if ((DAT_048360d7 & 1) == 0) {
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
    DAT_048360d7 = 1;
  }
  puVar5 = 
  Method_Sirenix_Serialization_UnitySerializationUtility_<>c_<SerializePrefabModifications>b__34_0__
  ;
  puVar4 = Method_Meta_Voice_Audio_UnityAudioClipStream_<>c__DisplayClass18_0_<GetCachedClip>b__0__;
  FUN_02a85830(param_1,*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar7 = FUN_036eb384(param_2,0);
  uVar6 = FUN_035c41ec(uVar7,0);
  lVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
  FUN_030f23f0(lVar8,(ulong)uVar6,*(undefined8 *)puVar4);
  plVar13 = (long *)(param_1 + 0x10);
  *plVar13 = lVar8;
  thunk_FUN_01f51358(plVar13,lVar8);
  puVar4 = Method_Unity_VisualScripting_UnitPreservation_<>c_<Preserve>b__8_0__;
  puVar3 = 
  Method_Unity_VisualScripting_UnitCategory_<get_ancestors>d__17_System_Collections_IEnumerator_Reset__
  ;
  if (0 < (int)uVar6) {
    uVar14 = 0;
    do {
      lVar8 = *plVar13;
      uVar7 = FUN_035c41f0(uVar14,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar2);
      }
      uVar7 = FUN_036eb22c(param_2,uVar7,0);
      uVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
      FUN_037117dc(uVar9,uVar7);
      if (lVar8 == 0) {
LAB_03711ab4:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = *(long *)(lVar8 + 0x10);
      lVar12 = *(long *)puVar4;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar11 == 0) goto LAB_03711ab4;
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        puVar10 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
        *puVar10 = uVar9;
        thunk_FUN_01f51358(puVar10,uVar9);
      }
      else {
        FUN_030f2bb4(lVar8,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar14 = uVar14 + 1;
    } while (uVar6 != uVar14);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar7 = FUN_036eb2b0(param_2,0);
  *(undefined8 *)(param_1 + 0x18) = uVar7;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x18),uVar7);
  return;
}


