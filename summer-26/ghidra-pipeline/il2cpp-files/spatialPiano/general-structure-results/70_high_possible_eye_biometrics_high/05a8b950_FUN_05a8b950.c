/*
FUNCTION_NAME: FUN_05a8b950
ENTRY_POINT: 05a8b950
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


int FUN_05a8b950(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_50 = param_2;
  local_48 = param_3;
  if ((DAT_06bc23a8 & 1) == 0) {
    FUN_02f08768(Method_System_ValueTuple<string[],_OVRFaceExpressions_FaceExpression[]>__ctor__);
    FUN_02f08768(Method_System_ValueTuple<Vector2[],_Vector2[]>__ctor__);
    FUN_02f08768(Method_System_ValueTuple<bool,_bool>__ctor__);
    FUN_02f08768(Method_System_ValueTuple<bool,_long>__ctor__);
    FUN_02f08768(Method_System_ValueTuple<bool,_WebOperation>__ctor__);
    DAT_06bc23a8 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  if (param_1 == 0) {
    return 0;
  }
  plVar3 = (long *)FUN_05a79828(&local_50,0);
  puVar2 = Method_System_ValueTuple<bool,_WebOperation>__ctor__;
  if (plVar3 == (long *)0x0) {
LAB_05a8ba08:
    plVar3 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*(long *)Method_System_ValueTuple<bool,_WebOperation>__ctor__ + 0x130);
    if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_System_ValueTuple<bool,_WebOperation>__ctor__)) goto LAB_05a8ba08;
    plVar3 = (long *)FUN_05a79828(&local_50,0);
    if (plVar3 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
      if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar3);
      }
    }
  }
  plVar4 = (long *)FUN_05a79828(&local_50,0);
  puVar2 = Method_System_ValueTuple<bool,_long>__ctor__;
  if (plVar4 == (long *)0x0) {
Unity_Mathematics_math__sincos:
    plVar4 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*(long *)Method_System_ValueTuple<bool,_long>__ctor__ + 0x130);
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_System_ValueTuple<bool,_long>__ctor__)) goto Unity_Mathematics_math__sincos;
    plVar4 = (long *)FUN_05a79828(&local_50,0);
    if (plVar4 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
      if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar4);
      }
    }
  }
  plVar5 = (long *)FUN_05a79828(&local_50,0);
  puVar2 = Method_System_ValueTuple<bool,_bool>__ctor__;
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)Method_System_ValueTuple<bool,_bool>__ctor__ + 0x130);
    if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_System_ValueTuple<bool,_bool>__ctor__)) {
      plVar5 = (long *)FUN_05a79828(&local_50,0);
      if (plVar5 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
        if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar5);
        }
      }
      goto LAB_05a8ba9c;
    }
  }
  plVar5 = (long *)0x0;
LAB_05a8ba9c:
  puVar2 = Method_System_ValueTuple<Vector2[],_Vector2[]>__ctor__;
  local_60 = *(undefined8 *)(param_1 + 0x1c0);
  uStack_58 = *(undefined8 *)(param_1 + 0x1c8);
  if (0 < (int)((ulong)uStack_58 >> 0x20)) {
    iVar8 = 0;
    do {
      if (plVar3 != (long *)0x0) {
        lVar6 = FUN_040499dc(&local_60,iVar8,*(undefined8 *)puVar2);
        if (lVar6 == 0) goto LAB_05a8bc44;
        if (plVar3 == *(long **)(lVar6 + 0x188)) {
          return iVar8;
        }
        local_60 = *(undefined8 *)(param_1 + 0x1c0);
        uStack_58 = *(undefined8 *)(param_1 + 0x1c8);
      }
      if (plVar4 != (long *)0x0) {
        lVar6 = FUN_040499dc(&local_60,iVar8,*(undefined8 *)puVar2);
        if (lVar6 == 0) {
LAB_05a8bc44:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (plVar4 == *(long **)(lVar6 + 0x170)) {
          return iVar8;
        }
        local_60 = *(undefined8 *)(param_1 + 0x1c0);
        uStack_58 = *(undefined8 *)(param_1 + 0x1c8);
      }
      if (plVar5 != (long *)0x0) {
        plVar7 = (long *)FUN_040499dc(&local_60,iVar8,*(undefined8 *)puVar2);
        if (plVar5 == plVar7) {
          return iVar8;
        }
        local_60 = *(undefined8 *)(param_1 + 0x1c0);
        uStack_58 = *(undefined8 *)(param_1 + 0x1c8);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)((ulong)uStack_58 >> 0x20));
  }
  return 0;
}


