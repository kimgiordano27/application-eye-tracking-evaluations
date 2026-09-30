/*
FUNCTION_NAME: FUN_01b68444
ENTRY_POINT: 01b68444
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x01b68964) */
/* WARNING: Removing unreachable block (ram,0x01b688d4) */
/* WARNING: Removing unreachable block (ram,0x01b688b4) */
/* WARNING: Removing unreachable block (ram,0x01b68894) */
/* WARNING: Removing unreachable block (ram,0x01b68874) */
/* WARNING: Removing unreachable block (ram,0x01b68940) */
/* WARNING: Removing unreachable block (ram,0x01b68950) */
/* WARNING: Removing unreachable block (ram,0x01b68958) */
/* WARNING: Removing unreachable block (ram,0x01b68970) */
/* WARNING: Removing unreachable block (ram,0x01b68854) */
/* WARNING: Removing unreachable block (ram,0x01b68938) */

void FUN_01b68444(long param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  long local_f0;
  undefined8 uStack_e8;
  long local_e0;
  undefined8 uStack_d8;
  long local_d0;
  undefined8 uStack_c8;
  undefined1 local_b8 [8];
  long local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 uStack_88;
  undefined1 local_80 [16];
  undefined1 local_70 [8];
  undefined8 uStack_68;
  undefined1 local_58 [8];
  
  puVar5 = StringLiteral_13123;
  if ((DAT_0377e47c & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033ec698);
    thunk_FUN_00d48444(Sirenix_Serialization_Utilities_MemberAliasMethodInfo_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_11460);
    thunk_FUN_00d48444(SoccerBlocker_<CompletionCoroutine>d__50_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_4340);
    thunk_FUN_00d48444(StringLiteral_13233);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcltz_s32__);
    thunk_FUN_00d48444(PTR_DAT_033ef798);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<ValueTuple<MethodInfo,_DebugMember>>_Add__
                      );
    thunk_FUN_00d48444(UnityEngine_XR_Management_XRManagerSettings_<InitializeLoader>d__24_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_90__);
    thunk_FUN_00d48444(Method_System_Security_Cryptography_RijndaelManagedTransform_EncryptData__);
    thunk_FUN_00d48444(StringLiteral_13123);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_Universal_ForwardRenderer_SwapColorBuffer__);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_JsonReader_<ReaderReadAndAssertAsync>d__2_MoveNext__);
    thunk_FUN_00d48444(Method_Obi_ObiResourceHandle<ObiDistanceField>_Reference__);
    thunk_FUN_00d48444(Method_System_Security_Cryptography_AesManaged_set_Mode__);
    DAT_0377e47c = 1;
  }
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  local_58[0] = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_b8[0] = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  lVar7 = *(long *)(*(long *)puVar5 + 0x20);
  lVar12 = param_1 + 0x28;
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  pcVar8 = (char *)thunk_FUN_00d32ed4(lVar12,*(undefined8 *)(lVar7 + 0x80));
  if (*pcVar8 != '\0') {
    local_80 = FUN_00c34db4(lVar12,*(undefined8 *)
                                    Method_System_Security_Cryptography_RijndaelManagedTransform_EncryptData__
                           );
    uVar9 = FUN_0265e1cc(local_80,0);
    if ((uVar9 & 1) != 0) {
      FUN_01347408(lVar12,local_70,
                   *(undefined8 *)
                    Method_UnityEngine_Rendering_Universal_ForwardRenderer_SwapColorBuffer__);
      local_80._8_8_ = uStack_68;
      FUN_0265e038(local_80,0);
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      puVar6 = StringLiteral_13233;
      puVar5 = StringLiteral_4340;
      if (*(long *)(param_1 + 0x48) != 0) {
        piVar10 = *(int **)(param_1 + 0x58);
        if (piVar10 != (int *)0x0) {
          if (((*piVar10 != 0) || (piVar10[1] != 0)) || (piVar10[2] != 0)) {
            local_70[0] = 0;
            FUN_01ba4900(local_70,*(undefined8 *)
                                   Method_Newtonsoft_Json_JsonReader_<ReaderReadAndAssertAsync>d__2_MoveNext__
                         ,0);
            puVar4 = PTR_DAT_033ef798;
            local_58[0] = local_70[0];
            FUN_013421d4(&local_90,*(undefined4 *)(param_1 + 0x50),2,0,
                         *(undefined8 *)PTR_DAT_033ef798);
            FUN_013421d4(&local_a0,*(undefined4 *)(param_1 + 0x50),2,0,*(undefined8 *)puVar4);
            FUN_013421d4(&local_b0,*(undefined4 *)(param_1 + 0x50),2,0,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List<ValueTuple<MethodInfo,_DebugMember>>_Add__
                        );
            local_70[0] = 0;
            FUN_01ba4900(local_70,*(undefined8 *)
                                   Method_Obi_ObiResourceHandle<ObiDistanceField>_Reference__,0);
            local_b8[0] = local_70[0];
            if (0 < *(int *)(param_1 + 0x50)) {
              lVar7 = 0;
              lVar11 = 0;
              lVar12 = 0;
              do {
                lVar12 = lVar12 + 1;
                puVar1 = (undefined4 *)(*(long *)(param_1 + 0x48) + lVar11);
                uVar2 = *puVar1;
                uVar3 = puVar1[1];
                puVar1 = (undefined4 *)(local_90 + lVar7);
                puVar1[1] = uVar3;
                puVar1[2] = 0;
                *puVar1 = uVar2;
                *(undefined8 *)(local_a0 + lVar7) = 0;
                *(undefined4 *)((undefined8 *)(local_a0 + lVar7) + 1) = 0x3f800000;
                lVar7 = lVar7 + 0xc;
                *(undefined4 *)(local_b0 + lVar11) = uVar2;
                ((undefined4 *)(local_b0 + lVar11))[1] = uVar3;
                lVar11 = lVar11 + 8;
              } while (lVar12 < *(int *)(param_1 + 0x50));
            }
            FUN_01ba4904(local_b8,0);
            puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcltz_s32__;
            local_70[0] = 0;
            uStack_d8 = uStack_98;
            local_e0 = local_a0;
            uStack_c8 = uStack_88;
            local_d0 = local_90;
            uStack_e8 = uStack_a8;
            local_f0 = local_b0;
            FUN_01ba4900(local_70,*(undefined8 *)
                                   Method_System_Security_Cryptography_AesManaged_set_Mode__,0);
            local_b8[0] = local_70[0];
            if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_0266ed50(*(long *)(param_1 + 0x20),0);
            if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_01121f04(*(long *)(param_1 + 0x20),local_90,uStack_88,
                         *(undefined8 *)SoccerBlocker_<CompletionCoroutine>d__50_TypeInfo);
            if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_011210ec(*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x58),
                         *(undefined8 *)(param_1 + 0x60),0,0,1,0,*(undefined8 *)PTR_DAT_033ec698);
            if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_0112152c(*(long *)(param_1 + 0x20),local_a0,uStack_98,
                         *(undefined8 *)
                          Sirenix_Serialization_Utilities_MemberAliasMethodInfo_TypeInfo);
            if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_011217d4(*(long *)(param_1 + 0x20),0,local_b0,uStack_a8,
                         *(undefined8 *)StringLiteral_11460);
            FUN_01ba4904(local_b8,0);
            FUN_01342a94(&local_f0,*(undefined8 *)puVar6);
            FUN_01342a94(&local_e0,*(undefined8 *)puVar4);
            FUN_01342a94(&local_d0,*(undefined8 *)puVar4);
            FUN_01ba4904(local_58,0);
          }
          FUN_01342a94((long *)(param_1 + 0x48),*(undefined8 *)puVar6);
          FUN_01342a94((undefined8 *)(param_1 + 0x58),*(undefined8 *)puVar5);
          return;
        }
      }
      if (*(char *)(param_1 + 0x40) != '\0') {
        FUN_01b67e48(param_1);
      }
    }
  }
  return;
}


