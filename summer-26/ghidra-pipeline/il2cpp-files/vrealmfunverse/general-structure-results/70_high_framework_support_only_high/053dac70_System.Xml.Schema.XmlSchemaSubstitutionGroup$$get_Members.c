/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaSubstitutionGroup$$get_Members
ENTRY_POINT: 053dac70
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_7;validity_or_gating_hits_8;ray_or_cast_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


void System_Xml_Schema_XmlSchemaSubstitutionGroup__get_Members(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long *unaff_x22;
  undefined8 uVar19;
  
  FUN_0452ddc0();
  puVar8 = OVRPlugin_OpenXREventDelegateType_TypeInfo;
  puVar7 = OVRPlugin_OVRP_1_99_0_TypeInfo;
  puVar6 = OVRPlugin_OVRP_1_98_0_TypeInfo;
  puVar5 = PTR_DAT_063342f0;
  puVar4 = PTR_DAT_06324178;
  puVar3 = PTR_DAT_06324170;
  puVar2 = PTR_DAT_0631feb0;
  for (; unaff_x22 != (long *)0x0;
      unaff_x22 = (long *)(**(code **)(*unaff_x22 + 0x418))
                                    (unaff_x22,*(undefined8 *)(*unaff_x22 + 0x420))) {
    uVar9 = FUN_04d952d0(unaff_x22,0);
    if ((uVar9 & 1) == 0) {
      lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
      FUN_037a5cd0(lVar10,*(undefined8 *)puVar4);
      lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
      FUN_03c7e090(lVar11,*(undefined8 *)puVar7);
      if ((lVar11 != 0) && (FUN_03c7e5a8(lVar11,unaff_x22,*(undefined8 *)puVar6), lVar10 != 0)) {
        lVar15 = *(long *)(lVar10 + 0x10);
        lVar17 = *(long *)puVar2;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar15 != 0) {
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            plVar12 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
            *plVar12 = (long)unaff_x22;
            thunk_FUN_02bb0e9c(plVar12,unaff_x22);
          }
          else {
            FUN_037a6538(lVar10,unaff_x22,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
          if (*(int *)(lVar11 + 0x20) < 1) {
            return;
          }
          goto LAB_053dad9c;
        }
      }
      break;
    }
  }
LAB_053dacf0:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
LAB_053dad9c:
  plVar12 = (long *)FUN_03c7e738(lVar11,*(undefined8 *)OVRPlugin_OVRP_1_97_0_TypeInfo);
  uVar9 = FUN_0452dfb4();
  if ((uVar9 & 1) != 0) {
    uVar19 = thunk_FUN_02ba3594(PTR_DAT_06313048);
    uVar19 = FUN_02b3c908(uVar19,1);
    uVar14 = FUN_053d6158(plVar12);
    FUN_0275e13c(uVar19);
    FUN_0275a400(uVar19,uVar14);
    FUN_0275a434(uVar19,0,uVar14);
    uVar14 = thunk_FUN_02ba3594(OVRPlugin_OverlayShape_TypeInfo);
    uVar19 = FUN_0540ce80(uVar14,uVar19,0);
    thunk_FUN_02ba3594(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
    uVar14 = thunk_FUN_02b79644();
    FUN_053f0c5c(uVar14,uVar19,0);
    uVar19 = FUN_0540c738(uVar14,0);
    uVar14 = thunk_FUN_02ba3594(OVRPlugin_PoseStatef_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar19,uVar14);
  }
  if (plVar12 == (long *)0x0) goto LAB_053dacf0;
  uVar9 = (**(code **)(*plVar12 + 0x3b8))(plVar12,*(undefined8 *)(*plVar12 + 0x3c0));
  if ((uVar9 & 1) != 0) {
    lVar15 = (**(code **)(*plVar12 + 0x458))(plVar12,*(undefined8 *)(*plVar12 + 0x460));
    if (lVar15 == 0) goto LAB_053dacf0;
    if (0 < (int)*(ulong *)(lVar15 + 0x18)) {
      uVar9 = 0;
      uVar16 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
      do {
        if (uVar16 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        uVar19 = *(undefined8 *)(lVar15 + 0x20 + uVar9 * 8);
        uVar16 = FUN_037a68d4(lVar10,uVar19,*(undefined8 *)puVar5);
        if ((uVar16 & 1) == 0) {
          FUN_03c7e5a8(lVar11,uVar19,*(undefined8 *)puVar6);
          lVar17 = *(long *)(lVar10 + 0x10);
          lVar18 = *(long *)puVar2;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar17 == 0) goto LAB_053dacf0;
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar17 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            puVar13 = (undefined8 *)(lVar17 + (long)(int)uVar1 * 8 + 0x20);
            *puVar13 = uVar19;
            thunk_FUN_02bb0e9c(puVar13,uVar19);
          }
          else {
            FUN_037a6538(lVar10,uVar19,
                         *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar16 = (ulong)*(uint *)(lVar15 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)*(uint *)(lVar15 + 0x18));
    }
  }
  if (*(int *)(lVar11 + 0x20) < 1) {
    return;
  }
  goto LAB_053dad9c;
}


