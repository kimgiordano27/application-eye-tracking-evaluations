/*
FUNCTION_NAME: Meta.XR.Movement.NativeUtilityPlugin$$WriteConfigDataToJson
ENTRY_POINT: 06daa36c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 104
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Movement_NativeUtilityPlugin__WriteConfigDataToJson(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  ulong uVar7;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  double dVar8;
  double dVar9;
  double dVar10;
  
  if (1 < *(uint *)(unaff_x20 + -8)) {
    *(undefined8 *)(unaff_x19 + 0x28) = param_1;
    thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x28),param_1);
    uVar2 = FUN_03c8f97c(*unaff_x22,0x24);
    if (2 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
      thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x30),uVar2);
      uVar2 = FUN_03c8f97c(*unaff_x22,0x24);
      puVar1 = PTR_DAT_08e6a6b8;
      if (3 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
        thunk_FUN_03d233cc();
        **(long **)(*unaff_x21 + 0xb8) = unaff_x19;
        thunk_FUN_03d233cc(*(undefined8 *)(*unaff_x21 + 0xb8));
        dVar10 = DAT_018ae850;
        uVar7 = 0;
        do {
          lVar3 = **(long **)(*unaff_x21 + 0xb8);
          if (lVar3 == 0) goto LAB_06daa830;
          if (*(int *)(lVar3 + 0x18) == 0) goto LAB_06daa82c;
          lVar3 = *(long *)(lVar3 + 0x20);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          if (lVar3 == 0) goto LAB_06daa830;
          if (*(uint *)(lVar3 + 0x18) <= uVar7) goto LAB_06daa82c;
          dVar8 = sin(((double)(int)uVar7 + 0.5) * dVar10);
          lVar5 = uVar7 * 4;
          uVar7 = uVar7 + 1;
          *(float *)(lVar3 + lVar5 + 0x20) = (float)dVar8;
        } while (uVar7 != 0x24);
        uVar7 = 0;
        do {
          lVar3 = **(long **)(*unaff_x21 + 0xb8);
          if (lVar3 == 0) goto LAB_06daa830;
          if (*(uint *)(lVar3 + 0x18) < 2) goto LAB_06daa82c;
          lVar3 = *(long *)(lVar3 + 0x28);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          if (lVar3 == 0) goto LAB_06daa830;
          if (*(uint *)(lVar3 + 0x18) <= uVar7) goto LAB_06daa82c;
          dVar8 = sin(((double)(int)uVar7 + 0.5) * dVar10);
          lVar5 = uVar7 * 4;
          uVar7 = uVar7 + 1;
          *(float *)(lVar3 + lVar5 + 0x20) = (float)dVar8;
        } while (uVar7 != 0x12);
        lVar3 = **(long **)(*unaff_x21 + 0xb8);
        if (lVar3 != 0) {
          uVar4 = *(uint *)(lVar3 + 0x18);
          lVar5 = 0x1a;
          do {
            if (uVar4 < 2) goto LAB_06daa82c;
            lVar6 = *(long *)(lVar3 + 0x28);
            if (lVar6 == 0) goto LAB_06daa830;
            if ((ulong)*(uint *)(lVar6 + 0x18) <= lVar5 - 8U) goto LAB_06daa82c;
            *(undefined4 *)(lVar6 + lVar5 * 4) = 0x3f800000;
            dVar8 = DAT_018ae7a0;
            lVar5 = lVar5 + 1;
          } while (lVar5 != 0x20);
          lVar5 = 0x20;
          do {
            if (lVar3 == 0) goto LAB_06daa830;
            if (*(uint *)(lVar3 + 0x18) < 2) goto LAB_06daa82c;
            lVar3 = *(long *)(lVar3 + 0x28);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            if (lVar3 == 0) goto LAB_06daa830;
            if ((ulong)*(uint *)(lVar3 + 0x18) <= lVar5 - 8U) goto LAB_06daa82c;
            dVar9 = sin(((double)((int)lVar5 + -8) + 0.5 + -18.0) * dVar8);
            *(float *)(lVar3 + lVar5 * 4) = (float)dVar9;
            lVar5 = lVar5 + 1;
            lVar3 = **(long **)(*unaff_x21 + 0xb8);
          } while (lVar5 != 0x26);
          if (lVar3 != 0) {
            uVar2 = *(undefined8 *)(lVar3 + 0x18);
            lVar5 = 0x26;
            do {
              uVar4 = (uint)uVar2;
              if (uVar4 < 2) goto LAB_06daa82c;
              lVar6 = *(long *)(lVar3 + 0x28);
              if (lVar6 == 0) goto LAB_06daa830;
              if ((ulong)*(uint *)(lVar6 + 0x18) <= lVar5 - 8U) goto LAB_06daa82c;
              *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
              lVar5 = lVar5 + 1;
            } while (lVar5 != 0x2c);
            uVar7 = 0;
            do {
              if (uVar4 < 4) goto LAB_06daa82c;
              lVar5 = *(long *)(lVar3 + 0x38);
              if (lVar5 == 0) goto LAB_06daa830;
              if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_06daa82c;
              lVar6 = uVar7 * 4;
              uVar7 = uVar7 + 1;
              *(undefined4 *)(lVar5 + lVar6 + 0x20) = 0;
            } while (uVar7 != 6);
            lVar5 = 0xe;
            do {
              if (lVar3 == 0) goto LAB_06daa830;
              if (*(uint *)(lVar3 + 0x18) < 4) goto LAB_06daa82c;
              lVar3 = *(long *)(lVar3 + 0x38);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              if (lVar3 == 0) goto LAB_06daa830;
              if ((ulong)*(uint *)(lVar3 + 0x18) <= lVar5 - 8U) goto LAB_06daa82c;
              dVar9 = sin(((double)((int)lVar5 + -8) + 0.5 + -6.0) * dVar8);
              *(float *)(lVar3 + lVar5 * 4) = (float)dVar9;
              lVar5 = lVar5 + 1;
              lVar3 = **(long **)(*unaff_x21 + 0xb8);
            } while (lVar5 != 0x14);
            if (lVar3 != 0) {
              uVar4 = *(uint *)(lVar3 + 0x18);
              lVar5 = 0x14;
              do {
                if (uVar4 < 4) goto LAB_06daa82c;
                lVar6 = *(long *)(lVar3 + 0x38);
                if (lVar6 == 0) goto LAB_06daa830;
                if ((ulong)*(uint *)(lVar6 + 0x18) <= lVar5 - 8U) goto LAB_06daa82c;
                *(undefined4 *)(lVar6 + lVar5 * 4) = 0x3f800000;
                lVar5 = lVar5 + 1;
              } while (lVar5 != 0x1a);
              lVar5 = 0x1a;
              do {
                if (*(uint *)(lVar3 + 0x18) < 4) goto LAB_06daa82c;
                lVar3 = *(long *)(lVar3 + 0x38);
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                }
                if (lVar3 == 0) break;
                if ((ulong)*(uint *)(lVar3 + 0x18) <= lVar5 - 8U) goto LAB_06daa82c;
                dVar9 = sin(((double)((int)lVar5 + -8) + 0.5) * dVar10);
                *(float *)(lVar3 + lVar5 * 4) = (float)dVar9;
                if (lVar5 == 0x2b) {
                  uVar7 = 0;
                  goto LAB_06daa764;
                }
                lVar5 = lVar5 + 1;
                lVar3 = **(long **)(*unaff_x21 + 0xb8);
              } while (lVar3 != 0);
            }
          }
        }
        goto LAB_06daa830;
      }
    }
  }
  goto LAB_06daa82c;
  while( true ) {
    if (*(uint *)(lVar3 + 0x18) < 3) goto LAB_06daa82c;
    lVar3 = *(long *)(lVar3 + 0x30);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if (lVar3 == 0) goto LAB_06daa830;
    if (*(uint *)(lVar3 + 0x18) <= uVar7) goto LAB_06daa82c;
    dVar10 = sin(((double)(int)uVar7 + 0.5) * dVar8);
    lVar5 = uVar7 * 4;
    uVar7 = uVar7 + 1;
    *(float *)(lVar3 + lVar5 + 0x20) = (float)dVar10;
    if (uVar7 == 0xc) break;
LAB_06daa764:
    lVar3 = **(long **)(*unaff_x21 + 0xb8);
    if (lVar3 == 0) goto LAB_06daa830;
  }
  lVar3 = **(long **)(*unaff_x21 + 0xb8);
  if (lVar3 == 0) {
LAB_06daa830:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar4 = *(uint *)(lVar3 + 0x18);
  lVar5 = 0x14;
  while (2 < uVar4) {
    lVar6 = *(long *)(lVar3 + 0x30);
    if (lVar6 == 0) goto LAB_06daa830;
    if ((ulong)*(uint *)(lVar6 + 0x18) <= lVar5 - 8U) break;
    *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
    lVar5 = lVar5 + 1;
    if (lVar5 == 0x2c) {
      return;
    }
  }
LAB_06daa82c:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


