/*
FUNCTION_NAME: FUN_02899124
ENTRY_POINT: 02899124
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x028999f8) */
/* WARNING: Removing unreachable block (ram,0x02899a08) */
/* WARNING: Type propagation algorithm not settling */

void FUN_02899124(long param_1,long *param_2,long *param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  long alStack_a0 [2];
  long **pplStack_90;
  int local_84;
  ulong local_80 [2];
  long *local_70;
  long *local_68;
  long *plStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = param_3;
  if ((DAT_0491ceef & 1) == 0) {
    FUN_020612a4(StringLiteral_10826);
    FUN_020612a4(StringLiteral_8748);
    FUN_020612a4(StringLiteral_11079);
    FUN_020612a4(StringLiteral_11078);
    FUN_020612a4(StringLiteral_11080);
    FUN_020612a4(StringLiteral_11077);
    DAT_0491ceef = 1;
  }
  puVar2 = StringLiteral_10826;
  plVar11 = (long *)((long)alStack_a0 -
                    ((ulong)*(uint *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78)
                                     + 0xfc) + 0xf & 0x1fffffff0));
  local_80[0] = 0;
  local_80[1] = 0;
  local_84 = 0;
  if (param_3 != (long *)0x0) {
    lVar8 = *param_3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)StringLiteral_10826) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x10) * 0x10 + 0x138);
          goto 
          System_Collections_ObjectModel_ReadOnlyCollection<UnitySynchronizationContext_WorkRequest>__System_Collections_IList_Remove
          ;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02091668(param_3,*(long *)StringLiteral_10826,0x10);

    System_Collections_ObjectModel_ReadOnlyCollection<UnitySynchronizationContext_WorkRequest>__System_Collections_IList_Remove
    :
    cVar3 = (*(code *)*puVar4)(param_3,local_80 + 1,puVar4[1]);
    plVar7 = local_70;
    if (cVar3 == '\f') {
      pplStack_90 = &local_70;
      alStack_a0[1] = 0;
      if (local_70 == (long *)0x0) {
        if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_0206154c();
        }
        goto LAB_02899c1c;
      }
      lVar8 = *local_70;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xd) * 0x10 + 0x138);
            goto LAB_028992c0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_02091668(local_70,*(long *)puVar2,0xd);
LAB_028992c0:
      (*(code *)*puVar4)(plVar7,local_80,puVar4[1]);
      lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x18);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02091334();
      }
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_020b5864();
      }
      lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x18);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02091334();
      }
      uVar9 = local_80[0];
      if (*(char *)(*(long *)(lVar8 + 0xb8) + 8) == '\0') {
        lVar8 = FUN_02247a00(*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x60));
        *param_2 = lVar8;
        thunk_FUN_020ccb58(param_2);
      }
      else {
        if ((*(ushort *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x50) + 0x135) & 1)
            == 0) {
          FUN_02091334();
        }
        lVar8 = thunk_FUN_02094760();
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58))
                  (lVar8,uVar9 & 0xffffffff);
        lVar12 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x40);
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_02091334(lVar12);
        }
        if (lVar8 != 0) {
          lVar5 = thunk_FUN_02094664(lVar8,lVar12);
          if (lVar5 != 0) goto LAB_028993c4;
LAB_02899404:
          if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
            FUN_020618cc(lVar8,lVar12);
          }
          goto LAB_02899c1c;
        }
        lVar5 = 0;
LAB_028993c4:
        *param_2 = lVar5;
        lVar12 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x40);
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_02091334(lVar12);
        }
        if (lVar8 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = thunk_FUN_02094664(lVar8,lVar12);
          if (lVar5 == 0) goto LAB_02899404;
        }
        thunk_FUN_020ccb58(param_2,lVar5);
      }
      if (param_1 == 0) {
        if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_0206154c();
        }
        goto LAB_02899c1c;
      }
      FUN_02acc33c(param_1,*param_2,local_70,
                   *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x68));
      local_84 = 0;
      if (0 < (long)local_80[0]) {
        do {
          plVar7 = local_70;
          if (local_70 == (long *)0x0) {
            if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
              FUN_0206154c();
            }
            goto LAB_02899c1c;
          }
          lVar8 = *local_70;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x10) * 0x10 + 0x138);
                goto LAB_028994b4;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)FUN_02091668(local_70,*(long *)puVar2,0x10);
LAB_028994b4:
          cVar3 = (*(code *)*puVar4)(plVar7,local_80 + 1,puVar4[1]);
          plVar7 = local_70;
          if (cVar3 == '\r') {
            if (local_70 == (long *)0x0) {
              if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
                FUN_0206154c();
              }
              goto LAB_02899c1c;
            }
            lVar8 = *local_70;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 == 0) goto LAB_0289963c;
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            goto LAB_02899624;
          }
          lVar12 = *param_2;
          lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x18);
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_02091334();
          }
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_020b5864();
          }
          lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x18);
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_02091334();
          }
          plVar7 = (long *)**(long **)(lVar8 + 0xb8);
          if (plVar7 == (long *)0x0) {
LAB_02899994:
            if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
              FUN_0206154c();
            }
            goto LAB_02899c1c;
          }
          local_68 = local_70;
          lVar8 = *(long *)(*plVar7 + 0x1a0);
          plStack_60 = plVar11;
          (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar7,&local_68,plVar11);
          if (lVar12 == 0) goto LAB_02899994;
          lVar8 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
          local_68 = plVar11;
          if (-1 < *(int *)(*(long *)(lVar8 + 0x78) + 0x28)) {
            local_68 = (long *)*plVar11;
          }
          puVar4 = *(undefined8 **)(lVar8 + 0x80);
          (*(code *)puVar4[2])(*puVar4,puVar4,lVar12,&local_68);
          plVar7 = local_70;
          if (local_70 == (long *)0x0) {
            if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
              FUN_0206154c();
            }
            goto LAB_02899c1c;
          }
          lVar8 = *local_70;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
                goto LAB_028995d8;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)FUN_02091668(local_70,*(long *)puVar2,4);
LAB_028995d8:
          uVar9 = (*(code *)*puVar4)(plVar7,puVar4[1]);
          plVar7 = local_70;
          if ((uVar9 & 1) == 0) {
            if (local_70 == (long *)0x0) {
              if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
                FUN_0206154c();
              }
              goto LAB_02899c1c;
            }
            lVar8 = *local_70;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 == 0) goto LAB_02899684;
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            goto LAB_0289966c;
          }
          local_84 = local_84 + 1;
        } while ((long)local_84 < (long)local_80[0]);
      }
      goto LAB_0289988c;
    }
    if (local_70 == (long *)0x0) goto LAB_028999d0;
    lVar8 = *local_70;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x25) * 0x10 + 0x138);
          goto LAB_0289995c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02091668(local_70,*(long *)puVar2,0x25);
LAB_0289995c:
    (*(code *)*puVar4)(plVar7,puVar4[1]);
    goto LAB_02899968;
  }
  goto LAB_028999d0;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_02899624:
    if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
      puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 8) * 0x10 + 0x138);
      goto LAB_028996a4;
    }
  }
LAB_0289963c:
  puVar4 = (undefined8 *)FUN_02091668(local_70,*(long *)puVar2,8);
LAB_028996a4:
  lVar8 = (*(code *)*puVar4)(plVar7,puVar4[1]);
  if (lVar8 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_0206154c();
    }
    goto LAB_02899c1c;
  }
  lVar8 = FUN_039075a4(lVar8,0);
  if (lVar8 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_0206154c();
    }
    goto LAB_02899c1c;
  }
  lVar8 = FUN_03907610(lVar8,0);
  lVar12 = RootMotion_Dynamics_Muscle__get_colliders(*(undefined8 *)StringLiteral_8748,5);
  if (lVar12 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_0206154c();
    }
    goto LAB_02899c1c;
  }
  if (*(int *)(lVar12 + 0x18) == 0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_02061554();
    }
    goto LAB_02899c1c;
  }
  *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)StringLiteral_11077;
  thunk_FUN_020ccb58();
  uVar6 = FUN_0382acc8(&local_84,0);
  if ((*(uint *)(lVar12 + 0x18) & 0xfffffffe) == 0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_02061554();
    }
    goto LAB_02899c1c;
  }
  *(undefined8 *)(lVar12 + 0x28) = uVar6;
  thunk_FUN_020ccb58();
  if (*(uint *)(lVar12 + 0x18) < 3) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_02061554();
    }
    goto LAB_02899c1c;
  }
  *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)StringLiteral_11078;
  thunk_FUN_020ccb58();
  uVar6 = FUN_0382bd5c(local_80,0);
  if ((*(uint *)(lVar12 + 0x18) & 0xfffffffc) == 0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_02061554();
    }
    goto LAB_02899c1c;
  }
  *(undefined8 *)(lVar12 + 0x38) = uVar6;
  thunk_FUN_020ccb58();
  if (*(uint *)(lVar12 + 0x18) < 5) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_02061554();
    }
    goto LAB_02899c1c;
  }
  *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)StringLiteral_11079;
  thunk_FUN_020ccb58();
  uVar6 = FUN_037389bc(lVar12,0);
  if (lVar8 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_0206154c(uVar6,uVar6);
    }
    goto LAB_02899c1c;
  }
  FUN_03908fe4(lVar8,uVar6,0);
  goto LAB_0289988c;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_0289966c:
    if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
      puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 8) * 0x10 + 0x138);
      goto LAB_028997d4;
    }
  }
LAB_02899684:
  puVar4 = (undefined8 *)FUN_02091668(local_70,*(long *)puVar2,8);
LAB_028997d4:
  lVar8 = (*(code *)*puVar4)(plVar7,puVar4[1]);
  if (lVar8 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_0206154c();
    }
    goto LAB_02899c1c;
  }
  lVar8 = FUN_039075a4(lVar8,0);
  if (lVar8 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_0206154c();
    }
    goto LAB_02899c1c;
  }
  lVar8 = FUN_03907610(lVar8,0);
  plVar11 = local_70;
  if (local_70 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_0206154c();
    }
    goto LAB_02899c1c;
  }
  lVar12 = *local_70;
  uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
        puVar4 = (undefined8 *)(lVar12 + (long)(*piVar10 + 10) * 0x10 + 0x138);
        goto FUN_02899854;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_02091668(local_70,*(long *)puVar2,10);
FUN_02899854:
  uVar6 = (*(code *)*puVar4)(plVar11,puVar4[1]);
  uVar6 = FUN_0372b580(*(undefined8 *)StringLiteral_11080,uVar6,0);
  if (lVar8 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_0206154c(uVar6,uVar6);
    }
    goto LAB_02899c1c;
  }
  FUN_03908fe4(lVar8,uVar6,0);
LAB_0289988c:
  plVar11 = local_70;
  if (local_70 == (long *)0x0) {
LAB_028999d0:
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_0206154c();
    }
  }
  else {
    lVar8 = *local_70;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_028998f0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02091668(local_70,*(long *)puVar2,0xe);
LAB_028998f0:
    (*(code *)*puVar4)(plVar11,puVar4[1]);
LAB_02899968:
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
LAB_02899c1c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


