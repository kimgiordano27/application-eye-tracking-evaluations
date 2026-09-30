/*
FUNCTION_NAME: Unity.Services.Matchmaker.Http.HttpClientResponse$$get_StatusCode
ENTRY_POINT: 05f83cbc
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

undefined8 Unity_Services_Matchmaker_Http_HttpClientResponse__get_StatusCode(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  int *piVar6;
  long unaff_x19;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x24;
  long *unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  undefined1 auVar12 [16];
  undefined4 in_stack_00000038;
  long in_stack_000001d0;
  long *in_stack_000001d8;
  
  puVar1 = Method_UnityEngine_Events_UnityEvent<Vector3>__ctor__;
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
  FUN_06358a58(lVar8,**(undefined8 **)(*(long *)puVar1 + 0xb8),0);
  uVar10 = *(undefined8 *)(unaff_x19 + 0x48);
  uVar11 = *(undefined8 *)(unaff_x19 + 0x50);
  if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<float>__ctor__ + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  auVar12 = FUN_05f82524(in_stack_000001d8,uVar10,uVar11,3);
  if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined1 (*) [16])(in_stack_000001d0 + 0x38) = auVar12;
  if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(long *)(in_stack_000001d0 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar2 = FUN_06357f20(*(long *)(in_stack_000001d0 + 0x10),
                       *(undefined8 *)
                        Method_UnityEngine_Events_UnityEvent<OVRSpatialAnchor_OperationResult>_Invoke__
                       ,0);
  *(undefined4 *)(in_stack_000001d0 + 0x18) = uVar2;
  puVar1 = PTR_DAT_06a0d728;
  if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined4 *)(in_stack_000001d0 + 0x1c) = *(undefined4 *)(unaff_x19 + 0xac);
  uVar2 = *(undefined4 *)(unaff_x19 + 0xa4);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar3 = FUN_05f9fc2c(uVar2,8,0);
  lVar8 = FUN_05f9fc2c(*(undefined4 *)(unaff_x19 + 0xa8),in_stack_00000038,0);
  *(ulong *)(in_stack_000001d0 + 0x20) = uVar3 & 0xffffffff | lVar8 << 0x20;
  if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar10 = *(undefined8 *)(unaff_x27 + 0x248);
  uVar11 = *(undefined8 *)(unaff_x27 + 0x250);
  if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<float>__ctor__ + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  auVar12 = FUN_05f82524(in_stack_000001d8,uVar10,uVar11,1);
  if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined1 (*) [16])(in_stack_000001d0 + 0x48) = auVar12;
  if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  auVar12 = FUN_05f82524(in_stack_000001d8,*(undefined8 *)(unaff_x24 + 0x58),
                         *(undefined8 *)(unaff_x24 + 0x60),1);
  if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined1 (*) [16])(in_stack_000001d0 + 0x58) = auVar12;
  auVar12 = FUN_05fae204();
  auVar12 = FUN_05f82524(in_stack_000001d8,auVar12._0_8_,auVar12._8_8_,1);
  if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined1 (*) [16])(in_stack_000001d0 + 0x68) = auVar12;
  auVar12 = FUN_05fae204();
  auVar12 = FUN_05f82524(in_stack_000001d8,auVar12._0_8_,auVar12._8_8_,1);
  if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined1 (*) [16])(in_stack_000001d0 + 0x78) = auVar12;
  auVar12 = FUN_05fae204();
  auVar12 = FUN_05f82524(in_stack_000001d8,auVar12._0_8_,auVar12._8_8_,1);
  if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined1 (*) [16])(in_stack_000001d0 + 0x88) = auVar12;
  auVar12 = FUN_05fae204();
  auVar12 = FUN_05f82524(in_stack_000001d8,auVar12._0_8_,auVar12._8_8_,6);
  if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined1 (*) [16])(in_stack_000001d0 + 0x98) = auVar12;
  auVar12 = FUN_05f82524(in_stack_000001d8,*(undefined8 *)(unaff_x19 + 0x58),
                         *(undefined8 *)(unaff_x19 + 0x60),6);
  if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar8 = *unaff_x28;
  *(undefined1 (*) [16])(in_stack_000001d0 + 0xa8) = auVar12;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar8 = *unaff_x28;
  }
  puVar5 = *(undefined8 **)(lVar8 + 0xb8);
  lVar7 = puVar5[3];
  if (lVar7 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      puVar5 = *(undefined8 **)(*unaff_x28 + 0xb8);
    }
    uVar10 = *puVar5;
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_UnityEngine_Events_UnityEvent<string>_AddListener__);
    FUN_04444ef4(lVar7,uVar10,*(undefined8 *)Method_UnityEngine_Events_UnityEvent<Vector4>_Invoke__,
                 0);
    plVar4 = (long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
    *plVar4 = lVar7;
    LeanTween__value(plVar4,lVar7);
  }
  if (in_stack_000001d8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar8 = *in_stack_000001d8;
  lVar9 = *(long *)Method_UnityEngine_Events_UnityEvent<TeleportingEventArgs>_Invoke__;
  uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar3 != 0) {
    piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)(lVar9 + 0x20)) {
        lVar8 = lVar8 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
        goto LAB_05f83ff4;
      }
      uVar3 = uVar3 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar3 != 0);
  }
  lVar8 = FUN_02dd004c(in_stack_000001d8);
LAB_05f83ff4:
  lVar8 = thunk_FUN_02db5310(*(undefined8 *)(lVar8 + 8),lVar9);
  (**(code **)(lVar8 + 8))(in_stack_000001d8,lVar7,lVar8);
  if (in_stack_000001d8 != (long *)0x0) {
    lVar8 = *in_stack_000001d8;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05f84078;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_02dd004c(in_stack_000001d8,*unaff_x26,0);
LAB_05f84078:
    (*(code *)*puVar5)(in_stack_000001d8,puVar5[1]);
  }
  if (in_stack_000001d0 != 0) {
    return *(undefined8 *)(in_stack_000001d0 + 0xa8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


