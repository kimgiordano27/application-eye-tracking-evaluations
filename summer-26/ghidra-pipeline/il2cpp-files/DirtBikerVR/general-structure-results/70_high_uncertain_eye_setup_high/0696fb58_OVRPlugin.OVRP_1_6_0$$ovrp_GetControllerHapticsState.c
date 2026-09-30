/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetControllerHapticsState
ENTRY_POINT: 0696fb58
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_6_0__ovrp_GetControllerHapticsState(void)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  uint in_w8;
  long unaff_x22;
  long *plVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  uint unaff_w28;
  long lVar9;
  long lVar10;
  undefined8 in_stack_00000018;
  
  do {
    if (in_w8 <= unaff_w28) goto LAB_0696ff8c;
    uVar8 = *unaff_x25;
    plVar6 = *(long **)(unaff_x22 + (long)(int)unaff_w28 * 8 + 0x20);
    if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar8 = FUN_0675ff58(uVar8,0);
    if (plVar6 == (long *)0x0) goto LAB_0696ff88;
    uVar2 = (**(code **)(*plVar6 + 0x1f8))(plVar6,uVar8,0,*(undefined8 *)(*plVar6 + 0x200));
    if ((uVar2 & 1) != 0) {
      uVar8 = (**(code **)(*plVar6 + 0x268))(plVar6,*(undefined8 *)(*plVar6 + 0x270));
      lVar9 = *(long *)(unaff_x27 + 0x78);
      if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)(unaff_x27 + 0xe0));
      }
      uVar3 = FUN_0675ff58(lVar9 + 0x20,0);
      uVar2 = FUN_067690d8(uVar8,uVar3,0);
      lVar9 = *plVar6;
      if ((uVar2 & 1) == 0) {
        (**(code **)(lVar9 + 0x1b8))(plVar6,*(undefined8 *)(lVar9 + 0x1c0));
        FUN_065c0764();
        plVar6 = (long *)(**(code **)(*plVar6 + 0x2f8))(plVar6);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        FUN_0697005c();
      }
      else {
        plVar4 = (long *)(**(code **)(lVar9 + 0x2f8))(plVar6);
        if (plVar4 == (long *)0x0) goto LAB_0696ff88;
        if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(unaff_x27 + 0x78) + 0x40))
        goto LAB_0696ff90;
        puVar5 = (undefined4 *)thunk_FUN_03ac7604();
        in_stack_00000018._4_4_ = *puVar5;
        FUN_067638d0((long)&stack0x00000018 + 4,*unaff_x26,0);
        (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
        FUN_065c0764();
        FUN_0697005c();
      }
    }
    in_w8 = *(uint *)(unaff_x22 + 0x18);
    unaff_w28 = unaff_w28 + 1;
  } while ((int)unaff_w28 < (int)in_w8);
  plVar6 = (long *)thunk_FUN_03a9a6e8();
  if ((plVar6 != (long *)0x0) &&
     (lVar9 = (**(code **)(*plVar6 + 0x878))(plVar6,0x1434,*(undefined8 *)(*plVar6 + 0x880)),
     lVar9 != 0)) {
    uVar1 = *(uint *)(lVar9 + 0x18);
    if (0 < (int)uVar1) {
      uVar7 = 0;
      do {
        if (uVar1 <= uVar7) {
LAB_0696ff8c:
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        uVar8 = *unaff_x25;
        plVar6 = *(long **)(lVar9 + (long)(int)uVar7 * 8 + 0x20);
        if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar8 = FUN_0675ff58(uVar8,0);
        if (plVar6 == (long *)0x0) goto LAB_0696ff88;
        uVar2 = (**(code **)(*plVar6 + 0x1f8))(plVar6,uVar8,0,*(undefined8 *)(*plVar6 + 0x200));
        if ((uVar2 & 1) != 0) {
          uVar8 = (**(code **)(*plVar6 + 600))(plVar6,*(undefined8 *)(*plVar6 + 0x260));
          lVar10 = *(long *)(unaff_x27 + 0x78);
          if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)(unaff_x27 + 0xe0));
          }
          uVar3 = FUN_0675ff58(lVar10 + 0x20,0);
          uVar2 = FUN_067690d8(uVar8,uVar3,0);
          lVar10 = *plVar6;
          if ((uVar2 & 1) == 0) {
            (**(code **)(lVar10 + 0x1b8))(plVar6,*(undefined8 *)(lVar10 + 0x1c0));
            plVar6 = (long *)(**(code **)(*plVar6 + 0x2f8))(plVar6);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
            FUN_0697005c();
          }
          else {
            plVar4 = (long *)(**(code **)(lVar10 + 0x2f8))(plVar6);
            if (plVar4 == (long *)0x0) goto LAB_0696ff88;
            if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(unaff_x27 + 0x78) + 0x40)) {
LAB_0696ff90:
                    /* WARNING: Subroutine does not return */
              FUN_03a8ad40();
            }
            puVar5 = (undefined4 *)thunk_FUN_03ac7604();
            in_stack_00000018._4_4_ = *puVar5;
            FUN_067638d0((long)&stack0x00000018 + 4,*unaff_x26,0);
            (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
            FUN_0697005c();
          }
        }
        uVar1 = *(uint *)(lVar9 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar1);
    }
    return;
  }
LAB_0696ff88:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


