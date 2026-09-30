/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemCpuLevel
ENTRY_POINT: 028131c8
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


void OVRPlugin_OVRP_1_1_0__ovrp_GetSystemCpuLevel(long param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  FUN_01ab69ac(*(undefined8 *)(param_1 + 0x370));
  FUN_01ab69ac(PTR_DAT_03cfe378);
  FUN_01ab69ac(PTR_DAT_03cbe5e8);
  *(undefined1 *)(unaff_x20 + 0x35b) = 1;
  puVar1 = PTR_DAT_03cfe358;
  lVar2 = *unaff_x19;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *unaff_x19;
  }
  lVar2 = FUN_01f7108c(*(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8),*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_03cfe350;
  lVar4 = *(long *)(*(long *)(*unaff_x19 + 0xb8) + 8);
  if (lVar4 != 0) {
    if ((*(uint *)(lVar4 + 0x18) == 0) || (*(uint *)(lVar4 + 0x18) < 8)) {
LAB_02813350:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    uVar7 = *(undefined8 *)(lVar4 + 0x20);
    uVar8 = *(undefined8 *)(lVar4 + 0x58);
    uVar6 = *(undefined8 *)PTR_DAT_03cfe360;
    if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar6 = FUN_0277b678(uVar6,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)puVar1);
    }
    lVar4 = FUN_02813358(uVar6);
    puVar1 = PTR_DAT_03cfe368;
    if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x18), lVar4 != 0)) {
      if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
        uVar9 = 0;
        uVar5 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
        do {
          if (uVar5 <= uVar9) goto LAB_02813350;
          if (lVar2 == 0) goto LAB_02813354;
          iVar3 = (int)*(undefined8 *)(lVar4 + 0x20 + uVar9 * 8);
          if (*(int *)(lVar2 + 0x18) <= iVar3) {
            uVar6 = uVar8;
            if ((5 < iVar3 - 7U) && (1 < iVar3 - 0x10U)) {
              uVar6 = uVar7;
            }
            FUN_01b5f01c(lVar2,uVar6,*(undefined8 *)puVar1);
          }
          uVar5 = (ulong)*(uint *)(lVar4 + 0x18);
          uVar9 = uVar9 + 1;
        } while ((long)uVar9 < (long)(int)*(uint *)(lVar4 + 0x18));
      }
      if (lVar2 != 0) {
        FUN_022195a8(lVar2,*(undefined8 *)PTR_DAT_03cfe370);
        return;
      }
    }
  }
LAB_02813354:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


