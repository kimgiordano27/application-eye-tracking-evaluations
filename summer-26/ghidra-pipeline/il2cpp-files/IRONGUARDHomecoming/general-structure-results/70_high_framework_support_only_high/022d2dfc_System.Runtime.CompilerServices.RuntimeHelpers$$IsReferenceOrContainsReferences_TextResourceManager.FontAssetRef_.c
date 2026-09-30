/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<TextResourceManager.FontAssetRef>
ENTRY_POINT: 022d2dfc
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


/* WARNING: Removing unreachable block (ram,0x022d3258) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<TextResourceManager_FontAssetRef>
               (void)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined4 unaff_w19;
  long unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x24;
  ulong unaff_x25;
  long *unaff_x26;
  long *plVar10;
  int iVar11;
  ulong unaff_x28;
  long *unaff_x29;
  ulong extraout_d0;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  uint uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  if (unaff_x24 == (long *)0x0) {
LAB_022d2e2c:
    if (*(int *)(*(long *)Method_System_Char_GetUnicodeCategory__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar3 = FUN_0424f664(0);
    puVar2 = Method_System_Char_ConvertToUtf32__;
    uVar6 = extraout_d0;
    if (lVar3 == 0) goto LAB_022d3254;
    iVar11 = *(int *)(lVar3 + 0x18) + -1;
    if (iVar11 < 0) {
      unaff_x24 = (long *)0x0;
      plVar10 = (long *)Method_System_Char_IsUpper__;
    }
    else {
      unaff_x28 = unaff_x28 & 0xffffffff;
      do {
        unaff_x24 = (long *)FUN_030f28e4(lVar3,iVar11,*(undefined8 *)puVar2);
        if (unaff_x24 != (long *)0x0) {
          bVar1 = *(byte *)(*unaff_x29 + 0x130);
          if ((((bVar1 <= *(byte *)(*unaff_x24 + 0x130)) &&
               (*(long *)(*(long *)(*unaff_x24 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x29)) &&
              (((unaff_x25 & 0xff) == 0 || ((int)unaff_x24[0x3b] == (int)(unaff_x25 >> 0x20))))) &&
             ((uVar6 = FUN_041f75ac(unaff_x24,&stack0x00000048,&stack0x00000040,0,0),
              (uVar6 & 1) != 0 &&
              (lVar7 = (**(code **)(*unaff_x24 + 0x418))
                                 (uStack0000000000000048,uStack000000000000004c,unaff_x24,
                                  *(undefined8 *)(*unaff_x24 + 0x420)),
              plVar10 = (long *)Method_System_Char_IsUpper__, lVar7 != 0)))) goto LAB_022d2f74;
        }
        iVar11 = iVar11 + -1;
      } while (-1 < iVar11);
      unaff_x24 = (long *)0x0;
      plVar10 = (long *)Method_System_Char_IsUpper__;
    }
  }
  else {
    bVar1 = *(byte *)(*unaff_x29 + 0x130);
    if ((*(byte *)(*unaff_x24 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x24 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x29))
    goto LAB_022d2e2c;
    FUN_041f75ac();
    plVar10 = unaff_x26;
  }
LAB_022d2f74:
  if (*(int *)(*plVar10 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar4 = (long *)FUN_041e202c(unaff_w19,0,0);
  if (plVar4 == (long *)0x0) {
LAB_022d2fb0:
    plVar4 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*unaff_x29 + 0x130);
    if (*(byte *)(*plVar4 + 0x130) < bVar1) goto LAB_022d2fb0;
    if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x29) {
      plVar4 = (long *)0x0;
    }
  }
  if (plVar4 == unaff_x24) {
    if (unaff_x24 == (long *)0x0) goto LAB_022d3120;
  }
  else {
    if (plVar4 != (long *)0x0) {
      FUN_041f7574(plVar4,0);
      FUN_041f76d0(plVar4,unaff_w19,0);
    }
    if (unaff_x24 == (long *)0x0) {
LAB_022d3120:
      if ((unaff_x28 & 1) == 0) {
        return;
      }
      FUN_041c5278(in_stack_00000008,0,0);
      return;
    }
    FUN_041f7788(uStack0000000000000048,uStack000000000000004c,unaff_x24,unaff_w19,0);
  }
  uVar6 = (ulong)uStack0000000000000048;
  if (unaff_x21 != 0) {
    in_stack_00000050 = *unaff_x22;
    in_stack_00000058 = unaff_x22[1];
    in_stack_00000060 = unaff_x22[2];
    in_stack_00000068 = unaff_x22[3];
    in_stack_00000070 = unaff_x22[4];
    plVar4 = (long *)(**(code **)(unaff_x21 + 0x18))
                               (uVar6,uStack000000000000004c,0,uStack0000000000000040,
                                uStack0000000000000044,0,*(undefined8 *)(unaff_x21 + 0x40),
                                &stack0x00000050,*(undefined8 *)(unaff_x21 + 0x28));
    plVar5 = (long *)(**(code **)(*unaff_x24 + 0x398))
                               (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x3a0));
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
      FUN_041c73ec(in_stack_00000008,unaff_x24,0);
    }
    lVar3 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
    if (*(int *)(*(long *)Method_System_Char_IsSurrogate__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar7 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsHighSurrogate__);
    if (lVar3 == lVar7) {
      if (*(int *)(*plVar10 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_041e2260(unaff_w19,unaff_x24,0);
    }
    else {
      lVar3 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
      if (*(int *)(*(long *)Method_System_Char_IsNumber__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar7 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsLower__);
      if (lVar3 == lVar7) {
        if (*plVar4 != *(long *)Method_System_Char_Parse__) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar4);
        }
        if ((int)plVar4[0x16] == 0) {
          if (*(int *)(*plVar10 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_041e2260(unaff_w19,0,0);
        }
      }
    }
    lVar3 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar8 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_022d31f4;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_022d31f4:
    (*(code *)*puVar8)(plVar4,puVar8[1]);
    return;
  }
LAB_022d3254:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c(uVar6);
}


