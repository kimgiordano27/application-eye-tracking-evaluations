/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetControllerHapticsDesc
ENTRY_POINT: 0696fad4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_6_0__ovrp_GetControllerHapticsDesc(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined4 *puVar9;
  uint uVar10;
  long unaff_x19;
  long unaff_x22;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  undefined4 uStack000000000000001c;
  
  if ((param_1 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084b7228);
    FUN_03a8a718(PTR_DAT_0849ccf8);
    *(undefined1 *)(unaff_x22 + 0xee) = 1;
  }
  uStack000000000000001c = 0;
  if (((unaff_x19 != 0) && (plVar4 = (long *)thunk_FUN_03a9a6e8(), plVar4 != (long *)0x0)) &&
     (lVar5 = (**(code **)(*plVar4 + 0x6f8))(plVar4,0x1434,*(undefined8 *)(*plVar4 + 0x700)),
     puVar3 = PTR_DAT_084b7228, puVar2 = PTR_DAT_0849ccf8, puVar1 = PTR_DAT_08486760, lVar5 != 0)) {
    uVar10 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar10) {
      uVar12 = 0;
      do {
        if (uVar10 <= uVar12) goto LAB_0696ff8c;
        uVar11 = *(undefined8 *)puVar3;
        plVar4 = *(long **)(lVar5 + (long)(int)uVar12 * 8 + 0x20);
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar11 = FUN_0675ff58(uVar11,0);
        if (plVar4 == (long *)0x0) goto LAB_0696ff88;
        uVar6 = (**(code **)(*plVar4 + 0x1f8))(plVar4,uVar11,0,*(undefined8 *)(*plVar4 + 0x200));
        if ((uVar6 & 1) != 0) {
          uVar11 = (**(code **)(*plVar4 + 0x268))(plVar4,*(undefined8 *)(*plVar4 + 0x270));
          lVar13 = *(long *)(puVar1 + 0x78);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)(puVar1 + 0xe0));
          }
          uVar7 = FUN_0675ff58(lVar13 + 0x20,0);
          uVar6 = FUN_067690d8(uVar11,uVar7,0);
          lVar13 = *plVar4;
          if ((uVar6 & 1) == 0) {
            (**(code **)(lVar13 + 0x1b8))(plVar4,*(undefined8 *)(lVar13 + 0x1c0));
            FUN_065c0764();
            plVar4 = (long *)(**(code **)(*plVar4 + 0x2f8))(plVar4);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
            FUN_0697005c();
          }
          else {
            plVar8 = (long *)(**(code **)(lVar13 + 0x2f8))(plVar4);
            if (plVar8 == (long *)0x0) goto LAB_0696ff88;
            if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)(puVar1 + 0x78) + 0x40))
            goto LAB_0696ff90;
            puVar9 = (undefined4 *)thunk_FUN_03ac7604();
            uStack000000000000001c = *puVar9;
            FUN_067638d0(&stack0x0000001c,*(undefined8 *)puVar2,0);
            (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
            FUN_065c0764();
            FUN_0697005c();
          }
        }
        uVar10 = *(uint *)(lVar5 + 0x18);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)uVar10);
    }
    plVar4 = (long *)thunk_FUN_03a9a6e8();
    if ((plVar4 != (long *)0x0) &&
       (lVar5 = (**(code **)(*plVar4 + 0x878))(plVar4,0x1434,*(undefined8 *)(*plVar4 + 0x880)),
       lVar5 != 0)) {
      uVar10 = *(uint *)(lVar5 + 0x18);
      if (0 < (int)uVar10) {
        uVar12 = 0;
        do {
          if (uVar10 <= uVar12) {
LAB_0696ff8c:
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          uVar11 = *(undefined8 *)puVar3;
          plVar4 = *(long **)(lVar5 + (long)(int)uVar12 * 8 + 0x20);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar11 = FUN_0675ff58(uVar11,0);
          if (plVar4 == (long *)0x0) goto LAB_0696ff88;
          uVar6 = (**(code **)(*plVar4 + 0x1f8))(plVar4,uVar11,0,*(undefined8 *)(*plVar4 + 0x200));
          if ((uVar6 & 1) != 0) {
            uVar11 = (**(code **)(*plVar4 + 600))(plVar4,*(undefined8 *)(*plVar4 + 0x260));
            lVar13 = *(long *)(puVar1 + 0x78);
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_03ae8be4(*(long *)(puVar1 + 0xe0));
            }
            uVar7 = FUN_0675ff58(lVar13 + 0x20,0);
            uVar6 = FUN_067690d8(uVar11,uVar7,0);
            lVar13 = *plVar4;
            if ((uVar6 & 1) == 0) {
              (**(code **)(lVar13 + 0x1b8))(plVar4,*(undefined8 *)(lVar13 + 0x1c0));
              plVar4 = (long *)(**(code **)(*plVar4 + 0x2f8))(plVar4);
              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
              FUN_0697005c();
            }
            else {
              plVar8 = (long *)(**(code **)(lVar13 + 0x2f8))(plVar4);
              if (plVar8 == (long *)0x0) goto LAB_0696ff88;
              if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)(puVar1 + 0x78) + 0x40)) {
LAB_0696ff90:
                    /* WARNING: Subroutine does not return */
                FUN_03a8ad40();
              }
              puVar9 = (undefined4 *)thunk_FUN_03ac7604();
              uStack000000000000001c = *puVar9;
              FUN_067638d0(&stack0x0000001c,*(undefined8 *)puVar2,0);
              (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
              FUN_0697005c();
            }
          }
          uVar10 = *(uint *)(lVar5 + 0x18);
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)uVar10);
      }
      return;
    }
  }
LAB_0696ff88:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


