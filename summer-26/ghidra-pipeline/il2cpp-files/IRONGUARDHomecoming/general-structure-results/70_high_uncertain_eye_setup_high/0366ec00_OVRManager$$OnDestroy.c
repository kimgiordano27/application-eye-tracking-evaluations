/*
FUNCTION_NAME: OVRManager$$OnDestroy
ENTRY_POINT: 0366ec00
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OnDestroy(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined4 *puVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  undefined8 *unaff_x19;
  long unaff_x20;
  int iVar19;
  long *plVar20;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  int unaff_w25;
  int unaff_w26;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  uint uStack0000000000000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined8 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  undefined3 uStack00000000000000d0;
  undefined5 uStack00000000000000d3;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  
  puVar8 = Method_Unity_VisualScripting_ModuloHandler_<>c_<_ctor>b__0_104__;
  iVar19 = *(int *)(unaff_x20 + 0x138);
  if (*(int *)(unaff_x20 + 0x138) < 0) {
    iVar19 = unaff_w26;
  }
  while( true ) {
    FUN_03227960(&stack0x00000040,param_1,iVar19,*(undefined8 *)puVar8);
    uVar4 = _uStack0000000000000040;
    uVar22 = uStack0000000000000040;
    uVar21 = uStack0000000000000044;
    uVar3 = uStack0000000000000048;
    lVar12 = *(long *)(unaff_x20 + 0xd8);
    if (lVar12 == 0) break;
    uStack00000000000000d0 = CONCAT12(in_stack_00000078._6_1_,in_stack_00000078._4_2_);
    lVar14 = *(long *)(lVar12 + 0x10);
    lVar16 = *unaff_x24;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (lVar14 == 0) break;
    uVar2 = *(uint *)(lVar12 + 0x18);
    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
      lVar14 = lVar14 + (long)(int)uVar2 * 0x28;
      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
      *(undefined4 *)(lVar14 + 0x20) = in_stack_00000058._4_4_;
      *(undefined4 *)(lVar14 + 0x24) = uStack0000000000000060;
      *(undefined4 *)(lVar14 + 0x28) = uStack0000000000000064;
      *(undefined4 *)(lVar14 + 0x2c) = uStack0000000000000068;
      *(undefined4 *)(lVar14 + 0x30) = uStack000000000000006c;
      *(undefined4 *)(lVar14 + 0x34) = in_stack_00000070;
      *(undefined4 *)(lVar14 + 0x38) = uStack0000000000000040;
      *(undefined4 *)(lVar14 + 0x3c) = uStack0000000000000044;
      *(uint *)(lVar14 + 0x40) = uStack0000000000000048;
      *(undefined1 *)(lVar14 + 0x44) = 0;
      *(undefined1 *)(lVar14 + 0x47) = in_stack_00000078._6_1_;
      *(undefined2 *)(lVar14 + 0x45) = in_stack_00000078._4_2_;
    }
    else {
      _uStack0000000000000040 = CONCAT44(uStack0000000000000060,in_stack_00000058._4_4_);
      _uStack0000000000000048 = CONCAT44(uStack0000000000000068,uStack0000000000000064);
      in_stack_00000050 = CONCAT44(in_stack_00000070,uStack000000000000006c);
      in_stack_00000058 = uVar4;
      _uStack0000000000000060 =
           CONCAT17(in_stack_00000078._6_1_,CONCAT25(in_stack_00000078._4_2_,(uint5)uVar3));
      FUN_03133480(lVar12,&stack0x00000040,
                   *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
    }
    uVar11 = in_stack_000000c8;
    uVar10 = in_stack_000000c0;
    uVar9 = in_stack_000000b8;
    uVar4 = in_stack_000000b0;
    unaff_w25 = unaff_w25 + -1;
    if (unaff_w25 == 0) {
      if (*(char *)(unaff_x20 + 0x108) == '\0') {
        if (*(char *)(unaff_x22 + 0xe12) == '\0') {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
          *(undefined1 *)(unaff_x22 + 0xe12) = 1;
        }
        puVar15 = *(undefined4 **)(*unaff_x23 + 0xb8);
        uStack0000000000000098 = *puVar15;
        uVar21 = puVar15[1];
        uVar22 = puVar15[2];
      }
      else {
        uStack0000000000000098 =
             FUN_03334a6c(unaff_x20 + 0x108,
                          *(undefined8 *)
                           Method_Unity_VisualScripting_NesterStateTransition<FlowGraph,_ScriptGraphAsset>__ctor__
                         );
      }
      in_stack_00000080 = uVar10;
      uStack0000000000000088 = uVar11;
      uStack000000000000008c = (undefined4)uVar4;
      uStack0000000000000090 = (undefined4)((ulong)uVar4 >> 0x20);
      uStack0000000000000094 = uVar9;
      uStack00000000000000a4 = CONCAT31(uStack00000000000000a4._1_3_,1);
      uVar4 = CONCAT44(uStack000000000000008c,uVar11);
      uVar6 = CONCAT44(uVar21,uStack0000000000000098);
      uVar5 = CONCAT44(uVar9,uStack0000000000000090);
      lVar12 = *(long *)(unaff_x20 + 0xd8);
      uVar7 = CONCAT44(uStack00000000000000a4,uVar22);
      uStack000000000000009c = uVar21;
      uStack00000000000000a0 = uVar22;
      if (lVar12 != 0) {
        lVar16 = *unaff_x24;
        _uStack00000000000000d0 = uVar10;
        lVar14 = *(long *)(lVar12 + 0x10);
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        in_stack_000000d8 = uVar4;
        in_stack_000000e0 = uVar5;
        in_stack_000000e8 = uVar6;
        in_stack_000000f0 = uVar7;
        if (lVar14 != 0) {
          uVar3 = *(uint *)(lVar12 + 0x18);
          if (uVar3 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar3 + 1;
            lVar14 = lVar14 + (long)(int)uVar3 * 0x28;
            *(undefined8 *)(lVar14 + 0x40) = uVar7;
            *(undefined8 *)(lVar14 + 0x28) = uVar4;
            *(undefined8 *)(lVar14 + 0x20) = uVar10;
            *(undefined8 *)(lVar14 + 0x38) = uVar6;
            *(undefined8 *)(lVar14 + 0x30) = uVar5;
          }
          else {
            _uStack0000000000000040 = uVar10;
            _uStack0000000000000048 = uVar4;
            in_stack_00000050 = uVar5;
            in_stack_00000058 = uVar6;
            _uStack0000000000000060 = uVar7;
            FUN_03133480(lVar12,&stack0x00000040,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          lVar12 = *(long *)(unaff_x20 + 0xe0);
          if (lVar12 != 0) {
            (**(code **)(lVar12 + 0x18))
                      (*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(unaff_x20 + 0xd8),
                       *(undefined8 *)(lVar12 + 0x28));
            lVar12 = *(long *)(unaff_x20 + 0x130);
            if (lVar12 != 0) {
              *(undefined4 *)(lVar12 + 0x18) = 0;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              plVar20 = *(long **)(unaff_x20 + 0x78);
              *(undefined4 *)(unaff_x20 + 0x138) = 0xffffffff;
              if (plVar20 != (long *)0x0) {
                lVar12 = *plVar20;
                uVar17 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar17 == 0) goto LAB_0366eeb0;
                piVar18 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                goto LAB_0366ee98;
              }
            }
          }
        }
      }
      break;
    }
    param_1 = *(long *)(unaff_x20 + 0x130);
    iVar1 = iVar19 + -1;
    if (iVar19 + -1 < 0) {
      iVar1 = unaff_w26;
    }
    iVar19 = iVar1;
    if (param_1 == 0) break;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_0366ee98:
    if (*(long *)(piVar18 + -2) ==
        *(long *)Method_Unity_VisualScripting_ModuloHandler_<>c_<_ctor>b__0_10__) {
      puVar13 = (undefined8 *)(lVar12 + (long)(*piVar18 + 3) * 0x10 + 0x138);
      goto LAB_0366eed0;
    }
  }
LAB_0366eeb0:
  puVar13 = (undefined8 *)
            FUN_01ecb238(plVar20,*(long *)
                                  Method_Unity_VisualScripting_ModuloHandler_<>c_<_ctor>b__0_10__,3)
  ;
LAB_0366eed0:
  (*(code *)*puVar13)(plVar20,puVar13[1]);
  unaff_x19[4] = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
  unaff_x19[1] = CONCAT44(uStack000000000000008c,uStack0000000000000088);
  *unaff_x19 = in_stack_00000080;
  unaff_x19[3] = CONCAT44(uStack000000000000009c,uStack0000000000000098);
  unaff_x19[2] = CONCAT44(uStack0000000000000094,uStack0000000000000090);
  return;
}


