/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaSubstitutionGroup$$.ctor
ENTRY_POINT: 053dac88
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


void System_Xml_Schema_XmlSchemaSubstitutionGroup___ctor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long *unaff_x22;
  undefined8 uVar17;
  long unaff_x26;
  undefined8 *puVar18;
  
  puVar7 = OVRPlugin_OpenXREventDelegateType_TypeInfo;
  puVar6 = OVRPlugin_OVRP_1_99_0_TypeInfo;
  puVar5 = OVRPlugin_OVRP_1_98_0_TypeInfo;
  puVar4 = PTR_DAT_063342f0;
  puVar3 = PTR_DAT_06324178;
  puVar2 = PTR_DAT_0631feb0;
                    /* try { // try from 053dac94 to 054daceb has its CatchHandler @ 053dac3c */
  puVar18 = *(undefined8 **)(unaff_x26 + 0x170);
  do {
    uVar8 = FUN_04d952d0(unaff_x22,0);
    if ((uVar8 & 1) == 0) {
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053dac7c with catch @ 053dacf8
                       catch(type#1 @ 05fbf508) { ... } // from try @ 053dacec with catch @ 053dacf8
                        */
      lVar9 = thunk_FUN_02b79644(*puVar18);
      FUN_037a5cd0(lVar9,*(undefined8 *)puVar3);
      lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
                    /* try { // try from 053dad14 to 054dad17 has its CatchHandler @ 053dad20 */
      FUN_03c7e090(lVar10,*(undefined8 *)puVar6);
                    /* catch() { ... } // from try @ 053dad14 with catch @ 053dad20 */
                    /* try { // try from 053dad24 to 054dad2b has its CatchHandler @ 053dad34 */
                    /* try { // try from 053dad2c to 054dad37 has its CatchHandler @ 053dac3c */
      if ((lVar10 != 0) && (FUN_03c7e5a8(lVar10,unaff_x22,*(undefined8 *)puVar5), lVar9 != 0)) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 053dad24 with catch @ 053dad34
                        */
        lVar13 = *(long *)(lVar9 + 0x10);
        lVar15 = *(long *)puVar2;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar13 != 0) {
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            plVar11 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
            *plVar11 = (long)unaff_x22;
            thunk_FUN_02bb0e9c(plVar11,unaff_x22);
          }
          else {
            FUN_037a6538(lVar9,unaff_x22,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
          if (*(int *)(lVar10 + 0x20) < 1) {
            return;
          }
          goto LAB_053dad9c;
        }
      }
      break;
    }
    unaff_x22 = (long *)(**(code **)(*unaff_x22 + 0x418))
                                  (unaff_x22,*(undefined8 *)(*unaff_x22 + 0x420));
                    /* try { // try from 053dacec to 054dacef has its CatchHandler @ 053dacf8 */
  } while (unaff_x22 != (long *)0x0);
LAB_053dacf0:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 053dacf0 to 054dad13 has its CatchHandler @ 053dac3c */
  FUN_02b3cac4();
LAB_053dad9c:
  plVar11 = (long *)FUN_03c7e738(lVar10,*(undefined8 *)OVRPlugin_OVRP_1_97_0_TypeInfo);
  uVar8 = FUN_0452dfb4();
  if ((uVar8 & 1) != 0) {
    uVar17 = thunk_FUN_02ba3594(PTR_DAT_06313048);
    uVar17 = FUN_02b3c908(uVar17,1);
    uVar12 = FUN_053d6158(plVar11);
    FUN_0275e13c(uVar17);
    FUN_0275a400(uVar17,uVar12);
    FUN_0275a434(uVar17,0,uVar12);
    uVar12 = thunk_FUN_02ba3594(OVRPlugin_OverlayShape_TypeInfo);
    uVar17 = FUN_0540ce80(uVar12,uVar17,0);
    thunk_FUN_02ba3594(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
    uVar12 = thunk_FUN_02b79644();
    FUN_053f0c5c(uVar12,uVar17,0);
    uVar17 = FUN_0540c738(uVar12,0);
    uVar12 = thunk_FUN_02ba3594(OVRPlugin_PoseStatef_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar17,uVar12);
  }
  if (plVar11 == (long *)0x0) goto LAB_053dacf0;
  uVar8 = (**(code **)(*plVar11 + 0x3b8))(plVar11,*(undefined8 *)(*plVar11 + 0x3c0));
  if ((uVar8 & 1) != 0) {
    lVar13 = (**(code **)(*plVar11 + 0x458))(plVar11,*(undefined8 *)(*plVar11 + 0x460));
    if (lVar13 == 0) goto LAB_053dacf0;
    if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
      uVar8 = 0;
      uVar14 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
      do {
        if (uVar14 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        uVar17 = *(undefined8 *)(lVar13 + 0x20 + uVar8 * 8);
        uVar14 = FUN_037a68d4(lVar9,uVar17,*(undefined8 *)puVar4);
        if ((uVar14 & 1) == 0) {
          FUN_03c7e5a8(lVar10,uVar17,*(undefined8 *)puVar5);
          lVar15 = *(long *)(lVar9 + 0x10);
          lVar16 = *(long *)puVar2;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar15 == 0) goto LAB_053dacf0;
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            puVar18 = (undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
            *puVar18 = uVar17;
            thunk_FUN_02bb0e9c(puVar18,uVar17);
          }
          else {
            FUN_037a6538(lVar9,uVar17,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar14 = (ulong)*(uint *)(lVar13 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar13 + 0x18));
    }
  }
  if (*(int *)(lVar10 + 0x20) < 1) {
    return;
  }
  goto LAB_053dad9c;
}


