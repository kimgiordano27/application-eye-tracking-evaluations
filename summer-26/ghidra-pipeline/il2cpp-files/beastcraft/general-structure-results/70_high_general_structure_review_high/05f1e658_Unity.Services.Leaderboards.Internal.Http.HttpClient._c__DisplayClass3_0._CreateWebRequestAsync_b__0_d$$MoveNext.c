/*
FUNCTION_NAME: Unity.Services.Leaderboards.Internal.Http.HttpClient.<>c__DisplayClass3_0.<<CreateWebRequestAsync>b__0>d$$MoveNext
ENTRY_POINT: 05f1e658
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

void Unity_Services_Leaderboards_Internal_Http_HttpClient_<>c__DisplayClass3_0_<<CreateWebRequestAsync>b__0>d__MoveNext
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined1 uVar10;
  ulong uVar11;
  long in_x10;
  int *piVar12;
  long unaff_x19;
  long lVar13;
  int unaff_w21;
  undefined8 *unaff_x22;
  long unaff_x26;
  long lVar14;
  undefined4 unaff_s8;
  undefined4 uStack0000000000000000;
  int iStack0000000000000004;
  long in_stack_00000010;
  long in_stack_00000028;
  long in_stack_00000038;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long *in_stack_00000068;
  
  uVar11 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == **(long **)(in_x10 + 0x7f8)) {
        puVar5 = (undefined8 *)(param_1 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_05f1e6a4;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar5 = (undefined8 *)FUN_02e759c0();
LAB_05f1e6a4:
  (*(code *)*puVar5)();
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
  iVar3 = *(int *)(unaff_x19 + 0x210);
  *(undefined4 *)(in_stack_00000038 + 0x6c) = unaff_s8;
  *(int *)(in_stack_00000038 + 0x68) = iVar3;
  *(undefined4 *)(in_stack_00000038 + 0x70) = *(undefined4 *)(unaff_x19 + 0x220);
  if (iVar3 == 4) {
    if (*(int *)(*(long *)Unity_Services_Economy_Internal_Models_CurrencyBalanceResponse_var + 0xe4)
        == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar6 = FUN_05f1d614(unaff_x19 + 0x210);
    *(undefined8 *)(in_stack_00000038 + 0x78) = uVar6;
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
  iVar3 = FUN_0624a278(*(long *)(unaff_x26 + 0x18),0);
  if (((iVar3 == 8) || (iVar3 == 0x3b)) || (iVar3 == 0x4a)) {
    if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    uVar10 = 1;
  }
  else {
    if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    uVar10 = 0;
  }
  *(undefined1 *)(in_stack_00000038 + 0x80) = uVar10;
  lVar7 = *(long *)System_Resources_RuntimeResourceSet_var;
  *(undefined1 *)(in_stack_00000038 + 0x81) = *(undefined1 *)(unaff_x19 + 399);
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar7 = *(long *)System_Resources_RuntimeResourceSet_var;
  }
  puVar5 = *(undefined8 **)(lVar7 + 0xb8);
  lVar14 = puVar5[1];
  if (lVar14 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      puVar5 = *(undefined8 **)(*(long *)System_Resources_RuntimeResourceSet_var + 0xb8);
    }
    uVar6 = *puVar5;
    lVar14 = thunk_FUN_02e78ab8(*(undefined8 *)System_Reflection_RuntimeAssembly_var);
    FUN_04b2178c(lVar14,uVar6,*(undefined8 *)System_Reflection_RuntimeMethodInfo_var,0);
    plVar8 = (long *)(*(long *)(*(long *)System_Resources_RuntimeResourceSet_var + 0xb8) + 8);
    *plVar8 = lVar14;
    thunk_FUN_02ee2be8(plVar8,lVar14);
  }
  if (in_stack_00000068 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  lVar7 = *in_stack_00000068;
  lVar13 = *(long *)System_Reflection_RuntimeFieldInfo_var;
  uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)(lVar13 + 0x20)) {
        lVar7 = lVar7 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar13 + 0x50)) * 0x10 + 0x138;
        goto LAB_05f1e884;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  lVar7 = FUN_02e759c0(in_stack_00000068);
LAB_05f1e884:
  lVar7 = thunk_FUN_02e5afdc(*(undefined8 *)(lVar7 + 8),lVar13);
  (**(code **)(lVar7 + 8))(in_stack_00000068,lVar14,lVar7);
  puVar1 = PTR_DAT_06a2ef10;
  if (in_stack_00000068 != (long *)0x0) {
    lVar7 = *in_stack_00000068;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06a2ef10) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_05f1e90c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_02e759c0(in_stack_00000068,*(long *)PTR_DAT_06a2ef10,0);
LAB_05f1e90c:
    (*(code *)*puVar5)(in_stack_00000068,puVar5[1]);
  }
  if (iStack0000000000000004 == unaff_w21) {
    return;
  }
  if ((in_stack_00000010 != 0) && (lVar7 = FUN_06238628(in_stack_00000010,0), lVar7 != 0)) {
    iVar3 = FUN_062377b0(lVar7,0);
    FUN_03a21438(0x2f,*(undefined8 *)PTR_DAT_06ab5e18);
    plVar8 = (long *)UnityEngine_Rendering_VolumeProfile__Remove<object>();
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    *(undefined8 *)(in_stack_00000028 + 0x18) = in_stack_00000058;
    *(undefined8 *)(in_stack_00000028 + 0x10) = in_stack_00000050;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    lVar7 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06ab16a0) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_05f1ea20;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_02e759c0(plVar8,*(long *)PTR_DAT_06ab16a0,0);
LAB_05f1ea20:
    (*(code *)*puVar5)(plVar8,in_stack_00000050,in_stack_00000058,0,2,puVar5[1]);
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    uVar6 = *unaff_x22;
    *(undefined8 *)(in_stack_00000028 + 0x28) = unaff_x22[1];
    *(undefined8 *)(in_stack_00000028 + 0x20) = uVar6;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    lVar7 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06ab07f8) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_05f1eaa8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_02e759c0(plVar8,*(long *)PTR_DAT_06ab07f8,0);
LAB_05f1eaa8:
    (*(code *)*puVar5)(plVar8);
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
    *(int *)(in_stack_00000028 + 0x68) = iVar3 + -1;
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      lVar7 = *(long *)System_Resources_RuntimeResourceSet_var;
    }
    puVar5 = *(undefined8 **)(lVar7 + 0xb8);
    lVar14 = puVar5[2];
    if (lVar14 == 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        puVar5 = *(undefined8 **)(*(long *)System_Resources_RuntimeResourceSet_var + 0xb8);
      }
      uVar6 = *puVar5;
      lVar14 = thunk_FUN_02e78ab8(*(undefined8 *)System_Reflection_RuntimeAssembly_var);
      FUN_04b2178c(lVar14,uVar6,*(undefined8 *)System_Runtime_CompilerServices_RuntimeOps_var,0);
      plVar9 = (long *)(*(long *)(*(long *)System_Resources_RuntimeResourceSet_var + 0xb8) + 0x10);
      *plVar9 = lVar14;
      thunk_FUN_02ee2be8(plVar9,lVar14);
    }
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    lVar7 = *plVar8;
    lVar13 = *(long *)System_Reflection_RuntimeFieldInfo_var;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)(lVar13 + 0x20)) {
          lVar7 = lVar7 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar13 + 0x50)) * 0x10 + 0x138;
          goto LAB_05f1ebdc;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    lVar7 = FUN_02e759c0(plVar8);
LAB_05f1ebdc:
    lVar7 = thunk_FUN_02e5afdc(*(undefined8 *)(lVar7 + 8),lVar13);
    (**(code **)(lVar7 + 8))(plVar8,lVar14,lVar7);
    if (plVar8 != (long *)0x0) {
      lVar7 = *plVar8;
      uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_05f1ec5c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_02e759c0(plVar8,*(long *)puVar1,0);
LAB_05f1ec5c:
      (*(code *)*puVar5)(plVar8,puVar5[1]);
    }
    lVar7 = *(long *)(unaff_x19 + 0x200);
    uVar4 = FUN_062641e8(0);
    if (lVar7 != 0) {
      FUN_05ed32fc(lVar7,uStack0000000000000000,uVar4,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


