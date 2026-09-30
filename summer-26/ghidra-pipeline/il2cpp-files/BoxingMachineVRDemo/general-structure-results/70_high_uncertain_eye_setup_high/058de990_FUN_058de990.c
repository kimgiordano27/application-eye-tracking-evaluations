/*
FUNCTION_NAME: FUN_058de990
ENTRY_POINT: 058de990
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_8
*/


void FUN_058de990(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_270 [464];
  long local_a0;
  
  if ((DAT_06b80b3c & 1) == 0) {
    FUN_02d6084c(OVRPlugin_OVRP_1_83_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_84_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_85_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_36_0_TypeInfo);
    FUN_02d6084c(PTR_DAT_06761098);
    DAT_06b80b3c = 1;
  }
  lVar7 = FUN_058ddbdc(param_1,param_2);
  puVar6 = OVRPlugin_OVRP_1_85_0_TypeInfo;
  puVar5 = OVRPlugin_OVRP_1_84_0_TypeInfo;
  puVar4 = OVRPlugin_OVRP_1_83_0_TypeInfo;
  if (*(long *)(lVar7 + 0x1d0) != 0) {
    if ((*(int *)(*(long *)(lVar7 + 0x1d0) + 0x194) != 2) ||
       ((*(char *)(lVar7 + 8) == '\0' && (1 < *(int *)(lVar7 + 0xc) - 1U)))) {
      piVar1 = (int *)(param_1 + 0x160);
      FUN_03799508(auStack_270,piVar1,param_2,*(undefined8 *)OVRPlugin_OVRP_1_36_0_TypeInfo);
      if (*(int *)(param_1 + 300) == param_2) {
        *(undefined8 *)(param_1 + 0x128) = 0xffffffffffffffff;
        *(undefined4 *)(param_1 + 0x130) = 0;
      }
      else if (*(int *)(param_1 + 300) == *(int *)(param_1 + 0x138) + -1) {
        *(int *)(param_1 + 300) = param_2;
      }
      FUN_03795c78(param_1 + 0x138,param_2,*(undefined8 *)puVar5);
      FUN_03798ba4(param_1 + 0x148,param_2,*(undefined8 *)puVar4);
      FUN_0379a7c4(piVar1,param_2,*(undefined8 *)puVar6);
      if ((local_a0 == 0) || (lVar7 = *(long *)(local_a0 + 0xf0), lVar7 == 0)) goto LAB_058dec00;
      iVar2 = *(int *)(lVar7 + 0x18);
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (0 < iVar2) {
        FUN_05029664(*(undefined8 *)(lVar7 + 0x10),0,iVar2,0);
      }
      *(undefined8 *)(local_a0 + 0x188) = 0;
      thunk_FUN_02dd37b4(local_a0 + 0x188,0);
      *(undefined8 *)(local_a0 + 0x58) = 0;
      *(undefined8 *)(local_a0 + 0x50) = 0;
      *(undefined8 *)(local_a0 + 0x88) = 0;
      *(undefined8 *)(local_a0 + 0x80) = 0;
      *(undefined8 *)(local_a0 + 0x98) = 0;
      *(undefined8 *)(local_a0 + 0x90) = 0;
      *(undefined8 *)(local_a0 + 0x68) = 0;
      *(undefined8 *)(local_a0 + 0x60) = 0;
      *(undefined8 *)(local_a0 + 0x78) = 0;
      *(undefined8 *)(local_a0 + 0x70) = 0;
      thunk_FUN_02dd37b4((undefined8 *)(local_a0 + 0x50),0);
      *(undefined8 *)(local_a0 + 0xd8) = 0;
      *(undefined8 *)(local_a0 + 0xd0) = 0;
      *(undefined8 *)(local_a0 + 0xe8) = 0;
      *(undefined8 *)(local_a0 + 0xe0) = 0;
      *(undefined8 *)(local_a0 + 0xb8) = 0;
      *(undefined8 *)(local_a0 + 0xb0) = 0;
      *(undefined8 *)(local_a0 + 200) = 0;
      *(undefined8 *)(local_a0 + 0xc0) = 0;
      *(undefined8 *)(local_a0 + 0xa8) = 0;
      *(undefined8 *)(local_a0 + 0xa0) = 0;
      thunk_FUN_02dd37b4((undefined8 *)(local_a0 + 0xa0),0);
      FUN_0636a964(local_a0,0,0);
      FUN_0636a964(local_a0,0,0);
      *(undefined8 *)(local_a0 + 0x40) = 0;
      thunk_FUN_02dd37b4((undefined8 *)(local_a0 + 0x40),0);
      *(undefined8 *)(local_a0 + 0x20) = 0;
      thunk_FUN_02dd37b4((undefined8 *)(local_a0 + 0x20),0);
      *(undefined8 *)(local_a0 + 0x38) = 0;
      thunk_FUN_02dd37b4((undefined8 *)(local_a0 + 0x38),0);
      if (*piVar1 == 0) {
        lVar7 = param_1 + 0x338;
        *(long *)(param_1 + 0x338) = local_a0;
      }
      else {
        lVar8 = *(long *)(param_1 + 0x388);
        if (lVar8 == 0) goto LAB_058dec00;
        uVar3 = *piVar1 - 1;
        if (*(uint *)(lVar8 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        lVar8 = lVar8 + (long)(int)uVar3 * 0x220;
        lVar7 = lVar8 + 0x1f0;
        *(long *)(lVar8 + 0x1f0) = local_a0;
      }
      thunk_FUN_02dd37b4(lVar7,local_a0);
    }
    return;
  }
LAB_058dec00:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


