/*
FUNCTION_NAME: FUN_01c125fc
ENTRY_POINT: 01c125fc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_14;validity_or_gating_hits_21;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x01c12e90) */

void FUN_01c125fc(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  int *piVar15;
  long lVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  
  if ((DAT_03fed412 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_0__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_1__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_2__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_ProBuilder_MeshOperations_UVEditing_<>c_<ProjectFacesAuto>b__8_1__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_3__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_3__);
    thunk_FUN_01ad9084(
                      Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__);
    thunk_FUN_01ad9084(Method_System_Net_WebResponseStream_<>c__DisplayClass41_0_<ProcessRead>b__2__
                      );
    thunk_FUN_01ad9084(Method_System_Net_WebResponseStream_<InitReadAsync>d__52_MoveNext__);
    DAT_03fed412 = 1;
  }
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_7c = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_84 = 0;
  uStack_90 = 0;
  local_b0 = 0;
  if (*(char *)(param_4 + 0x38) == '\0') {
    return;
  }
  if (*(long *)(param_4 + 0x28) != 0) {
    uVar18 = FUN_03928d34(*(long *)(param_4 + 0x28),0);
    puVar2 = Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__;
    if (*(long *)(param_4 + 0x28) != 0) {
      uVar9 = param_2;
      uVar22 = param_3;
      uVar19 = FUN_039291ac(*(long *)(param_4 + 0x28),0);
      uVar24 = *(undefined4 *)(param_4 + 0x30);
      uVar6 = FUN_03920150(*(undefined4 *)(param_4 + 0x3c),0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar2);
      }
      uVar7 = FUN_03955b94(uVar18,param_2,param_3,uVar19,uVar9,uVar22,uVar24,&local_a0,uVar6,0);
      if ((uVar7 & 1) == 0) {
        return;
      }
      lVar8 = FUN_03959c7c(&local_a0,0);
      if (lVar8 != 0) {
        uVar18 = FUN_039230bc(lVar8,0);
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                            );
        }
        FUN_038f2acc(uVar18,0);
        lVar8 = FUN_03959c7c(&local_a0,0);
        if ((lVar8 != 0) && (lVar8 = FUN_0392a5dc(lVar8,0), lVar8 != 0)) {
          uVar18 = FUN_0391c2b8(lVar8,0);
          if ((*(long *)(param_4 + 0x40) != 0) &&
             (lVar8 = *(long *)(*(long *)(param_4 + 0x40) + 0x110), lVar8 != 0)) {
            uVar9 = FUN_02b59714(lVar8,0,*(undefined8 *)
                                          Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__
                                );
            puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
            if (*(int *)(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)
                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                );
            }
            uVar7 = FUN_03922f24(uVar18,uVar9,0);
            if ((uVar7 & 1) != 0) {
              return;
            }
            if ((*(long *)(param_4 + 0x40) != 0) &&
               (lVar8 = *(long *)(*(long *)(param_4 + 0x40) + 0x110), lVar8 != 0)) {
              FUN_02b5a400(&local_d8,lVar8,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_3__
                          );
              puVar5 = Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_1__;
              uStack_b8 = uStack_d0;
              local_c0 = local_d8;
              local_b0 = local_c8;
              while( true ) {
                uVar7 = FUN_02739b98(&local_c0,*(undefined8 *)puVar5);
                uVar18 = local_b0;
                fVar21 = (float)param_3;
                fVar20 = (float)param_2;
                if ((uVar7 & 1) == 0) break;
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar7 = FUN_03922f24(uVar18,0,0);
                if ((uVar7 & 1) == 0) {
                  lVar8 = FUN_03959c7c(&local_a0,0);
                  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01b48178();
                  }
                  uVar9 = FUN_0391c2b8(lVar8,0);
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  uVar7 = FUN_03922f24(uVar18,uVar9,0);
                  if ((uVar7 & 1) != 0) {
                    FUN_02739b94(&local_c0,
                                 *(undefined8 *)
                                  Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_0__
                                );
                    return;
                  }
                }
              }
              FUN_02739b94(&local_c0,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_Vector2IntField_<>c_<DescribeFields>b__0_0__
                          );
              *(undefined1 *)(param_4 + 0x38) = 0;
              FUN_03920818(*(undefined4 *)(param_4 + 0x20),param_4,
                           *(undefined8 *)
                            Method_System_Net_WebResponseStream_<>c__DisplayClass41_0_<ProcessRead>b__2__
                           ,0);
              lVar8 = FUN_03959c7c(&local_a0,0);
              if (lVar8 != 0) {
                fVar17 = (float)FUN_03929354(lVar8,0);
                fVar23 = *(float *)(param_4 + 0x34);
                fVar20 = fVar20 / fVar23;
                fVar21 = fVar21 / fVar23;
                FUN_039293f4(fVar17 / fVar23,fVar20,fVar21,lVar8,0);
                lVar8 = FUN_03959c7c(&local_a0,0);
                if (lVar8 != 0) {
                  fVar17 = (float)FUN_03928d34(lVar8,0);
                  fVar21 = fVar21 + 0.0;
                  fVar20 = fVar20 + DAT_00b55088;
                  FUN_03928dd4(fVar17 + 0.0,fVar20,fVar21,lVar8,0);
                  if (*(long *)(param_4 + 0x40) != 0) {
                    lVar16 = *(long *)(*(long *)(param_4 + 0x40) + 0x110);
                    lVar8 = FUN_03959c7c(&local_a0,0);
                    if ((lVar8 != 0) &&
                       (uVar18 = FUN_0391c2b8(lVar8,0),
                       puVar5 = Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_3__,
                       lVar16 != 0)) {
                      lVar8 = *(long *)(lVar16 + 0x10);
                      lVar13 = *(long *)Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_3__
                      ;
                      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                      if (lVar8 != 0) {
                        uVar1 = *(uint *)(lVar16 + 0x18);
                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                          *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                          *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar18;
                          thunk_FUN_01b4f09c();
                        }
                        else {
                          FUN_02b599e4(lVar16,uVar18,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                        }
                        lVar8 = FUN_03959c7c(&local_a0,0);
                        if ((lVar8 != 0) &&
                           (lVar8 = FUN_0391c2b8(lVar8,0),
                           puVar4 = 
                           Method_UnityEngine_ProBuilder_MeshOperations_UVEditing_<>c_<ProjectFacesAuto>b__8_1__
                           , lVar8 != 0)) {
                          uVar18 = FUN_01ed712c(lVar8,*(undefined8 *)
                                                                                                              
                                                  Method_UnityEngine_ProBuilder_MeshOperations_UVEditing_<>c_<ProjectFacesAuto>b__8_1__
                                               );
                          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                            thunk_FUN_01ac7298(*(long *)puVar2);
                          }
                          uVar7 = FUN_0391f968(uVar18,0,0);
                          if ((uVar7 & 1) != 0) {
                            lVar8 = FUN_03959c7c(&local_a0,0);
                            if (((lVar8 == 0) || (lVar8 = FUN_0391c2b8(lVar8,0), lVar8 == 0)) ||
                               (lVar8 = FUN_01ed712c(lVar8,*(undefined8 *)puVar4), lVar8 == 0))
                            goto LAB_01c12e70;
                            FUN_0395a360(lVar8,0,0);
                            lVar8 = FUN_03959c7c(&local_a0,0);
                            if (((lVar8 == 0) || (lVar8 = FUN_0391c2b8(lVar8,0), lVar8 == 0)) ||
                               (lVar8 = FUN_01ed712c(lVar8,*(undefined8 *)puVar4), lVar8 == 0))
                            goto LAB_01c12e70;
                            FUN_0395a294(lVar8,1,0);
                          }
                          lVar8 = FUN_03959c7c(&local_a0,0);
                          if ((lVar8 != 0) && (lVar8 = FUN_0391c2b8(lVar8,0), lVar8 != 0)) {
                            uVar7 = FUN_0391fce8(lVar8,*(undefined8 *)
                                                                                                                
                                                  Method_System_Net_WebResponseStream_<InitReadAsync>d__52_MoveNext__
                                                 ,0);
                            if ((uVar7 & 1) == 0) {
                              return;
                            }
                            lVar8 = FUN_03959c7c(&local_a0,0);
                            if (((lVar8 != 0) && (lVar8 = FUN_03928c2c(lVar8,0), lVar8 != 0)) &&
                               (lVar8 = FUN_0392a9fc(lVar8,1,0), lVar8 != 0)) {
                              fVar17 = (float)FUN_03929354(lVar8,0);
                              fVar23 = *(float *)(param_4 + 0x34);
                              FUN_039293f4(fVar17 / fVar23,fVar20 / fVar23,fVar21 / fVar23,lVar8,0);
                              if (*(long *)(param_4 + 0x40) != 0) {
                                lVar16 = *(long *)(*(long *)(param_4 + 0x40) + 0x110);
                                lVar8 = FUN_03959c7c(&local_a0,0);
                                if (((lVar8 != 0) && (lVar8 = FUN_03928c2c(lVar8,0), lVar8 != 0)) &&
                                   ((lVar8 = FUN_0392a9fc(lVar8,1,0), lVar8 != 0 &&
                                    (uVar18 = FUN_0391c2b8(lVar8,0), lVar16 != 0)))) {
                                  lVar8 = *(long *)(lVar16 + 0x10);
                                  lVar13 = *(long *)puVar5;
                                  *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                                  if (lVar8 != 0) {
                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar18;
                                      thunk_FUN_01b4f09c();
                                    }
                                    else {
                                      FUN_02b599e4(lVar16,uVar18,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    lVar8 = FUN_03959c7c(&local_a0,0);
                                    if (((lVar8 != 0) && (lVar8 = FUN_03928c2c(lVar8,0), lVar8 != 0)
                                        ) && (lVar8 = FUN_0392a9fc(lVar8,1,0), lVar8 != 0)) {
                                      plVar10 = (long *)FUN_0392a954(lVar8,0);
                                      puVar4 = 
                                      Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__;
                                      puVar2 = 
                                      Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
                                      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_01b48178();
                                      }
                                      do {
                                        lVar16 = *plVar10;
                                        lVar8 = *(long *)puVar2;
                                        uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
                                        if (uVar7 != 0) {
                                          piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar15 + -2) == lVar8) {
                                              puVar11 = (undefined8 *)
                                                        (lVar16 + (long)*piVar15 * 0x10 + 0x138);
                                              goto 
                                              System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>__AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_WebConnection_<InitConnection>d__19>
                                              ;
                                            }
                                            uVar7 = uVar7 - 1;
                                            piVar15 = piVar15 + 4;
                                          } while (uVar7 != 0);
                                        }
                                        puVar11 = (undefined8 *)FUN_01ae9f78(plVar10,lVar8,0);

                                        System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>__AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_WebConnection_<InitConnection>d__19>
                                        :
                                        uVar7 = (*(code *)*puVar11)(plVar10,puVar11[1]);
                                        puVar3 = 
                                        Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__;
                                        if ((uVar7 & 1) == 0) {
                                          plVar10 = (long *)thunk_FUN_01afa9e0(plVar10,*(undefined8
                                                                                         *)
                                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                                  );
                                          if (plVar10 == (long *)0x0) {
                                            return;
                                          }
                                          lVar8 = *plVar10;
                                          uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
                                          if (uVar7 == 0) goto LAB_01c12e20;
                                          piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                                          goto LAB_01c12e08;
                                        }
                                        lVar16 = *plVar10;
                                        lVar8 = *(long *)puVar2;
                                        uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
                                        if (uVar7 != 0) {
                                          piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar15 + -2) == lVar8) {
                                              puVar11 = (undefined8 *)
                                                        (lVar16 + (long)(*piVar15 + 1) * 0x10 +
                                                        0x138);
                                              goto LAB_01c12d3c;
                                            }
                                            uVar7 = uVar7 - 1;
                                            piVar15 = piVar15 + 4;
                                          } while (uVar7 != 0);
                                        }
                                        puVar11 = (undefined8 *)FUN_01ae9f78(plVar10,lVar8,1);
LAB_01c12d3c:
                                        plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
                                        if ((plVar12 != (long *)0x0) &&
                                           (*plVar12 != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
                                          FUN_01b4841c(plVar12);
                                        }
                                        if (*(long *)(param_4 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                                          FUN_01b48178();
                                        }
                                        lVar8 = *(long *)(*(long *)(param_4 + 0x40) + 0x110);
                                        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                                          FUN_01b48178();
                                        }
                                        lVar16 = *(long *)(lVar8 + 0x10);
                                        lVar13 = *(long *)puVar5;
                                        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                                          FUN_01b48178();
                                        }
                                        uVar1 = *(uint *)(lVar8 + 0x18);
                                        if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                          plVar14 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
                                          *plVar14 = (long)plVar12;
                                          thunk_FUN_01b4f09c(plVar14,plVar12);
                                        }
                                        else {
                                          FUN_02b599e4(lVar8,plVar12,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                      } while( true );
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
      }
    }
  }
LAB_01c12e70:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar15 = piVar15 + 4;
    if (uVar7 == 0) break;
LAB_01c12e08:
    if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
      puVar11 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_01c12e3c;
    }
  }
LAB_01c12e20:
  puVar11 = (undefined8 *)FUN_01ae9f78(plVar10,*(long *)puVar3,0);
LAB_01c12e3c:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
  return;
}


