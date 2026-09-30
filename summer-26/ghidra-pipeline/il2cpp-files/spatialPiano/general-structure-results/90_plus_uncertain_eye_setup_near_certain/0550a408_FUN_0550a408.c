/*
FUNCTION_NAME: FUN_0550a408
ENTRY_POINT: 0550a408
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


void FUN_0550a408(long param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if ((DAT_06bbf57f & 1) == 0) {
    FUN_02f08768(OVRPlugin_OVRP_1_41_0_TypeInfo);
    FUN_02f08768(OVRHaptics_Config_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_42_0_TypeInfo);
    DAT_06bbf57f = 1;
  }
  puVar2 = OVRHaptics_Config_TypeInfo;
  if (param_2 != (long *)0x0) {
    bVar3 = *(byte *)(*(long *)OVRPlugin_OVRP_1_41_0_TypeInfo + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar3 * 8 + -8) !=
        *(long *)OVRPlugin_OVRP_1_41_0_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(param_2);
    }
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar4 = FUN_054f6fe4();
    lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
    FUN_05116b38(lVar5,0);
    if (((lVar5 != 0) && (*(undefined4 *)(lVar5 + 0x18) = uVar4, param_2 != (long *)0x0)) &&
       (param_2[2] != 0)) {
      *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(param_2[2] + 0x10);
      uVar4 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
      *(undefined4 *)(lVar5 + 0x10) = uVar4;
      uVar4 = (**(code **)(*param_2 + 0x1e8))(param_2,*(undefined8 *)(*param_2 + 0x1f0));
      *(undefined4 *)(lVar5 + 0x14) = uVar4;
      bVar3 = (**(code **)(*param_2 + 0x1f8))(param_2,*(undefined8 *)(*param_2 + 0x200));
      lVar6 = *(long *)(param_1 + 0x20);
      *(byte *)(lVar5 + 0x28) = bVar3 & 1;
      if (lVar6 != 0) {
        lVar7 = *(long *)(lVar6 + 0x10);
        lVar8 = *(long *)OVRPlugin_OVRP_1_42_0_TypeInfo;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar5;
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            return;
          }
          FUN_03abf904(lVar6,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                      );
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


