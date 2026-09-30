/*
FUNCTION_NAME: FUN_06a35be8
ENTRY_POINT: 06a35be8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_6
*/


void FUN_06a35be8(undefined8 *param_1,undefined4 *param_2,int param_3)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  int local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  puVar1 = Method_System_Nullable<Vector2>_get_Value__;
  if ((DAT_076e2b2a & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07286bb8);
    thunk_FUN_032e1da0(Method_System_Nullable<Vector2>_get_Value__);
    DAT_076e2b2a = 1;
  }
  local_48 = 0;
  local_40 = 0;
  uStack_3c = 0;
  local_38 = 0;
  uStack_34 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_06a35de0(param_2);
  if (-1 < param_3) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    if (param_3 < (int)param_2[6]) {
      plVar2 = *(long **)(param_2 + 2);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar3 = (**(code **)(*plVar2 + 0x178))
                        (plVar2,*param_2,param_3,&local_48,*(undefined8 *)(*plVar2 + 0x180));
      puVar1 = PTR_DAT_07286bb8;
      if ((uVar3 & 1) != 0) {
        uVar4 = FUN_0596f544(local_48,0);
        auVar7 = FUN_03adc228(uVar4,local_40,1,*(undefined8 *)puVar1);
        *(undefined1 (*) [16])(param_1 + 1) = auVar7;
        *param_1 = CONCAT44(local_38,uStack_3c);
        return;
      }
      thunk_FUN_032e1da0(PTR_DAT_07279578);
      uVar4 = thunk_FUN_032a56a0();
      uVar6 = thunk_FUN_032e1da0(Method_Oculus_Platform_Request<AssetFileDeleteResult>__ctor__);
      FUN_0592371c(uVar4,uVar6,0);
      uVar6 = thunk_FUN_032e1da0(Method_Oculus_Platform_Request<AssetDetailsList>__ctor__);
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar4,uVar6);
    }
  }
  thunk_FUN_032e1da0(Method_System_Nullable<Vector2>_get_Value__);
  FUN_02d9d3e0();
  local_4c = param_2[6] + -1;
  uVar4 = thunk_FUN_032e1da0(PTR_DAT_07279558);
  uVar4 = thunk_FUN_032a52d0(uVar4,&local_4c);
  uVar6 = thunk_FUN_032e1da0(Method_Oculus_Platform_Request<ApplicationVersion>__ctor__);
  puVar1 = Method_Oculus_Platform_Request<AssetDetails>__ctor__;
  uVar5 = thunk_FUN_032e1da0(Method_Oculus_Platform_Request<AssetDetails>__ctor__);
  uVar4 = FUN_057ab61c(uVar6,uVar5,uVar4,0);
  thunk_FUN_032e1da0(PTR_DAT_0727dd28);
  uVar6 = thunk_FUN_032a56a0();
  uVar5 = thunk_FUN_032e1da0(puVar1);
  FUN_0589b56c(uVar6,uVar5,uVar4,0);
  uVar4 = thunk_FUN_032e1da0(Method_Oculus_Platform_Request<AssetDetailsList>__ctor__);
                    /* WARNING: Subroutine does not return */
  FUN_032d5dbc(uVar6,uVar4);
}


