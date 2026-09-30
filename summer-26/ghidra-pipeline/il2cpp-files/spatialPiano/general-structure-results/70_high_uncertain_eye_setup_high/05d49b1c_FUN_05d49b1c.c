/*
FUNCTION_NAME: FUN_05d49b1c
ENTRY_POINT: 05d49b1c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_05d49b1c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_48;
  
  if ((DAT_06bc38aa & 1) == 0) {
    FUN_02f08768(Method_System_Linq_Expressions_Interpreter_NewArrayBoundsInstruction_Run__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    DAT_06bc38aa = 1;
  }
  local_48 = *param_2;
  local_60 = 0;
  local_a0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  local_e0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  puVar4 = (undefined8 *)FUN_05ddd98c(&local_48,0);
  uStack_78 = puVar4[3];
  local_80 = puVar4[2];
  uStack_68 = puVar4[5];
  uStack_70 = puVar4[4];
  local_60 = *(undefined4 *)(puVar4 + 6);
  uStack_88 = puVar4[1];
  local_90 = *puVar4;
  iVar3 = FUN_060b7fc0(0);
  uVar6 = 4;
  if (iVar3 != 1) {
    uVar6 = 8;
  }
  FUN_060d69f4(&local_90,uVar6,0);
  puVar2 = Method_System_Linq_Expressions_Interpreter_NewArrayBoundsInstruction_Run__;
  lVar8 = *(long *)(param_1 + 0x118);
  uStack_78 = uStack_78 & 0xffffffff;
  uStack_88 = CONCAT44(uStack_88._4_4_,1);
  if (lVar8 != 0) {
    lVar5 = *(long *)Method_System_Linq_Expressions_Interpreter_NewArrayBoundsInstruction_Run__;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar5 = *(long *)puVar2;
    }
    puVar1 = 
    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
    ;
    lVar5 = **(long **)(lVar5 + 0xb8);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) != 0) {
        uVar7 = *(undefined8 *)(lVar5 + 0x20);
        if (*(int *)(*(long *)
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        if (*(int *)(lVar8 + 0x18) != 0) {
          FUN_05daf224(0,lVar8 + 0x20,&local_90,0,0,1,uVar7,0);
          lVar8 = *(long *)(param_1 + 0xc0);
          if (lVar8 == 0) goto TMPro_TMP_InputField__OnCancel;
          if (*(int *)(lVar8 + 0x10) - 1U < 2) {
            local_48 = *param_2;
            puVar4 = (undefined8 *)FUN_05ddd98c(&local_48,0);
            uStack_b8 = puVar4[3];
            local_c0 = puVar4[2];
            uStack_a8 = puVar4[5];
            uStack_b0 = puVar4[4];
            local_a0 = *(undefined4 *)(puVar4 + 6);
            uStack_c8 = puVar4[1];
            local_d0 = *puVar4;
            FUN_060d69f4(&local_d0,8,0);
            lVar8 = *(long *)(param_1 + 0x118);
            uStack_b8 = uStack_b8 & 0xffffffff;
            uStack_c8 = CONCAT44(uStack_c8._4_4_,1);
            if (lVar8 == 0) goto TMPro_TMP_InputField__OnCancel;
            lVar5 = *(long *)puVar2;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
              lVar5 = *(long *)puVar2;
            }
            lVar5 = **(long **)(lVar5 + 0xb8);
            if (lVar5 == 0) goto TMPro_TMP_InputField__OnCancel;
            if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) goto LAB_05d49e44;
            uVar7 = *(undefined8 *)(lVar5 + 0x28);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_05d49e44;
            FUN_05daf224(0,lVar8 + 0x28,&local_d0,0,0,1,uVar7,0);
            lVar8 = *(long *)(param_1 + 0xc0);
            if (lVar8 == 0) goto TMPro_TMP_InputField__OnCancel;
          }
          if (*(int *)(lVar8 + 0x10) != 2) {
LAB_05d49e20:
            *(undefined8 *)(param_1 + 0x120) = param_3;
            return;
          }
          local_48 = *param_2;
          puVar4 = (undefined8 *)FUN_05ddd98c(&local_48,0);
          uStack_f8 = puVar4[3];
          local_100 = puVar4[2];
          uStack_e8 = puVar4[5];
          uStack_f0 = puVar4[4];
          local_e0 = *(undefined4 *)(puVar4 + 6);
          uStack_108 = puVar4[1];
          local_110 = *puVar4;
          FUN_060d69f4(&local_110,8,0);
          lVar8 = *(long *)(param_1 + 0x118);
          uStack_f8 = uStack_f8 & 0xffffffff;
          uStack_108 = CONCAT44(uStack_108._4_4_,1);
          if (lVar8 != 0) {
            lVar5 = *(long *)puVar2;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
              lVar5 = *(long *)puVar2;
            }
            lVar5 = **(long **)(lVar5 + 0xb8);
            if (lVar5 != 0) {
              if (2 < *(uint *)(lVar5 + 0x18)) {
                uVar7 = *(undefined8 *)(lVar5 + 0x30);
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                if (2 < *(uint *)(lVar8 + 0x18)) {
                  FUN_05daf224(0,lVar8 + 0x30,&local_110,0,0,1,uVar7,0);
                  goto LAB_05d49e20;
                }
              }
              goto LAB_05d49e44;
            }
          }
          goto TMPro_TMP_InputField__OnCancel;
        }
      }
LAB_05d49e44:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
  }
TMPro_TMP_InputField__OnCancel:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


