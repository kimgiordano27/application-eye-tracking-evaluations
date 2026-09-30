/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaXPath$$set_XPath
ENTRY_POINT: 053cfcc4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 93
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_18;ray_or_cast_sink_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void System_Xml_Schema_XmlSchemaXPath__set_XPath(void)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 uStack0000000000000008;
  undefined1 uStack000000000000000c;
  byte bStack0000000000000010;
  undefined1 uStack0000000000000014;
  long in_stack_00000018;
  
  FUN_02b3c81c(OVRPlugin_OVRP_1_115_0_TypeInfo);
  FUN_02b3c81c(OVRPlugin_OVRP_1_116_0_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x9b8) = 1;
  in_stack_00000018 = 0;
  uVar2 = FUN_053db608();
  lVar7 = *(long *)(unaff_x20 + 0x48);
  if (lVar7 == 0) {
    if ((uVar2 & 1) == 0) goto System_Xml_Schema_XmlSchemaInfo__get_HasDefaultValue;
    if (in_stack_00000018 == 0) goto LAB_053d0050;
    uVar6 = 0;
    if (*(char *)(in_stack_00000018 + 0x22) == '\0') goto LAB_053d0038;
  }
  else {
    if ((uVar2 & 1) != 0) {
      if (in_stack_00000018 == 0) goto LAB_053d0050;
      if (*(char *)(in_stack_00000018 + 0x23) != '\0') {
        uVar2 = System_Xml_Schema_XmlSchemaSimpleTypeList__get_ItemTypeName(lVar7,0);
        if ((uVar2 & 1) == 0) {
          if (in_stack_00000018 == 0) goto LAB_053d0050;
          uVar6 = 0;
          if (*(char *)(in_stack_00000018 + 0x22) == '\0') goto LAB_053d0038;
        }
        else {
          if (in_stack_00000018 == 0) goto LAB_053d0050;
          if (*(char *)(in_stack_00000018 + 0x22) != '\0') goto LAB_053cfd60;
        }
        plVar3 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,4);
        lVar7 = FUN_053d6158();
        if (plVar3 != (long *)0x0) {
          if ((lVar7 != 0) &&
             (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
          goto LAB_053d0058;
          if ((int)plVar3[3] != 0) {
            plVar3[4] = lVar7;
            thunk_FUN_02bb0e9c(plVar3 + 4,lVar7);
            puVar1 = PTR_DAT_06312310;
            if (in_stack_00000018 == 0) goto LAB_053d0050;
            uStack0000000000000014 = *(undefined1 *)(in_stack_00000018 + 0x22);
            lVar7 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                              (*(undefined8 *)(PTR_DAT_06312310 + 0x28),(long)&stack0x00000010 + 4);
            if ((lVar7 != 0) &&
               (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
            goto LAB_053d0058;
            if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
              plVar3[5] = lVar7;
              thunk_FUN_02bb0e9c(plVar3 + 5,lVar7);
              if (*(long *)(unaff_x20 + 0x48) == 0) goto LAB_053d0050;
              uVar5 = FUN_053d7bb8(*(long *)(unaff_x20 + 0x48),0);
              lVar7 = FUN_053d6158(uVar5,0);
              if ((lVar7 != 0) &&
                 (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
              goto LAB_053d0058;
              if (2 < *(uint *)(plVar3 + 3)) {
                plVar3[6] = lVar7;
                thunk_FUN_02bb0e9c(plVar3 + 6,lVar7);
                if (*(long *)(unaff_x20 + 0x48) == 0) goto LAB_053d0050;
                bStack0000000000000010 =
                     System_Xml_Schema_XmlSchemaSimpleTypeList__get_ItemTypeName
                               (*(long *)(unaff_x20 + 0x48),0);
                bStack0000000000000010 = bStack0000000000000010 & 1;
                lVar7 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                  (*(undefined8 *)(puVar1 + 0x28),&stack0x00000010);
                if ((lVar7 != 0) &&
                   (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
                goto LAB_053d0058;
                if ((*(uint *)(plVar3 + 3) & 0xfffffffc) != 0) {
                  plVar3[7] = lVar7;
                  thunk_FUN_02bb0e9c(plVar3 + 7,lVar7);
                  FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_115_0_TypeInfo,plVar3,0);
                    /* WARNING: Subroutine does not return */
                  FUN_053d7134();
                }
              }
            }
          }
          goto LAB_053d0054;
        }
        goto LAB_053d0050;
      }
    }
    uVar2 = System_Xml_Schema_XmlSchemaSimpleTypeList__get_ItemTypeName(lVar7,0);
    if ((uVar2 & 1) == 0) {
System_Xml_Schema_XmlSchemaInfo__get_HasDefaultValue:
      uVar6 = 0;
      goto LAB_053d0038;
    }
  }
LAB_053cfd60:
  if (unaff_x19 != 0) {
    uVar2 = FUN_04d957a4();
    if ((uVar2 & 1) == 0) {
      uVar6 = 1;
LAB_053d0038:
      *(undefined1 *)(unaff_x20 + 0x20) = uVar6;
      return;
    }
    plVar3 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,3);
    lVar7 = FUN_053d6158();
    if (plVar3 != (long *)0x0) {
      if ((lVar7 != 0) &&
         (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
LAB_053d0058:
        uVar5 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar5,0);
      }
      if ((int)plVar3[3] != 0) {
        plVar3[4] = lVar7;
        thunk_FUN_02bb0e9c(plVar3 + 4,lVar7);
        puVar1 = PTR_DAT_06312310;
        uStack000000000000000c = 1;
        lVar7 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)(PTR_DAT_06312310 + 0x28),(long)&stack0x00000008 + 4);
        if ((lVar7 != 0) &&
           (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
        goto LAB_053d0058;
        if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
          plVar3[5] = lVar7;
          thunk_FUN_02bb0e9c(plVar3 + 5,lVar7);
          uStack0000000000000008 = 0;
          lVar7 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                            (*(undefined8 *)(puVar1 + 0x28),&stack0x00000008);
          if ((lVar7 != 0) &&
             (lVar4 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
          goto LAB_053d0058;
          if (2 < *(uint *)(plVar3 + 3)) {
            plVar3[6] = lVar7;
            thunk_FUN_02bb0e9c(plVar3 + 6,lVar7);
            FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_116_0_TypeInfo,plVar3,0);
                    /* WARNING: Subroutine does not return */
            FUN_053d7134();
          }
        }
      }
LAB_053d0054:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
  }
LAB_053d0050:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


