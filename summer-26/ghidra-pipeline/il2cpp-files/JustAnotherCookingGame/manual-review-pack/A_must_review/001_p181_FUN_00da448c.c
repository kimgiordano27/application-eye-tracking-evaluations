/*
FUNCTION_NAME: FUN_00da448c
ENTRY_POINT: 00da448c
PROGRAM: JustAnotherCookingGame-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_00da448c(long param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,long param_8,long *param_9)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_58;
  
  if ((DAT_0165e958 & 1) == 0) {
    thunk_FUN_005cc344(PTR_DAT_0158f438);
    thunk_FUN_005cc344(PTR_DAT_0158f9d0);
    thunk_FUN_005cc344(PTR_DAT_015904a8);
    thunk_FUN_005cc344(PTR_DAT_01589ae8);
    thunk_FUN_005cc344(PTR_DAT_01584010);
    DAT_0165e958 = 1;
  }
  local_58 = 0;
  *(undefined8 *)(param_1 + 0x50) = param_4;
  *(undefined8 *)(param_1 + 0x58) = param_5;
  *(long *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x60) = param_6;
  if (param_2 != 0) {
    lVar3 = thunk_FUN_005b2ef4(param_2,0);
    *(long *)(param_1 + 0x20) = lVar3;
    if (lVar3 != 0) {
      uVar4 = FUN_00de5f44(lVar3,0);
      if ((uVar4 & 1) == 0) {
        if (param_9 != (long *)0x0) {
          (**(code **)(*param_9 + 0x178))
                    (param_9,*(undefined8 *)(param_1 + 0x20),param_1 + 0x80,param_1 + 0x78,
                     *(undefined8 *)(*param_9 + 0x180));
        }
        if ((param_8 == 0) || (*(long *)(param_8 + 0x48) == 0)) goto LAB_00da4860;
        FUN_00e58f38(*(long *)(param_8 + 0x48),param_2,0);
        if (param_3 != (long *)0x0) {
          lVar3 = *param_3;
          uVar10 = *(undefined8 *)(param_1 + 0x20);
          if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
            uVar4 = 0;
            piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_01589ae8) {
                puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_00da45fc;
              }
              uVar4 = uVar4 + 1;
              piVar7 = piVar7 + 4;
            } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
          }
          puVar5 = (undefined8 *)FUN_005c1e44(param_3,*(long *)PTR_DAT_01589ae8,0);
LAB_00da45fc:
          lVar3 = (*(code *)*puVar5)(param_3,uVar10,param_4,param_5,&local_58,puVar5[1]);
          *(long *)(param_1 + 0x48) = lVar3;
          if (lVar3 != 0) {
            uVar9 = *(undefined8 *)(param_1 + 0x20);
            uVar10 = thunk_FUN_005cd404(*(undefined8 *)PTR_DAT_01584010);
            FUN_00a12b88(uVar10,uVar9,param_7,0);
            *(undefined8 *)(param_1 + 0x30) = uVar10;
            if (*(long *)(param_1 + 0x20) != 0) {
              uVar4 = FUN_00de6244(*(long *)(param_1 + 0x20),0);
              if ((uVar4 & 1) == 0) {
                plVar8 = *(long **)(param_1 + 0x48);
                if (plVar8 == (long *)0x0) goto LAB_00da4860;
                lVar3 = *plVar8;
                uVar10 = *(undefined8 *)(param_1 + 0x30);
                if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
                  uVar4 = 0;
                  piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_015904a8) {
                      puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
                      goto LAB_00da4820;
                    }
                    uVar4 = uVar4 + 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
                }
                puVar5 = (undefined8 *)FUN_005c1e44(plVar8,*(long *)PTR_DAT_015904a8,0);
LAB_00da4820:
                (*(code *)*puVar5)(plVar8,param_2,uVar10,param_4,param_5,puVar5[1]);
              }
              System_Collections_Generic_List<Camera_RenderRequest>__ToArray(param_1);
              return;
            }
            goto LAB_00da4860;
          }
        }
        puVar1 = PTR_DAT_0158f9d0;
        lVar3 = thunk_FUN_005cd308(param_2,*(undefined8 *)PTR_DAT_0158f9d0);
        if (lVar3 == 0) {
          FUN_00da4f24(param_1);
        }
        else {
          plVar8 = *(long **)(param_1 + 0x20);
          if (plVar8 == (long *)0x0) goto LAB_00da4860;
          uVar4 = (**(code **)(*plVar8 + 0x578))(plVar8,*(undefined8 *)(*plVar8 + 0x580));
          if ((uVar4 & 1) == 0) {
            uVar10 = thunk_FUN_005cc344(PTR_DAT_015851e8);
            uVar10 = FUN_006280f8(uVar10,2);
            plVar8 = *(long **)(param_1 + 0x20);
            FUN_004dcddc(plVar8);
            uVar9 = (**(code **)(*plVar8 + 0x2c8))(plVar8,*(undefined8 *)(*plVar8 + 0x2d0));
            FUN_004dcddc(uVar10);
            FUN_004dce1c(uVar10,uVar9);
            FUN_004dcdf0(uVar10,0,uVar9);
            plVar8 = *(long **)(param_1 + 0x20);
            FUN_004dcddc(plVar8);
            plVar8 = (long *)(**(code **)(*plVar8 + 0x2a8))(plVar8,*(undefined8 *)(*plVar8 + 0x2b0))
            ;
            FUN_004dcddc();
            uVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
            FUN_004dcddc(uVar10);
            FUN_004dce1c(uVar10,uVar9);
            FUN_004dcdf0(uVar10,1,uVar9);
            uVar9 = thunk_FUN_005cc344(PTR_DAT_0158c220);
            uVar10 = FUN_00bc51d0(uVar9,uVar10,0);
            thunk_FUN_005cc344(PTR_DAT_01575620);
            uVar9 = thunk_FUN_005cd404();
            FUN_009fba88(uVar9,uVar10,0);
            uVar10 = thunk_FUN_005cc344(PTR_DAT_01574310);
                    /* WARNING: Subroutine does not return */
            FUN_00628184(uVar9,uVar10);
          }
          uVar10 = *(undefined8 *)(param_1 + 0x20);
          if (((*(byte *)(*(long *)PTR_DAT_0158f438 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(*(long *)PTR_DAT_0158f438 + 0xe0) == 0)) {
            thunk_FUN_005c4488();
          }
          uVar2 = FUN_00bd4134(0);
          uVar9 = thunk_FUN_005cd404(*(undefined8 *)PTR_DAT_01584010);
          FUN_00a12b90(uVar9,uVar10,param_7,~uVar2 & 1,0);
          *(undefined8 *)(param_1 + 0x30) = uVar9;
          uVar10 = *(undefined8 *)puVar1;
          lVar3 = thunk_FUN_005cd308(param_2,uVar10);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006284ac(param_2,uVar10);
          }
          lVar3 = *(long *)puVar1;
          plVar8 = (long *)thunk_FUN_005cd308(param_2,lVar3);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_006284ac(param_2,lVar3);
          }
          lVar6 = *plVar8;
          if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
            uVar4 = 0;
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == lVar3) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_00da47e0;
              }
              uVar4 = uVar4 + 1;
              piVar7 = piVar7 + 4;
            } while (uVar4 < *(ushort *)(lVar6 + 0x12a));
          }
          puVar5 = (undefined8 *)FUN_005c1e44(plVar8,lVar3,0);
LAB_00da47e0:
          (*(code *)*puVar5)(plVar8,uVar9,param_4,param_5,puVar5[1]);
          System_Collections_Generic_List<Camera_RenderRequest>__ToArray(param_1);
        }
        FUN_00da4dc0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
                     *(undefined8 *)(param_1 + 0x80));
      }
      else {
        *(undefined1 *)(param_1 + 0x2b) = 1;
        FUN_00da4990(param_1);
      }
      return;
    }
  }
LAB_00da4860:
                    /* WARNING: Subroutine does not return */
  FUN_006281b8();
}


