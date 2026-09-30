/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ResolveIsReference
ENTRY_POINT: 06256e50
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ResolveIsReference(void)

{
  ushort *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ushort *puVar12;
  long unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  long lVar13;
  ushort *unaff_x23;
  long *unaff_x27;
  long *unaff_x28;
  ushort *puVar14;
  undefined1 auVar15 [16];
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  
  thunk_FUN_03798b70();
  lVar9 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_03775678();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_03775678();
  }
  lVar13 = *unaff_x28;
  lVar10 = *(long *)(lVar13 + 0x20);
  iVar8 = **(int **)(lVar9 + 0xb8);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_03775678(lVar10);
  }
  lVar9 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_03775678();
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar9 = *(long *)(lVar13 + 0x20);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_03775678();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_03775678();
  }
  puVar7 = PTR_DAT_07daefc8;
  uVar11 = (ulong)(**(int **)(lVar9 + 0xb8) - 1U & iVar8 - ((uint)unaff_x23 >> 1 & 7));
  puVar1 = unaff_x23 + unaff_w21;
  puVar14 = unaff_x23;
  while( true ) {
    while (iVar8 = (int)uVar11, puVar12 = puVar14, 3 < iVar8) {
      if (((uint)*puVar14 == (unaff_w20 & 0xffff)) ||
         (puVar12 = puVar14 + 1, (uint)*puVar12 == (unaff_w20 & 0xffff))) goto LAB_0625727c;
      if ((uint)puVar14[2] == (unaff_w20 & 0xffff)) goto LAB_06257278;
      if ((uint)puVar14[3] == (unaff_w20 & 0xffff)) goto LAB_06257274;
      puVar14 = puVar14 + 4;
      uVar11 = (ulong)(iVar8 - 4);
    }
    if (0 < iVar8) {
      iVar8 = iVar8 + 1;
      do {
        if ((uint)*puVar12 == (unaff_w20 & 0xffff)) goto LAB_0625727c;
        iVar8 = iVar8 + -1;
        puVar14 = puVar12 + 1;
        puVar12 = puVar14;
      } while (1 < iVar8);
    }
    uVar11 = FUN_0618a284(0);
    if (((uVar11 & 1) == 0) ||
       (uVar11 = (long)puVar1 - (long)puVar14, puVar1 < puVar14 || uVar11 == 0)) break;
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    lVar10 = *unaff_x28;
    lVar9 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03775678();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03775678();
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    lVar9 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03775678();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03775678();
    }
    if ((long)uVar11 < 0) {
      uVar11 = uVar11 + 1;
    }
    iVar8 = **(int **)(lVar9 + 0xb8);
    FUN_05771244(&stack0x00000038,unaff_w20,*(undefined8 *)PTR_DAT_07daefd0);
    uVar5 = in_stack_00000038;
    uVar6 = in_stack_00000040;
    for (uVar2 = -iVar8 & (uint)(uVar11 >> 1); in_stack_00000038 = uVar5, in_stack_00000040 = uVar6,
        0 < (int)uVar2; uVar2 = uVar2 - **(int **)(lVar9 + 0xb8)) {
      uVar3 = *(undefined8 *)puVar14;
      uVar4 = *(undefined8 *)(puVar14 + 4);
      lVar10 = *(long *)PTR_DAT_07daefe0;
      lVar9 = *(long *)(lVar10 + 0x38);
      if (lVar9 == 0) {
        FUN_037756d4(lVar10);
        lVar9 = *(long *)(lVar10 + 0x38);
      }
      lVar9 = *(long *)(lVar9 + 0x10);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03775678();
      }
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      auVar15 = FUN_042a07bc(uVar5,uVar6,uVar3,uVar4,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 8));
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      lVar10 = *(long *)PTR_DAT_07daefd8;
      lVar9 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03775678();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03775678();
      }
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      lVar9 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03775678();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03775678();
      }
      in_stack_00000028 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x10);
      in_stack_00000020 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 8);
      uVar11 = FUN_05774b44(&stack0x00000020,auVar15._0_8_,auVar15._8_8_,*(undefined8 *)puVar7);
      if ((uVar11 & 1) == 0) {
        iVar8 = FUN_06268eac(auVar15._0_8_,auVar15._8_8_,0);
        uVar11 = (long)puVar14 - (long)unaff_x23;
        if ((long)uVar11 < 0) {
          uVar11 = uVar11 + 1;
        }
        uVar11 = (ulong)(uint)(iVar8 + (int)(uVar11 >> 1));
        goto LAB_06257290;
      }
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      lVar10 = *unaff_x28;
      lVar9 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03775678();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03775678();
      }
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      lVar9 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03775678();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03775678();
      }
      lVar13 = *unaff_x28;
      lVar10 = *(long *)(lVar13 + 0x20);
      iVar8 = **(int **)(lVar9 + 0xb8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03775678(lVar10);
      }
      lVar9 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03775678();
      }
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      lVar9 = *(long *)(lVar13 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03775678();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03775678();
      }
      puVar14 = puVar14 + iVar8;
      uVar5 = in_stack_00000038;
      uVar6 = in_stack_00000040;
    }
    uVar11 = (long)puVar1 - (long)puVar14;
    if (puVar1 < puVar14 || uVar11 == 0) break;
    if ((long)uVar11 < 0) {
      uVar11 = uVar11 + 1;
    }
    uVar11 = uVar11 >> 1;
  }
  uVar11 = 0xffffffff;
LAB_06257290:
  if (*(long *)(in_stack_00000018 + 0x28) == in_stack_00000048) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
LAB_06257274:
  puVar12 = puVar14 + 2;
LAB_06257278:
  puVar12 = puVar12 + 1;
LAB_0625727c:
  uVar11 = (long)puVar12 - (long)unaff_x23;
  if ((long)uVar11 < 0) {
    uVar11 = uVar11 + 1;
  }
  uVar11 = uVar11 >> 1;
  goto LAB_06257290;
}


