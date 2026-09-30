/*
FUNCTION_NAME: FUN_033e3a44
ENTRY_POINT: 033e3a44
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x033e3f58) */
/* WARNING: Removing unreachable block (ram,0x033e3f54) */
/* WARNING: Removing unreachable block (ram,0x033e3fb4) */

long FUN_033e3a44(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 uVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 uVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  long local_60;
  long local_58;
  
  if ((DAT_04832586 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Threading_Monitor_Wait__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_InsertionSort<int3,_TessCellCompare>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_04832586 = 1;
  }
  local_60 = 0;
  local_58 = 0;
  lVar7 = FUN_033e39b4(param_1,*(undefined8 *)(param_1 + 0x30));
  lVar8 = FUN_033e39b4(param_1,*(undefined8 *)(param_1 + 0x38));
  lVar9 = FUN_033e39b4(param_1,*(undefined8 *)(param_1 + 0x28));
  lVar17 = *(long *)(param_1 + 0x48);
  if (lVar17 == 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
      uVar13 = thunk_FUN_01f117cc();
      uVar16 = thunk_FUN_01efb3a4(Method_System_Net_MonoChunkStream_ThrowExpectingChunkTrailer__);
      FUN_0356adc8(uVar13,uVar16,0);
      uVar16 = thunk_FUN_01efb3a4(Method_System_MonoCustomAttrs_GetCustomAttributes__);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar13,uVar16);
    }
    uVar13 = *(undefined8 *)(param_1 + 0x40);
    uVar16 = *(undefined8 *)(param_1 + 0x20);
    plVar10 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                          Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_InsertionSort<int3,_TessCellCompare>__
                                        );
    FUN_033e01b4(plVar10,uVar13,uVar16);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    local_58 = FUN_033e096c(plVar10);
    local_60 = FUN_033e0ca8(plVar10);
    lVar17 = *plVar10;
    uVar14 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar11 = (undefined8 *)(lVar17 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_033e3f3c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar11 = (undefined8 *)
              FUN_01ecb238(plVar10,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_033e3f3c:
    (*(code *)*puVar11)(plVar10,puVar11[1]);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar13 = *(undefined8 *)(param_1 + 0x38);
    uVar16 = *(undefined8 *)(param_1 + 0x40);
    uVar20 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(*(long *)Method_System_Threading_Monitor_Wait__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_033e2050(lVar17,uVar1,uVar13,uVar16,uVar20,&local_58,&local_60);
  }
  if (local_58 == 0) {
    iVar19 = 0;
  }
  else {
    iVar19 = *(int *)(local_58 + 0x18);
  }
  if (local_60 == 0) {
    iVar18 = 0;
  }
  else {
    iVar18 = *(int *)(local_60 + 0x18);
  }
  if ((((lVar7 != 0) && (lVar8 != 0)) && (lVar9 != 0)) &&
     (lVar17 = FUN_033e2584(param_1,iVar19 + iVar18 + *(int *)(lVar7 + 0x18) +
                                    *(int *)(lVar8 + 0x18) + *(int *)(lVar9 + 0x18) + 0x40),
     lVar17 != 0)) {
    uVar13 = *(undefined8 *)(lVar17 + 0x18);
    uVar12 = (uint)uVar13;
    if (0xc < uVar12) {
      iVar2 = *(int *)(lVar7 + 0x18);
      iVar3 = *(int *)(lVar8 + 0x18);
      iVar4 = *(int *)(lVar9 + 0x18);
      *(char *)(lVar17 + 0x2c) = (char)iVar19;
      if (((uVar12 != 0xd) && (*(undefined1 *)(lVar17 + 0x2d) = 0, 0xe < uVar12)) &&
         ((*(char *)(lVar17 + 0x2e) = (char)iVar19, uVar12 != 0xf &&
          (*(undefined1 *)(lVar17 + 0x2f) = 0, 0x10 < uVar12)))) {
        iVar2 = iVar2 + iVar3 + iVar4 + 0x40;
        *(char *)(lVar17 + 0x30) = (char)iVar2;
        if ((uVar12 != 0x11) && (*(char *)(lVar17 + 0x31) = (char)((uint)iVar2 >> 8), 0x14 < uVar12)
           ) {
          *(char *)(lVar17 + 0x34) = (char)iVar18;
          if (uVar12 != 0x15) {
            uVar5 = (undefined1)((uint)iVar18 >> 8);
            *(undefined1 *)(lVar17 + 0x35) = uVar5;
            if (((0x16 < uVar12) && (*(char *)(lVar17 + 0x36) = (char)iVar18, uVar12 != 0x17)) &&
               (*(undefined1 *)(lVar17 + 0x37) = uVar5, 0x18 < uVar12)) {
              iVar19 = (short)iVar2 + iVar19;
              *(char *)(lVar17 + 0x38) = (char)iVar19;
              if ((uVar12 != 0x19) &&
                 (*(char *)(lVar17 + 0x39) = (char)((uint)iVar19 >> 8), 0x1c < uVar12)) {
                uVar16 = *(undefined8 *)(lVar7 + 0x18);
                *(char *)(lVar17 + 0x3c) = (char)uVar16;
                if (uVar12 != 0x1d) {
                  uVar5 = (undefined1)((ulong)uVar16 >> 8);
                  *(undefined1 *)(lVar17 + 0x3d) = uVar5;
                  if (((0x1e < uVar12) && (*(char *)(lVar17 + 0x3e) = (char)uVar16, uVar12 != 0x1f))
                     && ((*(undefined1 *)(lVar17 + 0x3f) = uVar5, 0x20 < uVar12 &&
                         ((*(undefined1 *)(lVar17 + 0x40) = 0x40, uVar12 != 0x21 &&
                          (*(undefined1 *)(lVar17 + 0x41) = 0, 0x24 < uVar12)))))) {
                    uVar20 = *(undefined8 *)(lVar8 + 0x18);
                    *(char *)(lVar17 + 0x44) = (char)uVar20;
                    if (uVar12 != 0x25) {
                      uVar5 = (undefined1)((ulong)uVar20 >> 8);
                      *(undefined1 *)(lVar17 + 0x45) = uVar5;
                      if (((0x26 < uVar12) &&
                          (*(char *)(lVar17 + 0x46) = (char)uVar20, uVar12 != 0x27)) &&
                         (*(undefined1 *)(lVar17 + 0x47) = uVar5, 0x28 < uVar12)) {
                        iVar18 = (short)uVar16 + 0x40;
                        *(char *)(lVar17 + 0x48) = (char)iVar18;
                        if ((uVar12 != 0x29) &&
                           (*(char *)(lVar17 + 0x49) = (char)((uint)iVar18 >> 8), 0x2c < uVar12)) {
                          uVar16 = *(undefined8 *)(lVar9 + 0x18);
                          uVar5 = (undefined1)uVar16;
                          *(undefined1 *)(lVar17 + 0x4c) = uVar5;
                          if (uVar12 != 0x2d) {
                            uVar6 = (undefined1)((ulong)uVar16 >> 8);
                            *(undefined1 *)(lVar17 + 0x4d) = uVar6;
                            if (((0x2e < uVar12) &&
                                (*(undefined1 *)(lVar17 + 0x4e) = uVar5, uVar12 != 0x2f)) &&
                               (*(undefined1 *)(lVar17 + 0x4f) = uVar6, 0x30 < uVar12)) {
                              iVar3 = (int)(short)uVar20 + (int)(short)iVar18;
                              *(char *)(lVar17 + 0x50) = (char)iVar3;
                              if ((((uVar12 != 0x31) &&
                                   (*(char *)(lVar17 + 0x51) = (char)((uint)iVar3 >> 8),
                                   0x38 < uVar12)) &&
                                  (*(char *)(lVar17 + 0x58) = (char)uVar13, uVar12 != 0x39)) &&
                                 (*(char *)(lVar17 + 0x59) = (char)((ulong)uVar13 >> 8),
                                 0x3c < uVar12)) {
                                uVar1 = *(undefined4 *)(param_1 + 0x14);
                                *(char *)(lVar17 + 0x5c) = (char)uVar1;
                                if (((uVar12 != 0x3d) &&
                                    (*(char *)(lVar17 + 0x5d) = (char)((uint)uVar1 >> 8),
                                    0x3e < uVar12)) &&
                                   (*(char *)(lVar17 + 0x5e) = (char)((uint)uVar1 >> 0x10),
                                   uVar12 != 0x3f)) {
                                  *(char *)(lVar17 + 0x5f) = (char)((uint)uVar1 >> 0x18);
                                  FUN_03596b60(lVar7,0,lVar17,0x40,*(undefined4 *)(lVar7 + 0x18),0);
                                  FUN_03596b60(lVar8,0,lVar17,(int)(short)iVar18,
                                               *(undefined4 *)(lVar8 + 0x18),0);
                                  FUN_03596b60(lVar9,0,lVar17,(int)(short)iVar3,
                                               *(undefined4 *)(lVar9 + 0x18),0);
                                  if (local_58 != 0) {
                                    FUN_03596b60(local_58,0,lVar17,(int)(short)iVar2,
                                                 *(undefined4 *)(local_58 + 0x18),0);
                                    if (local_58 == 0) goto LAB_033e3f64;
                                    FUN_0358d1e4(local_58,0,*(undefined4 *)(local_58 + 0x18),0);
                                  }
                                  if ((local_60 != 0) &&
                                     (FUN_03596b60(local_60,0,lVar17,(int)(short)iVar19,
                                                   *(undefined4 *)(local_60 + 0x18),0),
                                     local_60 != 0)) {
                                    FUN_0358d1e4(local_60,0,*(undefined4 *)(local_60 + 0x18),0);
                                    return lVar17;
                                  }
                                  goto LAB_033e3f64;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
LAB_033e3f64:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


