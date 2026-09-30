/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetSystemCpuLevel
ENTRY_POINT: 02813230
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_SetSystemCpuLevel(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  uint in_w9;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  puVar1 = PTR_DAT_03cfe350;
  if ((in_w9 != 0) && (7 < in_w9)) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar7 = *(undefined8 *)(param_1 + 0x58);
    uVar5 = *(undefined8 *)PTR_DAT_03cfe360;
    if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar5 = FUN_0277b678(uVar5,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)puVar1);
    }
    lVar2 = FUN_02813358(uVar5);
    puVar1 = PTR_DAT_03cfe368;
    if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x18), lVar2 != 0)) {
      if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
        uVar8 = 0;
        uVar4 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
        do {
          if (uVar4 <= uVar8) goto LAB_02813350;
          if (param_2 == 0) goto LAB_02813354;
          iVar3 = (int)*(undefined8 *)(lVar2 + 0x20 + uVar8 * 8);
          if (*(int *)(param_2 + 0x18) <= iVar3) {
            uVar5 = uVar7;
            if ((5 < iVar3 - 7U) && (1 < iVar3 - 0x10U)) {
              uVar5 = uVar6;
            }
            FUN_01b5f01c(param_2,uVar5,*(undefined8 *)puVar1);
          }
          uVar4 = (ulong)*(uint *)(lVar2 + 0x18);
          uVar8 = uVar8 + 1;
        } while ((long)uVar8 < (long)(int)*(uint *)(lVar2 + 0x18));
      }
      if (param_2 != 0) {
        FUN_022195a8(param_2,*(undefined8 *)PTR_DAT_03cfe370);
        return;
      }
    }
LAB_02813354:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
LAB_02813350:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


