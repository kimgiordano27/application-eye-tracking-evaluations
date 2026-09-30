/*
FUNCTION_NAME: FUN_06af56cc
ENTRY_POINT: 06af56cc
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06af56cc(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  if ((DAT_086e24de & 1) == 0) {
    FUN_0335b6c8(&DAT_083e05b8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083e05c8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083e5980,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083e5988,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083e5990,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cc4b0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083c2dd8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cd0e8,1);
    DataMemoryBarrier(2,3);
    DAT_086e24de = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_88 = 0;
  local_90 = 0;
  uStack_8c = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  local_a8 = 0;
  local_b0 = 0;
  uStack_ac = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_05d168c8(*(long *)(param_1 + 0x40),DAT_083e05b8);
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_05d168c8(*(long *)(param_1 + 0x48),DAT_083e05b8);
      plVar6 = *(long **)(param_1 + 0x30);
      if (plVar6 != (long *)0x0) {
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == DAT_083cc4b0) {
              puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_06af5834;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined8 *)FUN_0338f71c(plVar6,DAT_083cc4b0,0);
LAB_06af5834:
        plVar6 = (long *)(*(code *)*puVar1)(plVar6,puVar1[1]);
        if (plVar6 != (long *)0x0) {
          lVar3 = *plVar6;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == DAT_083cd0e8) {
                puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
                goto LAB_06af5898;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar4 != 0);
          }
          puVar1 = (undefined8 *)FUN_0338f71c(plVar6,DAT_083cd0e8,0);
LAB_06af5898:
          plVar6 = (long *)(*(code *)*puVar1)(plVar6,puVar1[1]);
          if (plVar6 != (long *)0x0) {
            lVar3 = *plVar6;
            uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar4 != 0) {
              piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) == DAT_083c2dd8) {
                  puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
                  goto LAB_06af5900;
                }
                uVar4 = uVar4 - 1;
                piVar5 = piVar5 + 4;
              } while (uVar4 != 0);
            }
            puVar1 = (undefined8 *)FUN_0338f71c(plVar6,DAT_083c2dd8,1);
LAB_06af5900:
            (*(code *)*puVar1)(&local_60,plVar6,puVar1[1]);
            uStack_78 = CONCAT44(uStack_54,uStack_58);
            local_70 = CONCAT44(uStack_4c,local_50);
            local_80 = local_60;
            while (uVar2 = FUN_05fc2a98(&local_80,DAT_083e5988), uVar4 = local_70, (uVar2 & 1) != 0)
            {
              plVar6 = *(long **)(param_1 + 0x30);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_033d1d3c();
              }
              lVar3 = *plVar6;
              uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
              if (uVar2 != 0) {
                piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar5 + -2) == DAT_083cc4b0) {
                    puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 7) * 0x10 + 0x138);
                    goto OVRPlugin_OVRP_1_1_0__ovrp_GetTrackingPositionSupported;
                  }
                  uVar2 = uVar2 - 1;
                  piVar5 = piVar5 + 4;
                } while (uVar2 != 0);
              }
              puVar1 = (undefined8 *)FUN_0338f71c(plVar6,DAT_083cc4b0,7);
OVRPlugin_OVRP_1_1_0__ovrp_GetTrackingPositionSupported:
              uVar2 = (*(code *)*puVar1)(plVar6,uVar4 & 0xffffffff,&local_a0,puVar1[1]);
              if ((uVar2 & 1) != 0) {
                if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_033d1d3c();
                }
                uStack_58 = uStack_98;
                local_60 = local_a0;
                uStack_4c = uStack_8c;
                uStack_48 = local_88;
                uStack_54 = uStack_94;
                local_50 = local_90;
                FUN_05d171dc(*(long *)(param_1 + 0x40),uVar4 & 0xffffffff,&local_60,1,
                             *(undefined8 *)
                              (*(long *)(*(long *)(DAT_083e05c8 + 0x20) + 0xc0) + 0x110));
              }
              plVar6 = *(long **)(param_1 + 0x30);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_033d1d3c();
              }
              lVar3 = *plVar6;
              uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
              if (uVar2 != 0) {
                piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar5 + -2) == DAT_083cc4b0) {
                    puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 8) * 0x10 + 0x138);
                    goto LAB_06af5a50;
                  }
                  uVar2 = uVar2 - 1;
                  piVar5 = piVar5 + 4;
                } while (uVar2 != 0);
              }
              puVar1 = (undefined8 *)FUN_0338f71c(plVar6,DAT_083cc4b0,8);
LAB_06af5a50:
              uVar2 = (*(code *)*puVar1)(plVar6,uVar4 & 0xffffffff,&local_c0,puVar1[1]);
              if ((uVar2 & 1) != 0) {
                if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_033d1d3c();
                }
                uStack_58 = uStack_b8;
                local_60 = local_c0;
                uStack_4c = uStack_ac;
                uStack_48 = local_a8;
                uStack_54 = uStack_b4;
                local_50 = local_b0;
                FUN_05d171dc(*(long *)(param_1 + 0x48),uVar4 & 0xffffffff,&local_60,1,
                             *(undefined8 *)
                              (*(long *)(*(long *)(DAT_083e05c8 + 0x20) + 0xc0) + 0x110));
              }
            }
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != 0) {
              (**(code **)(lVar3 + 0x18))
                        (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


