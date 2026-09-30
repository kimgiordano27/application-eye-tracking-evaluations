/*
FUNCTION_NAME: OVRPlugin.OVRP_1_29_0$$ovrp_GetLayerAndroidSurfaceObject
ENTRY_POINT: 0569e700
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0569e8f0) */

void OVRPlugin_OVRP_1_29_0__ovrp_GetLayerAndroidSurfaceObject(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x21;
  undefined8 uVar8;
  ulong uVar9;
  
  if ((param_1 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fbff0);
    *(undefined1 *)(unaff_x21 + 0x893) = 1;
  }
  lVar2 = FUN_054a5f88();
  puVar1 = PTR_DAT_069fbff0;
  if (lVar2 != 0) {
    if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
      uVar9 = 0;
      uVar6 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      do {
        if (uVar6 <= uVar9) goto LAB_0569e8ec;
        uVar8 = *(undefined8 *)(lVar2 + uVar9 * 8 + 0x20);
        plVar3 = (long *)FUN_0538828c(0);
        if (((plVar3 == (long *)0x0) ||
            (lVar4 = (**(code **)(*plVar3 + 600))(plVar3,uVar8,*(undefined8 *)(*plVar3 + 0x260)),
            lVar4 == 0)) || (unaff_x19 == (long *)0x0)) goto LAB_0569e8e8;
        (**(code **)(*unaff_x19 + 0x388))();
        plVar3 = (long *)FUN_054a7ab8(uVar8,0);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_054af9c4();
        if (plVar3 != (long *)0x0) {
          lVar4 = *plVar3;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                puVar5 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_0569e828;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar5 = (undefined8 *)FUN_02dd004c(plVar3,*(long *)puVar1,0);
LAB_0569e828:
          (*(code *)*puVar5)(plVar3,puVar5[1]);
        }
        uVar6 = (ulong)*(uint *)(lVar2 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)*(uint *)(lVar2 + 0x18));
    }
    lVar2 = FUN_054a62f8();
    if (lVar2 != 0) {
      if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
        uVar9 = 0;
        uVar6 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
        do {
          if (uVar6 <= uVar9) {
LAB_0569e8ec:
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          FUN_0569e6d8(*(undefined8 *)(lVar2 + 0x20 + uVar9 * 8));
          uVar6 = (ulong)*(uint *)(lVar2 + 0x18);
          uVar9 = uVar9 + 1;
        } while ((long)uVar9 < (long)(int)*(uint *)(lVar2 + 0x18));
      }
      return;
    }
  }
LAB_0569e8e8:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


