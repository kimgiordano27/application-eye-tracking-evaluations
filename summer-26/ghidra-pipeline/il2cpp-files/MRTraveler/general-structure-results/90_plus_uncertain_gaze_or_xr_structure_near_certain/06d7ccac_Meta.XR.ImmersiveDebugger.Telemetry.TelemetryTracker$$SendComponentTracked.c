/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$SendComponentTracked
ENTRY_POINT: 06d7ccac
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__SendComponentTracked(void)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long unaff_x20;
  int unaff_w22;
  long unaff_x23;
  ulong unaff_x25;
  undefined8 unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000008;
  
code_r0x06d7ccac:
  lVar7 = *(long *)(unaff_x23 + 0x10);
  *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
  if (lVar7 != 0) {
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    uVar5 = unaff_x25;
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
      puVar3 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
      *puVar3 = unaff_x26;
      thunk_FUN_03d233cc(puVar3,unaff_x26);
    }
    else {
      FUN_05212cf4();
    }
LAB_06d7cbd4:
    do {
      unaff_x25 = uVar5 - 1;
      if ((long)uVar5 < 1) {
        if (unaff_x23 == 0) goto LAB_06d7cfc8;
        uVar4 = FUN_05214770();
        *(undefined8 *)(unaff_x20 + 0x40) = uVar4;
        thunk_FUN_03d233cc((undefined8 *)(unaff_x20 + 0x40),uVar4);
        FUN_05214544();
        if ((*(char *)(unaff_x20 + 0x1a) != '\0') && (*(int *)(unaff_x20 + 0x2c) == 0x55)) {
          if (*(int *)(unaff_x20 + 0x30) == 0x2d) {
            uVar6 = 0x10;
          }
          else {
            if (*(int *)(unaff_x20 + 0x30) != 0x13) goto LAB_06d7cd84;
            uVar6 = 0xb;
          }
          *(undefined4 *)(unaff_x20 + 0x2c) = uVar6;
        }
LAB_06d7cd84:
        uVar4 = FUN_05214770();
        *(undefined8 *)(unaff_x20 + 0x48) = uVar4;
        thunk_FUN_03d233cc((undefined8 *)(unaff_x20 + 0x48),uVar4);
        if (*(long *)(unaff_x20 + 0x40) == 0) goto LAB_06d7cfc8;
        uVar4 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e6abb8,
                             *(undefined4 *)(*(long *)(unaff_x20 + 0x40) + 0x18));
        *(undefined8 *)(unaff_x20 + 0x50) = uVar4;
        thunk_FUN_03d233cc();
        FUN_06d7ecf8();
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        if (DAT_09410f4c == '\0') {
          FUN_03c8f898(PTR_DAT_08e69c30);
          DAT_09410f4c = '\x01';
        }
        lVar7 = *unaff_x28;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar7 = *unaff_x28;
        }
        uVar4 = **(undefined8 **)(lVar7 + 0xb8);
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_03cd7500(*unaff_x27);
        }
        uVar5 = FUN_085e285c(uVar4,0);
        if ((uVar5 & 1) != 0) {
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          if (DAT_09410f4c == '\0') {
            FUN_03c8f898(PTR_DAT_08e69c30);
            DAT_09410f4c = '\x01';
          }
          lVar7 = *unaff_x28;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
            lVar7 = *unaff_x28;
          }
          if ((**(long **)(lVar7 + 0xb8) == 0) ||
             (lVar7 = FUN_085dbb98(**(long **)(lVar7 + 0xb8),0), lVar7 == 0)) goto LAB_06d7cfc8;
          lVar7 = FUN_0469cbf4(lVar7,*(undefined8 *)PTR_DAT_08e8f3f0);
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_03cd7500(*unaff_x27);
          }
          uVar5 = FUN_085decd4(lVar7,0,0);
          if ((uVar5 & 1) != 0) {
            if (lVar7 != 0) {
              *(undefined8 *)(unaff_x20 + 0x78) = *(undefined8 *)(lVar7 + 0x30);
              thunk_FUN_03d233cc((undefined8 *)(unaff_x20 + 0x78));
              return;
            }
            goto LAB_06d7cfc8;
          }
          if (in_stack_00000008 == 0) goto LAB_06d7cfc8;
          if (*(int *)(in_stack_00000008 + 0x48) == 1) {
            lVar7 = FUN_085dbb98();
            if (lVar7 != 0) {
              uVar4 = FUN_085e29cc(lVar7,0);
              uVar4 = FUN_06f7465c(*(undefined8 *)PTR_DAT_08e8f408,uVar4,
                                   *(undefined8 *)PTR_DAT_08e8f410,0);
              if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
                thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
              }
              FUN_085a437c(uVar4,0);
              return;
            }
            goto LAB_06d7cfc8;
          }
        }
        return;
      }
      unaff_x26 = FUN_085875ac();
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*unaff_x27);
      }
      uVar2 = FUN_085dfaac(unaff_x26,0,0);
      uVar5 = unaff_x25;
    } while ((uVar2 & 1) != 0);
    if (unaff_w22 == 1) {
      lVar7 = *unaff_x29;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar7 = *unaff_x29;
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      if (lVar7 == 0) goto LAB_06d7cfc8;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x25) {
LAB_06d7cfcc:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      if (*(int *)(lVar7 + unaff_x25 * 4 + 0x20) != 6) goto LAB_06d7cbd4;
    }
    else if (unaff_w22 == 0) {
      lVar7 = *unaff_x29;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar7 = *unaff_x29;
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      if (lVar7 == 0) goto LAB_06d7cfc8;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x25) goto LAB_06d7cfcc;
      if (*(int *)(lVar7 + unaff_x25 * 4 + 0x20) != 5) goto LAB_06d7cbd4;
    }
    lVar7 = *(long *)(unaff_x20 + 0x38);
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x18) == 0)) goto LAB_06d7cca8;
    iVar8 = (int)*(long *)(lVar7 + 0x18);
    if (0 < iVar8) {
      iVar9 = 0;
      do {
        if (unaff_x25 == *(uint *)(lVar7 + (long)iVar9 * 4 + 0x20)) goto LAB_06d7cca8;
        iVar9 = iVar9 + 1;
      } while (iVar8 != iVar9);
    }
    goto LAB_06d7cbd4;
  }
  goto LAB_06d7cfc8;
LAB_06d7cca8:
  if (unaff_x23 == 0) {
LAB_06d7cfc8:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  goto code_r0x06d7ccac;
}


