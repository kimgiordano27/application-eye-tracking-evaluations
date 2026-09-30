/*
FUNCTION_NAME: OVRPassthroughLayer$$Update
ENTRY_POINT: 03679c10
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 123
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0367a200) */

byte OVRPassthroughLayer__Update(undefined8 *param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined *puVar3;
  byte bVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  byte bVar10;
  int iVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long unaff_x20;
  long *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float unaff_s8;
  float fVar21;
  float unaff_s9;
  float fVar22;
  float unaff_s10;
  float unaff_s11;
  undefined4 uStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  float fStack000000000000006c;
  undefined4 in_stack_00000070;
  
  plVar5 = (long *)(*(code *)*param_1)();
  puVar3 = Method_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_<>c_<Render>b__11_0__;
  fVar2 = DAT_00c92a9c;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  bVar4 = 1;
  do {
    bVar10 = bVar4;
    lVar14 = *plVar5;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03679cc0;
        }
        uVar15 = uVar15 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_03679cc0:
    uVar15 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar15 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
        return bVar10;
      }
      lVar14 = *plVar5;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 == 0) goto LAB_0367a068;
      piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      break;
    }
    lVar14 = *plVar5;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_39__) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03679d24;
        }
        uVar15 = uVar15 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_39__
                          ,0);
LAB_03679d24:
    lVar14 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    plVar16 = *(long **)(unaff_x20 + 0x28);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar13 = *plVar16;
    lVar9 = *(long *)puVar3;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar6 = (undefined8 *)(lVar13 + (long)(*piVar12 + 0x12) * 0x10 + 0x138);
          goto LAB_03679d8c;
        }
        uVar15 = uVar15 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar16,lVar9,0x12);
LAB_03679d8c:
    uVar15 = (*(code *)*puVar6)(plVar16,&stack0x00000060,puVar6[1]);
    bVar4 = 0;
    if ((uVar15 & 1) != 0) {
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar16 = *(long **)(unaff_x20 + 0x28);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar13 = *plVar16;
      uVar1 = *(undefined4 *)(lVar14 + 0x14);
      lVar9 = *(long *)puVar3;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar9) {
            puVar6 = (undefined8 *)(lVar13 + (long)(*piVar12 + 9) * 0x10 + 0x138);
            goto LAB_03679e04;
          }
          uVar15 = uVar15 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar15 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar16,lVar9,9);
LAB_03679e04:
      uVar15 = (*(code *)*puVar6)(plVar16,uVar1,&stack0x00000040,puVar6[1]);
      bVar4 = 0;
      if ((uVar15 & 1) != 0) {
        plVar16 = *(long **)(unaff_x20 + 0x60);
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar9 = *plVar16;
        uVar1 = *(undefined4 *)(lVar14 + 0x14);
        uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar15 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_48__) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_03679e84;
            }
            uVar15 = uVar15 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar15 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_01ecb238(plVar16,*(long *)
                                       Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_48__
                              ,1);
LAB_03679e84:
        uVar15 = (*(code *)*puVar6)(plVar16,uVar1,&stack0x00000030,puVar6[1]);
        bVar4 = 0;
        if ((uVar15 & 1) != 0) {
          fVar20 = fStack0000000000000038;
          fVar21 = fStack0000000000000034;
          fVar17 = (float)FUN_04067364(uStack0000000000000030,fStack0000000000000034,
                                       fStack0000000000000038,uStack000000000000003c,0);
          uVar15 = (ulong)(uint)(fVar21 * fVar2);
          fVar20 = fVar20 * fVar2;
          fVar17 = (float)FUN_04067a1c(fVar17 * fVar2,0);
          iVar11 = 0;
          fVar21 = fVar20;
          do {
            while( true ) {
              fVar18 = fVar17;
              if (((iVar11 != 0) && (fVar18 = fVar21, iVar11 != 2)) &&
                 (fVar18 = (float)uVar15, iVar11 != 1)) {
                thunk_FUN_01efb3a4(
                                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerUpEvent>__
                                  );
                uVar7 = thunk_FUN_01f117cc();
                uVar8 = thunk_FUN_01efb3a4(
                                          Method_Unity_VisualScripting_Expose_<>c_<Definition>b__25_3__
                                          );
                FUN_03566764(uVar7,uVar8,0);
                uVar8 = thunk_FUN_01efb3a4(
                                          Method_Unity_VisualScripting_Expose_<>c_<Definition>b__25_4__
                                          );
                    /* WARNING: Subroutine does not return */
                FUN_01f08910(uVar7,uVar8);
              }
              if (fVar18 <= 180.0) break;
              if (iVar11 == 0) {
                fVar17 = fVar17 + -360.0;
              }
              else if (iVar11 == 1) {
                uVar15 = (ulong)(uint)((float)uVar15 + -360.0);
              }
              else {
                if (iVar11 != 2) {
                  thunk_FUN_01efb3a4(
                                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerUpEvent>__
                                    );
                  uVar7 = thunk_FUN_01f117cc();
                  uVar8 = thunk_FUN_01efb3a4(
                                            Method_Unity_VisualScripting_Expose_<>c_<Definition>b__25_3__
                                            );
                  FUN_03566764(uVar7,uVar8,0);
                  uVar8 = thunk_FUN_01efb3a4(
                                            Method_Unity_VisualScripting_Expose_<>c_<Definition>b__25_4__
                                            );
                    /* WARNING: Subroutine does not return */
                  FUN_01f08910(uVar7,uVar8);
                }
                fVar21 = fVar21 + -360.0;
              }
            }
            while( true ) {
              fVar22 = (float)uVar15;
              fVar18 = fVar17;
              if (((iVar11 != 0) && (fVar18 = fVar21, iVar11 != 2)) &&
                 (fVar18 = fVar22, iVar11 != 1)) {
                thunk_FUN_01efb3a4(
                                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerUpEvent>__
                                  );
                uVar7 = thunk_FUN_01f117cc();
                uVar8 = thunk_FUN_01efb3a4(
                                          Method_Unity_VisualScripting_Expose_<>c_<Definition>b__25_3__
                                          );
                FUN_03566764(uVar7,uVar8,0);
                uVar8 = thunk_FUN_01efb3a4(
                                          Method_Unity_VisualScripting_Expose_<>c_<Definition>b__25_4__
                                          );
                    /* WARNING: Subroutine does not return */
                FUN_01f08910(uVar7,uVar8);
              }
              if (-180.0 <= fVar18) break;
              if (iVar11 == 0) {
                fVar17 = fVar17 + 360.0;
              }
              else if (iVar11 == 1) {
                uVar15 = (ulong)(uint)(fVar22 + 360.0);
              }
              else {
                if (iVar11 != 2) {
                  thunk_FUN_01efb3a4(
                                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerUpEvent>__
                                    );
                  uVar7 = thunk_FUN_01f117cc();
                  uVar8 = thunk_FUN_01efb3a4(
                                            Method_Unity_VisualScripting_Expose_<>c_<Definition>b__25_3__
                                            );
                  FUN_03566764(uVar7,uVar8,0);
                  uVar8 = thunk_FUN_01efb3a4(
                                            Method_Unity_VisualScripting_Expose_<>c_<Definition>b__25_4__
                                            );
                    /* WARNING: Subroutine does not return */
                  FUN_01f08910(uVar7,uVar8);
                }
                fVar21 = fVar21 + 360.0;
              }
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 != 3);
          fVar18 = fStack000000000000006c;
          fVar19 = (float)FUN_0367a2fc();
          if (*(long *)(unaff_x20 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_02ba5908(*(long *)(unaff_x20 + 0x50),lVar14,
                       *(undefined8 *)
                        Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_40__);
          bVar4 = bVar10 & (unaff_s8 - unaff_s11) * (unaff_s10 + unaff_s9) <
                           fVar21 * fVar20 + fVar17 * fVar19 + fVar22 * fVar18;
        }
      }
    }
  } while( true );
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar12 = piVar12 + 4;
    if (uVar15 == 0) break;
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0367a084;
    }
  }
LAB_0367a068:
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0367a084:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return bVar10;
}


