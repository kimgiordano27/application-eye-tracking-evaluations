/*
FUNCTION_NAME: OVRManager$$get_gpuUtilLevel
ENTRY_POINT: 027d7ad0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager__get_gpuUtilLevel
               (long *param_1,long param_2,long param_3,undefined8 param_4,long param_5,
               undefined8 param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined1 auVar12 [16];
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if ((DAT_04125055 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cfcb90);
    FUN_01ab69ac(PTR_DAT_03ccafc0);
    FUN_01ab69ac(PTR_DAT_03cfcb98);
    FUN_01ab69ac(PTR_DAT_03cfcba0);
    FUN_01ab69ac(PTR_DAT_03cfcba8);
    FUN_01ab69ac(PTR_DAT_03cfcbb0);
    FUN_01ab69ac(PTR_DAT_03cfcbb8);
    DAT_04125055 = 1;
  }
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  iVar5 = *(int *)(param_2 + 0x20);
  thunk_FUN_01a4b338();
  if (iVar5 < 2) {
    if (*(char *)(param_2 + 0x28) != '\0') goto LAB_027d7b90;
    iVar5 = FUN_027b7b34(0);
    puVar4 = PTR_DAT_03ccafc0;
    lVar9 = *(long *)PTR_DAT_03ccafc0;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar9);
      lVar9 = *(long *)puVar4;
    }
    iVar1 = *(int *)(*(long *)(lVar9 + 0xb8) + 0x10);
    if (param_5 == 0) {
      lVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cfcb90);
      FUN_027da6ac(lVar9,param_3,param_4,param_6,param_2);
    }
    else {
      lVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cfcbb8);
      FUN_027da6ac(lVar9,param_3,param_4,param_6,param_2);
      *(long *)(lVar9 + 0x30) = param_5;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((long *)(lVar9 + 0x30),param_5);
    }
    lVar11 = *(long *)(param_2 + 0x18);
    thunk_FUN_01a4b338();
    if (lVar11 == 0) {
      lVar11 = *(long *)puVar4;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar11 = *(long *)puVar4;
      }
      lVar11 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cfcb98,
                            *(undefined4 *)(*(long *)(lVar11 + 0xb8) + 0x10));
      thunk_FUN_01a4b338();
      lVar6 = FUN_01aa50f0((long *)(param_2 + 0x18),lVar11,0);
      if (lVar6 != 0) {
        lVar11 = lVar6;
      }
      if (lVar11 == 0) goto LAB_027d7da4;
    }
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = iVar5 / iVar1;
    }
    uVar2 = iVar5 - iVar3 * iVar1;
    if (*(uint *)(lVar11 + 0x18) <= uVar2) goto LAB_027d7da8;
    plVar10 = (long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
    lVar6 = *plVar10;
    thunk_FUN_01a4b338();
    if (lVar6 == 0) {
      uVar7 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cfcbb0);
      FUN_02090be4(uVar7,4,*(undefined8 *)PTR_DAT_03cfcba8);
      if (*(uint *)(lVar11 + 0x18) <= uVar2) {
LAB_027d7da8:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      FUN_01aa50f0(plVar10,uVar7,0);
      if (*(uint *)(lVar11 + 0x18) <= uVar2) goto LAB_027d7da8;
      lVar6 = *plVar10;
      if (lVar6 == 0) goto LAB_027d7da4;
    }
    auVar12 = FUN_02090c88(lVar6,lVar9,*(undefined8 *)PTR_DAT_03cfcba0);
    in_stack_00000008 = lVar9;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000008,lVar9);
    _in_stack_00000010 = auVar12;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000010,0);
    iVar5 = *(int *)(param_2 + 0x20);
    thunk_FUN_01a4b338();
    if (iVar5 < 2) {
OVRManager__SetOpenVRLocalPose:
      *(undefined1 (*) [16])(param_1 + 1) = _in_stack_00000010;
      *param_1 = in_stack_00000008;
      return;
    }
    uVar8 = FUN_027d99d8(&stack0x00000008);
    if ((uVar8 & 1) == 0) goto OVRManager__SetOpenVRLocalPose;
  }
  if (param_3 == 0) {
LAB_027d7da4:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  (**(code **)(param_3 + 0x18))
            (*(undefined8 *)(param_3 + 0x40),param_4,*(undefined8 *)(param_3 + 0x28));
LAB_027d7b90:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


