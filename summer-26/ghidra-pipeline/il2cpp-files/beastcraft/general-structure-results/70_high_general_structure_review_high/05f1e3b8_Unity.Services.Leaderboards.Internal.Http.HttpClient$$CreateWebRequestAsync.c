/*
FUNCTION_NAME: Unity.Services.Leaderboards.Internal.Http.HttpClient$$CreateWebRequestAsync
ENTRY_POINT: 05f1e3b8
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

void Unity_Services_Leaderboards_Internal_Http_HttpClient__CreateWebRequestAsync(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined1 uVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long lVar14;
  undefined4 unaff_w24;
  int unaff_w25;
  long unaff_x26;
  undefined8 *unaff_x27;
  long lVar15;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined4 unaff_s8;
  undefined8 in_stack_00000000;
  undefined8 *in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000028;
  long in_stack_00000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long *in_stack_00000068;
  
  uStack0000000000000040 = *unaff_x29;
  uStack0000000000000048 = unaff_x29[1];
  FUN_03a21438(0x2e,*(undefined8 *)PTR_DAT_06ab5e18);
  plVar6 = (long *)UnityEngine_Rendering_VolumeProfile__Remove<object>();
  in_stack_00000068 = plVar6;
  if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  uVar8 = *in_stack_00000008;
  *(undefined8 *)(in_stack_00000038 + 0x18) = in_stack_00000008[1];
  *(undefined8 *)(in_stack_00000038 + 0x10) = uVar8;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  lVar10 = *plVar6;
  uVar8 = *in_stack_00000008;
  uVar1 = in_stack_00000008[1];
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06ab16a0) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_05f1e49c;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar7 = (undefined8 *)FUN_02e759c0(plVar6,*(long *)PTR_DAT_06ab16a0,0);
LAB_05f1e49c:
  (*(code *)*puVar7)(plVar6,uVar8,uVar1,0,2,puVar7[1]);
  plVar6 = in_stack_00000068;
  if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  uVar8 = *unaff_x28;
  *(undefined8 *)(in_stack_00000038 + 0x28) = unaff_x28[1];
  *(undefined8 *)(in_stack_00000038 + 0x20) = uVar8;
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
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_05f1e524;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar7 = (undefined8 *)FUN_02e759c0(in_stack_00000068,*(long *)PTR_DAT_06ab07f8,0);
LAB_05f1e524:
  (*(code *)*puVar7)(plVar6);
  plVar6 = in_stack_00000068;
  if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  uVar8 = *unaff_x27;
  *(undefined8 *)(in_stack_00000038 + 0x38) = unaff_x27[1];
  *(undefined8 *)(in_stack_00000038 + 0x30) = uVar8;
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
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_05f1e5a4;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar7 = (undefined8 *)FUN_02e759c0(in_stack_00000068,*(long *)PTR_DAT_06ab07f8,0);
LAB_05f1e5a4:
  (*(code *)*puVar7)(plVar6);
  plVar6 = in_stack_00000068;
  if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  *(undefined8 *)(in_stack_00000038 + 0x48) = uStack0000000000000048;
  *(undefined8 *)(in_stack_00000038 + 0x40) = uStack0000000000000040;
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
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_05f1e624;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar7 = (undefined8 *)FUN_02e759c0(in_stack_00000068,*(long *)PTR_DAT_06ab07f8,0);
LAB_05f1e624:
  (*(code *)*puVar7)(plVar6,&stack0x00000040,1,puVar7[1]);
  plVar6 = in_stack_00000068;
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
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_05f1e6a4;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar7 = (undefined8 *)FUN_02e759c0(in_stack_00000068,*(long *)PTR_DAT_06ab07f8,0);
LAB_05f1e6a4:
  (*(code *)*puVar7)(plVar6,&stack0x00000050,1,puVar7[1]);
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
    uVar8 = FUN_05f1d614(unaff_x19 + 0x210);
    *(undefined8 *)(in_stack_00000038 + 0x78) = uVar8;
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
  plVar6 = in_stack_00000068;
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
  puVar7 = *(undefined8 **)(lVar10 + 0xb8);
  lVar15 = puVar7[1];
  if (lVar15 == 0) {
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      puVar7 = *(undefined8 **)(*(long *)System_Resources_RuntimeResourceSet_var + 0xb8);
    }
    uVar8 = *puVar7;
    lVar15 = thunk_FUN_02e78ab8(*(undefined8 *)System_Reflection_RuntimeAssembly_var);
    FUN_04b2178c(lVar15,uVar8,*(undefined8 *)System_Reflection_RuntimeMethodInfo_var,0);
    plVar9 = (long *)(*(long *)(*(long *)System_Resources_RuntimeResourceSet_var + 0xb8) + 8);
    *plVar9 = lVar15;
    thunk_FUN_02ee2be8(plVar9,lVar15);
  }
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  lVar10 = *plVar6;
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
  lVar10 = FUN_02e759c0(plVar6);
LAB_05f1e884:
  lVar10 = thunk_FUN_02e5afdc(*(undefined8 *)(lVar10 + 8),lVar14);
  (**(code **)(lVar10 + 8))(plVar6,lVar15,lVar10);
  plVar6 = in_stack_00000068;
  puVar2 = PTR_DAT_06a2ef10;
  if (in_stack_00000068 != (long *)0x0) {
    lVar10 = *in_stack_00000068;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06a2ef10) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_05f1e90c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_02e759c0(in_stack_00000068,*(long *)PTR_DAT_06a2ef10,0);
LAB_05f1e90c:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  if (in_stack_00000000._4_4_ == unaff_w25) {
    return;
  }
  if ((in_stack_00000010 != 0) && (lVar10 = FUN_06238628(in_stack_00000010,0), lVar10 != 0)) {
    iVar4 = FUN_062377b0(lVar10,0);
    FUN_03a21438(0x2f,*(undefined8 *)PTR_DAT_06ab5e18);
    plVar6 = (long *)UnityEngine_Rendering_VolumeProfile__Remove<object>();
    uVar1 = in_stack_00000058;
    uVar8 = in_stack_00000050;
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    *(undefined8 *)(in_stack_00000028 + 0x18) = in_stack_00000058;
    *(undefined8 *)(in_stack_00000028 + 0x10) = in_stack_00000050;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    lVar10 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06ab16a0) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_05f1ea20;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_02e759c0(plVar6,*(long *)PTR_DAT_06ab16a0,0);
LAB_05f1ea20:
    (*(code *)*puVar7)(plVar6,uVar8,uVar1,0,2,puVar7[1]);
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    uVar8 = *in_stack_00000008;
    *(undefined8 *)(in_stack_00000028 + 0x28) = in_stack_00000008[1];
    *(undefined8 *)(in_stack_00000028 + 0x20) = uVar8;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    lVar10 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06ab07f8) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_05f1eaa8;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_02e759c0(plVar6,*(long *)PTR_DAT_06ab07f8,0);
LAB_05f1eaa8:
    (*(code *)*puVar7)(plVar6,in_stack_00000008,1,puVar7[1]);
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    *(long *)(in_stack_00000028 + 0x60) = in_stack_00000010;
    thunk_FUN_02ee2be8((long *)(in_stack_00000028 + 0x60),in_stack_00000010);
    puVar3 = System_Resources_RuntimeResourceSet_var;
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    *(int *)(in_stack_00000028 + 0x68) = iVar4 + -1;
    lVar10 = *(long *)puVar3;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      lVar10 = *(long *)System_Resources_RuntimeResourceSet_var;
    }
    puVar7 = *(undefined8 **)(lVar10 + 0xb8);
    lVar15 = puVar7[2];
    if (lVar15 == 0) {
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        puVar7 = *(undefined8 **)(*(long *)System_Resources_RuntimeResourceSet_var + 0xb8);
      }
      uVar8 = *puVar7;
      lVar15 = thunk_FUN_02e78ab8(*(undefined8 *)System_Reflection_RuntimeAssembly_var);
      FUN_04b2178c(lVar15,uVar8,*(undefined8 *)System_Runtime_CompilerServices_RuntimeOps_var,0);
      plVar9 = (long *)(*(long *)(*(long *)System_Resources_RuntimeResourceSet_var + 0xb8) + 0x10);
      *plVar9 = lVar15;
      thunk_FUN_02ee2be8(plVar9,lVar15);
    }
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    lVar10 = *plVar6;
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
    lVar10 = FUN_02e759c0(plVar6);
LAB_05f1ebdc:
    lVar10 = thunk_FUN_02e5afdc(*(undefined8 *)(lVar10 + 8),lVar14);
    (**(code **)(lVar10 + 8))(plVar6,lVar15,lVar10);
    if (plVar6 != (long *)0x0) {
      lVar10 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_05f1ec5c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_02e759c0(plVar6,*(long *)puVar2,0);
LAB_05f1ec5c:
      (*(code *)*puVar7)(plVar6,puVar7[1]);
    }
    lVar10 = *(long *)(unaff_x19 + 0x200);
    uVar5 = FUN_062641e8(0);
    if (lVar10 != 0) {
      FUN_05ed32fc(lVar10,unaff_w24,uVar5,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


