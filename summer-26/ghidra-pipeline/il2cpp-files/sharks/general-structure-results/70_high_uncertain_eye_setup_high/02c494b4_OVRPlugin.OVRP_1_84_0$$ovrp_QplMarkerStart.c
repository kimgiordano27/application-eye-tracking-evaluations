/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplMarkerStart
ENTRY_POINT: 02c494b4
PROGRAM: sharks-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_QplMarkerStart(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long *unaff_x24;
  ulong unaff_x25;
  
code_r0x02c494b4:
  puVar1 = (undefined8 *)FUN_0185dba8();
  do {
    lVar2 = (*(code *)*puVar1)();
    if (lVar2 == 0) {
      thunk_FUN_01851c08(PTR_DAT_037f87a8);
      uVar4 = thunk_FUN_01861bbc();
      uVar5 = thunk_FUN_01851c08(PTR_DAT_0380c838);
      uVar6 = thunk_FUN_01851c08(PTR_DAT_037fb630);
      FUN_02b3cc64(uVar4,uVar5,uVar6,0);
      uVar5 = thunk_FUN_01851c08(PTR_DAT_0380c868);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar4,uVar5);
    }
    if ((unaff_x25 & 1) == 0) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      uVar3 = FUN_02c40bec();
      if ((uVar3 & 1) != 0) goto LAB_02c4950c;
      uVar3 = FUN_02c40bec(lVar2);
      if ((uVar3 & 1) != 0) {
        FUN_02c4c75c();
        goto LAB_02c4950c;
      }
      FUN_02c47934(lVar2);
      uVar3 = FUN_02c40bec();
      unaff_x25 = 0;
      if ((uVar3 & 1) != 0) {
        FUN_02c433dc(lVar2);
        unaff_x25 = 0;
      }
    }
    else {
LAB_02c4950c:
      unaff_x25 = 1;
    }
    unaff_w22 = unaff_w22 + 1;
    if (unaff_w22 == unaff_w21) {
      return;
    }
    lVar2 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 == 0) goto code_r0x02c494b4;
    piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    while (*(long *)(piVar7 + -2) != *unaff_x24) {
      uVar3 = uVar3 - 1;
      piVar7 = piVar7 + 4;
      if (uVar3 == 0) goto code_r0x02c494b4;
    }
    puVar1 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
  } while( true );
}


