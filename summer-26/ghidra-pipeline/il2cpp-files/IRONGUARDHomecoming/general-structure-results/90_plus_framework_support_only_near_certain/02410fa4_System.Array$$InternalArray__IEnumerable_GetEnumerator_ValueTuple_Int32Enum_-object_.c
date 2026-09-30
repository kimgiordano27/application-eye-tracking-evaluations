/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<ValueTuple<Int32Enum,-object>>
ENTRY_POINT: 02410fa4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x024113ec) */

void System_Array__InternalArray__IEnumerable_GetEnumerator<ValueTuple<Int32Enum,_object>>
               (code *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  long *unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined4 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined4 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined4 in_stack_000000f0;
  long *in_stack_000000f8;
  
  lVar5 = (*param_1)();
  if (lVar5 != 0) {
    uVar6 = FUN_03e1a3c0();
    if ((uVar6 & 1) == 0) {
      return;
    }
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x21) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02411010;
        }
        uVar6 = uVar6 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238();
LAB_02411010:
    plVar8 = (long *)(*(code *)*puVar7)();
    puVar2 = Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__;
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02411078;
          }
          uVar6 = uVar6 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01ecb238(plVar8,*(long *)
                                    Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__,0);
LAB_02411078:
      lVar5 = (*(code *)*puVar7)(plVar8,unaff_x20 & 0xffffffff,puVar7[1]);
      if (lVar5 != 0) {
        FUN_03e1f400(&stack0x00000038,lVar5,unaff_x20 >> 0x20,0);
        plVar9 = in_stack_000000f8;
        _uStack0000000000000078 = in_stack_00000040;
        uVar4 = _uStack0000000000000078;
        in_stack_00000070 = in_stack_00000038;
        in_stack_00000088 = in_stack_00000050;
        in_stack_00000080 = in_stack_00000048;
        uStack0000000000000078 = (undefined4)in_stack_00000040;
        in_stack_00000098 = in_stack_00000060;
        in_stack_00000090 = in_stack_00000058;
        in_stack_000000a0 = in_stack_00000068;
        in_stack_000000e8 = in_stack_00000038;
        in_stack_000000f0 = uStack0000000000000078;
        _uStack0000000000000078 = uVar4;
        if (in_stack_000000f8 != (long *)0x0) {
          lVar5 = *in_stack_000000f8;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) ==
                  *(long *)Method_System_Runtime_Remoting_Contexts_Context_SetProperty__) {
                puVar7 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_02411124;
              }
              uVar6 = uVar6 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_01ecb238(in_stack_000000f8,
                                *(long *)
                                 Method_System_Runtime_Remoting_Contexts_Context_SetProperty__,0);
LAB_02411124:
          plVar9 = (long *)(*(code *)*puVar7)(plVar9,puVar7[1]);
          puVar3 = Method_UnityEngine_UIElements_ContextualMenuManipulator_OnContextualMenuEvent__;
          puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            lVar5 = *plVar9;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 != 0) {
              piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                  puVar7 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_02411194;
                }
                uVar6 = uVar6 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar6 != 0);
            }
            puVar7 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar1,0);
LAB_02411194:
            uVar6 = (*(code *)*puVar7)(plVar9,puVar7[1]);
            if ((uVar6 & 1) == 0) {
LAB_02411354:
              if (plVar9 == (long *)0x0) {
                return;
              }
              lVar5 = *plVar9;
              uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar6 == 0) goto LAB_02411394;
              piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              goto LAB_0241137c;
            }
            lVar5 = *plVar9;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 != 0) {
              piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
                  puVar7 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_024111f0;
                }
                uVar6 = uVar6 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar6 != 0);
            }
            puVar7 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_024111f0:
            uVar6 = (*(code *)*puVar7)(plVar9,puVar7[1]);
            uVar10 = FUN_0240ea50();
            if ((uVar10 & 1) == 0) goto LAB_02411354;
            lVar11 = *plVar8;
            lVar5 = *(long *)puVar2;
            uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar10 != 0) {
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar5) {
                  puVar7 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_0241125c;
                }
                uVar10 = uVar10 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar10 != 0);
            }
            puVar7 = (undefined8 *)FUN_01ecb238(plVar8,lVar5,0);
LAB_0241125c:
            lVar5 = (*(code *)*puVar7)(plVar8,uVar6 & 0xffffffff,puVar7[1]);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_03e1f400(&stack0x00000070,lVar5,uVar6 >> 0x20,0);
            in_stack_000000c8 = in_stack_00000088;
            in_stack_000000c0 = in_stack_00000080;
            in_stack_000000d8 = in_stack_00000098;
            in_stack_000000d0 = in_stack_00000090;
            in_stack_000000e0 = in_stack_000000a0;
            in_stack_000000b0 = in_stack_000000e8;
            in_stack_000000b8 =
                 CONCAT44((int)((ulong)_uStack0000000000000078 >> 0x20),in_stack_000000f0);
            lVar11 = *plVar8;
            lVar5 = *(long *)puVar2;
            uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar10 != 0) {
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar5) {
                  puVar7 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_024112f8;
                }
                uVar10 = uVar10 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar10 != 0);
            }
            puVar7 = (undefined8 *)FUN_01ecb238(plVar8,lVar5,0);
LAB_024112f8:
            lVar5 = (*(code *)*puVar7)(plVar8,uVar6 & 0xffffffff,puVar7[1]);
            _uStack0000000000000078 = in_stack_000000b8;
            in_stack_00000070 = in_stack_000000b0;
            in_stack_00000088 = in_stack_000000c8;
            in_stack_00000080 = in_stack_000000c0;
            in_stack_00000098 = in_stack_000000d8;
            in_stack_00000090 = in_stack_000000d0;
            in_stack_000000a0 = in_stack_000000e0;
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_03e1f16c(lVar5,uVar6 >> 0x20);
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar12 = piVar12 + 4;
    if (uVar6 == 0) break;
LAB_0241137c:
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar7 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_024113b0;
    }
  }
LAB_02411394:
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar9,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_024113b0:
  (*(code *)*puVar7)(plVar9,puVar7[1]);
  return;
}


