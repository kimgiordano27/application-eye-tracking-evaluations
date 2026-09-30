/*
FUNCTION_NAME: OVRFaceExpressions$$ToArray
ENTRY_POINT: 0632915c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 OVRFaceExpressions__ToArray(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long lVar7;
  undefined8 uVar8;
  
  FUN_044a3874();
  lVar2 = FUN_03f5fd04();
  if (lVar2 == 0) goto LAB_06329428;
  plVar3 = (long *)FUN_063359e0();
  if (plVar3 != (long *)0x0) {
    plVar3 = (long *)(**(code **)(*plVar3 + 0x278))
                               (plVar3,*(undefined8 *)(lVar2 + 0x18),
                                *(undefined8 *)(*plVar3 + 0x280));
    plVar4 = (long *)FUN_063359e0();
    if (plVar4 != (long *)0x0) {
      lVar2 = (**(code **)(*plVar4 + 0x278))
                        (plVar4,*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(*plVar4 + 0x280));
      puVar1 = PTR_DAT_07d86548;
      if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)(PTR_DAT_07d86548 + 0xe0));
      }
      uVar5 = FUN_0625b9c4(plVar3,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar5 = FUN_0625b9c4(lVar2,0,0);
        if ((uVar5 & 1) != 0) {
          if (lVar2 != 0) {
            uVar6 = FUN_0625d558(lVar2,0);
            puVar1 = PTR_DAT_07db3e18;
            lVar2 = *(long *)PTR_DAT_07db3e18;
            if (*(int *)(lVar2 + 0xe4) == 0) {
              thunk_FUN_03798b70(lVar2);
              lVar2 = *(long *)puVar1;
            }
            lVar7 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
            if (lVar7 == 0) {
              if (*(int *)(lVar2 + 0xe4) == 0) {
                thunk_FUN_03798b70(lVar2);
                lVar2 = *(long *)puVar1;
              }
              uVar8 = **(undefined8 **)(lVar2 + 0xb8);
              lVar7 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db3df0);
              FUN_044a3874(lVar7,uVar8,*(undefined8 *)PTR_DAT_07db3e00,0);
              plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
              *plVar4 = lVar7;
              thunk_FUN_037aeb94(plVar4,lVar7);
            }
            plVar4 = (long *)FUN_03f5fd04(uVar6,lVar7,*(undefined8 *)PTR_DAT_07db3de0);
            uVar5 = FUN_06176248(plVar4,0,0);
            puVar1 = PTR_DAT_07d92630;
            if ((uVar5 & 1) == 0) goto LAB_06329428;
            lVar2 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d92630,1);
            if (lVar2 != 0) {
              if ((unaff_x20 != 0) && (lVar7 = thunk_FUN_037787d0(), lVar7 == 0)) {
LAB_0632946c:
                uVar6 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
                FUN_0373b680(uVar6,0);
              }
              if (*(int *)(lVar2 + 0x18) == 0) {
LAB_06329468:
                    /* WARNING: Subroutine does not return */
                FUN_0373b7bc();
              }
              *(long *)(lVar2 + 0x20) = unaff_x20;
              thunk_FUN_037aeb94();
              if (plVar3 != (long *)0x0) {
                uVar6 = (**(code **)(*plVar3 + 0x978))
                                  (plVar3,lVar2,*(undefined8 *)(*plVar3 + 0x980));
                *unaff_x21 = uVar6;
                thunk_FUN_037aeb94();
                lVar2 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,1);
                if (lVar2 != 0) {
                  if ((unaff_x20 != 0) && (lVar7 = thunk_FUN_037787d0(), lVar7 == 0))
                  goto LAB_0632946c;
                  if (*(int *)(lVar2 + 0x18) == 0) goto LAB_06329468;
                  *(long *)(lVar2 + 0x20) = unaff_x20;
                  thunk_FUN_037aeb94();
                  if (plVar4 != (long *)0x0) {
                    uVar6 = (**(code **)(*plVar4 + 0x408))
                                      (plVar4,lVar2,*(undefined8 *)(*plVar4 + 0x410));
                    if (*(int *)(*(long *)PTR_DAT_07d966a0 + 0xe4) == 0) {
                      thunk_FUN_03798b70(*(long *)PTR_DAT_07d966a0);
                    }
                    plVar3 = (long *)FUN_0635ac64(0);
                    if (plVar3 != (long *)0x0) {
                      uVar6 = (**(code **)(*plVar3 + 0x188))
                                        (plVar3,uVar6,*(undefined8 *)(*plVar3 + 400));
                      *unaff_x19 = uVar6;
                      thunk_FUN_037aeb94();
                      return 1;
                    }
                  }
                }
              }
            }
          }
          goto LAB_06329464;
        }
      }
LAB_06329428:
      *unaff_x21 = 0;
      thunk_FUN_037aeb94();
      *unaff_x19 = 0;
      thunk_FUN_037aeb94();
      return 0;
    }
  }
LAB_06329464:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


