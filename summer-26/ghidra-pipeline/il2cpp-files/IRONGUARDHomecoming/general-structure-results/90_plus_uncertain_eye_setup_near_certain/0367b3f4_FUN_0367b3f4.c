/*
FUNCTION_NAME: FUN_0367b3f4
ENTRY_POINT: 0367b3f4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x0367b910) */

byte FUN_0367b3f4(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  byte bVar12;
  ulong uVar13;
  int *piVar14;
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
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 uStack_e8;
  float fStack_e4;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  float fStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  
  if ((DAT_04833dff & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_49__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_36__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_47__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_48__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_<>c_<Render>b__11_0__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_48__);
    DAT_04833dff = 1;
  }
  local_a0 = 0;
  uStack_98 = 0;
  fStack_94 = 0.0;
  local_88 = 0;
  local_90 = 0;
  uStack_8c = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_c8 = 0.0;
  local_d0 = 0;
  lVar10 = *(long *)(param_1 + 0x78);
  if (lVar10 != 0) {
    fVar17 = (float)(**(code **)(lVar10 + 0x18))
                              (*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
    fVar19 = *(float *)(param_1 + 0x5c) * 0.5;
    fVar22 = -(*(float *)(param_1 + 0x5c) * 0.5);
    if (*(char *)(param_1 + 0x8c) != '\0') {
      fVar22 = fVar19;
    }
    if ((*(long *)(param_1 + 0x50) != 0) &&
       (plVar15 = *(long **)(*(long *)(param_1 + 0x50) + 0x10), plVar15 != (long *)0x0)) {
      lVar10 = *plVar15;
      fVar24 = *(float *)(param_1 + 0x88);
      fVar23 = *(float *)(param_1 + 0x58);
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_47__) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto OVRPassthroughLayer_ColorLutHandler__Clear;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01ecb238(plVar15,*(long *)
                                     Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_47__
                            ,0);
OVRPassthroughLayer_ColorLutHandler__Clear:
      plVar15 = (long *)(*(code *)*puVar8)(plVar15,puVar8[1]);
      puVar6 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_49__;
      puVar5 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_48__;
      puVar4 = Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_48__;
      puVar3 = Method_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_<>c_<Render>b__11_0__;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      bVar7 = 1;
      do {
        bVar12 = bVar7;
        lVar10 = *plVar15;
        uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0367b5f4;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar15,*(long *)puVar2,0);
LAB_0367b5f4:
        uVar13 = (*(code *)*puVar8)(plVar15,puVar8[1]);
        if ((uVar13 & 1) == 0) {
          if (plVar15 == (long *)0x0) {
            return bVar12;
          }
          lVar10 = *plVar15;
          uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar13 == 0) goto LAB_0367b89c;
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_0367b884;
        }
        lVar10 = *plVar15;
        uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0367b650;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar15,*(long *)puVar5,0);
LAB_0367b650:
        lVar10 = (*(code *)*puVar8)(plVar15,puVar8[1]);
        plVar16 = *(long **)(param_1 + 0x28);
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar11 = *plVar16;
        lVar9 = *(long *)puVar3;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar9) {
              puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 0x12) * 0x10 + 0x138);
              goto LAB_0367b6b8;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar16,lVar9,0x12);
LAB_0367b6b8:
        uVar13 = (*(code *)*puVar8)(plVar16,&local_a0,puVar8[1]);
        bVar7 = 0;
        if ((uVar13 & 1) != 0) {
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          plVar16 = *(long **)(param_1 + 0x28);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar11 = *plVar16;
          uVar1 = *(undefined4 *)(lVar10 + 0x14);
          lVar9 = *(long *)puVar3;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar9) {
                puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 9) * 0x10 + 0x138);
                goto LAB_0367b730;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238(plVar16,lVar9,9);
LAB_0367b730:
          uVar13 = (*(code *)*puVar8)(plVar16,uVar1,&local_c0,puVar8[1]);
          bVar7 = 0;
          if ((uVar13 & 1) != 0) {
            plVar16 = *(long **)(param_1 + 0x38);
            if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar9 = *plVar16;
            uVar1 = *(undefined4 *)(lVar10 + 0x14);
            uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                  puVar8 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_0367b7a4;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar8 = (undefined8 *)FUN_01ecb238(plVar16,*(long *)puVar4,0);
LAB_0367b7a4:
            uVar13 = (*(code *)*puVar8)(plVar16,uVar1,&local_d0,puVar8[1]);
            bVar7 = 0;
            if ((uVar13 & 1) != 0) {
              uStack_dc = CONCAT44(local_88,uStack_8c);
              uStack_e8 = uStack_98;
              local_f0 = local_a0;
              fStack_e4 = fStack_94;
              uStack_e0 = local_90;
              fVar20 = fStack_94;
              fVar18 = (float)FUN_0367b9f8(param_1,&local_f0,lVar10);
              fVar18 = fVar18 * (float)local_d0;
              fVar20 = fVar20 * local_d0._4_4_;
              fVar21 = fVar19 * local_c8;
              lVar9 = *(long *)(param_1 + 0x68);
              local_100 = 0;
              local_f8 = 0;
              FUN_0367c924(&local_100,0);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              fVar19 = (float)local_f8;
              FUN_02ba874c(local_100 & 0xffffffff,local_100._4_4_,(float)local_f8,local_f8._4_4_,
                           lVar9,lVar10,*(undefined8 *)puVar6);
              bVar7 = bVar12 & (fVar17 - fVar24) * (fVar23 + fVar22) < fVar21 + fVar18 + fVar20;
            }
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_0367b884:
    if (*(long *)(piVar14 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0367b8b8;
    }
  }
LAB_0367b89c:
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar15,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0367b8b8:
  (*(code *)*puVar8)(plVar15,puVar8[1]);
  return bVar12;
}


