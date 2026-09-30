/*
FUNCTION_NAME: OVRPlugin$$GetMixedRealityCameraInfo
ENTRY_POINT: 0909fbe8
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetMixedRealityCameraInfo(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  long lVar8;
  undefined4 uStack000000000000000c;
  
  uStack000000000000000c = 0;
  FUN_0909cabc();
  puVar1 = PTR_DAT_0ac75968;
  if (unaff_x20 != (long *)0x0) {
    lVar5 = *unaff_x20;
    lVar8 = *(long *)(unaff_x19 + 0x1a8);
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0ac78c88) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0909fc68;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_04980e68();
LAB_0909fc68:
    uVar4 = (*(code *)*puVar3)();
    lVar5 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0909fcc4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_04980e68();
LAB_0909fcc4:
    uVar2 = (*(code *)*puVar3)();
    if (lVar8 != 0) {
      FUN_090a0bd8(lVar8,uVar4,uVar2,uStack000000000000000c,*(undefined8 *)(unaff_x19 + 0x180));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


