/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakManager$$get_TelemetryAnnotation
ENTRY_POINT: 06da12a0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_TweakManager__get_TelemetryAnnotation
               (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  int *in_x10;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  undefined4 unaff_w23;
  long unaff_x24;
  uint unaff_w25;
  long unaff_x26;
  long unaff_x27;
  
  do {
    in_x9 = in_x9 + -1;
    piVar8 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar4 = (undefined8 *)FUN_03cf1348();
      goto LAB_06da14c4;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar8;
  } while (*plVar1 != param_3);
  puVar4 = (undefined8 *)(param_1 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
LAB_06da14c4:
  uVar3 = (*(code *)*puVar4)();
  if (unaff_x27 == 0) {
LAB_06da1858:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (unaff_x21 < *(uint *)(unaff_x27 + 0x18)) {
    *(undefined4 *)(unaff_x27 + unaff_x21 * 4 + 0x20) = uVar3;
    lVar5 = *(long *)(unaff_x20 + 200);
    if (lVar5 == 0) goto LAB_06da1858;
    if (unaff_w25 < *(uint *)(lVar5 + 0x18)) {
      lVar5 = *(long *)(lVar5 + unaff_x26 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_06da1858;
      if (1 < *(uint *)(lVar5 + 0x18)) {
        lVar6 = *unaff_x19;
        lVar5 = *(long *)(lVar5 + 0x28);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x22) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
              goto LAB_06da1710;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da1710:
        uVar3 = (*(code *)*puVar4)();
        if (lVar5 == 0) goto LAB_06da1858;
        if (unaff_x21 < *(uint *)(lVar5 + 0x18)) {
          *(undefined4 *)(lVar5 + unaff_x21 * 4 + 0x20) = uVar3;
          lVar5 = *(long *)(unaff_x20 + 200);
          if (lVar5 == 0) goto LAB_06da1858;
          if (unaff_w25 < *(uint *)(lVar5 + 0x18)) {
            lVar5 = *(long *)(lVar5 + unaff_x26 * 8 + 0x20);
            if (lVar5 == 0) goto LAB_06da1858;
            if (2 < *(uint *)(lVar5 + 0x18)) {
              lVar6 = *unaff_x19;
              lVar5 = *(long *)(lVar5 + 0x30);
              uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *unaff_x22) {
                    puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
                    goto LAB_06da17b8;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da17b8:
              uVar3 = (*(code *)*puVar4)();
              if (lVar5 == 0) goto LAB_06da1858;
              if (unaff_x21 < *(uint *)(lVar5 + 0x18)) {
                while( true ) {
                  *(undefined4 *)(lVar5 + unaff_x21 * 4 + 0x20) = uVar3;
                  unaff_w25 = unaff_w25 + 1;
                  if (*(int *)(unaff_x20 + 0xa0) <= (int)unaff_w25) {
                    do {
                      unaff_x21 = unaff_x21 + 1;
                      if (unaff_x21 == 0x20) {
                        return;
                      }
                    } while (*(int *)(unaff_x20 + 0xa0) < 1);
                    unaff_w25 = 0;
                  }
                  lVar5 = *(long *)(unaff_x20 + 0xb8);
                  if (lVar5 == 0) goto LAB_06da1858;
                  if (*(uint *)(lVar5 + 0x18) <= unaff_w25) break;
                  lVar5 = *(long *)(lVar5 + (long)(int)unaff_w25 * 8 + 0x20);
                  if (lVar5 == 0) goto LAB_06da1858;
                  if (*(uint *)(lVar5 + 0x18) <= unaff_x21) break;
                  uVar2 = *(uint *)(lVar5 + unaff_x21 * 4 + 0x20);
                  if (uVar2 < 4) {
                    /* WARNING: Could not recover jumptable at 0x06da1248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)((ulong)*(byte *)(unaff_x24 + (ulong)uVar2) * 4 + 0x6da124c))();
                    return;
                  }
                  lVar5 = *(long *)(unaff_x20 + 200);
                  if (lVar5 == 0) goto LAB_06da1858;
                  if (*(uint *)(lVar5 + 0x18) <= unaff_w25) break;
                  lVar5 = *(long *)(lVar5 + (long)(int)unaff_w25 * 8 + 0x20);
                  if (lVar5 == 0) goto LAB_06da1858;
                  uVar2 = *(uint *)(lVar5 + 0x18);
                  if (uVar2 == 0) break;
                  lVar6 = *(long *)(lVar5 + 0x20);
                  if (lVar6 == 0) goto LAB_06da1858;
                  if ((*(uint *)(lVar6 + 0x18) <= unaff_x21) ||
                     (*(undefined4 *)(lVar6 + unaff_x21 * 4 + 0x20) = unaff_w23, uVar2 < 2)) break;
                  lVar6 = *(long *)(lVar5 + 0x28);
                  if (lVar6 == 0) goto LAB_06da1858;
                  if ((*(uint *)(lVar6 + 0x18) <= unaff_x21) ||
                     (*(undefined4 *)(lVar6 + unaff_x21 * 4 + 0x20) = unaff_w23, uVar2 < 3)) break;
                  lVar5 = *(long *)(lVar5 + 0x30);
                  if (lVar5 == 0) goto LAB_06da1858;
                  if (*(uint *)(lVar5 + 0x18) <= unaff_x21) break;
                  uVar3 = 0x3f;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


