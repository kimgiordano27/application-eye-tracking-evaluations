/*
FUNCTION_NAME: Unity.Services.Leaderboards.Internal.Http.HttpClient$$MakeRequestAsync
ENTRY_POINT: 05f1e240
PROGRAM: beastcraft-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_9;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05f1ec74) */
/* WARNING: Removing unreachable block (ram,0x05f1e928) */
/* WARNING: Removing unreachable block (ram,0x05f1ed10) */
/* WARNING: Removing unreachable block (ram,0x05f1ecc8) */

void Unity_Services_Leaderboards_Internal_Http_HttpClient__MakeRequestAsync
               (ulong param_1,long param_2,long param_3,long param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  undefined1 uVar16;
  ulong uVar17;
  int *piVar18;
  long unaff_x20;
  long lVar19;
  undefined8 *unaff_x22;
  undefined8 *unaff_x27;
  undefined8 *unaff_x29;
  undefined4 uVar20;
  long in_stack_00000028;
  long *in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long *in_stack_00000068;
  
                    /* try { // try from 05f1e240 to 0601e267 has its CatchHandler @ 05f1e040 */
  if ((param_1 & 1) == 0) {
    FUN_02e3ca1c(System_Reflection_RuntimeAssembly_var);
                    /* try { // try from 05f1e268 to 0601e26b has its CatchHandler @ 05f1e2a0 */
    FUN_02e3ca1c(PTR_DAT_06ab07f8);
                    /* try { // try from 05f1e26c to 0601e26f has its CatchHandler @ 05f1e298 */
                    /* try { // try from 05f1e270 to 0601e273 has its CatchHandler @ 05f1e290 */
                    /* try { // try from 05f1e274 to 0601e27b has its CatchHandler @ 05f1e294 */
    FUN_02e3ca1c(PTR_DAT_06a2ef10);
                    /* catch() { ... } // from try @ 05f1e228 with catch @ 05f1e27c
                       try { // try from 05f1e27c to 0601e2bb has its CatchHandler @ 05f1e040 */
                    /* catch() { ... } // from try @ 05f1e210 with catch @ 05f1e280 */
    FUN_02e3ca1c(System_Reflection_RuntimeFieldInfo_var);
                    /* catch() { ... } // from try @ 05f1e1ec with catch @ 05f1e284 */
                    /* catch() { ... } // from try @ 05f1e1cc with catch @ 05f1e288 */
                    /* catch() { ... } // from try @ 05f1e1a8 with catch @ 05f1e28c */
    FUN_02e3ca1c(PTR_DAT_06ab16a0);
                    /* catch() { ... } // from try @ 05f1e270 with catch @ 05f1e290 */
                    /* catch() { ... } // from try @ 05f1e184 with catch @ 05f1e294
                       catch() { ... } // from try @ 05f1e274 with catch @ 05f1e294 */
                    /* catch() { ... } // from try @ 05f1e26c with catch @ 05f1e298 */
    FUN_02e3ca1c(PTR_DAT_06ab5e18);
                    /* catch() { ... } // from try @ 05f1e138 with catch @ 05f1e29c */
                    /* catch() { ... } // from try @ 05f1e268 with catch @ 05f1e2a0 */
    FUN_02e3ca1c(System_Runtime_CompilerServices_RuntimeHelpers_var);
    FUN_02e3ca1c(Unity_Services_Economy_Internal_Models_CurrencyBalanceResponse_var);
                    /* try { // try from 05f1e2bc to 0601e2bf has its CatchHandler @ 05f1e2d8 */
    FUN_02e3ca1c(System_Reflection_RuntimeMethodInfo_var);
                    /* try { // try from 05f1e2c0 to 0601e2db has its CatchHandler @ 05f1e040 */
    FUN_02e3ca1c(System_Runtime_CompilerServices_RuntimeOps_var);
    FUN_02e3ca1c(System_Resources_RuntimeResourceSet_var);
                    /* catch() { ... } // from try @ 05f1e2bc with catch @ 05f1e2d8 */
                    /* try { // try from 05f1e2dc to 0601e2e3 has its CatchHandler @ 05f1e2ec */
    FUN_02e3ca1c(System_RuntimeType_var);
                    /* try { // try from 05f1e2e4 to 0601e2ef has its CatchHandler @ 05f1e040 */
                    /* catch() { ... } // from try @ 05f1e2dc with catch @ 05f1e2ec */
    FUN_02e3ca1c(System_ComponentModel_SByteConverter_var);
    FUN_02e3ca1c(System_Collections_Generic_SByteEnumEqualityComparer<T>_var);
    *(undefined1 *)(unaff_x20 + 0x4d2) = 1;
  }
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000068 = (long *)0x0;
  in_stack_00000030 = (long *)0x0;
  in_stack_00000038 = 0;
  in_stack_00000028 = 0;
  auVar3 = ZEXT816(0);
  if (((param_4 != 0) && (auVar3 = ZEXT816(0), *(long *)(param_4 + 0x1a0) != 0)) &&
     (auVar3 = ZEXT816(0), *(long *)(param_4 + 0x200) != 0)) {
    uVar2 = *(undefined4 *)(*(long *)(param_4 + 0x1a0) + 0x24);
    iVar7 = FUN_05ed32cc(*(long *)(param_4 + 0x200),uVar2,0);
    iVar8 = FUN_062641e8(0);
    auVar3._8_8_ = in_stack_00000058;
    auVar3._0_8_ = in_stack_00000050;
    uVar20 = 0x3f800000;
    if (*(int *)(param_4 + 0x228) == 0) {
      uVar20 = *(undefined4 *)(param_4 + 0x214);
    }
    if (*(long *)(param_4 + 0x200) != 0) {
      lVar10 = Unity_Services_Core_UnityThreadUtils__set_UnityThreadScheduler
                         (*(long *)(param_4 + 0x200),uVar2,0);
      auVar3._8_8_ = in_stack_00000058;
      auVar3._0_8_ = in_stack_00000050;
      if (param_2 != 0) {
        _in_stack_00000050 = FUN_05e2c6f0(param_2,lVar10,0);
        puVar6 = System_Collections_Generic_SByteEnumEqualityComparer<T>_var;
        puVar5 = System_RuntimeType_var;
        puVar4 = System_Runtime_CompilerServices_RuntimeHelpers_var;
        if (iVar7 == iVar8) {
          lVar15 = *(long *)(param_2 + 0x58);
          auVar3 = _in_stack_00000050;
          if (lVar15 == 0) goto LAB_05f1ecc0;
          unaff_x29 = (undefined8 *)(lVar15 + 0x28);
          puVar13 = (undefined8 *)(lVar15 + 0x30);
        }
        else {
          puVar13 = unaff_x29 + 1;
        }
        in_stack_00000040 = *unaff_x29;
        in_stack_00000048 = *puVar13;
        uVar11 = FUN_03a21438(0x2e,*(undefined8 *)PTR_DAT_06ab5e18);
        plVar12 = (long *)UnityEngine_Rendering_VolumeProfile__Remove<object>
                                    (param_2,*(undefined8 *)puVar6,&stack0x00000038,uVar11,
                                     *(undefined8 *)puVar5,0x1e7,*(undefined8 *)puVar4);
        in_stack_00000068 = plVar12;
        if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        uVar11 = *unaff_x22;
        *(undefined8 *)(in_stack_00000038 + 0x18) = unaff_x22[1];
        *(undefined8 *)(in_stack_00000038 + 0x10) = uVar11;
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        lVar15 = *plVar12;
        uVar11 = *unaff_x22;
        uVar1 = unaff_x22[1];
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_06ab16a0) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_05f1e49c;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)FUN_02e759c0(plVar12,*(long *)PTR_DAT_06ab16a0,0);
LAB_05f1e49c:
        (*(code *)*puVar13)(plVar12,uVar11,uVar1,0,2,puVar13[1]);
        plVar12 = in_stack_00000068;
        if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        uVar11 = *param_5;
        *(undefined8 *)(in_stack_00000038 + 0x28) = param_5[1];
        *(undefined8 *)(in_stack_00000038 + 0x20) = uVar11;
        if (in_stack_00000068 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        lVar15 = *in_stack_00000068;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_06ab07f8) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_05f1e524;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)FUN_02e759c0(in_stack_00000068,*(long *)PTR_DAT_06ab07f8,0);
LAB_05f1e524:
        (*(code *)*puVar13)(plVar12,param_5,1,puVar13[1]);
        plVar12 = in_stack_00000068;
        if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        uVar11 = *unaff_x27;
        *(undefined8 *)(in_stack_00000038 + 0x38) = unaff_x27[1];
        *(undefined8 *)(in_stack_00000038 + 0x30) = uVar11;
        if (in_stack_00000068 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        lVar15 = *in_stack_00000068;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_06ab07f8) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_05f1e5a4;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)FUN_02e759c0(in_stack_00000068,*(long *)PTR_DAT_06ab07f8,0);
LAB_05f1e5a4:
        (*(code *)*puVar13)(plVar12);
        plVar12 = in_stack_00000068;
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
        lVar15 = *in_stack_00000068;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_06ab07f8) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_05f1e624;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)FUN_02e759c0(in_stack_00000068,*(long *)PTR_DAT_06ab07f8,0);
LAB_05f1e624:
        (*(code *)*puVar13)(plVar12,&stack0x00000040,1,puVar13[1]);
        plVar12 = in_stack_00000068;
        if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        *(undefined1 (*) [16])(in_stack_00000038 + 0x50) = _in_stack_00000050;
        if (in_stack_00000068 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        lVar15 = *in_stack_00000068;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_06ab07f8) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_05f1e6a4;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)FUN_02e759c0(in_stack_00000068,*(long *)PTR_DAT_06ab07f8,0);
LAB_05f1e6a4:
        (*(code *)*puVar13)(plVar12,&stack0x00000050,1,puVar13[1]);
        if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        *(long *)(in_stack_00000038 + 0x60) = param_3;
        thunk_FUN_02ee2be8();
        lVar15 = in_stack_00000038;
        if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        iVar9 = *(int *)(param_4 + 0x210);
        *(undefined4 *)(in_stack_00000038 + 0x6c) = uVar20;
        *(int *)(in_stack_00000038 + 0x68) = iVar9;
        *(undefined4 *)(in_stack_00000038 + 0x70) = *(undefined4 *)(param_4 + 0x220);
        if (iVar9 == 4) {
          if (*(int *)(*(long *)Unity_Services_Economy_Internal_Models_CurrencyBalanceResponse_var +
                      0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar11 = FUN_05f1d614(param_4 + 0x210);
          *(undefined8 *)(lVar15 + 0x78) = uVar11;
          thunk_FUN_02ee2be8((undefined8 *)(lVar15 + 0x78));
        }
        else {
          *(undefined8 *)(in_stack_00000038 + 0x78) = 0;
          thunk_FUN_02ee2be8((undefined8 *)(in_stack_00000038 + 0x78),0);
        }
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        if (*(long *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        iVar9 = FUN_0624a278(*(long *)(lVar10 + 0x18),0);
        plVar12 = in_stack_00000068;
        if (((iVar9 == 8) || (iVar9 == 0x3b)) || (iVar9 == 0x4a)) {
          if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
          uVar16 = 1;
        }
        else {
          if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
          uVar16 = 0;
        }
        *(undefined1 *)(in_stack_00000038 + 0x80) = uVar16;
        lVar10 = *(long *)System_Resources_RuntimeResourceSet_var;
        *(undefined1 *)(in_stack_00000038 + 0x81) = *(undefined1 *)(param_4 + 399);
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          lVar10 = *(long *)System_Resources_RuntimeResourceSet_var;
        }
        puVar13 = *(undefined8 **)(lVar10 + 0xb8);
        lVar15 = puVar13[1];
        if (lVar15 == 0) {
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
            puVar13 = *(undefined8 **)(*(long *)System_Resources_RuntimeResourceSet_var + 0xb8);
          }
          uVar11 = *puVar13;
          lVar15 = thunk_FUN_02e78ab8(*(undefined8 *)System_Reflection_RuntimeAssembly_var);
          FUN_04b2178c(lVar15,uVar11,*(undefined8 *)System_Reflection_RuntimeMethodInfo_var,0);
          plVar14 = (long *)(*(long *)(*(long *)System_Resources_RuntimeResourceSet_var + 0xb8) + 8)
          ;
          *plVar14 = lVar15;
          thunk_FUN_02ee2be8(plVar14,lVar15);
        }
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        lVar10 = *plVar12;
        lVar19 = *(long *)System_Reflection_RuntimeFieldInfo_var;
        uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)(lVar19 + 0x20)) {
              lVar10 = lVar10 + (long)(int)(*piVar18 + (uint)*(ushort *)(lVar19 + 0x50)) * 0x10 +
                       0x138;
              goto LAB_05f1e884;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        lVar10 = FUN_02e759c0(plVar12);
LAB_05f1e884:
        lVar10 = thunk_FUN_02e5afdc(*(undefined8 *)(lVar10 + 8),lVar19);
        (**(code **)(lVar10 + 8))(plVar12,lVar15,lVar10);
        plVar12 = in_stack_00000068;
        puVar4 = PTR_DAT_06a2ef10;
        if (in_stack_00000068 != (long *)0x0) {
          lVar10 = *in_stack_00000068;
          uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_06a2ef10) {
                puVar13 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_05f1e90c;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)FUN_02e759c0(in_stack_00000068,*(long *)PTR_DAT_06a2ef10,0);
LAB_05f1e90c:
          (*(code *)*puVar13)(plVar12,puVar13[1]);
        }
        if (iVar7 == iVar8) {
          return;
        }
        auVar3 = _in_stack_00000050;
        if (param_3 != 0) {
          lVar10 = FUN_06238628(param_3,0);
          auVar3 = _in_stack_00000050;
          if (lVar10 != 0) {
            iVar7 = FUN_062377b0(lVar10,0);
            uVar11 = FUN_03a21438(0x2f,*(undefined8 *)PTR_DAT_06ab5e18);
            plVar12 = (long *)UnityEngine_Rendering_VolumeProfile__Remove<object>
                                        (param_2,*(undefined8 *)
                                                  System_ComponentModel_SByteConverter_var,
                                         &stack0x00000028,uVar11,
                                         *(undefined8 *)System_RuntimeType_var,0x222,
                                         *(undefined8 *)
                                          System_Runtime_CompilerServices_RuntimeHelpers_var);
            uVar1 = in_stack_00000058;
            uVar11 = in_stack_00000050;
            in_stack_00000030 = plVar12;
            if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
            *(undefined1 (*) [16])(in_stack_00000028 + 0x10) = _in_stack_00000050;
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
            lVar10 = *plVar12;
            uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_06ab16a0) {
                  puVar13 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_05f1ea20;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar13 = (undefined8 *)FUN_02e759c0(plVar12,*(long *)PTR_DAT_06ab16a0,0);
LAB_05f1ea20:
            (*(code *)*puVar13)(plVar12,uVar11,uVar1,0,2,puVar13[1]);
            plVar12 = in_stack_00000030;
            if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
            uVar11 = *unaff_x22;
            *(undefined8 *)(in_stack_00000028 + 0x28) = unaff_x22[1];
            *(undefined8 *)(in_stack_00000028 + 0x20) = uVar11;
            if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
            lVar10 = *in_stack_00000030;
            uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_06ab07f8) {
                  puVar13 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_05f1eaa8;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar13 = (undefined8 *)FUN_02e759c0(in_stack_00000030,*(long *)PTR_DAT_06ab07f8,0);
LAB_05f1eaa8:
            (*(code *)*puVar13)(plVar12,unaff_x22,1,puVar13[1]);
            if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
            *(long *)(in_stack_00000028 + 0x60) = param_3;
            thunk_FUN_02ee2be8((long *)(in_stack_00000028 + 0x60),param_3);
            plVar12 = in_stack_00000030;
            puVar5 = System_Resources_RuntimeResourceSet_var;
            if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
            *(int *)(in_stack_00000028 + 0x68) = iVar7 + -1;
            lVar10 = *(long *)puVar5;
            if (*(int *)(lVar10 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
              lVar10 = *(long *)System_Resources_RuntimeResourceSet_var;
            }
            puVar13 = *(undefined8 **)(lVar10 + 0xb8);
            lVar15 = puVar13[2];
            if (lVar15 == 0) {
              if (*(int *)(lVar10 + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
                puVar13 = *(undefined8 **)(*(long *)System_Resources_RuntimeResourceSet_var + 0xb8);
              }
              uVar11 = *puVar13;
              lVar15 = thunk_FUN_02e78ab8(*(undefined8 *)System_Reflection_RuntimeAssembly_var);
              FUN_04b2178c(lVar15,uVar11,
                           *(undefined8 *)System_Runtime_CompilerServices_RuntimeOps_var,0);
              plVar14 = (long *)(*(long *)(*(long *)System_Resources_RuntimeResourceSet_var + 0xb8)
                                + 0x10);
              *plVar14 = lVar15;
              thunk_FUN_02ee2be8(plVar14,lVar15);
            }
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
            lVar10 = *plVar12;
            lVar19 = *(long *)System_Reflection_RuntimeFieldInfo_var;
            uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)(lVar19 + 0x20)) {
                  lVar10 = lVar10 + (long)(int)(*piVar18 + (uint)*(ushort *)(lVar19 + 0x50)) * 0x10
                           + 0x138;
                  goto LAB_05f1ebdc;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            lVar10 = FUN_02e759c0(plVar12);
LAB_05f1ebdc:
            lVar10 = thunk_FUN_02e5afdc(*(undefined8 *)(lVar10 + 8),lVar19);
            (**(code **)(lVar10 + 8))(plVar12,lVar15,lVar10);
            plVar12 = in_stack_00000030;
            if (in_stack_00000030 != (long *)0x0) {
              lVar10 = *in_stack_00000030;
              uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar17 != 0) {
                piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
                    puVar13 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
                    goto LAB_05f1ec5c;
                  }
                  uVar17 = uVar17 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar17 != 0);
              }
              puVar13 = (undefined8 *)FUN_02e759c0(in_stack_00000030,*(long *)puVar4,0);
LAB_05f1ec5c:
              (*(code *)*puVar13)(plVar12,puVar13[1]);
            }
            lVar10 = *(long *)(param_4 + 0x200);
            uVar20 = FUN_062641e8(0);
            auVar3 = _in_stack_00000050;
            if (lVar10 != 0) {
              FUN_05ed32fc(lVar10,uVar2,uVar20,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_05f1ecc0:
  _in_stack_00000050 = auVar3;
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


