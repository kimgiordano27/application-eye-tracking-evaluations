/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<VisualTreeAsset.UxmlObjectEntry>
ENTRY_POINT: 022d3efc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022d4204) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<VisualTreeAsset_UxmlObjectEntry>
               (void)

{
  undefined8 *puVar1;
  byte bVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  undefined4 unaff_w19;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  undefined8 uVar11;
  undefined8 uVar12;
  
  plVar3 = (long *)FUN_041e202c();
  if (plVar3 == (long *)0x0) {
LAB_022d3f1c:
    plVar3 = (long *)0x0;
  }
  else {
    bVar2 = *(byte *)(*unaff_x22 + 0x130);
    if (*(byte *)(*plVar3 + 0x130) < bVar2) goto LAB_022d3f1c;
    if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x22) {
      plVar3 = (long *)0x0;
    }
  }
  if (plVar3 == unaff_x25) {
    if (unaff_x25 == (long *)0x0) goto LAB_022d40b8;
  }
  else {
    if (plVar3 != (long *)0x0) {
      FUN_041f7574(plVar3,0);
      FUN_041f76d0(plVar3,unaff_w19,0);
    }
    if (unaff_x25 == (long *)0x0) {
LAB_022d40b8:
      if ((*(uint *)(unaff_x29 + -0xac) & 1) != 0) {
        FUN_041c5278(*(undefined8 *)(unaff_x29 + -0xa8),0,0);
      }
      goto LAB_022d41a0;
    }
    FUN_041f7788(*(undefined4 *)(unaff_x29 + -0x80),*(undefined4 *)(unaff_x29 + -0x7c));
  }
  lVar8 = *(long *)(unaff_x26 + 0x38);
  puVar9 = *(undefined8 **)(unaff_x29 + -0x98);
  uVar11 = *(undefined8 *)(unaff_x29 + -0x88);
  uVar12 = *(undefined8 *)(unaff_x29 + -0x80);
  if (-1 < *(int *)(*(long *)(lVar8 + 8) + 0x28)) {
    unaff_x28 = (void *)(unaff_x29 + -0x78);
  }
  memcpy(puVar9,unaff_x28,*(size_t *)(unaff_x29 + -0xa0));
  if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  puVar1 = *(undefined8 **)(lVar8 + 0x10);
  uVar4 = *puVar1;
  if (-1 < *(int *)(*(long *)(lVar8 + 8) + 0x28)) {
    puVar9 = (undefined8 *)*puVar9;
  }
  *(undefined8 *)(unaff_x29 + -0x40) = uVar12;
  *(undefined4 *)(unaff_x29 + -0x38) = 0;
  *(undefined8 *)(unaff_x29 + -0x50) = uVar11;
  *(undefined4 *)(unaff_x29 + -0x48) = 0;
  *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x40;
  *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x50;
  *(undefined8 **)(unaff_x29 + -0x60) = puVar9;
  (*(code *)puVar1[2])(uVar4);
  plVar10 = *(long **)(unaff_x29 + -0x58);
  plVar3 = (long *)(**(code **)(*unaff_x25 + 0x398))();
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (**(code **)(*plVar3 + 0x198))(plVar3,plVar10,*(undefined8 *)(*plVar3 + 0x1a0));
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar5 = FUN_041d84e4(plVar10,0);
  if ((uVar5 & 1) != 0) {
    FUN_041c73ec(*(undefined8 *)(unaff_x29 + -0xa8));
  }
  lVar8 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
  if (*(int *)(*(long *)Method_System_Char_IsSurrogate__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar6 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsHighSurrogate__);
  if (lVar8 == lVar6) {
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_041e2260(unaff_w19);
  }
  else {
    lVar8 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
    if (*(int *)(*(long *)Method_System_Char_IsNumber__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar6 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsLower__);
    if (lVar8 == lVar6) {
      if (*plVar10 != *(long *)Method_System_Char_Parse__) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar10);
      }
      if ((int)plVar10[0x16] == 0) {
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_041e2260(unaff_w19,0,0);
      }
    }
  }
  lVar8 = *plVar10;
  uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar5 != 0) {
    piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar9 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_022d4190;
      }
      uVar5 = uVar5 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar5 != 0);
  }
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar10,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_022d4190:
  (*(code *)*puVar9)(plVar10,puVar9[1]);
LAB_022d41a0:
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -0x30)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


