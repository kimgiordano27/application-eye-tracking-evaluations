/*
FUNCTION_NAME: UnityEngine.Cursor$$SetCursor
ENTRY_POINT: 0380e1d0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_14;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_6
*/


void UnityEngine_Cursor__SetCursor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar7;
  undefined8 *unaff_x22;
  undefined8 uVar8;
  long unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  thunk_FUN_01ad9084(PTR_DAT_03da5ab8);
  thunk_FUN_01ad9084(PTR_DAT_03da5b00);
  thunk_FUN_01ad9084(PTR_DAT_03da5ac8);
  thunk_FUN_01ad9084(PTR_DAT_03da5b08);
  *(undefined1 *)(unaff_x23 + 0x391) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  FUN_03809d90();
  uVar5 = thunk_FUN_01afaadc(*unaff_x20);
  FUN_0385af0c(uVar5,0);
  *(undefined8 *)(unaff_x19 + 0x360) = uVar5;
  thunk_FUN_01b4f09c(unaff_x19 + 0x360,uVar5);
  lVar7 = *(long *)(unaff_x19 + 0x360);
  uVar5 = thunk_FUN_01afaadc(*unaff_x22);
  FUN_02518910();
  if (lVar7 != 0) {
    FUN_03859f78(lVar7,uVar5,0);
    *(undefined4 *)(unaff_x19 + 700) = *(undefined4 *)(unaff_x19 + 0x1ec);
    uVar6 = FUN_01e8b8bc();
    if ((uVar6 & 1) == 0) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038f2f0c(*(undefined8 *)PTR_DAT_03da5b08);
    }
    if (*(long *)(unaff_x19 + 800) != 0) {
      FUN_01e8b614(*(long *)(unaff_x19 + 800),1,*(undefined8 *)(unaff_x19 + 0x348),
                   *(undefined8 *)PTR_DAT_03da5ad0);
      puVar3 = PTR_DAT_03da5af8;
      puVar2 = 
      Field_<PrivateImplementationDetails>_2E72A286F6E80D4ED2E83596D4A0AA21DCECB4DD925F30310EC73BCDF7BCFF08
      ;
      puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      lVar7 = *(long *)(unaff_x19 + 0x348);
      if (lVar7 != 0) {
        iVar4 = *(int *)(lVar7 + 0x18) + -1;
        if (iVar4 < 0) {
LAB_0380e390:
          FUN_0391c27c();
          FUN_0380e868();
          puVar1 = PTR_DAT_03da5ab0;
          if (*(int *)(unaff_x19 + 0x244) == 1) {
            lVar7 = FUN_01f66724();
            if (lVar7 != 0) {
              FUN_0391b78c(lVar7,1,0);
              return;
            }
          }
          else if (*(long *)(unaff_x19 + 0x260) != 0) {
            iVar4 = FUN_02353a38(*(long *)(unaff_x19 + 0x260),*(undefined8 *)PTR_DAT_03da5ab0);
            if (iVar4 < 1) {
              if (*(long *)(unaff_x19 + 0x248) == 0) goto UnityEngine_Logger__set_filterLogType;
              FUN_02b5a400(&stack0x00000008,*(long *)(unaff_x19 + 0x248),
                           *(undefined8 *)PTR_DAT_03da5af0);
              puVar3 = PTR_DAT_03da5ae0;
              puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
              in_stack_00000028 = in_stack_00000010;
              in_stack_00000020 = in_stack_00000008;
              in_stack_00000030 = in_stack_00000018;
              while (uVar6 = FUN_02739b98(&stack0x00000020,*(undefined8 *)puVar3),
                    uVar5 = in_stack_00000030, (uVar6 & 1) != 0) {
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar6 = FUN_0391f968(uVar5,0,0);
                if ((uVar6 & 1) != 0) {
                  FUN_0380fa50();
                }
              }
            }
            else {
              if (*(long *)(unaff_x19 + 0x248) == 0) goto UnityEngine_Logger__set_filterLogType;
              FUN_02b5a400(&stack0x00000008,*(long *)(unaff_x19 + 0x248),
                           *(undefined8 *)PTR_DAT_03da5af0);
              puVar3 = PTR_DAT_03da5ae0;
              puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
              in_stack_00000028 = in_stack_00000010;
              in_stack_00000020 = in_stack_00000008;
              in_stack_00000030 = in_stack_00000018;
              while (uVar6 = FUN_02739b98(&stack0x00000020,*(undefined8 *)puVar3),
                    uVar5 = in_stack_00000030, (uVar6 & 1) != 0) {
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar6 = FUN_0391f968(uVar5,0,0);
                if ((uVar6 & 1) != 0) {
                  FUN_0380fdf8();
                }
              }
            }
            FUN_02739b94(&stack0x00000020,*(undefined8 *)PTR_DAT_03da5ad8);
            if (*(long *)(unaff_x19 + 0x268) != 0) {
              iVar4 = FUN_02353a38(*(long *)(unaff_x19 + 0x268),*(undefined8 *)puVar1);
              if (iVar4 < 1) {
                if (*(long *)(unaff_x19 + 0x250) != 0) {
                  FUN_02b5a400(&stack0x00000008,*(long *)(unaff_x19 + 0x250),
                               *(undefined8 *)PTR_DAT_03da5af0);
                  puVar2 = PTR_DAT_03da5ae0;
                  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
                  in_stack_00000028 = in_stack_00000010;
                  in_stack_00000020 = in_stack_00000008;
                  in_stack_00000030 = in_stack_00000018;
                  while (uVar6 = FUN_02739b98(&stack0x00000020,*(undefined8 *)puVar2),
                        uVar5 = in_stack_00000030, (uVar6 & 1) != 0) {
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar6 = FUN_0391f968(uVar5,0,0);
                    if ((uVar6 & 1) != 0) {
                      FUN_0380fa50();
                    }
                  }
                  goto LAB_0380e784;
                }
              }
              else if (*(long *)(unaff_x19 + 0x250) != 0) {
                FUN_02b5a400(&stack0x00000008,*(long *)(unaff_x19 + 0x250),
                             *(undefined8 *)PTR_DAT_03da5af0);
                puVar2 = PTR_DAT_03da5ae0;
                puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
                in_stack_00000028 = in_stack_00000010;
                in_stack_00000020 = in_stack_00000008;
                in_stack_00000030 = in_stack_00000018;
                while (uVar6 = FUN_02739b98(&stack0x00000020,*(undefined8 *)puVar2),
                      uVar5 = in_stack_00000030, (uVar6 & 1) != 0) {
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  uVar6 = FUN_0391f968(uVar5,0,0);
                  if ((uVar6 & 1) != 0) {
                    FUN_0380fdf8();
                  }
                }
LAB_0380e784:
                FUN_02739b94(&stack0x00000020,*(undefined8 *)PTR_DAT_03da5ad8);
                FUN_0380e918();
                return;
              }
            }
          }
        }
        else {
          do {
            lVar7 = FUN_02b59714(lVar7,iVar4,*(undefined8 *)puVar2);
            if (lVar7 == 0) break;
            uVar5 = FUN_03959e14(lVar7,0);
            uVar8 = *(undefined8 *)(unaff_x19 + 800);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)puVar1);
            }
            uVar6 = FUN_0391f968(uVar5,uVar8,0);
            if ((uVar6 & 1) != 0) {
              if (*(long *)(unaff_x19 + 0x348) == 0) break;
              FUN_02b5b0dc(*(long *)(unaff_x19 + 0x348),iVar4,*(undefined8 *)puVar3);
            }
            iVar4 = iVar4 + -1;
            if (iVar4 < 0) goto LAB_0380e390;
            lVar7 = *(long *)(unaff_x19 + 0x348);
          } while (lVar7 != 0);
        }
      }
    }
  }
UnityEngine_Logger__set_filterLogType:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


