/*
FUNCTION_NAME: FUN_01856758
ENTRY_POINT: 01856758
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


long FUN_01856758(long *param_1,long *param_2)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long local_68;
  
  puVar1 = 
  Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
  ;
  if ((DAT_03779641 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_0_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_1337);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_Universal_XRSystem_RefreshXrSdk__);
    thunk_FUN_00d48444(System_IO_DriveNotFoundException_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
                      );
    thunk_FUN_00d48444(StringLiteral_8505);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<HingedComboComponent>_MoveNext__
                      );
    thunk_FUN_00d48444(StringLiteral_2517);
    thunk_FUN_00d48444(PTR_DAT_033ec078);
    thunk_FUN_00d48444(StringLiteral_5548);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(StringLiteral_3975);
    thunk_FUN_00d48444(StringLiteral_13078);
    thunk_FUN_00d48444(UnityEngine_Rendering_AtlasAllocator_TypeInfo);
    DAT_03779641 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar4 = FUN_017a66f0(param_1,0);
  puVar1 = UnityEngine_Rendering_AtlasAllocator_TypeInfo;
  if (lVar4 != 0) {
    plVar5 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,*(undefined4 *)(lVar4 + 0x18));
    lVar6 = FUN_00da4fb8(*(undefined8 *)puVar1,*(undefined4 *)(lVar4 + 0x18));
    puVar1 = StringLiteral_13078;
    if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
      uVar12 = 0;
      uVar10 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        if (uVar10 <= uVar12) {
LAB_01856bb0:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (param_1 == (long *)0x0) goto LAB_01856bac;
        lVar13 = *(long *)(lVar4 + 0x20 + uVar12 * 8);
        plVar7 = (long *)(**(code **)(*param_1 + 0x6e8))
                                   (param_1,lVar13,0x38,*(undefined8 *)(*param_1 + 0x6f0));
        if (plVar7 == (long *)0x0) goto LAB_01856bac;
        uVar8 = (**(code **)(*plVar7 + 0x2f8))(plVar7,0,*(undefined8 *)(*plVar7 + 0x300));
        if (*(int *)(*(long *)System_IO_DriveNotFoundException_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)System_IO_DriveNotFoundException_TypeInfo);
        }
        uVar8 = FUN_01856c5c(uVar8);
        if (lVar6 == 0) goto LAB_01856bac;
        if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_01856bb0;
        *(undefined8 *)(lVar6 + 0x20 + uVar12 * 8) = uVar8;
        uVar8 = *(undefined8 *)Method_UnityEngine_Rendering_Universal_XRSystem_RefreshXrSdk__;
        if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar8 = FUN_01780344(uVar8,0);
        uVar8 = (**(code **)(*plVar7 + 0x218))(plVar7,uVar8,1,*(undefined8 *)(*plVar7 + 0x220));
        uVar8 = FUN_010d8178(uVar8,*(undefined8 *)StringLiteral_8505);
        lVar11 = *(long *)puVar1;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar11);
          lVar11 = *(long *)puVar1;
        }
        lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
        if (lVar14 == 0) {
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar11);
            lVar11 = *(long *)puVar1;
          }
          uVar15 = **(undefined8 **)(lVar11 + 0xb8);
          lVar14 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_5548);
          if (lVar14 == 0) goto LAB_01856bac;
          FUN_012d239c(lVar14,uVar15,*(undefined8 *)StringLiteral_3975,0);
          *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar14;
        }
        uVar8 = FUN_010dcdb8(uVar8,lVar14,
                             *(undefined8 *)
                              Method_System_Collections_Generic_List_Enumerator<HingedComboComponent>_MoveNext__
                            );
        FUN_010de6d8(uVar8,&local_68,*(undefined8 *)StringLiteral_2517);
        lVar11 = local_68;
        if (local_68 != 0) {
          lVar13 = local_68;
        }
        iVar3 = FUN_010ae588(plVar5,lVar13,0,uVar12 & 0xffffffff,
                             *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
        if (iVar3 != -1) {
          thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
          FUN_00acb0a4();
          uVar8 = FUN_01731954(0);
          FUN_00ac2be8(param_1);
          uVar15 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
          uVar9 = thunk_FUN_00d48444(Method_System_Xml_Schema_XsdBuilder_BuildComplexContent_Mixed__
                                    );
          uVar8 = FUN_018652e8(uVar9,uVar8,lVar13,uVar15,0);
          thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
          uVar15 = thunk_FUN_00d62348();
          FUN_00ac2be8();
          FUN_017713a8(uVar15,uVar8,0);
          uVar8 = thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vminvq_s32__);
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar15,uVar8);
        }
        if (param_2 != (long *)0x0) {
          lVar13 = (**(code **)(*param_2 + 0x178))
                             (param_2,lVar13,lVar11 != 0,*(undefined8 *)(*param_2 + 0x180));
        }
        if (plVar5 == (long *)0x0) goto LAB_01856bac;
        if ((lVar13 != 0) &&
           (lVar11 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar5 + 0x40)), lVar11 == 0)) {
          uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar8,0);
        }
        if (*(uint *)(plVar5 + 3) <= uVar12) goto LAB_01856bb0;
        plVar5[uVar12 + 4] = lVar13;
        uVar10 = (ulong)*(uint *)(lVar4 + 0x18);
        uVar12 = uVar12 + 1;
      } while ((long)uVar12 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
    uVar8 = *(undefined8 *)PTR_DAT_033ec078;
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar8 = FUN_01780344(uVar8,0);
    puVar1 = StringLiteral_1337;
    if (param_1 != (long *)0x0) {
      bVar2 = (**(code **)(*param_1 + 0x1f8))(param_1,uVar8,0,*(undefined8 *)(*param_1 + 0x200));
      lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar13 != 0) {
        FUN_017b46ec(lVar13,0);
        *(byte *)(lVar13 + 0x10) = bVar2 & 1;
        *(long *)(lVar13 + 0x18) = lVar6;
        *(long *)(lVar13 + 0x20) = lVar4;
        *(long **)(lVar13 + 0x28) = plVar5;
        return lVar13;
      }
    }
  }
LAB_01856bac:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


