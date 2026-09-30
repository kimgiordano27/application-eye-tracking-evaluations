/*
FUNCTION_NAME: OVRManager$$OnApplicationPause
ENTRY_POINT: 01a09f24
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OnApplicationPause(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uStack000000000000000c;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<OVRSpatialAnchor,_Guid>_set_Item__
                    );
  *(undefined1 *)(unaff_x20 + 0x925) = 1;
  uStack000000000000000c = 0;
  auVar8 = FUN_01a065a4();
  puVar1 = PTR_DAT_033eb918;
  if (unaff_x19 != (long *)0x0) {
    lVar4 = *unaff_x19;
    lVar7 = *(long *)(unaff_x21 + 0x1a0);
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_System_Collections_Generic_Dictionary<OVRSpatialAnchor,_Guid>_set_Item__
           ) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_01a09fc0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_00d59724();
LAB_01a09fc0:
    uVar3 = (*(code *)*puVar2)();
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_01a0a01c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_00d59724();
LAB_01a0a01c:
    auVar9 = (*(code *)*puVar2)();
    auVar8 = auVar9;
    if (lVar7 != 0) {
      auVar8._8_8_ = *(undefined8 *)(unaff_x21 + 0x178);
      auVar8._0_8_ = auVar9._0_8_;
      *(undefined8 *)(lVar7 + 0x10) = uVar3;
      *(int *)(lVar7 + 0x20) = auVar9._0_4_;
      *(undefined4 *)(lVar7 + 0x24) = uStack000000000000000c;
      if (*(long *)(lVar7 + 0x18) != 0) {
        FUN_01a0bd5c(*(long *)(lVar7 + 0x18));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c(auVar8._0_8_,auVar8._8_8_);
}


