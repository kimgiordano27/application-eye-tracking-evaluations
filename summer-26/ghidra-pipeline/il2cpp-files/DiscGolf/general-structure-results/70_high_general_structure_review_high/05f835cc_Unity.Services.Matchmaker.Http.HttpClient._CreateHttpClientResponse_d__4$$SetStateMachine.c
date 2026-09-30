/*
FUNCTION_NAME: Unity.Services.Matchmaker.Http.HttpClient.<CreateHttpClientResponse>d__4$$SetStateMachine
ENTRY_POINT: 05f835cc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x05f84090) */
/* WARNING: Removing unreachable block (ram,0x05f83a64) */
/* WARNING: Removing unreachable block (ram,0x05f84180) */
/* WARNING: Removing unreachable block (ram,0x05f84120) */

undefined8
Unity_Services_Matchmaker_Http_HttpClient_<CreateHttpClientResponse>d__4__SetStateMachine(void)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  int in_w8;
  int *piVar9;
  undefined8 *puVar10;
  long unaff_x19;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined4 unaff_w24;
  undefined8 uVar14;
  long *unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  undefined1 auVar15 [16];
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  int iStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  undefined8 in_stack_000000e0;
  undefined8 *in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
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
  long in_stack_000001d0;
  long *in_stack_000001d8;
  long in_stack_000001e0;
  long *in_stack_000001e8;
  
  if (in_w8 == 0) {
    FUN_02d965b8(PTR_DAT_06a0f5d8);
    DAT_06dc4285 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_06a0f5d8 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (DAT_06dc4286 == '\0') {
    FUN_02d965b8(PTR_DAT_06a0f5d8);
                    /* try { // try from 05f83620 to 06083623 has its CatchHandler @ 05f83644 */
    DAT_06dc4286 = '\x01';
  }
                    /* try { // try from 05f83624 to 0608362f has its CatchHandler @ 05f831a0 */
  iVar1 = (uint)*(ushort *)(unaff_x19 + 0x4a) << 0x10;
  if (*(ushort *)(unaff_x19 + 0x4a) != 0) {
                    /* try { // try from 05f83630 to 06083633 has its CatchHandler @ 05f8363c */
                    /* try { // try from 05f83634 to 0608366f has its CatchHandler @ 05f831a0 */
    lVar4 = *(long *)PTR_DAT_06a0f5d8;
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05f83630 with catch @ 05f8363c
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05f83510 with catch @ 05f83640
                        */
    if (*(int *)(lVar4 + 0xe4) == 0) {
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05f83620 with catch @ 05f83644
                        */
      thunk_FUN_02df485c();
      lVar4 = *(long *)PTR_DAT_06a0f5d8;
    }
    piVar9 = *(int **)(lVar4 + 0xb8);
    if (iVar1 != *piVar9) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        piVar9 = *(int **)(*(long *)PTR_DAT_06a0f5d8 + 0xb8);
      }
      if (iVar1 != piVar9[1]) goto LAB_05f83708;
    }
    puVar2 = Method_UnityEngine_Events_UnityEvent<Vector3>__ctor__;
    if (in_stack_000001e0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar4 = *(long *)(in_stack_000001e0 + 0x10);
    if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<Vector3>__ctor__ + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_06358a58(lVar4,**(undefined8 **)(*(long *)puVar2 + 0xb8),0);
    plVar11 = in_stack_000001e8;
    lVar4 = in_stack_000001e0;
    uVar13 = *(undefined8 *)(unaff_x19 + 0x48);
    uVar14 = *(undefined8 *)(unaff_x19 + 0x50);
    if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<float>__ctor__ + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    auVar15 = FUN_05f82524(plVar11,uVar13,uVar14,3);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    *(undefined1 (*) [16])(lVar4 + 0x38) = auVar15;
  }
LAB_05f83708:
  lVar4 = in_stack_000001e0;
  if (in_stack_000001e0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(long *)(in_stack_000001e0 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar3 = FUN_06357f20(*(long *)(in_stack_000001e0 + 0x10),
                       *(undefined8 *)Method_UnityEngine_Events_UnityEvent<XRBaseInteractor>__ctor__
                       ,0);
  lVar12 = in_stack_000001e0;
  *(undefined4 *)(lVar4 + 0x18) = uVar3;
  puVar2 = PTR_DAT_06a0d728;
  if (in_stack_000001e0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined4 *)(in_stack_000001e0 + 0x1c) = *(undefined4 *)(unaff_x19 + 0xac);
  uVar3 = *(undefined4 *)(unaff_x19 + 0x94);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar5 = FUN_05f9fc2c(uVar3,8,0);
  lVar6 = FUN_05f9fc2c(*(undefined4 *)(unaff_x19 + 0x98),uStack0000000000000038,0);
  plVar11 = in_stack_000001e8;
  lVar4 = in_stack_000001e0;
  *(ulong *)(lVar12 + 0x20) = uVar5 & 0xffffffff | lVar6 << 0x20;
  if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar13 = *(undefined8 *)(unaff_x27 + 600);
  uVar14 = *(undefined8 *)(unaff_x27 + 0x260);
  if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<float>__ctor__ + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  auVar15 = FUN_05f82524(plVar11,uVar13,uVar14,1);
  plVar11 = in_stack_000001e8;
  lVar12 = in_stack_000001e0;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined1 (*) [16])(lVar4 + 0x48) = auVar15;
  in_stack_000000e8 = (undefined8 *)0x0;
  in_stack_000000e0 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_00000118 = 0;
  in_stack_00000110 = 0;
  in_stack_00000128 = 0;
  in_stack_00000120 = 0;
  in_stack_00000138 = 0;
  in_stack_00000130 = 0;
  in_stack_00000148 = 0;
  in_stack_00000140 = 0;
  in_stack_00000158 = 0;
  in_stack_00000150 = 0;
  FUN_05fcd534(&stack0x000000e0,unaff_w24,in_stack_00000030,*(undefined1 *)(unaff_x19 + 0x70),
               *(undefined1 *)(unaff_x19 + 0x71),0);
  memcpy(&stack0x000001f0,&stack0x000000e0,0x80);
  LeanTween__value(&stack0x00000240);
  auVar15 = FUN_05fb4374();
  auVar15 = FUN_05f82524(plVar11,auVar15._0_8_,auVar15._8_8_,6);
  plVar11 = in_stack_000001e8;
  lVar4 = in_stack_000001e0;
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined1 (*) [16])(lVar12 + 0x58) = auVar15;
  auVar15 = FUN_05fae204();
  auVar15 = FUN_05f82524(plVar11,auVar15._0_8_,auVar15._8_8_,1);
  plVar11 = in_stack_000001e8;
  lVar12 = in_stack_000001e0;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined1 (*) [16])(lVar4 + 0x68) = auVar15;
  auVar15 = FUN_05fae204();
  auVar15 = FUN_05f82524(plVar11,auVar15._0_8_,auVar15._8_8_,6);
  plVar11 = in_stack_000001e8;
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar4 = *unaff_x28;
  *(undefined1 (*) [16])(lVar12 + 0x78) = auVar15;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar4 = *unaff_x28;
  }
  puVar10 = *(undefined8 **)(lVar4 + 0xb8);
  lVar12 = puVar10[2];
  if (lVar12 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      puVar10 = *(undefined8 **)(*unaff_x28 + 0xb8);
    }
    uVar13 = *puVar10;
    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)Method_UnityEngine_Events_UnityEvent<string>__ctor__)
    ;
    FUN_04444ef4(lVar12,uVar13,*(undefined8 *)Method_UnityEngine_Events_UnityEvent<Vector4>__ctor__,
                 0);
    plVar7 = (long *)(*(long *)(*unaff_x28 + 0xb8) + 0x10);
    *plVar7 = lVar12;
    LeanTween__value(plVar7,lVar12);
  }
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar4 = *plVar11;
  lVar6 = *(long *)Method_UnityEngine_Events_UnityEvent<string>_RemoveListener__;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)(lVar6 + 0x20)) {
        lVar4 = lVar4 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
        goto LAB_05f839c8;
      }
      uVar5 = uVar5 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar5 != 0);
  }
  lVar4 = FUN_02dd004c(plVar11);
LAB_05f839c8:
  lVar4 = thunk_FUN_02db5310(*(undefined8 *)(lVar4 + 8),lVar6);
  (**(code **)(lVar4 + 8))(plVar11,lVar12,lVar4);
  plVar11 = in_stack_000001e8;
  lVar4 = in_stack_000001e0;
  if (in_stack_000001e8 != (long *)0x0) {
    lVar12 = *in_stack_000001e8;
    uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05f83a4c;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar10 = (undefined8 *)FUN_02dd004c(in_stack_000001e8,*unaff_x26,0);
LAB_05f83a4c:
    (*(code *)*puVar10)(plVar11,puVar10[1]);
  }
  FUN_037b6164(2,*(undefined8 *)Method_UnityEngine_Events_UnityEvent<UIHoverEventArgs>__ctor__);
  in_stack_000001d8 = (long *)FUN_037fe9f4();
  plVar11 = (long *)Method_UnityEngine_Events_UnityEvent<float>__ctor__;
  in_stack_000000e8 = &stack0x000001d8;
  in_stack_000000e0 = 0;
  if (in_stack_00000058 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined8 *)(in_stack_000001d0 + 0x10) = *(undefined8 *)(in_stack_00000058 + 0x20);
  LeanTween__value();
  if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(long *)(in_stack_000001d0 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  thunk_FUN_06358db8(*(long *)(in_stack_000001d0 + 0x10),0,0);
  puVar2 = Method_UnityEngine_Events_UnityEvent<Vector3>__ctor__;
  if (in_stack_00000050._4_4_ == iStack000000000000003c) {
    if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar12 = *(long *)(in_stack_000001d0 + 0x10);
    if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<Vector3>__ctor__ + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_06358a58(lVar12,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8),0);
    plVar11 = (long *)Method_UnityEngine_Events_UnityEvent<float>__ctor__;
  }
  puVar2 = Method_UnityEngine_Events_UnityEvent<Vector3>__ctor__;
  if (*(char *)(unaff_x19 + 0x71) == '\0') {
    if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar12 = *(long *)(in_stack_000001d0 + 0x10);
    if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<Vector3>__ctor__ + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_06358a58(lVar12,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18),0);
    plVar11 = (long *)Method_UnityEngine_Events_UnityEvent<float>__ctor__;
  }
  plVar7 = in_stack_000001d8;
  lVar12 = in_stack_000001d0;
  if (*(int *)(*plVar11 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  auVar15 = FUN_05f82524(plVar7,in_stack_00000048,in_stack_00000040,1);
  puVar2 = Method_System_Span<FrameTiming>__ctor__;
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined1 (*) [16])(lVar12 + 0x28) = auVar15;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)puVar2);
  }
  if (DAT_06dc4285 == '\0') {
    FUN_02d965b8(PTR_DAT_06a0f5d8);
    DAT_06dc4285 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_06a0f5d8 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (DAT_06dc4286 == '\0') {
    FUN_02d965b8(PTR_DAT_06a0f5d8);
    DAT_06dc4286 = '\x01';
  }
  iVar1 = (uint)*(ushort *)(unaff_x19 + 0x4a) << 0x10;
  if (*(ushort *)(unaff_x19 + 0x4a) != 0) {
    lVar12 = *(long *)PTR_DAT_06a0f5d8;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar12 = *(long *)PTR_DAT_06a0f5d8;
    }
    piVar9 = *(int **)(lVar12 + 0xb8);
    if (iVar1 != *piVar9) {
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        piVar9 = *(int **)(*(long *)PTR_DAT_06a0f5d8 + 0xb8);
      }
      if (iVar1 != piVar9[1]) goto LAB_05f83d38;
    }
    puVar2 = Method_UnityEngine_Events_UnityEvent<Vector3>__ctor__;
    if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar12 = *(long *)(in_stack_000001d0 + 0x10);
    if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<Vector3>__ctor__ + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_06358a58(lVar12,**(undefined8 **)(*(long *)puVar2 + 0xb8),0);
    plVar11 = in_stack_000001d8;
    lVar12 = in_stack_000001d0;
    uVar13 = *(undefined8 *)(unaff_x19 + 0x48);
    uVar14 = *(undefined8 *)(unaff_x19 + 0x50);
    if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<float>__ctor__ + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    auVar15 = FUN_05f82524(plVar11,uVar13,uVar14,3);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    *(undefined1 (*) [16])(lVar12 + 0x38) = auVar15;
  }
LAB_05f83d38:
  lVar12 = in_stack_000001d0;
  if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(long *)(in_stack_000001d0 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar3 = FUN_06357f20(*(long *)(in_stack_000001d0 + 0x10),
                       *(undefined8 *)
                        Method_UnityEngine_Events_UnityEvent<OVRSpatialAnchor_OperationResult>_Invoke__
                       ,0);
  lVar6 = in_stack_000001d0;
  *(undefined4 *)(lVar12 + 0x18) = uVar3;
  puVar2 = PTR_DAT_06a0d728;
  if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined4 *)(in_stack_000001d0 + 0x1c) = *(undefined4 *)(unaff_x19 + 0xac);
  uVar3 = *(undefined4 *)(unaff_x19 + 0xa4);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar5 = FUN_05f9fc2c(uVar3,8,0);
  lVar8 = FUN_05f9fc2c(*(undefined4 *)(unaff_x19 + 0xa8),uStack0000000000000038,0);
  plVar11 = in_stack_000001d8;
  lVar12 = in_stack_000001d0;
  *(ulong *)(lVar6 + 0x20) = uVar5 & 0xffffffff | lVar8 << 0x20;
  if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar13 = *(undefined8 *)(unaff_x27 + 0x248);
  uVar14 = *(undefined8 *)(unaff_x27 + 0x250);
  if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<float>__ctor__ + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  auVar15 = FUN_05f82524(plVar11,uVar13,uVar14,1);
  lVar6 = in_stack_000001d0;
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined1 (*) [16])(lVar12 + 0x48) = auVar15;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  auVar15 = FUN_05f82524(in_stack_000001d8,*(undefined8 *)(lVar4 + 0x58),
                         *(undefined8 *)(lVar4 + 0x60),1);
  plVar11 = in_stack_000001d8;
  lVar4 = in_stack_000001d0;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined1 (*) [16])(lVar6 + 0x58) = auVar15;
  auVar15 = FUN_05fae204();
  auVar15 = FUN_05f82524(plVar11,auVar15._0_8_,auVar15._8_8_,1);
  plVar11 = in_stack_000001d8;
  lVar12 = in_stack_000001d0;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined1 (*) [16])(lVar4 + 0x68) = auVar15;
  auVar15 = FUN_05fae204();
  auVar15 = FUN_05f82524(plVar11,auVar15._0_8_,auVar15._8_8_,1);
  plVar11 = in_stack_000001d8;
  lVar4 = in_stack_000001d0;
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined1 (*) [16])(lVar12 + 0x78) = auVar15;
  auVar15 = FUN_05fae204();
  auVar15 = FUN_05f82524(plVar11,auVar15._0_8_,auVar15._8_8_,1);
  plVar11 = in_stack_000001d8;
  lVar12 = in_stack_000001d0;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined1 (*) [16])(lVar4 + 0x88) = auVar15;
  auVar15 = FUN_05fae204();
  auVar15 = FUN_05f82524(plVar11,auVar15._0_8_,auVar15._8_8_,6);
  lVar4 = in_stack_000001d0;
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined1 (*) [16])(lVar12 + 0x98) = auVar15;
  auVar15 = FUN_05f82524(in_stack_000001d8,*(undefined8 *)(unaff_x19 + 0x58),
                         *(undefined8 *)(unaff_x19 + 0x60),6);
  plVar11 = in_stack_000001d8;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar12 = *unaff_x28;
  *(undefined1 (*) [16])(lVar4 + 0xa8) = auVar15;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar12 = *unaff_x28;
  }
  puVar10 = *(undefined8 **)(lVar12 + 0xb8);
  lVar4 = puVar10[3];
  if (lVar4 == 0) {
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      puVar10 = *(undefined8 **)(*unaff_x28 + 0xb8);
    }
    uVar13 = *puVar10;
    lVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_UnityEngine_Events_UnityEvent<string>_AddListener__);
    FUN_04444ef4(lVar4,uVar13,*(undefined8 *)Method_UnityEngine_Events_UnityEvent<Vector4>_Invoke__,
                 0);
    plVar7 = (long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
    *plVar7 = lVar4;
    LeanTween__value(plVar7,lVar4);
  }
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar12 = *plVar11;
  lVar6 = *(long *)Method_UnityEngine_Events_UnityEvent<TeleportingEventArgs>_Invoke__;
  uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar5 != 0) {
    piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)(lVar6 + 0x20)) {
        lVar12 = lVar12 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
        goto LAB_05f83ff4;
      }
      uVar5 = uVar5 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar5 != 0);
  }
  lVar12 = FUN_02dd004c(plVar11);
LAB_05f83ff4:
  lVar12 = thunk_FUN_02db5310(*(undefined8 *)(lVar12 + 8),lVar6);
  (**(code **)(lVar12 + 8))(plVar11,lVar4,lVar12);
  plVar11 = in_stack_000001d8;
  lVar4 = in_stack_000001d0;
  if (in_stack_000001d8 != (long *)0x0) {
    lVar12 = *in_stack_000001d8;
    uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05f84078;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar10 = (undefined8 *)FUN_02dd004c(in_stack_000001d8,*unaff_x26,0);
LAB_05f84078:
    (*(code *)*puVar10)(plVar11,puVar10[1]);
  }
  if (lVar4 != 0) {
    return *(undefined8 *)(lVar4 + 0xa8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


