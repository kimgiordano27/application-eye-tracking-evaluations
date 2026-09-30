/*
FUNCTION_NAME: FUN_03bf385c
ENTRY_POINT: 03bf385c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Type propagation algorithm not settling */

long FUN_03bf385c(long *param_1,uint param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  uint local_58 [2];
  long local_50;
  long lStack_48;
  
  if ((DAT_04839a86 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_14130);
    thunk_FUN_01efb3a4(
                      Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<NonSerializedAttribute>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Comparison_<Definition>b__36_0__);
    thunk_FUN_01efb3a4(StringLiteral_11415);
    thunk_FUN_01efb3a4(StringLiteral_11416);
    DAT_04839a86 = 1;
  }
  puVar2 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  local_50 = 0;
  lStack_48 = 0;
  if ((int)param_2 < 0x14) {
    local_58[1] = 0x14;
    uVar4 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar4 = thunk_FUN_01f113fc(uVar4,local_58 + 1);
    local_58[0] = param_2;
    uVar5 = thunk_FUN_01efb3a4(puVar2);
    uVar5 = thunk_FUN_01f113fc(uVar5,local_58);
    uVar6 = thunk_FUN_01efb3a4(StringLiteral_14141);
    uVar4 = FUN_0340f2f0(uVar6,uVar4,uVar5,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar5 = thunk_FUN_01f117cc();
    uVar6 = thunk_FUN_01efb3a4(StringLiteral_14138);
    FUN_034efd98(uVar5,uVar4,uVar6,0);
    uVar4 = thunk_FUN_01efb3a4(StringLiteral_14142);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5,uVar4);
  }
  lVar8 = param_1[2];
  uVar1 = param_2;
  if ((param_2 & 3) != 0) {
    uVar1 = param_2 + 4 & 0xfffffffc;
  }
  if ((DAT_04839a82 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_11416);
    DAT_04839a82 = 1;
  }
  puVar2 = StringLiteral_14130;
  lVar3 = *param_1;
  lVar8 = lVar8 + (int)uVar1;
  if (lVar3 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = (long)(int)param_1[1];
  }
  if (lVar7 < lVar8) {
    lVar7 = (long)param_3;
    lVar3 = 0;
    if (lVar7 != 0) {
      lVar3 = lVar8 / lVar7;
    }
    lVar3 = lVar8 - lVar3 * lVar7;
    if (lVar3 != 0) {
      lVar8 = (lVar8 + param_3) - lVar3;
    }
    if (0x7fffffff < lVar8) {
      thunk_FUN_01efb3a4(Method_System_Text_Encoding_GetBytes__);
      uVar4 = thunk_FUN_01f117cc();
      uVar5 = thunk_FUN_01efb3a4(StringLiteral_14143);
      FUN_0356d1bc(uVar4,uVar5,0);
      uVar5 = thunk_FUN_01efb3a4(StringLiteral_14142);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar4,uVar5);
    }
    FUN_032c9740(&local_50,lVar8,param_4,1,*(undefined8 *)StringLiteral_11415);
    if (*param_1 != 0) {
      uVar4 = FUN_0239adc4(local_50,lStack_48,
                           *(undefined8 *)
                            Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<NonSerializedAttribute>__
                          );
      uVar5 = FUN_0239ada8(*param_1,param_1[1],*(undefined8 *)puVar2);
      FUN_04037e20(uVar4,uVar5,param_1[2],0);
      if (*(char *)((long)param_1 + 0x1c) != '\0') {
        FUN_032c9a00(param_1,*(undefined8 *)
                              Method_Unity_VisualScripting_Comparison_<Definition>b__36_0__);
      }
    }
    *(undefined1 *)((long)param_1 + 0x1c) = 1;
    param_1[1] = lStack_48;
    *param_1 = local_50;
    lVar3 = *param_1;
  }
  lVar8 = FUN_0239ada8(lVar3,param_1[1],*(undefined8 *)puVar2);
  lVar3 = param_1[2];
  FUN_03bf2e1c(lVar3 + lVar8,param_2);
  param_1[2] = param_1[2] + (long)(int)uVar1;
  *(int *)(param_1 + 3) = (int)param_1[3] + 1;
  return lVar3 + lVar8;
}


