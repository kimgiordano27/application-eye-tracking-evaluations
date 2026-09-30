/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeGazesState
ENTRY_POINT: 0290ef0c
PROGRAM: vrfs-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_8;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetEyeGazesState
               (long param_1,long param_2,uint param_3,long param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  undefined8 uVar12;
  
  if ((bRam0000000007233cd8 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e57350);
    thunk_FUN_0159f088(PTR_DAT_06dc26f0);
    bRam0000000007233cd8 = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031cb62c(3,0);
  }
  iVar2 = thunk_FUN_0164af58(param_2,0);
                    /* try { // try from 0290ef5c to 02a0efb3 has its CatchHandler @ 0290ef5c
                       catch() { ... } // from try @ 0290ef5c with catch @ 0290ef5c
                       catch() { ... } // from try @ 0290f024 with catch @ 0290ef5c
                       catch() { ... } // from try @ 0290f054 with catch @ 0290ef5c
                       catch() { ... } // from try @ 0290f0c8 with catch @ 0290ef5c */
  if (iVar2 != 1) {
    FUN_031db448(7,0);
  }
  iVar2 = thunk_FUN_0164af14(param_2,0,0);
  if (iVar2 != 0) {
    FUN_031db448(6,0);
  }
  if ((int)param_3 < 0) {
    FUN_031dbd14(0);
  }
  iVar2 = FUN_031d2bdc(param_2,0);
  iVar3 = (**(code **)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48) + 8))(param_1);
  if ((int)(iVar2 - param_3) < iVar3) {
    FUN_031db448(5,0);
  }
  lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x50);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_015c2790(lVar6);
  }
  lVar6 = thunk_FUN_015d0480(param_2,lVar6);
  if (lVar6 == 0) {
    plVar11 = (long *)thunk_FUN_0164ba04(param_2,0);
    puVar1 = PTR_DAT_06dc26f0;
    if (plVar11 != (long *)0x0) {
      plVar11 = (long *)(**(code **)(*plVar11 + 0x418))(plVar11,*(undefined8 *)(*plVar11 + 0x420));
      uVar12 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_016466fc(*(long *)puVar1);
      }
      plVar5 = (long *)FUN_031c8668(uVar12,0);
      if (plVar11 != (long *)0x0) {
        uVar9 = (**(code **)(*plVar11 + 0x298))(plVar11,plVar5,*(undefined8 *)(*plVar11 + 0x2a0));
        if ((uVar9 & 1) == 0) {
          if (plVar5 == (long *)0x0) goto LAB_0290f330;
          uVar9 = (**(code **)(*plVar5 + 0x298))(plVar5,plVar11,*(undefined8 *)(*plVar5 + 0x2a0));
          if ((uVar9 & 1) == 0) {
            FUN_031dbd4c(0);
          }
        }
        plVar11 = (long *)thunk_FUN_015d0480(param_2,*(undefined8 *)PTR_DAT_06e57350);
        if (plVar11 == (long *)0x0) {
          FUN_031dbd4c();
        }
        plVar5 = *(long **)(param_1 + 0x10);
        if (plVar5 != (long *)0x0) {
          lVar6 = **(long **)(*(long *)(param_4 + 0x20) + 0xc0);
          if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
            lVar6 = FUN_015c2790(lVar6);
          }
          lVar7 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar6) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_0290f1dc;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)FUN_015c2a80(plVar5,lVar6,0);
LAB_0290f1dc:
          iVar2 = (*(code *)*puVar4)(plVar5,puVar4[1]);
          if (0 < iVar2) {
            iVar3 = 0;
            do {
              plVar5 = *(long **)(param_1 + 0x10);
              if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0160eeb4();
              }
              lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10);
              if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                lVar6 = FUN_015c2790(lVar6);
              }
              lVar7 = *plVar5;
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == lVar6) {
                    puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_0290f268;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar4 = (undefined8 *)FUN_015c2a80(plVar5,lVar6,0);
LAB_0290f268:
              (*(code *)*puVar4)(plVar5,iVar3,puVar4[1]);
              if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x60) + 0x132)
                  & 1) == 0) {
                FUN_015c2790();
              }
              lVar6 = thunk_FUN_015d01b0();
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0160eeb4();
              }
              if ((lVar6 != 0) &&
                 (lVar7 = thunk_FUN_015d0480(lVar6,*(undefined8 *)(*plVar11 + 0x40)), lVar7 == 0)) {
                uVar12 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
                FUN_0160ee7c(uVar12,0);
              }
              if (*(uint *)(plVar11 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
                FUN_0160eebc();
              }
              plVar11[(long)(int)param_3 + 4] = lVar6;
              thunk_FUN_01656ef8(plVar11 + (long)(int)param_3 + 4,lVar6);
              iVar3 = iVar3 + 1;
              param_3 = param_3 + 1;
            } while (iVar3 != iVar2);
          }
          return;
        }
      }
    }
  }
  else {
    plVar11 = *(long **)(param_1 + 0x10);
    if (plVar11 != (long *)0x0) {
      lVar7 = **(long **)(*(long *)(param_4 + 0x20) + 0xc0);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_015c2790(lVar7);
      }
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
            goto LAB_0290f1a8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_015c2a80(plVar11,lVar7,5);
LAB_0290f1a8:
                    /* WARNING: Could not recover jumptable at 0x0290f1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(plVar11,lVar6,param_3,puVar4[1]);
      return;
    }
  }
LAB_0290f330:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


