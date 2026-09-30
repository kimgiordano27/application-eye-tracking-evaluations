/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$SendStart
ENTRY_POINT: 06d7cc88
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__SendStart(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  long in_x9;
  int in_w10;
  long unaff_x20;
  int unaff_w22;
  long unaff_x23;
  ulong uVar7;
  ulong unaff_x25;
  undefined8 unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000008;
  
code_r0x06d7cc88:
  do {
    uVar7 = unaff_x25;
    if (unaff_x25 == *(uint *)(param_1 + (long)in_w10 * 4 + 0x20)) goto LAB_06d7cca8;
    in_w10 = in_w10 + 1;
  } while ((int)in_x9 != in_w10);
LAB_06d7cbd4:
  uVar7 = unaff_x25 - 1;
  if ((long)unaff_x25 < 1) {
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
    if (*(long *)(unaff_x20 + 0x40) != 0) {
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
      lVar5 = *unaff_x28;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar5 = *unaff_x28;
      }
      uVar4 = **(undefined8 **)(lVar5 + 0xb8);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*unaff_x27);
      }
      uVar7 = FUN_085e285c(uVar4,0);
      if ((uVar7 & 1) == 0) {
        return;
      }
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if (DAT_09410f4c == '\0') {
        FUN_03c8f898(PTR_DAT_08e69c30);
        DAT_09410f4c = '\x01';
      }
      lVar5 = *unaff_x28;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar5 = *unaff_x28;
      }
      if ((**(long **)(lVar5 + 0xb8) != 0) &&
         (lVar5 = FUN_085dbb98(**(long **)(lVar5 + 0xb8),0), lVar5 != 0)) {
        lVar5 = FUN_0469cbf4(lVar5,*(undefined8 *)PTR_DAT_08e8f3f0);
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_03cd7500(*unaff_x27);
        }
        uVar7 = FUN_085decd4(lVar5,0,0);
        if ((uVar7 & 1) == 0) {
          if (in_stack_00000008 != 0) {
            if (*(int *)(in_stack_00000008 + 0x48) != 1) {
              return;
            }
            lVar5 = FUN_085dbb98();
            if (lVar5 != 0) {
              uVar4 = FUN_085e29cc(lVar5,0);
              uVar4 = FUN_06f7465c(*(undefined8 *)PTR_DAT_08e8f408,uVar4,
                                   *(undefined8 *)PTR_DAT_08e8f410,0);
              if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
                thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
              }
              FUN_085a437c(uVar4,0);
              return;
            }
          }
        }
        else if (lVar5 != 0) {
          *(undefined8 *)(unaff_x20 + 0x78) = *(undefined8 *)(lVar5 + 0x30);
          thunk_FUN_03d233cc((undefined8 *)(unaff_x20 + 0x78));
          return;
        }
      }
    }
  }
  else {
    unaff_x26 = FUN_085875ac();
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*unaff_x27);
    }
    uVar2 = FUN_085dfaac(unaff_x26,0,0);
    unaff_x25 = uVar7;
    if ((uVar2 & 1) != 0) goto LAB_06d7cbd4;
    if (unaff_w22 == 1) {
      lVar5 = *unaff_x29;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar5 = *unaff_x29;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar5 == 0) goto LAB_06d7cfc8;
      if (*(uint *)(lVar5 + 0x18) <= uVar7) {
LAB_06d7cfcc:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      if (*(int *)(lVar5 + uVar7 * 4 + 0x20) != 6) goto LAB_06d7cbd4;
    }
    else if (unaff_w22 == 0) {
      lVar5 = *unaff_x29;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar5 = *unaff_x29;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar5 == 0) goto LAB_06d7cfc8;
      if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_06d7cfcc;
      if (*(int *)(lVar5 + uVar7 * 4 + 0x20) != 5) goto LAB_06d7cbd4;
    }
    param_1 = *(long *)(unaff_x20 + 0x38);
    if ((param_1 != 0) && (in_x9 = *(long *)(param_1 + 0x18), in_x9 != 0)) {
      if (0 < (int)in_x9) goto code_r0x06d7cc84;
      goto LAB_06d7cbd4;
    }
LAB_06d7cca8:
    if (unaff_x23 != 0) {
      lVar5 = *(long *)(unaff_x23 + 0x10);
      *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_06d7cfc8;
      uVar1 = *(uint *)(unaff_x23 + 0x18);
      unaff_x25 = uVar7;
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
        puVar3 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
        *puVar3 = unaff_x26;
        thunk_FUN_03d233cc(puVar3,unaff_x26);
      }
      else {
        FUN_05212cf4();
      }
      goto LAB_06d7cbd4;
    }
  }
LAB_06d7cfc8:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
code_r0x06d7cc84:
  in_w10 = 0;
  goto code_r0x06d7cc88;
}


