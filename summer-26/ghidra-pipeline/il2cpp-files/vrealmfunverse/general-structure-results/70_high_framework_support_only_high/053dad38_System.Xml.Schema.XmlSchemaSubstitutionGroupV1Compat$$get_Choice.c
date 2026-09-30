/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaSubstitutionGroupV1Compat$$get_Choice
ENTRY_POINT: 053dad38
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;ray_or_cast_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Xml_Schema_XmlSchemaSubstitutionGroupV1Compat__get_Choice(void)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int in_w10;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar10;
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  *(int *)(unaff_x20 + 0x1c) = in_w10 + 1;
  if (lVar7 == 0) {
LAB_053dacf0:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar2 = *(uint *)(unaff_x20 + 0x18);
  if (uVar2 < *(uint *)(lVar7 + 0x18)) {
    *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
    *(undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = unaff_x22;
    thunk_FUN_02bb0e9c();
  }
  else {
    FUN_037a6538();
  }
  iVar1 = *(int *)(unaff_x21 + 0x20);
  do {
    if (iVar1 < 1) {
      return;
    }
    plVar3 = (long *)FUN_03c7e738();
    uVar4 = FUN_0452dfb4();
    if ((uVar4 & 1) != 0) {
      uVar10 = thunk_FUN_02ba3594(PTR_DAT_06313048);
      uVar10 = FUN_02b3c908(uVar10,1);
      uVar6 = FUN_053d6158(plVar3);
      FUN_0275e13c(uVar10);
      FUN_0275a400(uVar10,uVar6);
      FUN_0275a434(uVar10,0,uVar6);
      uVar6 = thunk_FUN_02ba3594(OVRPlugin_OverlayShape_TypeInfo);
      uVar10 = FUN_0540ce80(uVar6,uVar10,0);
      thunk_FUN_02ba3594(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
      uVar6 = thunk_FUN_02b79644();
      FUN_053f0c5c(uVar6,uVar10,0);
      uVar10 = FUN_0540c738(uVar6,0);
      uVar6 = thunk_FUN_02ba3594(OVRPlugin_PoseStatef_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar10,uVar6);
    }
    if (plVar3 == (long *)0x0) goto LAB_053dacf0;
    uVar4 = (**(code **)(*plVar3 + 0x3b8))(plVar3,*(undefined8 *)(*plVar3 + 0x3c0));
    if ((uVar4 & 1) != 0) {
      lVar7 = (**(code **)(*plVar3 + 0x458))(plVar3,*(undefined8 *)(*plVar3 + 0x460));
      if (lVar7 == 0) goto LAB_053dacf0;
      if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
        uVar4 = 0;
        uVar8 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
        do {
          if (uVar8 <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          uVar10 = *(undefined8 *)(lVar7 + 0x20 + uVar4 * 8);
          uVar8 = FUN_037a68d4();
          if ((uVar8 & 1) == 0) {
            FUN_03c7e5a8();
            lVar9 = *(long *)(unaff_x20 + 0x10);
            *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
            if (lVar9 == 0) goto LAB_053dacf0;
            uVar2 = *(uint *)(unaff_x20 + 0x18);
            if (uVar2 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
              puVar5 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
              *puVar5 = uVar10;
              thunk_FUN_02bb0e9c(puVar5,uVar10);
            }
            else {
              FUN_037a6538();
            }
          }
          uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
          uVar4 = uVar4 + 1;
        } while ((long)uVar4 < (long)(int)*(uint *)(lVar7 + 0x18));
      }
    }
    iVar1 = *(int *)(unaff_x21 + 0x20);
  } while( true );
}


