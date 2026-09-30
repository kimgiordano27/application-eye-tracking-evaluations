/*
FUNCTION_NAME: FUN_06af8558
ENTRY_POINT: 06af8558
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_18;weak_xr_or_state_hits_18;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_18
*/


/* WARNING: Removing unreachable block (ram,0x06af87a0) */
/* WARNING: Removing unreachable block (ram,0x06af87ac) */

void FUN_06af8558(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 local_78;
  undefined8 uStack_70;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_50;
  
  puVar1 = PTR_DAT_06f6d618;
  if ((DAT_073ab354 & 1) == 0) {
    FUN_02fe925c(OVRPlugin_OVRP_1_105_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_106_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_107_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_108_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_109_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_10_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_110_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_111_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_112_0_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6d618);
    DAT_073ab354 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = (long *)0x0;
  uVar10 = *(undefined8 *)(param_1 + 0x160);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar5 = FUN_068f9b78(uVar10,0,0);
  puVar3 = OVRPlugin_OVRP_1_112_0_TypeInfo;
  puVar1 = OVRPlugin_OVRP_1_110_0_TypeInfo;
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_112_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar6 = FUN_0491d0ac(*(undefined8 *)puVar1);
    if (*(long *)(param_1 + 0x160) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    FUN_03c73e98(*(long *)(param_1 + 0x160),lVar6,*(undefined8 *)OVRPlugin_OVRP_1_108_0_TypeInfo);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    FUN_04430ce4(&local_78,lVar6,*(undefined8 *)OVRPlugin_OVRP_1_10_0_TypeInfo);
    puVar2 = OVRPlugin_OVRP_1_109_0_TypeInfo;
    puVar1 = OVRPlugin_OVRP_1_106_0_TypeInfo;
    uStack_58 = uStack_70;
    local_60 = local_78;
    local_50 = local_68;
    while (uVar5 = FUN_05506d10(&local_60,*(undefined8 *)puVar1), plVar4 = local_50,
          (uVar5 & 1) != 0) {
      if (local_50 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      lVar8 = *local_50;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_06af8724;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_02feb5b8(local_50,*(long *)puVar2,0);
LAB_06af8724:
      (*(code *)*puVar7)(plVar4,param_2,puVar7[1]);
    }
    FUN_05506d0c(&local_60,*(undefined8 *)OVRPlugin_OVRP_1_105_0_TypeInfo);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_0491d144(lVar6,*(undefined8 *)OVRPlugin_OVRP_1_111_0_TypeInfo);
  }
  return;
}


