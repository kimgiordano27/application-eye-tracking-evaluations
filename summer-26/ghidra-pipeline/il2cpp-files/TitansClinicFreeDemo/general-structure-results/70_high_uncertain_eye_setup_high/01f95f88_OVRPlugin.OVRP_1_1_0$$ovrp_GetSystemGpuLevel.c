/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemGpuLevel
ENTRY_POINT: 01f95f88
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin_OVRP_1_1_0__ovrp_GetSystemGpuLevel(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  long unaff_x26;
  long *unaff_x27;
  long lVar10;
  undefined8 unaff_x29;
  int iStack0000000000000000;
  int iStack0000000000000004;
  
  uVar2 = FUN_01f801dc();
  if ((uVar2 & 1) == 0) {
LAB_01f95fc0:
    if (unaff_x21 == 0) {
LAB_01f96304:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    if (*(int *)(unaff_x21 + 0x18) < 1) {
      _iStack0000000000000000 = 0;
    }
    else {
      _iStack0000000000000000 = 0;
      uVar2 = 0;
      do {
        if (unaff_x22 == 0) {
          lVar3 = *unaff_x27;
LAB_01f96040:
          if (*(int *)(lVar3 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar4 = FUN_01f801dc();
          if ((uVar4 & 1) == 0) {
            if (unaff_x26 == 0) goto LAB_01f96304;
            if (*(uint *)(unaff_x26 + 0x18) <= uVar2) goto LAB_01f96300;
            if (unaff_x20 == 0) goto LAB_01f96304;
LAB_01f960b4:
            uVar8 = *(uint *)(unaff_x26 + 0x20 + uVar2 * 4);
            if (*(uint *)(unaff_x20 + 0x18) <= uVar8) goto LAB_01f96300;
            plVar5 = *(long **)(unaff_x20 + (long)(int)uVar8 * 8 + 0x20);
            if (plVar5 == (long *)0x0) goto LAB_01f96304;
            uVar6 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
          }
          else {
            if (unaff_x26 == 0) goto LAB_01f96304;
            if (*(uint *)(unaff_x26 + 0x18) <= uVar2) goto LAB_01f96300;
            if (unaff_x20 == 0) goto LAB_01f96304;
            uVar6 = unaff_x23;
            if (*(int *)(unaff_x26 + 0x20 + uVar2 * 4) < *(int *)(unaff_x20 + 0x18) + -1) {
              if (*(uint *)(unaff_x26 + 0x18) <= uVar2) goto LAB_01f96300;
              goto LAB_01f960b4;
            }
          }
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar4 = FUN_01f801dc();
          if ((uVar4 & 1) == 0) {
            if (unaff_x24 == 0) goto LAB_01f96304;
            if (*(uint *)(unaff_x24 + 0x18) <= uVar2) goto LAB_01f96300;
            if (unaff_x19 == 0) goto LAB_01f96304;
LAB_01f9615c:
            uVar8 = *(uint *)(unaff_x24 + 0x20 + uVar2 * 4);
            if (*(uint *)(unaff_x19 + 0x18) <= uVar8) goto LAB_01f96300;
            plVar5 = *(long **)(unaff_x19 + (long)(int)uVar8 * 8 + 0x20);
            if (plVar5 == (long *)0x0) goto LAB_01f96304;
            uVar7 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
          }
          else {
            if (unaff_x24 == 0) goto LAB_01f96304;
            if (*(uint *)(unaff_x24 + 0x18) <= uVar2) goto LAB_01f96300;
            if (unaff_x19 == 0) goto LAB_01f96304;
            uVar7 = unaff_x29;
            if (*(int *)(unaff_x24 + 0x20 + uVar2 * 4) < *(int *)(unaff_x19 + 0x18) + -1) {
              if (*(uint *)(unaff_x24 + 0x18) <= uVar2) goto LAB_01f96300;
              goto LAB_01f9615c;
            }
          }
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar4 = FUN_01f7f404(uVar6,uVar7,0);
          if ((uVar4 & 1) == 0) {
            if (*(uint *)(unaff_x21 + 0x18) <= uVar2) {
LAB_01f96300:
                    /* WARNING: Subroutine does not return */
              FUN_01230ca8();
            }
            uVar9 = *(undefined8 *)(unaff_x21 + 0x20 + uVar2 * 8);
            if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            uVar4 = FUN_01f95b1c(uVar6,uVar7,uVar9);
            iVar1 = (int)uVar4;
            unaff_x27 = (long *)PTR_DAT_027b32e0;
            if (iVar1 == 1) {
              _iStack0000000000000000 = CONCAT44(1,iStack0000000000000000);
            }
            else if (iVar1 == 2) {
              _iStack0000000000000000 = CONCAT44(iStack0000000000000004,1);
            }
            else if (iVar1 == 0) {
              return uVar4;
            }
          }
        }
        else {
          if (*(uint *)(unaff_x22 + 0x18) <= uVar2) goto LAB_01f96300;
          lVar3 = *unaff_x27;
          lVar10 = *(long *)(unaff_x22 + 0x20 + uVar2 * 8);
          if (*(int *)(lVar3 + 0xe0) == 0) {
            thunk_FUN_01220628();
            lVar3 = *unaff_x27;
          }
          unaff_x27 = (long *)PTR_DAT_027b32e0;
          if (lVar10 != *(long *)(*(long *)(lVar3 + 0xb8) + 0x18)) goto LAB_01f96040;
        }
        uVar2 = uVar2 + 1;
      } while ((long)uVar2 < (long)*(int *)(unaff_x21 + 0x18));
    }
    if (iStack0000000000000000 != iStack0000000000000004) {
      uVar8 = 1;
      if ((_iStack0000000000000000 & 0x100000000) == 0) {
        uVar8 = 2;
      }
      return (ulong)uVar8;
    }
    if (unaff_x22 != 0 && (_iStack0000000000000000 & 0x100000000) == 0) {
      if ((unaff_x20 == 0) || (unaff_x19 == 0)) goto LAB_01f96304;
      if (*(int *)(unaff_x19 + 0x18) < *(int *)(unaff_x20 + 0x18)) goto LAB_01f962cc;
      if (*(int *)(unaff_x20 + 0x18) < *(int *)(unaff_x19 + 0x18)) {
        return 2;
      }
    }
    uVar2 = 0;
  }
  else {
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar2 = FUN_01f7f404();
    if ((uVar2 & 1) == 0) goto LAB_01f95fc0;
LAB_01f962cc:
    uVar2 = 1;
  }
  return uVar2;
}


