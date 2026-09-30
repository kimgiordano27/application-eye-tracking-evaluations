/*
FUNCTION_NAME: Unity.Mathematics.uint2x2$$op_Equality
ENTRY_POINT: 058d4fa4
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


void Unity_Mathematics_uint2x2__op_Equality(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  int extraout_w1;
  long lVar8;
  uint unaff_w19;
  int iVar9;
  long *unaff_x22;
  long unaff_x23;
  code *pcVar10;
  undefined4 uStack000000000000012c;
  
  puVar6 = (undefined8 *)FUN_02d9a5d4();
  pcVar10 = (code *)*puVar6;
  memcpy(&stack0x000000c0,&stack0x00000000,0x60);
  (*pcVar10)();
  lVar7 = *unaff_x22;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar7 = *unaff_x22;
  }
  puVar5 = OVRPlugin_BodyTrackingFidelity2_TypeInfo;
  puVar4 = OVRPlugin_BodyJointSet_TypeInfo;
  puVar3 = OVRPlugin_BodyJointLocation_TypeInfo;
  puVar2 = OVRPlugin_<>c__DisplayClass531_0_TypeInfo;
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x30);
  if (lVar7 == 0) {
LAB_058d519c:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (unaff_w19 < *(uint *)(lVar7 + 0x18)) {
    FUN_05853890(lVar7 + unaff_x23 * 0xb8 + 0x78,0);
    FUN_058d46f4(unaff_w19);
    iVar9 = 0;
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
      if (iVar1 <= iVar9) {
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
      FUN_037a47e4(*(long *)(*unaff_x22 + 0xb8) + 0x48,iVar9,*(undefined8 *)puVar3);
      lVar7 = *(long *)(*unaff_x22 + 0xb8);
      lVar8 = *(long *)(lVar7 + 0x28);
      if (lVar8 == 0) goto LAB_058d519c;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w19) break;
      if (*(int *)(lVar8 + unaff_x23 * 4 + 0x20) == extraout_w1) {
        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar7 = *(long *)(*unaff_x22 + 0xb8);
        }
        FUN_037a56f8(lVar7 + 0x48,iVar9,*(undefined8 *)puVar2);
        iVar9 = iVar9 + -1;
      }
      iVar9 = iVar9 + 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


