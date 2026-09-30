/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<AppOverrideKeys_t>
ENTRY_POINT: 024116ac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x02411af4) */

void System_Array__InternalArray__IEnumerable_GetEnumerator<AppOverrideKeys_t>(void)

{
  void *__src;
  code *pcVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  ulong unaff_x22;
  long *plVar13;
  undefined8 *unaff_x23;
  long *unaff_x24;
  long *plVar14;
  undefined8 unaff_x27;
  long unaff_x29;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  puVar4 = Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__;
  if (unaff_x24 != (long *)0x0) {
    lVar8 = *unaff_x24;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02411704;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_02411704:
    lVar8 = (*(code *)*puVar5)();
    if (lVar8 != 0) {
      FUN_03e1f400(unaff_x19 + 0x48,lVar8,unaff_x22 >> 0x20,0);
      plVar13 = *(long **)(unaff_x29 + -0x28);
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
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_System_Runtime_Remoting_Contexts_Context_SetProperty__) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_024117b0;
            }
            uVar10 = uVar10 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_01ecb238(plVar13,*(long *)
                                       Method_System_Runtime_Remoting_Contexts_Context_SetProperty__
                              ,0);
LAB_024117b0:
        pcVar1 = (code *)*puVar5;
        uVar6 = puVar5[1];
        *(undefined8 *)(unaff_x19 + 8) = unaff_x27;
        plVar13 = (long *)(*pcVar1)(plVar13,uVar6);
        puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar8 = *plVar13;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_0241181c;
              }
              uVar10 = uVar10 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar10 != 0);
          }
          puVar5 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar3,0);
LAB_0241181c:
          uVar10 = (*(code *)*puVar5)(plVar13,puVar5[1]);
          if ((uVar10 & 1) == 0) {
LAB_02411a44:
            lVar8 = *(long *)(unaff_x19 + 8);
            if (plVar13 == (long *)0x0) goto LAB_02411ab0;
            lVar9 = *plVar13;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 == 0) goto LAB_02411a88;
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            goto LAB_02411a70;
          }
          lVar8 = *plVar13;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) ==
                  *(long *)
                   Method_UnityEngine_UIElements_ContextualMenuManipulator_OnContextualMenuEvent__)
              {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_02411880;
              }
              uVar10 = uVar10 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar10 != 0);
          }
          puVar5 = (undefined8 *)
                   FUN_01ecb238(plVar13,*(long *)
                                         Method_UnityEngine_UIElements_ContextualMenuManipulator_OnContextualMenuEvent__
                                ,0);
LAB_02411880:
          uVar10 = (*(code *)*puVar5)(plVar13,puVar5[1]);
          plVar14 = *(long **)(unaff_x20 + 0x38);
          __src = *(void **)(unaff_x29 + -0x20);
          if (-1 < *(int *)(*plVar14 + 0x28)) {
            __src = (void *)(unaff_x29 + -0x20);
          }
          memcpy(unaff_x23,__src,unaff_x21);
          puVar5 = unaff_x23;
          if (-1 < *(int *)(*plVar14 + 0x28)) {
            puVar5 = (undefined8 *)*unaff_x23;
          }
          puVar7 = (undefined8 *)plVar14[3];
          uVar6 = *puVar7;
          *(undefined8 **)(unaff_x19 + 0x80) = puVar5;
          *(ulong *)(unaff_x19 + 0x48) = uVar10;
          *(long *)(unaff_x19 + 0x88) = unaff_x19 + 0x48;
          (*(code *)puVar7[2])(uVar6,puVar7,0,unaff_x19 + 0x80,unaff_x29 + -0x14);
          if (*(char *)(unaff_x29 + -0x14) == '\0') goto LAB_02411a44;
          lVar8 = *unaff_x24;
          uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_0241194c;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)FUN_01ecb238();
LAB_0241194c:
          lVar8 = (*(code *)*puVar5)();
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_03e1f400(unaff_x19 + 0x80,lVar8,uVar10 >> 0x20,0);
          uVar6 = *(undefined8 *)(unaff_x19 + 0x80);
          uVar16 = *(undefined8 *)(unaff_x19 + 0x98);
          uVar15 = *(undefined8 *)(unaff_x19 + 0x90);
          uVar2 = *(undefined4 *)(unaff_x19 + 0xb0);
          *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x19 + 0x88);
          *(undefined8 *)(unaff_x29 + -0x70) = uVar6;
          *(undefined8 *)(unaff_x29 + -0x58) = uVar16;
          *(undefined8 *)(unaff_x29 + -0x60) = uVar15;
          uVar15 = *(undefined8 *)(unaff_x19 + 0xa8);
          uVar6 = *(undefined8 *)(unaff_x19 + 0xa0);
          *(undefined4 *)(unaff_x29 + -0x40) = uVar2;
          *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x38);
          *(undefined4 *)(unaff_x29 + -0x68) = *(undefined4 *)(unaff_x29 + -0x30);
          *(undefined8 *)(unaff_x29 + -0x48) = uVar15;
          *(undefined8 *)(unaff_x29 + -0x50) = uVar6;
          lVar8 = *unaff_x24;
          uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_024119e8;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)FUN_01ecb238();
LAB_024119e8:
          lVar8 = (*(code *)*puVar5)();
          uVar6 = *(undefined8 *)(unaff_x29 + -0x70);
          uVar16 = *(undefined8 *)(unaff_x29 + -0x58);
          uVar15 = *(undefined8 *)(unaff_x29 + -0x60);
          uVar18 = *(undefined8 *)(unaff_x29 + -0x48);
          uVar17 = *(undefined8 *)(unaff_x29 + -0x50);
          uVar2 = *(undefined4 *)(unaff_x29 + -0x40);
          *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x29 + -0x68);
          *(undefined8 *)(unaff_x19 + 0x80) = uVar6;
          *(undefined8 *)(unaff_x19 + 0x98) = uVar16;
          *(undefined8 *)(unaff_x19 + 0x90) = uVar15;
          *(undefined8 *)(unaff_x19 + 0xa8) = uVar18;
          *(undefined8 *)(unaff_x19 + 0xa0) = uVar17;
          *(undefined4 *)(unaff_x19 + 0xb0) = uVar2;
          if (lVar8 == 0) {
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
          FUN_03e1f16c(lVar8,uVar10 >> 0x20,unaff_x19 + 0x10,1,0);
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar12 = piVar12 + 4;
    if (uVar10 == 0) break;
LAB_02411a70:
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_02411aa4;
    }
  }
LAB_02411a88:
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar13,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_02411aa4:
  (*(code *)*puVar5)(plVar13,puVar5[1]);
LAB_02411ab0:
  if (*(long *)(lVar8 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


