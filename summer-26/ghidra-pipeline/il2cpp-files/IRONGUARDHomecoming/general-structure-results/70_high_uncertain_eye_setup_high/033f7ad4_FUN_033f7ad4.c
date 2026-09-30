/*
FUNCTION_NAME: FUN_033f7ad4
ENTRY_POINT: 033f7ad4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_6;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_033f7ad4(long param_1,long *param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  if ((DAT_04832638 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                      );
    DAT_04832638 = 1;
  }
  FUN_035ac8e8(param_1,0);
  puVar4 = Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__;
  puVar3 = Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__;
  if (param_2 != (long *)0x0) {
    uVar5 = (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    uVar7 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
    *(undefined8 *)(param_1 + 0x10) = uVar7;
    uVar7 = thunk_FUN_01f51358((undefined8 *)(param_1 + 0x10),uVar7);
    FUN_033f7e20(uVar7,param_2,param_1 + 0x18,param_1 + 0x38,param_1 + 0x40,param_1 + 0x50,
                 param_1 + 0x48);
    plVar9 = param_2;
    do {
      iVar6 = (**(code **)(*plVar9 + 0x198))(plVar9,*(undefined8 *)(*plVar9 + 0x1a0));
      if (iVar6 == 0x7f) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar8 = FUN_033f53d0(0x7f);
        if (lVar8 != 0) {
LAB_033f7c2c:
          *(undefined1 *)(param_1 + 0x5c) = *(undefined1 *)(lVar8 + 0x1c);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_033f54d4(param_2,lVar8,param_1 + 0x20,param_1 + 0x28);
          lVar8 = FUN_01f08890(*(undefined8 *)puVar3,0x60);
          plVar9 = (long *)(param_1 + 0x30);
          *plVar9 = lVar8;
          thunk_FUN_01f51358(plVar9,lVar8);
          lVar8 = *(long *)(param_1 + 0x20);
          if (lVar8 != 0) {
            uVar11 = *(uint *)(lVar8 + 0x18);
            if ((int)uVar11 < 1) goto LAB_033f7d28;
            uVar10 = 0;
            goto LAB_033f7c9c;
          }
        }
        break;
      }
      uVar5 = (**(code **)(*plVar9 + 0x198))(plVar9,*(undefined8 *)(*plVar9 + 0x1a0));
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar4);
      }
      lVar8 = FUN_033f53d0(uVar5);
      if (lVar8 != 0) goto LAB_033f7c2c;
      plVar9 = (long *)(**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
    } while (plVar9 != (long *)0x0);
  }
LAB_033f7e1c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    lVar12 = *(long *)(lVar8 + (long)(int)uVar10 * 8 + 0x20);
    if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x18), lVar12 == 0)) goto LAB_033f7e1c;
    uVar11 = *(uint *)(lVar12 + 0x18);
    if (1 < (int)uVar11) {
      lVar13 = 0;
      do {
        if (uVar11 <= (uint)lVar13) goto LAB_033f7e18;
        lVar14 = *plVar9;
        if (lVar14 == 0) goto LAB_033f7e1c;
        uVar1 = *(ushort *)(lVar12 + 0x20 + lVar13 * 2);
        uVar2 = uVar1 >> 3;
        if (*(uint *)(lVar14 + 0x18) <= (uint)uVar2) goto LAB_033f7e18;
        lVar14 = lVar14 + (ulong)uVar2;
        lVar13 = lVar13 + 1;
        *(byte *)(lVar14 + 0x20) = *(byte *)(lVar14 + 0x20) | (byte)(1 << ((ulong)uVar1 & 7));
        uVar11 = *(uint *)(lVar12 + 0x18);
      } while ((int)lVar13 < (int)uVar11);
    }
    uVar11 = *(uint *)(lVar8 + 0x18);
    uVar10 = uVar10 + 1;
    if ((int)uVar11 <= (int)uVar10) break;
LAB_033f7c9c:
    if (uVar11 <= uVar10) goto LAB_033f7e18;
  }
LAB_033f7d28:
  puVar3 = 
  Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
  ;
  if (*(int *)(param_1 + 0x58) != 0x7f) {
    lVar8 = *(long *)
             Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
    ;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar8 = *(long *)puVar3;
    }
    if ((**(long **)(lVar8 + 0xb8) == 0) ||
       (lVar8 = *(long *)(**(long **)(lVar8 + 0xb8) + 0x20), lVar8 == 0)) goto LAB_033f7e1c;
    uVar11 = *(uint *)(lVar8 + 0x18);
    if (0 < (int)uVar11) {
      uVar10 = 0;
      do {
        if (uVar11 <= uVar10) {
LAB_033f7e18:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        lVar12 = *(long *)(lVar8 + (long)(int)uVar10 * 8 + 0x20);
        if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x18), lVar12 == 0)) goto LAB_033f7e1c;
        uVar11 = *(uint *)(lVar12 + 0x18);
        if (1 < (int)uVar11) {
          lVar13 = 0;
          do {
            if (uVar11 <= (uint)lVar13) goto LAB_033f7e18;
            lVar14 = *plVar9;
            if (lVar14 == 0) goto LAB_033f7e1c;
            uVar1 = *(ushort *)(lVar12 + 0x20 + lVar13 * 2);
            uVar2 = uVar1 >> 3;
            if (*(uint *)(lVar14 + 0x18) <= (uint)uVar2) goto LAB_033f7e18;
            lVar14 = lVar14 + (ulong)uVar2;
            lVar13 = lVar13 + 1;
            *(byte *)(lVar14 + 0x20) = *(byte *)(lVar14 + 0x20) | (byte)(1 << ((ulong)uVar1 & 7));
            uVar11 = *(uint *)(lVar12 + 0x18);
          } while ((int)lVar13 < (int)uVar11);
        }
        uVar11 = *(uint *)(lVar8 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar11);
    }
  }
  return;
}


