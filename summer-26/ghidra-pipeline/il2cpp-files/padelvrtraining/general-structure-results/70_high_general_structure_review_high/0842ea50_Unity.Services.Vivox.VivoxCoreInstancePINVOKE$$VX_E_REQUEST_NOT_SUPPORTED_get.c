/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$VX_E_REQUEST_NOT_SUPPORTED_get
ENTRY_POINT: 0842ea50
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0842ee20) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_REQUEST_NOT_SUPPORTED_get(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *plVar9;
  
  uVar3 = (**(code **)(param_1 + 0x138))();
  FUN_06fc5244(*(undefined8 *)PTR_DAT_091a8618,uVar3,0);
  if (unaff_x19 != 0) {
    FUN_06b6dddc();
    if (*(int *)(*(long *)PTR_DAT_091a0bf0 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_08a08fd8(0);
    puVar1 = PTR_DAT_091a2770;
    if (unaff_x19 != 0) {
      FUN_06b6dddc();
      FUN_06b6dddc();
      uVar3 = FUN_03d2d394(*(undefined8 *)puVar1,0);
      lVar4 = FUN_03d2d394(*(undefined8 *)puVar1,1);
      puVar1 = PTR_DAT_091baaa8;
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d550();
        }
        *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR_DAT_091a85f0;
        uVar5 = thunk_FUN_03d1023c();
        uVar5 = FUN_0842e078(uVar5,lVar4);
        uVar6 = FUN_06fd246c(uVar5,0);
        if ((uVar6 & 1) == 0) {
          uVar6 = FUN_06b6dddc();
        }
        uVar5 = *(undefined8 *)puVar1;
        uVar3 = FUN_0842e150(uVar6,uVar3);
        uVar6 = FUN_06fd246c(uVar3,0);
        if ((((uVar6 & 1) == 0) ||
            (uVar6 = thunk_FUN_06fd18b4(uVar5,*(undefined8 *)PTR_DAT_091a5a20,0), (uVar6 & 1) != 0))
           || (uVar6 = thunk_FUN_06fd18b4(uVar5,*(undefined8 *)PTR_DAT_091b2d80,0), (uVar6 & 1) != 0
              )) {
          FUN_06b6dddc();
        }
        if (unaff_x20 == 0) {
          return;
        }
        plVar9 = *(long **)(unaff_x20 + 0x28);
        if (plVar9 == (long *)0x0) {
          return;
        }
        lVar4 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_091af380) {
              puVar7 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0842ec8c;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)PTR_DAT_091af380,0);
LAB_0842ec8c:
        plVar9 = (long *)(*(code *)*puVar7)(plVar9,puVar7[1]);
        puVar2 = PTR_DAT_091af388;
        puVar1 = PTR_DAT_091a1508;
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        do {
          lVar4 = *plVar9;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 != 0) {
            piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_0842ed04;
              }
              uVar6 = uVar6 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)puVar1,0);
LAB_0842ed04:
          uVar6 = (*(code *)*puVar7)(plVar9,puVar7[1]);
          if ((uVar6 & 1) == 0) goto LAB_0842ed8c;
          lVar4 = *plVar9;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 != 0) {
            piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_0842ed60;
              }
              uVar6 = uVar6 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)puVar2,0);
LAB_0842ed60:
          (*(code *)*puVar7)(plVar9,puVar7[1]);
          FUN_06b6ddc8();
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
LAB_0842ed8c:
  if (plVar9 != (long *)0x0) {
    lVar4 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_091a14e0) {
          puVar7 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0842ede8;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)PTR_DAT_091a14e0,0);
LAB_0842ede8:
    (*(code *)*puVar7)(plVar9,puVar7[1]);
  }
  return;
}


