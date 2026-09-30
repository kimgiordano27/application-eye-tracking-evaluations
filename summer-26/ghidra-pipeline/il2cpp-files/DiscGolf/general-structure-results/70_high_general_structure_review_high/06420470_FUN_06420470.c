/*
FUNCTION_NAME: FUN_06420470
ENTRY_POINT: 06420470
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_4;telemetry_or_network_hits_10;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06420470(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  int iVar12;
  undefined1 auVar13 [16];
  
  if ((DAT_06dcca13 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fb930);
    FUN_02d965b8(Method_System_Xml_XmlTextWriter_ValidateName__);
    FUN_02d965b8(Method_System_Xml_XmlTextWriter_VerifyPrefixXml__);
    FUN_02d965b8(Method_Unity_Services_Vivox_vx_req_connector_create_t__ctor__);
    FUN_02d965b8(Method_Unity_Services_Vivox_vx_req_connector_mute_local_mic_t__ctor__);
    FUN_02d965b8(Method_Unity_Services_Vivox_vx_req_connector_mute_local_speaker_t__ctor__);
    FUN_02d965b8(Method_Unity_Services_Vivox_vx_req_session_set_participant_mute_for_me_t__ctor__);
    FUN_02d965b8(Method_Unity_Services_Vivox_vx_req_sessiongroup_add_session_t__ctor__);
    FUN_02d965b8(PTR_DAT_069fb990);
    FUN_02d965b8(Method_Unity_Services_Vivox_vx_req_sessiongroup_remove_session_t__ctor__);
    DAT_06dcca13 = 1;
  }
  plVar11 = (long *)(param_1 + 0xa0);
  lVar8 = *plVar11;
  if (lVar8 == 0) {
    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_Unity_Services_Vivox_vx_req_sessiongroup_add_session_t__ctor__
                              );
    FUN_041762e0(lVar8,*(undefined8 *)
                        Method_Unity_Services_Vivox_vx_req_connector_mute_local_mic_t__ctor__);
    *plVar11 = lVar8;
    LeanTween__value(plVar11,lVar8);
    lVar8 = *plVar11;
    if (lVar8 == 0) goto LAB_064206b4;
  }
  puVar6 = Method_Unity_Services_Vivox_vx_req_sessiongroup_remove_session_t__ctor__;
  puVar5 = Method_Unity_Services_Vivox_vx_req_session_set_participant_mute_for_me_t__ctor__;
  puVar4 = Method_Unity_Services_Vivox_vx_req_connector_create_t__ctor__;
  puVar3 = Method_System_Xml_XmlTextWriter_VerifyPrefixXml__;
  puVar2 = PTR_DAT_069fb990;
  puVar1 = PTR_DAT_069fb930;
  iVar12 = 0;
  do {
    if (*(int *)(lVar8 + 0x18) <= iVar12) {
      return;
    }
    auVar13 = FUN_04176878(lVar8,iVar12,*(undefined8 *)puVar5);
    plVar9 = auVar13._0_8_;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar10 = FUN_06350670(plVar9,0,0);
    if ((uVar10 & 1) == 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar10 = FUN_06350670(auVar13._8_8_,0,0);
      if ((uVar10 & 1) != 0) goto LAB_064205fc;
      if (plVar9 == (long *)0x0) break;
      uVar7 = (**(code **)(*plVar9 + 0x158))(plVar9,*(undefined8 *)(*plVar9 + 0x160));
      if (*(long *)(param_1 + 0x98) == 0) break;
      uVar10 = FUN_04d968ac(*(long *)(param_1 + 0x98),uVar7,*(undefined8 *)puVar3);
      if ((uVar10 & 1) == 0) {
        if (*(long *)(param_1 + 0x98) == 0) break;
        FUN_04d966b8(*(long *)(param_1 + 0x98),uVar7,auVar13._8_8_,
                     *(undefined8 *)Method_System_Xml_XmlTextWriter_ValidateName__);
      }
    }
    else {
LAB_064205fc:
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_06309d28(*(undefined8 *)puVar6,0);
      if (*plVar11 == 0) break;
      FUN_0417826c(*plVar11,iVar12,*(undefined8 *)puVar4);
      iVar12 = iVar12 + -1;
    }
    lVar8 = *plVar11;
    iVar12 = iVar12 + 1;
  } while (lVar8 != 0);
LAB_064206b4:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


