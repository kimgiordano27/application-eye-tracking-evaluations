/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.EyesControl$$set_rightEyeRotation
ENTRY_POINT: 03104890
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


void UnityEngine_InputSystem_XR_EyesControl__set_rightEyeRotation(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *unaff_x19;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long in_stack_00000008;
  
  lVar2 = (**(code **)(param_1 + 0x228))();
  if (lVar2 == 0) {
    if (*(int *)(*(long *)PTR_DAT_037f4460 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    plVar6 = (long *)FUN_02b954e8(0);
    if (plVar6 == (long *)0x0) goto LAB_03104afc;
    plVar6 = (long *)(**(code **)(*plVar6 + 0x1f8))(plVar6,*(undefined8 *)(*plVar6 + 0x200));
    lVar2 = (**(code **)(*unaff_x22 + 0x288))();
    if (lVar2 == 0) goto LAB_03104afc;
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
    lVar2 = (**(code **)(*unaff_x22 + 0x2b8))();
    if (lVar2 == 0) goto LAB_03104afc;
    if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
      uVar8 = 0;
      uVar5 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        if (plVar6 == (long *)0x0) goto LAB_03104afc;
        lVar7 = *(long *)(lVar2 + 0x20 + uVar8 * 8);
        iVar1 = (**(code **)(*plVar6 + 0x1a8))
                          (plVar6,lVar7,param_2,1,*(undefined8 *)(*plVar6 + 0x1b0));
        if (iVar1 == 0) {
LAB_03104ad4:
          if ((lVar7 != 0) && (lVar2 = (**(code **)(*unaff_x22 + 0x228))(), lVar2 != 0))
          goto LAB_031048b0;
          break;
        }
        uVar4 = FUN_02a43498(uVar3,*(undefined8 *)PTR_DAT_03828758,0);
        iVar1 = (**(code **)(*plVar6 + 0x1a8))
                          (plVar6,lVar7,uVar4,1,*(undefined8 *)(*plVar6 + 0x1b0));
        if (iVar1 == 0) goto LAB_03104ad4;
        uVar4 = FUN_02a43498(uVar3,*(undefined8 *)PTR_DAT_03828768,0);
        iVar1 = (**(code **)(*plVar6 + 0x1a8))
                          (plVar6,lVar7,uVar4,1,*(undefined8 *)(*plVar6 + 0x1b0));
        if (iVar1 == 0) goto LAB_03104ad4;
        uVar5 = (ulong)*(uint *)(lVar2 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar2 + 0x18));
    }
  }
  else {
LAB_031048b0:
    if (*(int *)(*(long *)PTR_DAT_037f4460 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar3 = FUN_02b954e8(0);
    if (in_stack_00000008 == 0) goto LAB_03104afc;
    uVar3 = FUN_02a542c0(in_stack_00000008,uVar3,0);
    FUN_03104ccc(lVar2,uVar3);
  }
  if (unaff_x19 != (long *)0x0) {
    plVar6 = (long *)*unaff_x21;
    uVar3 = (**(code **)(*unaff_x19 + 0x2b8))();
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)(**(code **)(*plVar6 + 0x308))(plVar6,uVar3,*(undefined8 *)(*plVar6 + 0x310))
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


