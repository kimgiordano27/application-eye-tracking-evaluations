/*
FUNCTION_NAME: FUN_05d48d28
ENTRY_POINT: 05d48d28
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05d48d28(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  if ((DAT_07398b76 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb4b60);
    DAT_07398b76 = 1;
  }
  puVar1 = PTR_DAT_06fb4b60;
  local_40 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_28 = 0;
  local_30 = 0;
  uStack_2c = 0;
  if (param_2 != (long *)0x0) {
    lVar3 = *param_2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06fb4b60) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x12) * 0x10 + 0x138);
          goto LAB_05d48dc4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02feb5b8(param_2,*(long *)PTR_DAT_06fb4b60,0x12);
LAB_05d48dc4:
    (*(code *)*puVar2)(param_2,&local_40,puVar2[1]);
    if (param_1 != 0) {
      *(ulong *)(param_1 + 0x34) = CONCAT44(local_28,uStack_2c);
      *(ulong *)(param_1 + 0x2c) = CONCAT44(local_30,uStack_34);
      *(ulong *)(param_1 + 0x28) = CONCAT44(uStack_34,uStack_38);
      *(undefined8 *)(param_1 + 0x20) = local_40;
      FUN_05d48908(param_1,0);
      lVar3 = *param_2;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
            goto OVRPlugin_OVRP_1_18_0__ovrp_SetHandNodePoseStateLatency;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_02feb5b8(param_2,*(long *)puVar1,4);
OVRPlugin_OVRP_1_18_0__ovrp_SetHandNodePoseStateLatency:
      uVar6 = (*(code *)*puVar2)(param_2,puVar2[1]);
      *(undefined4 *)(param_1 + 0x3c) = uVar6;
      FUN_05d48908(param_1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


