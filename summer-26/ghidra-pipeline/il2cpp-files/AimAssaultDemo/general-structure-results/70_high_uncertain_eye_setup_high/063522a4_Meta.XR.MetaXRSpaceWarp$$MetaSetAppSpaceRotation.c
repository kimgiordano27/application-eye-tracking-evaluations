/*
FUNCTION_NAME: Meta.XR.MetaXRSpaceWarp$$MetaSetAppSpaceRotation
ENTRY_POINT: 063522a4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MetaXRSpaceWarp__MetaSetAppSpaceRotation(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  ulong unaff_x25;
  long *plVar9;
  uint unaff_w26;
  undefined8 uVar10;
  long unaff_x27;
  undefined8 in_stack_00000008;
  
  FUN_0373b518(*(undefined8 *)(param_1 + 0xe80));
  FUN_0373b518(PTR_DAT_07db4e98);
  FUN_0373b518(PTR_DAT_07db2210);
  FUN_0373b518(PTR_DAT_07db4500);
  *(undefined1 *)(unaff_x27 + 0x3a7) = 1;
  in_stack_00000008 = 0;
  if (unaff_w26 < 2) {
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(char *)(unaff_x24 + 0x80) == '\0') {
      uVar7 = *(ulong *)(unaff_x24 + 0x10);
      if ((uVar7 & 0xff) == 0) {
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar7 = *(ulong *)(unaff_x22 + 200);
      }
      iVar6 = (int)(uVar7 >> 0x20);
      if (unaff_w26 == 0) {
        if (iVar6 - 1U < 2) {
          lVar2 = thunk_FUN_037a15ac(PTR_DAT_07d88078);
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar3 = FUN_061d52c8(0);
          uVar10 = *(undefined8 *)(unaff_x24 + 0x30);
          uVar4 = thunk_FUN_037a15ac(PTR_DAT_07db4fb0);
          FUN_063349e4(uVar4,uVar3,uVar10);
          uVar3 = FUN_062d5fcc();
          uVar4 = thunk_FUN_037a15ac(PTR_DAT_07db4fa0);
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar3,uVar4);
        }
        if ((unaff_x25 & 1) != 0) {
          plVar9 = (long *)(unaff_x24 + 0x48);
          if (*plVar9 == 0) {
            lVar2 = FUN_063488fc();
            *plVar9 = lVar2;
            thunk_FUN_037aeb94(plVar9);
          }
          in_stack_00000008 = *(undefined8 *)(unaff_x24 + 0x90);
          if (*(long *)(unaff_x21 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar1 = FUN_04e5f3c0(&stack0x00000008,*(undefined4 *)(*(long *)(unaff_x21 + 0x20) + 0x2c),
                               *(undefined8 *)PTR_DAT_07db4e98);
          if (((uVar1 >> 1 & 1) != 0) && (*(char *)(unaff_x24 + 0x82) != '\0')) {
            plVar9 = *(long **)(unaff_x24 + 0x68);
            FUN_06345efc();
            if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            FUN_061d52c8(0);
            FUN_0634b13c();
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            lVar2 = *plVar9;
            uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07db4e80) {
                  puVar5 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_06352494;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)FUN_0377596c(plVar9,*(long *)PTR_DAT_07db4e80,0);
LAB_06352494:
            (*(code *)*puVar5)(plVar9);
          }
        }
      }
      else {
        if (iVar6 == 3) {
          lVar2 = thunk_FUN_037a15ac(PTR_DAT_07d88078);
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar3 = FUN_061d52c8(0);
          uVar10 = *(undefined8 *)(unaff_x24 + 0x30);
          uVar4 = thunk_FUN_037a15ac(PTR_DAT_07db4fa8);
          FUN_063349e4(uVar4,uVar3,uVar10);
          uVar3 = FUN_062d5fcc();
          uVar4 = thunk_FUN_037a15ac(PTR_DAT_07db4fa0);
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar3,uVar4);
        }
        if (iVar6 == 2) {
          lVar2 = thunk_FUN_037a15ac(PTR_DAT_07d88078);
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar3 = FUN_061d52c8(0);
          uVar10 = *(undefined8 *)(unaff_x24 + 0x30);
          uVar4 = thunk_FUN_037a15ac(PTR_DAT_07db4f98);
          FUN_063349e4(uVar4,uVar3,uVar10);
          uVar3 = FUN_062d5fcc();
          uVar4 = thunk_FUN_037a15ac(PTR_DAT_07db4fa0);
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar3,uVar4);
        }
      }
    }
  }
  return;
}


