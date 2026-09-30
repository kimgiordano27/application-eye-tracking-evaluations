/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaType$$GetBuiltInSimpleType
ENTRY_POINT: 053dada8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ray_or_cast_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Xml_Schema_XmlSchemaType__GetBuiltInSimpleType(void)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar9;
  
  while( true ) {
    plVar2 = (long *)FUN_03c7e738();
    uVar3 = FUN_0452dfb4();
    if ((uVar3 & 1) != 0) {
      uVar9 = thunk_FUN_02ba3594(PTR_DAT_06313048);
      uVar9 = FUN_02b3c908(uVar9,1);
      uVar6 = FUN_053d6158(plVar2);
      FUN_0275e13c(uVar9);
      FUN_0275a400(uVar9,uVar6);
      FUN_0275a434(uVar9,0,uVar6);
      uVar6 = thunk_FUN_02ba3594(OVRPlugin_OverlayShape_TypeInfo);
      uVar9 = FUN_0540ce80(uVar6,uVar9,0);
      thunk_FUN_02ba3594(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
      uVar6 = thunk_FUN_02b79644();
      FUN_053f0c5c(uVar6,uVar9,0);
      uVar9 = FUN_0540c738(uVar6,0);
      uVar6 = thunk_FUN_02ba3594(OVRPlugin_PoseStatef_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar9,uVar6);
    }
    if (plVar2 == (long *)0x0) break;
                    /* try { // try from 053daddc to 054dafc3 has its CatchHandler @ 053daddc
                       catch() { ... } // from try @ 053daddc with catch @ 053daddc
                       catch() { ... } // from try @ 053dafe0 with catch @ 053daddc
                       catch() { ... } // from try @ 053db170 with catch @ 053daddc
                       catch() { ... } // from try @ 053db1b4 with catch @ 053daddc
                       catch() { ... } // from try @ 053db1e0 with catch @ 053daddc */
    uVar3 = (**(code **)(*plVar2 + 0x3b8))(plVar2,*(undefined8 *)(*plVar2 + 0x3c0));
    if ((uVar3 & 1) != 0) {
      lVar4 = (**(code **)(*plVar2 + 0x458))(plVar2,*(undefined8 *)(*plVar2 + 0x460));
      if (lVar4 == 0) break;
      if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
        uVar3 = 0;
        uVar7 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
        do {
          if (uVar7 <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          uVar9 = *(undefined8 *)(lVar4 + 0x20 + uVar3 * 8);
          uVar7 = FUN_037a68d4();
          if ((uVar7 & 1) == 0) {
            FUN_03c7e5a8();
            lVar8 = *(long *)(unaff_x20 + 0x10);
            *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
            if (lVar8 == 0) goto LAB_053dacf0;
            uVar1 = *(uint *)(unaff_x20 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
              puVar5 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
              *puVar5 = uVar9;
              thunk_FUN_02bb0e9c(puVar5,uVar9);
            }
            else {
              FUN_037a6538();
            }
          }
          uVar7 = (ulong)*(uint *)(lVar4 + 0x18);
          uVar3 = uVar3 + 1;
        } while ((long)uVar3 < (long)(int)*(uint *)(lVar4 + 0x18));
      }
    }
    if (*(int *)(unaff_x21 + 0x20) < 1) {
      return;
    }
  }
LAB_053dacf0:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


