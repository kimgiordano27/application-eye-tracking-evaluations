/*
FUNCTION_NAME: Unity.Mathematics.uint2x2$$op_Inequality
ENTRY_POINT: 058d4fdc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Unity_Mathematics_uint2x2__op_Inequality(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  int extraout_w1;
  long lVar7;
  uint unaff_w19;
  int iVar8;
  long *unaff_x22;
  long unaff_x23;
  code *unaff_x24;
  undefined4 uStack000000000000012c;
  
  (*unaff_x24)();
  lVar6 = *unaff_x22;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *unaff_x22;
  }
  puVar5 = OVRPlugin_BodyTrackingFidelity2_TypeInfo;
  puVar4 = OVRPlugin_BodyJointSet_TypeInfo;
  puVar3 = OVRPlugin_BodyJointLocation_TypeInfo;
  puVar2 = OVRPlugin_<>c__DisplayClass531_0_TypeInfo;
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
  if (lVar6 == 0) {
LAB_058d519c:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (unaff_w19 < *(uint *)(lVar6 + 0x18)) {
    FUN_05853890(lVar6 + unaff_x23 * 0xb8 + 0x78,0);
    FUN_058d46f4(unaff_w19);
    iVar8 = 0;
    while( true ) {
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        iVar1 = *(int *)(*(long *)(*unaff_x22 + 0xb8) + 0x48);
        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
      }
      else {
        iVar1 = *(int *)(*(long *)(*unaff_x22 + 0xb8) + 0x48);
      }
      if (iVar1 <= iVar8) {
        FUN_058d3a78(unaff_w19,1,0);
        uStack000000000000012c = *(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
        FUN_032de00c(*(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28),&stack0x0000012c,unaff_w19
                     ,*(undefined8 *)puVar4);
        FUN_032deb00(*(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x30),
                     *(long *)(*unaff_x22 + 0xb8) + 0x18,unaff_w19,*(undefined8 *)puVar5);
        if (*(int *)(*(long *)(*unaff_x22 + 0xb8) + 0x18) == 0) {
          if (*(int *)(*unaff_x22 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_058d67a0();
          FUN_058d6850();
        }
        return;
      }
      FUN_037a47e4(*(long *)(*unaff_x22 + 0xb8) + 0x48,iVar8,*(undefined8 *)puVar3);
      lVar6 = *(long *)(*unaff_x22 + 0xb8);
      lVar7 = *(long *)(lVar6 + 0x28);
      if (lVar7 == 0) goto LAB_058d519c;
      if (*(uint *)(lVar7 + 0x18) <= unaff_w19) break;
      if (*(int *)(lVar7 + unaff_x23 * 4 + 0x20) == extraout_w1) {
        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar6 = *(long *)(*unaff_x22 + 0xb8);
        }
        FUN_037a56f8(lVar6 + 0x48,iVar8,*(undefined8 *)puVar2);
        iVar8 = iVar8 + -1;
      }
      iVar8 = iVar8 + 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


