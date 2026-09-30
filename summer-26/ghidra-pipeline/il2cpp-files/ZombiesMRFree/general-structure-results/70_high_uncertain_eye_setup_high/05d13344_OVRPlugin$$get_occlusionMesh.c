/*
FUNCTION_NAME: OVRPlugin$$get_occlusionMesh
ENTRY_POINT: 05d13344
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_occlusionMesh(long *param_1,long *param_2,uint param_3,uint *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  
  if ((DAT_07398857 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb4b20);
    FUN_02fe925c(PTR_DAT_06fb4b00);
    FUN_02fe925c(PTR_DAT_06fb4b60);
    FUN_02fe925c(PTR_DAT_06fb8710);
    DAT_07398857 = 1;
  }
  puVar1 = PTR_DAT_06fb8710;
  puVar2 = PTR_DAT_06fb4b20;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  if (param_2 != (long *)0x0) {
    lVar7 = *param_2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06fb4b20) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 7) * 0x10 + 0x138);
          goto LAB_05d1342c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02feb5b8(param_2,*(long *)PTR_DAT_06fb4b20,7);
LAB_05d1342c:
    uVar4 = (*(code *)*puVar5)(param_2,puVar5[1]);
    *param_4 = uVar4 & param_3;
    FUN_05d13780(param_1,uVar4 & param_3,&stack0x00000020);
    lVar7 = *param_2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05d1349c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02feb5b8(param_2,*(long *)puVar1,0);
LAB_05d1349c:
    (*(code *)*puVar5)(param_2,puVar5[1]);
    puVar1 = PTR_DAT_06fb4b00;
    if (param_1 != (long *)0x0) {
      lVar7 = *param_1;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06fb4b00) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05d13504;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_02feb5b8(param_1,*(long *)PTR_DAT_06fb4b00,0);
LAB_05d13504:
      plVar6 = (long *)(*(code *)*puVar5)(param_1,puVar5[1]);
      puVar3 = PTR_DAT_06fb4b60;
      if (plVar6 != (long *)0x0) {
        lVar7 = *plVar6;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06fb4b60) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 4) * 0x10 + 0x138);
              goto LAB_05d13570;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_02feb5b8(plVar6,*(long *)PTR_DAT_06fb4b60,4);
LAB_05d13570:
        uVar10 = (*(code *)*puVar5)(plVar6,puVar5[1]);
        lVar7 = *param_1;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_05d135cc;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_02feb5b8(param_1,*(long *)puVar1,0);
LAB_05d135cc:
        plVar6 = (long *)(*(code *)*puVar5)(param_1,puVar5[1]);
        if (plVar6 != (long *)0x0) {
          lVar7 = *plVar6;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_05d1362c;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_02feb5b8(plVar6,*(long *)puVar3,0);
LAB_05d1362c:
          (*(code *)*puVar5)(plVar6,puVar5[1]);
          lVar7 = *param_2;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 6) * 0x10 + 0x138);
                goto LAB_05d1368c;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_02feb5b8(param_2,*(long *)puVar2,6);
LAB_05d1368c:
          (*(code *)*puVar5)(uVar10,param_2,&stack0x00000020);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


