/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HasFlag
ENTRY_POINT: 06256f00
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HasFlag(ulong param_1)

{
  ushort *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ushort *puVar10;
  uint unaff_w20;
  int unaff_w21;
  long lVar11;
  long lVar12;
  ushort *unaff_x23;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  ushort *puVar13;
  undefined1 auVar14 [16];
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  
  puVar1 = unaff_x23 + unaff_w21;
  puVar13 = unaff_x23;
  while( true ) {
    while (iVar7 = (int)param_1, puVar10 = puVar13, 3 < iVar7) {
      if (((uint)*puVar13 == (unaff_w20 & 0xffff)) ||
         (puVar10 = puVar13 + 1, (uint)*puVar10 == (unaff_w20 & 0xffff))) goto LAB_0625727c;
      if ((uint)puVar13[2] == (unaff_w20 & 0xffff)) goto LAB_06257278;
      if ((uint)puVar13[3] == (unaff_w20 & 0xffff)) goto LAB_06257274;
      puVar13 = puVar13 + 4;
      param_1 = (ulong)(iVar7 - 4);
    }
    if (0 < iVar7) {
      iVar7 = iVar7 + 1;
      do {
        if ((uint)*puVar10 == (unaff_w20 & 0xffff)) goto LAB_0625727c;
        iVar7 = iVar7 + -1;
        puVar13 = puVar10 + 1;
        puVar10 = puVar13;
      } while (1 < iVar7);
    }
    uVar9 = FUN_0618a284(0);
    if (((uVar9 & 1) == 0) || (uVar9 = (long)puVar1 - (long)puVar13, puVar1 < puVar13 || uVar9 == 0)
       ) break;
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    lVar11 = *unaff_x28;
    lVar8 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03775678();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03775678();
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    lVar8 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03775678();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03775678();
    }
    if ((long)uVar9 < 0) {
      uVar9 = uVar9 + 1;
    }
    iVar7 = **(int **)(lVar8 + 0xb8);
    FUN_05771244(&stack0x00000038,unaff_w20,*(undefined8 *)PTR_DAT_07daefd0);
    uVar5 = in_stack_00000038;
    uVar6 = in_stack_00000040;
    for (uVar2 = -iVar7 & (uint)(uVar9 >> 1); in_stack_00000038 = uVar5, in_stack_00000040 = uVar6,
        0 < (int)uVar2; uVar2 = uVar2 - **(int **)(lVar8 + 0xb8)) {
      uVar3 = *(undefined8 *)puVar13;
      uVar4 = *(undefined8 *)(puVar13 + 4);
      lVar11 = *(long *)PTR_DAT_07daefe0;
      lVar8 = *(long *)(lVar11 + 0x38);
      if (lVar8 == 0) {
        FUN_037756d4(lVar11);
        lVar8 = *(long *)(lVar11 + 0x38);
      }
      lVar8 = *(long *)(lVar8 + 0x10);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03775678();
      }
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      auVar14 = FUN_042a07bc(uVar5,uVar6,uVar3,uVar4,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 8));
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      lVar11 = *(long *)PTR_DAT_07daefd8;
      lVar8 = *(long *)(lVar11 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03775678();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03775678();
      }
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      lVar8 = *(long *)(lVar11 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03775678();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03775678();
      }
      in_stack_00000028 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10);
      in_stack_00000020 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
      uVar9 = FUN_05774b44(&stack0x00000020,auVar14._0_8_,auVar14._8_8_,*unaff_x26);
      if ((uVar9 & 1) == 0) {
        iVar7 = FUN_06268eac(auVar14._0_8_,auVar14._8_8_,0);
        uVar9 = (long)puVar13 - (long)unaff_x23;
        if ((long)uVar9 < 0) {
          uVar9 = uVar9 + 1;
        }
        uVar9 = (ulong)(uint)(iVar7 + (int)(uVar9 >> 1));
        goto LAB_06257290;
      }
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      lVar11 = *unaff_x28;
      lVar8 = *(long *)(lVar11 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03775678();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03775678();
      }
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      lVar8 = *(long *)(lVar11 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03775678();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03775678();
      }
      lVar12 = *unaff_x28;
      lVar11 = *(long *)(lVar12 + 0x20);
      iVar7 = **(int **)(lVar8 + 0xb8);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03775678(lVar11);
      }
      lVar8 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03775678();
      }
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      lVar8 = *(long *)(lVar12 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03775678();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03775678();
      }
      puVar13 = puVar13 + iVar7;
      uVar5 = in_stack_00000038;
      uVar6 = in_stack_00000040;
    }
    param_1 = (long)puVar1 - (long)puVar13;
    if (puVar1 < puVar13 || param_1 == 0) break;
    if ((long)param_1 < 0) {
      param_1 = param_1 + 1;
    }
    param_1 = param_1 >> 1;
  }
  uVar9 = 0xffffffff;
LAB_06257290:
  if (*(long *)(in_stack_00000018 + 0x28) == in_stack_00000048) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
LAB_06257274:
  puVar10 = puVar13 + 2;
LAB_06257278:
  puVar10 = puVar10 + 1;
LAB_0625727c:
  uVar9 = (long)puVar10 - (long)unaff_x23;
  if ((long)uVar9 < 0) {
    uVar9 = uVar9 + 1;
  }
  uVar9 = uVar9 >> 1;
  goto LAB_06257290;
}


