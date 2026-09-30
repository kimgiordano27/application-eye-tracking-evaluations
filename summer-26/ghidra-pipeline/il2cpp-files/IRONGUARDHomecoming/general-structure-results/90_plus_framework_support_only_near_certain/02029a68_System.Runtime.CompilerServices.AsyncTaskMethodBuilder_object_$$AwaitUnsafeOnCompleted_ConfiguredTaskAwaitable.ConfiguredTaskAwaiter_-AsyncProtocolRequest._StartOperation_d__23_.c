/*
FUNCTION_NAME: System.Runtime.CompilerServices.AsyncTaskMethodBuilder<object>$$AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable.ConfiguredTaskAwaiter,-AsyncProtocolRequest.<StartOperation>d__23>
ENTRY_POINT: 02029a68
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 183
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_7;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_7
*/


/* WARNING: Removing unreachable block (ram,0x02029eb0) */
/* WARNING: Removing unreachable block (ram,0x0202a04c) */

void System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>__AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_AsyncProtocolRequest_<StartOperation>d__23>
               (void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
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
  
  lVar10 = *unaff_x20;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) ==
          *(long *)Method_Oculus_Platform_Request<SystemVoipState>__ctor__) {
        puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_02029abc;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238();
LAB_02029abc:
  puVar4 = Method_Oculus_Platform_Request<User>__ctor__;
  puVar3 = Method_Oculus_Platform_Request<string>__ctor__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  plVar6 = (long *)(*(code *)*puVar5)();
  do {
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar11 = *plVar6;
    lVar10 = *(long *)puVar2;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
                    /* try { // try from 02029b2c to 02129b53 has its CatchHandler @ 02029b2c
                       catch() { ... } // from try @ 02029b2c with catch @ 02029b2c
                       catch() { ... } // from try @ 02029b58 with catch @ 02029b2c */
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_02029b34;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,lVar10,0);
LAB_02029b34:
    uVar12 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar12 & 1) == 0) {
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar10 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 == 0) goto LAB_02029f70;
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar11 = *plVar6;
    lVar10 = *(long *)puVar4;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
                    /* try { // try from 02029b54 to 02129b57 has its CatchHandler @ 02029b7c */
                    /* try { // try from 02029b58 to 02129b97 has its CatchHandler @ 02029b2c */
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_02029b90;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
                    /* catch() { ... } // from try @ 02029b54 with catch @ 02029b7c */
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,lVar10,0);
LAB_02029b90:
                    /* try { // try from 02029b98 to 02129bbf has its CatchHandler @ 02029b98
                       catch() { ... } // from try @ 02029b98 with catch @ 02029b98
                       catch() { ... } // from try @ 02029bc4 with catch @ 02029b98 */
    (*(code *)*puVar5)(&stack0x00000040,plVar6,puVar5[1]);
    in_stack_00000088 = in_stack_00000048;
    in_stack_00000080 = in_stack_00000040;
    in_stack_00000090 = in_stack_00000050;
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar10 = *unaff_x23;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
                    /* try { // try from 02029bc0 to 02129bc3 has its CatchHandler @ 02029be8 */
                    /* try { // try from 02029bc4 to 02129c03 has its CatchHandler @ 02029b98 */
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)Method_Oculus_Platform_Request<SystemVoipState>__ctor__) {
                    /* try { // try from 02029c04 to 02129c47 has its CatchHandler @ 02029c04
                       catch() { ... } // from try @ 02029c04 with catch @ 02029c04
                       catch() { ... } // from try @ 02029ce8 with catch @ 02029c04 */
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_02029c08;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
                    /* catch() { ... } // from try @ 02029bc0 with catch @ 02029be8 */
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_02029c08:
    plVar7 = (long *)(*(code *)*puVar5)();
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar11 = *plVar7;
      lVar10 = *(long *)puVar2;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_02029c68;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
                    /* try { // try from 02029c48 to 02129c5b has its CatchHandler @ 02029d50 */
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar7,lVar10,0);
LAB_02029c68:
      uVar12 = (*(code *)*puVar5)(plVar7,puVar5[1]);
      if ((uVar12 & 1) == 0) goto LAB_02029e44;
      lVar11 = *plVar7;
      lVar10 = *(long *)puVar4;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_02029cc4;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar7,lVar10,0);
LAB_02029cc4:
      (*(code *)*puVar5)(&stack0x00000040,plVar7,puVar5[1]);
      in_stack_00000068 = in_stack_00000048;
      in_stack_00000060 = in_stack_00000040;
      in_stack_00000070 = in_stack_00000050;
      if (*(long *)(unaff_x22 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = *(long *)(*(long *)(unaff_x22 + 0x28) + 0x10);
      in_stack_00000048 = in_stack_00000088;
      in_stack_00000040 = in_stack_00000080;
      in_stack_00000050 = in_stack_00000090;
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      in_stack_000000a8 = in_stack_00000088;
      in_stack_000000a0 = in_stack_00000080;
      in_stack_000000b0 = in_stack_00000090;
      uVar8 = FUN_02b4a820(lVar10,&stack0x000000a0,*(undefined8 *)puVar3);
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
      uVar9 = FUN_02b4a820(*(long *)(unaff_x21 + 0x10),&stack0x00000010,*(undefined8 *)puVar3);
      uVar12 = FUN_0202a128(uVar9,uVar8,uVar9);
    } while ((uVar12 & 1) == 0);
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
    lVar10 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      lVar10 = lVar10 + (long)(int)uVar1 * 0x30;
      *(undefined8 *)(lVar10 + 0x38) = in_stack_00000028;
      *(undefined8 *)(lVar10 + 0x30) = in_stack_00000020;
      *(undefined8 *)(lVar10 + 0x48) = in_stack_00000038;
      *(undefined8 *)(lVar10 + 0x40) = in_stack_00000030;
      *(undefined8 *)(lVar10 + 0x28) = in_stack_00000018;
      *(undefined8 *)(lVar10 + 0x20) = in_stack_00000010;
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
    if (plVar7 != (long *)0x0) {
      lVar10 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_02029ea0;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(plVar7,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_02029ea0:
      (*(code *)*puVar5)(plVar7,puVar5[1]);
    }
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_02029f8c;
    }
  }
LAB_02029f70:
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_02029f8c:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
  return;
}


