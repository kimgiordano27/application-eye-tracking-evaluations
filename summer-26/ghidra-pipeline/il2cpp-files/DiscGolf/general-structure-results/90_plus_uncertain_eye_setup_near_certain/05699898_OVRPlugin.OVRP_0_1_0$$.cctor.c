/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_0$$.cctor
ENTRY_POINT: 05699898
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 105
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_0_1_0___cctor(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong *puVar15;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  int iVar16;
  int iVar17;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
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
  long in_stack_000000c0;
  int in_stack_000000c8;
  int in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  
  FUN_02d965b8(UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputActionMap>_TypeInfo);
  FUN_02d965b8(PTR_DAT_069fdf78);
  FUN_02d965b8(UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_TypeInfo);
                    /* try { // try from 056998c0 to 05799c43 has its CatchHandler @ 056998c0
                       catch() { ... } // from try @ 056998c0 with catch @ 056998c0
                       catch() { ... } // from try @ 0569a124 with catch @ 056998c0
                       catch() { ... } // from try @ 0569a1b8 with catch @ 056998c0
                       catch() { ... } // from try @ 0569a1cc with catch @ 056998c0
                       catch() { ... } // from try @ 0569a228 with catch @ 056998c0
                       catch() { ... } // from try @ 0569a2d4 with catch @ 056998c0 */
  FUN_02d965b8(UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputDevice>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_Queue<Event>_TypeInfo);
  FUN_02d965b8(UnityEngine_InputSystem_Utilities_ReadOnlyArray<InternedString>_TypeInfo);
  *(undefined1 *)(unaff_x24 + 0x86e) = 1;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000b0 = 0;
  uStack00000000000000b4 = 0;
  unaff_x25[1] = 0;
  *unaff_x25 = 0;
  unaff_x25[3] = 0;
  unaff_x25[2] = 0;
  unaff_x25[7] = 0;
  unaff_x25[6] = 0;
  unaff_x25[9] = 0;
  unaff_x25[8] = 0;
  puVar3 = System_Collections_Generic_Queue<LeafCandidate>_TypeInfo;
  puVar2 = PTR_DAT_069fdf78;
  _iStack0000000000000078 = (undefined8 *)0x0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  uStack000000000000008c = 0;
  in_stack_00000080 = 0;
  uStack0000000000000084 = 0;
  in_stack_00000068 = 0;
  uStack000000000000006c = 0;
  in_stack_00000060 = 0;
  uStack0000000000000064 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  _iStack0000000000000058 = (undefined8 *)0x0;
  in_stack_00000050 = 0;
  in_stack_00000038 = (undefined8 *)0x0;
  in_stack_00000030 = 0;
  FUN_0421d05c(&stack0x00000008,unaff_x22 + 0x18,*unaff_x23);
  unaff_x25[7] = in_stack_00000010;
  unaff_x25[6] = in_stack_00000008;
  unaff_x25[9] = in_stack_00000020;
  unaff_x25[8] = in_stack_00000018;
  in_stack_000000e0 = in_stack_00000028;
  in_stack_00000010 = &stack0x000000c0;
  iVar16 = in_stack_000000d0 + 1;
  in_stack_00000008 = 0;
  lVar14 = *unaff_x26;
  bVar9 = SBORROW4(iVar16,in_stack_000000c8);
  iVar17 = iVar16 - in_stack_000000c8;
  while (lVar6 = in_stack_000000c0, in_stack_000000d0 = iVar16, iVar17 < 0 != bVar9) {
    if ((*(ushort *)(*(long *)(lVar14 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    puVar15 = (ulong *)(lVar6 + (long)iVar16 * 0x10);
    lVar14 = *(long *)(unaff_x22 + 0x10);
    uVar11 = *puVar15;
    uVar12 = puVar15[1];
    *(ulong *)((long)unaff_x25 + 0x44) = uVar11;
    *(ulong *)((long)unaff_x25 + 0x4c) = uVar12;
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_0400ff1c(lVar14,uVar11 & 0xffffffff,*(undefined8 *)puVar2);
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
      FUN_063222fc(uVar11 >> 0x20,uVar12 & 0xffffffff,(int)(uVar12 >> 0x20),0);
    }
    iVar16 = in_stack_000000d0 + 1;
    lVar14 = *unaff_x26;
    bVar9 = SBORROW4(iVar16,in_stack_000000c8);
    iVar17 = iVar16 - in_stack_000000c8;
  }
  uVar13 = *(undefined8 *)puVar3;
  *(undefined8 *)((long)unaff_x25 + 0x4c) = 0;
  *(undefined8 *)((long)unaff_x25 + 0x44) = 0;
  FUN_05118ff4(&stack0x000000c0,uVar13);
  puVar3 = System_Collections_Generic_Queue<OvrAvatarEntity>_TypeInfo;
  FUN_0421e124(&stack0x00000008,unaff_x22 + 0x28,
               *(undefined8 *)
                UnityEngine_InputSystem_Utilities_ReadOnlyArray<InternedString>_TypeInfo);
  uVar13 = in_stack_00000008;
  in_stack_00000008 = 0;
  unaff_x25[1] = in_stack_00000010;
  *unaff_x25 = uVar13;
  unaff_x25[3] = in_stack_00000020;
  unaff_x25[2] = in_stack_00000018;
  in_stack_000000b0 = (undefined4)in_stack_00000028;
  uStack00000000000000b4 = (undefined4)((ulong)in_stack_00000028 >> 0x20);
  lVar14 = *(long *)puVar3;
  iVar16 = iStack00000000000000a0 + 1;
  in_stack_00000010 = &stack0x00000090;
  iStack00000000000000a0 = iVar16;
  if (iVar16 < in_stack_00000098) {
    do {
      lVar6 = in_stack_00000090;
      iStack00000000000000a0 = iVar16;
      if ((*(ushort *)(*(long *)(lVar14 + 0x20) + 0x135) & 1) == 0) {
        FUN_02dcfd18();
      }
      puVar15 = (ulong *)(lVar6 + (long)iVar16 * 0x14);
      uVar1 = (undefined4)puVar15[2];
      uVar12 = puVar15[1];
      uVar11 = *puVar15;
      uStack00000000000000ac = (undefined4)uVar12;
      in_stack_000000b0 = (undefined4)(uVar12 >> 0x20);
      uVar8 = in_stack_000000b0;
      uStack00000000000000a4 = uVar11;
      uStack00000000000000b4 = uVar1;
      if (*(long *)(unaff_x22 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uStack00000000000000a4._4_4_ = (undefined4)(uVar11 >> 0x20);
      uVar7 = uStack00000000000000a4._4_4_;
      FUN_0400ff1c(*(long *)(unaff_x22 + 0x10),uVar11 & 0xffffffff,*(undefined8 *)puVar2);
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
        FUN_063222fc(uVar7,uVar12 & 0xffffffff,uVar8,uVar1);
      }
      iVar16 = iStack00000000000000a0 + 1;
      lVar14 = *(long *)puVar3;
      iStack00000000000000a0 = iVar16;
    } while (iVar16 < in_stack_00000098);
  }
  *(undefined8 *)((long)unaff_x25 + 0x1c) = 0;
  *(undefined8 *)((long)unaff_x25 + 0x14) = 0;
  uStack00000000000000b4 = 0;
  FUN_05119228(&stack0x00000090,*(undefined8 *)System_Collections_Generic_Queue<JobHandle>_TypeInfo)
  ;
  puVar4 = System_Collections_Generic_Queue<LeafPoint>_TypeInfo;
  puVar3 = System_Collections_Generic_Queue<IDataNode>_TypeInfo;
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
  iVar16 = iStack0000000000000078;
  in_stack_00000010 = &stack0x00000070;
  _iStack0000000000000078 = puVar5;
  while( true ) {
    lVar14 = in_stack_00000070;
    iVar17 = in_stack_00000080 + 1;
    in_stack_00000080 = iVar17;
    if (iVar16 <= iVar17) break;
    if ((*(ushort *)(*(long *)(*(long *)puVar4 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    uVar11 = *(ulong *)(lVar14 + (long)iVar17 * 8);
    uStack0000000000000084 = (undefined4)uVar11;
    in_stack_00000088 = (undefined4)(uVar11 >> 0x20);
    if (*(long *)(unaff_x22 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_0400ff1c(*(long *)(unaff_x22 + 0x10),uVar11 & 0xffffffff,*(undefined8 *)puVar2);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar12 = FUN_0569af78();
    if ((uVar12 & 1) != 0) {
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_06322274(uVar11 >> 0x20);
    }
    iVar16 = iStack0000000000000078;
  }
  uStack0000000000000084 = 0;
  in_stack_00000088 = 0;
  FUN_05118df0(&stack0x00000070,*(undefined8 *)puVar3);
  puVar4 = System_Collections_Generic_Queue<Node>_TypeInfo;
  puVar3 = System_Collections_Generic_Queue<int>_TypeInfo;
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
  iVar16 = iStack0000000000000058;
  in_stack_00000010 = &stack0x00000050;
  _iStack0000000000000058 = puVar5;
  while( true ) {
    lVar14 = in_stack_00000050;
    iVar17 = in_stack_00000060 + 1;
    in_stack_00000060 = iVar17;
    if (iVar16 <= iVar17) break;
    if ((*(ushort *)(*(long *)(*(long *)puVar4 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    uVar11 = *(ulong *)(lVar14 + (long)iVar17 * 8);
    uStack0000000000000064 = (undefined4)uVar11;
    in_stack_00000068 = (undefined4)(uVar11 >> 0x20);
    if (*(long *)(unaff_x22 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_0400ff1c(*(long *)(unaff_x22 + 0x10),uVar11 & 0xffffffff,*(undefined8 *)puVar2);
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
      FUN_0632223c();
    }
    iVar16 = iStack0000000000000058;
  }
  uStack0000000000000064 = 0;
  in_stack_00000068 = 0;
  FUN_051189e8(&stack0x00000050,*(undefined8 *)puVar3);
  puVar4 = System_Collections_Generic_Queue<MessageEventArgs>_TypeInfo;
  puVar3 = System_Collections_Generic_Queue<IAsyncResult>_TypeInfo;
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
    while (uVar11 = FUN_05118c10(&stack0x00000030,*(undefined8 *)puVar4), (uVar11 & 1) != 0) {
      if (*(long *)(unaff_x22 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_0400ff1c(*(long *)(unaff_x22 + 0x10),in_stack_00000040 & 0xffffffff,*(undefined8 *)puVar2)
      ;
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
        FUN_0632237c();
      }
    }
    FUN_05118c0c(&stack0x00000030,*(undefined8 *)puVar3);
  }
  return;
}


