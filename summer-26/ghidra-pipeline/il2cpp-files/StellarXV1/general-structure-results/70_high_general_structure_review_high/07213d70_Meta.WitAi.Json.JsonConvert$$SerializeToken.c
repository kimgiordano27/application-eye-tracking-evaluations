/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$SerializeToken
ENTRY_POINT: 07213d70
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_Json_JsonConvert__SerializeToken(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar6;
  ulong in_x9;
  ulong uVar7;
  int *in_x10;
  int *piVar8;
  int iVar9;
  long unaff_x19;
  undefined4 *puVar10;
  undefined4 uVar11;
  long *unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 uVar12;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000030;
  int *in_stack_00000038;
  long *in_stack_00000040;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 *in_stack_00000088;
  
code_r0x07213d70:
  if (!(bool)in_ZR) goto LAB_07213d5c;
LAB_07213d74:
  puVar3 = (undefined8 *)FUN_040b1e00(unaff_x22,unaff_x23,0);
LAB_07213d94:
  lVar4 = (*(code *)*puVar3)(unaff_x22,puVar3[1]);
  if (*(long *)(unaff_x19 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar6 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0x50);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(uint *)(lVar6 + 0x18) <= (uint)unaff_x21) {
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
  uVar12 = *(undefined8 *)(lVar6 + unaff_x21 * 8 + 0x20);
  if (*(int *)(*unaff_x29 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar12 = FUN_07200158(uVar12,unaff_x21 & 0xffffffff,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830(uVar12,uVar12);
  }
  thunk_FUN_089d053c(lVar4,uVar12,0);
  do {
    lVar6 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_07213e9c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_040b1e00(unaff_x20,*unaff_x25,0);
LAB_07213e9c:
    (*(code *)*puVar3)(unaff_x20,puVar3[1]);
    lVar6 = *(long *)(unaff_x19 + 0xa0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(uint *)(lVar6 + 0x18) <= (uint)unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    plVar5 = (long *)(lVar6 + unaff_x21 * 8 + 0x20);
    *plVar5 = lVar4;
    thunk_FUN_040ec700(plVar5,lVar4);
    plVar5 = *(long **)(unaff_x19 + 0x20);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar4 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_07213f24;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_040b1e00(plVar5,*unaff_x24,2);
LAB_07213f24:
    lVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000078 = FUN_076f1ee4(lVar4,0);
    uVar7 = FUN_07591eb4(&stack0x00000078,0);
    if ((uVar7 & 1) == 0) {
      in_stack_00000080._4_4_ = 1;
      *in_stack_00000088 = 1;
      *(undefined8 *)(in_stack_00000088 + 0x18) = in_stack_00000078;
      thunk_FUN_040ec700(in_stack_00000088 + 0x18,0);
      puVar10 = in_stack_00000088;
      if (*(int *)(*(long *)PTR_DAT_09289990 + 0xe4) == 0) {
        thunk_FUN_040d65a8(*(long *)PTR_DAT_09289990,extraout_x1,in_stack_00000088);
      }
      FUN_04996150(puVar10 + 2,&stack0x00000078,in_stack_00000088,*(undefined8 *)PTR_DAT_092bdfb0);
LAB_07214138:
      iVar9 = 8;
      goto LAB_07214294;
    }
    FUN_07591f7c(&stack0x00000078,0);
    *(undefined8 *)(in_stack_00000088 + 0x14) = 0;
    *(undefined8 *)(in_stack_00000088 + 0x16) = 0;
    uVar7 = FUN_05365070(in_stack_00000088 + 10,*unaff_x27);
    if ((uVar7 & 1) == 0) {
      iVar9 = 0x16;
      goto LAB_07214294;
    }
    *(undefined8 *)(in_stack_00000088 + 0x16) = *(undefined8 *)(in_stack_00000088 + 0x10);
    *(undefined8 *)(in_stack_00000088 + 0x14) = *(undefined8 *)(in_stack_00000088 + 0xe);
    thunk_FUN_040ec700(in_stack_00000088 + 0x16,0);
    plVar5 = *(long **)(in_stack_00000088 + 0x16);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar4 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000078 = FUN_076f1ee4(lVar4,0);
    uVar7 = FUN_07591eb4(&stack0x00000078,0);
    if ((uVar7 & 1) == 0) {
      in_stack_00000080._4_4_ = 0;
      *in_stack_00000088 = 0;
      *(undefined8 *)(in_stack_00000088 + 0x18) = in_stack_00000078;
      thunk_FUN_040ec700(in_stack_00000088 + 0x18,0);
      puVar10 = in_stack_00000088;
      if (*(int *)(*(long *)PTR_DAT_09289990 + 0xe4) == 0) {
        thunk_FUN_040d65a8(*(long *)PTR_DAT_09289990,extraout_x1_00,in_stack_00000088);
      }
      FUN_04996150(puVar10 + 2,&stack0x00000078,in_stack_00000088,*(undefined8 *)PTR_DAT_092bdfb0);
      goto LAB_07214138;
    }
    FUN_07591f7c(&stack0x00000078,0);
    if (*(long *)(in_stack_00000088 + 0x16) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    unaff_x20 = *(long **)(*(long *)(in_stack_00000088 + 0x16) + 0x10);
    if (unaff_x20 == (long *)0x0) {
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      plVar5 = *(long **)(unaff_x19 + 0x130);
      if (plVar5 == (long *)0x0) goto LAB_07214290;
      lVar4 = FUN_04077674(*(undefined8 *)PTR_DAT_092858e8,2);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR_DAT_092872a0;
      thunk_FUN_040ec700();
      in_stack_00000070._4_4_ = in_stack_00000088[0x14];
      uVar12 = FUN_07676bc4((long)&stack0x00000070 + 4,0);
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      *(undefined8 *)(lVar4 + 0x28) = uVar12;
      thunk_FUN_040ec700();
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_0721406c;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar4 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_07213c4c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_040b1e00(unaff_x20,*unaff_x26,0);
LAB_07213c4c:
    uVar7 = (*(code *)*puVar3)(unaff_x20,puVar3[1]);
    if ((uVar7 & 1) == 0) {
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      plVar5 = *(long **)(unaff_x19 + 0x130);
      if (plVar5 == (long *)0x0) goto LAB_07214238;
      lVar4 = FUN_04077674(*(undefined8 *)PTR_DAT_092858e8,2);
      lVar6 = *unaff_x20;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_072140d0;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      goto LAB_072140b8;
    }
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar1 = in_stack_00000088[0x14];
    unaff_x21 = (ulong)(int)uVar1;
    uVar7 = FUN_071fe1fc();
    if ((uVar7 & 1) == 0) goto LAB_07213d1c;
    if ((*(long *)(unaff_x19 + 0xc0) != 0) &&
       (*(uint *)(*(long *)(unaff_x19 + 0xc0) + 0x18) <= uVar1)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    if (*(long *)(unaff_x19 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0x50);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    lVar4 = FUN_071ffff4();
    lVar6 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_07213e10;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_040b1e00(unaff_x20,*unaff_x26,2);
LAB_07213e10:
    uVar12 = (*(code *)*puVar3)(unaff_x20,puVar3[1]);
    lVar6 = *(long *)(unaff_x19 + 0xb8);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830(uVar12,uVar12);
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    UnityEngine_UIElements_VisualElement__UnregisterRunningAnimations
              (lVar4,uVar12,*(char *)(lVar6 + unaff_x21 + 0x20) == '\0',0);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_092bc2c8) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0721414c;
    }
  }
LAB_0721406c:
  puVar3 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)PTR_DAT_092bc2c8,0);
LAB_0721414c:
  (*(code *)*puVar3)(plVar5,0x2b,lVar4,puVar3[1]);
  goto LAB_07214290;
LAB_07213d1c:
  lVar6 = *unaff_x28;
  lVar4 = thunk_FUN_040b4e00(unaff_x20,lVar6);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077bb0(unaff_x20,lVar6);
  }
  unaff_x23 = *unaff_x28;
  unaff_x22 = (long *)thunk_FUN_040b4e00(unaff_x20,unaff_x23);
  if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077bb0(unaff_x20,unaff_x23);
  }
  param_1 = *unaff_x22;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (in_x9 == 0) goto LAB_07213d74;
  in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_07213d5c:
  if (*(long *)(in_x10 + -2) != unaff_x23) {
    in_x9 = in_x9 - 1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
    goto code_r0x07213d70;
  }
  puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  goto LAB_07213d94;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_072140b8:
    if (*(long *)(piVar8 + -2) == *unaff_x26) {
      puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
      goto LAB_07214174;
    }
  }
LAB_072140d0:
  puVar3 = (undefined8 *)FUN_040b1e00(unaff_x20,*unaff_x26,1);
LAB_07214174:
  uVar12 = (*(code *)*puVar3)(unaff_x20,puVar3[1]);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
  *(undefined8 *)(lVar4 + 0x20) = uVar12;
  thunk_FUN_040ec700();
  in_stack_00000070._4_4_ = in_stack_00000088[0x14];
  uVar12 = FUN_07676bc4((long)&stack0x00000070 + 4,0);
  if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
  *(undefined8 *)(lVar4 + 0x28) = uVar12;
  thunk_FUN_040ec700();
  lVar6 = *plVar5;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_092bc2c8) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_07214224;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)PTR_DAT_092bc2c8,0);
LAB_07214224:
  (*(code *)*puVar3)(plVar5,0x2b,lVar4,puVar3[1]);
LAB_07214238:
  lVar4 = *unaff_x20;
  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x25) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_07214284;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_040b1e00(unaff_x20,*unaff_x25,0);
LAB_07214284:
  (*(code *)*puVar3)(unaff_x20,puVar3[1]);
LAB_07214290:
  iVar9 = 0xc;
LAB_07214294:
  if (*in_stack_00000038 < 0) {
    FUN_05365194(*in_stack_00000040 + 0x28,*(undefined8 *)PTR_DAT_092bdfc0);
  }
  if (in_stack_00000030 == 0) {
    if ((iVar9 == 0) || (iVar9 == 0x16)) {
      uVar11 = 1;
      *(undefined8 *)(in_stack_00000088 + 0x12) = 0;
      *(undefined8 *)(in_stack_00000088 + 0xc) = 0;
      *(undefined8 *)(in_stack_00000088 + 10) = 0;
      *(undefined8 *)(in_stack_00000088 + 0x10) = 0;
      *(undefined8 *)(in_stack_00000088 + 0xe) = 0;
    }
    else {
      if (iVar9 != 0xc) {
        return;
      }
      uVar11 = 0;
    }
    puVar10 = in_stack_00000088 + 2;
    *in_stack_00000088 = 0xfffffffe;
    puVar2 = PTR_DAT_092899f8;
    if (*(int *)(*(long *)PTR_DAT_09289990 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_065d0838(puVar10,uVar11,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077828();
}


