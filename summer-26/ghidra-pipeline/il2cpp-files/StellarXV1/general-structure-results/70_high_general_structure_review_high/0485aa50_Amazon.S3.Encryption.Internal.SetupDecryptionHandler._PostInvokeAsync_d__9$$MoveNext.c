/*
FUNCTION_NAME: Amazon.S3.Encryption.Internal.SetupDecryptionHandler.<PostInvokeAsync>d__9$$MoveNext
ENTRY_POINT: 0485aa50
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0485bedc) */
/* WARNING: Removing unreachable block (ram,0x0485c014) */
/* WARNING: Removing unreachable block (ram,0x0485c00c) */

long * Amazon_S3_Encryption_Internal_SetupDecryptionHandler_<PostInvokeAsync>d__9__MoveNext(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  int unaff_w24;
  undefined8 unaff_x25;
  undefined8 unaff_x27;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined4 in_stack_00000028;
  long *in_stack_00000030;
  long in_stack_00000038;
  
  FUN_04077588();
  FUN_04077588(PTR_DAT_092a8790);
  *(undefined1 *)(unaff_x22 + 0x9b1) = 1;
  in_stack_00000030 = (long *)0x0;
  in_stack_00000038 = 0;
  plVar5 = (long *)thunk_FUN_040b4efc(*unaff_x21);
  FUN_047dae74();
  if (unaff_x20 != 0) {
    in_stack_00000028 = *(undefined4 *)(unaff_x20 + 0x6c);
    in_stack_00000018 = *(undefined8 *)PTR_DAT_092af5b0;
    in_stack_00000020 = (undefined8 *)0xffffffffffffffff;
    uVar6 = FUN_076b01b4(&stack0x00000018,0);
    if (plVar5 != (long *)0x0) {
      lVar13 = *plVar5;
      uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_092a58b8) {
            puVar7 = (undefined8 *)(lVar13 + (long)(*piVar17 + 10) * 0x10 + 0x138);
            goto LAB_0485ab14;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar7 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)PTR_DAT_092a58b8,10);
LAB_0485ab14:
      (*(code *)*puVar7)(plVar5,uVar6,puVar7[1]);
      lVar13 = FUN_048aa6d0();
                    /* try { // try from 0485ab40 to 0495ac73 has its CatchHandler @ 0485ab40
                       catch() { ... } // from try @ 0485ab40 with catch @ 0485ab40
                       catch() { ... } // from try @ 0485ae10 with catch @ 0485ab40
                       catch() { ... } // from try @ 0485aef0 with catch @ 0485ab40
                       catch() { ... } // from try @ 0485af08 with catch @ 0485ab40
                       catch() { ... } // from try @ 0485b00c with catch @ 0485ab40
                       catch() { ... } // from try @ 0485b138 with catch @ 0485ab40
                       catch() { ... } // from try @ 0485b18c with catch @ 0485ab40 */
      if ((lVar13 != 0) && (plVar8 = (long *)FUN_048aaedc(lVar13,0), plVar8 != (long *)0x0)) {
        lVar14 = *plVar8;
        uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0928a908) {
              puVar7 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0485aba0;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar7 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)PTR_DAT_0928a908,0);
LAB_0485aba0:
        puVar4 = PTR_DAT_092af568;
        puVar3 = PTR_DAT_092a5ae8;
        puVar2 = PTR_DAT_092a53c0;
        puVar1 = PTR_DAT_092860c8;
        in_stack_00000030 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
        in_stack_00000020 = &stack0x00000030;
        in_stack_00000018 = 0;
        do {
          plVar8 = in_stack_00000030;
          if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar15 = *in_stack_00000030;
          lVar14 = *(long *)puVar1;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar14) {
                puVar7 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_0485ac2c;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar7 = (undefined8 *)FUN_040b1e00(in_stack_00000030,lVar14,0);
LAB_0485ac2c:
          uVar16 = (*(code *)*puVar7)(plVar8,puVar7[1]);
          plVar8 = in_stack_00000030;
          if ((uVar16 & 1) == 0) {
                    /* try { // try from 0485ad90 to 0495addb has its CatchHandler @ 0485b14c */
            if (in_stack_00000030 == (long *)0x0) goto LAB_0485ae00;
            lVar13 = *in_stack_00000030;
            uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar16 == 0) goto LAB_0485add8;
            piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            goto LAB_0485adc0;
          }
          if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar14 = *in_stack_00000030;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0928a910) {
                puVar7 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_0485ac98;
              }
              uVar16 = uVar16 - 1;
                    /* try { // try from 0485ac74 to 0495ac8f has its CatchHandler @ 0485b144 */
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar7 = (undefined8 *)FUN_040b1e00(in_stack_00000030,*(long *)PTR_DAT_0928a910,0);
LAB_0485ac98:
                    /* try { // try from 0485ac9c to 0495ac9f has its CatchHandler @ 0485b140 */
          uVar6 = (*(code *)*puVar7)(plVar8,puVar7[1]);
          lVar14 = *plVar5;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
                    /* try { // try from 0485acc8 to 0495accb has its CatchHandler @ 0485b13c */
              if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_092a58b8) {
                puVar7 = (undefined8 *)(lVar14 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_0485ad00;
              }
              uVar16 = uVar16 - 1;
                    /* try { // try from 0485acd8 to 0495acfb has its CatchHandler @ 0485af18 */
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar7 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)PTR_DAT_092a58b8,1);
LAB_0485ad00:
          plVar8 = (long *)(*(code *)*puVar7)(plVar5,puVar7[1]);
                    /* try { // try from 0485ad14 to 0495ad23 has its CatchHandler @ 0485af20 */
          uVar9 = FUN_048aabc4(lVar13,uVar6,0);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar14 = *plVar8;
                    /* try { // try from 0485ad30 to 0495ad4f has its CatchHandler @ 0485b148 */
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                puVar7 = (undefined8 *)(lVar14 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_0485ad78;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar7 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)puVar3,1);
LAB_0485ad78:
          (*(code *)*puVar7)(plVar8,uVar6,uVar9,puVar7[1]);
        } while( true );
      }
    }
  }
  goto LAB_0485c008;
LAB_0485b73c:
  puVar7 = (undefined8 *)(lVar14 + (long)(*piVar17 + 5) * 0x10 + 0x138);
LAB_0485b74c:
  (*(code *)*puVar7)(plVar8,uVar6,in_stack_00000010,puVar7[1]);
  goto LAB_0485b760;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_0485be90:
    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_092860c0) {
      puVar7 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0485bec4;
    }
  }
LAB_0485bea8:
  puVar7 = (undefined8 *)FUN_040b1e00(in_stack_00000030,*(long *)PTR_DAT_092860c0,0);
LAB_0485bec4:
  (*(code *)*puVar7)(plVar12,puVar7[1]);
LAB_0485bed0:
  if (plVar10 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
    lVar13 = *plVar5;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_092a58b8) {
          puVar7 = (undefined8 *)(lVar13 + (long)(*piVar17 + 0xe) * 0x10 + 0x138);
          goto LAB_0485bf50;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)PTR_DAT_092a58b8,0xe);
LAB_0485bf50:
    (*(code *)*puVar7)(plVar5,uVar6,puVar7[1]);
    lVar13 = *plVar5;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_092a58b8) {
          puVar7 = (undefined8 *)(lVar13 + (long)(*piVar17 + 3) * 0x10 + 0x138);
          goto LAB_0485bfb8;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)PTR_DAT_092a58b8,3);
LAB_0485bfb8:
    (*(code *)*puVar7)(plVar5,1,puVar7[1]);
    return plVar5;
  }
  goto LAB_0485c008;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_0485adc0:
    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_092860c0) {
      puVar7 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0485adf4;
    }
  }
LAB_0485add8:
  puVar7 = (undefined8 *)FUN_040b1e00(in_stack_00000030,*(long *)PTR_DAT_092860c0,0);
LAB_0485adf4:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
LAB_0485ae00:
  uVar6 = FUN_048aa744();
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)puVar4);
  }
  FUN_0485d408(plVar5,uVar6);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x88);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar16 = FUN_04793b60(uVar6,0,0);
  puVar4 = PTR_DAT_092af5c0;
  if ((uVar16 & 1) != 0) {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x88);
    lVar13 = *(long *)PTR_DAT_092af5c0;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar13 = *(long *)puVar4;
    }
    uVar9 = **(undefined8 **)(lVar13 + 0xb8);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)puVar2);
    }
    uVar16 = FUN_04793b60(uVar6,uVar9,0);
    if ((uVar16 & 1) != 0) {
      lVar13 = *plVar5;
      uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_092a58b8) {
            puVar7 = (undefined8 *)(lVar13 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_0485af04;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar7 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)PTR_DAT_092a58b8,1);
LAB_0485af04:
      plVar8 = (long *)(*(code *)*puVar7)(plVar5,puVar7[1]);
      uVar6 = *(undefined8 *)(unaff_x20 + 0x88);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_040d65a8(*(long *)puVar2);
      }
      uVar6 = FUN_047933f4(uVar6,0);
      uVar6 = FUN_0492e308(uVar6,0);
      if (plVar8 == (long *)0x0) goto LAB_0485c008;
      lVar13 = *plVar8;
      uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
      uVar9 = *(undefined8 *)PTR_DAT_092af5c8;
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar13 + (long)(*piVar17 + 5) * 0x10 + 0x138);
            goto LAB_0485afa4;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar7 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)puVar3,5);
LAB_0485afa4:
      (*(code *)*puVar7)(plVar8,uVar9,uVar6,puVar7[1]);
    }
  }
  uVar16 = FUN_048aa50c();
  if ((uVar16 & 1) != 0) {
    lVar13 = *plVar5;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_092a58b8) {
          puVar7 = (undefined8 *)(lVar13 + (long)(*piVar17 + 1) * 0x10 + 0x138);
          goto LAB_0485b020;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)PTR_DAT_092a58b8,1);
LAB_0485b020:
    plVar8 = (long *)(*(code *)*puVar7)(plVar5,puVar7[1]);
    uVar6 = *(undefined8 *)(unaff_x20 + 0xb8);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)puVar2);
    }
    uVar6 = FUN_047933f4(uVar6,0);
    if (plVar8 == (long *)0x0) goto LAB_0485c008;
    lVar13 = *plVar8;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
    uVar9 = *(undefined8 *)PTR_DAT_092af5e0;
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar13 + (long)(*piVar17 + 5) * 0x10 + 0x138);
          goto LAB_0485b0b8;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)puVar3,5);
LAB_0485b0b8:
    (*(code *)*puVar7)(plVar8,uVar9,uVar6,puVar7[1]);
  }
  uVar16 = FUN_048aa4dc();
  if ((uVar16 & 1) != 0) {
    lVar13 = *plVar5;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_092a58b8) {
          puVar7 = (undefined8 *)(lVar13 + (long)(*piVar17 + 1) * 0x10 + 0x138);
          goto LAB_0485b134;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)PTR_DAT_092a58b8,1);
LAB_0485b134:
    plVar8 = (long *)(*(code *)*puVar7)(plVar5,puVar7[1]);
    if (plVar8 == (long *)0x0) goto LAB_0485c008;
    lVar13 = *plVar8;
    uVar6 = *(undefined8 *)(unaff_x20 + 0x98);
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
    uVar9 = *(undefined8 *)PTR_DAT_092af5f0;
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar13 + (long)(*piVar17 + 5) * 0x10 + 0x138);
          goto LAB_0485b1a8;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)puVar3,5);
LAB_0485b1a8:
    (*(code *)*puVar7)(plVar8,uVar9,uVar6,puVar7[1]);
  }
  uVar16 = FUN_048aa5e8();
  puVar4 = PTR_DAT_092af5b8;
  if ((uVar16 & 1) != 0) {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x90);
    lVar13 = *(long *)PTR_DAT_092af5b8;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar13 = *(long *)puVar4;
    }
    uVar9 = **(undefined8 **)(lVar13 + 0xb8);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)puVar2);
    }
    uVar16 = FUN_04793488(uVar6,uVar9,0);
    if ((uVar16 & 1) != 0) {
      lVar13 = *plVar5;
      uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_092a58b8) {
            puVar7 = (undefined8 *)(lVar13 + (long)(*piVar17 + 4) * 0x10 + 0x138);
            goto LAB_0485b274;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar7 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)PTR_DAT_092a58b8,4);
LAB_0485b274:
      plVar8 = (long *)(*(code *)*puVar7)(plVar5,puVar7[1]);
      lVar13 = *(long *)puVar4;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_040d65a8(lVar13);
        lVar13 = *(long *)puVar4;
      }
      if ((**(long **)(lVar13 + 0xb8) == 0) || (plVar8 == (long *)0x0)) goto LAB_0485c008;
      lVar14 = *plVar8;
      uVar6 = *(undefined8 *)(**(long **)(lVar13 + 0xb8) + 0x10);
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      uVar9 = *(undefined8 *)PTR_DAT_092af5d0;
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar14 + (long)(*piVar17 + 5) * 0x10 + 0x138);
            goto LAB_0485b30c;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar7 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)puVar3,5);
LAB_0485b30c:
      (*(code *)*puVar7)(plVar8,uVar9,uVar6,puVar7[1]);
    }
  }
  lVar13 = *plVar5;
  uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_092a58b8) {
        puVar7 = (undefined8 *)(lVar13 + (long)(*piVar17 + 4) * 0x10 + 0x138);
        goto LAB_0485b378;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar7 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)PTR_DAT_092a58b8,4);
LAB_0485b378:
  plVar8 = (long *)(*(code *)*puVar7)(plVar5,puVar7[1]);
  plVar10 = (long *)thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09285ee8);
  FUN_074f4a88(plVar10,*(undefined8 *)PTR_DAT_09287f68,0);
  uVar16 = FUN_074e5d94(*(undefined8 *)(unaff_x20 + 0x50),0);
  if ((uVar16 & 1) == 0) {
    uVar6 = FUN_0492e308(*(undefined8 *)(unaff_x20 + 0x50),0);
    if (plVar10 == (long *)0x0) goto LAB_0485c008;
    FUN_074ee2d4(plVar10,uVar6,0);
  }
  if (*(int *)(*(long *)PTR_DAT_092a0a28 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  in_stack_00000038 = FUN_0485d8a0(unaff_x27);
  if (unaff_w24 - 1U < 2) {
    if (0x93a80 < in_stack_00000038) {
      thunk_FUN_040dedf8(PTR_DAT_0928de30);
      FUN_03b08ec8();
      uVar6 = FUN_076060c0(0);
      in_stack_00000018 = 0x93a80;
      uVar9 = thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x68),&stack0x00000018);
      uVar11 = thunk_FUN_040dedf8(PTR_DAT_092af610);
      uVar6 = FUN_074e75d4(uVar6,uVar11,uVar9,0);
      thunk_FUN_040dedf8(PTR_DAT_09287028);
      uVar9 = thunk_FUN_040b4efc();
      FUN_075d4b88(uVar9,uVar6,0);
      uVar6 = thunk_FUN_040dedf8(PTR_DAT_092af618);
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar9,uVar6);
    }
LAB_0485b54c:
    if (*(int *)(*(long *)PTR_DAT_0928de30 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar6 = FUN_076060c0(0);
    uVar6 = FUN_07678018(&stack0x00000038,uVar6,0);
    if (plVar8 == (long *)0x0) goto LAB_0485c008;
    lVar13 = *plVar8;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
    uVar9 = *(undefined8 *)PTR_DAT_092af5e8;
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar13 + (long)(*piVar17 + 5) * 0x10 + 0x138);
          goto LAB_0485b5e0;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)puVar3,5);
LAB_0485b5e0:
    (*(code *)*puVar7)(plVar8,uVar9,uVar6,puVar7[1]);
    uVar16 = FUN_074e5d94(in_stack_00000010,0);
    if ((uVar16 & 1) == 0) {
      lVar14 = *plVar8;
      lVar13 = *(long *)puVar3;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      uVar6 = *(undefined8 *)PTR_DAT_092af608;
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar13) goto LAB_0485b73c;
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
LAB_0485b72c:
      puVar7 = (undefined8 *)FUN_040b1e00(plVar8,lVar13,5);
      goto LAB_0485b74c;
    }
  }
  else {
    if (unaff_w24 != 0) goto LAB_0485b54c;
    if (*(int *)(*(long *)PTR_DAT_0928de30 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar6 = FUN_076060c0(0);
    uVar6 = FUN_07678018(&stack0x00000038,uVar6,0);
    if (plVar8 == (long *)0x0) goto LAB_0485c008;
    lVar13 = *plVar8;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
    uVar9 = *(undefined8 *)PTR_DAT_092a92c0;
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar13 + (long)(*piVar17 + 5) * 0x10 + 0x138);
          goto LAB_0485b658;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)puVar3,5);
LAB_0485b658:
    (*(code *)*puVar7)(plVar8,uVar9,uVar6,puVar7[1]);
    lVar13 = *plVar8;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
    uVar6 = *(undefined8 *)PTR_DAT_092ad130;
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar13 + (long)(*piVar17 + 5) * 0x10 + 0x138);
          goto LAB_0485b6c8;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)puVar3,5);
LAB_0485b6c8:
    (*(code *)*puVar7)(plVar8,uVar6,unaff_x25,puVar7[1]);
    uVar16 = FUN_074e5d94(in_stack_00000010,0);
    if ((uVar16 & 1) == 0) {
      lVar14 = *plVar8;
      lVar13 = *(long *)puVar3;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      uVar6 = *(undefined8 *)PTR_DAT_092ab7d0;
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar13) goto LAB_0485b73c;
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      goto LAB_0485b72c;
    }
  }
LAB_0485b760:
  uVar16 = FUN_048aa38c();
  if ((uVar16 & 1) != 0) {
    uVar6 = FUN_0492e308(*(undefined8 *)(unaff_x20 + 0x70),0);
    lVar13 = *plVar5;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
    uVar9 = *(undefined8 *)PTR_DAT_092af5d8;
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_092a58b8) {
          puVar7 = (undefined8 *)(lVar13 + (long)(*piVar17 + 8) * 0x10 + 0x138);
          goto LAB_0485b7e4;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)PTR_DAT_092a58b8,8);
LAB_0485b7e4:
    (*(code *)*puVar7)(plVar5,uVar9,uVar6,puVar7[1]);
  }
  uVar16 = FUN_048aa3bc();
  if ((uVar16 & 1) != 0) {
    uVar6 = FUN_0492e308(*(undefined8 *)(unaff_x20 + 0x78),0);
    lVar13 = *plVar5;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
    uVar9 = *(undefined8 *)PTR_DAT_092af5f8;
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_092a58b8) {
          puVar7 = (undefined8 *)(lVar13 + (long)(*piVar17 + 8) * 0x10 + 0x138);
          goto LAB_0485b87c;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)PTR_DAT_092a58b8,8);
LAB_0485b87c:
    (*(code *)*puVar7)(plVar5,uVar9,uVar6,puVar7[1]);
  }
  uVar16 = FUN_048aa480();
  if ((uVar16 & 1) != 0) {
    uVar6 = FUN_048aa3dc();
    uVar6 = FUN_049318b0(uVar6,0);
    lVar13 = *plVar5;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
    uVar9 = *(undefined8 *)PTR_DAT_092af600;
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_092a58b8) {
          puVar7 = (undefined8 *)(lVar13 + (long)(*piVar17 + 8) * 0x10 + 0x138);
          goto LAB_0485b91c;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)PTR_DAT_092a58b8,8);
LAB_0485b91c:
    (*(code *)*puVar7)(plVar5,uVar9,uVar6,puVar7[1]);
  }
  lVar13 = FUN_048aa658();
  if (lVar13 != 0) {
    uVar16 = FUN_074e5d94(*(undefined8 *)(lVar13 + 0x28),0);
    if ((uVar16 & 1) == 0) {
      if (plVar8 == (long *)0x0) goto LAB_0485c008;
      lVar14 = *plVar8;
      uVar6 = *(undefined8 *)(lVar13 + 0x28);
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      uVar9 = *(undefined8 *)PTR_DAT_092ad198;
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar14 + (long)(*piVar17 + 5) * 0x10 + 0x138);
            goto LAB_0485b9b8;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar7 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)puVar3,5);
LAB_0485b9b8:
      (*(code *)*puVar7)(plVar8,uVar9,uVar6,puVar7[1]);
    }
    uVar16 = FUN_074e5d94(*(undefined8 *)(lVar13 + 0x10),0);
    if ((uVar16 & 1) == 0) {
      if (plVar8 == (long *)0x0) goto LAB_0485c008;
      lVar14 = *plVar8;
      uVar6 = *(undefined8 *)(lVar13 + 0x10);
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      uVar9 = *(undefined8 *)PTR_DAT_092ad190;
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar14 + (long)(*piVar17 + 5) * 0x10 + 0x138);
            goto LAB_0485ba40;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar7 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)puVar3,5);
LAB_0485ba40:
      (*(code *)*puVar7)(plVar8,uVar9,uVar6,puVar7[1]);
    }
    uVar16 = FUN_074e5d94(*(undefined8 *)(lVar13 + 0x18),0);
    if ((uVar16 & 1) == 0) {
      if (plVar8 == (long *)0x0) goto LAB_0485c008;
      lVar14 = *plVar8;
      uVar6 = *(undefined8 *)(lVar13 + 0x18);
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      uVar9 = *(undefined8 *)PTR_DAT_092ad1b8;
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar14 + (long)(*piVar17 + 5) * 0x10 + 0x138);
            goto LAB_0485bac8;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar7 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)puVar3,5);
LAB_0485bac8:
      (*(code *)*puVar7)(plVar8,uVar9,uVar6,puVar7[1]);
    }
    uVar16 = FUN_074e5d94(*(undefined8 *)(lVar13 + 0x20),0);
    if ((uVar16 & 1) == 0) {
      if (plVar8 == (long *)0x0) goto LAB_0485c008;
      lVar14 = *plVar8;
      uVar6 = *(undefined8 *)(lVar13 + 0x20);
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      uVar9 = *(undefined8 *)PTR_DAT_092ad1a8;
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar14 + (long)(*piVar17 + 5) * 0x10 + 0x138);
            goto LAB_0485bb50;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar7 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)puVar3,5);
LAB_0485bb50:
      (*(code *)*puVar7)(plVar8,uVar9,uVar6,puVar7[1]);
    }
    uVar16 = FUN_074e5d94(*(undefined8 *)(lVar13 + 0x30),0);
    if ((uVar16 & 1) == 0) {
      if (plVar8 == (long *)0x0) goto LAB_0485c008;
      lVar14 = *plVar8;
      uVar6 = *(undefined8 *)(lVar13 + 0x30);
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      uVar9 = *(undefined8 *)PTR_DAT_092ad1a0;
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar14 + (long)(*piVar17 + 5) * 0x10 + 0x138);
            goto Amazon_S3_Encryption_Internal_UserAgentHandler__PreInvoke;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar7 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)puVar3,5);
Amazon_S3_Encryption_Internal_UserAgentHandler__PreInvoke:
      (*(code *)*puVar7)(plVar8,uVar9,uVar6,puVar7[1]);
    }
    uVar16 = FUN_074e5d94(*(undefined8 *)(lVar13 + 0x38),0);
    if ((uVar16 & 1) == 0) {
      if (plVar8 == (long *)0x0) goto LAB_0485c008;
      lVar14 = *plVar8;
      uVar6 = *(undefined8 *)(lVar13 + 0x38);
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      uVar9 = *(undefined8 *)PTR_DAT_092ad1b0;
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar14 + (long)(*piVar17 + 5) * 0x10 + 0x138);
            goto LAB_0485bc60;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar7 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)puVar3,5);
LAB_0485bc60:
      (*(code *)*puVar7)(plVar8,uVar9,uVar6,puVar7[1]);
    }
    lVar13 = FUN_048aa7bc();
    if ((lVar13 != 0) && (plVar12 = (long *)FUN_048b5564(lVar13,0), plVar12 != (long *)0x0)) {
      lVar13 = *plVar12;
      uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0928a908) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0485bce8;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar7 = (undefined8 *)FUN_040b1e00(plVar12,*(long *)PTR_DAT_0928a908,0);
LAB_0485bce8:
      in_stack_00000030 = (long *)(*(code *)*puVar7)(plVar12,puVar7[1]);
      in_stack_00000020 = &stack0x00000030;
      in_stack_00000018 = 0;
      do {
        plVar12 = in_stack_00000030;
        if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar14 = *in_stack_00000030;
        lVar13 = *(long *)puVar1;
        uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar13) {
              puVar7 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0485bd54;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar7 = (undefined8 *)FUN_040b1e00(in_stack_00000030,lVar13,0);
LAB_0485bd54:
        uVar16 = (*(code *)*puVar7)(plVar12,puVar7[1]);
        plVar12 = in_stack_00000030;
        if ((uVar16 & 1) == 0) {
          if (in_stack_00000030 == (long *)0x0) goto LAB_0485bed0;
          lVar13 = *in_stack_00000030;
          uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar16 == 0) goto LAB_0485bea8;
          piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          goto LAB_0485be90;
        }
        if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar13 = *in_stack_00000030;
        uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0928a910) {
              puVar7 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0485bdc0;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar7 = (undefined8 *)FUN_040b1e00(in_stack_00000030,*(long *)PTR_DAT_0928a910,0);
LAB_0485bdc0:
        uVar6 = (*(code *)*puVar7)(plVar12,puVar7[1]);
        lVar13 = FUN_048aa7bc();
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        uVar9 = FUN_048b52b0(lVar13,uVar6,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar13 = *plVar8;
        uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar13 + (long)(*piVar17 + 5) * 0x10 + 0x138);
              goto LAB_0485be44;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar7 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)puVar3,5);
LAB_0485be44:
        (*(code *)*puVar7)(plVar8,uVar6,uVar9,puVar7[1]);
      } while( true );
    }
  }
LAB_0485c008:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


