/*
FUNCTION_NAME: RootMotion.FinalIK.IKMapping.BoneMap$$get_swingDirection
ENTRY_POINT: 02994b08
PROGRAM: vrlegs-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x02994d98) */
/* WARNING: Removing unreachable block (ram,0x02994da4) */

long RootMotion_FinalIK_IKMapping_BoneMap__get_swingDirection
               (long param_1,int param_2,uint param_3,byte param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  int in_stack_00000048;
  char cStack000000000000004c;
  
  if ((DAT_04127ce5 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d079f0);
    FUN_01ab69ac(PTR_DAT_03d07bf8);
    FUN_01ab69ac(PTR_DAT_03d07c00);
    FUN_01ab69ac(PTR_DAT_03d07c08);
    FUN_01ab69ac(PTR_DAT_03cbeda8);
    FUN_01ab69ac(PTR_DAT_03d07c10);
    FUN_01ab69ac(PTR_DAT_03d07c18);
    FUN_01ab69ac(PTR_DAT_03d07c20);
    DAT_04127ce5 = 1;
  }
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  uVar9 = *(undefined8 *)(param_1 + 0x128);
  cStack000000000000004c = '\0';
  FUN_027e0bd8(uVar9,&stack0x0000004c,0);
  if (*(long *)(param_1 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  Animancer_FadeGroup__get_TargetWeight
            (*(long *)(param_1 + 0x128),&stack0x00000008,*(undefined8 *)PTR_DAT_03d07c10);
  puVar4 = PTR_DAT_03d07c18;
  puVar3 = PTR_DAT_03d07c08;
  puVar2 = PTR_DAT_03d07c00;
  puVar1 = PTR_DAT_03d07bf8;
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  do {
    uVar5 = FUN_021b51c8(&stack0x00000020,*(undefined8 *)puVar2);
    if ((uVar5 & 1) == 0) {
      lVar10 = 0;
      break;
    }
    FUN_01b7a454(&stack0x00000020,&stack0x00000008,*(undefined8 *)puVar3);
  } while ((((in_stack_00000008 == 0) || (*(int *)(in_stack_00000008 + 0x14) != param_2)) ||
           (*(byte *)(in_stack_00000008 + 0x12) != param_3)) ||
          (lVar10 = in_stack_00000008,
          (((*(byte *)(in_stack_00000008 + 0x10) & 2) == 0 ^ param_4) & 1) == 0));
  FUN_021b51c4(&stack0x00000020,*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_03cbeda8;
  if (lVar10 == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if ((4 < *(byte *)(*(long *)(param_1 + 0x10) + 0x40)) && (1 < *(byte *)(param_1 + 0x40) - 3)) {
      in_stack_00000048 = param_2;
      uVar6 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x00000048);
      in_stack_00000000._4_4_ = param_3;
      uVar7 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,(long)&stack0x00000000 + 4);
      uVar8 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03d079f0);
      uVar6 = FUN_025be8b0(*(undefined8 *)PTR_DAT_03d07c20,uVar6,uVar7,uVar8,0);
      FUN_0298e564(param_1,5,uVar6);
    }
    lVar10 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02218bd8(*(long *)(param_1 + 0x128),lVar10,*(undefined8 *)puVar4);
  }
  if (cStack000000000000004c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar9,0);
  }
  return lVar10;
}


