/*
FUNCTION_NAME: OVRManager$$remove_VrFocusLost
ENTRY_POINT: 05fee89c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__remove_VrFocusLost(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *unaff_x19;
  long *unaff_x21;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  lVar4 = *unaff_x21;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_075f3eb0) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
        goto LAB_05fee8f4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_0322c1e8();
LAB_05fee8f4:
  uVar2 = (*(code *)*puVar3)();
  puVar1 = PTR_DAT_075f6b78;
  if ((uVar2 & 1) == 0) {
    lVar4 = *(long *)PTR_DAT_075f6b78;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar4 = *(long *)puVar1;
    }
    puVar3 = *(undefined8 **)(lVar4 + 0xb8);
    uVar10 = puVar3[1];
    uVar9 = *puVar3;
    uVar8 = puVar3[3];
    uVar7 = puVar3[2];
    unaff_x19[4] = puVar3[4];
  }
  else {
    FUN_06e5502c();
    FUN_05fee0ec(uStack0000000000000028,uStack000000000000002c,uStack0000000000000030,
                 uStack0000000000000034,uStack0000000000000038,uStack000000000000003c);
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    unaff_x19[4] = 0;
  }
  unaff_x19[1] = uVar10;
  *unaff_x19 = uVar9;
  unaff_x19[3] = uVar8;
  unaff_x19[2] = uVar7;
  thunk_FUN_0329bf60();
  return uVar2 & 1;
}


