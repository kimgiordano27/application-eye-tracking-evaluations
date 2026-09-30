/*
FUNCTION_NAME: FUN_070c9004
ENTRY_POINT: 070c9004
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_070c9004(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  if ((DAT_07a5a96c & 1) == 0) {
    FUN_031f20f4(PTR_DAT_0759b238);
    FUN_031f20f4(PTR_DAT_075d7700);
    FUN_031f20f4(PTR_DAT_075dacf0);
    FUN_031f20f4(OVRPlugin_OVRP_1_114_0_TypeInfo);
    DAT_07a5a96c = 1;
  }
  if (1 < param_2) {
    if (*(int *)(*(long *)PTR_DAT_0759b238 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    FUN_06deed24(*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo,0);
    return;
  }
  if (*(long *)(param_1 + 0x4a8) == 0) {
    *(undefined1 *)(param_1 + 0x4e1) = 1;
    *(uint *)(param_1 + 0x4e4) = param_2;
    return;
  }
  if (*(long *)(param_1 + 0x4d0) != 0) {
    plVar3 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x4d0),0);
    puVar2 = PTR_DAT_075dacf0;
    uVar4 = FUN_050a637c(1,*(undefined8 *)PTR_DAT_075dacf0);
    puVar1 = PTR_DAT_075d7700;
    if (plVar3 != (long *)0x0) {
      lVar6 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_075d7700) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x31) * 0x10 + 0x138);
            goto LAB_070c9144;
          }
          uVar9 = uVar9 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_0322c1e8(plVar3,*(long *)PTR_DAT_075d7700,0x31);
LAB_070c9144:
      (*(code *)*puVar5)(plVar3,uVar4,puVar5[1]);
      if (*(long *)(param_1 + 0x4d8) != 0) {
        plVar3 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x4d8),0);
        uVar4 = FUN_050a637c(1,*(undefined8 *)puVar2);
        if (plVar3 != (long *)0x0) {
          lVar6 = *plVar3;
          uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar9 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x31) * 0x10 + 0x138);
                goto LAB_070c91cc;
              }
              uVar9 = uVar9 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)FUN_0322c1e8(plVar3,*(long *)puVar1,0x31);
LAB_070c91cc:
          (*(code *)*puVar5)(plVar3,uVar4,puVar5[1]);
          if (param_2 == 0) {
            if (*(long *)(param_1 + 0x4b0) == 0) goto LAB_070c9640;
            plVar3 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x4b0),0);
            auVar10 = FUN_06fdeaf4(4,0);
            if (plVar3 == (long *)0x0) goto LAB_070c9640;
            lVar6 = *plVar3;
            uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar9 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xa3) * 0x10 + 0x138);
                  goto LAB_070c946c;
                }
                uVar9 = uVar9 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_0322c1e8(plVar3,*(long *)puVar1,0xa3);
LAB_070c946c:
            (*(code *)*puVar5)(plVar3,auVar10._0_8_,auVar10._8_8_ & 0xffffffff,puVar5[1]);
            if (*(long *)(param_1 + 0x4b0) == 0) goto LAB_070c9640;
            plVar3 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x4b0),0);
            auVar10 = FUN_06fdeaf4(4,0);
            if (plVar3 == (long *)0x0) goto LAB_070c9640;
            lVar6 = *plVar3;
            uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar9 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x3f) * 0x10 + 0x138);
                  goto LAB_070c9500;
                }
                uVar9 = uVar9 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_0322c1e8(plVar3,*(long *)puVar1,0x3f);
LAB_070c9500:
            (*(code *)*puVar5)(plVar3,auVar10._0_8_,auVar10._8_8_ & 0xffffffff,puVar5[1]);
            if (*(long *)(param_1 + 0x4b0) == 0) goto LAB_070c9640;
            plVar3 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x4b0),0);
            uVar4 = FUN_06fe1630(0x3f800000,0);
            if (plVar3 == (long *)0x0) goto LAB_070c9640;
            lVar6 = *plVar3;
            uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar9 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x37) * 0x10 + 0x138);
                  goto LAB_070c958c;
                }
                uVar9 = uVar9 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_0322c1e8(plVar3,*(long *)puVar1,0x37);
LAB_070c958c:
            (*(code *)*puVar5)(plVar3,uVar4,puVar5[1]);
            if (*(long *)(param_1 + 0x4a8) == 0) goto LAB_070c9640;
            plVar3 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x4a8),0);
            uVar4 = FUN_050a637c(1,*(undefined8 *)puVar2);
            if (plVar3 == (long *)0x0) goto LAB_070c9640;
            lVar7 = *plVar3;
            lVar6 = *(long *)puVar1;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == lVar6) goto LAB_070c9604;
                uVar9 = uVar9 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar9 != 0);
            }
          }
          else {
            if (*(long *)(param_1 + 0x4a8) == 0) goto LAB_070c9640;
            plVar3 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x4a8),0);
            auVar10 = FUN_06fdeaf4(4,0);
            if (plVar3 == (long *)0x0) goto LAB_070c9640;
            lVar6 = *plVar3;
            uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar9 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xa3) * 0x10 + 0x138);
                  goto LAB_070c92d0;
                }
                uVar9 = uVar9 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_0322c1e8(plVar3,*(long *)puVar1,0xa3);
LAB_070c92d0:
            (*(code *)*puVar5)(plVar3,auVar10._0_8_,auVar10._8_8_ & 0xffffffff,puVar5[1]);
            if (*(long *)(param_1 + 0x4a8) == 0) goto LAB_070c9640;
            plVar3 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x4a8),0);
            auVar10 = FUN_06fdeaf4(4,0);
            if (plVar3 == (long *)0x0) goto LAB_070c9640;
            lVar6 = *plVar3;
            uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar9 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x3f) * 0x10 + 0x138);
                  goto LAB_070c9364;
                }
                uVar9 = uVar9 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_0322c1e8(plVar3,*(long *)puVar1,0x3f);
LAB_070c9364:
            (*(code *)*puVar5)(plVar3,auVar10._0_8_,auVar10._8_8_ & 0xffffffff,puVar5[1]);
            if (*(long *)(param_1 + 0x4a8) == 0) goto LAB_070c9640;
            plVar3 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x4a8),0);
            uVar4 = FUN_06fe1630(0x3f800000,0);
            if (plVar3 == (long *)0x0) goto LAB_070c9640;
            lVar6 = *plVar3;
            uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar9 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x37) * 0x10 + 0x138);
                  goto LAB_070c93f0;
                }
                uVar9 = uVar9 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_0322c1e8(plVar3,*(long *)puVar1,0x37);
LAB_070c93f0:
            (*(code *)*puVar5)(plVar3,uVar4,puVar5[1]);
            if (*(long *)(param_1 + 0x4b0) == 0) goto LAB_070c9640;
            plVar3 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x4b0),0);
            uVar4 = FUN_050a637c(1,*(undefined8 *)puVar2);
            if (plVar3 == (long *)0x0) goto LAB_070c9640;
            lVar7 = *plVar3;
            lVar6 = *(long *)puVar1;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == lVar6) goto LAB_070c9604;
                uVar9 = uVar9 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar9 != 0);
            }
          }
          puVar5 = (undefined8 *)FUN_0322c1e8(plVar3,lVar6,0x31);
          goto LAB_070c9614;
        }
      }
    }
  }
LAB_070c9640:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
LAB_070c9604:
  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 0x31) * 0x10 + 0x138);
LAB_070c9614:
  (*(code *)*puVar5)(plVar3,uVar4,puVar5[1]);
  *(undefined1 *)(param_1 + 0x4e0) = 1;
  return;
}


