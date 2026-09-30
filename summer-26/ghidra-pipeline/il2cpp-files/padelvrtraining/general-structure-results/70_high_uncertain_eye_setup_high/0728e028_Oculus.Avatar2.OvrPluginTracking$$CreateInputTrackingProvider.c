/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$CreateInputTrackingProvider
ENTRY_POINT: 0728e028
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * Oculus_Avatar2_OvrPluginTracking__CreateInputTrackingProvider(undefined8 param_1)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  uint uVar11;
  
  puVar3 = PTR_DAT_091f9ab8;
  if ((DAT_09843b20 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091f9ad0);
    FUN_03d2d2b0(PTR_DAT_091f9ab8);
    FUN_03d2d2b0(PTR_DAT_091a2770);
    FUN_03d2d2b0(PTR_DAT_091a1be8);
    FUN_03d2d2b0(PTR_DAT_09218948);
    FUN_03d2d2b0(PTR_DAT_09218950);
    DAT_09843b20 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  lVar5 = FUN_072640d8(param_1,0,1,0);
  puVar3 = PTR_DAT_09218948;
  if (lVar5 == 0) {
LAB_0728e260:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar1 = *(uint *)(lVar5 + 0x18);
  if (0 < (int)uVar1) {
    uVar11 = 0;
    do {
      if (uVar1 <= uVar11) {
LAB_0728e264:
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      lVar10 = *(long *)(lVar5 + (long)(int)uVar11 * 8 + 0x20);
      if ((lVar10 == 0) || (plVar6 = (long *)thunk_FUN_03d9f2a8(lVar10,0), plVar6 == (long *)0x0))
      goto LAB_0728e260;
      uVar7 = (**(code **)(*plVar6 + 0x2f8))(plVar6,*(undefined8 *)(*plVar6 + 0x300));
      uVar8 = FUN_06fd1900(uVar7,*(undefined8 *)puVar3,4,0);
      puVar4 = PTR_DAT_091f9ad0;
      if ((uVar8 & 1) != 0) {
        lVar5 = *(long *)PTR_DAT_091f9ad0;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_03db619c();
          lVar5 = *(long *)puVar4;
        }
        if (*(long *)(*(long *)(lVar5 + 0xb8) + 0x18) == 0) {
          lVar5 = FUN_03d2d394(*(undefined8 *)PTR_DAT_091a2770,1);
          if (lVar5 == 0) goto LAB_0728e260;
          if (*(int *)(lVar5 + 0x18) == 0) goto LAB_0728e264;
          *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)PTR_DAT_09218950;
          thunk_FUN_03d1023c();
          uVar7 = FUN_07261c90(plVar6,lVar5,0);
          lVar5 = *(long *)puVar4;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_03db619c(lVar5);
            lVar5 = *(long *)puVar4;
          }
          puVar9 = (undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18);
          *puVar9 = uVar7;
          thunk_FUN_03d1023c(puVar9,uVar7);
          lVar5 = *(long *)puVar4;
        }
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_03db619c();
          lVar5 = *(long *)puVar4;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
        if (lVar5 != 0) {
          plVar6 = (long *)FUN_07261a2c(lVar5,lVar10,*(undefined8 *)PTR_DAT_09218950,0);
          if (plVar6 == (long *)0x0) {
            return (long *)0x0;
          }
          bVar2 = *(byte *)(*(long *)PTR_DAT_091a1be8 + 0x130);
          if ((bVar2 <= *(byte *)(*plVar6 + 0x130)) &&
             (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) ==
              *(long *)PTR_DAT_091a1be8)) {
            return plVar6;
          }
                    /* WARNING: Subroutine does not return */
          FUN_03d2d8e4();
        }
        goto LAB_0728e260;
      }
      uVar1 = *(uint *)(lVar5 + 0x18);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)uVar1);
  }
  return (long *)0x0;
}


