/*
FUNCTION_NAME: Oculus.Interaction.PinchPointerVisual$$HandlePostprocessed
ENTRY_POINT: 0692fc64
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06930474) */
/* WARNING: Removing unreachable block (ram,0x06930250) */
/* WARNING: Removing unreachable block (ram,0x06930488) */
/* WARNING: Removing unreachable block (ram,0x0693005c) */

void Oculus_Interaction_PinchPointerVisual__HandlePostprocessed(void)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  uint in_w10;
  int *piVar6;
  uint uVar7;
  uint in_w12;
  uint uVar8;
  int in_w13;
  int iVar9;
  long *unaff_x19;
  long unaff_x23;
  
  if (in_w12 < in_w10) {
    uVar7 = in_w12 + 1;
    iVar9 = in_w13 + 1;
    *(uint *)(unaff_x19 + 3) = uVar7;
    *(undefined2 *)(in_x9 + (long)(int)in_w12 * 2 + 0x20) = 9;
    *(int *)((long)unaff_x19 + 0x1c) = iVar9;
  }
  else {
    FUN_0496d708();
    uVar7 = *(uint *)(unaff_x19 + 3);
    in_x9 = unaff_x19[2];
    iVar9 = *(int *)((long)unaff_x19 + 0x1c) + 1;
    *(int *)((long)unaff_x19 + 0x1c) = iVar9;
    if (in_x9 == 0) goto LAB_0693046c;
    in_w10 = *(uint *)(in_x9 + 0x18);
  }
  if (uVar7 < in_w10) {
    uVar8 = uVar7 + 1;
    iVar9 = iVar9 + 1;
    *(uint *)(unaff_x19 + 3) = uVar8;
    *(undefined2 *)(in_x9 + (long)(int)uVar7 * 2 + 0x20) = 0x5c;
    *(int *)((long)unaff_x19 + 0x1c) = iVar9;
  }
  else {
    FUN_0496d708();
    uVar8 = *(uint *)(unaff_x19 + 3);
    in_x9 = unaff_x19[2];
    iVar9 = *(int *)((long)unaff_x19 + 0x1c) + 1;
    *(int *)((long)unaff_x19 + 0x1c) = iVar9;
    if (in_x9 == 0) goto LAB_0693046c;
    in_w10 = *(uint *)(in_x9 + 0x18);
  }
  if (uVar8 < in_w10) {
    uVar7 = uVar8 + 1;
    *(uint *)(unaff_x19 + 3) = uVar7;
    *(undefined2 *)(in_x9 + (long)(int)uVar8 * 2 + 0x20) = 0xc;
    *(int *)((long)unaff_x19 + 0x1c) = iVar9 + 1;
  }
  else {
    FUN_0496d708();
    uVar7 = *(uint *)(unaff_x19 + 3);
    in_x9 = unaff_x19[2];
    *(int *)((long)unaff_x19 + 0x1c) = *(int *)((long)unaff_x19 + 0x1c) + 1;
    if (in_x9 == 0) goto LAB_0693046c;
    in_w10 = *(uint *)(in_x9 + 0x18);
  }
  if (uVar7 < in_w10) {
    *(uint *)(unaff_x19 + 3) = uVar7 + 1;
    *(undefined2 *)(in_x9 + (long)(int)uVar7 * 2 + 0x20) = 8;
  }
  else {
    FUN_0496d708();
  }
  iVar9 = 0;
  do {
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_083c2b78) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_0692fe40;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_0338f71c();
LAB_0692fe40:
    (*(code *)*puVar1)();
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0x20);
  lVar4 = FUN_03398188(DAT_083c73f0,1);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) == 0) goto LAB_06930470;
    *(undefined2 *)(lVar4 + 0x20) = 0x27;
    plVar2 = (long *)FUN_03f60abc();
    if (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_083c2fb8) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0692feec;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined8 *)FUN_0338f71c(plVar2,DAT_083c2fb8,0);
LAB_0692feec:
      plVar2 = (long *)(*(code *)*puVar1)(plVar2,puVar1[1]);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      do {
        lVar4 = *plVar2;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_083cc870) {
              puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0692ff58;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar1 = (undefined8 *)FUN_0338f71c(plVar2,DAT_083cc870,0);
LAB_0692ff58:
        uVar5 = (*(code *)*puVar1)(plVar2,puVar1[1]);
        if ((uVar5 & 1) == 0) {
          if (plVar2 == (long *)0x0) goto LAB_06930050;
          lVar4 = *plVar2;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 == 0) goto LAB_06930028;
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_06930010;
        }
        lVar4 = *plVar2;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_083c3528) {
              puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0692ffb4;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar1 = (undefined8 *)FUN_0338f71c(plVar2,DAT_083c3528,0);
LAB_0692ffb4:
        uVar5 = (*(code *)*puVar1)(plVar2,puVar1[1]);
        lVar4 = **(long **)(*(long *)(unaff_x23 + 0xdd8) + 0xb8);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        if (*(uint *)(lVar4 + 0x18) <= ((uint)uVar5 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d44();
        }
        *(undefined1 *)(lVar4 + (uVar5 & 0xffff) + 0x20) = 1;
      } while( true );
    }
  }
  goto LAB_0693046c;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_06930010:
    if (*(long *)(piVar6 + -2) == DAT_083cc7a8) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_06930044;
    }
  }
LAB_06930028:
  puVar1 = (undefined8 *)FUN_0338f71c(plVar2,DAT_083cc7a8,0);
LAB_06930044:
  (*(code *)*puVar1)(plVar2,puVar1[1]);
LAB_06930050:
  lVar4 = FUN_03398188(DAT_083c73f0,1);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) == 0) {
LAB_06930470:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    *(undefined2 *)(lVar4 + 0x20) = 0x22;
    plVar2 = (long *)FUN_03f60abc();
    if (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_083c2fb8) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_069300e4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined8 *)FUN_0338f71c(plVar2,DAT_083c2fb8,0);
LAB_069300e4:
      plVar2 = (long *)(*(code *)*puVar1)(plVar2,puVar1[1]);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      do {
        lVar4 = *plVar2;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_083cc870) {
              puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_06930150;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar1 = (undefined8 *)FUN_0338f71c(plVar2,DAT_083cc870,0);
LAB_06930150:
        uVar5 = (*(code *)*puVar1)(plVar2,puVar1[1]);
        if ((uVar5 & 1) == 0) {
          if (plVar2 == (long *)0x0)
          goto Oculus_Interaction_PokeInteractable__set_CancelSelectTangent;
          lVar4 = *plVar2;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 == 0) goto Oculus_Interaction_PokeInteractable__get_ExitHoverTangent;
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto Oculus_Interaction_PokeInteractable__set_EnterHoverTangent;
        }
        lVar4 = *plVar2;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_083c3528) {
              puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_069301ac;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar1 = (undefined8 *)FUN_0338f71c(plVar2,DAT_083c3528,0);
LAB_069301ac:
        uVar5 = (*(code *)*puVar1)(plVar2,puVar1[1]);
        lVar4 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0xdd8) + 0xb8) + 8);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        if (*(uint *)(lVar4 + 0x18) <= ((uint)uVar5 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d44();
        }
        *(undefined1 *)(lVar4 + (uVar5 & 0xffff) + 0x20) = 1;
      } while( true );
    }
  }
  goto LAB_0693046c;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_069303f4:
    if (*(long *)(piVar6 + -2) == DAT_083cc7a8) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_06930428;
    }
  }
LAB_0693040c:
  puVar1 = (undefined8 *)FUN_0338f71c(plVar2,DAT_083cc7a8,0);
LAB_06930428:
  (*(code *)*puVar1)(plVar2,puVar1[1]);
  return;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
Oculus_Interaction_PokeInteractable__set_EnterHoverTangent:
    if (*(long *)(piVar6 + -2) == DAT_083cc7a8) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_06930238;
    }
  }
Oculus_Interaction_PokeInteractable__get_ExitHoverTangent:
  puVar1 = (undefined8 *)FUN_0338f71c(plVar2,DAT_083cc7a8,0);
LAB_06930238:
  (*(code *)*puVar1)(plVar2,puVar1[1]);
Oculus_Interaction_PokeInteractable__set_CancelSelectTangent:
  uVar3 = FUN_03398188(DAT_083c73f0,5);
  FUN_06736060(uVar3,DAT_0842c228,0);
  plVar2 = (long *)FUN_03f60abc();
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_083c2fb8) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto FUN_069302d8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_0338f71c(plVar2,DAT_083c2fb8,0);
FUN_069302d8:
    plVar2 = (long *)(*(code *)*puVar1)(plVar2,puVar1[1]);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    do {
      lVar4 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_083cc870) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_06930344;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined8 *)FUN_0338f71c(plVar2,DAT_083cc870,0);
LAB_06930344:
      uVar5 = (*(code *)*puVar1)(plVar2,puVar1[1]);
      if ((uVar5 & 1) == 0) {
        if (plVar2 == (long *)0x0) {
          return;
        }
        lVar4 = *plVar2;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 == 0) goto LAB_0693040c;
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_069303f4;
      }
      lVar4 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_083c3528) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_069303a0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined8 *)FUN_0338f71c(plVar2,DAT_083c3528,0);
LAB_069303a0:
      uVar5 = (*(code *)*puVar1)(plVar2,puVar1[1]);
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0xdd8) + 0xb8) + 0x10);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      if (*(uint *)(lVar4 + 0x18) <= ((uint)uVar5 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      *(undefined1 *)(lVar4 + (uVar5 & 0xffff) + 0x20) = 1;
    } while( true );
  }
LAB_0693046c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


