/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<ProbeBrickPool.BrickChunkAlloc>
ENTRY_POINT: 022d14fc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x022d1448) */
/* WARNING: Removing unreachable block (ram,0x022d15a4) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<ProbeBrickPool_BrickChunkAlloc>
               (undefined8 param_1,int param_2)

{
  void *__src;
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int *piVar12;
  void *unaff_x21;
  long lVar13;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long lVar14;
  long *plVar15;
  long unaff_x27;
  long unaff_x29;
  
  if (param_2 != 1) {
    if (unaff_x25 != (long *)0x0) {
      lVar14 = *unaff_x25;
      uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
            goto code_r0x022d1594;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238();
code_r0x022d1594:
      (*(code *)*puVar10)();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01fbfd14(param_1);
  }
  plVar7 = (long *)__cxa_begin_catch(param_1);
  lVar14 = *plVar7;
  __cxa_end_catch();
  if (unaff_x25 != (long *)0x0) {
    lVar13 = *unaff_x25;
    uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_022d117c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238();
LAB_022d117c:
    (*(code *)*puVar10)();
  }
  if (lVar14 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar14);
  }
  if (*(int *)(*(long *)Method_System_Char_GetUnicodeCategory__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar14 = FUN_0424f664(0);
  puVar4 = Method_System_Char_ConvertToUtf32__;
  puVar3 = Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__;
  if (lVar14 == 0) {
LAB_022d1444:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar1 = *(int *)(lVar14 + 0x18);
  do {
    do {
      do {
        iVar1 = iVar1 + -1;
        if (iVar1 < 0) goto LAB_022d1410;
        plVar7 = (long *)FUN_030f28e4(lVar14,iVar1,*(undefined8 *)puVar4);
      } while (plVar7 == (long *)0x0);
      bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
    } while ((*(byte *)(*plVar7 + 0x130) < bVar2) ||
            (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar3));
    lVar13 = *(long *)(unaff_x27 + 0x38);
    __src = unaff_x21;
    if (-1 < *(int *)(*(long *)(lVar13 + 8) + 0x28)) {
      __src = (void *)(unaff_x29 + -0x20);
    }
    memcpy(unaff_x24,__src,*(size_t *)(unaff_x29 + -0x30));
    if (*(long *)(unaff_x29 + -0x28) == 0) goto LAB_022d1444;
    puVar10 = unaff_x24;
    if (-1 < *(int *)(*(long *)(lVar13 + 8) + 0x28)) {
      puVar10 = (undefined8 *)*unaff_x24;
    }
    puVar8 = *(undefined8 **)(lVar13 + 0x10);
    uVar5 = *puVar8;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar10;
    (*(code *)puVar8[2])
              (uVar5,puVar8,*(undefined8 *)(unaff_x29 + -0x28),unaff_x29 + -0x18,unaff_x29 + -0x10);
    plVar15 = *(long **)(unaff_x29 + -0x10);
    uVar5 = (**(code **)(*plVar7 + 0x398))(plVar7,*(undefined8 *)(*plVar7 + 0x3a0));
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar5,uVar5);
    }
    FUN_041d4560(plVar15,uVar5,0);
    plVar6 = (long *)(**(code **)(*plVar7 + 0x398))(plVar7,*(undefined8 *)(*plVar7 + 0x3a0));
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar6 + 0x198))(plVar6,plVar15,*(undefined8 *)(*plVar6 + 0x1a0));
    lVar13 = (**(code **)(*plVar7 + 0x278))(plVar7,*(undefined8 *)(*plVar7 + 0x280));
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar13 = FUN_041e7f94(lVar13,0);
    if (lVar13 == 0) {
      uVar11 = FUN_041d3f88(plVar15,0);
      iVar9 = 4;
      if ((uVar11 & 1) == 0) {
        iVar9 = 10;
      }
    }
    else {
      FUN_041c5278(*(undefined8 *)(unaff_x29 + -0x38),plVar7,0);
      iVar9 = 4;
    }
    lVar13 = *plVar15;
    uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_022d1388;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_01ecb238(plVar15,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_022d1388:
    (*(code *)*puVar10)(plVar15,puVar10[1]);
  } while ((iVar9 == 10) || (iVar9 == 0));
LAB_022d1410:
  if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


