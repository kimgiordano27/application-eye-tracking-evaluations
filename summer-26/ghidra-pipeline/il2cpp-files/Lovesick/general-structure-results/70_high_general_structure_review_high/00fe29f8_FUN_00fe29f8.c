/*
FUNCTION_NAME: FUN_00fe29f8
ENTRY_POINT: 00fe29f8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


void FUN_00fe29f8(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  float local_48;
  float local_44;
  
  if ((DAT_03775c26 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_5729);
    thunk_FUN_00d48444(PTR_DAT_033eda38);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<VisualElement>_get_Capacity__);
    thunk_FUN_00d48444(System_Func<Vector3,_Vector3,_Touch,_EventBase>_TypeInfo);
    DAT_03775c26 = 1;
  }
  uStack_a8 = 0;
  local_a0 = 0;
  local_b0 = 0;
  if (*(char *)(param_4 + 0x28) == '\0') {
    return;
  }
  if (DAT_0377518d == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_0377518d = '\x01';
  }
  puVar4 = StringLiteral_5729;
  puVar3 = Method_System_Collections_Generic_List<VisualElement>_get_Capacity__;
  puVar1 = PTR_DAT_033eda38;
  if (*(long *)(param_4 + 0x18) != 0) {
    lVar7 = *(long *)(*(long *)
                       Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                     + 0xb8);
    uVar10 = (ulong)*(uint *)(lVar7 + 0x60);
    local_48 = *(float *)(lVar7 + 100);
    local_44 = *(float *)(lVar7 + 0x68);
    FUN_01323390(*(long *)(param_4 + 0x18),&local_c8,
                 *(undefined8 *)System_Func<Vector3,_Vector3,_Touch,_EventBase>_TypeInfo);
    puVar2 = System_Threading_Timer_TimerComparer_TypeInfo;
    uStack_a8 = uStack_c0;
    local_b0 = local_c8;
    local_a0 = local_b8;
    fVar13 = 2.1474836e+09;
    while (uVar5 = FUN_012b894c(&local_b0,*(undefined8 *)puVar1), (uVar5 & 1) != 0) {
      lVar7 = FUN_00ace190(&local_b0,*(undefined8 *)puVar3);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      fVar8 = (float)FUN_0269f578(lVar7,0);
      fVar11 = param_2;
      fVar12 = param_3;
      lVar6 = FUN_0268fd10(param_4,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      fVar9 = (float)FUN_0269f578(lVar6,0);
      if (DAT_03774e1a == '\0') {
        thunk_FUN_00d48444(puVar2);
        DAT_03774e1a = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      fVar11 = param_2 - fVar11;
      param_3 = param_3 - fVar12;
      param_2 = param_3 * param_3;
      fVar11 = SQRT(param_2 + (fVar8 - fVar9) * (fVar8 - fVar9) + fVar11 * fVar11);
      if (fVar11 < fVar13) {
        uVar10 = FUN_0269f578(lVar7,0);
        fVar13 = fVar11;
        local_48 = param_2;
        local_44 = param_3;
      }
    }
    FUN_012b8948(&local_b0,*(undefined8 *)puVar4);
    lVar7 = FUN_0268fd10(param_4,0);
    if ((*(long *)(param_4 + 0x20) != 0) &&
       (FUN_026f2d70(uVar10,local_48,local_44,*(long *)(param_4 + 0x20),0), lVar7 != 0)) {
      FUN_0269f618(lVar7,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


