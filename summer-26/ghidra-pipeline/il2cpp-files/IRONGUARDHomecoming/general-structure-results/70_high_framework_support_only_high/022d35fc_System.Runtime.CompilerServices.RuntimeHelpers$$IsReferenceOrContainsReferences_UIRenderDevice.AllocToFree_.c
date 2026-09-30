/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<UIRenderDevice.AllocToFree>
ENTRY_POINT: 022d35fc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022d39e8) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<UIRenderDevice_AllocToFree>
               (void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined4 unaff_w19;
  void *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 uVar12;
  int unaff_w23;
  code *pcVar13;
  char unaff_w25;
  int unaff_w27;
  long *unaff_x29;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  
  do {
    plVar4 = (long *)FUN_030f28e4();
    if (plVar4 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x29 + 0x130);
      if ((((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x29)) &&
          ((unaff_w25 == '\0' || ((int)plVar4[0x3b] == unaff_w23)))) &&
         ((uVar7 = FUN_041f75ac(plVar4,&stack0x00000070,&stack0x00000068,0,0), (uVar7 & 1) != 0 &&
          (lVar8 = (**(code **)(*plVar4 + 0x418))
                             (uStack0000000000000070,uStack0000000000000074,plVar4,
                              *(undefined8 *)(*plVar4 + 0x420)), lVar8 != 0)))) goto LAB_022d36ac;
    }
    unaff_w27 = unaff_w27 + -1;
  } while (-1 < unaff_w27);
  plVar4 = (long *)0x0;
LAB_022d36ac:
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar5 = (long *)FUN_041e202c(unaff_w19,0,0);
  if (plVar5 == (long *)0x0) {
LAB_022d3728:
    plVar5 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*unaff_x29 + 0x130);
    if (*(byte *)(*plVar5 + 0x130) < bVar1) goto LAB_022d3728;
    if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x29) {
      plVar5 = (long *)0x0;
    }
  }
  if (plVar5 == plVar4) {
    if (plVar4 == (long *)0x0) goto LAB_022d38ac;
  }
  else {
    if (plVar5 != (long *)0x0) {
      FUN_041f7574(plVar5,0);
      FUN_041f76d0(plVar5,unaff_w19,0);
    }
    if (plVar4 == (long *)0x0) {
LAB_022d38ac:
      if ((in_stack_00000010 & 0x100000000) == 0) {
        return;
      }
      FUN_041c5278(in_stack_00000018,0,0);
      return;
    }
    FUN_041f7788(uStack0000000000000070,uStack0000000000000074,plVar4,unaff_w19,0);
  }
  uVar3 = uStack0000000000000070;
  uVar2 = uStack0000000000000068;
  memcpy(&stack0x00000020,unaff_x20,0x44);
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  pcVar13 = *(code **)(unaff_x21 + 0x18);
  uVar12 = *(undefined8 *)(unaff_x21 + 0x40);
  memcpy(&stack0x00000078,&stack0x00000020,0x44);
  plVar5 = (long *)(*pcVar13)(uVar3,uStack0000000000000074,0,uVar2,uStack000000000000006c,0,uVar12,
                              &stack0x00000078,*(undefined8 *)(unaff_x21 + 0x28));
  plVar6 = (long *)(**(code **)(*plVar4 + 0x398))(plVar4,*(undefined8 *)(*plVar4 + 0x3a0));
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (**(code **)(*plVar6 + 0x198))(plVar6,plVar5,*(undefined8 *)(*plVar6 + 0x1a0));
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar7 = FUN_041d84e4(plVar5,0);
  if ((uVar7 & 1) != 0) {
    FUN_041c73ec(in_stack_00000018,plVar4,0);
  }
  lVar8 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
  if (*(int *)(*(long *)Method_System_Char_IsSurrogate__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar9 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsHighSurrogate__);
  if (lVar8 == lVar9) {
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_041e2260(unaff_w19,plVar4,0);
  }
  else {
    lVar8 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
    if (*(int *)(*(long *)Method_System_Char_IsNumber__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar9 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsLower__);
    if (lVar8 == lVar9) {
      if (*plVar5 != *(long *)Method_System_Char_Parse__) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar5);
      }
      if ((int)plVar5[0x16] == 0) {
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_041e2260(unaff_w19,0,0);
      }
    }
  }
  lVar8 = *plVar5;
  uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar7 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar10 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_022d3984;
      }
      uVar7 = uVar7 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar7 != 0);
  }
  puVar10 = (undefined8 *)
            FUN_01ecb238(plVar5,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_022d3984:
  (*(code *)*puVar10)(plVar5,puVar10[1]);
  return;
}


