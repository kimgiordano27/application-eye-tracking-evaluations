/*
FUNCTION_NAME: FUN_07a43c38
ENTRY_POINT: 07a43c38
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_07a43c38(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
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
  
  if ((DAT_098952f3 & 1) == 0) {
                    /* try { // try from 07a43c60 to 07b43d8b has its CatchHandler @ 07a43c60
                       catch() { ... } // from try @ 07a43c60 with catch @ 07a43c60
                       catch() { ... } // from try @ 07a43da8 with catch @ 07a43c60
                       catch() { ... } // from try @ 07a43dd0 with catch @ 07a43c60
                       catch() { ... } // from try @ 07a43dfc with catch @ 07a43c60
                       catch() { ... } // from try @ 07a43e20 with catch @ 07a43c60 */
    FUN_04077588(PTR_DAT_092f06b8);
    FUN_04077588(PTR_DAT_092f06c8);
    FUN_04077588(PTR_DAT_092eda48);
    FUN_04077588(PTR_DAT_092eda50);
    FUN_04077588(PTR_DAT_092eda58);
    FUN_04077588(PTR_DAT_092f05f0);
    FUN_04077588(PTR_DAT_092eda60);
    FUN_04077588(PTR_DAT_092f0600);
    DAT_098952f3 = 1;
  }
  puVar3 = PTR_DAT_092f06b8;
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
    FUN_06e84c40(*(long *)(param_1 + 0x40),*(undefined8 *)PTR_DAT_092f06b8);
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_06e84c40(*(long *)(param_1 + 0x48),*(undefined8 *)puVar3);
      puVar3 = PTR_DAT_092f05f0;
      plVar11 = *(long **)(param_1 + 0x30);
      if (plVar11 != (long *)0x0) {
        lVar7 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092f05f0) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto OVRPlugin__GetSystemKeyboardDescription;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_040b1e00(plVar11,*(long *)PTR_DAT_092f05f0,0);
OVRPlugin__GetSystemKeyboardDescription:
        plVar11 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
        if (plVar11 != (long *)0x0) {
          lVar7 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092f0600) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_07a43dd0;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)FUN_040b1e00(plVar11,*(long *)PTR_DAT_092f0600,0);
LAB_07a43dd0:
          plVar11 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
          if (plVar11 != (long *)0x0) {
            lVar7 = *plVar11;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092eda60) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                  goto LAB_07a43e3c;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_040b1e00(plVar11,*(long *)PTR_DAT_092eda60,1);
LAB_07a43e3c:
            puVar4 = PTR_DAT_092f06c8;
            puVar2 = PTR_DAT_092eda50;
            puVar1 = PTR_DAT_092eda48;
            (*(code *)*puVar5)(&local_60,plVar11,puVar5[1]);
            local_70 = CONCAT44(uStack_4c,local_50);
            uStack_78 = CONCAT44(uStack_54,uStack_58);
            local_80 = local_60;
            while (uVar6 = FUN_0712a164(&local_80,*(undefined8 *)puVar2), uVar9 = local_70,
                  (uVar6 & 1) != 0) {
              plVar11 = *(long **)(param_1 + 0x30);
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar8 = *plVar11;
              lVar7 = *(long *)puVar3;
              uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar6 != 0) {
                piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == lVar7) {
                    puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 7) * 0x10 + 0x138);
                    goto LAB_07a43ee8;
                  }
                  uVar6 = uVar6 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar6 != 0);
              }
              puVar5 = (undefined8 *)FUN_040b1e00(plVar11,lVar7,7);
LAB_07a43ee8:
              uVar6 = (*(code *)*puVar5)(plVar11,uVar9 & 0xffffffff,&local_a0,puVar5[1]);
              if ((uVar6 & 1) != 0) {
                if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                uStack_58 = uStack_98;
                local_60 = local_a0;
                uStack_4c = uStack_8c;
                uStack_48 = local_88;
                uStack_54 = uStack_94;
                local_50 = local_90;
                FUN_06e849ac(*(long *)(param_1 + 0x40),uVar9 & 0xffffffff,&local_60,
                             *(undefined8 *)puVar4);
              }
              plVar11 = *(long **)(param_1 + 0x30);
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar8 = *plVar11;
              lVar7 = *(long *)puVar3;
              uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar6 != 0) {
                piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == lVar7) {
                    puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 8) * 0x10 + 0x138);
                    goto LAB_07a43f80;
                  }
                  uVar6 = uVar6 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar6 != 0);
              }
              puVar5 = (undefined8 *)FUN_040b1e00(plVar11,lVar7,8);
LAB_07a43f80:
              uVar6 = (*(code *)*puVar5)(plVar11,uVar9 & 0xffffffff,&local_c0,puVar5[1]);
              if ((uVar6 & 1) != 0) {
                if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                uStack_58 = uStack_b8;
                local_60 = local_c0;
                uStack_4c = uStack_ac;
                uStack_48 = local_a8;
                uStack_54 = uStack_b4;
                local_50 = local_b0;
                FUN_06e849ac(*(long *)(param_1 + 0x48),uVar9 & 0xffffffff,&local_60,
                             *(undefined8 *)puVar4);
              }
            }
            FUN_0712a160(&local_80,*(undefined8 *)puVar1);
            lVar7 = *(long *)(param_1 + 0x20);
            if (lVar7 != 0) {
              (**(code **)(lVar7 + 0x18))
                        (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


