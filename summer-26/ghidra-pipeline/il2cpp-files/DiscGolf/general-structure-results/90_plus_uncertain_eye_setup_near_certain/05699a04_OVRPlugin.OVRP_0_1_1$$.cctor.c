/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_1$$.cctor
ENTRY_POINT: 05699a04
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 105
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_0_1_1___cctor(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  int iVar13;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  int iVar14;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  ulong in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  int iStack0000000000000058;
  int in_stack_00000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  long in_stack_00000070;
  int iStack0000000000000078;
  int in_stack_00000080;
  undefined4 uStack0000000000000084;
  undefined4 in_stack_00000088;
  undefined4 uStack000000000000008c;
  long in_stack_00000090;
  int in_stack_00000098;
  int iStack00000000000000a0;
  ulong uStack00000000000000a4;
  undefined4 uStack00000000000000ac;
  undefined4 in_stack_000000b0;
  undefined4 uStack00000000000000b4;
  undefined8 in_stack_000000e8;
  
  *(undefined8 *)((long)unaff_x25 + 0x4c) = 0;
  *(undefined8 *)((long)unaff_x25 + 0x44) = 0;
  FUN_05118ff4(&stack0x000000c0);
  puVar2 = System_Collections_Generic_Queue<OvrAvatarEntity>_TypeInfo;
  FUN_0421e124(&stack0x00000008,unaff_x22 + 0x28,
               *(undefined8 *)
                UnityEngine_InputSystem_Utilities_ReadOnlyArray<InternedString>_TypeInfo);
  uVar4 = in_stack_00000008;
  in_stack_00000008 = 0;
  unaff_x25[1] = in_stack_00000010;
  *unaff_x25 = uVar4;
  unaff_x25[3] = in_stack_00000020;
  unaff_x25[2] = in_stack_00000018;
  in_stack_000000b0 = (undefined4)in_stack_00000028;
  uStack00000000000000b4 = (undefined4)((ulong)in_stack_00000028 >> 0x20);
  lVar11 = *(long *)puVar2;
  iVar14 = iStack00000000000000a0 + 1;
  in_stack_00000010 = &stack0x00000090;
  iStack00000000000000a0 = iVar14;
  if (iVar14 < in_stack_00000098) {
    do {
      lVar6 = in_stack_00000090;
      iStack00000000000000a0 = iVar14;
      if ((*(ushort *)(*(long *)(lVar11 + 0x20) + 0x135) & 1) == 0) {
        FUN_02dcfd18();
      }
      puVar12 = (ulong *)(lVar6 + (long)iVar14 * 0x14);
      uVar1 = (undefined4)puVar12[2];
      uVar10 = puVar12[1];
      uVar9 = *puVar12;
      uStack00000000000000ac = (undefined4)uVar10;
      in_stack_000000b0 = (undefined4)(uVar10 >> 0x20);
      uVar8 = in_stack_000000b0;
      uStack00000000000000a4 = uVar9;
      uStack00000000000000b4 = uVar1;
      if (*(long *)(unaff_x22 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uStack00000000000000a4._4_4_ = (undefined4)(uVar9 >> 0x20);
      uVar7 = uStack00000000000000a4._4_4_;
      FUN_0400ff1c(*(long *)(unaff_x22 + 0x10),uVar9 & 0xffffffff,*unaff_x24);
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar9 = FUN_0569af78();
      if ((uVar9 & 1) != 0) {
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_063222fc(uVar7,uVar10 & 0xffffffff,uVar8,uVar1);
      }
      iVar14 = iStack00000000000000a0 + 1;
      lVar11 = *(long *)puVar2;
      iStack00000000000000a0 = iVar14;
    } while (iVar14 < in_stack_00000098);
  }
  *(undefined8 *)((long)unaff_x25 + 0x1c) = 0;
  *(undefined8 *)((long)unaff_x25 + 0x14) = 0;
  uStack00000000000000b4 = 0;
  FUN_05119228(&stack0x00000090,*(undefined8 *)System_Collections_Generic_Queue<JobHandle>_TypeInfo)
  ;
  puVar3 = System_Collections_Generic_Queue<LeafPoint>_TypeInfo;
  puVar2 = System_Collections_Generic_Queue<IDataNode>_TypeInfo;
  FUN_0421bff4(&stack0x00000008,unaff_x22 + 0x38,
               *(undefined8 *)UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_TypeInfo
              );
  in_stack_00000070 = in_stack_00000008;
  in_stack_00000008 = 0;
  _iStack0000000000000078 = in_stack_00000010;
  puVar5 = _iStack0000000000000078;
  in_stack_00000088 = (undefined4)in_stack_00000020;
  uStack000000000000008c = (undefined4)((ulong)in_stack_00000020 >> 0x20);
  in_stack_00000080 = (int)in_stack_00000018;
  uStack0000000000000084 = (undefined4)(in_stack_00000018 >> 0x20);
  iStack0000000000000078 = (int)in_stack_00000010;
  iVar14 = iStack0000000000000078;
  in_stack_00000010 = &stack0x00000070;
  _iStack0000000000000078 = puVar5;
  while( true ) {
    lVar11 = in_stack_00000070;
    iVar13 = in_stack_00000080 + 1;
    in_stack_00000080 = iVar13;
    if (iVar14 <= iVar13) break;
    if ((*(ushort *)(*(long *)(*(long *)puVar3 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    uVar9 = *(ulong *)(lVar11 + (long)iVar13 * 8);
    uStack0000000000000084 = (undefined4)uVar9;
    in_stack_00000088 = (undefined4)(uVar9 >> 0x20);
    if (*(long *)(unaff_x22 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_0400ff1c(*(long *)(unaff_x22 + 0x10),uVar9 & 0xffffffff,*unaff_x24);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar10 = FUN_0569af78();
    if ((uVar10 & 1) != 0) {
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_06322274(uVar9 >> 0x20);
    }
    iVar14 = iStack0000000000000078;
  }
  uStack0000000000000084 = 0;
  in_stack_00000088 = 0;
  FUN_05118df0(&stack0x00000070,*(undefined8 *)puVar2);
  puVar3 = System_Collections_Generic_Queue<Node>_TypeInfo;
  puVar2 = System_Collections_Generic_Queue<int>_TypeInfo;
  FUN_0421afa0(&stack0x00000008,unaff_x22 + 0x48,
               *(undefined8 *)UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputDevice>_TypeInfo)
  ;
  in_stack_00000050 = in_stack_00000008;
  in_stack_00000008 = 0;
  _iStack0000000000000058 = in_stack_00000010;
  puVar5 = _iStack0000000000000058;
  in_stack_00000068 = (undefined4)in_stack_00000020;
  uStack000000000000006c = (undefined4)((ulong)in_stack_00000020 >> 0x20);
  in_stack_00000060 = (int)in_stack_00000018;
  uStack0000000000000064 = (undefined4)(in_stack_00000018 >> 0x20);
  iStack0000000000000058 = (int)in_stack_00000010;
  iVar14 = iStack0000000000000058;
  in_stack_00000010 = &stack0x00000050;
  _iStack0000000000000058 = puVar5;
  while( true ) {
    lVar11 = in_stack_00000050;
    iVar13 = in_stack_00000060 + 1;
    in_stack_00000060 = iVar13;
    if (iVar14 <= iVar13) break;
    if ((*(ushort *)(*(long *)(*(long *)puVar3 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    uVar9 = *(ulong *)(lVar11 + (long)iVar13 * 8);
    uStack0000000000000064 = (undefined4)uVar9;
    in_stack_00000068 = (undefined4)(uVar9 >> 0x20);
    if (*(long *)(unaff_x22 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_0400ff1c(*(long *)(unaff_x22 + 0x10),uVar9 & 0xffffffff,*unaff_x24);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar9 = FUN_0569af78();
    if ((uVar9 & 1) != 0) {
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_0632223c();
    }
    iVar14 = iStack0000000000000058;
  }
  uStack0000000000000064 = 0;
  in_stack_00000068 = 0;
  FUN_051189e8(&stack0x00000050,*(undefined8 *)puVar2);
  puVar3 = System_Collections_Generic_Queue<MessageEventArgs>_TypeInfo;
  puVar2 = System_Collections_Generic_Queue<IAsyncResult>_TypeInfo;
  if (*(long *)(unaff_x22 + 0x58) != 0) {
    FUN_03eae774(&stack0x00000008,*(long *)(unaff_x22 + 0x58),
                 *(undefined8 *)
                  UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputActionMap>_TypeInfo);
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000008 = 0;
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000010 = &stack0x00000030;
    while (uVar9 = FUN_05118c10(&stack0x00000030,*(undefined8 *)puVar3), (uVar9 & 1) != 0) {
      if (*(long *)(unaff_x22 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_0400ff1c(*(long *)(unaff_x22 + 0x10),in_stack_00000040 & 0xffffffff,*unaff_x24);
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar9 = FUN_0569af78();
      if ((uVar9 & 1) != 0) {
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_0632237c();
      }
    }
    FUN_05118c0c(&stack0x00000030,*(undefined8 *)puVar2);
  }
  return;
}


