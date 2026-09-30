/*
FUNCTION_NAME: FUN_0251c5e4
ENTRY_POINT: 0251c5e4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_15;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_0251c5e4(double param_1,double param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  double dVar18;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar2 = Oculus_Platform_Request<ChallengeList>_TypeInfo;
  if ((DAT_037829e6 & 1) == 0) {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Oculus_Platform_Request<ChallengeList>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_8495);
    thunk_FUN_00d48444(StringLiteral_6003);
    thunk_FUN_00d48444(StringLiteral_6438);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_7C8975E1E60A5C8337F28EDF8C33C3B180360B7279644A9BC1AF3C51E6220BF5
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<ValueTuple<int,_Vector2Int>>_TypeInfo);
    DAT_037829e6 = 1;
  }
  puVar3 = System_Threading_Timer_TimerComparer_TypeInfo;
  local_68 = 0;
  local_78 = 0;
  local_70 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer__CreateGesture(param_2);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar5 = StringLiteral_8495;
  puVar4 = 
  Field_<PrivateImplementationDetails>_7C8975E1E60A5C8337F28EDF8C33C3B180360B7279644A9BC1AF3C51E6220BF5
  ;
  iVar7 = -0x80000000;
  if (ABS(param_1) != INFINITY) {
    iVar7 = (int)ABS(param_1);
  }
  local_70 = CONCAT44(iVar7 % 0x3c,(undefined4)local_70);
  local_68 = CONCAT44(iVar7 / 0xe10,(iVar7 % 0xe10) / 0x3c);
  puVar16 = (undefined8 *)StringLiteral_6003;
  if (0.0 <= param_1) {
    puVar16 = *(undefined8 **)
               (*(long *)
                 System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo + 0xb8
               );
  }
  uVar17 = *puVar16;
  if (iVar7 < 0xe10) {
    if (iVar7 % 0xe10 < 0x3c) {
      uVar8 = FUN_0176eb1c((long)&local_70 + 4,0);
    }
    else {
      uVar8 = FUN_0176eb1c(&local_68,0);
      uVar12 = FUN_0176ebb0((long)&local_70 + 4,*(undefined8 *)puVar5,0);
      uVar8 = FUN_01600424(uVar8,*(undefined8 *)puVar4,uVar12,0);
    }
  }
  else {
    plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
    lVar11 = FUN_0176eb1c((long)&local_68 + 4,0);
    if (plVar9 == (long *)0x0) goto LAB_0251ca70;
    if ((lVar11 != 0) &&
       (lVar10 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
UnityEngine_XR_Interaction_Toolkit_AR_TapGesture__OnCancel:
      uVar17 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar17,0);
    }
    uVar15 = *(uint *)(plVar9 + 3);
    if (uVar15 == 0) {
LAB_0251ca6c:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar9[4] = lVar11;
    if (*(long *)puVar4 != 0) {
      lVar11 = thunk_FUN_00d6225c(*(long *)puVar4,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar11 == 0) goto UnityEngine_XR_Interaction_Toolkit_AR_TapGesture__OnCancel;
      uVar15 = *(uint *)(plVar9 + 3);
    }
    if (uVar15 < 2) goto LAB_0251ca6c;
    plVar9[5] = *(long *)puVar4;
    lVar11 = FUN_0176ebb0(&local_68,*(undefined8 *)puVar5,0);
    if ((lVar11 != 0) &&
       (lVar10 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
    goto UnityEngine_XR_Interaction_Toolkit_AR_TapGesture__OnCancel;
    uVar15 = *(uint *)(plVar9 + 3);
    if (uVar15 < 3) goto LAB_0251ca6c;
    plVar9[6] = lVar11;
    if (*(long *)puVar4 != 0) {
      lVar11 = thunk_FUN_00d6225c(*(long *)puVar4,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar11 == 0) goto UnityEngine_XR_Interaction_Toolkit_AR_TapGesture__OnCancel;
      uVar15 = *(uint *)(plVar9 + 3);
    }
    if (uVar15 < 4) goto LAB_0251ca6c;
    plVar9[7] = *(long *)puVar4;
    lVar11 = FUN_0176ebb0((long)&local_70 + 4,*(undefined8 *)puVar5,0);
    if ((lVar11 != 0) &&
       (lVar10 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
    goto UnityEngine_XR_Interaction_Toolkit_AR_TapGesture__OnCancel;
    if (*(uint *)(plVar9 + 3) < 5) goto LAB_0251ca6c;
    plVar9[8] = lVar11;
    uVar8 = FUN_01600844(plVar9,0);
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  dVar18 = log10(param_2);
  iVar1 = -0x80000000;
  if ((double)(long)(dVar18 + 1.0) != INFINITY) {
    iVar1 = (int)(dVar18 + 1.0);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  iVar6 = FUN_0251bfac(param_1,param_2);
  iVar7 = FUN_0251bfac((double)iVar7,param_2);
  local_70 = CONCAT44(local_70._4_4_,iVar6 - iVar7);
  lVar11 = FUN_0176eb1c(&local_70,0);
  if (lVar11 != 0) {
    uVar12 = FUN_01601910(lVar11,iVar1,0x30,0);
    uVar13 = FUN_0251c2a4(param_1,param_2);
    if ((uVar13 & 1) == 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      local_78 = FUN_0251c168(param_1,param_2);
      lVar11 = FUN_017562ec(&local_78,param_3,0);
      if (lVar11 == 0) goto LAB_0251ca70;
      iVar7 = FUN_016047a8(lVar11,0x2e,0);
      puVar3 = StringLiteral_6438;
      puVar2 = System_Collections_Generic_List<ValueTuple<int,_Vector2Int>>_TypeInfo;
      if (-1 < iVar7) {
        uVar14 = FUN_01603ec8(lVar11,iVar7,0);
        uVar12 = FUN_0160073c(uVar12,*(undefined8 *)puVar3,uVar14,*(undefined8 *)puVar2,0);
      }
    }
    FUN_0160073c(uVar17,uVar8,*(undefined8 *)puVar4,uVar12,0);
    return;
  }
LAB_0251ca70:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


