/*
FUNCTION_NAME: FUN_0349e6b8
ENTRY_POINT: 0349e6b8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_0349e6b8(long param_1,undefined4 param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined4 uVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar10 = 
  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_StartTransition<FontDefinition>__;
  if ((DAT_04832b74 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_StartTransition<FontDefinition>__
                      );
    thunk_FUN_01efb3a4(Method_System_String_JoinCore__);
    thunk_FUN_01efb3a4(Method_System_String_CompareOrdinal__);
    thunk_FUN_01efb3a4(Method_System_String_PadRight__);
    thunk_FUN_01efb3a4(Method_System_Threading_SynchronizationContext_Wait__);
    DAT_04832b74 = 1;
  }
  lVar3 = thunk_FUN_01f117cc(*(undefined8 *)puVar10);
  System_Array__CombineHashCodes(lVar3,param_2,0);
  if (lVar3 == 0) goto LAB_0349eae0;
  FUN_0348e034(lVar3,param_1,0);
  if (*(int *)(lVar3 + 0x28) == 4) {
    if (*(int *)(lVar3 + 0x38) < 1) {
      uVar8 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                );
      uVar8 = FUN_01f08890(uVar8,1);
      FUN_01bc50c0(lVar3);
      uVar9 = *(undefined8 *)(lVar3 + 0x30);
      FUN_01bc50c0(uVar8);
      FUN_01bc56ec(uVar8,uVar9);
      FUN_01bc5408(uVar8,0,uVar9);
      puVar10 = Method_System_String_Concat__;
      goto LAB_0349ec30;
    }
    lVar4 = FUN_0349d600(param_1);
    if (lVar4 == 0) goto LAB_0349eae0;
    plVar5 = (long *)FUN_034a0eb8(lVar4,*(undefined4 *)(lVar3 + 0x38),0);
    if ((plVar5 != (long *)0x0) && (*plVar5 != *(long *)Method_System_String_JoinCore__)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar5);
    }
  }
  else {
    plVar5 = (long *)FUN_0349d4e0(param_1);
  }
  lVar4 = FUN_0349fb4c(param_1);
  if (lVar4 == 0) goto LAB_0349eae0;
  *(undefined4 *)(lVar4 + 0x30) = 2;
  lVar14 = *(long *)(lVar4 + 0x80);
  *(undefined4 *)(lVar4 + 0x4c) = *(undefined4 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)(lVar3 + 0x30);
  thunk_FUN_01f51358();
  if (*(long *)(param_1 + 0x40) == 0) goto LAB_0349eae0;
  plVar6 = (long *)FUN_034a0c28(*(long *)(param_1 + 0x40),0);
  if (plVar6 == (long *)0x0) {
LAB_0349e828:
    *(undefined8 *)(lVar4 + 0x28) =
         *(undefined8 *)Method_System_Threading_SynchronizationContext_Wait__;
    thunk_FUN_01f51358();
    if (lVar14 == 0) goto LAB_0349eae0;
    *(undefined4 *)(lVar14 + 0x10) = 2;
    *(undefined4 *)(lVar4 + 0x38) = 0;
  }
  else {
    if (*plVar6 != *(long *)Method_System_String_PadRight__) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar6);
    }
    if (0 < *(int *)(lVar3 + 0x10)) goto LAB_0349e828;
    if (lVar14 == 0) goto LAB_0349eae0;
    *(undefined4 *)(lVar14 + 0x10) = 3;
    *(undefined4 *)(lVar14 + 0x20) = 2;
    *(undefined4 *)(lVar4 + 0x38) = 2;
    if ((int)plVar6[6] == 2) {
      *(undefined4 *)(lVar14 + 0x1c) = 3;
      *(undefined4 *)(lVar4 + 0x34) = 3;
    }
    else {
      if ((int)plVar6[6] != 1) {
        uVar8 = thunk_FUN_01efb3a4(
                                  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                  );
        uVar8 = FUN_01f08890(uVar8,1);
        FUN_01bc50c0(plVar6);
        local_34 = (undefined4)plVar6[6];
        uVar9 = thunk_FUN_01efb3a4(Method_Mono_Security_Cryptography_SymmetricTransform_CheckInput__
                                  );
        uVar9 = thunk_FUN_01f113fc(uVar9,&local_34);
        uVar9 = FUN_0359ff90(uVar9,0);
        FUN_01bc50c0(uVar8);
        FUN_01bc56ec(uVar8,uVar9);
        FUN_01bc5408(uVar8,0,uVar9);
        puVar10 = Method_Mono_Security_Cryptography_SymmetricTransform_TransformBlock__;
        goto LAB_0349ec30;
      }
      *(long *)(lVar14 + 0x28) = plVar6[5];
      thunk_FUN_01f51358();
      *(undefined4 *)(lVar14 + 0x1c) = 2;
      *(undefined4 *)(lVar4 + 0x34) = 2;
      *(long *)(lVar14 + 0x40) = plVar6[5];
      thunk_FUN_01f51358();
      *(long *)(lVar14 + 0x48) = plVar6[8];
      thunk_FUN_01f51358();
    }
  }
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_0349eae0;
  lVar7 = FUN_0349aad4(*(long *)(param_1 + 0x10),(long)*(int *)(lVar3 + 0x10));
  *(long *)(lVar14 + 0x58) = lVar7;
  if (lVar7 == *(long *)(param_1 + 0x20)) {
    uVar11 = 1;
  }
  else if ((*(long *)(param_1 + 0x28) < 1) || (lVar7 != *(long *)(param_1 + 0x28))) {
    uVar11 = 2;
  }
  else {
    uVar11 = 3;
  }
  *(undefined4 *)(lVar14 + 0x24) = uVar11;
  *(undefined4 *)(lVar14 + 0x14) = 2;
  FUN_0348c4b4(*(undefined4 *)(lVar3 + 0x28),*(undefined8 *)(lVar3 + 0x30),
               *(undefined8 *)(param_1 + 0x10),plVar5,lVar14 + 0x7c,lVar14 + 0x68,lVar14 + 0x70,
               lVar14 + 0x78,0);
  *(undefined4 *)(lVar14 + 0x50) = 0;
  *(undefined4 *)(lVar14 + 0x80) = *(undefined4 *)(lVar3 + 0x14);
  *(undefined8 *)(lVar14 + 0x88) = *(undefined8 *)(lVar3 + 0x18);
  thunk_FUN_01f51358();
  *(undefined8 *)(lVar14 + 0x98) = *(undefined8 *)(lVar3 + 0x20);
  thunk_FUN_01f51358();
  if (5 < *(uint *)(lVar3 + 0x40)) {
    uVar8 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                              );
    uVar8 = FUN_01f08890(uVar8,1);
    FUN_01bc50c0(lVar3);
    local_38 = *(undefined4 *)(lVar3 + 0x40);
    uVar9 = thunk_FUN_01efb3a4(
                              Method_System_Threading_Tasks_SynchronizationContextAwaitTaskContinuation_PostAction__
                              );
    uVar9 = thunk_FUN_01f113fc(uVar9,&local_38);
    uVar9 = FUN_0359ff90(uVar9,0);
    FUN_01bc50c0(uVar8);
    FUN_01bc56ec(uVar8,uVar9);
    FUN_01bc5408(uVar8,0,uVar9);
    puVar10 = Method_UnityEngine_UIElements_StyleValueExtensions_DebugString<Scale>__;
LAB_0349ec30:
    uVar9 = thunk_FUN_01efb3a4(puVar10);
    uVar8 = FUN_035ae81c(uVar9,uVar8,0);
    thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_ExpressionUtils_ReturnObject<Expression>__);
    uVar9 = thunk_FUN_01f117cc();
    FUN_03480238(uVar9,uVar8,0);
    uVar8 = thunk_FUN_01efb3a4(Method_Oculus_Interaction_Input_SyntheticHand_<Start>b__25_0__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar9,uVar8);
  }
  uVar2 = 1 << (ulong)(*(uint *)(lVar3 + 0x40) & 0x1f);
  if ((uVar2 & 9) == 0) {
    if ((uVar2 & 0x12) == 0) {
      if (*(int *)(lVar3 + 0x14) < 1) {
        iVar12 = 1;
      }
      else {
        lVar7 = *(long *)(lVar3 + 0x18);
        if (lVar7 == 0) goto LAB_0349eae0;
        uVar13 = 0;
        iVar12 = 1;
        do {
          if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_0349eae4;
          lVar1 = uVar13 * 4;
          uVar13 = uVar13 + 1;
          iVar12 = *(int *)(lVar7 + 0x20 + lVar1) * iVar12;
        } while ((long)uVar13 < (long)*(int *)(lVar3 + 0x14));
      }
      *(int *)(lVar4 + 0x48) = iVar12;
      *(undefined4 *)(lVar14 + 0x18) = 3;
    }
    else {
      lVar3 = *(long *)(lVar3 + 0x18);
      if (lVar3 == 0) goto LAB_0349eae0;
      if (*(int *)(lVar3 + 0x18) == 0) goto LAB_0349eae4;
      *(undefined4 *)(lVar4 + 0x48) = *(undefined4 *)(lVar3 + 0x20);
      *(undefined4 *)(lVar14 + 0x18) = 2;
    }
LAB_0349ea9c:
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_0349eae0;
    FUN_034a0a4c(*(long *)(param_1 + 0x40),lVar4,0);
  }
  else {
    lVar7 = *(long *)(lVar3 + 0x18);
    if (lVar7 == 0) goto LAB_0349eae0;
    if (*(int *)(lVar7 + 0x18) == 0) {
LAB_0349eae4:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined4 *)(lVar4 + 0x48) = *(undefined4 *)(lVar7 + 0x20);
    *(undefined4 *)(lVar14 + 0x18) = 1;
    uVar11 = *(undefined4 *)(lVar14 + 0x7c);
    if (*(int *)(*(long *)Method_System_String_CompareOrdinal__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar13 = FUN_034906f0(uVar11);
    if ((uVar13 & 1) == 0) goto LAB_0349ea9c;
    lVar3 = *(long *)(lVar3 + 0x20);
    if (lVar3 == 0) goto LAB_0349eae0;
    if (*(int *)(lVar3 + 0x18) == 0) goto LAB_0349eae4;
    if (*(int *)(lVar3 + 0x20) != 0) goto LAB_0349ea9c;
    FUN_034a04fc(param_1,lVar14);
    FUN_0349f718(param_1,lVar4);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_0349eae0;
    FUN_03498a6c(*(long *)(param_1 + 0x10),lVar14);
    *(undefined4 *)(lVar14 + 0x10) = 4;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_03498a6c(*(long *)(param_1 + 0x10),lVar14);
    return;
  }
LAB_0349eae0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


