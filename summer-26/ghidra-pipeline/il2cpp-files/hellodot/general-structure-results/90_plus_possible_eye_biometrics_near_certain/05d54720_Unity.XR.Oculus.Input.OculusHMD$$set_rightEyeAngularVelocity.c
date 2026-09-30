/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$set_rightEyeAngularVelocity
ENTRY_POINT: 05d54720
PROGRAM: hellodot-libil2cpp.so
SCORE: 137
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05d548a0) */

void Unity_XR_Oculus_Input_OculusHMD__set_rightEyeAngularVelocity
               (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong in_x9;
  long in_x10;
  int *piVar7;
  long *unaff_x19;
  undefined4 unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  
  do {
    piVar7 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar7 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
        goto Unity_XR_Oculus_Input_OculusHMD__get_centerEyeRotation;
      }
      in_x9 = in_x9 - 1;
      piVar7 = piVar7 + 4;
    } while (in_x9 != 0);
    do {
      puVar2 = (undefined8 *)FUN_02ce0a7c();
Unity_XR_Oculus_Input_OculusHMD__get_centerEyeRotation:
      uVar3 = (*(code *)*puVar2)();
      if ((uVar3 & 1) == 0) {
        plVar4 = (long *)thunk_FUN_02cea798();
        if (plVar4 == (long *)0x0) {
          return;
        }
        lVar6 = *plVar4;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar3 == 0) goto LAB_05d54850;
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_05d54838;
      }
      lVar6 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x22) {
            puVar2 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_05d547b8;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_05d547b8:
      plVar4 = (long *)(*(code *)*puVar2)();
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      bVar1 = *(byte *)(*unaff_x23 + 0x130);
      if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23)) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018();
      }
      uVar5 = FUN_05ef2cf0(plVar4,0);
      FUN_05d54664(uVar5,unaff_w20);
      param_1 = *unaff_x19;
      param_3 = *unaff_x22;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar7 = piVar7 + 4;
    if (uVar3 == 0) break;
LAB_05d54838:
    if (*(long *)(piVar7 + -2) == *unaff_x21) {
      puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_05d5486c;
    }
  }
LAB_05d54850:
  puVar2 = (undefined8 *)FUN_02ce0a7c(plVar4,*unaff_x21,0);
LAB_05d5486c:
  (*(code *)*puVar2)(plVar4,puVar2[1]);
  return;
}


