/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<StyleComplexSelector.PseudoStateData>
ENTRY_POINT: 022d26fc
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


/* WARNING: Removing unreachable block (ram,0x022d2ad4) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<StyleComplexSelector_PseudoStateData>
               (undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  int in_w8;
  int *piVar10;
  undefined4 unaff_w19;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x25;
  int iVar11;
  undefined8 unaff_x28;
  long *unaff_x29;
  ulong in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  puVar2 = Method_System_Char_ConvertToUtf32__;
  iVar11 = in_w8 + -1;
  if (iVar11 < 0) {
    plVar3 = (long *)0x0;
  }
  else {
    do {
      plVar3 = (long *)FUN_030f28e4(param_1,iVar11,*(undefined8 *)puVar2);
      if (plVar3 != (long *)0x0) {
        bVar1 = *(byte *)(*unaff_x29 + 0x130);
        if ((((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
             (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x29)) &&
            (((unaff_x25 & 0xff) == 0 || ((int)plVar3[0x3b] == (int)(unaff_x25 >> 0x20))))) &&
           ((uVar6 = FUN_041f75ac(plVar3,&stack0x00000018,&stack0x00000010,0,0), (uVar6 & 1) != 0 &&
            (lVar7 = (**(code **)(*plVar3 + 0x418))
                               (uStack0000000000000018,uStack000000000000001c,plVar3,
                                *(undefined8 *)(*plVar3 + 0x420)), lVar7 != 0)))) goto LAB_022d280c;
      }
      iVar11 = iVar11 + -1;
    } while (-1 < iVar11);
    plVar3 = (long *)0x0;
  }
LAB_022d280c:
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar4 = (long *)FUN_041e202c(unaff_w19,0,0);
  if (plVar4 == (long *)0x0) {
LAB_022d2848:
    plVar4 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*unaff_x29 + 0x130);
    if (*(byte *)(*plVar4 + 0x130) < bVar1) goto LAB_022d2848;
    if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x29) {
      plVar4 = (long *)0x0;
    }
  }
  if (plVar4 == plVar3) {
    if (plVar3 == (long *)0x0) goto LAB_022d2998;
  }
  else {
    if (plVar4 != (long *)0x0) {
      FUN_041f7574(plVar4,0);
      FUN_041f76d0(plVar4,unaff_w19,0);
    }
    if (plVar3 == (long *)0x0) {
LAB_022d2998:
      if ((in_stack_00000000 & 0x100000000) == 0) {
        return;
      }
      FUN_041c5278(in_stack_00000008,0,0);
      return;
    }
    FUN_041f7788(uStack0000000000000018,uStack000000000000001c,plVar3,unaff_w19,0);
  }
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar4 = (long *)(**(code **)(unaff_x22 + 0x18))
                             (uStack0000000000000018,uStack000000000000001c,0,uStack0000000000000010
                              ,uStack0000000000000014,0,*(undefined8 *)(unaff_x22 + 0x40),unaff_x28,
                              *(undefined8 *)(unaff_x22 + 0x28));
  plVar5 = (long *)(**(code **)(*plVar3 + 0x398))(plVar3,*(undefined8 *)(*plVar3 + 0x3a0));
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (**(code **)(*plVar5 + 0x198))(plVar5,plVar4,*(undefined8 *)(*plVar5 + 0x1a0));
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar6 = FUN_041d84e4(plVar4,0);
  if ((uVar6 & 1) != 0) {
    FUN_041c73ec(in_stack_00000008,plVar3,0);
  }
  lVar7 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
  if (*(int *)(*(long *)Method_System_Char_IsSurrogate__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar8 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsHighSurrogate__);
  if (lVar7 == lVar8) {
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_041e2260(unaff_w19,plVar3,0);
  }
  else {
    lVar7 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
    if (*(int *)(*(long *)Method_System_Char_IsNumber__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar8 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsLower__);
    if (lVar7 == lVar8) {
      if (*plVar4 != *(long *)Method_System_Char_Parse__) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar4);
      }
      if ((int)plVar4[0x16] == 0) {
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_041e2260(unaff_w19,0,0);
      }
    }
  }
  lVar7 = *plVar4;
  uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar6 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar9 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_022d2a70;
      }
      uVar6 = uVar6 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar6 != 0);
  }
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar4,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_022d2a70:
  (*(code *)*puVar9)(plVar4,puVar9[1]);
  return;
}


