/*
FUNCTION_NAME: Unity.Services.Lobbies.Http.ApiTelemetryScope$$Dispose
ENTRY_POINT: 05fa0c14
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Unity_Services_Lobbies_Http_ApiTelemetryScope__Dispose
               (undefined8 *param_1,long param_2,undefined1 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined *puVar3;
  
                    /* try { // try from 05fa0c30 to 060a0c37 has its CatchHandler @ 05fa1498 */
  if ((DAT_06dc4622 & 1) == 0) {
    FUN_02d965b8(Method_System_Collections_Generic_ValueListBuilder<int>__ctor__);
    DAT_06dc4622 = 1;
  }
  puVar3 = Method_System_Collections_Generic_ValueListBuilder<int>__ctor__;
  if ((*(long *)(param_3 + 0x20) == 0) || (*(long *)(param_3 + 0x28) == 0)) {
    thunk_FUN_02dfd288(PTR_DAT_069fcb10);
    uVar4 = thunk_FUN_02dd3144();
    puVar3 = Method_System_Collections_Generic_ValueListBuilder<int>_Append__;
  }
  else {
                    /* try { // try from 05fa0c5c to 060a0c7b has its CatchHandler @ 05fa14f4 */
    if (*(long *)(param_3 + 8) == 0) {
      thunk_FUN_02dfd288(PTR_DAT_069fcb10);
      uVar4 = thunk_FUN_02dd3144();
      puVar3 = Method_System_Collections_Generic_ValueListBuilder<int>_AsSpan__;
    }
    else {
      iVar1 = *(int *)(param_3 + 4);
      if (iVar1 <= *(int *)(param_3 + 0x14)) {
        uVar5 = *(undefined4 *)(param_3 + 0x1c);
        uVar4 = *param_1;
        if (*(int *)(*(long *)Method_System_Collections_Generic_ValueListBuilder<int>__ctor__ + 0xe4
                    ) == 0) {
          thunk_FUN_02df485c();
        }
        if (param_2 != 0) {
          FUN_0636e984(iVar1,uVar5,0,0,param_2,uVar4,
                       *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20),0);
          thunk_FUN_0636f79c(param_2,*param_1,*(undefined4 *)(param_1 + 1),
                             *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x1c),
                             *(undefined8 *)(param_3 + 0x38),0);
          thunk_FUN_0636f79c(param_2,*param_1,*(undefined4 *)(param_1 + 1),
                             *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x14),
                             *(undefined8 *)(param_3 + 0x40),0);
          thunk_FUN_0636f79c(param_2,*param_1,*(undefined4 *)(param_1 + 1),
                             *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10),
                             *(undefined8 *)(param_3 + 0x30),0);
          thunk_FUN_0636fc18(param_2,*param_1,*(undefined4 *)(param_1 + 1),1,1,1,0);
          FUN_05fa0868(param_1,param_2,*(undefined8 *)(param_3 + 8),param_3 + 0x10,*param_3);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      thunk_FUN_02dfd288(PTR_DAT_069fcb10);
      uVar4 = thunk_FUN_02dd3144();
      puVar3 = Method_System_Collections_Generic_ValueListBuilder<int>_Dispose__;
    }
  }
  uVar2 = thunk_FUN_02dfd288(puVar3);
  Oculus_Avatar2_OvrAvatarDefaultStateListener_AnimationStateChangeDelegate__EndInvoke
            (uVar4,uVar2,0);
  uVar2 = thunk_FUN_02dfd288(Method_System_Collections_Generic_ValueListBuilder<int>_Pop__);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar4,uVar2);
}


