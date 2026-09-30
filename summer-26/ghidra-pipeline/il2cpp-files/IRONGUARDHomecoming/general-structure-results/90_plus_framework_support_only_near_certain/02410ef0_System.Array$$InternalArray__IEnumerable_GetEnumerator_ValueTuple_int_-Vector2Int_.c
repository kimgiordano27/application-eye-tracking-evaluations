/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<ValueTuple<int,-Vector2Int>>
ENTRY_POINT: 02410ef0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x024113ec) */

void System_Array__InternalArray__IEnumerable_GetEnumerator<ValueTuple<int,_Vector2Int>>(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
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
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_Contexts_Context_SetProperty__);
  thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ContextualMenuManipulator_OnContextualMenuEvent__
                    );
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  thunk_FUN_01efb3a4(Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__);
  thunk_FUN_01efb3a4(Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__);
  if (*(long *)(unaff_x21 + 0x38) == 0) {
    FUN_01ecafa0();
  }
  puVar2 = Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__;
  in_stack_000000f8 = (long *)0x0;
  if (unaff_x19 != (long *)0x0) {
    lVar9 = *unaff_x19;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_02410fa0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_02410fa0:
    lVar9 = (*(code *)*puVar5)();
    if (lVar9 != 0) {
      uVar11 = FUN_03e1a3c0();
      if ((uVar11 & 1) == 0) {
        return;
      }
      lVar9 = *unaff_x19;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02411010;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238();
LAB_02411010:
      plVar6 = (long *)(*(code *)*puVar5)();
      puVar2 = Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__;
      if (plVar6 != (long *)0x0) {
        lVar9 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_02411078;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_01ecb238(plVar6,*(long *)
                                      Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__,0
                             );
LAB_02411078:
        lVar9 = (*(code *)*puVar5)(plVar6,unaff_x20 & 0xffffffff,puVar5[1]);
        if (lVar9 != 0) {
          FUN_03e1f400(&stack0x00000038,lVar9,unaff_x20 >> 0x20,0);
          plVar7 = in_stack_000000f8;
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
            lVar9 = *in_stack_000000f8;
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) ==
                    *(long *)Method_System_Runtime_Remoting_Contexts_Context_SetProperty__) {
                  puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_02411124;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar5 = (undefined8 *)
                     FUN_01ecb238(in_stack_000000f8,
                                  *(long *)
                                   Method_System_Runtime_Remoting_Contexts_Context_SetProperty__,0);
LAB_02411124:
            plVar7 = (long *)(*(code *)*puVar5)(plVar7,puVar5[1]);
            puVar3 = Method_UnityEngine_UIElements_ContextualMenuManipulator_OnContextualMenuEvent__
            ;
            puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            do {
              lVar9 = *plVar7;
              uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                    puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_02411194;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar5 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_02411194:
              uVar11 = (*(code *)*puVar5)(plVar7,puVar5[1]);
              if ((uVar11 & 1) == 0) {
LAB_02411354:
                if (plVar7 == (long *)0x0) {
                  return;
                }
                lVar9 = *plVar7;
                uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar11 == 0) goto LAB_02411394;
                piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                goto LAB_0241137c;
              }
              lVar9 = *plVar7;
              uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
                    puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_024111f0;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar5 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
LAB_024111f0:
              uVar11 = (*(code *)*puVar5)(plVar7,puVar5[1]);
              uVar8 = FUN_0240ea50();
              if ((uVar8 & 1) == 0) goto LAB_02411354;
              lVar10 = *plVar6;
              lVar9 = *(long *)puVar2;
              uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar8 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == lVar9) {
                    puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_0241125c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar8 != 0);
              }
              puVar5 = (undefined8 *)FUN_01ecb238(plVar6,lVar9,0);
LAB_0241125c:
              lVar9 = (*(code *)*puVar5)(plVar6,uVar11 & 0xffffffff,puVar5[1]);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              FUN_03e1f400(&stack0x00000070,lVar9,uVar11 >> 0x20,0);
              in_stack_000000c8 = in_stack_00000088;
              in_stack_000000c0 = in_stack_00000080;
              in_stack_000000d8 = in_stack_00000098;
              in_stack_000000d0 = in_stack_00000090;
              in_stack_000000e0 = in_stack_000000a0;
              in_stack_000000b0 = in_stack_000000e8;
              in_stack_000000b8 =
                   CONCAT44((int)((ulong)_uStack0000000000000078 >> 0x20),in_stack_000000f0);
              lVar10 = *plVar6;
              lVar9 = *(long *)puVar2;
              uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar8 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == lVar9) {
                    puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_024112f8;
                  }
                  uVar8 = uVar8 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar8 != 0);
              }
              puVar5 = (undefined8 *)FUN_01ecb238(plVar6,lVar9,0);
LAB_024112f8:
              lVar9 = (*(code *)*puVar5)(plVar6,uVar11 & 0xffffffff,puVar5[1]);
              _uStack0000000000000078 = in_stack_000000b8;
              in_stack_00000070 = in_stack_000000b0;
              in_stack_00000088 = in_stack_000000c8;
              in_stack_00000080 = in_stack_000000c0;
              in_stack_00000098 = in_stack_000000d8;
              in_stack_00000090 = in_stack_000000d0;
              in_stack_000000a0 = in_stack_000000e0;
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              FUN_03e1f16c(lVar9,uVar11 >> 0x20);
            } while( true );
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_0241137c:
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_024113b0;
    }
  }
LAB_02411394:
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_024113b0:
  (*(code *)*puVar5)(plVar7,puVar5[1]);
  return;
}


