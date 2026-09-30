/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<ValueTuple<object,-object,-object>>
ENTRY_POINT: 02411544
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x02411af4) */

void System_Array__InternalArray__IEnumerable_GetEnumerator<ValueTuple<object,_object,_object>>
               (void)

{
  void *__src;
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x22;
  long *plVar16;
  undefined8 *puVar17;
  long unaff_x24;
  long lVar18;
  long lVar19;
  long *plVar20;
  long unaff_x27;
  long unaff_x29;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  plVar13 = *(long **)(unaff_x20 + 0x38);
  if (plVar13 == (long *)0x0) {
    FUN_01ecafa0();
    plVar13 = *(long **)(unaff_x20 + 0x38);
  }
  lVar12 = *plVar13;
  uVar4 = *(ushort *)(lVar12 + 0x135);
  lVar7 = lVar12;
  if ((uVar4 & 1) == 0) {
    lVar12 = FUN_01ecaf44(lVar12);
    plVar13 = *(long **)(unaff_x20 + 0x38);
    uVar4 = *(ushort *)(*plVar13 + 0x135);
    lVar7 = *plVar13;
  }
  lVar19 = (long)&stack0x00000000 - ((ulong)(*(int *)(lVar12 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar12 = lVar7;
  if ((uVar4 & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
    plVar13 = *(long **)(unaff_x20 + 0x38);
    lVar12 = *plVar13;
  }
  lVar18 = lVar19 - ((ulong)(*(int *)(lVar7 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  uVar2 = *(uint *)(lVar12 + 0xfc);
  puVar17 = (undefined8 *)(lVar18 - ((ulong)uVar2 + 0xf & 0x1fffffff0));
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined4 *)(unaff_x29 + -0x30) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined4 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined8 *)(unaff_x29 + -0x50) = 0;
  *(undefined8 *)(unaff_x29 + -0x68) = 0;
  *(undefined8 *)(unaff_x29 + -0x70) = 0;
  lVar7 = *plVar13;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44();
    plVar13 = *(long **)(unaff_x20 + 0x38);
  }
  if (-1 < *(int *)(*plVar13 + 0x28)) {
    unaff_x24 = unaff_x29 + -0x20;
  }
  FUN_01f09244(lVar7,plVar13[1],lVar19,unaff_x24,0,unaff_x19 + 0x80);
  if (*(long *)(unaff_x19 + 0x80) != 0) {
    uVar8 = FUN_03e1a3c0();
    if ((uVar8 & 1) == 0) goto LAB_02411ab4;
    plVar13 = *(long **)(unaff_x20 + 0x38);
    lVar7 = *plVar13;
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
      plVar13 = *(long **)(unaff_x20 + 0x38);
    }
    lVar12 = *(long *)(unaff_x29 + -0x20);
    if (-1 < *(int *)(*plVar13 + 0x28)) {
      lVar12 = unaff_x29 + -0x20;
    }
    FUN_01f09244(lVar7,plVar13[2],lVar18,lVar12,0,unaff_x19 + 0x80);
    puVar6 = Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__;
    plVar13 = *(long **)(unaff_x19 + 0x80);
    if (plVar13 != (long *)0x0) {
      lVar7 = *plVar13;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__) {
            puVar9 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_02411704;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_01ecb238(plVar13,*(long *)
                                     Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__,0)
      ;
LAB_02411704:
      lVar7 = (*(code *)*puVar9)(plVar13,unaff_x22 & 0xffffffff,puVar9[1]);
      if (lVar7 != 0) {
        FUN_03e1f400(unaff_x19 + 0x48,lVar7,unaff_x22 >> 0x20,0);
        plVar16 = *(long **)(unaff_x29 + -0x28);
        *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x19 + 0x50);
        *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)(unaff_x19 + 0x48);
        *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x19 + 0x60);
        *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x19 + 0x58);
        uVar3 = *(undefined4 *)(unaff_x19 + 0x88);
        *(undefined8 *)(unaff_x19 + 0xa8) = *(undefined8 *)(unaff_x19 + 0x70);
        *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(unaff_x19 + 0x68);
        *(undefined4 *)(unaff_x19 + 0xb0) = *(undefined4 *)(unaff_x19 + 0x78);
        *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x19 + 0x80);
        *(undefined4 *)(unaff_x29 + -0x30) = uVar3;
        if (plVar16 != (long *)0x0) {
          lVar7 = *plVar16;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) ==
                  *(long *)Method_System_Runtime_Remoting_Contexts_Context_SetProperty__) {
                puVar9 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_024117b0;
              }
              uVar8 = uVar8 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)
                   FUN_01ecb238(plVar16,*(long *)
                                         Method_System_Runtime_Remoting_Contexts_Context_SetProperty__
                                ,0);
LAB_024117b0:
          pcVar1 = (code *)*puVar9;
          uVar10 = puVar9[1];
          *(long *)(unaff_x19 + 8) = unaff_x27;
          plVar16 = (long *)(*pcVar1)(plVar16,uVar10);
          puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            lVar7 = *plVar16;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
                  puVar9 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_0241181c;
                }
                uVar8 = uVar8 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_01ecb238(plVar16,*(long *)puVar5,0);
LAB_0241181c:
            uVar8 = (*(code *)*puVar9)(plVar16,puVar9[1]);
            if ((uVar8 & 1) == 0) {
LAB_02411a44:
              unaff_x27 = *(long *)(unaff_x19 + 8);
              if (plVar16 == (long *)0x0) goto LAB_02411ab4;
              lVar7 = *plVar16;
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar8 == 0) goto LAB_02411a88;
              piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              goto LAB_02411a70;
            }
            lVar7 = *plVar16;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) ==
                    *(long *)
                     Method_UnityEngine_UIElements_ContextualMenuManipulator_OnContextualMenuEvent__
                   ) {
                  puVar9 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_02411880;
                }
                uVar8 = uVar8 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)
                     FUN_01ecb238(plVar16,*(long *)
                                           Method_UnityEngine_UIElements_ContextualMenuManipulator_OnContextualMenuEvent__
                                  ,0);
LAB_02411880:
            uVar8 = (*(code *)*puVar9)(plVar16,puVar9[1]);
            plVar20 = *(long **)(unaff_x20 + 0x38);
            __src = *(void **)(unaff_x29 + -0x20);
            if (-1 < *(int *)(*plVar20 + 0x28)) {
              __src = (void *)(unaff_x29 + -0x20);
            }
            memcpy(puVar17,__src,(ulong)uVar2);
            puVar9 = puVar17;
            if (-1 < *(int *)(*plVar20 + 0x28)) {
              puVar9 = (undefined8 *)*puVar17;
            }
            puVar11 = (undefined8 *)plVar20[3];
            uVar10 = *puVar11;
            *(undefined8 **)(unaff_x19 + 0x80) = puVar9;
            *(ulong *)(unaff_x19 + 0x48) = uVar8;
            *(long *)(unaff_x19 + 0x88) = unaff_x19 + 0x48;
            (*(code *)puVar11[2])(uVar10,puVar11,0,unaff_x19 + 0x80,unaff_x29 + -0x14);
            if (*(char *)(unaff_x29 + -0x14) == '\0') goto LAB_02411a44;
            lVar12 = *plVar13;
            lVar7 = *(long *)puVar6;
            uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar7) {
                  puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_0241194c;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar9 = (undefined8 *)FUN_01ecb238(plVar13,lVar7,0);
LAB_0241194c:
            lVar7 = (*(code *)*puVar9)(plVar13,uVar8 & 0xffffffff,puVar9[1]);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_03e1f400(unaff_x19 + 0x80,lVar7,uVar8 >> 0x20,0);
            uVar10 = *(undefined8 *)(unaff_x19 + 0x80);
            uVar22 = *(undefined8 *)(unaff_x19 + 0x98);
            uVar21 = *(undefined8 *)(unaff_x19 + 0x90);
            uVar3 = *(undefined4 *)(unaff_x19 + 0xb0);
            *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x19 + 0x88);
            *(undefined8 *)(unaff_x29 + -0x70) = uVar10;
            *(undefined8 *)(unaff_x29 + -0x58) = uVar22;
            *(undefined8 *)(unaff_x29 + -0x60) = uVar21;
            uVar21 = *(undefined8 *)(unaff_x19 + 0xa8);
            uVar10 = *(undefined8 *)(unaff_x19 + 0xa0);
            *(undefined4 *)(unaff_x29 + -0x40) = uVar3;
            *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x38);
            *(undefined4 *)(unaff_x29 + -0x68) = *(undefined4 *)(unaff_x29 + -0x30);
            *(undefined8 *)(unaff_x29 + -0x48) = uVar21;
            *(undefined8 *)(unaff_x29 + -0x50) = uVar10;
            lVar12 = *plVar13;
            lVar7 = *(long *)puVar6;
            uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar7) {
                  puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_024119e8;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar9 = (undefined8 *)FUN_01ecb238(plVar13,lVar7,0);
LAB_024119e8:
            lVar7 = (*(code *)*puVar9)(plVar13,uVar8 & 0xffffffff,puVar9[1]);
            uVar10 = *(undefined8 *)(unaff_x29 + -0x70);
            uVar22 = *(undefined8 *)(unaff_x29 + -0x58);
            uVar21 = *(undefined8 *)(unaff_x29 + -0x60);
            uVar24 = *(undefined8 *)(unaff_x29 + -0x48);
            uVar23 = *(undefined8 *)(unaff_x29 + -0x50);
            uVar3 = *(undefined4 *)(unaff_x29 + -0x40);
            *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x29 + -0x68);
            *(undefined8 *)(unaff_x19 + 0x80) = uVar10;
            *(undefined8 *)(unaff_x19 + 0x98) = uVar22;
            *(undefined8 *)(unaff_x19 + 0x90) = uVar21;
            *(undefined8 *)(unaff_x19 + 0xa8) = uVar24;
            *(undefined8 *)(unaff_x19 + 0xa0) = uVar23;
            *(undefined4 *)(unaff_x19 + 0xb0) = uVar3;
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x88);
            *(undefined8 *)(unaff_x19 + 0x10) = *(undefined8 *)(unaff_x19 + 0x80);
            *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x19 + 0x98);
            *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x19 + 0x90);
            *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x19 + 0xa8);
            *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x19 + 0xa0);
            *(undefined4 *)(unaff_x19 + 0x40) = *(undefined4 *)(unaff_x19 + 0xb0);
            FUN_03e1f16c(lVar7,uVar8 >> 0x20,unaff_x19 + 0x10,1,0);
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar15 = piVar15 + 4;
    if (uVar8 == 0) break;
LAB_02411a70:
    if (*(long *)(piVar15 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar17 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_02411aa4;
    }
  }
LAB_02411a88:
  puVar17 = (undefined8 *)
            FUN_01ecb238(plVar16,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_02411aa4:
  (*(code *)*puVar17)(plVar16,puVar17[1]);
LAB_02411ab4:
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


