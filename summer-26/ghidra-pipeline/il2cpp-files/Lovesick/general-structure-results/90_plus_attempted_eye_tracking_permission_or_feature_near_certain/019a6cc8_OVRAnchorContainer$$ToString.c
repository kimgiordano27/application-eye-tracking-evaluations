/*
FUNCTION_NAME: OVRAnchorContainer$$ToString
ENTRY_POINT: 019a6cc8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRAnchorContainer__ToString(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  int *piVar6;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  undefined8 uVar7;
  
  lVar2 = thunk_FUN_00d62348();
  if ((lVar2 != 0) && (FUN_011c181c(), unaff_x21 != (long *)0x0)) {
    lVar2 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)StringLiteral_8132) {
          puVar3 = (undefined8 *)(lVar2 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_019a6d48;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_00d59724();
LAB_019a6d48:
    (*(code *)*puVar3)();
    *(undefined1 *)(unaff_x19 + 0x80) = 0;
    uVar7 = *unaff_x20;
    uVar1 = *(undefined4 *)(unaff_x20 + 3);
    uVar5 = unaff_x20[2];
    *(undefined8 *)(unaff_x19 + 0x6c) = unaff_x20[1];
    *(undefined8 *)(unaff_x19 + 100) = uVar7;
    *(undefined4 *)(unaff_x19 + 0x7c) = uVar1;
    *(undefined8 *)(unaff_x19 + 0x74) = uVar5;
    if ((*(long *)(unaff_x19 + 0x40) == 0) ||
       (uVar4 = OVREyeGaze__Start(*(long *)(unaff_x19 + 0x40),0), (uVar4 & 1) != 0)) {
      return;
    }
    FUN_019a6de4();
    FUN_019a6de4();
    lVar2 = *(long *)(unaff_x19 + 0x30);
    *(undefined1 *)(unaff_x19 + 0x28) = 1;
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x019a6ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


