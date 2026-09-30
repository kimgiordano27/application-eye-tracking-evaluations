/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$set_rightEyePosition
ENTRY_POINT: 05d54700
PROGRAM: hellodot-libil2cpp.so
SCORE: 148
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05d548a0) */

void Unity_XR_Oculus_Input_OculusHMD__set_rightEyePosition(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  undefined4 unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  long *plVar9;
  
  puVar2 = PTR_DAT_065cc690;
  plVar9 = *(long **)(unaff_x22 + 0xd08);
  do {
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *plVar9) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto Unity_XR_Oculus_Input_OculusHMD__get_centerEyeRotation;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02ce0a7c();
Unity_XR_Oculus_Input_OculusHMD__get_centerEyeRotation:
    uVar7 = (*(code *)*puVar3)();
    if ((uVar7 & 1) == 0) {
      plVar9 = (long *)thunk_FUN_02cea798();
      if (plVar9 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_05d54850;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *plVar9) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_05d547b8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02ce0a7c();
LAB_05d547b8:
    plVar4 = (long *)(*(code *)*puVar3)();
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018();
    }
    uVar5 = FUN_05ef2cf0(plVar4,0);
    FUN_05d54664(uVar5,unaff_w20);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *unaff_x21) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_05d5486c;
    }
  }
LAB_05d54850:
  puVar3 = (undefined8 *)FUN_02ce0a7c(plVar9,*unaff_x21,0);
LAB_05d5486c:
  (*(code *)*puVar3)(plVar9,puVar3[1]);
  return;
}


