/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$ArrayElementAsRef<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 04fb5c3c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ArrayElementAsRef<OVRPlugin_SpaceQueryResult>
               (long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  ulong in_x9;
  ulong uVar8;
  int *piVar9;
  int *in_x10;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  long unaff_x25;
  long unaff_x26;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined4 uStack0000000000000138;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  
  do {
    if ((bool)in_ZR) {
      puVar4 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
      goto 
      Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ArrayElementAsRef<OVRTriangleMesh_Triangle>;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar4 = (undefined8 *)FUN_044822ac();
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ArrayElementAsRef<OVRTriangleMesh_Triangle>:
        in_stack_000001c8 = CONCAT44(uStack000000000000004c,uStack0000000000000048);
        pcVar6 = (code *)*puVar4;
        in_stack_000001b8 = in_stack_00000038;
        in_stack_000001b0 = in_stack_00000030;
        in_stack_000001c0 = in_stack_00000040;
        *(undefined8 *)(unaff_x26 + 0x54) = uStack0000000000000054;
        *(ulong *)(unaff_x26 + 0x4c) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
        (*pcVar6)();
        *(undefined8 *)(unaff_x25 + 0x84) = *(undefined8 *)(unaff_x25 + 0xb4);
        *(undefined8 *)(unaff_x25 + 0x7c) = *(undefined8 *)(unaff_x25 + 0xac);
        lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_04481fb8(lVar5);
        }
        uVar12 = *(undefined8 *)(unaff_x25 + 0x84);
        uVar13 = *(undefined8 *)(unaff_x25 + 0x7c);
        uStack000000000000001c = (undefined4)uVar13;
        lVar7 = *unaff_x22;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar5) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto 
              Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ArrayElementAsRef<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_112>
              ;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_044822ac();

        Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ArrayElementAsRef<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_112>
        :
        in_stack_000001c8 = CONCAT44(uStack000000000000001c,uStack0000000000000138);
        pcVar6 = (code *)*puVar4;
        in_stack_000001b8 = in_stack_00000128;
        in_stack_000001b0 = in_stack_00000120;
        in_stack_000001c0 = in_stack_00000130;
        *(undefined8 *)(unaff_x26 + 0x54) = uVar12;
        *(undefined8 *)(unaff_x26 + 0x4c) = uVar13;
        (*pcVar6)();
        bVar1 = true;
        do {
          unaff_w23 = unaff_w23 + 1;
          if (unaff_w20 < unaff_w23) {
            if (!bVar1) {
              return;
            }
            unaff_w20 = unaff_w20 + -1;
            if (unaff_w20 < 1) {
              return;
            }
            if (unaff_x22 == (long *)0x0) goto LAB_04fb5d78;
            bVar1 = false;
            unaff_w23 = 1;
          }
          lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_04481fb8(lVar5);
          }
          lVar7 = *unaff_x22;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto FUN_04fb5960;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_044822ac();
FUN_04fb5960:
          (*(code *)*puVar4)(&stack0x000001b0);
          uVar2 = in_stack_000001c8;
          uVar14 = in_stack_000001c0;
          uVar12 = in_stack_000001b8;
          uVar13 = in_stack_000001b0;
          uVar10 = *(undefined8 *)(unaff_x26 + 0x4c);
          *(undefined8 *)(unaff_x25 + 0x84) = *(undefined8 *)(unaff_x26 + 0x54);
          *(undefined8 *)(unaff_x25 + 0x7c) = uVar10;
          lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_04481fb8(lVar5);
          }
          lVar7 = *unaff_x22;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto FUN_04fb59e8;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_044822ac();
FUN_04fb59e8:
          (*(code *)*puVar4)(&stack0x000001b0);
          uVar10 = *(undefined8 *)(unaff_x26 + 0x4c);
          *(undefined8 *)(unaff_x25 + 0x54) = *(undefined8 *)(unaff_x26 + 0x54);
          *(undefined8 *)(unaff_x25 + 0x4c) = uVar10;
          if (unaff_x21 == (long *)0x0) {
LAB_04fb5d78:
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar5 = **(long **)(unaff_x19 + 0x38);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_04481fb8(lVar5);
          }
          uVar15 = *(undefined8 *)(unaff_x25 + 0x54);
          uVar10 = *(undefined8 *)(unaff_x25 + 0x4c);
          *(undefined8 *)(unaff_x25 + 0x24) = *(undefined8 *)(unaff_x25 + 0x84);
          *(undefined8 *)(unaff_x25 + 0x1c) = *(undefined8 *)(unaff_x25 + 0x7c);
          lVar7 = *unaff_x21;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto FUN_04fb5a94;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_044822ac();
FUN_04fb5a94:
          uVar11 = *(undefined8 *)(unaff_x25 + 0x1c);
          pcVar6 = (code *)*puVar4;
          *(undefined8 *)(unaff_x26 + 0x54) = *(undefined8 *)(unaff_x25 + 0x24);
          *(undefined8 *)(unaff_x26 + 0x4c) = uVar11;
          *(undefined8 *)(unaff_x26 + 0x24) = uVar15;
          *(undefined8 *)(unaff_x26 + 0x1c) = uVar10;
          in_stack_000001b0 = uVar13;
          in_stack_000001b8 = uVar12;
          in_stack_000001c0 = uVar14;
          in_stack_000001c8 = uVar2;
          iVar3 = (*pcVar6)();
        } while (iVar3 < 1);
        lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_04481fb8(lVar5);
        }
        lVar7 = *unaff_x22;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar5) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto FUN_04fb5b38;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_044822ac();
FUN_04fb5b38:
        (*(code *)*puVar4)(&stack0x000001b0);
        uVar13 = in_stack_000001c8;
        in_stack_00000040 = in_stack_000001c0;
        in_stack_00000038 = in_stack_000001b8;
        in_stack_00000030 = in_stack_000001b0;
        uVar12 = *(undefined8 *)(unaff_x26 + 0x4c);
        *(undefined8 *)(unaff_x25 + 0xe4) = *(undefined8 *)(unaff_x26 + 0x54);
        *(undefined8 *)(unaff_x25 + 0xdc) = uVar12;
        lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_04481fb8(lVar5);
        }
        lVar7 = *unaff_x22;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar5) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto FUN_04fb5bc0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_044822ac();
FUN_04fb5bc0:
        (*(code *)*puVar4)(&stack0x000001b0);
        uVar12 = *(undefined8 *)(unaff_x26 + 0x4c);
        uVar14 = *(undefined8 *)(unaff_x25 + 0xdc);
        in_stack_00000128 = in_stack_000001b8;
        in_stack_00000120 = in_stack_000001b0;
        _uStack0000000000000138 = in_stack_000001c8;
        in_stack_00000130 = in_stack_000001c0;
        *(undefined8 *)(unaff_x25 + 0xb4) = *(undefined8 *)(unaff_x26 + 0x54);
        *(undefined8 *)(unaff_x25 + 0xac) = uVar12;
        *(undefined8 *)(unaff_x26 + 0x24) = *(undefined8 *)(unaff_x25 + 0xe4);
        *(undefined8 *)(unaff_x26 + 0x1c) = uVar14;
        param_3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
        if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
          param_3 = FUN_04481fb8(param_3);
        }
        uStack0000000000000054 = *(undefined8 *)(unaff_x26 + 0x24);
        uStack0000000000000048 = (undefined4)uVar13;
        uStack000000000000004c = (undefined4)*(undefined8 *)(unaff_x26 + 0x1c);
        uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)(unaff_x26 + 0x1c) >> 0x20);
        param_1 = *unaff_x22;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
}


