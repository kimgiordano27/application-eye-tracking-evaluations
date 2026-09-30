/*
FUNCTION_NAME: Animancer.ClipState$$Clone
ENTRY_POINT: 0221be54
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0221c420) */
/* WARNING: Removing unreachable block (ram,0x0221c444) */

void Animancer_ClipState__Clone(long param_1)

{
  int iVar1;
  char cVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar16;
  long lVar17;
  char cStack0000000000000004;
  long in_stack_00000008;
  
  FUN_01ab69ac(*(undefined8 *)(param_1 + 0xd20));
  *(undefined1 *)(unaff_x21 + 0x259) = 1;
  cStack0000000000000004 = 0;
  if (unaff_x20 == 0) {
LAB_0221c41c:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(char *)(unaff_x20 + 0x10) == '\0') {
    return;
  }
  uVar16 = *(undefined8 *)(unaff_x20 + 0x78);
  lVar12 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_01a46ff8(lVar12);
  }
  lVar12 = thunk_FUN_01a89d6c(uVar16,lVar12);
  if (lVar12 == 0) {
    uVar16 = FUN_029e5e84();
    lVar12 = *(long *)(unaff_x20 + 0x78);
    uVar10 = thunk_FUN_01a6ca08(PTR_DAT_03cdbdb8);
    if (lVar12 == 0) {
      uVar11 = thunk_FUN_01a6ca08(PTR_DAT_03cbfd80);
    }
    else {
      if ((*(long *)(unaff_x20 + 0x78) == 0) ||
         (plVar6 = (long *)thunk_FUN_01a5dd74(*(long *)(unaff_x20 + 0x78),0), plVar6 == (long *)0x0)
         ) goto LAB_0221c41c;
      uVar11 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    }
    uVar16 = FUN_025bdc88(uVar16,uVar10,uVar11,0);
    thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
    uVar10 = thunk_FUN_01a89e68();
    FUN_027a794c(uVar10,uVar16,0);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar10);
  }
  uVar16 = *(undefined8 *)(unaff_x20 + 0xb8);
  cStack0000000000000004 = '\0';
  FUN_027e0bd8(uVar16,&stack0x00000004,0);
  cVar2 = *(char *)(unaff_x20 + 0xb0);
  thunk_FUN_01a4b338();
  if (cVar2 == '\0') {
    lVar12 = FUN_0221a510();
    if (lVar12 != 0) {
      plVar6 = *(long **)(unaff_x20 + 0xf0);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      plVar6 = (long *)(**(code **)(*plVar6 + 0x178))
                                 (plVar6,lVar12,*(undefined8 *)(*plVar6 + 0x180));
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar12 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x100);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01a46ff8(lVar12);
      }
      lVar13 = *plVar6;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar12) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto Animancer_UpdatableListPlayable___ctor;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_01a472ec(plVar6,lVar12,0);
Animancer_UpdatableListPlayable___ctor:
      plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      puVar5 = PTR_DAT_03cdbdb0;
      puVar4 = PTR_DAT_03cbed20;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      do {
        lVar12 = *plVar6;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
              puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto Animancer_WeightedMaskLayerList__get_BoneWeights;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_01a472ec(plVar6,*(long *)puVar4,0);
Animancer_WeightedMaskLayerList__get_BoneWeights:
        uVar14 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar14 & 1) == 0) {
          if (plVar6 == (long *)0x0) goto LAB_0221c330;
          lVar12 = *plVar6;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar14 == 0) goto LAB_0221c274;
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_0221c25c;
        }
        lVar12 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x110);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_01a46ff8(lVar12);
        }
        lVar13 = *plVar6;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar12) {
              lVar12 = lVar13 + (long)*piVar15 * 0x10 + 0x138;
              goto LAB_0221c05c;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        lVar12 = FUN_01a472ec(plVar6,lVar12,0);
LAB_0221c05c:
        lVar12 = *(long *)(lVar12 + 8);
        (**(code **)(lVar12 + 0x10))(*(undefined8 *)(lVar12 + 8),lVar12,plVar6,0,&stack0x00000008);
        if (*(long *)(unaff_x20 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar12 = FUN_0221a510();
        if (lVar12 == 0) {
          iVar1 = *(int *)(unaff_x20 + 0x134);
          *(int *)(unaff_x20 + 0x134) = iVar1 + 1;
          if (iVar1 == 0) {
            plVar9 = *(long **)(unaff_x20 + 0x78);
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            lVar12 = *plVar9;
            uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
                  puVar7 = (undefined8 *)(lVar12 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                  goto LAB_0221c21c;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar7 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)puVar5,2);
LAB_0221c21c:
            (*(code *)*puVar7)(plVar9,puVar7[1]);
          }
        }
        else {
          *(undefined4 *)(unaff_x20 + 0x134) = 0;
          lVar17 = *(long *)(unaff_x20 + 0x78);
          lVar13 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_01a46ff8(lVar13);
          }
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar8 = thunk_FUN_01a89d6c(lVar17,lVar13);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6ee0(lVar17,lVar13);
          }
          lVar13 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
          uVar3 = *(ushort *)(lVar13 + 0x135);
          lVar8 = lVar13;
          if ((uVar3 & 1) == 0) {
            lVar8 = FUN_01a46ff8(lVar13);
            lVar13 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
            uVar3 = *(ushort *)(lVar13 + 0x135);
          }
          if ((uVar3 & 1) == 0) {
            lVar13 = FUN_01a46ff8(lVar13);
          }
          plVar9 = (long *)thunk_FUN_01a89d6c(lVar17,lVar13);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6ee0(lVar17,lVar13);
          }
          lVar13 = *plVar9;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar8) {
                lVar13 = lVar13 + (long)*piVar15 * 0x10 + 0x138;
                goto LAB_0221c1ec;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          lVar13 = FUN_01a472ec(plVar9,lVar8,0);
LAB_0221c1ec:
          lVar13 = *(long *)(lVar13 + 8);
          in_stack_00000008 = lVar12;
          (**(code **)(lVar13 + 0x10))
                    (*(undefined8 *)(lVar13 + 8),lVar13,plVar9,&stack0x00000008,lVar12);
        }
      } while( true );
    }
    iVar1 = *(int *)(unaff_x20 + 0x134);
    *(int *)(unaff_x20 + 0x134) = iVar1 + 1;
    if (iVar1 == 0) {
      plVar6 = *(long **)(unaff_x20 + 0x78);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar12 = *plVar6;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_03cdbdb0) {
            puVar7 = (undefined8 *)(lVar12 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_0221c31c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_01a472ec(plVar6,*(long *)PTR_DAT_03cdbdb0,2);
LAB_0221c31c:
      (*(code *)*puVar7)(plVar6,puVar7[1]);
    }
  }
  goto LAB_0221c330;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_0221c25c:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_03cbed08) {
      puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0221c290;
    }
  }
LAB_0221c274:
  puVar7 = (undefined8 *)FUN_01a472ec(plVar6,*(long *)PTR_DAT_03cbed08,0);
LAB_0221c290:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_0221c330:
  if (cStack0000000000000004 != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar16,0);
  }
  return;
}


