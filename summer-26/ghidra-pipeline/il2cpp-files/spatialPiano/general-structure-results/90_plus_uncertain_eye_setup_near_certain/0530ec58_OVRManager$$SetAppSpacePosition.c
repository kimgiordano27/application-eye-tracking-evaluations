/*
FUNCTION_NAME: OVRManager$$SetAppSpacePosition
ENTRY_POINT: 0530ec58
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetAppSpacePosition(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uStack000000000000000c;
  
  FUN_02f08768();
  FUN_02f08768(System_Xml_Schema_Datatype_nonPositiveInteger_TypeInfo);
  *(undefined1 *)(unaff_x22 + 0x19b) = 1;
  uStack000000000000000c = 0;
  auVar8 = FUN_0530fce0();
  puVar1 = System_Predicate<TextSpan>_TypeInfo;
  if (unaff_x20 != (long *)0x0) {
    lVar4 = *unaff_x20;
    lVar7 = *(long *)(unaff_x19 + 400);
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)System_Xml_Schema_Datatype_nonPositiveInteger_TypeInfo) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0530ecf0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02f421d0();
LAB_0530ecf0:
    uVar3 = (*(code *)*puVar2)();
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0530ed4c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02f421d0();
LAB_0530ed4c:
    auVar9 = (*(code *)*puVar2)();
    auVar8 = auVar9;
    if (lVar7 != 0) {
      auVar8._8_8_ = *(undefined8 *)(unaff_x19 + 0x170);
      auVar8._0_8_ = auVar9._0_8_;
      *(int *)(lVar7 + 0x20) = auVar9._0_4_;
      *(undefined4 *)(lVar7 + 0x24) = uStack000000000000000c;
      *(undefined8 *)(lVar7 + 0x10) = uVar3;
      if (*(long *)(lVar7 + 0x18) != 0) {
        FUN_05315554(*(long *)(lVar7 + 0x18));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8(auVar8._0_8_,auVar8._8_8_);
}


