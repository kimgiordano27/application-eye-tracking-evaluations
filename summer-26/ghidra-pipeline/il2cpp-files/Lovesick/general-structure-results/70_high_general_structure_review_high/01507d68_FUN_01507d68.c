/*
FUNCTION_NAME: FUN_01507d68
ENTRY_POINT: 01507d68
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_15;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2
*/


void FUN_01507d68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  uint local_64;
  
  if ((DAT_03777130 & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKAnchor>__ctor__);
    thunk_FUN_00d48444(System_Collections_Generic_List<MedleyBarCustomer>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<object,_ReferenceTargetProperty>_Add__
                      );
    thunk_FUN_00d48444(StringLiteral_942);
    thunk_FUN_00d48444(UnityEngine_UIElements_UIR_TextureBlitter_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_CreateSharedTexture__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>__ctor__
                      );
    thunk_FUN_00d48444(System_Func<STMAutoDelayData,_string>_TypeInfo);
    thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
    DAT_03777130 = 1;
  }
  puVar4 = StringLiteral_942;
  local_64 = 0;
  uVar5 = FUN_01507c0c(param_1,param_2);
  puVar3 = 
  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_CreateSharedTexture__;
  puVar2 = 
  Method_System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>__ctor__
  ;
  puVar1 = System_Func<STMAutoDelayData,_string>_TypeInfo;
  if ((uVar5 & 1) == 0) {
    lVar10 = *(long *)(param_1 + 0x50);
    if (lVar10 != 0) {
      uVar7 = FUN_014b23b8(param_2,0);
      FUN_013dfa68(lVar10,uVar7,*(undefined8 *)puVar4);
    }
LAB_0150802c:
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<object,_ReferenceTargetProperty>_Add__
                               );
    if (lVar10 != 0) {
      FUN_01320e50(lVar10,*(undefined8 *)System_Collections_Generic_List<MedleyBarCustomer>_TypeInfo
                  );
      puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__;
      lVar12 = *(long *)(param_1 + 0x38);
      if (lVar12 != 0) {
        uVar13 = *(uint *)(lVar12 + 0x18);
        if (0 < (int)uVar13) {
          uVar14 = 0;
          do {
            if (uVar13 <= uVar14) {
LAB_01508168:
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            lVar11 = *(long *)(lVar12 + (long)(int)uVar14 * 8 + 0x20);
            if ((lVar11 == 0) || (plVar6 = (long *)FUN_0150816c(lVar11), plVar6 == (long *)0x0))
            goto LAB_01508164;
            uVar7 = (**(code **)(*plVar6 + 0x178))(plVar6,param_2,*(undefined8 *)(*plVar6 + 0x180));
            FUN_00ac1158(lVar10,uVar7,*(undefined8 *)puVar1);
            lVar9 = System_Text_EncoderNLS__ClearMustFlush(lVar11);
            if (lVar9 != 0) {
              uVar5 = FUN_015082fc(param_1,param_2,lVar11);
              if ((uVar5 & 1) != 0) {
                plVar6 = (long *)System_Text_EncoderNLS__ClearMustFlush(0,lVar11);
                if (plVar6 == (long *)0x0) goto LAB_01508164;
                (**(code **)(*plVar6 + 0x198))(plVar6,param_2,*(undefined8 *)(*plVar6 + 0x1a0));
              }
              FUN_01506d58(*(undefined8 *)(lVar11 + 0x48),*(undefined1 *)(lVar11 + 0x40));
            }
            uVar13 = *(uint *)(lVar12 + 0x18);
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < (int)uVar13);
        }
        lVar12 = *(long *)(param_1 + 0x48);
        uVar7 = FUN_01325140(lVar10,*(undefined8 *)
                                     Method_UnityEngine_Events_UnityEvent<MRUKAnchor>__ctor__);
        if (lVar12 != 0) {
          FUN_013dfa68(lVar12,uVar7,
                       *(undefined8 *)UnityEngine_UIElements_UIR_TextureBlitter_TypeInfo);
          return;
        }
      }
    }
  }
  else {
    lVar10 = *(long *)(param_1 + 0x40);
    if (lVar10 != 0) {
      uVar13 = 0;
LAB_01507e5c:
      if ((int)*(uint *)(lVar10 + 0x18) <= (int)uVar13) goto LAB_0150802c;
      if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_01508168;
      lVar10 = *(long *)(lVar10 + (long)(int)uVar13 * 8 + 0x20);
      if (lVar10 != 0) {
        lVar12 = *(long *)(lVar10 + 0x10);
        local_64 = 0;
        lVar11 = *(long *)(param_1 + 0x38);
        do {
          if (lVar11 == 0) break;
          if ((int)*(uint *)(lVar11 + 0x18) <= (int)local_64) goto LAB_01507fc4;
          if (*(uint *)(lVar11 + 0x18) <= local_64) goto LAB_01508168;
          if ((*(long *)(lVar11 + (long)(int)local_64 * 8 + 0x20) == 0) ||
             (plVar6 = (long *)FUN_0150816c(), plVar6 == (long *)0x0)) break;
          uVar7 = (**(code **)(*plVar6 + 0x178))(plVar6,param_2,*(undefined8 *)(*plVar6 + 0x180));
          uVar5 = FUN_015ff8a0(*(undefined8 *)(lVar10 + 0x10),0);
          if ((uVar5 & 1) == 0) {
            uVar5 = FUN_015ff8a0(uVar7,0);
            if ((uVar5 & 1) == 0) {
              lVar11 = *(long *)puVar3;
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar11 = *(long *)puVar3;
              }
              if (**(long **)(lVar11 + 0xb8) == 0) break;
              lVar12 = FUN_02020700(**(long **)(lVar11 + 0xb8),lVar12,uVar7,1,0);
              uVar8 = FUN_0176eb1c(&local_64,0);
              uVar8 = FUN_01600424(*(undefined8 *)puVar2,uVar8,*(undefined8 *)puVar1,0);
              if (lVar12 == 0) break;
              lVar12 = FUN_01601fc0(lVar12,uVar8,uVar7,0);
            }
            else {
              uVar7 = FUN_0176eb1c(&local_64,0);
              uVar7 = FUN_01600424(*(undefined8 *)puVar2,uVar7,*(undefined8 *)puVar1,0);
              if (lVar12 == 0) break;
              uVar5 = FUN_0160472c(lVar12,uVar7,0);
              if ((uVar5 & 1) != 0) goto LAB_01507fb8;
            }
          }
          local_64 = local_64 + 1;
          lVar11 = *(long *)(param_1 + 0x38);
        } while( true );
      }
    }
  }
LAB_01508164:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
LAB_01507fb8:
  lVar12 = *(long *)TMPro_TMP_InputField_SubmitEvent_TypeInfo;
LAB_01507fc4:
  uVar5 = FUN_015ff8a0(lVar12,0);
  if (((uVar5 & 1) == 0) && (lVar10 = *(long *)(lVar10 + 0x18), lVar10 != 0)) {
    if (lVar10 == 0) goto LAB_01508164;
    FUN_013dfa68(lVar10,lVar12,*(undefined8 *)puVar4);
  }
  lVar10 = *(long *)(param_1 + 0x40);
  uVar13 = uVar13 + 1;
  if (lVar10 == 0) goto LAB_01508164;
  goto LAB_01507e5c;
}


