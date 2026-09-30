/*
FUNCTION_NAME: UnityEngine.UIElements.PointerDeviceState$$ReleaseAllButtons
ENTRY_POINT: 07353800
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 120
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void UnityEngine_UIElements_PointerDeviceState__ReleaseAllButtons(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x20;
  int iVar7;
  long lVar8;
  undefined8 *unaff_x25;
  
  lVar3 = FUN_0459ed6c(param_1,0,*unaff_x25);
  if (((lVar3 != 0) && (*(long *)(lVar3 + 0x10) != 0)) &&
     (*(long *)(*(long *)(lVar3 + 0x10) + 0x2e0) != 0)) {
    FUN_07352214();
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_List_Enumerator<NativeSlice<CopyMeshJobData>>_Dispose__
                + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_07288f2c(0);
    puVar2 = 
    Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Value__
    ;
    puVar1 = PTR_DAT_079f4e28;
    lVar3 = *(long *)(unaff_x20 + 0x18);
    if (lVar3 != 0) {
      iVar7 = 0;
      while (iVar7 < *(int *)(lVar3 + 0x18)) {
        lVar3 = FUN_0459ed6c(lVar3,iVar7,*unaff_x25);
        if (lVar3 == 0) goto LAB_073539c8;
        lVar8 = *(long *)(lVar3 + 0x10);
        lVar3 = FUN_073614c0(lVar8,0);
        lVar4 = FUN_073616b0(lVar8,0);
        if (((lVar4 == 0) || (FUN_072a3d00(lVar4,0), lVar3 == 0)) ||
           (UnityEngine_UIElements_UIR_GCHandlePool__Dispose(lVar3,0), lVar8 == 0))
        goto LAB_073539c8;
        uVar5 = FUN_073187e4(lVar8,0);
        FUN_0748aa90(uVar5,0);
        uVar5 = FUN_0730172c();
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_036a1978(*(long *)puVar1);
        }
        uVar6 = FUN_071c24dc(uVar5,0,0);
        if ((uVar6 & 1) != 0) {
          if (*(long *)(lVar8 + 0x2e0) == 0) goto LAB_073539c8;
          FUN_07350fc4(*(long *)(lVar8 + 0x2e0),0);
        }
        lVar3 = *(long *)(unaff_x20 + 0x18);
        iVar7 = iVar7 + 1;
        if (lVar3 == 0) goto LAB_073539c8;
      }
      lVar3 = *(long *)puVar2;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar3 = *(long *)puVar2;
      }
      lVar4 = *(long *)(unaff_x20 + 0x18);
      if (*(char *)(*(long *)(lVar3 + 0xb8) + 0x18) == '\0') {
        if (lVar4 != 0) {
          iVar7 = 0;
          goto LAB_073539a4;
        }
      }
      else if ((lVar4 != 0) && (FUN_03da2070(), unaff_x19 != 0)) {
        FUN_074822a8();
        goto LAB_073539d0;
      }
    }
  }
  goto LAB_073539c8;
  while( true ) {
    FUN_07353a10(&stack0x00000018,iVar7);
    lVar4 = *(long *)(unaff_x20 + 0x18);
    iVar7 = iVar7 + 1;
    if (lVar4 == 0) break;
LAB_073539a4:
    if (*(int *)(lVar4 + 0x18) <= iVar7) {
      if (unaff_x19 != 0) {
LAB_073539d0:
        FUN_074822c0();
        return;
      }
      break;
    }
  }
LAB_073539c8:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


