/*
FUNCTION_NAME: System.Runtime.CompilerServices.AsyncTaskMethodBuilder<object>$$AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable.ConfiguredTaskAwaiter,-HttpWebRequest.<MyGetResponseAsync>d__243>
ENTRY_POINT: 02029e90
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 171
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0202a04c) */

void System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>__AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_HttpWebRequest_<MyGetResponseAsync>d__243>
               (undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  
LAB_02029ea0:
  do {
                    /* catch() { ... } // from try @ 02029e34 with catch @ 02029ea0 */
    (*(code *)*param_1)(unaff_x24,param_1[1]);
    do {
      if (unaff_x27 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01eed990(unaff_x27);
      }
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *unaff_x20;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x26) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02029b34;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02029b34:
      uVar6 = (*(code *)*puVar2)();
      if ((uVar6 & 1) == 0) {
        if (unaff_x20 == (long *)0x0) {
          return;
        }
        lVar5 = *unaff_x20;
                    /* try { // try from 02029f40 to 02129f43 has its CatchHandler @ 02029f80 */
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* try { // try from 02029f44 to 02129fb3 has its CatchHandler @ 02029ee4 */
        if (uVar6 == 0) goto LAB_02029f70;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_02029f58;
      }
      lVar5 = *unaff_x20;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x28) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02029b90;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02029b90:
      (*(code *)*puVar2)(&stack0x00000040);
      in_stack_00000088 = in_stack_00000048;
      in_stack_00000080 = in_stack_00000040;
      in_stack_00000090 = in_stack_00000050;
      if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *unaff_x23;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Oculus_Platform_Request<SystemVoipState>__ctor__) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02029c08;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02029c08:
      unaff_x24 = (long *)(*(code *)*puVar2)();
      if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar5 = *unaff_x24;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x26) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_02029c68;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ecb238(unaff_x24,*unaff_x26,0);
LAB_02029c68:
        uVar6 = (*(code *)*puVar2)(unaff_x24,puVar2[1]);
        if ((uVar6 & 1) == 0) goto LAB_02029e44;
        lVar5 = *unaff_x24;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x28) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_02029cc4;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ecb238(unaff_x24,*unaff_x28,0);
LAB_02029cc4:
        (*(code *)*puVar2)(&stack0x00000040,unaff_x24,puVar2[1]);
        in_stack_00000068 = in_stack_00000048;
        in_stack_00000060 = in_stack_00000040;
        in_stack_00000070 = in_stack_00000050;
        if (*(long *)(unaff_x22 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar5 = *(long *)(*(long *)(unaff_x22 + 0x28) + 0x10);
        in_stack_00000048 = in_stack_00000088;
        in_stack_00000040 = in_stack_00000080;
        in_stack_00000050 = in_stack_00000090;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        in_stack_000000a8 = in_stack_00000088;
        in_stack_000000a0 = in_stack_00000080;
        in_stack_000000b0 = in_stack_00000090;
        uVar3 = FUN_02b4a820(lVar5,&stack0x000000a0,*unaff_x29);
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        in_stack_000000a8 = in_stack_00000068;
        in_stack_000000a0 = in_stack_00000060;
        in_stack_000000b0 = in_stack_00000070;
        if (*(long *)(unaff_x21 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        in_stack_00000018 = in_stack_00000068;
        in_stack_00000010 = in_stack_00000060;
        in_stack_00000020 = in_stack_00000070;
        uVar4 = FUN_02b4a820(*(long *)(unaff_x21 + 0x10),&stack0x00000010,*unaff_x29);
        uVar6 = FUN_0202a128(uVar4,uVar3,uVar4);
      } while ((uVar6 & 1) == 0);
      in_stack_00000028 = 0;
      in_stack_00000020 = 0;
      in_stack_00000038 = 0;
      in_stack_00000030 = 0;
      in_stack_00000018 = 0;
      in_stack_00000010 = 0;
      in_stack_000000e8 = in_stack_00000088;
      in_stack_000000e0 = in_stack_00000080;
      in_stack_000000c8 = in_stack_00000068;
      in_stack_000000c0 = in_stack_00000060;
      in_stack_000000d0 = in_stack_00000070;
      in_stack_000000f0 = in_stack_00000090;
      FUN_0289091c(&stack0x00000010,&stack0x000000e0,&stack0x000000c0,
                   *(undefined8 *)Method_Oculus_Platform_Request<UserAccountAgeCategory>__ctor__);
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      in_stack_00000108 = in_stack_00000018;
      in_stack_00000100 = in_stack_00000010;
      in_stack_00000118 = in_stack_00000028;
      in_stack_00000110 = in_stack_00000020;
      in_stack_00000128 = in_stack_00000038;
      in_stack_00000120 = in_stack_00000030;
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
        lVar5 = lVar5 + (long)(int)uVar1 * 0x30;
        *(undefined8 *)(lVar5 + 0x38) = in_stack_00000028;
        *(undefined8 *)(lVar5 + 0x30) = in_stack_00000020;
        *(undefined8 *)(lVar5 + 0x48) = in_stack_00000038;
        *(undefined8 *)(lVar5 + 0x40) = in_stack_00000030;
        *(undefined8 *)(lVar5 + 0x28) = in_stack_00000018;
        *(undefined8 *)(lVar5 + 0x20) = in_stack_00000010;
      }
      else {
        in_stack_00000138 = in_stack_00000018;
        in_stack_00000130 = in_stack_00000010;
        in_stack_00000148 = in_stack_00000028;
        in_stack_00000140 = in_stack_00000020;
        in_stack_00000158 = in_stack_00000038;
        in_stack_00000150 = in_stack_00000030;
        FUN_03077d08();
      }
LAB_02029e44:
      unaff_x27 = 0;
    } while (unaff_x24 == (long *)0x0);
    lVar5 = *unaff_x24;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                    /* catch() { ... } // from try @ 02029e64 with catch @ 02029e9c */
          param_1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02029ea0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    param_1 = (undefined8 *)
              FUN_01ecb238(unaff_x24,
                           *(long *)
                            Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_02029f58:
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                    /* catch() { ... } // from try @ 02029f40 with catch @ 02029f80 */
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_02029f8c;
    }
  }
LAB_02029f70:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02029f8c:
  (*(code *)*puVar2)();
                    /* catch() { ... } // from try @ 02029efc with catch @ 02029f98 */
                    /* try { // try from 02029fb4 to 02129fdb has its CatchHandler @ 02029fb4
                       catch() { ... } // from try @ 02029fb4 with catch @ 02029fb4
                       catch() { ... } // from try @ 02029fe0 with catch @ 02029fb4 */
  return;
}


