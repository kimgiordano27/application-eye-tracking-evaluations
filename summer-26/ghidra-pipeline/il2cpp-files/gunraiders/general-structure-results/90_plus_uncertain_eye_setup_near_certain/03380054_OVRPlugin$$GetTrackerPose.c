/*
FUNCTION_NAME: OVRPlugin$$GetTrackerPose
ENTRY_POINT: 03380054
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


undefined8 OVRPlugin__GetTrackerPose(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  puVar3 = 
  Method_System_Collections_Generic_Dictionary_Enumerator<string,_NativeFeatureRuntimeConfiguration>_Dispose__
  ;
  puVar2 = UnityEngine_Events_InvokableCall_TypeInfo;
  if ((DAT_045335fd & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422fb28);
    FUN_01c5d288(UnityEngine_Events_InvokableCall_TypeInfo);
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_Enumerator<string,_NativeFeatureRuntimeConfiguration>_Dispose__
                );
    DAT_045335fd = 1;
  }
  FUN_0336c7fc(param_1,*(undefined8 *)puVar2);
  FUN_0336c7fc(param_2,*(undefined8 *)puVar3);
  if (param_2 != (long *)0x0) {
    uVar4 = FUN_032ea6e0(param_2,0);
    if ((uVar4 & 1) == 0) {
LAB_03380248:
      thunk_FUN_01c273e8(PTR_DAT_042305b0);
      FUN_019b5f60();
      uVar5 = FUN_03295500(0);
      uVar6 = thunk_FUN_01c273e8(
                                Method_System_Collections_Generic_Dictionary_Enumerator<string,_NativeFeatureRuntimeConfiguration>_MoveNext__
                                );
      uVar5 = FUN_0336f2b8(uVar6,uVar5,param_2);
      thunk_FUN_01c273e8(PTR_DAT_0422fa20);
      uVar6 = thunk_FUN_01c496e0();
      FUN_0323fc78(uVar6,uVar5,0);
      uVar5 = thunk_FUN_01c273e8(
                                Method_System_Collections_Generic_Dictionary_Enumerator<string,_NativeFeatureRuntimeConfiguration>_get_Current__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar6,uVar5);
    }
    uVar4 = (**(code **)(*param_2 + 0x3c8))(param_2,*(undefined8 *)(*param_2 + 0x3d0));
    puVar2 = PTR_DAT_0422fb28;
    if ((uVar4 & 1) == 0) goto LAB_03380248;
    if (param_1 == (long *)0x0) goto LAB_03380240;
    uVar4 = FUN_032ea6e0(param_1,0);
    if ((uVar4 & 1) != 0) {
      uVar4 = (**(code **)(*param_1 + 0x3b8))(param_1,*(undefined8 *)(*param_1 + 0x3c0));
      if ((uVar4 & 1) != 0) {
        uVar5 = (**(code **)(*param_1 + 0x438))(param_1,*(undefined8 *)(*param_1 + 0x440));
        lVar7 = *(long *)puVar2;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(lVar7);
        }
        uVar4 = FUN_032e935c(param_2,uVar5,0);
        if ((uVar4 & 1) != 0) {
LAB_03380170:
          uVar5 = 1;
          goto LAB_03380228;
        }
      }
    }
    lVar7 = (**(code **)(*param_1 + 0x878))(param_1,*(undefined8 *)(*param_1 + 0x880));
    if (lVar7 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (0 < (int)uVar1) {
        uVar9 = 0;
        do {
          if (uVar1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4ac();
          }
          param_1 = *(long **)(lVar7 + (long)(int)uVar9 * 8 + 0x20);
          if (param_1 == (long *)0x0) goto LAB_03380240;
          uVar4 = (**(code **)(*param_1 + 0x3b8))(param_1,*(undefined8 *)(*param_1 + 0x3c0));
          if ((uVar4 & 1) != 0) {
            uVar5 = (**(code **)(*param_1 + 0x438))(param_1,*(undefined8 *)(*param_1 + 0x440));
            lVar8 = *(long *)puVar2;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(lVar8);
            }
            uVar4 = FUN_032e935c(param_2,uVar5,0);
            if ((uVar4 & 1) != 0) goto LAB_03380170;
          }
          uVar1 = *(uint *)(lVar7 + 0x18);
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)uVar1);
      }
      param_1 = (long *)0x0;
      uVar5 = 0;
LAB_03380228:
      *param_3 = (long)param_1;
      return uVar5;
    }
  }
LAB_03380240:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


