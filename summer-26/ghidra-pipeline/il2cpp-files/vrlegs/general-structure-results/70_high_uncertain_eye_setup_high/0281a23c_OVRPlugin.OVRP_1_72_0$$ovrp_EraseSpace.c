/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_EraseSpace
ENTRY_POINT: 0281a23c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin_OVRP_1_72_0__ovrp_EraseSpace(ulong param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar10;
  ulong uVar11;
  
  if ((param_1 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cd85f0);
    *(undefined1 *)(unaff_x21 + 0x394) = 1;
  }
  puVar2 = PTR_DAT_03cd85f0;
  if (unaff_x19 != 0) {
    uVar6 = *(ulong *)(unaff_x19 + 0x18);
    if (0 < (int)uVar6) {
      uVar11 = 0;
      do {
        if ((uVar6 & 0xffffffff) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x20 == (long *)0x0) goto LAB_0281a344;
        lVar8 = *unaff_x20;
        uVar1 = *(undefined4 *)(unaff_x19 + uVar11 * 4 + 0x20);
        lVar5 = *(long *)puVar2;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar5) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0281a2d4;
            }
            uVar9 = uVar9 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_01a472ec(unaff_x20,lVar5,0);
LAB_0281a2d4:
        plVar4 = (long *)(*(code *)*puVar3)(unaff_x20,uVar1,puVar3[1]);
        if (uVar11 == (int)uVar6 - 1) {
          return plVar4;
        }
        if (plVar4 == (long *)0x0) {
          unaff_x20 = (long *)0x0;
        }
        else {
          uVar10 = *(undefined8 *)puVar2;
          unaff_x20 = (long *)thunk_FUN_01a89d6c(plVar4,uVar10);
          if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6ee0(plVar4,uVar10);
          }
        }
        uVar6 = *(ulong *)(unaff_x19 + 0x18);
        uVar11 = uVar11 + 1;
      } while ((long)uVar11 < (long)(int)uVar6);
    }
    return unaff_x20;
  }
LAB_0281a344:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


