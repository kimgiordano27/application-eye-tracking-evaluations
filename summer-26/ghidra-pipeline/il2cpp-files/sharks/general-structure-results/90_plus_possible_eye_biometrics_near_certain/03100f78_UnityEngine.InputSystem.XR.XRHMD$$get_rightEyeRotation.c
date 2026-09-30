/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.XRHMD$$get_rightEyeRotation
ENTRY_POINT: 03100f78
PROGRAM: sharks-libil2cpp.so
SCORE: 137
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_XRHMD__get_rightEyeRotation(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  
  if ((DAT_03a2bb4f & 1) == 0) {
    FUN_017fc350(PTR_DAT_03827528);
    FUN_017fc350(PTR_DAT_03827b78);
    DAT_03a2bb4f = 1;
  }
  if ((*param_1 != 0) && (plVar2 = *(long **)(*param_1 + 0x28), plVar2 != (long *)0x0)) {
    if (*plVar2 == *(long *)PTR_DAT_03827b78) {
      FUN_030e6678(plVar2,param_1[1]);
      return;
    }
    plVar2 = (long *)(**(code **)(*plVar2 + 0x1e8))
                               (plVar2,param_1[1],param_1[2],*(undefined8 *)(*plVar2 + 0x1f0));
    if (plVar2 == (long *)0x0) {
      uVar4 = thunk_FUN_01851c08(PTR_DAT_037f2f98);
      uVar4 = FUN_017fc3f4(uVar4,2);
      lVar5 = *param_1;
      FUN_015d6ff8(lVar5);
      uVar8 = *(undefined8 *)(lVar5 + 0x28);
      FUN_015d6ff8(uVar8);
      plVar2 = (long *)thunk_FUN_0187f3ac(uVar8,0);
      FUN_015d6ff8();
      uVar8 = (**(code **)(*plVar2 + 0x2c8))(plVar2,*(undefined8 *)(*plVar2 + 0x2d0));
      FUN_015d6ff8(uVar4);
      FUN_015d7aec(uVar4,uVar8);
      FUN_015d7b20(uVar4,0,uVar8);
      FUN_015d6ff8(uVar4);
      puVar1 = PTR_DAT_03828460;
      uVar8 = thunk_FUN_01851c08(PTR_DAT_03828460);
      FUN_015d7aec(uVar4,uVar8);
      uVar8 = thunk_FUN_01851c08(puVar1);
      FUN_015d7b20(uVar4,1,uVar8);
      uVar8 = thunk_FUN_01851c08(PTR_DAT_038283e0);
      uVar4 = FUN_02a2f348(uVar8,uVar4,0);
      thunk_FUN_01851c08(PTR_DAT_037f8d50);
      uVar8 = thunk_FUN_01861bbc();
      FUN_02bcf690(uVar8,uVar4,0);
      uVar4 = thunk_FUN_01851c08(PTR_DAT_03828470);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar8,uVar4);
    }
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_03827528) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_03101050;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0185dba8(plVar2,*(long *)PTR_DAT_03827528,1);
LAB_03101050:
    lVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if (lVar5 != 0) {
      return;
    }
    plVar2 = (long *)param_1[1];
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03101088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x2c8))(plVar2,*(undefined8 *)(*plVar2 + 0x2d0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


