/*
FUNCTION_NAME: OVRPlugin$$GetUseOverriddenExternalCameraStaticPose
ENTRY_POINT: 0321e130
PROGRAM: vrfs-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin__GetUseOverriddenExternalCameraStaticPose
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                undefined4 param_5)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long in_stack_00000008;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0321e0f0 with catch @ 0321e138
                       catch(type#2 @ 00000000) { ... } // from try @ 0321e124 with catch @ 0321e138
                        */
  if ((bRam0000000007237e56 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e09208);
    thunk_FUN_0159f088(PTR_DAT_06dd80b0);
    thunk_FUN_0159f088(PTR_DAT_06ddeae8);
    thunk_FUN_0159f088(PTR_DAT_06d9bc98);
    bRam0000000007237e56 = 1;
  }
  puVar1 = PTR_DAT_06e09208;
  iVar9 = (int)param_4;
  if (iVar9 == 0) {
    FUN_0252532c(param_5,0);
    uVar2 = 1;
    goto LAB_0321e208;
  }
  switch(param_5) {
  case 0:
    if (*(int *)(*(long *)PTR_DAT_06dd80b0 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    plVar4 = (long *)FUN_03ef911c(0);
    if (plVar4 == (long *)0x0) {
LAB_0321e454:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar6 = (**(code **)(*plVar4 + 0x1f8))(plVar4,*(undefined8 *)(*plVar4 + 0x200));
    break;
  case 1:
    if (*(int *)(*(long *)PTR_DAT_06dd80b0 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    plVar4 = (long *)FUN_03ef911c(0);
    if (plVar4 == (long *)0x0) goto LAB_0321e454;
    uVar6 = (**(code **)(*plVar4 + 0x1f8))(plVar4,*(undefined8 *)(*plVar4 + 0x200));
    goto LAB_0321e33c;
  case 2:
    lVar11 = *(long *)PTR_DAT_06e09208;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar11 = *(long *)puVar1;
    }
    uVar6 = **(undefined8 **)(lVar11 + 0xb8);
    break;
  case 3:
    lVar11 = *(long *)PTR_DAT_06e09208;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar11 = *(long *)puVar1;
    }
    uVar6 = **(undefined8 **)(lVar11 + 0xb8);
LAB_0321e33c:
    uVar5 = FUN_031cf5cc(param_1,param_2,param_3,param_4,uVar6,0);
    return uVar5;
  case 4:
    in_stack_00000008 = 0;
    lVar11 = *(long *)PTR_DAT_06ddeae8;
    uVar5 = (**(code **)(*(long *)(*(long *)(lVar11 + 0x38) + 0x10) + 8))(&stack0x00000008);
    iVar10 = (int)param_2;
    if ((uVar5 & 1) == 0) {
      if (iVar9 <= iVar10) {
        lVar3 = (**(code **)(*(long *)(*(long *)(lVar11 + 0x38) + 0x18) + 8))(param_1,param_2);
        uVar6 = (**(code **)(*(long *)(*(long *)(lVar11 + 0x38) + 0x18) + 8))(param_3,param_4);
        uVar2 = (**(code **)(*(long *)(*(long *)(lVar11 + 0x38) + 0x20) + 8))
                          (lVar3 + ((long)((ulong)(uint)(iVar10 - iVar9) << 0x20) >> 0x1f),uVar6,
                           param_4 & 0xffffffff);
        goto LAB_0321e208;
      }
    }
    else if (iVar9 <= iVar10) {
      lVar3 = (**(code **)(*(long *)(*(long *)(lVar11 + 0x38) + 0x18) + 8))(param_1,param_2);
      uVar6 = (**(code **)(*(long *)(*(long *)(lVar11 + 0x38) + 0x18) + 8))(param_3,param_4);
      uVar2 = FUN_031cdb48(lVar3 + ((long)((ulong)(uint)(iVar10 - iVar9) << 0x20) >> 0x1f),uVar6,
                           in_stack_00000008 * iVar9,0);
      goto LAB_0321e208;
    }
    uVar2 = 0;
LAB_0321e208:
    return (ulong)(uVar2 & 1);
  case 5:
    uVar5 = FUN_031cf6ec(param_1,param_2,param_3,param_4,0);
    return uVar5;
  default:
    thunk_FUN_0159f088(PTR_DAT_06dde728);
    uVar6 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    uVar7 = thunk_FUN_0159f088(PTR_DAT_06d99548);
    uVar8 = thunk_FUN_0159f088(PTR_DAT_06d9a128);
    FUN_028f287c(uVar6,uVar7,uVar8,0);
    uVar7 = thunk_FUN_0159f088(PTR_DAT_06e41510);
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar6,uVar7);
  }
  uVar5 = FUN_031cf3cc(param_1,param_2,param_3,param_4,uVar6,0);
  return uVar5;
}


