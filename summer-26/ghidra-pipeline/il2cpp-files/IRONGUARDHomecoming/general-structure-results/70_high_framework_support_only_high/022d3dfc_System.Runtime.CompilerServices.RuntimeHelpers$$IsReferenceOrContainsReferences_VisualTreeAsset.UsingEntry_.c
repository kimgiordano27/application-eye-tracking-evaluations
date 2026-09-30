/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<VisualTreeAsset.UsingEntry>
ENTRY_POINT: 022d3dfc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022d4204) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<VisualTreeAsset_UsingEntry>
               (long param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined1 in_CY;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long in_x9;
  ulong in_x10;
  int *piVar8;
  undefined4 unaff_w19;
  int unaff_w20;
  int unaff_w21;
  undefined8 *puVar9;
  long *plVar10;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x25;
  void *unaff_x26;
  long lVar11;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar12;
  undefined8 uVar13;
  
  while ((((!(bool)in_CY || (*(long *)(*(long *)(in_x9 + 200) + in_x10 * 8 + -8) != param_1)) ||
          (((*(ulong *)(unaff_x29 + -0x90) & 0xff) != 0 && ((int)unaff_x25[0x3b] != unaff_w20)))) ||
         ((uVar6 = FUN_041f75ac(unaff_x25,unaff_x29 + -0x80,unaff_x29 + -0x88,0,0), (uVar6 & 1) == 0
          || (lVar11 = (**(code **)(*unaff_x25 + 0x418))
                                 (*(undefined4 *)(unaff_x29 + -0x80),
                                  *(undefined4 *)(unaff_x29 + -0x7c),unaff_x25,
                                  *(undefined8 *)(*unaff_x25 + 0x420)), lVar11 == 0))))) {
    do {
      unaff_w21 = unaff_w21 + -1;
      if (unaff_w21 < 0) {
        unaff_x25 = (long *)0x0;
        goto LAB_022d3e88;
      }
      unaff_x25 = (long *)FUN_030f28e4();
    } while (unaff_x25 == (long *)0x0);
    in_x9 = *unaff_x25;
    param_1 = *unaff_x22;
    in_x10 = (ulong)*(byte *)(param_1 + 0x130);
    in_CY = *(byte *)(param_1 + 0x130) <= *(byte *)(in_x9 + 0x130);
  }
LAB_022d3e88:
  puVar3 = Method_System_Char_IsUpper__;
  lVar11 = *(long *)(unaff_x29 + -0xb8);
  if (*(int *)(*(long *)Method_System_Char_IsUpper__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar4 = (long *)FUN_041e202c(unaff_w19,0,0);
  if (plVar4 == (long *)0x0) {
LAB_022d3f1c:
    plVar4 = (long *)0x0;
  }
  else {
    bVar2 = *(byte *)(*unaff_x22 + 0x130);
    if (*(byte *)(*plVar4 + 0x130) < bVar2) goto LAB_022d3f1c;
    if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x22) {
      plVar4 = (long *)0x0;
    }
  }
  if (plVar4 == unaff_x25) {
    if (unaff_x25 == (long *)0x0) goto LAB_022d40b8;
  }
  else {
    if (plVar4 != (long *)0x0) {
      FUN_041f7574(plVar4,0);
      FUN_041f76d0(plVar4,unaff_w19,0);
    }
    if (unaff_x25 == (long *)0x0) {
LAB_022d40b8:
      if ((*(uint *)(unaff_x29 + -0xac) & 1) != 0) {
        FUN_041c5278(*(undefined8 *)(unaff_x29 + -0xa8),0,0);
      }
      goto LAB_022d41a0;
    }
    FUN_041f7788(*(undefined4 *)(unaff_x29 + -0x80),*(undefined4 *)(unaff_x29 + -0x7c),unaff_x25,
                 unaff_w19,0);
  }
  lVar11 = *(long *)(lVar11 + 0x38);
  puVar9 = *(undefined8 **)(unaff_x29 + -0x98);
  uVar12 = *(undefined8 *)(unaff_x29 + -0x88);
  uVar13 = *(undefined8 *)(unaff_x29 + -0x80);
  if (-1 < *(int *)(*(long *)(lVar11 + 8) + 0x28)) {
    unaff_x26 = (void *)(unaff_x29 + -0x78);
  }
  memcpy(puVar9,unaff_x26,*(size_t *)(unaff_x29 + -0xa0));
  if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  puVar1 = *(undefined8 **)(lVar11 + 0x10);
  uVar5 = *puVar1;
  if (-1 < *(int *)(*(long *)(lVar11 + 8) + 0x28)) {
    puVar9 = (undefined8 *)*puVar9;
  }
  *(undefined8 *)(unaff_x29 + -0x40) = uVar13;
  *(undefined4 *)(unaff_x29 + -0x38) = 0;
  *(undefined8 *)(unaff_x29 + -0x50) = uVar12;
  *(undefined4 *)(unaff_x29 + -0x48) = 0;
  *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x40;
  *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x50;
  *(undefined8 **)(unaff_x29 + -0x60) = puVar9;
  (*(code *)puVar1[2])(uVar5);
  plVar10 = *(long **)(unaff_x29 + -0x58);
  plVar4 = (long *)(**(code **)(*unaff_x25 + 0x398))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x3a0));
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (**(code **)(*plVar4 + 0x198))(plVar4,plVar10,*(undefined8 *)(*plVar4 + 0x1a0));
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar6 = FUN_041d84e4(plVar10,0);
  if ((uVar6 & 1) != 0) {
    FUN_041c73ec(*(undefined8 *)(unaff_x29 + -0xa8),unaff_x25,0);
  }
  lVar11 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
  if (*(int *)(*(long *)Method_System_Char_IsSurrogate__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar7 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsHighSurrogate__);
  if (lVar11 == lVar7) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_041e2260(unaff_w19,unaff_x25,0);
  }
  else {
    lVar11 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
    if (*(int *)(*(long *)Method_System_Char_IsNumber__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar7 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsLower__);
    if (lVar11 == lVar7) {
      if (*plVar10 != *(long *)Method_System_Char_Parse__) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar10);
      }
      if ((int)plVar10[0x16] == 0) {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_041e2260(unaff_w19,0,0);
      }
    }
  }
  lVar11 = *plVar10;
  uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar9 = (undefined8 *)(lVar11 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_022d4190;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar6 != 0);
  }
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar10,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_022d4190:
  (*(code *)*puVar9)(plVar10,puVar9[1]);
LAB_022d41a0:
  if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -0x30)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


