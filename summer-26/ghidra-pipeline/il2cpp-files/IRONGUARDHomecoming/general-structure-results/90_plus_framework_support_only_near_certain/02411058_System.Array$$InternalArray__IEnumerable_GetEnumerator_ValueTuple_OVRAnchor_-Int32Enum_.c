/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<ValueTuple<OVRAnchor,-Int32Enum>>
ENTRY_POINT: 02411058
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x024113ec) */

void System_Array__InternalArray__IEnumerable_GetEnumerator<ValueTuple<OVRAnchor,_Int32Enum>>
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long in_x9;
  ulong uVar8;
  int *in_x10;
  int *piVar9;
  ulong unaff_x20;
  long *unaff_x21;
  long *unaff_x24;
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
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar4 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_02411078;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02411078:
  lVar5 = (*(code *)*puVar4)();
  if (lVar5 != 0) {
    FUN_03e1f400(&stack0x00000038,lVar5,unaff_x20 >> 0x20,0);
    plVar6 = in_stack_000000f8;
    _uStack0000000000000078 = in_stack_00000040;
    uVar3 = _uStack0000000000000078;
    in_stack_00000070 = in_stack_00000038;
    in_stack_00000088 = in_stack_00000050;
    in_stack_00000080 = in_stack_00000048;
    uStack0000000000000078 = (undefined4)in_stack_00000040;
    in_stack_00000098 = in_stack_00000060;
    in_stack_00000090 = in_stack_00000058;
    in_stack_000000a0 = in_stack_00000068;
    in_stack_000000e8 = in_stack_00000038;
    in_stack_000000f0 = uStack0000000000000078;
    _uStack0000000000000078 = uVar3;
    if (in_stack_000000f8 != (long *)0x0) {
      lVar5 = *in_stack_000000f8;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_System_Runtime_Remoting_Contexts_Context_SetProperty__) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02411124;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(in_stack_000000f8,
                            *(long *)Method_System_Runtime_Remoting_Contexts_Context_SetProperty__,0
                           );
LAB_02411124:
      plVar6 = (long *)(*(code *)*puVar4)(plVar6,puVar4[1]);
      puVar2 = Method_UnityEngine_UIElements_ContextualMenuManipulator_OnContextualMenuEvent__;
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar5 = *plVar6;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_02411194;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_02411194:
        uVar8 = (*(code *)*puVar4)(plVar6,puVar4[1]);
        if ((uVar8 & 1) == 0) {
LAB_02411354:
          if (plVar6 == (long *)0x0) {
            return;
          }
          lVar5 = *plVar6;
          uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar8 == 0) goto LAB_02411394;
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_0241137c;
        }
        lVar5 = *plVar6;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_024111f0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_024111f0:
        uVar8 = (*(code *)*puVar4)(plVar6,puVar4[1]);
        uVar7 = FUN_0240ea50();
        if ((uVar7 & 1) == 0) goto LAB_02411354;
        lVar5 = *unaff_x21;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x24) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0241125c;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ecb238();
LAB_0241125c:
        lVar5 = (*(code *)*puVar4)();
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_03e1f400(&stack0x00000070,lVar5,uVar8 >> 0x20,0);
        in_stack_000000c8 = in_stack_00000088;
        in_stack_000000c0 = in_stack_00000080;
        in_stack_000000d8 = in_stack_00000098;
        in_stack_000000d0 = in_stack_00000090;
        in_stack_000000e0 = in_stack_000000a0;
        in_stack_000000b0 = in_stack_000000e8;
        in_stack_000000b8 =
             CONCAT44((int)((ulong)_uStack0000000000000078 >> 0x20),in_stack_000000f0);
        lVar5 = *unaff_x21;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x24) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_024112f8;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ecb238();
LAB_024112f8:
        lVar5 = (*(code *)*puVar4)();
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
        FUN_03e1f16c(lVar5,uVar8 >> 0x20);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_0241137c:
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_024113b0;
    }
  }
LAB_02411394:
  puVar4 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_024113b0:
  (*(code *)*puVar4)(plVar6,puVar4[1]);
  return;
}


