/*
FUNCTION_NAME: Amazon.Util.AWSSDKUtils.<>c__DisplayClass64_1<object>$$<InvokeInBackground>b__0
ENTRY_POINT: 052322f8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05232954) */

void Amazon_Util_AWSSDKUtils_<>c__DisplayClass64_1<object>__<InvokeInBackground>b__0(void)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  uint uVar11;
  long *unaff_x21;
  undefined8 *unaff_x24;
  undefined8 in_stack_00000008;
  undefined1 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  long *in_stack_00000110;
  long *in_stack_000001a8;
  int in_stack_000001b0;
  long in_stack_000001d8;
  
  iVar1 = *(int *)(unaff_x19 + 0xb8);
  *(int *)(unaff_x19 + 0xb8) = iVar1 + 1;
  FUN_08a56458(&stack0x00000008,&stack0x00000118,iVar1,0);
  unaff_x24[0x25] = in_stack_00000010;
  unaff_x24[0x24] = in_stack_00000008;
  unaff_x24[0x27] = in_stack_00000020;
  unaff_x24[0x26] = in_stack_00000018;
  if (in_stack_000001b0 == 1) {
    lVar7 = *(long *)(*(long *)(in_stack_000001d8 + 0x38) + 0x88);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      FUN_040b1acc(lVar7);
    }
    plVar3 = (long *)thunk_FUN_040b4e00();
    if (plVar3 != (long *)0x0) {
      FUN_08a55fc8(&stack0x000001b0,0);
      lVar7 = *(long *)(*(long *)(in_stack_000001d8 + 0x38) + 0x88);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_040b1acc(lVar7);
      }
      lVar8 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_052326e4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00(plVar3,lVar7,0);
LAB_052326e4:
      uVar9 = (*(code *)*puVar4)(plVar3);
      plVar3 = in_stack_000001a8;
      if ((uVar9 & 1) != 0) {
        if (in_stack_000001a8 == (long *)0x0) goto LAB_05232950;
        lVar7 = *(long *)(*(long *)(in_stack_000001d8 + 0x38) + 0x28);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_040b1acc(lVar7);
        }
        lVar8 = *plVar3;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar7) goto LAB_05232810;
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
LAB_05232758:
        puVar4 = (undefined8 *)FUN_040b1e00(plVar3,lVar7,0);
LAB_0523281c:
        (*(code *)*puVar4)(plVar3);
        return;
      }
    }
    uVar5 = *(undefined8 *)(*(long *)(in_stack_000001d8 + 0x38) + 0x98);
    if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar5 = FUN_0768890c(uVar5,0);
    uVar5 = FUN_08bc1eb8(uVar5,0);
    uVar9 = FUN_07692be0(uVar5,0,0);
    if ((uVar9 & 1) != 0) {
      plVar3 = (long *)FUN_08a595bc(uVar5,0);
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092b8d88) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_052328cc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00(plVar3,*(long *)PTR_DAT_092b8d88,0);
LAB_052328cc:
      (*(code *)*puVar4)(plVar3);
      return;
    }
  }
  else {
    if (in_stack_000001b0 != 0) goto LAB_0523292c;
    lVar7 = *(long *)(*(long *)(in_stack_000001d8 + 0x38) + 8);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      FUN_040b1acc(lVar7);
    }
    plVar3 = (long *)thunk_FUN_040b4e00();
    if (plVar3 != (long *)0x0) {
      FUN_08a55f80(&stack0x000001b0,0);
      lVar7 = *(long *)(*(long *)(in_stack_000001d8 + 0x38) + 8);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_040b1acc(lVar7);
      }
      lVar8 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto 
            OVA_StellarX_Core_Framework_Network_Application_Sessions_Session_<>c__DisplayClass68_0<int>__<SetAssetOwnership>b__0
            ;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00(plVar3,lVar7,0);

      OVA_StellarX_Core_Framework_Network_Application_Sessions_Session_<>c__DisplayClass68_0<int>__<SetAssetOwnership>b__0
      :
      uVar9 = (*(code *)*puVar4)(plVar3);
      plVar3 = in_stack_000001a8;
      if ((uVar9 & 1) != 0) {
        if (in_stack_000001a8 == (long *)0x0) goto LAB_05232950;
        lVar7 = *(long *)(*(long *)(in_stack_000001d8 + 0x38) + 0x28);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_040b1acc(lVar7);
        }
        lVar8 = *plVar3;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar7) goto LAB_05232810;
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        goto LAB_05232758;
      }
    }
    if (unaff_x21 == (long *)0x0) {
LAB_05232950:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar7 = **(long **)(in_stack_000001d8 + 0x38);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_040b1acc(lVar7);
    }
    lVar8 = *unaff_x21;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0523256c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0523256c:
    (*(code *)*puVar4)(&stack0x00000060);
    lVar7 = *(long *)(in_stack_000001d8 + 0x38);
    unaff_x24[3] = in_stack_00000078;
    unaff_x24[2] = in_stack_00000070;
    unaff_x24[5] = in_stack_00000088;
    unaff_x24[4] = in_stack_00000080;
    unaff_x24[1] = in_stack_00000068;
    *unaff_x24 = in_stack_00000060;
    lVar7 = *(long *)(lVar7 + 0x50);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_040b1acc();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_06204470(&stack0x00000008,&stack0x00000090,
                 *(undefined8 *)(*(long *)(in_stack_000001d8 + 0x38) + 0x48));
    memcpy(&stack0x000000c0,&stack0x00000008,0x58);
    puVar2 = PTR_DAT_092b7310;
    in_stack_00000008 = 0;
    in_stack_00000018 = &stack0x000001d8;
    in_stack_00000010 = &stack0x000000c0;
    do {
      uVar9 = FUN_07172898(&stack0x000000c0,
                           *(undefined8 *)(*(long *)(in_stack_000001d8 + 0x38) + 0x78));
      plVar3 = in_stack_00000110;
      if ((uVar9 & 1) == 0) {
        uVar11 = 0x10;
        goto LAB_05232904;
      }
      if (in_stack_00000110 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar8 = *in_stack_00000110;
      lVar7 = *(long *)puVar2;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0523265c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00(in_stack_00000110,lVar7,0);
LAB_0523265c:
      uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      uVar6 = FUN_08a55f80(&stack0x000001b0,0);
      uVar9 = thunk_FUN_074e4840(uVar5,uVar6,0);
    } while ((uVar9 & 1) == 0);
    lVar8 = *plVar3;
    lVar7 = *(long *)puVar2;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_05232844;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(plVar3,lVar7,1);
LAB_05232844:
    uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    *(undefined8 *)(unaff_x19 + 0xb0) = uVar5;
    thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0xb0),uVar5);
    plVar3 = (long *)FUN_08a595bc(uVar5,0);
    if (plVar3 != (long *)0x0) {
      lVar7 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092b8d88) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_052328ec;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00(plVar3,*(long *)PTR_DAT_092b8d88,0);
LAB_052328ec:
      (*(code *)*puVar4)(plVar3);
    }
    uVar11 = 0xf;
LAB_05232904:
    FUN_07172cec(&stack0x000000c0,*(undefined8 *)(*(long *)(in_stack_000001d8 + 0x38) + 0x80));
    if ((uVar11 | 0x10) != 0x10) {
      return;
    }
  }
LAB_0523292c:
  *(undefined4 *)(unaff_x19 + 0xa8) = 4;
  return;
LAB_05232810:
  puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
  goto LAB_0523281c;
}


