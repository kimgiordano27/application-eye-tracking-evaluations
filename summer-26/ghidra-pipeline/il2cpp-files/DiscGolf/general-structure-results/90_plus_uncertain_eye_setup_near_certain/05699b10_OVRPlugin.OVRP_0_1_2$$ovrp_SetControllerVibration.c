/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_2$$ovrp_SetControllerVibration
ENTRY_POINT: 05699b10
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 105
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_0_1_2__ovrp_SetControllerVibration(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char in_NG;
  char in_OV;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int iVar10;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  int iVar11;
  long *unaff_x23;
  ulong uVar12;
  undefined8 *unaff_x24;
  long unaff_x25;
  long unaff_x27;
  int unaff_w28;
  int unaff_w29;
  undefined8 uVar13;
  undefined8 uVar14;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
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
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined8 in_stack_000000e8;
  
  while (lVar7 = in_stack_00000090, in_NG != in_OV) {
    if ((*(ushort *)(*(long *)(param_1 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    uVar6 = uStack00000000000000b4;
    uVar5 = uStack00000000000000b0;
    uVar4 = uStack00000000000000ac;
    uVar3 = uStack00000000000000a8;
    puVar9 = (undefined8 *)(lVar7 + (long)unaff_w29 * (long)unaff_w28);
    lVar7 = *(long *)(unaff_x22 + 0x10);
    uVar14 = puVar9[1];
    uVar13 = *puVar9;
    *(undefined4 *)(unaff_x27 + 0x24) = *(undefined4 *)(puVar9 + 2);
    *(undefined8 *)(unaff_x27 + 0x1c) = uVar14;
    *(undefined8 *)(unaff_x27 + 0x14) = uVar13;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_0400ff1c(lVar7,uStack00000000000000a4,*unaff_x24);
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
      FUN_063222fc(uVar3,uVar4,uVar5,uVar6);
    }
    unaff_w29 = iStack00000000000000a0 + 1;
    param_1 = *unaff_x23;
    in_OV = SBORROW4(unaff_w29,in_stack_00000098);
    iStack00000000000000a0 = unaff_w29;
    in_NG = unaff_w29 - in_stack_00000098 < 0;
  }
  *(undefined8 *)(unaff_x25 + 0x1c) = 0;
  *(undefined8 *)(unaff_x25 + 0x14) = 0;
  uStack00000000000000b4 = 0;
  FUN_05119228(&stack0x00000090,*(undefined8 *)System_Collections_Generic_Queue<JobHandle>_TypeInfo)
  ;
  puVar2 = System_Collections_Generic_Queue<LeafPoint>_TypeInfo;
  puVar1 = System_Collections_Generic_Queue<IDataNode>_TypeInfo;
  FUN_0421bff4(&stack0x00000008,unaff_x22 + 0x38,
               *(undefined8 *)UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_TypeInfo
              );
  in_stack_00000070 = in_stack_00000008;
  in_stack_00000008 = 0;
  _iStack0000000000000078 = in_stack_00000010;
  uVar13 = _iStack0000000000000078;
  in_stack_00000088 = (undefined4)in_stack_00000020;
  uStack000000000000008c = (undefined4)((ulong)in_stack_00000020 >> 0x20);
  in_stack_00000080 = (int)in_stack_00000018;
  uStack0000000000000084 = (undefined4)(in_stack_00000018 >> 0x20);
  iStack0000000000000078 = (int)in_stack_00000010;
  iVar10 = iStack0000000000000078;
  in_stack_00000010 = &stack0x00000070;
  _iStack0000000000000078 = uVar13;
  while( true ) {
    lVar7 = in_stack_00000070;
    iVar11 = in_stack_00000080 + 1;
    in_stack_00000080 = iVar11;
    if (iVar10 <= iVar11) break;
    if ((*(ushort *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    uVar12 = *(ulong *)(lVar7 + (long)iVar11 * 8);
    uStack0000000000000084 = (undefined4)uVar12;
    in_stack_00000088 = (undefined4)(uVar12 >> 0x20);
    if (*(long *)(unaff_x22 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_0400ff1c(*(long *)(unaff_x22 + 0x10),uVar12 & 0xffffffff,*unaff_x24);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar8 = FUN_0569af78();
    if ((uVar8 & 1) != 0) {
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_06322274(uVar12 >> 0x20);
    }
    iVar10 = iStack0000000000000078;
  }
  uStack0000000000000084 = 0;
  in_stack_00000088 = 0;
  FUN_05118df0(&stack0x00000070,*(undefined8 *)puVar1);
  puVar2 = System_Collections_Generic_Queue<Node>_TypeInfo;
  puVar1 = System_Collections_Generic_Queue<int>_TypeInfo;
  FUN_0421afa0(&stack0x00000008,unaff_x22 + 0x48,
               *(undefined8 *)UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputDevice>_TypeInfo)
  ;
  in_stack_00000050 = in_stack_00000008;
  in_stack_00000008 = 0;
  _iStack0000000000000058 = in_stack_00000010;
  puVar9 = _iStack0000000000000058;
  in_stack_00000068 = (undefined4)in_stack_00000020;
  uStack000000000000006c = (undefined4)((ulong)in_stack_00000020 >> 0x20);
  in_stack_00000060 = (int)in_stack_00000018;
  uStack0000000000000064 = (undefined4)(in_stack_00000018 >> 0x20);
  iStack0000000000000058 = (int)in_stack_00000010;
  iVar10 = iStack0000000000000058;
  in_stack_00000010 = &stack0x00000050;
  _iStack0000000000000058 = puVar9;
  while( true ) {
    lVar7 = in_stack_00000050;
    iVar11 = in_stack_00000060 + 1;
    in_stack_00000060 = iVar11;
    if (iVar10 <= iVar11) break;
    if ((*(ushort *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    uVar12 = *(ulong *)(lVar7 + (long)iVar11 * 8);
    uStack0000000000000064 = (undefined4)uVar12;
    in_stack_00000068 = (undefined4)(uVar12 >> 0x20);
    if (*(long *)(unaff_x22 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_0400ff1c(*(long *)(unaff_x22 + 0x10),uVar12 & 0xffffffff,*unaff_x24);
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
      FUN_0632223c();
    }
    iVar10 = iStack0000000000000058;
  }
  uStack0000000000000064 = 0;
  in_stack_00000068 = 0;
  FUN_051189e8(&stack0x00000050,*(undefined8 *)puVar1);
  puVar2 = System_Collections_Generic_Queue<MessageEventArgs>_TypeInfo;
  puVar1 = System_Collections_Generic_Queue<IAsyncResult>_TypeInfo;
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
    while (uVar12 = FUN_05118c10(&stack0x00000030,*(undefined8 *)puVar2), (uVar12 & 1) != 0) {
      if (*(long *)(unaff_x22 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_0400ff1c(*(long *)(unaff_x22 + 0x10),in_stack_00000040 & 0xffffffff,*unaff_x24);
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
        FUN_0632237c();
      }
    }
    FUN_05118c0c(&stack0x00000030,*(undefined8 *)puVar1);
  }
  return;
}


