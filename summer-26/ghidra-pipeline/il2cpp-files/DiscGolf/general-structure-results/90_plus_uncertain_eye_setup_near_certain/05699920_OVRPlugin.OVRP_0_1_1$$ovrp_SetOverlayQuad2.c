/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_1$$ovrp_SetOverlayQuad2
ENTRY_POINT: 05699920
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 105
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_0_1_1__ovrp_SetOverlayQuad2(undefined8 param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong *puVar14;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  int iVar15;
  int iVar16;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 uStack0000000000000030;
  undefined1 *puStack0000000000000038;
  ulong uStack0000000000000040;
  undefined8 uStack0000000000000048;
  long lStack0000000000000050;
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
  long in_stack_000000c0;
  int in_stack_000000c8;
  int in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  
  uStack0000000000000030 = param_1;
  uStack0000000000000040 = param_1;
  lStack0000000000000050 = param_1;
  FUN_0421d05c();
  unaff_x25[7] = in_stack_00000010;
  unaff_x25[6] = in_stack_00000008;
  unaff_x25[9] = in_stack_00000020;
  unaff_x25[8] = in_stack_00000018;
  in_stack_000000e0 = in_stack_00000028;
  in_stack_00000010 = &stack0x000000c0;
  iVar15 = in_stack_000000d0 + 1;
  in_stack_00000008 = 0;
  lVar13 = *unaff_x26;
  bVar8 = SBORROW4(iVar15,in_stack_000000c8);
  iVar16 = iVar15 - in_stack_000000c8;
  while (lVar5 = in_stack_000000c0, in_stack_000000d0 = iVar15, iVar16 < 0 != bVar8) {
    if ((*(ushort *)(*(long *)(lVar13 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    puVar14 = (ulong *)(lVar5 + (long)iVar15 * 0x10);
    lVar13 = *(long *)(unaff_x22 + 0x10);
    uVar10 = *puVar14;
    uVar11 = puVar14[1];
    *(ulong *)((long)unaff_x25 + 0x44) = uVar10;
    *(ulong *)((long)unaff_x25 + 0x4c) = uVar11;
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_0400ff1c(lVar13,uVar10 & 0xffffffff,*unaff_x24);
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
      FUN_063222fc(uVar10 >> 0x20,uVar11 & 0xffffffff,(int)(uVar11 >> 0x20),0);
    }
    iVar15 = in_stack_000000d0 + 1;
    lVar13 = *unaff_x26;
    bVar8 = SBORROW4(iVar15,in_stack_000000c8);
    iVar16 = iVar15 - in_stack_000000c8;
  }
  uVar12 = *unaff_x27;
  *(undefined8 *)((long)unaff_x25 + 0x4c) = 0;
  *(undefined8 *)((long)unaff_x25 + 0x44) = 0;
  FUN_05118ff4(&stack0x000000c0,uVar12);
  puVar2 = System_Collections_Generic_Queue<OvrAvatarEntity>_TypeInfo;
  FUN_0421e124(&stack0x00000008,unaff_x22 + 0x28,
               *(undefined8 *)
                UnityEngine_InputSystem_Utilities_ReadOnlyArray<InternedString>_TypeInfo);
  uVar12 = in_stack_00000008;
  in_stack_00000008 = 0;
  unaff_x25[1] = in_stack_00000010;
  *unaff_x25 = uVar12;
  unaff_x25[3] = in_stack_00000020;
  unaff_x25[2] = in_stack_00000018;
  in_stack_000000b0 = (undefined4)in_stack_00000028;
  uStack00000000000000b4 = (undefined4)((ulong)in_stack_00000028 >> 0x20);
  lVar13 = *(long *)puVar2;
  iVar15 = iStack00000000000000a0 + 1;
  in_stack_00000010 = &stack0x00000090;
  iStack00000000000000a0 = iVar15;
  if (iVar15 < in_stack_00000098) {
    do {
      lVar5 = in_stack_00000090;
      iStack00000000000000a0 = iVar15;
      if ((*(ushort *)(*(long *)(lVar13 + 0x20) + 0x135) & 1) == 0) {
        FUN_02dcfd18();
      }
      puVar14 = (ulong *)(lVar5 + (long)iVar15 * 0x14);
      uVar1 = (undefined4)puVar14[2];
      uVar11 = puVar14[1];
      uVar10 = *puVar14;
      uStack00000000000000ac = (undefined4)uVar11;
      in_stack_000000b0 = (undefined4)(uVar11 >> 0x20);
      uVar7 = in_stack_000000b0;
      uStack00000000000000a4 = uVar10;
      uStack00000000000000b4 = uVar1;
      if (*(long *)(unaff_x22 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uStack00000000000000a4._4_4_ = (undefined4)(uVar10 >> 0x20);
      uVar6 = uStack00000000000000a4._4_4_;
      FUN_0400ff1c(*(long *)(unaff_x22 + 0x10),uVar10 & 0xffffffff,*unaff_x24);
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
        FUN_063222fc(uVar6,uVar11 & 0xffffffff,uVar7,uVar1);
      }
      iVar15 = iStack00000000000000a0 + 1;
      lVar13 = *(long *)puVar2;
      iStack00000000000000a0 = iVar15;
    } while (iVar15 < in_stack_00000098);
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
  puVar4 = _iStack0000000000000078;
  in_stack_00000088 = (undefined4)in_stack_00000020;
  uStack000000000000008c = (undefined4)((ulong)in_stack_00000020 >> 0x20);
  in_stack_00000080 = (int)in_stack_00000018;
  uStack0000000000000084 = (undefined4)(in_stack_00000018 >> 0x20);
  iStack0000000000000078 = (int)in_stack_00000010;
  iVar15 = iStack0000000000000078;
  in_stack_00000010 = &stack0x00000070;
  _iStack0000000000000078 = puVar4;
  while( true ) {
    lVar13 = in_stack_00000070;
    iVar16 = in_stack_00000080 + 1;
    in_stack_00000080 = iVar16;
    if (iVar15 <= iVar16) break;
    if ((*(ushort *)(*(long *)(*(long *)puVar3 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    uVar10 = *(ulong *)(lVar13 + (long)iVar16 * 8);
    uStack0000000000000084 = (undefined4)uVar10;
    in_stack_00000088 = (undefined4)(uVar10 >> 0x20);
    if (*(long *)(unaff_x22 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_0400ff1c(*(long *)(unaff_x22 + 0x10),uVar10 & 0xffffffff,*unaff_x24);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar11 = FUN_0569af78();
    if ((uVar11 & 1) != 0) {
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_06322274(uVar10 >> 0x20);
    }
    iVar15 = iStack0000000000000078;
  }
  uStack0000000000000084 = 0;
  in_stack_00000088 = 0;
  FUN_05118df0(&stack0x00000070,*(undefined8 *)puVar2);
  puVar3 = System_Collections_Generic_Queue<Node>_TypeInfo;
  puVar2 = System_Collections_Generic_Queue<int>_TypeInfo;
  FUN_0421afa0(&stack0x00000008,unaff_x22 + 0x48,
               *(undefined8 *)UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputDevice>_TypeInfo)
  ;
  lStack0000000000000050 = in_stack_00000008;
  in_stack_00000008 = 0;
  _iStack0000000000000058 = in_stack_00000010;
  puVar4 = _iStack0000000000000058;
  in_stack_00000068 = (undefined4)in_stack_00000020;
  uStack000000000000006c = (undefined4)((ulong)in_stack_00000020 >> 0x20);
  in_stack_00000060 = (int)in_stack_00000018;
  uStack0000000000000064 = (undefined4)(in_stack_00000018 >> 0x20);
  iStack0000000000000058 = (int)in_stack_00000010;
  iVar15 = iStack0000000000000058;
  in_stack_00000010 = &stack0x00000050;
  _iStack0000000000000058 = puVar4;
  while( true ) {
    lVar13 = lStack0000000000000050;
    iVar16 = in_stack_00000060 + 1;
    in_stack_00000060 = iVar16;
    if (iVar15 <= iVar16) break;
    if ((*(ushort *)(*(long *)(*(long *)puVar3 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    uVar10 = *(ulong *)(lVar13 + (long)iVar16 * 8);
    uStack0000000000000064 = (undefined4)uVar10;
    in_stack_00000068 = (undefined4)(uVar10 >> 0x20);
    if (*(long *)(unaff_x22 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_0400ff1c(*(long *)(unaff_x22 + 0x10),uVar10 & 0xffffffff,*unaff_x24);
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
      FUN_0632223c();
    }
    iVar15 = iStack0000000000000058;
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
    uStack0000000000000030 = in_stack_00000008;
    in_stack_00000008 = 0;
    puStack0000000000000038 = (undefined1 *)in_stack_00000010;
    uStack0000000000000048 = in_stack_00000020;
    uStack0000000000000040 = in_stack_00000018;
    in_stack_00000010 = &stack0x00000030;
    while (uVar10 = FUN_05118c10(&stack0x00000030,*(undefined8 *)puVar3), (uVar10 & 1) != 0) {
      if (*(long *)(unaff_x22 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_0400ff1c(*(long *)(unaff_x22 + 0x10),uStack0000000000000040 & 0xffffffff,*unaff_x24);
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
        FUN_0632237c();
      }
    }
    FUN_05118c0c(&stack0x00000030,*(undefined8 *)puVar2);
  }
  return;
}


