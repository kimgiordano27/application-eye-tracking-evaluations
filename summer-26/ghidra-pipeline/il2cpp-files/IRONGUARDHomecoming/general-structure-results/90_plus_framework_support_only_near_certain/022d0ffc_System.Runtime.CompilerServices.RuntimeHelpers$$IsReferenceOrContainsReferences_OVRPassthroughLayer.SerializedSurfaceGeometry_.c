/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 022d0ffc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 192
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x022d1448) */
/* WARNING: Removing unreachable block (ram,0x022d1450) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (void)

{
  void *__src;
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  long unaff_x20;
  void *unaff_x21;
  long *plVar17;
  long unaff_x27;
  long unaff_x29;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(Method_System_Char_ConvertToUtf32__);
  thunk_FUN_01efb3a4(Method_System_Char_GetUnicodeCategory__);
  lVar16 = *(long *)(unaff_x27 + 0x38);
  if (lVar16 == 0) {
    FUN_01ecafa0();
    lVar16 = *(long *)(unaff_x27 + 0x38);
  }
  lVar11 = *(long *)(lVar16 + 8);
  uVar14 = (ulong)*(uint *)(lVar11 + 0xfc);
  *(long *)(unaff_x29 + -0x38) = unaff_x20;
  *(ulong *)(unaff_x29 + -0x30) = uVar14;
  puVar12 = (undefined8 *)(&stack0x00000000 + -(uVar14 + 0xf & 0x1fffffff0));
  if (*(long *)(unaff_x20 + 0x58) == 0) {
    if (*(int *)(*(long *)Method_System_Char_GetUnicodeCategory__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar16 = FUN_0424f664(0);
    puVar4 = Method_System_Char_ConvertToUtf32__;
    puVar3 = Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__;
    if (lVar16 != 0) {
      iVar1 = *(int *)(lVar16 + 0x18);
      do {
        do {
          do {
            iVar1 = iVar1 + -1;
            if (iVar1 < 0) goto LAB_022d1410;
            plVar17 = (long *)FUN_030f28e4(lVar16,iVar1,*(undefined8 *)puVar4);
          } while (plVar17 == (long *)0x0);
          bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
        } while ((*(byte *)(*plVar17 + 0x130) < bVar2) ||
                (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar3));
        lVar11 = *(long *)(unaff_x27 + 0x38);
        __src = unaff_x21;
        if (-1 < *(int *)(*(long *)(lVar11 + 8) + 0x28)) {
          __src = (void *)(unaff_x29 + -0x20);
        }
        memcpy(puVar12,__src,*(size_t *)(unaff_x29 + -0x30));
        if (*(long *)(unaff_x29 + -0x28) == 0) goto LAB_022d1444;
        puVar13 = puVar12;
        if (-1 < *(int *)(*(long *)(lVar11 + 8) + 0x28)) {
          puVar13 = (undefined8 *)*puVar12;
        }
        puVar9 = *(undefined8 **)(lVar11 + 0x10);
        uVar5 = *puVar9;
        *(undefined8 **)(unaff_x29 + -0x18) = puVar13;
        (*(code *)puVar9[2])
                  (uVar5,puVar9,*(undefined8 *)(unaff_x29 + -0x28),unaff_x29 + -0x18,
                   unaff_x29 + -0x10);
        plVar7 = *(long **)(unaff_x29 + -0x10);
        uVar5 = (**(code **)(*plVar17 + 0x398))(plVar17,*(undefined8 *)(*plVar17 + 0x3a0));
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(uVar5,uVar5);
        }
        FUN_041d4560(plVar7,uVar5,0);
        plVar8 = (long *)(**(code **)(*plVar17 + 0x398))(plVar17,*(undefined8 *)(*plVar17 + 0x3a0));
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar8 + 0x198))(plVar8,plVar7,*(undefined8 *)(*plVar8 + 0x1a0));
        lVar11 = (**(code **)(*plVar17 + 0x278))(plVar17,*(undefined8 *)(*plVar17 + 0x280));
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar11 = FUN_041e7f94(lVar11,0);
        if (lVar11 == 0) {
          uVar14 = FUN_041d3f88(plVar7,0);
          iVar10 = 4;
          if ((uVar14 & 1) == 0) {
            iVar10 = 10;
          }
        }
        else {
          FUN_041c5278(*(undefined8 *)(unaff_x29 + -0x38),plVar17,0);
          iVar10 = 4;
        }
        lVar11 = *plVar7;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar13 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_022d1388;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar13 = (undefined8 *)
                  FUN_01ecb238(plVar7,*(long *)
                                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                               ,0);
LAB_022d1388:
        (*(code *)*puVar13)(plVar7,puVar13[1]);
      } while ((iVar10 == 10) || (iVar10 == 0));
LAB_022d1410:
      if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
    if (-1 < *(int *)(lVar11 + 0x28)) {
      unaff_x21 = (void *)(unaff_x29 + -0x20);
    }
    memcpy(puVar12,unaff_x21,*(size_t *)(unaff_x29 + -0x30));
    if (*(long *)(unaff_x29 + -0x28) != 0) {
      puVar13 = *(undefined8 **)(lVar16 + 0x10);
      lVar11 = *(long *)(unaff_x29 + -0x38);
      uVar5 = *puVar13;
      if (-1 < *(int *)(*(long *)(lVar16 + 8) + 0x28)) {
        puVar12 = (undefined8 *)*puVar12;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar12;
      lVar6 = (*(code *)puVar13[2])
                        (uVar5,puVar13,*(undefined8 *)(unaff_x29 + -0x28),unaff_x29 + -0x18,
                         unaff_x29 + -0x10);
      plVar17 = *(long **)(unaff_x29 + -0x10);
      lVar16 = *(long *)(lVar11 + 0x60);
      if (*(long *)(lVar11 + 0x60) == 0) {
        plVar7 = *(long **)(lVar11 + 0x58);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar6 = (**(code **)(*plVar7 + 0x398))(plVar7,*(undefined8 *)(*plVar7 + 0x3a0));
        lVar16 = lVar6;
      }
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(lVar6,lVar16);
      }
      FUN_041d4560(plVar17,lVar16,0);
      plVar7 = *(long **)(lVar11 + 0x58);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar7 = (long *)(**(code **)(*plVar7 + 0x398))(plVar7,*(undefined8 *)(*plVar7 + 0x3a0));
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      (**(code **)(*plVar7 + 0x198))(plVar7,plVar17,*(undefined8 *)(*plVar7 + 0x1a0));
      FUN_041c73ec(lVar11,*(undefined8 *)(lVar11 + 0x58),0);
      lVar16 = *plVar17;
      uVar14 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar12 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_022d117c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_01ecb238(plVar17,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                             ,0);
LAB_022d117c:
      (*(code *)*puVar12)(plVar17,puVar12[1]);
      goto LAB_022d1410;
    }
  }
LAB_022d1444:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


