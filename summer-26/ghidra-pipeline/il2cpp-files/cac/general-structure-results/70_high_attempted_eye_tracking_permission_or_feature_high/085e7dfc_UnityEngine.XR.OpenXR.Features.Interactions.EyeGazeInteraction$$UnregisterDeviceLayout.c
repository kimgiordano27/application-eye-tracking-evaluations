/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$UnregisterDeviceLayout
ENTRY_POINT: 085e7dfc
PROGRAM: cac-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__UnregisterDeviceLayout
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000000;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 *in_stack_00000058;
  undefined8 in_stack_00000060;
  
  (**(code **)(param_1 + 0x138))();
  if (unaff_x19[0x14] != 0) {
    iVar3 = FUN_06bf052c(unaff_x19[0x14],*(undefined8 *)PTR_DAT_091993d8);
    if (iVar3 < 1) {
LAB_085e7f88:
      if (unaff_x19[0x13] != 0) {
        iVar3 = FUN_06bf052c(unaff_x19[0x13],*(undefined8 *)PTR_DAT_091993d0);
        if (iVar3 < 1) {
LAB_085e810c:
          if ((long *)unaff_x19[0x14] != (long *)0x0) {
            uVar5 = (**(code **)(*(long *)unaff_x19[0x14] + 0x1a8))();
            if ((uVar5 & 1) == 0) {
              return;
            }
            if (unaff_x19[0x1c] != 0) {
              FUN_051367a8();
              if (unaff_x19[0x26] != 0) {
                _in_stack_00000018 =
                     FUN_054da1fc(unaff_x19[0x26],&stack0x00000028,*(undefined8 *)PTR_DAT_091993e8);
                if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f1362c();
                }
                *(long **)(in_stack_00000028 + 0x10) = unaff_x19;
                thunk_FUN_03f86000();
                if (in_stack_00000028 != 0) {
                  *(long *)(in_stack_00000028 + 0x18) = unaff_x20;
                  thunk_FUN_03f86000();
                  (**(code **)(*unaff_x19 + 0x288))();
                  FUN_05c8ce0c(&stack0x00000018,*(undefined8 *)PTR_DAT_091993f0);
                  return;
                }
                    /* WARNING: Subroutine does not return */
                FUN_03f1362c();
              }
            }
          }
        }
        else {
          plVar4 = (long *)unaff_x19[0x13];
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x1c8))(plVar4,unaff_x19[0x1e],*(undefined8 *)(*plVar4 + 0x1d0));
            if (unaff_x19[0x1e] != 0) {
              FUN_056b1374(unaff_x19[0x1e],*(undefined8 *)PTR_DAT_09199350);
              puVar2 = PTR_DAT_091993a0;
              puVar1 = PTR_DAT_09199310;
              in_stack_00000038 = in_stack_00000008;
              in_stack_00000030 = in_stack_00000000;
              in_stack_00000040 = in_stack_00000010;
              do {
                do {
                  uVar5 = FUN_072070ec(&stack0x00000030,*(undefined8 *)puVar1);
                  if ((uVar5 & 1) == 0) {
                    FUN_072070e8(&stack0x00000030,*(undefined8 *)PTR_DAT_09199300);
                    goto LAB_085e810c;
                  }
                  plVar4 = (long *)thunk_FUN_03f4e590(in_stack_00000040,*(undefined8 *)puVar2);
                } while (plVar4 == (long *)0x0);
                lVar9 = *plVar4;
                lVar8 = *(long *)puVar2;
                uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar5 != 0) {
                  piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) == lVar8) {
                      puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                      goto LAB_085e8074;
                    }
                    uVar5 = uVar5 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar5 != 0);
                }
                puVar6 = (undefined8 *)FUN_03f4b594(plVar4,lVar8,0);
LAB_085e8074:
                lVar8 = (*(code *)*puVar6)(plVar4,puVar6[1]);
              } while (lVar8 != unaff_x20);
              uVar7 = FUN_0731d5f8(*(undefined8 *)PTR_DAT_09199400);
              uVar7 = FUN_0731ca20(uVar7,*(undefined8 *)PTR_DAT_091993f8,0);
              if (*(int *)(*(long *)PTR_DAT_0910b5c0 + 0xe4) == 0) {
                thunk_FUN_03f6fea8();
              }
              FUN_08791f2c(uVar7);
              puVar6 = &stack0x00000030;
              puVar10 = (undefined8 *)PTR_DAT_09199300;
              goto LAB_085e80ec;
            }
          }
        }
      }
    }
    else {
      plVar4 = (long *)unaff_x19[0x14];
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x1c8))(plVar4,unaff_x19[0x1d],*(undefined8 *)(*plVar4 + 0x1d0));
        if (unaff_x19[0x1d] != 0) {
          FUN_056b1374(unaff_x19[0x1d],*(undefined8 *)PTR_DAT_09199348);
          puVar2 = PTR_DAT_091993a0;
          puVar1 = PTR_DAT_09199318;
          in_stack_00000058 = in_stack_00000008;
          in_stack_00000050 = in_stack_00000000;
          in_stack_00000060 = in_stack_00000010;
          in_stack_00000000 = 0;
          do {
            do {
              uVar5 = FUN_072070ec(&stack0x00000050,*(undefined8 *)puVar1);
              if ((uVar5 & 1) == 0) {
                FUN_072070e8(&stack0x00000050,*(undefined8 *)PTR_DAT_09199308);
                in_stack_00000008 = &stack0x00000050;
                goto LAB_085e7f88;
              }
              plVar4 = (long *)thunk_FUN_03f4e590(in_stack_00000060,*(undefined8 *)puVar2);
            } while (plVar4 == (long *)0x0);
            lVar9 = *plVar4;
            lVar8 = *(long *)puVar2;
            uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar5 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar8) {
                  puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_085e7ef8;
                }
                uVar5 = uVar5 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar5 != 0);
            }
            puVar6 = (undefined8 *)FUN_03f4b594(plVar4,lVar8,0);
LAB_085e7ef8:
            lVar8 = (*(code *)*puVar6)(plVar4,puVar6[1]);
          } while (lVar8 != unaff_x20);
          uVar7 = FUN_0731d5f8(*(undefined8 *)PTR_DAT_09199400);
          uVar7 = FUN_0731ca20(uVar7,*(undefined8 *)PTR_DAT_091993f8,0);
          if (*(int *)(*(long *)PTR_DAT_0910b5c0 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          FUN_08791f2c(uVar7);
          puVar6 = &stack0x00000050;
          puVar10 = (undefined8 *)PTR_DAT_09199308;
LAB_085e80ec:
          FUN_072070e8(puVar6,*puVar10);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


