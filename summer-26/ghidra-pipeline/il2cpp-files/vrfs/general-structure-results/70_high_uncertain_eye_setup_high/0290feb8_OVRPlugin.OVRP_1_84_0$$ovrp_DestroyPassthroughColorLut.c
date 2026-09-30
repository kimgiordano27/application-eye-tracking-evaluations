/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_DestroyPassthroughColorLut
ENTRY_POINT: 0290feb8
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_DestroyPassthroughColorLut(ulong param_1,long param_2,long param_3)

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
  uint unaff_w19;
  long unaff_x20;
  long *plVar11;
  long unaff_x23;
  undefined8 uVar12;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e57350);
    thunk_FUN_0159f088(PTR_DAT_06dc26f0);
    *(undefined1 *)(unaff_x23 + 0xcdb) = 1;
  }
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031cb62c(3,0);
  }
  iVar2 = thunk_FUN_0164af58(param_3,0);
  if (iVar2 != 1) {
    FUN_031db448(7,0);
  }
  iVar2 = thunk_FUN_0164af14(param_3,0,0);
  if (iVar2 != 0) {
    FUN_031db448(6,0);
  }
  if ((int)unaff_w19 < 0) {
    FUN_031dbd14(0);
  }
  iVar2 = FUN_031d2bdc(param_3,0);
  iVar3 = (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48) + 8))
                    (param_2);
  if ((int)(iVar2 - unaff_w19) < iVar3) {
    FUN_031db448(5,0);
  }
  lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x50);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_015c2790(lVar6);
  }
  lVar6 = thunk_FUN_015d0480(param_3,lVar6);
  if (lVar6 == 0) {
    plVar11 = (long *)thunk_FUN_0164ba04(param_3,0);
    puVar1 = PTR_DAT_06dc26f0;
    if (plVar11 != (long *)0x0) {
      plVar11 = (long *)(**(code **)(*plVar11 + 0x418))(plVar11,*(undefined8 *)(*plVar11 + 0x420));
      uVar12 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x58);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_016466fc(*(long *)puVar1);
      }
      plVar5 = (long *)FUN_031c8668(uVar12,0);
      if (plVar11 != (long *)0x0) {
        uVar9 = (**(code **)(*plVar11 + 0x298))(plVar11,plVar5,*(undefined8 *)(*plVar11 + 0x2a0));
        if ((uVar9 & 1) == 0) {
          if (plVar5 == (long *)0x0) goto LAB_029102dc;
          uVar9 = (**(code **)(*plVar5 + 0x298))(plVar5,plVar11,*(undefined8 *)(*plVar5 + 0x2a0));
          if ((uVar9 & 1) == 0) {
            FUN_031dbd4c(0);
          }
        }
        plVar11 = (long *)thunk_FUN_015d0480(param_3,*(undefined8 *)PTR_DAT_06e57350);
        if (plVar11 == (long *)0x0) {
          FUN_031dbd4c();
        }
        plVar5 = *(long **)(param_2 + 0x10);
        if (plVar5 != (long *)0x0) {
          lVar6 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
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
                goto LAB_02910174;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)FUN_015c2a80(plVar5,lVar6,0);
LAB_02910174:
          iVar2 = (*(code *)*puVar4)(plVar5,puVar4[1]);
          if (0 < iVar2) {
            iVar3 = 0;
            do {
              plVar5 = *(long **)(param_2 + 0x10);
              if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0160eeb4();
              }
              lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
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
                    goto LAB_02910200;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar4 = (undefined8 *)FUN_015c2a80(plVar5,lVar6,0);
LAB_02910200:
              (*(code *)*puVar4)(plVar5,iVar3,puVar4[1]);
              memcpy(&stack0x00000058,&stack0x00000000,0x58);
              memcpy(&stack0x00000000,&stack0x00000058,0x58);
              if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x132
                            ) & 1) == 0) {
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
              if (*(uint *)(plVar11 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
                FUN_0160eebc();
              }
              plVar11[(long)(int)unaff_w19 + 4] = lVar6;
              thunk_FUN_01656ef8(plVar11 + (long)(int)unaff_w19 + 4,lVar6);
              iVar3 = iVar3 + 1;
              unaff_w19 = unaff_w19 + 1;
            } while (iVar3 != iVar2);
          }
          return;
        }
      }
    }
  }
  else {
    plVar11 = *(long **)(param_2 + 0x10);
    if (plVar11 != (long *)0x0) {
      lVar7 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
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
            goto LAB_02910140;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_015c2a80(plVar11,lVar7,5);
LAB_02910140:
                    /* WARNING: Could not recover jumptable at 0x02910164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(plVar11,lVar6,unaff_w19,puVar4[1]);
      return;
    }
  }
LAB_029102dc:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


