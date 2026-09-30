/*
FUNCTION_NAME: OVRPlugin$$GetNodePose
ENTRY_POINT: 033800d8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetNodePose(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  uint uVar8;
  
  uVar3 = FUN_032ea6e0(param_1,0);
  if ((uVar3 & 1) == 0) {
LAB_03380248:
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar4 = FUN_03295500(0);
    uVar5 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_Dictionary_Enumerator<string,_NativeFeatureRuntimeConfiguration>_MoveNext__
                              );
    uVar4 = FUN_0336f2b8(uVar5,uVar4);
    thunk_FUN_01c273e8(PTR_DAT_0422fa20);
    uVar5 = thunk_FUN_01c496e0();
    FUN_0323fc78(uVar5,uVar4,0);
    uVar4 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_Dictionary_Enumerator<string,_NativeFeatureRuntimeConfiguration>_get_Current__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar5,uVar4);
  }
  uVar3 = (**(code **)(*unaff_x20 + 0x3c8))();
  puVar2 = PTR_DAT_0422fb28;
  if ((uVar3 & 1) == 0) goto LAB_03380248;
  if (unaff_x21 != (long *)0x0) {
    uVar3 = FUN_032ea6e0();
    if ((uVar3 & 1) != 0) {
      uVar3 = (**(code **)(*unaff_x21 + 0x3b8))();
      if ((uVar3 & 1) != 0) {
        (**(code **)(*unaff_x21 + 0x438))();
        lVar6 = *(long *)puVar2;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(lVar6);
        }
        uVar3 = FUN_032e935c();
        if ((uVar3 & 1) != 0) {
LAB_03380170:
          uVar4 = 1;
          goto LAB_03380228;
        }
      }
    }
    lVar6 = (**(code **)(*unaff_x21 + 0x878))();
    if (lVar6 != 0) {
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (0 < (int)uVar1) {
        uVar8 = 0;
        do {
          if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4ac();
          }
          unaff_x21 = *(long **)(lVar6 + (long)(int)uVar8 * 8 + 0x20);
          if (unaff_x21 == (long *)0x0) goto LAB_03380240;
          uVar3 = (**(code **)(*unaff_x21 + 0x3b8))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x3c0));
          if ((uVar3 & 1) != 0) {
            (**(code **)(*unaff_x21 + 0x438))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x440));
            lVar7 = *(long *)puVar2;
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(lVar7);
            }
            uVar3 = FUN_032e935c();
            if ((uVar3 & 1) != 0) goto LAB_03380170;
          }
          uVar1 = *(uint *)(lVar6 + 0x18);
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar1);
      }
      unaff_x21 = (long *)0x0;
      uVar4 = 0;
LAB_03380228:
      *unaff_x19 = unaff_x21;
      return uVar4;
    }
  }
LAB_03380240:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


