/*
FUNCTION_NAME: Unity.Services.Leaderboards.Internal.Http.HttpClient$$SendWebRequest
ENTRY_POINT: 05f1e52c
PROGRAM: beastcraft-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05f1ec74) */
/* WARNING: Removing unreachable block (ram,0x05f1e928) */
/* WARNING: Removing unreachable block (ram,0x05f1ed10) */
/* WARNING: Removing unreachable block (ram,0x05f1ecc8) */

void Unity_Services_Leaderboards_Internal_Http_HttpClient__SendWebRequest(code *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined1 uVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long lVar14;
  int unaff_w21;
  undefined8 *unaff_x22;
  long unaff_x26;
  undefined8 *unaff_x27;
  long lVar15;
  undefined4 unaff_s8;
  undefined4 uStack0000000000000000;
  int iStack0000000000000004;
  long in_stack_00000010;
  long in_stack_00000028;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long *in_stack_00000068;
  
  (*param_1)();
  plVar9 = in_stack_00000068;
  if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  uVar7 = *unaff_x27;
  *(undefined8 *)(in_stack_00000038 + 0x38) = unaff_x27[1];
  *(undefined8 *)(in_stack_00000038 + 0x30) = uVar7;
  if (in_stack_00000068 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  lVar10 = *in_stack_00000068;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06ab07f8) {
        puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_05f1e5a4;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar6 = (undefined8 *)FUN_02e759c0(in_stack_00000068,*(long *)PTR_DAT_06ab07f8,0);
LAB_05f1e5a4:
  (*(code *)*puVar6)(plVar9);
  plVar9 = in_stack_00000068;
  if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  *(undefined8 *)(in_stack_00000038 + 0x48) = in_stack_00000048;
  *(undefined8 *)(in_stack_00000038 + 0x40) = in_stack_00000040;
  if (in_stack_00000068 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  lVar10 = *in_stack_00000068;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06ab07f8) {
        puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_05f1e624;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar6 = (undefined8 *)FUN_02e759c0(in_stack_00000068,*(long *)PTR_DAT_06ab07f8,0);
LAB_05f1e624:
  (*(code *)*puVar6)(plVar9,&stack0x00000040,1,puVar6[1]);
  plVar9 = in_stack_00000068;
  if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  *(undefined8 *)(in_stack_00000038 + 0x58) = in_stack_00000058;
  *(undefined8 *)(in_stack_00000038 + 0x50) = in_stack_00000050;
  if (in_stack_00000068 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  lVar10 = *in_stack_00000068;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06ab07f8) {
        puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_05f1e6a4;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar6 = (undefined8 *)FUN_02e759c0(in_stack_00000068,*(long *)PTR_DAT_06ab07f8,0);
LAB_05f1e6a4:
  (*(code *)*puVar6)(plVar9,&stack0x00000050,1,puVar6[1]);
  if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  *(long *)(in_stack_00000038 + 0x60) = in_stack_00000010;
  thunk_FUN_02ee2be8();
  if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  iVar4 = *(int *)(unaff_x19 + 0x210);
  *(undefined4 *)(in_stack_00000038 + 0x6c) = unaff_s8;
  *(int *)(in_stack_00000038 + 0x68) = iVar4;
  *(undefined4 *)(in_stack_00000038 + 0x70) = *(undefined4 *)(unaff_x19 + 0x220);
  if (iVar4 == 4) {
    if (*(int *)(*(long *)Unity_Services_Economy_Internal_Models_CurrencyBalanceResponse_var + 0xe4)
        == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar7 = FUN_05f1d614(unaff_x19 + 0x210);
    *(undefined8 *)(in_stack_00000038 + 0x78) = uVar7;
    thunk_FUN_02ee2be8((undefined8 *)(in_stack_00000038 + 0x78));
  }
  else {
    *(undefined8 *)(in_stack_00000038 + 0x78) = 0;
    thunk_FUN_02ee2be8((undefined8 *)(in_stack_00000038 + 0x78),0);
  }
  if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  if (*(long *)(unaff_x26 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  iVar4 = FUN_0624a278(*(long *)(unaff_x26 + 0x18),0);
  plVar9 = in_stack_00000068;
  if (((iVar4 == 8) || (iVar4 == 0x3b)) || (iVar4 == 0x4a)) {
    if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    uVar11 = 1;
  }
  else {
    if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    uVar11 = 0;
  }
  *(undefined1 *)(in_stack_00000038 + 0x80) = uVar11;
  lVar10 = *(long *)System_Resources_RuntimeResourceSet_var;
  *(undefined1 *)(in_stack_00000038 + 0x81) = *(undefined1 *)(unaff_x19 + 399);
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar10 = *(long *)System_Resources_RuntimeResourceSet_var;
  }
  puVar6 = *(undefined8 **)(lVar10 + 0xb8);
  lVar15 = puVar6[1];
  if (lVar15 == 0) {
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      puVar6 = *(undefined8 **)(*(long *)System_Resources_RuntimeResourceSet_var + 0xb8);
    }
    uVar7 = *puVar6;
    lVar15 = thunk_FUN_02e78ab8(*(undefined8 *)System_Reflection_RuntimeAssembly_var);
    FUN_04b2178c(lVar15,uVar7,*(undefined8 *)System_Reflection_RuntimeMethodInfo_var,0);
    plVar8 = (long *)(*(long *)(*(long *)System_Resources_RuntimeResourceSet_var + 0xb8) + 8);
    *plVar8 = lVar15;
    thunk_FUN_02ee2be8(plVar8,lVar15);
  }
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  lVar10 = *plVar9;
  lVar14 = *(long *)System_Reflection_RuntimeFieldInfo_var;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)(lVar14 + 0x20)) {
        lVar10 = lVar10 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar14 + 0x50)) * 0x10 + 0x138;
        goto LAB_05f1e884;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  lVar10 = FUN_02e759c0(plVar9);
LAB_05f1e884:
  lVar10 = thunk_FUN_02e5afdc(*(undefined8 *)(lVar10 + 8),lVar14);
  (**(code **)(lVar10 + 8))(plVar9,lVar15,lVar10);
  plVar9 = in_stack_00000068;
  puVar1 = PTR_DAT_06a2ef10;
  if (in_stack_00000068 != (long *)0x0) {
    lVar10 = *in_stack_00000068;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06a2ef10) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_05f1e90c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_02e759c0(in_stack_00000068,*(long *)PTR_DAT_06a2ef10,0);
LAB_05f1e90c:
    (*(code *)*puVar6)(plVar9,puVar6[1]);
  }
  if (iStack0000000000000004 == unaff_w21) {
    return;
  }
  if ((in_stack_00000010 != 0) && (lVar10 = FUN_06238628(in_stack_00000010,0), lVar10 != 0)) {
    iVar4 = FUN_062377b0(lVar10,0);
    FUN_03a21438(0x2f,*(undefined8 *)PTR_DAT_06ab5e18);
    plVar9 = (long *)UnityEngine_Rendering_VolumeProfile__Remove<object>();
    uVar3 = in_stack_00000058;
    uVar7 = in_stack_00000050;
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    *(undefined8 *)(in_stack_00000028 + 0x18) = in_stack_00000058;
    *(undefined8 *)(in_stack_00000028 + 0x10) = in_stack_00000050;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    lVar10 = *plVar9;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06ab16a0) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_05f1ea20;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_02e759c0(plVar9,*(long *)PTR_DAT_06ab16a0,0);
LAB_05f1ea20:
    (*(code *)*puVar6)(plVar9,uVar7,uVar3,0,2,puVar6[1]);
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    uVar7 = *unaff_x22;
    *(undefined8 *)(in_stack_00000028 + 0x28) = unaff_x22[1];
    *(undefined8 *)(in_stack_00000028 + 0x20) = uVar7;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    lVar10 = *plVar9;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06ab07f8) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_05f1eaa8;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_02e759c0(plVar9,*(long *)PTR_DAT_06ab07f8,0);
LAB_05f1eaa8:
    (*(code *)*puVar6)(plVar9);
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    *(long *)(in_stack_00000028 + 0x60) = in_stack_00000010;
    thunk_FUN_02ee2be8((long *)(in_stack_00000028 + 0x60),in_stack_00000010);
    puVar2 = System_Resources_RuntimeResourceSet_var;
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    *(int *)(in_stack_00000028 + 0x68) = iVar4 + -1;
    lVar10 = *(long *)puVar2;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      lVar10 = *(long *)System_Resources_RuntimeResourceSet_var;
    }
    puVar6 = *(undefined8 **)(lVar10 + 0xb8);
    lVar15 = puVar6[2];
    if (lVar15 == 0) {
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        puVar6 = *(undefined8 **)(*(long *)System_Resources_RuntimeResourceSet_var + 0xb8);
      }
      uVar7 = *puVar6;
      lVar15 = thunk_FUN_02e78ab8(*(undefined8 *)System_Reflection_RuntimeAssembly_var);
      FUN_04b2178c(lVar15,uVar7,*(undefined8 *)System_Runtime_CompilerServices_RuntimeOps_var,0);
      plVar8 = (long *)(*(long *)(*(long *)System_Resources_RuntimeResourceSet_var + 0xb8) + 0x10);
      *plVar8 = lVar15;
      thunk_FUN_02ee2be8(plVar8,lVar15);
    }
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    lVar10 = *plVar9;
    lVar14 = *(long *)System_Reflection_RuntimeFieldInfo_var;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)(lVar14 + 0x20)) {
          lVar10 = lVar10 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar14 + 0x50)) * 0x10 + 0x138;
          goto LAB_05f1ebdc;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    lVar10 = FUN_02e759c0(plVar9);
LAB_05f1ebdc:
    lVar10 = thunk_FUN_02e5afdc(*(undefined8 *)(lVar10 + 8),lVar14);
    (**(code **)(lVar10 + 8))(plVar9,lVar15,lVar10);
    if (plVar9 != (long *)0x0) {
      lVar10 = *plVar9;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_05f1ec5c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_02e759c0(plVar9,*(long *)puVar1,0);
LAB_05f1ec5c:
      (*(code *)*puVar6)(plVar9,puVar6[1]);
    }
    lVar10 = *(long *)(unaff_x19 + 0x200);
    uVar5 = FUN_062641e8(0);
    if (lVar10 != 0) {
      FUN_05ed32fc(lVar10,uStack0000000000000000,uVar5,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


