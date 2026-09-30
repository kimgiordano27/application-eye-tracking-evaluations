/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Message_GetLinkedAccountArray
ENTRY_POINT: 02985604
PROGRAM: simulator-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02985b98) */
/* WARNING: Removing unreachable block (ram,0x02985c34) */
/* WARNING: Removing unreachable block (ram,0x029857e0) */
/* WARNING: Removing unreachable block (ram,0x029855c4) */
/* WARNING: Removing unreachable block (ram,0x02985ba0) */

void Oculus_Platform_CAPI__ovr_Message_GetLinkedAccountArray
               (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong in_x9;
  int *piVar10;
  long in_x10;
  long *unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x27;
  long *unaff_x28;
  
  do {
    piVar10 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar10 + -2) == param_3) {
        puVar3 = (undefined8 *)(param_1 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_0298563c;
      }
      in_x9 = in_x9 - 1;
      piVar10 = piVar10 + 4;
    } while (in_x9 != 0);
    do {
      puVar3 = (undefined8 *)FUN_018a8460(unaff_x28,param_3,0);
LAB_0298563c:
      uVar4 = (*(code *)*puVar3)(unaff_x28,puVar3[1]);
      if ((uVar4 & 1) == 0) {
        plVar5 = (long *)thunk_FUN_018af234(unaff_x28,*unaff_x27);
        if (plVar5 != (long *)0x0) {
          lVar9 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar4 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *unaff_x27) {
                puVar3 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_029857c8;
              }
              uVar4 = uVar4 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined8 *)FUN_018a8460(plVar5,*unaff_x27,0);
LAB_029857c8:
          (*(code *)*puVar3)(plVar5,puVar3[1]);
        }
        if (*(int *)(*(long *)PTR_DAT_0349d180 + 0xe0) == 0) {
          thunk_FUN_018cd5b0();
        }
        FUN_02838dd0(unaff_x25,0);
LAB_029851c0:
        do {
          lVar9 = *unaff_x19;
          uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar4 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *unaff_x21) {
                puVar3 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_0298520c;
              }
              uVar4 = uVar4 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined8 *)FUN_018a8460();
LAB_0298520c:
          uVar4 = (*(code *)*puVar3)();
          if ((uVar4 & 1) == 0) {
            plVar5 = (long *)thunk_FUN_018af234();
            if (plVar5 == (long *)0x0) {
              return;
            }
            lVar9 = *plVar5;
            uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar4 == 0) goto LAB_02985a44;
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            goto LAB_02985a2c;
          }
          lVar9 = *unaff_x19;
          uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar4 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *unaff_x21) {
                puVar3 = (undefined8 *)(lVar9 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_0298526c;
              }
              uVar4 = uVar4 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined8 *)FUN_018a8460();
LAB_0298526c:
          unaff_x25 = (long *)(*(code *)*puVar3)();
          if (unaff_x25 == (long *)0x0) {
            if ((unaff_x20 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_018c4afc();
            }
          }
          else {
            bVar1 = *(byte *)(*(long *)PTR_DAT_034a6600 + 0x130);
            if ((*(byte *)(*unaff_x25 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*unaff_x25 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_034a6600)) {
                    /* WARNING: Subroutine does not return */
              FUN_018c4e7c(unaff_x25);
            }
            if (((unaff_x20 & 1) != 0) &&
               (uVar4 = FUN_027f5598(unaff_x25[5],*(undefined8 *)PTR_DAT_0349d5b0,0),
               (uVar4 & 1) != 0)) goto LAB_029851c0;
          }
          lVar9 = *unaff_x23;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_018cd5b0();
            lVar9 = *unaff_x23;
          }
          if (*(char *)(*(long *)(lVar9 + 0xb8) + 0x19) == '\0') {
            if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_018c4afc();
            }
            break;
          }
          if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_018c4afc();
          }
          uVar4 = thunk_FUN_028007d4(unaff_x25[5],*(undefined8 *)PTR_DAT_0349d5b0,0);
        } while ((uVar4 & 1) != 0);
        if (unaff_x25[2] != 0) {
          lVar9 = *unaff_x23;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_018cd5b0();
            lVar9 = *unaff_x23;
          }
          plVar5 = *(long **)(*(long *)(lVar9 + 0xb8) + 0x40);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_018c4afc();
          }
          plVar5 = (long *)(**(code **)(*plVar5 + 0x298))
                                     (plVar5,unaff_x25[2],*(undefined8 *)(*plVar5 + 0x2a0));
          if (plVar5 == (long *)0x0) {
            lVar9 = unaff_x25[2];
            uVar7 = thunk_FUN_018ddffc(PTR_DAT_034a6618);
            uVar8 = thunk_FUN_018ddffc(PTR_DAT_0349d398);
            uVar7 = FUN_02800fac(uVar7,lVar9,uVar8,0);
            thunk_FUN_018ddffc(PTR_DAT_0349d098);
            uVar8 = thunk_FUN_018af330();
            FUN_0282710c(uVar8,uVar7,0);
            uVar7 = thunk_FUN_018ddffc(PTR_DAT_034a6610);
                    /* WARNING: Subroutine does not return */
            FUN_018c49d0(uVar8,uVar7);
          }
          bVar1 = *(byte *)(*(long *)PTR_DAT_034a6600 + 0x130);
          if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_034a6600)) {
                    /* WARNING: Subroutine does not return */
            FUN_018c4e7c(plVar5);
          }
          FUN_02825fbc(unaff_x25,plVar5,0);
        }
        plVar5 = (long *)FUN_02825e90(unaff_x25,0);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_018c4afc();
        }
        plVar5 = (long *)(**(code **)(*plVar5 + 0x368))(plVar5,*(undefined8 *)(*plVar5 + 0x370));
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_018c4afc();
        }
LAB_029853d4:
        lVar9 = *plVar5;
        uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x21) {
              puVar3 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_02985420;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)FUN_018a8460(plVar5,*unaff_x21,0);
LAB_02985420:
        uVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
        if ((uVar4 & 1) != 0) {
          lVar9 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar4 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *unaff_x21) {
                puVar3 = (undefined8 *)(lVar9 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_02985480;
              }
              uVar4 = uVar4 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined8 *)FUN_018a8460(plVar5,*unaff_x21,1);
LAB_02985480:
          plVar6 = (long *)(*(code *)*puVar3)(plVar5,puVar3[1]);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_018c4afc();
          }
          bVar1 = *(byte *)(*unaff_x24 + 0x130);
          if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
            FUN_018c4e7c(plVar6);
          }
          if (plVar6[2] != 0) {
            lVar9 = *unaff_x23;
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_018cd5b0();
              lVar9 = *unaff_x23;
            }
            plVar2 = *(long **)(*(long *)(lVar9 + 0xb8) + 0x50);
            if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_018c4afc();
            }
            plVar2 = (long *)(**(code **)(*plVar2 + 0x298))
                                       (plVar2,plVar6[2],*(undefined8 *)(*plVar2 + 0x2a0));
            if (plVar2 == (long *)0x0) {
              lVar9 = plVar6[2];
              uVar7 = thunk_FUN_018ddffc(PTR_DAT_034a6608);
              uVar8 = thunk_FUN_018ddffc(PTR_DAT_0349d398);
              uVar7 = FUN_02800fac(uVar7,lVar9,uVar8,0);
              thunk_FUN_018ddffc(PTR_DAT_0349d098);
              uVar8 = thunk_FUN_018af330();
              FUN_0282710c(uVar8,uVar7,0);
              uVar7 = thunk_FUN_018ddffc(PTR_DAT_034a6610);
                    /* WARNING: Subroutine does not return */
              FUN_018c49d0(uVar8,uVar7);
            }
            bVar1 = *(byte *)(*unaff_x24 + 0x130);
            if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
              FUN_018c4e7c(plVar2);
            }
            FUN_02826954(plVar6,plVar2,0);
          }
          goto LAB_029853d4;
        }
        plVar5 = (long *)thunk_FUN_018af234(plVar5,*unaff_x27);
        if (plVar5 != (long *)0x0) {
          lVar9 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar4 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *unaff_x27) {
                puVar3 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_029855ac;
              }
              uVar4 = uVar4 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined8 *)FUN_018a8460(plVar5,*unaff_x27,0);
LAB_029855ac:
          (*(code *)*puVar3)(plVar5,puVar3[1]);
        }
        plVar5 = (long *)FUN_02825ef4(unaff_x25,0);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_018c4afc();
        }
        unaff_x28 = (long *)(**(code **)(*plVar5 + 0x368))(plVar5,*(undefined8 *)(*plVar5 + 0x370));
        if (unaff_x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_018c4afc();
        }
      }
      else {
        lVar9 = *unaff_x28;
        uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x21) {
              puVar3 = (undefined8 *)(lVar9 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_0298569c;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)FUN_018a8460(unaff_x28,*unaff_x21,1);
LAB_0298569c:
        plVar5 = (long *)(*(code *)*puVar3)(unaff_x28,puVar3[1]);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_018c4afc();
        }
        bVar1 = *(byte *)(*unaff_x24 + 0x130);
        if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
          FUN_018c4e7c(plVar5);
        }
        if (plVar5[2] != 0) {
          lVar9 = *unaff_x23;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_018cd5b0();
            lVar9 = *unaff_x23;
          }
          plVar6 = *(long **)(*(long *)(lVar9 + 0xb8) + 0x48);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_018c4afc();
          }
          plVar6 = (long *)(**(code **)(*plVar6 + 0x298))
                                     (plVar6,plVar5[2],*(undefined8 *)(*plVar6 + 0x2a0));
          if (plVar6 == (long *)0x0) {
            lVar9 = plVar5[2];
            uVar7 = thunk_FUN_018ddffc(PTR_DAT_034a6608);
            uVar8 = thunk_FUN_018ddffc(PTR_DAT_0349d398);
            uVar7 = FUN_02800fac(uVar7,lVar9,uVar8,0);
            thunk_FUN_018ddffc(PTR_DAT_0349d098);
            uVar8 = thunk_FUN_018af330();
            FUN_0282710c(uVar8,uVar7,0);
            uVar7 = thunk_FUN_018ddffc(PTR_DAT_034a6610);
                    /* WARNING: Subroutine does not return */
            FUN_018c49d0(uVar8,uVar7);
          }
          bVar1 = *(byte *)(*unaff_x24 + 0x130);
          if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
            FUN_018c4e7c(plVar6);
          }
          FUN_02826954(plVar5,plVar6,0);
        }
      }
      param_1 = *unaff_x28;
      param_3 = *unaff_x21;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar10 = piVar10 + 4;
    if (uVar4 == 0) break;
LAB_02985a2c:
    if (*(long *)(piVar10 + -2) == *unaff_x27) {
      puVar3 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
      goto Oculus_Platform_CAPI__ovr_Message_GetNetSyncSessionsChangedNotification;
    }
  }
LAB_02985a44:
  puVar3 = (undefined8 *)FUN_018a8460(plVar5,*unaff_x27,0);
Oculus_Platform_CAPI__ovr_Message_GetNetSyncSessionsChangedNotification:
  (*(code *)*puVar3)(plVar5,puVar3[1]);
  return;
}


