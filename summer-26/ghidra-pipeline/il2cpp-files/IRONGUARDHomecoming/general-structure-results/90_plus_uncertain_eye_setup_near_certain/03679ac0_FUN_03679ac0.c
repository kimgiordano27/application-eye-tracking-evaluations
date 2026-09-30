/*
FUNCTION_NAME: FUN_03679ac0
ENTRY_POINT: 03679ac0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_12;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x0367a200) */

byte FUN_03679ac0(long param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  byte bVar9;
  int iVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_100;
  undefined4 uStack_f8;
  float fStack_f4;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  ulong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 uStack_a8;
  float fStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  
  if ((DAT_04833df5 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_40__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_36__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_38__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_39__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_<>c_<Render>b__11_0__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_48__);
    DAT_04833df5 = 1;
  }
  local_b0 = 0;
  uStack_a8 = 0;
  fStack_a4 = 0.0;
  local_98 = 0;
  local_a0 = 0;
  uStack_9c = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_e0 = 0;
  local_d8 = 0;
  lVar11 = *(long *)(param_1 + 0x68);
  if (lVar11 != 0) {
    fVar17 = (float)(**(code **)(lVar11 + 0x18))
                              (*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
    fVar23 = -(*(float *)(param_1 + 0x44) * 0.5);
    if (*(char *)(param_1 + 0x7c) != '\0') {
      fVar23 = *(float *)(param_1 + 0x44) * 0.5;
    }
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (plVar15 = *(long **)(*(long *)(param_1 + 0x38) + 0x10), plVar15 != (long *)0x0)) {
      lVar11 = *plVar15;
      fVar26 = *(float *)(param_1 + 0x78);
      fVar25 = *(float *)(param_1 + 0x40);
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_38__) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto FUN_03679c20;
          }
          uVar14 = uVar14 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar14 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(plVar15,*(long *)
                                     Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_38__
                            ,0);
FUN_03679c20:
      plVar15 = (long *)(*(code *)*puVar5)(plVar15,puVar5[1]);
      puVar3 = Method_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_<>c_<Render>b__11_0__;
      fVar2 = DAT_00c92a9c;
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      bVar4 = 1;
      do {
        bVar9 = bVar4;
        lVar11 = *plVar15;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__)
            {
              puVar5 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_03679cc0;
            }
            uVar14 = uVar14 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar14 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_01ecb238(plVar15,*(long *)
                                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                              ,0);
LAB_03679cc0:
        uVar14 = (*(code *)*puVar5)(plVar15,puVar5[1]);
        if ((uVar14 & 1) == 0) {
          if (plVar15 == (long *)0x0) {
            return bVar9;
          }
          lVar11 = *plVar15;
          uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar14 == 0) goto LAB_0367a068;
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_0367a050;
        }
        lVar11 = *plVar15;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_39__) {
              puVar5 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_03679d24;
            }
            uVar14 = uVar14 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar14 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_01ecb238(plVar15,*(long *)
                                       Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_39__
                              ,0);
LAB_03679d24:
        lVar11 = (*(code *)*puVar5)(plVar15,puVar5[1]);
        plVar16 = *(long **)(param_1 + 0x28);
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar13 = *plVar16;
        lVar8 = *(long *)puVar3;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar8) {
              puVar5 = (undefined8 *)(lVar13 + (long)(*piVar12 + 0x12) * 0x10 + 0x138);
              goto LAB_03679d8c;
            }
            uVar14 = uVar14 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar14 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar16,lVar8,0x12);
LAB_03679d8c:
        uVar14 = (*(code *)*puVar5)(plVar16,&local_b0,puVar5[1]);
        bVar4 = 0;
        if ((uVar14 & 1) != 0) {
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          plVar16 = *(long **)(param_1 + 0x28);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar13 = *plVar16;
          uVar1 = *(undefined4 *)(lVar11 + 0x14);
          lVar8 = *(long *)puVar3;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar8) {
                puVar5 = (undefined8 *)(lVar13 + (long)(*piVar12 + 9) * 0x10 + 0x138);
                goto LAB_03679e04;
              }
              uVar14 = uVar14 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar14 != 0);
          }
          puVar5 = (undefined8 *)FUN_01ecb238(plVar16,lVar8,9);
LAB_03679e04:
          uVar14 = (*(code *)*puVar5)(plVar16,uVar1,&local_d0,puVar5[1]);
          bVar4 = 0;
          if ((uVar14 & 1) != 0) {
            plVar16 = *(long **)(param_1 + 0x60);
            if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar8 = *plVar16;
            uVar1 = *(undefined4 *)(lVar11 + 0x14);
            uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar14 != 0) {
              piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) ==
                    *(long *)
                     Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_48__) {
                  puVar5 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                  goto LAB_03679e84;
                }
                uVar14 = uVar14 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar14 != 0);
            }
            puVar5 = (undefined8 *)
                     FUN_01ecb238(plVar16,*(long *)
                                           Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_48__
                                  ,1);
LAB_03679e84:
            uVar14 = (*(code *)*puVar5)(plVar16,uVar1,&local_e0,puVar5[1]);
            bVar4 = 0;
            if ((uVar14 & 1) != 0) {
              fVar19 = (float)(local_e0 >> 0x20);
              fVar22 = (float)local_d8;
              fVar18 = (float)FUN_04067364(local_e0 & 0xffffffff,local_e0 >> 0x20,(float)local_d8,
                                           local_d8._4_4_,0);
              uVar14 = (ulong)(uint)(fVar19 * fVar2);
              fVar22 = fVar22 * fVar2;
              fVar19 = (float)FUN_04067a1c(fVar18 * fVar2,0);
              iVar10 = 0;
              fVar18 = fVar22;
              do {
                while( true ) {
                  fVar20 = fVar19;
                  if (((iVar10 != 0) && (fVar20 = fVar18, iVar10 != 2)) &&
                     (fVar20 = (float)uVar14, iVar10 != 1)) {
                    thunk_FUN_01efb3a4(
                                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerUpEvent>__
                                      );
                    uVar6 = thunk_FUN_01f117cc();
                    uVar7 = thunk_FUN_01efb3a4(
                                              Method_Unity_VisualScripting_Expose_<>c_<Definition>b__25_3__
                                              );
                    FUN_03566764(uVar6,uVar7,0);
                    uVar7 = thunk_FUN_01efb3a4(
                                              Method_Unity_VisualScripting_Expose_<>c_<Definition>b__25_4__
                                              );
                    /* WARNING: Subroutine does not return */
                    FUN_01f08910(uVar6,uVar7);
                  }
                  if (fVar20 <= 180.0) break;
                  if (iVar10 == 0) {
                    fVar19 = fVar19 + -360.0;
                  }
                  else if (iVar10 == 1) {
                    uVar14 = (ulong)(uint)((float)uVar14 + -360.0);
                  }
                  else {
                    if (iVar10 != 2) {
                      thunk_FUN_01efb3a4(
                                        Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerUpEvent>__
                                        );
                      uVar6 = thunk_FUN_01f117cc();
                      uVar7 = thunk_FUN_01efb3a4(
                                                Method_Unity_VisualScripting_Expose_<>c_<Definition>b__25_3__
                                                );
                      FUN_03566764(uVar6,uVar7,0);
                      uVar7 = thunk_FUN_01efb3a4(
                                                Method_Unity_VisualScripting_Expose_<>c_<Definition>b__25_4__
                                                );
                    /* WARNING: Subroutine does not return */
                      FUN_01f08910(uVar6,uVar7);
                    }
                    fVar18 = fVar18 + -360.0;
                  }
                }
                while( true ) {
                  fVar24 = (float)uVar14;
                  fVar20 = fVar19;
                  if (((iVar10 != 0) && (fVar20 = fVar18, iVar10 != 2)) &&
                     (fVar20 = fVar24, iVar10 != 1)) {
                    thunk_FUN_01efb3a4(
                                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerUpEvent>__
                                      );
                    uVar6 = thunk_FUN_01f117cc();
                    uVar7 = thunk_FUN_01efb3a4(
                                              Method_Unity_VisualScripting_Expose_<>c_<Definition>b__25_3__
                                              );
                    FUN_03566764(uVar6,uVar7,0);
                    uVar7 = thunk_FUN_01efb3a4(
                                              Method_Unity_VisualScripting_Expose_<>c_<Definition>b__25_4__
                                              );
                    /* WARNING: Subroutine does not return */
                    FUN_01f08910(uVar6,uVar7);
                  }
                  if (-180.0 <= fVar20) break;
                  if (iVar10 == 0) {
                    fVar19 = fVar19 + 360.0;
                  }
                  else if (iVar10 == 1) {
                    uVar14 = (ulong)(uint)(fVar24 + 360.0);
                  }
                  else {
                    if (iVar10 != 2) {
                      thunk_FUN_01efb3a4(
                                        Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerUpEvent>__
                                        );
                      uVar6 = thunk_FUN_01f117cc();
                      uVar7 = thunk_FUN_01efb3a4(
                                                Method_Unity_VisualScripting_Expose_<>c_<Definition>b__25_3__
                                                );
                      FUN_03566764(uVar6,uVar7,0);
                      uVar7 = thunk_FUN_01efb3a4(
                                                Method_Unity_VisualScripting_Expose_<>c_<Definition>b__25_4__
                                                );
                    /* WARNING: Subroutine does not return */
                      FUN_01f08910(uVar6,uVar7);
                    }
                    fVar18 = fVar18 + 360.0;
                  }
                }
                iVar10 = iVar10 + 1;
              } while (iVar10 != 3);
              uStack_ec = CONCAT44(local_98,uStack_9c);
              uStack_f8 = uStack_a8;
              local_100 = local_b0;
              fStack_f4 = fStack_a4;
              uStack_f0 = local_a0;
              fVar20 = fStack_a4;
              fVar21 = (float)FUN_0367a2fc(param_1,&local_100,lVar11);
              if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              FUN_02ba5908(*(long *)(param_1 + 0x50),lVar11,
                           *(undefined8 *)
                            Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_40__)
              ;
              bVar4 = bVar9 & (fVar17 - fVar26) * (fVar25 + fVar23) <
                              fVar18 * fVar22 + fVar19 * fVar21 + fVar24 * fVar20;
            }
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar12 = piVar12 + 4;
    if (uVar14 == 0) break;
LAB_0367a050:
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar5 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0367a084;
    }
  }
LAB_0367a068:
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar15,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0367a084:
  (*(code *)*puVar5)(plVar15,puVar5[1]);
  return bVar9;
}


