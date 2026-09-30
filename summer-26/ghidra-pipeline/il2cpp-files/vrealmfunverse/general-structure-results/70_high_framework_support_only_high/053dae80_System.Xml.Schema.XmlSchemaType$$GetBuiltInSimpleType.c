/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaType$$GetBuiltInSimpleType
ENTRY_POINT: 053dae80
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Xml_Schema_XmlSchemaType__GetBuiltInSimpleType(long param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  long unaff_x26;
  ulong unaff_x29;
  
  do {
    *(undefined8 *)(param_1 + 0x20) = unaff_x23;
    thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x20),param_2);
LAB_053daea4:
    do {
      uVar5 = (ulong)*(uint *)(unaff_x22 + 0x18);
      unaff_x29 = unaff_x29 + 1;
      if ((long)(int)*(uint *)(unaff_x22 + 0x18) <= (long)unaff_x29) {
        do {
          do {
            if (*(int *)(unaff_x21 + 0x20) < 1) {
              return;
            }
            plVar2 = (long *)FUN_03c7e738();
            uVar5 = FUN_0452dfb4();
            if ((uVar5 & 1) != 0) {
              uVar3 = thunk_FUN_02ba3594(PTR_DAT_06313048);
              uVar3 = FUN_02b3c908(uVar3,1);
              uVar4 = FUN_053d6158(plVar2);
              FUN_0275e13c(uVar3);
              FUN_0275a400(uVar3,uVar4);
              FUN_0275a434(uVar3,0,uVar4);
              uVar4 = thunk_FUN_02ba3594(OVRPlugin_OverlayShape_TypeInfo);
              uVar3 = FUN_0540ce80(uVar4,uVar3,0);
              thunk_FUN_02ba3594(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
              uVar4 = thunk_FUN_02b79644();
              FUN_053f0c5c(uVar4,uVar3,0);
              uVar3 = FUN_0540c738(uVar4,0);
              uVar4 = thunk_FUN_02ba3594(OVRPlugin_PoseStatef_TypeInfo);
                    /* WARNING: Subroutine does not return */
              FUN_02b3c988(uVar3,uVar4);
            }
            if (plVar2 == (long *)0x0) goto LAB_053dacf0;
            uVar5 = (**(code **)(*plVar2 + 0x3b8))(plVar2,*(undefined8 *)(*plVar2 + 0x3c0));
          } while ((uVar5 & 1) == 0);
          unaff_x22 = (**(code **)(*plVar2 + 0x458))(plVar2,*(undefined8 *)(*plVar2 + 0x460));
          if (unaff_x22 == 0) goto LAB_053dacf0;
        } while ((int)*(ulong *)(unaff_x22 + 0x18) < 1);
        unaff_x29 = 0;
        uVar5 = *(ulong *)(unaff_x22 + 0x18) & 0xffffffff;
        unaff_x26 = unaff_x22 + 0x20;
      }
      if (uVar5 <= unaff_x29) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      param_2 = *(undefined8 *)(unaff_x26 + unaff_x29 * 8);
      uVar5 = FUN_037a68d4();
    } while ((uVar5 & 1) != 0);
    FUN_03c7e5a8();
    param_1 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (param_1 == 0) {
LAB_053dacf0:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (*(uint *)(param_1 + 0x18) <= uVar1) {
      FUN_037a6538();
      goto LAB_053daea4;
    }
    param_1 = param_1 + (long)(int)uVar1 * 8;
    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
    unaff_x23 = param_2;
  } while( true );
}


