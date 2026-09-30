/*
FUNCTION_NAME: OVRManager$$OnApplicationPause
ENTRY_POINT: 0366ec9c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_13;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OnApplicationPause
               (long param_1,ulong param_2,ulong param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
               long param_10)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  long lVar11;
  int in_w9;
  long lVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  ulong *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *plVar16;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  int unaff_w25;
  int unaff_w26;
  undefined8 *unaff_x27;
  undefined2 *unaff_x28;
  long unaff_x29;
  undefined4 uVar17;
  undefined4 in_s16;
  undefined4 uStack0000000000000040;
  uint uStack0000000000000048;
  undefined8 in_stack_00000050;
  ulong in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined8 in_stack_00000078;
  ulong in_stack_00000080;
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
  ulong in_stack_000000c0;
  undefined4 in_stack_000000c8;
  undefined2 uStack00000000000000d0;
  undefined1 uStack00000000000000d2;
  undefined5 uStack00000000000000d3;
  ulong in_stack_000000d8;
  undefined8 in_stack_000000e0;
  ulong in_stack_000000e8;
  undefined8 in_stack_000000f0;
  
code_r0x0366ec9c:
  *(int *)(param_10 + 0x18) = in_w9;
  *(undefined4 *)(param_1 + 0x20) = param_9;
  *(undefined4 *)(param_1 + 0x24) = param_8;
  *(undefined4 *)(param_1 + 0x28) = param_7;
  *(undefined4 *)(param_1 + 0x2c) = param_6;
  *(undefined4 *)(param_1 + 0x30) = param_5;
  *(undefined4 *)(param_1 + 0x34) = in_s16;
  *(undefined4 *)(param_1 + 0x38) = param_4;
  *(int *)(param_1 + 0x3c) = (int)param_3;
  *(int *)(param_1 + 0x40) = (int)param_2;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x47) = uStack00000000000000d2;
  *(undefined2 *)(param_1 + 0x45) = uStack00000000000000d0;
  do {
    uVar7 = in_stack_000000c8;
    uVar13 = in_stack_000000c0;
    uVar6 = in_stack_000000b8;
    uVar9 = in_stack_000000b0;
    uVar17 = (undefined4)param_3;
    unaff_w25 = unaff_w25 + -1;
    if (unaff_w25 == 0) {
      if (*(char *)(unaff_x20 + 0x108) == '\0') {
        if (*(char *)(unaff_x22 + 0xe12) == '\0') {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
          *(undefined1 *)(unaff_x22 + 0xe12) = 1;
        }
        puVar10 = *(undefined4 **)(*unaff_x23 + 0xb8);
        uStack0000000000000098 = *puVar10;
        uVar17 = puVar10[1];
        param_4 = puVar10[2];
      }
      else {
        uStack0000000000000098 =
             FUN_03334a6c(unaff_x20 + 0x108,
                          *(undefined8 *)
                           Method_Unity_VisualScripting_NesterStateTransition<FlowGraph,_ScriptGraphAsset>__ctor__
                         );
      }
      in_stack_00000080 = uVar13;
      uStack0000000000000088 = uVar7;
      uStack000000000000008c = (undefined4)uVar9;
      uStack0000000000000090 = (undefined4)((ulong)uVar9 >> 0x20);
      uStack0000000000000094 = uVar6;
      uStack00000000000000a4 = CONCAT31(uStack00000000000000a4._1_3_,1);
      uVar3 = CONCAT44(uStack000000000000008c,uVar7);
      uVar4 = CONCAT44(uVar17,uStack0000000000000098);
      uVar9 = CONCAT44(uVar6,uStack0000000000000090);
      lVar12 = *(long *)(unaff_x20 + 0xd8);
      uVar5 = CONCAT44(uStack00000000000000a4,param_4);
      uStack000000000000009c = uVar17;
      uStack00000000000000a0 = param_4;
      if (lVar12 != 0) {
        lVar14 = *unaff_x24;
        _uStack00000000000000d0 = uVar13;
        lVar11 = *(long *)(lVar12 + 0x10);
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        in_stack_000000d8 = uVar3;
        in_stack_000000e0 = uVar9;
        in_stack_000000e8 = uVar4;
        in_stack_000000f0 = uVar5;
        if (lVar11 != 0) {
          uVar2 = *(uint *)(lVar12 + 0x18);
          if (uVar2 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar2 + 1;
            lVar11 = lVar11 + (long)(int)uVar2 * 0x28;
            *(undefined8 *)(lVar11 + 0x40) = uVar5;
            *(ulong *)(lVar11 + 0x28) = uVar3;
            *(ulong *)(lVar11 + 0x20) = uVar13;
            *(ulong *)(lVar11 + 0x38) = uVar4;
            *(undefined8 *)(lVar11 + 0x30) = uVar9;
          }
          else {
            _uStack0000000000000040 = uVar13;
            _uStack0000000000000048 = uVar3;
            in_stack_00000050 = uVar9;
            in_stack_00000058 = uVar4;
            _uStack0000000000000060 = uVar5;
            FUN_03133480(lVar12,&stack0x00000040,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
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
              plVar16 = *(long **)(unaff_x20 + 0x78);
              *(undefined4 *)(unaff_x20 + 0x138) = 0xffffffff;
              if (plVar16 != (long *)0x0) {
                lVar12 = *plVar16;
                uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar13 == 0) goto LAB_0366eeb0;
                piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                goto LAB_0366ee98;
              }
            }
          }
        }
      }
thunk_FUN_01f08a3c:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    unaff_w21 = unaff_w21 + -1;
    if (unaff_w21 < 0) {
      unaff_w21 = unaff_w26;
    }
    if (*(long *)(unaff_x20 + 0x130) == 0) goto thunk_FUN_01f08a3c;
    FUN_03227960(&stack0x00000040,*(long *)(unaff_x20 + 0x130),unaff_w21,*unaff_x27);
    uVar13 = _uStack0000000000000040;
    param_4 = uStack0000000000000040;
    param_3 = _uStack0000000000000040 >> 0x20;
    uVar2 = uStack0000000000000048;
    param_2 = _uStack0000000000000048 & 0xffffffff;
    param_10 = *(long *)(unaff_x20 + 0xd8);
    if (param_10 == 0) goto thunk_FUN_01f08a3c;
    _uStack00000000000000d0 = CONCAT12(in_stack_00000078._6_1_,in_stack_00000078._4_2_);
    param_1 = *(long *)(param_10 + 0x10);
    lVar12 = *unaff_x24;
    *(int *)(param_10 + 0x1c) = *(int *)(param_10 + 0x1c) + 1;
    if (param_1 == 0) goto thunk_FUN_01f08a3c;
    uVar1 = *(uint *)(param_10 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) break;
    uVar9 = *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
    _uStack0000000000000040 = CONCAT44(uStack0000000000000060,in_stack_00000058._4_4_);
    _uStack0000000000000048 = CONCAT44(uStack0000000000000068,uStack0000000000000064);
    in_stack_00000050 = CONCAT44(in_stack_00000070,uStack000000000000006c);
    in_stack_00000058 = uVar13;
    _uStack0000000000000060 = (uint5)uVar2;
    *(undefined1 *)(unaff_x28 + 1) = in_stack_00000078._6_1_;
    *unaff_x28 = in_stack_00000078._4_2_;
    FUN_03133480(param_10,&stack0x00000040,uVar9);
  } while( true );
  in_w9 = uVar1 + 1;
  param_1 = param_1 + (int)uVar1 * unaff_x29;
  param_5 = uStack000000000000006c;
  param_6 = uStack0000000000000068;
  param_7 = uStack0000000000000064;
  param_8 = uStack0000000000000060;
  param_9 = in_stack_00000058._4_4_;
  in_s16 = in_stack_00000070;
  goto code_r0x0366ec9c;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
LAB_0366ee98:
    if (*(long *)(piVar15 + -2) ==
        *(long *)Method_Unity_VisualScripting_ModuloHandler_<>c_<_ctor>b__0_10__) {
      puVar8 = (undefined8 *)(lVar12 + (long)(*piVar15 + 3) * 0x10 + 0x138);
      goto LAB_0366eed0;
    }
  }
LAB_0366eeb0:
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar16,*(long *)
                                 Method_Unity_VisualScripting_ModuloHandler_<>c_<_ctor>b__0_10__,3);
LAB_0366eed0:
  (*(code *)*puVar8)(plVar16,puVar8[1]);
  unaff_x19[4] = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
  unaff_x19[1] = CONCAT44(uStack000000000000008c,uStack0000000000000088);
  *unaff_x19 = in_stack_00000080;
  unaff_x19[3] = CONCAT44(uStack000000000000009c,uStack0000000000000098);
  unaff_x19[2] = CONCAT44(uStack0000000000000094,uStack0000000000000090);
  return;
}


