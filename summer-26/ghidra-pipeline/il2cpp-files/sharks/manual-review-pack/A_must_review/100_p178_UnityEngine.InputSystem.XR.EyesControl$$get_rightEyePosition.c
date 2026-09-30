/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.EyesControl$$get_rightEyePosition
ENTRY_POINT: 03104870
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


void UnityEngine_InputSystem_XR_EyesControl__get_rightEyePosition(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *unaff_x19;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  
  lVar2 = FUN_02b57ff4();
  uVar3 = FUN_02a43498(lVar2,*(undefined8 *)PTR_DAT_03828760,0);
  lVar4 = (**(code **)(*unaff_x22 + 0x228))();
  if (lVar4 == 0) {
    if (*(int *)(*(long *)PTR_DAT_037f4460 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    plVar7 = (long *)FUN_02b954e8(0);
    if (plVar7 == (long *)0x0) goto LAB_03104afc;
    plVar7 = (long *)(**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200));
    lVar4 = (**(code **)(*unaff_x22 + 0x288))();
    if (lVar4 == 0) goto LAB_03104afc;
    uVar8 = *(undefined8 *)(lVar4 + 0x10);
    lVar4 = (**(code **)(*unaff_x22 + 0x2b8))();
    if (lVar4 == 0) goto LAB_03104afc;
    if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
      uVar10 = 0;
      uVar6 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        if (uVar6 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        if (plVar7 == (long *)0x0) goto LAB_03104afc;
        lVar9 = *(long *)(lVar4 + 0x20 + uVar10 * 8);
        iVar1 = (**(code **)(*plVar7 + 0x1a8))
                          (plVar7,lVar9,uVar3,1,*(undefined8 *)(*plVar7 + 0x1b0));
        if (iVar1 == 0) {
LAB_03104ad4:
          if ((lVar9 != 0) && (lVar4 = (**(code **)(*unaff_x22 + 0x228))(), lVar4 != 0))
          goto LAB_031048b0;
          break;
        }
        uVar5 = FUN_02a43498(uVar8,*(undefined8 *)PTR_DAT_03828758,0);
        iVar1 = (**(code **)(*plVar7 + 0x1a8))
                          (plVar7,lVar9,uVar5,1,*(undefined8 *)(*plVar7 + 0x1b0));
        if (iVar1 == 0) goto LAB_03104ad4;
        uVar5 = FUN_02a43498(uVar8,*(undefined8 *)PTR_DAT_03828768,0);
        iVar1 = (**(code **)(*plVar7 + 0x1a8))
                          (plVar7,lVar9,uVar5,1,*(undefined8 *)(*plVar7 + 0x1b0));
        if (iVar1 == 0) goto LAB_03104ad4;
        uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
  }
  else {
LAB_031048b0:
    if (*(int *)(*(long *)PTR_DAT_037f4460 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar3 = FUN_02b954e8(0);
    if (lVar2 == 0) goto LAB_03104afc;
    uVar3 = FUN_02a542c0(lVar2,uVar3,0);
    FUN_03104ccc(lVar4,uVar3);
  }
  if (unaff_x19 != (long *)0x0) {
    plVar7 = (long *)*unaff_x21;
    uVar3 = (**(code **)(*unaff_x19 + 0x2b8))();
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x308))(plVar7,uVar3,*(undefined8 *)(*plVar7 + 0x310))
      ;
      if ((plVar7 != (long *)0x0) && (*plVar7 != *(long *)PTR_DAT_037f5ae8)) {
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


