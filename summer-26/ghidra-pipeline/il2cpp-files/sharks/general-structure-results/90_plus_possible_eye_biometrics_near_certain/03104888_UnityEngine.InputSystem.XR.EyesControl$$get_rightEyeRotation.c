/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.EyesControl$$get_rightEyeRotation
ENTRY_POINT: 03104888
PROGRAM: sharks-libil2cpp.so
SCORE: 140
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_EyesControl__get_rightEyeRotation(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *unaff_x19;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long in_stack_00000008;
  
  uVar2 = FUN_02a43498();
  lVar3 = (**(code **)(*unaff_x22 + 0x228))();
  if (lVar3 == 0) {
    if (*(int *)(*(long *)PTR_DAT_037f4460 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    plVar6 = (long *)FUN_02b954e8(0);
    if (plVar6 == (long *)0x0) goto LAB_03104afc;
    plVar6 = (long *)(**(code **)(*plVar6 + 0x1f8))(plVar6,*(undefined8 *)(*plVar6 + 0x200));
    lVar3 = (**(code **)(*unaff_x22 + 0x288))();
    if (lVar3 == 0) goto LAB_03104afc;
    uVar7 = *(undefined8 *)(lVar3 + 0x10);
    lVar3 = (**(code **)(*unaff_x22 + 0x2b8))();
    if (lVar3 == 0) goto LAB_03104afc;
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar9 = 0;
      uVar5 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        if (plVar6 == (long *)0x0) goto LAB_03104afc;
        lVar8 = *(long *)(lVar3 + 0x20 + uVar9 * 8);
        iVar1 = (**(code **)(*plVar6 + 0x1a8))
                          (plVar6,lVar8,uVar2,1,*(undefined8 *)(*plVar6 + 0x1b0));
        if (iVar1 == 0) {
LAB_03104ad4:
          if ((lVar8 != 0) && (lVar3 = (**(code **)(*unaff_x22 + 0x228))(), lVar3 != 0))
          goto LAB_031048b0;
          break;
        }
        uVar4 = FUN_02a43498(uVar7,*(undefined8 *)PTR_DAT_03828758,0);
        iVar1 = (**(code **)(*plVar6 + 0x1a8))
                          (plVar6,lVar8,uVar4,1,*(undefined8 *)(*plVar6 + 0x1b0));
        if (iVar1 == 0) goto LAB_03104ad4;
        uVar4 = FUN_02a43498(uVar7,*(undefined8 *)PTR_DAT_03828768,0);
        iVar1 = (**(code **)(*plVar6 + 0x1a8))
                          (plVar6,lVar8,uVar4,1,*(undefined8 *)(*plVar6 + 0x1b0));
        if (iVar1 == 0) goto LAB_03104ad4;
        uVar5 = (ulong)*(uint *)(lVar3 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)*(uint *)(lVar3 + 0x18));
    }
  }
  else {
LAB_031048b0:
    if (*(int *)(*(long *)PTR_DAT_037f4460 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar2 = FUN_02b954e8(0);
    if (in_stack_00000008 == 0) goto LAB_03104afc;
    uVar2 = FUN_02a542c0(in_stack_00000008,uVar2,0);
    FUN_03104ccc(lVar3,uVar2);
  }
  if (unaff_x19 != (long *)0x0) {
    plVar6 = (long *)*unaff_x21;
    uVar2 = (**(code **)(*unaff_x19 + 0x2b8))();
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)(**(code **)(*plVar6 + 0x308))(plVar6,uVar2,*(undefined8 *)(*plVar6 + 0x310))
      ;
      if ((plVar6 != (long *)0x0) && (*plVar6 != *(long *)PTR_DAT_037f5ae8)) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc944();
      }
      return;
    }
  }
LAB_03104afc:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


