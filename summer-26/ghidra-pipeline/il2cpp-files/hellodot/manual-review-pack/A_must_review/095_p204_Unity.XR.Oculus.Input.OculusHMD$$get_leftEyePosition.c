/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$get_leftEyePosition
ENTRY_POINT: 05d546a8
PROGRAM: hellodot-libil2cpp.so
SCORE: 161
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05d548a0) */

void Unity_XR_Oculus_Input_OculusHMD__get_leftEyePosition(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  
  AkMIDIEventCallbackInfo__get_byProgramNum();
  *(undefined1 *)(unaff_x21 + 0xa18) = 1;
  if (unaff_x19 != 0) {
    FUN_05efaf9c();
    FUN_05efafd8();
    lVar5 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed();
    puVar2 = PTR_DAT_065c8a48;
    if (lVar5 != 0) {
      plVar6 = (long *)FUN_05f048a0(lVar5,0);
      puVar4 = PTR_DAT_065cc690;
      puVar3 = PTR_DAT_065c8d08;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      do {
        lVar10 = *plVar6;
        lVar5 = *(long *)puVar3;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar5) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto Unity_XR_Oculus_Input_OculusHMD__get_centerEyeRotation;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_02ce0a7c(plVar6,lVar5,0);
Unity_XR_Oculus_Input_OculusHMD__get_centerEyeRotation:
        uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar11 & 1) == 0) {
          plVar6 = (long *)thunk_FUN_02cea798(plVar6,*(undefined8 *)puVar2);
          if (plVar6 == (long *)0x0) {
            return;
          }
          lVar10 = *plVar6;
          lVar5 = *(long *)puVar2;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 == 0) goto LAB_05d54850;
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_05d54838;
        }
        lVar10 = *plVar6;
        lVar5 = *(long *)puVar3;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar5) {
              puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_05d547b8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_02ce0a7c(plVar6,lVar5,1);
LAB_05d547b8:
        plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce8018();
        }
        uVar9 = FUN_05ef2cf0(plVar8,0);
        FUN_05d54664(uVar9,unaff_w20);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_05d54838:
    if (*(long *)(piVar12 + -2) == lVar5) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_05d5486c;
    }
  }
LAB_05d54850:
  puVar7 = (undefined8 *)FUN_02ce0a7c(plVar6,lVar5,0);
LAB_05d5486c:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}


