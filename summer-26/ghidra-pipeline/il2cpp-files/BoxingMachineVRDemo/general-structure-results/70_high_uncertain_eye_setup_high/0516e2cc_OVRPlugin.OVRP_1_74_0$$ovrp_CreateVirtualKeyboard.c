/*
FUNCTION_NAME: OVRPlugin.OVRP_1_74_0$$ovrp_CreateVirtualKeyboard
ENTRY_POINT: 0516e2cc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_74_0__ovrp_CreateVirtualKeyboard(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar6;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x24;
  
  FUN_02d6084c();
  *(undefined1 *)(unaff_x21 + 0xe93) = 1;
  lVar6 = *(long *)(unaff_x20 + 0x20);
  lVar2 = thunk_FUN_02d9d534(*unaff_x22);
  FUN_0504920c(lVar2,0);
  lVar3 = thunk_FUN_02d9d534(*unaff_x24);
  FUN_0504920c(lVar3,0);
  *(undefined8 *)(lVar3 + 0x20) = unaff_x23;
  thunk_FUN_02dd37b4();
  *(undefined1 *)(lVar3 + 0x28) = 2;
  *(undefined1 *)(lVar3 + 0x30) = 0;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = lVar3;
    thunk_FUN_02dd37b4((long *)(lVar2 + 0x10),lVar3);
    *(long *)(lVar2 + 0x18) = unaff_x19;
    thunk_FUN_02dd37b4();
    if (lVar6 != 0) {
      lVar3 = *(long *)(lVar6 + 0x10);
      lVar5 = *(long *)PTR_DAT_067828d8;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar3 != 0) {
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
          *plVar4 = lVar2;
          thunk_FUN_02dd37b4(plVar4,lVar2);
        }
        else {
          FUN_03aac494(lVar6,lVar2,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                      );
        }
        if (unaff_x19 != 0) {
          *(long *)(unaff_x19 + 0x10) = unaff_x20;
          thunk_FUN_02dd37b4((long *)(unaff_x19 + 0x10));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


