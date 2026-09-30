/*
FUNCTION_NAME: FUN_07353758
ENTRY_POINT: 07353758
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_07353758(long param_1,long param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 local_70 [16];
  undefined8 local_58;
  
  if ((DAT_07ef30d9 & 1) == 0) {
    FUN_03642964(
                Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Value__
                );
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<NativeSlice<CopyMeshJobData>>_Dispose__
                );
    FUN_03642964(
                Method_System_Collections_Generic_KeyValuePair<CameraEvent,_CommandBuffer>_get_Key__
                );
    FUN_03642964(
                Method_System_Collections_Generic_KeyValuePair<CameraEvent,_CommandBuffer>_get_Value__
                );
    FUN_03642964(
                Method_System_Collections_Generic_KeyValuePair<Category,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>_Deconstruct__
                );
    FUN_03642964(PTR_DAT_079f4e28);
    DAT_07ef30d9 = 1;
  }
  puVar6 = Method_System_Collections_Generic_KeyValuePair<CameraEvent,_CommandBuffer>_get_Value__;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lVar8 = *(long *)(param_1 + 0x18);
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_58 = uVar1;
  auVar14 = ZEXT816(0);
  if (lVar8 != 0) {
    if (0 < *(int *)(lVar8 + 0x18)) {
      lVar8 = FUN_0459ed6c(lVar8,0,*(undefined8 *)
                                    Method_System_Collections_Generic_KeyValuePair<CameraEvent,_CommandBuffer>_get_Value__
                          );
      auVar3._8_8_ = local_70._8_8_;
      auVar3._0_8_ = local_70._0_8_;
      auVar15._8_8_ = local_70._8_8_;
      auVar15._0_8_ = local_70._0_8_;
      auVar14._8_8_ = local_70._8_8_;
      auVar14._0_8_ = local_70._0_8_;
      if (((lVar8 == 0) || (auVar14 = auVar15, *(long *)(lVar8 + 0x10) == 0)) ||
         (auVar14 = auVar3, *(long *)(*(long *)(lVar8 + 0x10) + 0x2e0) == 0)) goto LAB_073539c8;
      FUN_07352214();
    }
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_List_Enumerator<NativeSlice<CopyMeshJobData>>_Dispose__
                + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_07288f2c(0);
    puVar7 = 
    Method_System_Collections_Generic_KeyValuePair<Category,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>_Deconstruct__
    ;
    puVar5 = 
    Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Value__
    ;
    puVar4 = PTR_DAT_079f4e28;
    lVar8 = *(long *)(param_1 + 0x18);
    auVar14 = local_70;
    if (lVar8 != 0) {
      iVar12 = 0;
      do {
        if (*(int *)(lVar8 + 0x18) <= iVar12) {
          lVar8 = *(long *)puVar5;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_036a1978();
            lVar8 = *(long *)puVar5;
          }
          cVar2 = *(char *)(*(long *)(lVar8 + 0xb8) + 0x18);
          lVar8 = *(long *)(param_1 + 0x18);
          auVar14 = local_70;
          if (cVar2 == '\0') {
            if (lVar8 != 0) {
              iVar12 = 0;
              goto LAB_073539a4;
            }
          }
          else if (lVar8 != 0) {
            auVar15 = FUN_03da2070(uVar1,*(undefined4 *)(lVar8 + 0x18),1,0,0,*(undefined8 *)puVar7);
            auVar14 = local_70;
            if (param_2 != 0) {
              FUN_074822a8(param_2,auVar15._0_8_,auVar15._8_8_,0);
              goto LAB_073539d0;
            }
          }
          break;
        }
        lVar8 = FUN_0459ed6c(lVar8,iVar12,*(undefined8 *)puVar6);
        auVar14 = local_70;
        if (lVar8 == 0) break;
        lVar13 = *(long *)(lVar8 + 0x10);
        lVar8 = FUN_073614c0(lVar13,0);
        lVar9 = FUN_073616b0(lVar13,0);
        auVar14 = local_70;
        if (lVar9 == 0) break;
        FUN_072a3d00(lVar9,0);
        auVar14 = local_70;
        if (lVar8 == 0) break;
        UnityEngine_UIElements_UIR_GCHandlePool__Dispose(lVar8,0);
        auVar14 = local_70;
        if (lVar13 == 0) break;
        uVar10 = FUN_073187e4(lVar13,0);
        auVar14 = FUN_0748aa90(uVar10,0);
        local_70 = auVar14;
        uVar10 = FUN_0730172c(local_70,0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_036a1978(*(long *)puVar4);
        }
        uVar11 = FUN_071c24dc(uVar10,0,0);
        if ((uVar11 & 1) != 0) {
          auVar14 = local_70;
          if (*(long *)(lVar13 + 0x2e0) == 0) break;
          FUN_07350fc4(*(long *)(lVar13 + 0x2e0),0);
        }
        lVar8 = *(long *)(param_1 + 0x18);
        iVar12 = iVar12 + 1;
        auVar14 = local_70;
      } while (lVar8 != 0);
    }
  }
  goto LAB_073539c8;
  while( true ) {
    FUN_07353a10(&local_58,iVar12);
    lVar8 = *(long *)(param_1 + 0x18);
    iVar12 = iVar12 + 1;
    auVar14 = local_70;
    if (lVar8 == 0) break;
LAB_073539a4:
    if (*(int *)(lVar8 + 0x18) <= iVar12) {
      auVar14 = local_70;
      if (param_2 != 0) {
LAB_073539d0:
        FUN_074822c0(param_2,*(undefined8 *)(param_1 + 0x30),0,2,cVar2 != '\0',0);
        return;
      }
      break;
    }
  }
LAB_073539c8:
  local_70 = auVar14;
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


