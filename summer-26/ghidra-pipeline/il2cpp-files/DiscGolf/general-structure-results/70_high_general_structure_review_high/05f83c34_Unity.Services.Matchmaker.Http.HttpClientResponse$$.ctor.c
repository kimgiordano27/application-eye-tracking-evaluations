/*
FUNCTION_NAME: Unity.Services.Matchmaker.Http.HttpClientResponse$$.ctor
ENTRY_POINT: 05f83c34
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x05f84090) */
/* WARNING: Removing unreachable block (ram,0x05f84180) */

undefined8 Unity_Services_Matchmaker_Http_HttpClientResponse___ctor(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x24;
  long *unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  undefined1 auVar13 [16];
  undefined4 in_stack_00000038;
  long in_stack_000001d0;
  long *in_stack_000001d8;
  
  if (*(char *)(param_1 + 0x286) == '\0') {
    FUN_02d965b8(PTR_DAT_06a0f5d8);
    DAT_06dc4286 = 1;
  }
  iVar1 = (uint)*(ushort *)(unaff_x19 + 0x4a) << 0x10;
  if (*(ushort *)(unaff_x19 + 0x4a) != 0) {
    lVar4 = *(long *)PTR_DAT_06a0f5d8;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar4 = *(long *)PTR_DAT_06a0f5d8;
    }
    piVar7 = *(int **)(lVar4 + 0xb8);
    if (iVar1 != *piVar7) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        piVar7 = *(int **)(*(long *)PTR_DAT_06a0f5d8 + 0xb8);
      }
      if (iVar1 != piVar7[1]) goto LAB_05f83d38;
    }
    puVar2 = Method_UnityEngine_Events_UnityEvent<Vector3>__ctor__;
    if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar4 = *(long *)(in_stack_000001d0 + 0x10);
    if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<Vector3>__ctor__ + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_06358a58(lVar4,**(undefined8 **)(*(long *)puVar2 + 0xb8),0);
    uVar11 = *(undefined8 *)(unaff_x19 + 0x48);
    uVar12 = *(undefined8 *)(unaff_x19 + 0x50);
    if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<float>__ctor__ + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    auVar13 = FUN_05f82524(in_stack_000001d8,uVar11,uVar12,3);
    if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    *(undefined1 (*) [16])(in_stack_000001d0 + 0x38) = auVar13;
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
  uVar5 = FUN_05f9fc2c(uVar3,8,0);
  lVar4 = FUN_05f9fc2c(*(undefined4 *)(unaff_x19 + 0xa8),in_stack_00000038,0);
  *(ulong *)(in_stack_000001d0 + 0x20) = uVar5 & 0xffffffff | lVar4 << 0x20;
  if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar11 = *(undefined8 *)(unaff_x27 + 0x248);
  uVar12 = *(undefined8 *)(unaff_x27 + 0x250);
  if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<float>__ctor__ + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  auVar13 = FUN_05f82524(in_stack_000001d8,uVar11,uVar12,1);
  if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined1 (*) [16])(in_stack_000001d0 + 0x48) = auVar13;
  if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  auVar13 = FUN_05f82524(in_stack_000001d8,*(undefined8 *)(unaff_x24 + 0x58),
                         *(undefined8 *)(unaff_x24 + 0x60),1);
  if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined1 (*) [16])(in_stack_000001d0 + 0x58) = auVar13;
  auVar13 = FUN_05fae204();
  auVar13 = FUN_05f82524(in_stack_000001d8,auVar13._0_8_,auVar13._8_8_,1);
  if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined1 (*) [16])(in_stack_000001d0 + 0x68) = auVar13;
  auVar13 = FUN_05fae204();
  auVar13 = FUN_05f82524(in_stack_000001d8,auVar13._0_8_,auVar13._8_8_,1);
  if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined1 (*) [16])(in_stack_000001d0 + 0x78) = auVar13;
  auVar13 = FUN_05fae204();
  auVar13 = FUN_05f82524(in_stack_000001d8,auVar13._0_8_,auVar13._8_8_,1);
  if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined1 (*) [16])(in_stack_000001d0 + 0x88) = auVar13;
  auVar13 = FUN_05fae204();
  auVar13 = FUN_05f82524(in_stack_000001d8,auVar13._0_8_,auVar13._8_8_,6);
  if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined1 (*) [16])(in_stack_000001d0 + 0x98) = auVar13;
  auVar13 = FUN_05f82524(in_stack_000001d8,*(undefined8 *)(unaff_x19 + 0x58),
                         *(undefined8 *)(unaff_x19 + 0x60),6);
  if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar4 = *unaff_x28;
  *(undefined1 (*) [16])(in_stack_000001d0 + 0xa8) = auVar13;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar4 = *unaff_x28;
  }
  puVar8 = *(undefined8 **)(lVar4 + 0xb8);
  lVar9 = puVar8[3];
  if (lVar9 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      puVar8 = *(undefined8 **)(*unaff_x28 + 0xb8);
    }
    uVar11 = *puVar8;
    lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_UnityEngine_Events_UnityEvent<string>_AddListener__);
    FUN_04444ef4(lVar9,uVar11,*(undefined8 *)Method_UnityEngine_Events_UnityEvent<Vector4>_Invoke__,
                 0);
    plVar6 = (long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
    *plVar6 = lVar9;
    LeanTween__value(plVar6,lVar9);
  }
  if (in_stack_000001d8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar4 = *in_stack_000001d8;
  lVar10 = *(long *)Method_UnityEngine_Events_UnityEvent<TeleportingEventArgs>_Invoke__;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)(lVar10 + 0x20)) {
        lVar4 = lVar4 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 + 0x138;
        goto LAB_05f83ff4;
      }
      uVar5 = uVar5 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar5 != 0);
  }
  lVar4 = FUN_02dd004c(in_stack_000001d8);
LAB_05f83ff4:
  lVar4 = thunk_FUN_02db5310(*(undefined8 *)(lVar4 + 8),lVar10);
  (**(code **)(lVar4 + 8))(in_stack_000001d8,lVar9,lVar4);
  if (in_stack_000001d8 != (long *)0x0) {
    lVar4 = *in_stack_000001d8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x26) {
          puVar8 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05f84078;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)FUN_02dd004c(in_stack_000001d8,*unaff_x26,0);
LAB_05f84078:
    (*(code *)*puVar8)(in_stack_000001d8,puVar8[1]);
  }
  if (in_stack_000001d0 != 0) {
    return *(undefined8 *)(in_stack_000001d0 + 0xa8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


