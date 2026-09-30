/*
FUNCTION_NAME: bg$$c
ENTRY_POINT: 01bc9c78
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void bg__c(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  float *pfVar14;
  int iVar15;
  long *plVar16;
  undefined8 *puVar17;
  long unaff_x21;
  undefined4 uVar18;
  
  puVar2 = Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_1__;
  if ((*(byte *)(unaff_x21 + 0x1ce) & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_10__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_1__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_2__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_3__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_4__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_5__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRRestarter_<RestartCoroutine>d__26_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_6__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_7__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_8__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_9__);
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_PointableCanvasModule_<>c__DisplayClass24_0_<AddPointerCanvas>b__0__
                      );
    *(undefined1 *)(unaff_x21 + 0x1ce) = 1;
  }
  **(long **)(*(long *)puVar2 + 0xb8) = param_4;
  thunk_FUN_01b4f09c(*(undefined8 *)(*(long *)puVar2 + 0xb8),param_4);
  lVar9 = FUN_0391c27c(param_4,0);
  if (lVar9 != 0) {
    uVar18 = FUN_03928d34(lVar9,0);
    *(undefined4 *)(param_4 + 0xa8) = uVar18;
    *(undefined4 *)(param_4 + 0xac) = param_2;
    *(undefined4 *)(param_4 + 0xb0) = param_3;
    lVar9 = FUN_0391c2b8(param_4,0);
    puVar3 = Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_8__;
    puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (lVar9 != 0) {
      FUN_0391fb70(lVar9,0,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar10 = FUN_01f25510(*(undefined8 *)puVar3);
      *(undefined8 *)(param_4 + 0xb8) = uVar10;
      thunk_FUN_01b4f09c((undefined8 *)(param_4 + 0xb8),uVar10);
      puVar8 = Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_9__;
      puVar7 = Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_7__;
      puVar6 = Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_6__;
      puVar5 = Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_5__;
      puVar4 = Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_2__;
      puVar3 = Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__;
      lVar9 = *(long *)(param_4 + 0x78);
      if (lVar9 != 0) {
        iVar15 = 0;
        do {
          if (*(int *)(lVar9 + 0x18) <= iVar15) {
            if (*(long *)(param_4 + 0x68) != 0) {
              lVar9 = FUN_01b47fd0(*(undefined8 *)puVar8,
                                   *(undefined4 *)(*(long *)(param_4 + 0x68) + 0x18));
              plVar16 = (long *)(param_4 + 0x98);
              *plVar16 = lVar9;
              thunk_FUN_01b4f09c(plVar16,lVar9);
              lVar9 = *plVar16;
              if (lVar9 != 0) {
                uVar1 = *(uint *)(lVar9 + 0x18);
                if ((long)((ulong)uVar1 << 0x20) < 1) goto LAB_01bc9ed0;
                uVar13 = 0;
                pfVar14 = (float *)(lVar9 + 0x24);
                goto LAB_01bc9ea8;
              }
            }
            break;
          }
          lVar9 = FUN_02b59714(lVar9,iVar15,*(undefined8 *)puVar3);
          if (lVar9 == 0) break;
          FUN_0391fb70(lVar9,0,0);
          lVar9 = *(long *)(param_4 + 0x78);
          iVar15 = iVar15 + 1;
        } while (lVar9 != 0);
      }
    }
  }
  goto LAB_01bc9f70;
  while( true ) {
    uVar13 = uVar13 + 1;
    pfVar14[-1] = *(float *)(param_4 + 0x8c);
    *pfVar14 = -*(float *)(param_4 + 0x90);
    pfVar14 = pfVar14 + 2;
    if ((long)(int)uVar1 <= (long)uVar13) break;
LAB_01bc9ea8:
    if (uVar1 <= uVar13) goto LAB_01bca174;
  }
LAB_01bc9ed0:
  if (*(long *)(param_4 + 0x68) != 0) {
    uVar10 = FUN_01b47fd0(*(undefined8 *)puVar4,*(undefined4 *)(*(long *)(param_4 + 0x68) + 0x18));
    puVar17 = (undefined8 *)(param_4 + 0xa0);
    *puVar17 = uVar10;
    thunk_FUN_01b4f09c(puVar17,uVar10);
    plVar16 = (long *)*puVar17;
    if (plVar16 != (long *)0x0) {
      uVar13 = 0;
      lVar9 = 0x20;
      do {
        if ((long)(int)plVar16[3] <= (long)uVar13) {
          uVar10 = *(undefined8 *)(param_4 + 0x60);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar13 = FUN_03923030(uVar10,0);
          if ((uVar13 & 1) != 0) {
            uVar10 = *(undefined8 *)(param_4 + 0x60);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            FUN_01f25754(uVar10,*(undefined8 *)
                                 Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__);
          }
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          lVar9 = FUN_01f25510(*(undefined8 *)puVar7);
          plVar16 = (long *)(param_4 + 200);
          *plVar16 = lVar9;
          thunk_FUN_01b4f09c(plVar16,lVar9);
          uVar13 = FUN_03923030(*plVar16,0);
          if ((uVar13 & 1) == 0) {
            if (*(int *)(*(long *)
                          Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            FUN_038f2e04(*(undefined8 *)
                          Method_Oculus_Interaction_PointableCanvasModule_<>c__DisplayClass24_0_<AddPointerCanvas>b__0__
                         ,0);
            return;
          }
          if (*plVar16 == 0) break;
          FUN_01bca184(*plVar16,*(undefined4 *)(param_4 + 0xd8));
          if (*(long *)(param_4 + 200) == 0) break;
          lVar9 = *(long *)(param_4 + 0x78);
          uVar10 = FUN_0391c2b8(*(long *)(param_4 + 200),0);
          if (lVar9 == 0) break;
          uVar13 = FUN_02b59d74(lVar9,uVar10,
                                *(undefined8 *)
                                 Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_4__);
          if ((uVar13 & 1) == 0) {
            if (*(long *)(param_4 + 200) == 0) break;
            lVar9 = *(long *)(param_4 + 0x78);
            uVar10 = FUN_0391c2b8(*(long *)(param_4 + 200),0);
            if (lVar9 == 0) break;
            lVar11 = *(long *)(lVar9 + 0x10);
            lVar12 = *(long *)Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_3__;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar11 == 0) break;
            uVar1 = *(uint *)(lVar9 + 0x18);
            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
              thunk_FUN_01b4f09c();
            }
            else {
              FUN_02b599e4(lVar9,uVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
          }
          lVar9 = FUN_01e8a9f8(param_4,*(undefined8 *)
                                        Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_10__
                              );
          if ((*(long *)(param_4 + 200) != 0) &&
             (uVar10 = FUN_0391c2b8(*(long *)(param_4 + 200),0), lVar9 != 0)) {
            *(undefined8 *)(lVar9 + 0x48) = uVar10;
            thunk_FUN_01b4f09c((undefined8 *)(lVar9 + 0x48),uVar10);
            if ((*plVar16 != 0) && (lVar9 = FUN_0391c2b8(*plVar16,0), lVar9 != 0)) {
              FUN_0391fb70(lVar9,0,0);
              return;
            }
          }
          break;
        }
        lVar11 = thunk_FUN_01afaadc(*(undefined8 *)puVar6);
        FUN_02b591b0(lVar11,*(undefined8 *)puVar5);
        if ((lVar11 != 0) &&
           (lVar12 = thunk_FUN_01afa9e0(lVar11,*(undefined8 *)(*plVar16 + 0x40)), lVar12 == 0)) {
          uVar10 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
          FUN_01b48050(uVar10,0);
        }
        if (*(uint *)(plVar16 + 3) <= uVar13) {
LAB_01bca174:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        plVar16[uVar13 + 4] = lVar11;
        thunk_FUN_01b4f09c((long)plVar16 + lVar9,lVar11);
        plVar16 = (long *)*puVar17;
        uVar13 = uVar13 + 1;
        lVar9 = lVar9 + 8;
      } while (plVar16 != (long *)0x0);
    }
  }
LAB_01bc9f70:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


