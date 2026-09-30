/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vshll_n_s16
ENTRY_POINT: 01fe83f0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_gaze_retrieval_or_extraction
*/


long Unity_Burst_Intrinsics_Arm_Neon__vshll_n_s16(void)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *unaff_x19;
  long unaff_x20;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  uint uVar16;
  
  thunk_FUN_00d48444(PTR_DAT_033ee168);
  thunk_FUN_00d48444(Mono_Security_Cryptography_PKCS1_TypeInfo);
  thunk_FUN_00d48444(System_Func<STMSoundClipData,_STMSoundClipData>_TypeInfo);
  thunk_FUN_00d48444(Method_UnityEngine_AndroidJavaObject_Call<long>__);
  thunk_FUN_00d48444(
                    Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
                    );
  thunk_FUN_00d48444(Method_Unity_AI_Navigation_NavMeshSurface_<>c_<CollectSources>b__84_1__);
  thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
  thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
  *(undefined1 *)(unaff_x20 + 0x7e2) = 1;
  puVar5 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if (unaff_x19[2] != 0) {
    return unaff_x19[2];
  }
  lVar13 = unaff_x19[3];
  if (*(int *)(*(long *)Method_System_Nullable<OVRPlugin_Result>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar8 = (long *)FUN_01fffb04(lVar13,0);
  lVar13 = *(long *)puVar5;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar13);
  }
  uVar9 = FUN_01789ac0(plVar8,0,0);
  if ((uVar9 & 1) != 0) {
    plVar8 = (long *)unaff_x19[3];
  }
  if (plVar8 != (long *)0x0) {
    lVar13 = (**(code **)(*plVar8 + 0x6f8))(plVar8,0x18,*(undefined8 *)(*plVar8 + 0x700));
    if ((lVar13 == 0) || (*(long *)(lVar13 + 0x18) == 0)) {
      uVar15 = 0;
    }
    else {
      plVar8 = (long *)thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033ee168);
      if (plVar8 == (long *)0x0) goto LAB_01fe8784;
      FUN_01743cd4(plVar8,*(undefined4 *)(lVar13 + 0x18),0);
      puVar7 = 
      Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
      ;
      puVar6 = Method_UnityEngine_AndroidJavaObject_Call<long>__;
      puVar4 = Mono_Security_Cryptography_PKCS1_TypeInfo;
      puVar3 = System_Func<STMSoundClipData,_STMSoundClipData>_TypeInfo;
      uVar1 = *(uint *)(lVar13 + 0x18);
      if (0 < (int)uVar1) {
        uVar16 = 0;
        do {
          if (uVar1 <= uVar16) {
LAB_01fe8780:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          plVar14 = *(long **)(lVar13 + (long)(int)uVar16 * 8 + 0x20);
          uVar15 = *(undefined8 *)puVar3;
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar15 = FUN_01780344(uVar15,0);
          if ((plVar14 == (long *)0x0) ||
             (lVar10 = (**(code **)(*plVar14 + 0x218))
                                 (plVar14,uVar15,0,*(undefined8 *)(*plVar14 + 0x220)), lVar10 == 0))
          goto LAB_01fe8784;
          uVar1 = *(uint *)(lVar10 + 0x18);
          if ((long)((ulong)uVar1 << 0x20) < 1) {
LAB_01fe8624:
            lVar10 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
            if (lVar10 != 0) {
              lVar10 = unaff_x19[3];
              uVar15 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
              if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar10 = FUN_017a545c(lVar10,uVar15,0);
              if (lVar10 != 0) {
                (**(code **)(*plVar8 + 0x308))(plVar8,lVar10,*(undefined8 *)(*plVar8 + 0x310));
              }
            }
          }
          else {
            uVar9 = 0;
            do {
              if (uVar1 == uVar9) goto LAB_01fe8780;
              plVar11 = *(long **)(lVar10 + 0x20 + uVar9 * 8);
              if (plVar11 == (long *)0x0) {
                plVar11 = (long *)0x0;
              }
              else {
                lVar12 = *plVar11;
                bVar2 = *(byte *)(*(long *)puVar4 + 300);
                if ((*(byte *)(lVar12 + 300) < bVar2) ||
                   (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4))
                {
                    /* WARNING: Subroutine does not return */
                  FUN_00da544c();
                }
                if (lVar12 != *(long *)puVar6) {
                  plVar11 = (long *)0x0;
                }
              }
              uVar9 = uVar9 + 1;
            } while ((long)uVar9 < (long)(int)uVar1);
            if ((plVar11 == (long *)0x0) || ((char)plVar11[2] != '\0')) goto LAB_01fe8624;
          }
          uVar1 = *(uint *)(lVar13 + 0x18);
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)uVar1);
      }
      lVar13 = (**(code **)(*unaff_x19 + 0x238))();
      if (lVar13 != 0) {
        (**(code **)(*plVar8 + 0x3f8))(plVar8,lVar13,*(undefined8 *)(*plVar8 + 0x400));
      }
      uVar15 = (**(code **)(*plVar8 + 0x418))(plVar8,*(undefined8 *)(*plVar8 + 0x420));
    }
    lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                 Method_Unity_AI_Navigation_NavMeshSurface_<>c_<CollectSources>b__84_1__
                               );
    if (lVar13 != 0) {
      FUN_01ff8874(lVar13,uVar15,0);
      unaff_x19[2] = lVar13;
      return lVar13;
    }
  }
LAB_01fe8784:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


