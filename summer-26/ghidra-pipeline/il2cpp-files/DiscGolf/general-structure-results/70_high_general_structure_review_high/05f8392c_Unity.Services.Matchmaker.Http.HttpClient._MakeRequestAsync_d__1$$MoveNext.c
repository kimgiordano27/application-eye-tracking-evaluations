/*
FUNCTION_NAME: Unity.Services.Matchmaker.Http.HttpClient.<MakeRequestAsync>d__1$$MoveNext
ENTRY_POINT: 05f8392c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x05f84090) */
/* WARNING: Removing unreachable block (ram,0x05f83a64) */
/* WARNING: Removing unreachable block (ram,0x05f84180) */
/* WARNING: Removing unreachable block (ram,0x05f84120) */

undefined8
Unity_Services_Matchmaker_Http_HttpClient_<MakeRequestAsync>d__1__MoveNext(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  undefined8 *in_x9;
  ulong uVar10;
  long unaff_x19;
  long *unaff_x21;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long *unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  undefined1 auVar14 [16];
  undefined4 uStack0000000000000038;
  int iStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  long in_stack_000001d0;
  long in_stack_000001e0;
  long *in_stack_000001e8;
  
  uVar12 = *param_1;
  uVar4 = thunk_FUN_02dd3144(*in_x9);
  FUN_04444ef4(uVar4,uVar12,*(undefined8 *)Method_UnityEngine_Events_UnityEvent<Vector4>__ctor__,0);
  puVar5 = (undefined8 *)(*(long *)(*unaff_x28 + 0xb8) + 0x10);
  *puVar5 = uVar4;
  LeanTween__value(puVar5,uVar4);
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar8 = *unaff_x21;
  lVar13 = *(long *)Method_UnityEngine_Events_UnityEvent<string>_RemoveListener__;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)(lVar13 + 0x20)) {
        lVar8 = lVar8 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar13 + 0x50)) * 0x10 + 0x138;
        goto LAB_05f839c8;
      }
      uVar10 = uVar10 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar10 != 0);
  }
  lVar8 = FUN_02dd004c();
LAB_05f839c8:
  lVar8 = thunk_FUN_02db5310(*(undefined8 *)(lVar8 + 8),lVar13);
  (**(code **)(lVar8 + 8))();
  if (in_stack_000001e8 != (long *)0x0) {
    lVar8 = *in_stack_000001e8;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05f83a4c;
        }
        uVar10 = uVar10 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_02dd004c(in_stack_000001e8,*unaff_x26,0);
LAB_05f83a4c:
    (*(code *)*puVar5)(in_stack_000001e8,puVar5[1]);
  }
  FUN_037b6164(2,*(undefined8 *)Method_UnityEngine_Events_UnityEvent<UIHoverEventArgs>__ctor__);
  plVar6 = (long *)FUN_037fe9f4();
  plVar7 = (long *)Method_UnityEngine_Events_UnityEvent<float>__ctor__;
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
    lVar8 = *(long *)(in_stack_000001d0 + 0x10);
    if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<Vector3>__ctor__ + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_06358a58(lVar8,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8),0);
    plVar7 = (long *)Method_UnityEngine_Events_UnityEvent<float>__ctor__;
  }
  puVar2 = Method_UnityEngine_Events_UnityEvent<Vector3>__ctor__;
  if (*(char *)(unaff_x19 + 0x71) == '\0') {
    if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar8 = *(long *)(in_stack_000001d0 + 0x10);
    if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<Vector3>__ctor__ + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_06358a58(lVar8,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18),0);
    plVar7 = (long *)Method_UnityEngine_Events_UnityEvent<float>__ctor__;
  }
  if (*(int *)(*plVar7 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  auVar14 = FUN_05f82524(plVar6,in_stack_00000048,in_stack_00000040,1);
  puVar2 = Method_System_Span<FrameTiming>__ctor__;
  if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined1 (*) [16])(in_stack_000001d0 + 0x28) = auVar14;
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
    lVar8 = *(long *)PTR_DAT_06a0f5d8;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar8 = *(long *)PTR_DAT_06a0f5d8;
    }
    piVar9 = *(int **)(lVar8 + 0xb8);
    if (iVar1 != *piVar9) {
      if (*(int *)(lVar8 + 0xe4) == 0) {
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
    lVar8 = *(long *)(in_stack_000001d0 + 0x10);
    if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<Vector3>__ctor__ + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_06358a58(lVar8,**(undefined8 **)(*(long *)puVar2 + 0xb8),0);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x48);
    uVar12 = *(undefined8 *)(unaff_x19 + 0x50);
    if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<float>__ctor__ + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    auVar14 = FUN_05f82524(plVar6,uVar4,uVar12,3);
    if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    *(undefined1 (*) [16])(in_stack_000001d0 + 0x38) = auVar14;
  }
LAB_05f83d38:
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
  *(undefined4 *)(in_stack_000001d0 + 0x18) = uVar3;
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
  uVar10 = FUN_05f9fc2c(uVar3,8,0);
  lVar8 = FUN_05f9fc2c(*(undefined4 *)(unaff_x19 + 0xa8),uStack0000000000000038,0);
  *(ulong *)(in_stack_000001d0 + 0x20) = uVar10 & 0xffffffff | lVar8 << 0x20;
  if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar4 = *(undefined8 *)(unaff_x27 + 0x248);
  uVar12 = *(undefined8 *)(unaff_x27 + 0x250);
  if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<float>__ctor__ + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  auVar14 = FUN_05f82524(plVar6,uVar4,uVar12,1);
  if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined1 (*) [16])(in_stack_000001d0 + 0x48) = auVar14;
  if (in_stack_000001e0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  auVar14 = FUN_05f82524(plVar6,*(undefined8 *)(in_stack_000001e0 + 0x58),
                         *(undefined8 *)(in_stack_000001e0 + 0x60),1);
  if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined1 (*) [16])(in_stack_000001d0 + 0x58) = auVar14;
  auVar14 = FUN_05fae204();
  auVar14 = FUN_05f82524(plVar6,auVar14._0_8_,auVar14._8_8_,1);
  if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined1 (*) [16])(in_stack_000001d0 + 0x68) = auVar14;
  auVar14 = FUN_05fae204();
  auVar14 = FUN_05f82524(plVar6,auVar14._0_8_,auVar14._8_8_,1);
  if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined1 (*) [16])(in_stack_000001d0 + 0x78) = auVar14;
  auVar14 = FUN_05fae204();
  auVar14 = FUN_05f82524(plVar6,auVar14._0_8_,auVar14._8_8_,1);
  if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined1 (*) [16])(in_stack_000001d0 + 0x88) = auVar14;
  auVar14 = FUN_05fae204();
  auVar14 = FUN_05f82524(plVar6,auVar14._0_8_,auVar14._8_8_,6);
  if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined1 (*) [16])(in_stack_000001d0 + 0x98) = auVar14;
  auVar14 = FUN_05f82524(plVar6,*(undefined8 *)(unaff_x19 + 0x58),*(undefined8 *)(unaff_x19 + 0x60),
                         6);
  if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar8 = *unaff_x28;
  *(undefined1 (*) [16])(in_stack_000001d0 + 0xa8) = auVar14;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar8 = *unaff_x28;
  }
  puVar5 = *(undefined8 **)(lVar8 + 0xb8);
  lVar13 = puVar5[3];
  if (lVar13 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      puVar5 = *(undefined8 **)(*unaff_x28 + 0xb8);
    }
    uVar4 = *puVar5;
    lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_Events_UnityEvent<string>_AddListener__);
    FUN_04444ef4(lVar13,uVar4,*(undefined8 *)Method_UnityEngine_Events_UnityEvent<Vector4>_Invoke__,
                 0);
    plVar7 = (long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
    *plVar7 = lVar13;
    LeanTween__value(plVar7,lVar13);
  }
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar8 = *plVar6;
  lVar11 = *(long *)Method_UnityEngine_Events_UnityEvent<TeleportingEventArgs>_Invoke__;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)(lVar11 + 0x20)) {
        lVar8 = lVar8 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar11 + 0x50)) * 0x10 + 0x138;
        goto LAB_05f83ff4;
      }
      uVar10 = uVar10 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar10 != 0);
  }
  lVar8 = FUN_02dd004c(plVar6);
LAB_05f83ff4:
  lVar8 = thunk_FUN_02db5310(*(undefined8 *)(lVar8 + 8),lVar11);
  (**(code **)(lVar8 + 8))(plVar6,lVar13,lVar8);
  if (plVar6 != (long *)0x0) {
    lVar8 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05f84078;
        }
        uVar10 = uVar10 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_02dd004c(plVar6,*unaff_x26,0);
LAB_05f84078:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
  }
  if (in_stack_000001d0 != 0) {
    return *(undefined8 *)(in_stack_000001d0 + 0xa8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


