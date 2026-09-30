/*
FUNCTION_NAME: FUN_06a361c4
ENTRY_POINT: 06a361c4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_5
*/


void FUN_06a361c4(undefined4 *param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = Method_System_Nullable<Vector2>_get_Value__;
  if ((DAT_076e2b2d & 1) == 0) {
    thunk_FUN_032e1da0(Method_System_Nullable<Vector2>_get_Value__);
    DAT_076e2b2d = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_06a35de0(param_1);
  uStack_78 = param_2[1];
  local_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  FUN_06a3639c(param_1,&local_80);
  uStack_98 = param_2[1];
  local_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  iVar2 = FUN_06a36154(param_1,&local_a0);
  puVar1 = PTR_DAT_07279558;
  if (param_4 < iVar2) {
    local_60 = CONCAT44(local_60._4_4_,iVar2);
    uVar6 = thunk_FUN_032e1da0(PTR_DAT_07279558);
    uVar6 = thunk_FUN_032a52d0(uVar6,&local_60);
    local_c0 = CONCAT44(local_c0._4_4_,param_4);
    uVar7 = thunk_FUN_032e1da0(puVar1);
    uVar7 = thunk_FUN_032a52d0(uVar7,&local_c0);
    uVar5 = thunk_FUN_032e1da0(Method_Oculus_Platform_Request<ChallengeEntryList>__ctor__);
    uVar6 = FUN_057ab61c(uVar5,uVar6,uVar7,0);
    thunk_FUN_032e1da0(PTR_DAT_0727dd40);
    uVar7 = thunk_FUN_032a56a0();
    uVar5 = thunk_FUN_032e1da0(Method_Oculus_Platform_Request<ChallengeList>__ctor__);
    FUN_05897d8c(uVar7,uVar6,uVar5,0);
    uVar6 = thunk_FUN_032e1da0(Method_Oculus_Platform_Request<CowatchViewerList>__ctor__);
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar7,uVar6);
  }
  uStack_b8 = param_2[1];
  local_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  plVar3 = *(long **)(param_1 + 2);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8(0,*param_1);
  }
  local_60 = local_c0;
  uStack_58 = uStack_b8;
  uStack_50 = uStack_b0;
  uStack_48 = uStack_a8;
  uVar4 = (**(code **)(*plVar3 + 0x198))
                    (plVar3,*param_1,&local_60,param_3,param_4,*(undefined8 *)(*plVar3 + 0x1a0));
  if ((uVar4 & 1) != 0) {
    return;
  }
  thunk_FUN_032e1da0(PTR_DAT_07279578);
  uVar6 = thunk_FUN_032a56a0();
  uVar7 = thunk_FUN_032e1da0(Method_Oculus_Platform_Request<CowatchingState>__ctor__);
  FUN_0592371c(uVar6,uVar7,0);
  uVar7 = thunk_FUN_032e1da0(Method_Oculus_Platform_Request<CowatchViewerList>__ctor__);
                    /* WARNING: Subroutine does not return */
  FUN_032d5dbc(uVar6,uVar7);
}


