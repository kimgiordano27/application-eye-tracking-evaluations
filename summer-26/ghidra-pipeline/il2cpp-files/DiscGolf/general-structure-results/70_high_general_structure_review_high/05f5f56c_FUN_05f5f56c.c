/*
FUNCTION_NAME: FUN_05f5f56c
ENTRY_POINT: 05f5f56c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_19;telemetry_or_network_hits_3
*/


void FUN_05f5f56c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,long param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 local_b0 [16];
  
  if ((DAT_06dc43ce & 1) == 0) {
    FUN_02d965b8(Method_System_Runtime_CompilerServices_TaskAwaiter<Reply>_get_IsCompleted__);
    FUN_02d965b8(Method_UnityEngine_UIElements_TextInputBaseField<string>_get_textInputBase__);
    FUN_02d965b8(Method_UnityEngine_UIElements_TextInputBaseField<string>_set_isDelayed__);
    FUN_02d965b8(Method_UnityEngine_UIElements_TextInputBaseField<string>_set_text__);
    FUN_02d965b8(Method_UnityEngine_UIElements_TextInputBaseField<uint>_get_isDelayed__);
    FUN_02d965b8(Method_System_Runtime_CompilerServices_TaskAwaiter<Response>_GetResult__);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_TaskAwaiter<HttpClientResponse>_get_IsCompleted__
                );
    FUN_02d965b8(Method_UnityEngine_UIElements_TextInputBaseField<uint>_get_textInputBase__);
    FUN_02d965b8(Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__);
    FUN_02d965b8(PTR_DAT_069fbb48);
    FUN_02d965b8(Method_System_Runtime_CompilerServices_TaskAwaiter<HttpClientResponse>_GetResult__)
    ;
    DAT_06dc43ce = 1;
  }
  local_b0._0_8_ = 0;
  local_b0._8_8_ = 0;
  auVar1 = ZEXT816(0);
  if (*(long *)(param_7 + 0x240) != 0) {
    FUN_0504dc88(*(long *)(param_7 + 0x240),
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_TaskAwaiter<Reply>_get_IsCompleted__);
    auVar2._8_8_ = local_b0._8_8_;
    auVar2._0_8_ = local_b0._0_8_;
    auVar1._8_8_ = local_b0._8_8_;
    auVar1._0_8_ = local_b0._0_8_;
    if ((*(long *)(param_7 + 0x230) != 0) && (auVar1 = auVar2, *(long *)(param_7 + 0x240) != 0)) {
      FUN_0504e298(*(long *)(param_7 + 0x240),*(undefined4 *)(*(long *)(param_7 + 0x230) + 0x18),0,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_TextInputBaseField<string>_set_text__);
      puVar8 = Method_UnityEngine_UIElements_TextInputBaseField<uint>_get_textInputBase__;
      auVar1._8_8_ = local_b0._8_8_;
      auVar1._0_8_ = local_b0._0_8_;
      if (*(long *)(param_7 + 0x230) != 0) {
        local_b0 = FUN_0504e494(*(long *)(param_7 + 0x230),
                                *(undefined8 *)
                                 Method_UnityEngine_UIElements_TextInputBaseField<string>_get_textInputBase__
                               );
        uVar14 = FUN_03dc2430(local_b0,*(undefined8 *)puVar8);
        puVar9 = Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__;
        puVar7 = Method_UnityEngine_UIElements_TextInputBaseField<uint>_get_isDelayed__;
        puVar6 = Method_UnityEngine_UIElements_TextInputBaseField<string>_set_isDelayed__;
        puVar5 = Method_System_Runtime_CompilerServices_TaskAwaiter<Response>_GetResult__;
        puVar4 = Method_System_Runtime_CompilerServices_TaskAwaiter<HttpClientResponse>_GetResult__;
        puVar3 = PTR_DAT_069fbb48;
        while( true ) {
          if ((uVar14 & 1) == 0) {
            return;
          }
          plVar15 = (long *)FUN_03dc23e4(local_b0,*(undefined8 *)puVar9);
          lVar17 = *plVar15;
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          FUN_05f5f264(param_1,param_2,param_3,param_4,param_5,param_6,lVar17);
          auVar1 = local_b0;
          if ((lVar17 == 0) || (*(long *)(lVar17 + 0x38) == 0)) break;
          fVar19 = *(float *)(*(long *)(lVar17 + 0x38) + 0x28);
          fVar21 = *(float *)(param_7 + 0x2b8);
          if (fVar19 <= *(float *)(param_7 + 0x2b8)) {
            fVar21 = fVar19;
          }
          fVar20 = *(float *)(param_7 + 700);
          if (*(float *)(param_7 + 700) <= fVar19) {
            fVar20 = fVar19;
          }
          *(float *)(param_7 + 0x2b8) = fVar21;
          *(float *)(param_7 + 700) = fVar20;
          if (*(long *)(param_7 + 0x240) == 0) break;
          uVar13 = *(undefined4 *)(*(long *)(param_7 + 0x240) + 0x18);
          uVar10 = FUN_05f5ed70(param_7);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)puVar3);
          }
          iVar11 = FUN_054e9258(uVar13,uVar10,0);
          if (iVar11 < 1) {
            iVar12 = 0;
          }
          else {
            iVar18 = 0;
            do {
              auVar1 = local_b0;
              if ((*(long *)(lVar17 + 0x38) == 0) || (*(long *)(param_7 + 0x240) == 0))
              goto LAB_05f5f8b4;
              fVar21 = *(float *)(*(long *)(lVar17 + 0x38) + 0x28);
              plVar15 = (long *)FUN_0504e344(*(long *)(param_7 + 0x240),iVar18,*(undefined8 *)puVar5
                                            );
              auVar1 = local_b0;
              if ((*plVar15 == 0) || (lVar16 = *(long *)(*plVar15 + 0x38), lVar16 == 0))
              goto LAB_05f5f8b4;
              iVar12 = iVar18;
            } while ((*(float *)(lVar16 + 0x28) <= fVar21) &&
                    (iVar18 = iVar18 + 1, iVar12 = iVar11, iVar11 != iVar18));
          }
          iVar11 = FUN_05f5ed70(param_7);
          if (iVar12 < iVar11) {
            auVar1 = local_b0;
            if (*(long *)(param_7 + 0x240) == 0) break;
            FUN_0504de94(*(long *)(param_7 + 0x240),iVar12,lVar17,*(undefined8 *)puVar6);
          }
          auVar1 = local_b0;
          if (*(long *)(param_7 + 0x240) == 0) break;
          iVar11 = *(int *)(*(long *)(param_7 + 0x240) + 0x18);
          iVar12 = FUN_05f5ed70(param_7);
          if (iVar12 < iVar11) {
            lVar17 = *(long *)(param_7 + 0x240);
            uVar13 = FUN_05f5ed70(param_7);
            auVar1 = local_b0;
            if (lVar17 == 0) break;
            FUN_0504e200(lVar17,uVar13,0,*(undefined8 *)puVar7);
          }
          uVar14 = FUN_03dc2430(local_b0,*(undefined8 *)puVar8);
        }
      }
    }
  }
LAB_05f5f8b4:
  local_b0 = auVar1;
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


