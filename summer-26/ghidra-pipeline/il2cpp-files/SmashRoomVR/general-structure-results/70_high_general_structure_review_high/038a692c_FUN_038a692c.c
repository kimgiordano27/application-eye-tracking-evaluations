/*
FUNCTION_NAME: FUN_038a692c
ENTRY_POINT: 038a692c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_14;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void FUN_038a692c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  int local_6c;
  int local_68;
  int local_64;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff8aec & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_2679);
    thunk_FUN_01ad9084(
                      Method_System_Threading_Tasks_TaskToApm_<>c__DisplayClass3_0_<InvokeCallbackWhenTaskCompletes>b__0__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_50__);
    thunk_FUN_01ad9084(StringLiteral_2494);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_52__);
    thunk_FUN_01ad9084(PTR_DAT_03da91d8);
    thunk_FUN_01ad9084(PTR_DAT_03da91e0);
    thunk_FUN_01ad9084(PTR_DAT_03da91e8);
    thunk_FUN_01ad9084(PTR_DAT_03da91f0);
    thunk_FUN_01ad9084(StringLiteral_1732);
    thunk_FUN_01ad9084(PTR_DAT_03da91f8);
    thunk_FUN_01ad9084(PTR_DAT_03da9200);
    thunk_FUN_01ad9084(PTR_DAT_03da9208);
    thunk_FUN_01ad9084(PTR_DAT_03da9210);
    thunk_FUN_01ad9084(PTR_DAT_03da9218);
    thunk_FUN_01ad9084(StringLiteral_2839);
    thunk_FUN_01ad9084(Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__);
    thunk_FUN_01ad9084(PTR_DAT_03da9220);
    DAT_03ff8aec = 1;
  }
  lVar4 = FUN_038a348c(0);
  lVar13 = *(long *)puVar1;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar13);
  }
  uVar5 = FUN_03922f24(lVar4,0,0);
  puVar3 = 
  Method_System_Threading_Tasks_TaskToApm_<>c__DisplayClass3_0_<InvokeCallbackWhenTaskCompletes>b__0__
  ;
  if ((uVar5 & 1) != 0) {
    return;
  }
  if (lVar4 != 0) {
    if (*(long *)(lVar4 + 0x18) == 0) {
      return;
    }
    plVar6 = (long *)thunk_FUN_01afaadc(*(undefined8 *)
                                         Method_System_Threading_Tasks_TaskToApm_<>c__DisplayClass3_0_<InvokeCallbackWhenTaskCompletes>b__0__
                                       );
    puVar2 = Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__;
    FUN_02eeedb8(plVar6,*(undefined8 *)
                         Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__
                 ,0);
    plVar7 = (long *)thunk_FUN_01afaadc(*(undefined8 *)puVar3);
    FUN_02eeedb8(plVar7,*(undefined8 *)puVar2,0);
    lVar4 = *(long *)(lVar4 + 0x18);
    if (lVar4 != 0) {
      if ((int)*(ulong *)(lVar4 + 0x18) < 1) {
        iVar16 = 0;
        local_6c = 0;
      }
      else {
        iVar16 = 0;
        uVar5 = 0;
        uVar14 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
        local_6c = 0;
        do {
          if (uVar14 <= uVar5) goto LAB_038a6ffc;
          lVar13 = *(long *)(lVar4 + uVar5 * 8 + 0x20);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar14 = FUN_03922f24(lVar13,0,0);
          if ((uVar14 & 1) == 0) {
            if (lVar13 == 0) goto LAB_038a7000;
            uVar14 = FUN_038a446c(lVar13);
            if ((uVar14 & 1) != 0) {
              lVar8 = FUN_01b47fd0(*(undefined8 *)
                                    Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_50__,7);
              if (lVar8 == 0) goto LAB_038a7000;
              if (*(int *)(lVar8 + 0x18) == 0) {
LAB_038a6ffc:
                    /* WARNING: Subroutine does not return */
                FUN_01b48180();
              }
              *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)StringLiteral_1732;
              thunk_FUN_01b4f09c((undefined8 *)(lVar8 + 0x20));
              if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_038a6ffc;
              *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(lVar13 + 0x20);
              thunk_FUN_01b4f09c((undefined8 *)(lVar8 + 0x28));
              if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_038a6ffc;
              *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)PTR_DAT_03da9218;
              thunk_FUN_01b4f09c((undefined8 *)(lVar8 + 0x30));
              if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_038a6ffc;
              *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)(lVar13 + 0x28);
              thunk_FUN_01b4f09c((undefined8 *)(lVar8 + 0x38));
              if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_038a6ffc;
              *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)PTR_DAT_03da91f0;
              thunk_FUN_01b4f09c((undefined8 *)(lVar8 + 0x40));
              if (*(uint *)(lVar8 + 0x18) < 6) goto LAB_038a6ffc;
              *(undefined8 *)(lVar8 + 0x48) = *(undefined8 *)(lVar13 + 0x40);
              thunk_FUN_01b4f09c((undefined8 *)(lVar8 + 0x48));
              if (*(uint *)(lVar8 + 0x18) < 7) goto LAB_038a6ffc;
              *(undefined8 *)(lVar8 + 0x50) = *(undefined8 *)StringLiteral_2839;
              thunk_FUN_01b4f09c();
              uVar9 = FUN_02ee6e18(lVar8,0);
              if (plVar6 == (long *)0x0) goto LAB_038a7000;
              FUN_02ef0524(plVar6,uVar9,0);
              uVar14 = FUN_02ee6cf0(*(undefined8 *)(lVar13 + 0x38),0);
              if ((uVar14 & 1) == 0) {
                uVar9 = FUN_02ee6c30(*(undefined8 *)PTR_DAT_03da9220,*(undefined8 *)(lVar13 + 0x38),
                                     *(undefined8 *)StringLiteral_2839,0);
                FUN_02ef0524(plVar6,uVar9,0);
                if ((*(long *)(lVar13 + 0x38) == 0) ||
                   (lVar8 = FUN_02ee8bf4(*(long *)(lVar13 + 0x38),0x20,0,0), lVar8 == 0))
                goto LAB_038a7000;
                if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
                  uVar14 = 0;
                  uVar15 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
                  do {
                    if (uVar15 <= uVar14) goto LAB_038a6ffc;
                    uVar9 = *(undefined8 *)(lVar8 + 0x20 + uVar14 * 8);
                    uVar15 = FUN_02eec9f8(uVar9,0);
                    if ((uVar15 & 1) == 0) {
                      if (*(int *)(*(long *)StringLiteral_2679 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      uVar15 = FUN_038a8cbc(uVar9);
                      if ((uVar15 & 1) == 0) {
                        lVar10 = FUN_01b47fd0(*(undefined8 *)
                                               Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_50__
                                              ,9);
                        if (lVar10 == 0) goto LAB_038a7000;
                        if (*(int *)(lVar10 + 0x18) == 0) goto LAB_038a6ffc;
                        *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)StringLiteral_1732;
                        thunk_FUN_01b4f09c((undefined8 *)(lVar10 + 0x20));
                        if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_038a6ffc;
                        *(undefined8 *)(lVar10 + 0x28) = uVar9;
                        thunk_FUN_01b4f09c((undefined8 *)(lVar10 + 0x28),uVar9);
                        if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_038a6ffc;
                        *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)PTR_DAT_03da9200;
                        thunk_FUN_01b4f09c((undefined8 *)(lVar10 + 0x30));
                        if (*(uint *)(lVar10 + 0x18) < 4) goto LAB_038a6ffc;
                        *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)(lVar13 + 0x20);
                        thunk_FUN_01b4f09c((undefined8 *)(lVar10 + 0x38));
                        if (*(uint *)(lVar10 + 0x18) < 5) goto LAB_038a6ffc;
                        *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)PTR_DAT_03da91f8;
                        thunk_FUN_01b4f09c((undefined8 *)(lVar10 + 0x40));
                        if (*(uint *)(lVar10 + 0x18) < 6) goto LAB_038a6ffc;
                        *(undefined8 *)(lVar10 + 0x48) = *(undefined8 *)(lVar13 + 0x28);
                        thunk_FUN_01b4f09c((undefined8 *)(lVar10 + 0x48));
                        if (*(uint *)(lVar10 + 0x18) < 7) goto LAB_038a6ffc;
                        *(undefined8 *)(lVar10 + 0x50) = *(undefined8 *)PTR_DAT_03da91f0;
                        thunk_FUN_01b4f09c((undefined8 *)(lVar10 + 0x50));
                        if (*(uint *)(lVar10 + 0x18) < 8) goto LAB_038a6ffc;
                        *(undefined8 *)(lVar10 + 0x58) = *(undefined8 *)(lVar13 + 0x40);
                        thunk_FUN_01b4f09c((undefined8 *)(lVar10 + 0x58));
                        if (*(uint *)(lVar10 + 0x18) < 9) goto LAB_038a6ffc;
                        *(undefined8 *)(lVar10 + 0x60) = *(undefined8 *)PTR_DAT_03da9210;
                        thunk_FUN_01b4f09c();
                        uVar9 = FUN_02ee6e18(lVar10,0);
                        if (plVar7 == (long *)0x0) goto LAB_038a7000;
                        local_6c = local_6c + 1;
                        FUN_02ef0524(plVar7,uVar9,0);
                      }
                    }
                    uVar15 = (ulong)*(uint *)(lVar8 + 0x18);
                    uVar14 = uVar14 + 1;
                  } while ((long)uVar14 < (long)(int)*(uint *)(lVar8 + 0x18));
                }
              }
              iVar16 = iVar16 + 1;
              FUN_02ef0524(plVar6,*(undefined8 *)
                                   Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_52__,0);
            }
          }
          uVar14 = (ulong)*(uint *)(lVar4 + 0x18);
          uVar5 = uVar5 + 1;
        } while ((long)uVar5 < (long)(int)*(uint *)(lVar4 + 0x18));
      }
      uVar9 = FUN_038a4724(*(undefined8 *)PTR_DAT_03da9208);
      FUN_038a4864();
      puVar1 = StringLiteral_2494;
      local_64 = iVar16;
      uVar11 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_2494,&local_64);
      if (plVar6 != (long *)0x0) {
        uVar12 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        puVar3 = PTR_DAT_03da91e8;
        uVar11 = FUN_02ee7120(*(undefined8 *)PTR_DAT_03da91e8,uVar11,uVar12,0);
        FUN_038a47b0(uVar9,*(undefined8 *)PTR_DAT_03da91d8,uVar11);
        FUN_038a4864(uVar9);
        local_68 = local_6c;
        uVar11 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_68);
        if (plVar7 != (long *)0x0) {
          uVar12 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
          uVar11 = FUN_02ee7120(*(undefined8 *)puVar3,uVar11,uVar12,0);
          FUN_038a47b0(uVar9,*(undefined8 *)PTR_DAT_03da91e0,uVar11);
          return;
        }
      }
    }
  }
LAB_038a7000:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


