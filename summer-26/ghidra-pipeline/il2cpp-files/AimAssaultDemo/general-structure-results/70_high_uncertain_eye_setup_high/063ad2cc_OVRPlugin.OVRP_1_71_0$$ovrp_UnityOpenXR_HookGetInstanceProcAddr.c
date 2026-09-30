/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_HookGetInstanceProcAddr
ENTRY_POINT: 063ad2cc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_HookGetInstanceProcAddr(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x24;
  long unaff_x26;
  
  FUN_0373b518(*(undefined8 *)(param_1 + 0xe20));
  FUN_0373b518(PTR_DAT_07db6d50);
  FUN_0373b518(PTR_DAT_07db6c00);
  FUN_0373b518(PTR_DAT_07db6d58);
  FUN_0373b518(PTR_DAT_07db2190);
  *(undefined1 *)(unaff_x26 + 0x6af) = 1;
  if (unaff_x19 != (long *)0x0) {
    lVar7 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07db6c00) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_063ad364;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c();
LAB_063ad364:
    iVar2 = (*(code *)*puVar3)();
    puVar1 = PTR_DAT_07db2190;
    if (iVar2 == 9) {
      thunk_FUN_037a15ac(PTR_DAT_07d88078);
      FUN_031ae340();
      uVar4 = FUN_061d52c8(0);
      uVar6 = thunk_FUN_037a15ac(PTR_DAT_07db6f10);
      FUN_063349e4(uVar6,uVar4);
      uVar4 = FUN_062d5fcc();
      uVar6 = thunk_FUN_037a15ac(PTR_DAT_07db6f18);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar4,uVar6);
    }
    if (*(int *)(*(long *)PTR_DAT_07db6d58 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_06a0d350();
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)puVar1);
    }
    FUN_063ab8e0();
    uVar9 = FUN_063349dc();
    if ((uVar9 & 1) == 0) {
      if (unaff_x24 != (long *)0x0) {
        (**(code **)(*unaff_x24 + 0x238))();
        if (unaff_x20 != (long *)0x0) {
          lVar7 = *unaff_x20;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07db6e20) {
                puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0xb) * 0x10 + 0x138);
                goto FUN_063ad4c8;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar3 = (undefined8 *)FUN_0377596c();
FUN_063ad4c8:
          uVar4 = (*(code *)*puVar3)();
          goto LAB_063ad4e0;
        }
      }
    }
    else if (unaff_x20 != (long *)0x0) {
      lVar7 = *unaff_x20;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07db6e20) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 10) * 0x10 + 0x138);
            goto LAB_063ad4a0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_0377596c();
LAB_063ad4a0:
      uVar4 = (*(code *)*puVar3)();
LAB_063ad4e0:
      puVar1 = PTR_DAT_07db6d50;
      lVar7 = thunk_FUN_037787d0();
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54();
      }
      lVar7 = *(long *)puVar1;
      plVar5 = (long *)thunk_FUN_037787d0();
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54();
      }
      lVar8 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_063ad564;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_0377596c(plVar5,lVar7,0);
LAB_063ad564:
                    /* WARNING: Could not recover jumptable at 0x063ad584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar5,uVar4,puVar3[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


