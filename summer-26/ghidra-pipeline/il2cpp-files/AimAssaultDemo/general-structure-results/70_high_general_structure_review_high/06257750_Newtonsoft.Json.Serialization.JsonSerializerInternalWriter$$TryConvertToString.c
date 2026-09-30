/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$TryConvertToString
ENTRY_POINT: 06257750
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__TryConvertToString(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  uint unaff_w19;
  uint unaff_w20;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long *unaff_x27;
  long *unaff_x28;
  ushort *puVar10;
  ushort *unaff_x29;
  undefined1 auVar11 [16];
  long in_stack_00000000;
  ushort *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  do {
    unaff_x29 = unaff_x29 + -unaff_x21;
    lVar6 = *(long *)(param_1 + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03775678();
    }
    unaff_w19 = unaff_w19 - **(int **)(lVar6 + 0xb8);
    while ((int)unaff_w19 < 1) {
      uVar8 = (long)unaff_x29 - (long)in_stack_00000008;
      if (unaff_x29 < in_stack_00000008 || uVar8 == 0) {
LAB_062577dc:
        uVar8 = 0xffffffff;
        goto LAB_06257834;
      }
      if ((long)uVar8 < 0) {
        uVar8 = uVar8 + 1;
      }
      uVar8 = uVar8 >> 1;
      puVar10 = unaff_x29;
      while (iVar5 = (int)uVar8, 3 < iVar5) {
        unaff_x29 = puVar10 + -4;
        if ((uint)puVar10[-1] == (unaff_w20 & 0xffff)) {
          uVar8 = (long)unaff_x29 - (long)in_stack_00000008;
          if ((long)uVar8 < 0) {
            uVar8 = uVar8 + 1;
          }
          uVar8 = (ulong)((int)(uVar8 >> 1) + 3);
          goto LAB_06257834;
        }
        if ((uint)puVar10[-2] == (unaff_w20 & 0xffff)) {
          uVar8 = (long)unaff_x29 - (long)in_stack_00000008;
          if ((long)uVar8 < 0) {
            uVar8 = uVar8 + 1;
          }
          uVar8 = (ulong)((int)(uVar8 >> 1) + 2);
          goto LAB_06257834;
        }
        if ((uint)puVar10[-3] == (unaff_w20 & 0xffff)) {
          uVar8 = (long)unaff_x29 - (long)in_stack_00000008;
          if ((long)uVar8 < 0) {
            uVar8 = uVar8 + 1;
          }
          uVar8 = (ulong)((int)(uVar8 >> 1) + 1);
          goto LAB_06257834;
        }
        uVar8 = (ulong)(iVar5 - 4);
        puVar10 = unaff_x29;
        if ((uint)*unaff_x29 == (unaff_w20 & 0xffff)) goto LAB_06257798;
      }
      iVar5 = iVar5 + 1;
      unaff_x29 = puVar10;
      while (iVar5 = iVar5 + -1, 0 < iVar5) {
        unaff_x29 = unaff_x29 + -1;
        if ((uint)*unaff_x29 == (unaff_w20 & 0xffff)) goto LAB_06257798;
      }
      uVar8 = FUN_0618a284(0);
      if (((uVar8 & 1) == 0) ||
         (uVar8 = (long)unaff_x29 - (long)in_stack_00000008,
         unaff_x29 < in_stack_00000008 || uVar8 == 0)) goto LAB_062577dc;
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      lVar7 = *unaff_x28;
      lVar6 = *(long *)(lVar7 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03775678();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03775678();
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      lVar6 = *(long *)(lVar7 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03775678();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03775678();
      }
      if ((long)uVar8 < 0) {
        uVar8 = uVar8 + 1;
      }
      iVar5 = **(int **)(lVar6 + 0xb8);
      FUN_05771244(&stack0x00000028,unaff_w20,*(undefined8 *)PTR_DAT_07daefd0);
      unaff_w19 = -iVar5 & (uint)(uVar8 >> 1);
    }
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    lVar7 = *unaff_x28;
    lVar6 = *(long *)(lVar7 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03775678();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03775678();
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    lVar6 = *(long *)(lVar7 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03775678();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03775678();
    }
    uVar4 = in_stack_00000030;
    uVar3 = in_stack_00000028;
    lVar9 = *(long *)PTR_DAT_07daefe0;
    lVar7 = *(long *)(lVar9 + 0x38);
    puVar10 = unaff_x29 + -(long)**(int **)(lVar6 + 0xb8);
    uVar1 = *(undefined8 *)puVar10;
    uVar2 = *(undefined8 *)(puVar10 + 4);
    if (lVar7 == 0) {
      FUN_037756d4(lVar9);
      lVar7 = *(long *)(lVar9 + 0x38);
    }
    lVar6 = *(long *)(lVar7 + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03775678();
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    auVar11 = FUN_042a07bc(uVar3,uVar4,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 8));
    lVar7 = *(long *)PTR_DAT_07daefd8;
    lVar6 = *(long *)(lVar7 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03775678();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03775678();
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    lVar6 = *(long *)(lVar7 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03775678();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03775678();
    }
    in_stack_00000018 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
    in_stack_00000010 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8);
    uVar8 = FUN_05774b44(&stack0x00000010,auVar11._0_8_,auVar11._8_8_,
                         *(undefined8 *)PTR_DAT_07daefc8);
    if ((uVar8 & 1) == 0) {
      iVar5 = FUN_06269088(auVar11._0_8_,auVar11._8_8_,0);
      uVar8 = (long)puVar10 - (long)in_stack_00000008;
      if ((long)uVar8 < 0) {
        uVar8 = uVar8 + 1;
      }
      uVar8 = (ulong)(uint)(iVar5 + (int)(uVar8 >> 1));
LAB_06257834:
      if (*(long *)(in_stack_00000000 + 0x28) == in_stack_00000038) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar8);
    }
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    lVar7 = *unaff_x28;
    lVar6 = *(long *)(lVar7 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03775678();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03775678();
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    lVar6 = *(long *)(lVar7 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03775678();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03775678();
    }
    lVar9 = *unaff_x28;
    lVar7 = *(long *)(lVar9 + 0x20);
    unaff_x21 = (long)**(int **)(lVar6 + 0xb8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03775678(lVar7);
    }
    lVar6 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03775678();
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    lVar6 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03775678();
    }
    param_1 = *(long *)(lVar6 + 0xc0);
  } while( true );
LAB_06257798:
  uVar8 = (long)unaff_x29 - (long)in_stack_00000008;
  if ((long)uVar8 < 0) {
    uVar8 = uVar8 + 1;
  }
  uVar8 = uVar8 >> 1;
  goto LAB_06257834;
}


