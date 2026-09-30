/*
FUNCTION_NAME: OVRPlugin$$ResetAppPerfStats
ENTRY_POINT: 03382a24
PROGRAM: gunraiders-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__ResetAppPerfStats(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x19;
  long *unaff_x20;
  long lVar6;
  undefined8 uVar7;
  
  iVar3 = (**(code **)(param_1 + 0x1a8))();
  if (iVar3 == 0x10) {
    lVar5 = *unaff_x20;
    bVar1 = *(byte *)(*(long *)Photon_Realtime_LoadBalancingClient_TypeInfo + 0x130);
    if ((*(byte *)(lVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Photon_Realtime_LoadBalancingClient_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748();
    }
    uVar4 = (**(code **)(lVar5 + 0x248))();
    puVar2 = Method_System_Collections_Generic_Dictionary_Enumerator<string,_JSONNode>_get_Current__
    ;
    lVar5 = *(long *)
             Method_System_Collections_Generic_Dictionary_Enumerator<string,_JSONNode>_get_Current__
    ;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(lVar5);
      lVar5 = *(long *)puVar2;
    }
    lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
    if (lVar6 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(lVar5);
        lVar5 = *(long *)puVar2;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar6 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_DtdParser_UndeclaredNotation>_MoveNext__
                                );
      FUN_02b6841c(lVar6,uVar7,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_DtdParser_UndeclaredNotation>_get_Current__
                   ,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = lVar6;
    }
    uVar4 = FUN_0234eea4(uVar4,lVar6,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary_Enumerator<string,_Vector3>_get_Current__
                        );
    FUN_02355b80(uVar4,*(undefined8 *)UnityEngine_UIElements_ListViewController_TypeInfo);
    (**(code **)(*unaff_x20 + 0x1b8))();
    (**(code **)(*unaff_x20 + 0x238))();
    if (unaff_x19 != (long *)0x0) {
      FUN_032ebd2c();
      return;
    }
  }
  else {
    (**(code **)(*unaff_x20 + 0x1b8))();
    (**(code **)(*unaff_x20 + 0x1a8))();
    if (unaff_x19 != (long *)0x0) {
      uVar4 = (**(code **)(*unaff_x19 + 0x6e8))();
      FUN_02353eac(uVar4,*(undefined8 *)
                          Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_DtdParser_UndeclaredNotation>_Dispose__
                  );
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


