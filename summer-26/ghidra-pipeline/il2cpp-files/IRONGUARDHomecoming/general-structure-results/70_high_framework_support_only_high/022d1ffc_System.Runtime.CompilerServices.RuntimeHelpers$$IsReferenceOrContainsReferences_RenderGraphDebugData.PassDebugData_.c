/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<RenderGraphDebugData.PassDebugData>
ENTRY_POINT: 022d1ffc
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


/* WARNING: Removing unreachable block (ram,0x022d2378) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<RenderGraphDebugData_PassDebugData>
               (void)

{
  byte bVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined4 unaff_w19;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  char unaff_w26;
  int unaff_w28;
  int unaff_w29;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  while (((!(bool)in_ZR ||
          (((unaff_w26 != '\0' && ((int)unaff_x25[0x3b] != unaff_w29)) ||
           (uVar4 = FUN_041f75ac(unaff_x25,&stack0x00000028,&stack0x00000020,0,0), (uVar4 & 1) == 0)
           ))) || (lVar5 = (**(code **)(*unaff_x25 + 0x418))
                                     (uStack0000000000000028,uStack000000000000002c,unaff_x25,
                                      *(undefined8 *)(*unaff_x25 + 0x420)), lVar5 == 0))) {
    do {
      do {
        unaff_w28 = unaff_w28 + -1;
        if (unaff_w28 < 0) {
          unaff_x25 = (long *)0x0;
          goto LAB_022d2070;
        }
        unaff_x25 = (long *)FUN_030f28e4();
      } while (unaff_x25 == (long *)0x0);
      bVar1 = *(byte *)(*unaff_x24 + 0x130);
    } while (*(byte *)(*unaff_x25 + 0x130) < bVar1);
    in_ZR = *(long *)(*(long *)(*unaff_x25 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x24;
  }
LAB_022d2070:
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar2 = (long *)FUN_041e202c(unaff_w19,0,0);
  if (plVar2 == (long *)0x0) {
LAB_022d20e4:
    plVar2 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*unaff_x24 + 0x130);
    if (*(byte *)(*plVar2 + 0x130) < bVar1) goto LAB_022d20e4;
    if (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24) {
      plVar2 = (long *)0x0;
    }
  }
  if (plVar2 == unaff_x25) {
    if (unaff_x25 == (long *)0x0) goto LAB_022d223c;
  }
  else {
    if (plVar2 != (long *)0x0) {
      FUN_041f7574(plVar2,0);
      FUN_041f76d0(plVar2,unaff_w19,0);
    }
    if (unaff_x25 == (long *)0x0) {
LAB_022d223c:
      if ((in_stack_00000008 & 0x100000000) == 0) {
        return;
      }
      FUN_041c5278(in_stack_00000010,0,0);
      return;
    }
    FUN_041f7788(uStack0000000000000028,uStack000000000000002c,unaff_x25,unaff_w19,0);
  }
  if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar2 = (long *)(**(code **)(unaff_x23 + 0x18))
                             (uStack0000000000000028,uStack000000000000002c,0,uStack0000000000000020
                              ,uStack0000000000000024,0,*(undefined8 *)(unaff_x23 + 0x40));
  plVar3 = (long *)(**(code **)(*unaff_x25 + 0x398))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x3a0));
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (**(code **)(*plVar3 + 0x198))(plVar3,plVar2,*(undefined8 *)(*plVar3 + 0x1a0));
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar4 = FUN_041d84e4(plVar2,0);
  if ((uVar4 & 1) != 0) {
    FUN_041c73ec(in_stack_00000010,unaff_x25,0);
  }
  lVar5 = (**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400));
  if (*(int *)(*(long *)Method_System_Char_IsSurrogate__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar6 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsHighSurrogate__);
  if (lVar5 == lVar6) {
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_041e2260(unaff_w19,unaff_x25,0);
  }
  else {
    lVar5 = (**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400));
    if (*(int *)(*(long *)Method_System_Char_IsNumber__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar6 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsLower__);
    if (lVar5 == lVar6) {
      if (*plVar2 != *(long *)Method_System_Char_Parse__) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar2);
      }
      if ((int)plVar2[0x16] == 0) {
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_041e2260(unaff_w19,0,0);
      }
    }
  }
  lVar5 = *plVar2;
  uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar4 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar7 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_022d2314;
      }
      uVar4 = uVar4 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar4 != 0);
  }
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar2,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_022d2314:
  (*(code *)*puVar7)(plVar2,puVar7[1]);
  return;
}


