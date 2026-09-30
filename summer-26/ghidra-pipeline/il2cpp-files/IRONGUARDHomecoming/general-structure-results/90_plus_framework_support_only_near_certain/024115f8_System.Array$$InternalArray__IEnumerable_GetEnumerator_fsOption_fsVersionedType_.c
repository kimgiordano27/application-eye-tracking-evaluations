/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<fsOption<fsVersionedType>>
ENTRY_POINT: 024115f8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x02411af4) */

void System_Array__InternalArray__IEnumerable_GetEnumerator<fsOption<fsVersionedType>>
               (undefined1 param_1 [16])

{
  void *__src;
  code *pcVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long *in_x9;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  ulong unaff_x22;
  long *plVar14;
  undefined8 *unaff_x23;
  long *plVar15;
  long unaff_x27;
  long unaff_x29;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar16 = param_1._8_8_;
  uVar8 = param_1._0_8_;
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined4 *)(unaff_x29 + -0x30) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined4 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = uVar16;
  *(undefined8 *)(unaff_x29 + -0x60) = uVar8;
  *(undefined8 *)(unaff_x29 + -0x48) = uVar16;
  *(undefined8 *)(unaff_x29 + -0x50) = uVar8;
  *(undefined8 *)(unaff_x29 + -0x68) = uVar16;
  *(undefined8 *)(unaff_x29 + -0x70) = uVar8;
  lVar5 = *in_x9;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44();
    in_x9 = *(long **)(unaff_x20 + 0x38);
  }
  FUN_01f09244(lVar5,in_x9[1]);
  if (*(long *)(unaff_x19 + 0x80) != 0) {
    uVar6 = FUN_03e1a3c0();
    if ((uVar6 & 1) == 0) goto LAB_02411ab4;
    plVar10 = *(long **)(unaff_x20 + 0x38);
    lVar5 = *plVar10;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
      plVar10 = *(long **)(unaff_x20 + 0x38);
    }
    FUN_01f09244(lVar5,plVar10[2]);
    puVar4 = Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__;
    plVar10 = *(long **)(unaff_x19 + 0x80);
    if (plVar10 != (long *)0x0) {
      lVar5 = *plVar10;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_02411704;
          }
          uVar6 = uVar6 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01ecb238(plVar10,*(long *)
                                     Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__,0)
      ;
LAB_02411704:
      lVar5 = (*(code *)*puVar7)(plVar10,unaff_x22 & 0xffffffff,puVar7[1]);
      if (lVar5 != 0) {
        FUN_03e1f400(unaff_x19 + 0x48,lVar5,unaff_x22 >> 0x20,0);
        plVar14 = *(long **)(unaff_x29 + -0x28);
        *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x19 + 0x50);
        *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)(unaff_x19 + 0x48);
        *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x19 + 0x60);
        *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x19 + 0x58);
        uVar2 = *(undefined4 *)(unaff_x19 + 0x88);
        *(undefined8 *)(unaff_x19 + 0xa8) = *(undefined8 *)(unaff_x19 + 0x70);
        *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(unaff_x19 + 0x68);
        *(undefined4 *)(unaff_x19 + 0xb0) = *(undefined4 *)(unaff_x19 + 0x78);
        *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x19 + 0x80);
        *(undefined4 *)(unaff_x29 + -0x30) = uVar2;
        if (plVar14 != (long *)0x0) {
          lVar5 = *plVar14;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) ==
                  *(long *)Method_System_Runtime_Remoting_Contexts_Context_SetProperty__) {
                puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_024117b0;
              }
              uVar6 = uVar6 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_01ecb238(plVar14,*(long *)
                                         Method_System_Runtime_Remoting_Contexts_Context_SetProperty__
                                ,0);
LAB_024117b0:
          pcVar1 = (code *)*puVar7;
          uVar8 = puVar7[1];
          *(long *)(unaff_x19 + 8) = unaff_x27;
          plVar14 = (long *)(*pcVar1)(plVar14,uVar8);
          puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            lVar5 = *plVar14;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 != 0) {
              piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                  puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_0241181c;
                }
                uVar6 = uVar6 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar6 != 0);
            }
            puVar7 = (undefined8 *)FUN_01ecb238(plVar14,*(long *)puVar3,0);
LAB_0241181c:
            uVar6 = (*(code *)*puVar7)(plVar14,puVar7[1]);
            if ((uVar6 & 1) == 0) {
LAB_02411a44:
              unaff_x27 = *(long *)(unaff_x19 + 8);
              if (plVar14 == (long *)0x0) goto LAB_02411ab4;
              lVar5 = *plVar14;
              uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar6 == 0) goto LAB_02411a88;
              piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              goto LAB_02411a70;
            }
            lVar5 = *plVar14;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 != 0) {
              piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) ==
                    *(long *)
                     Method_UnityEngine_UIElements_ContextualMenuManipulator_OnContextualMenuEvent__
                   ) {
                  puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_02411880;
                }
                uVar6 = uVar6 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar6 != 0);
            }
            puVar7 = (undefined8 *)
                     FUN_01ecb238(plVar14,*(long *)
                                           Method_UnityEngine_UIElements_ContextualMenuManipulator_OnContextualMenuEvent__
                                  ,0);
LAB_02411880:
            uVar6 = (*(code *)*puVar7)(plVar14,puVar7[1]);
            plVar15 = *(long **)(unaff_x20 + 0x38);
            __src = *(void **)(unaff_x29 + -0x20);
            if (-1 < *(int *)(*plVar15 + 0x28)) {
              __src = (void *)(unaff_x29 + -0x20);
            }
            memcpy(unaff_x23,__src,unaff_x21);
            puVar7 = unaff_x23;
            if (-1 < *(int *)(*plVar15 + 0x28)) {
              puVar7 = (undefined8 *)*unaff_x23;
            }
            puVar9 = (undefined8 *)plVar15[3];
            uVar8 = *puVar9;
            *(undefined8 **)(unaff_x19 + 0x80) = puVar7;
            *(ulong *)(unaff_x19 + 0x48) = uVar6;
            *(long *)(unaff_x19 + 0x88) = unaff_x19 + 0x48;
            (*(code *)puVar9[2])(uVar8,puVar9,0,unaff_x19 + 0x80,unaff_x29 + -0x14);
            if (*(char *)(unaff_x29 + -0x14) == '\0') goto LAB_02411a44;
            lVar11 = *plVar10;
            lVar5 = *(long *)puVar4;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar5) {
                  puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_0241194c;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)FUN_01ecb238(plVar10,lVar5,0);
LAB_0241194c:
            lVar5 = (*(code *)*puVar7)(plVar10,uVar6 & 0xffffffff,puVar7[1]);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_03e1f400(unaff_x19 + 0x80,lVar5,uVar6 >> 0x20,0);
            uVar8 = *(undefined8 *)(unaff_x19 + 0x80);
            uVar17 = *(undefined8 *)(unaff_x19 + 0x98);
            uVar16 = *(undefined8 *)(unaff_x19 + 0x90);
            uVar2 = *(undefined4 *)(unaff_x19 + 0xb0);
            *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x19 + 0x88);
            *(undefined8 *)(unaff_x29 + -0x70) = uVar8;
            *(undefined8 *)(unaff_x29 + -0x58) = uVar17;
            *(undefined8 *)(unaff_x29 + -0x60) = uVar16;
            uVar16 = *(undefined8 *)(unaff_x19 + 0xa8);
            uVar8 = *(undefined8 *)(unaff_x19 + 0xa0);
            *(undefined4 *)(unaff_x29 + -0x40) = uVar2;
            *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x38);
            *(undefined4 *)(unaff_x29 + -0x68) = *(undefined4 *)(unaff_x29 + -0x30);
            *(undefined8 *)(unaff_x29 + -0x48) = uVar16;
            *(undefined8 *)(unaff_x29 + -0x50) = uVar8;
            lVar11 = *plVar10;
            lVar5 = *(long *)puVar4;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar5) {
                  puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_024119e8;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)FUN_01ecb238(plVar10,lVar5,0);
LAB_024119e8:
            lVar5 = (*(code *)*puVar7)(plVar10,uVar6 & 0xffffffff,puVar7[1]);
            uVar8 = *(undefined8 *)(unaff_x29 + -0x70);
            uVar17 = *(undefined8 *)(unaff_x29 + -0x58);
            uVar16 = *(undefined8 *)(unaff_x29 + -0x60);
            uVar19 = *(undefined8 *)(unaff_x29 + -0x48);
            uVar18 = *(undefined8 *)(unaff_x29 + -0x50);
            uVar2 = *(undefined4 *)(unaff_x29 + -0x40);
            *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x29 + -0x68);
            *(undefined8 *)(unaff_x19 + 0x80) = uVar8;
            *(undefined8 *)(unaff_x19 + 0x98) = uVar17;
            *(undefined8 *)(unaff_x19 + 0x90) = uVar16;
            *(undefined8 *)(unaff_x19 + 0xa8) = uVar19;
            *(undefined8 *)(unaff_x19 + 0xa0) = uVar18;
            *(undefined4 *)(unaff_x19 + 0xb0) = uVar2;
            if (lVar5 == 0) {
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
            FUN_03e1f16c(lVar5,uVar6 >> 0x20,unaff_x19 + 0x10,1,0);
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar13 = piVar13 + 4;
    if (uVar6 == 0) break;
LAB_02411a70:
    if (*(long *)(piVar13 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_02411aa4;
    }
  }
LAB_02411a88:
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar14,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_02411aa4:
  (*(code *)*puVar7)(plVar14,puVar7[1]);
LAB_02411ab4:
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


