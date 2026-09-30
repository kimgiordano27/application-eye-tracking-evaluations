/*
FUNCTION_NAME: FUN_024ae9f0
ENTRY_POINT: 024ae9f0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_024ae9f0(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  uint uVar18;
  long local_68;
  
  puVar5 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_037826a3 & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpaddlq_u8__);
    thunk_FUN_00d48444(Method_OVRControllerTest_<>c_<Start>b__4_26__);
    thunk_FUN_00d48444(PTR_DAT_033eeba0);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass11_0_<DOShakeRotation>b__1__
                      );
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<SoccerBlockerCannon>_Dispose__
                      );
    thunk_FUN_00d48444(Method_System_TimeZoneInfo_<>c_<TZif_ParsePosixDate>b__37_0__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<ValueTuple<MethodInfo,_DebugMember>>_AddRange__
                      );
    thunk_FUN_00d48444(StringLiteral_9851);
    thunk_FUN_00d48444(StringLiteral_5881);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_ARFoundation_ARTrackable<XRParticipant,_ARParticipant>_get_sessionRelativeData__
                      );
    thunk_FUN_00d48444(StringLiteral_2031);
    thunk_FUN_00d48444(StringLiteral_2240);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_float>_Remove__);
    thunk_FUN_00d48444(UnityEngine_Experimental_Rendering_ProbeVolumeSceneData_BakingSet_TypeInfo);
    DAT_037826a3 = 1;
  }
  *(undefined1 *)(param_1 + 0x168) = 0;
  uVar15 = *(undefined8 *)(param_1 + 0xf8);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar6 = StringLiteral_302;
  uVar11 = FUN_0268b5e4(uVar15,0);
  puVar4 = UnityEngine_Experimental_Rendering_ProbeVolumeSceneData_BakingSet_TypeInfo;
  if ((uVar11 & 1) == 0) {
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026611ec(*(undefined8 *)puVar4,param_1,0);
    return;
  }
  if ((*(long *)(param_1 + 0xf8) == 0) ||
     (lVar12 = FUN_0268fd4c(*(long *)(param_1 + 0xf8),0), lVar12 == 0)) goto LAB_024af044;
  FUN_0268ace8(lVar12,1,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_024af044;
  FUN_010c2e94(*(long *)(param_1 + 0xf8),&local_68,
               *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpaddlq_u8__);
  lVar16 = local_68;
  *(undefined1 *)(param_1 + 0x168) = 1;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar4 = Method_System_Collections_Generic_List_Enumerator<SoccerBlockerCannon>_Dispose__;
  uVar11 = FUN_0268b5e4(lVar16,0);
  if ((uVar11 & 1) == 0) {
LAB_024aebd0:
    *(undefined1 *)(param_1 + 0x168) = 0;
    uVar15 = *(undefined8 *)(param_1 + 0xf8);
    iVar1 = *(int *)(*(long *)puVar6 + 0xe0);
    puVar3 = (undefined8 *)StringLiteral_2031;
joined_r0x024aebe8:
    if (iVar1 == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026611ec(*puVar3,uVar15,0);
  }
  else {
    if (lVar16 == 0) goto LAB_024af044;
    uVar15 = FUN_0268fd10(lVar16,0);
    uVar17 = *(undefined8 *)(param_1 + 0xf8);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar5);
    }
    uVar11 = FUN_0268b4e0(uVar15,uVar17,0);
    if ((uVar11 & 1) != 0) goto LAB_024aebd0;
    lVar13 = FUN_0268fd10(lVar16,0);
    if (lVar13 == 0) goto LAB_024af044;
    plVar14 = (long *)FUN_0269fe30(lVar13,0);
    if ((plVar14 == (long *)0x0) || (*plVar14 != *(long *)puVar4)) {
      *(undefined1 *)(param_1 + 0x168) = 0;
      uVar15 = *(undefined8 *)(param_1 + 0xf8);
      iVar1 = *(int *)(*(long *)puVar6 + 0xe0);
      puVar3 = (undefined8 *)Method_System_Collections_Generic_Dictionary<int,_float>_Remove__;
      goto joined_r0x024aebe8;
    }
    uVar15 = *(undefined8 *)(param_1 + 0x118);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar11 = FUN_02681b9c(uVar15,0,0);
    if ((uVar11 & 1) != 0) {
      if (*(long *)(param_1 + 0x118) == 0) goto LAB_024af044;
      lVar13 = FUN_024c933c(*(long *)(param_1 + 0x118),0);
      uVar15 = FUN_0268fd10(lVar16,0);
      if (lVar13 == 0) goto LAB_024af044;
      uVar11 = FUN_026a12fc(lVar13,uVar15,0);
      if ((uVar11 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x168) = 0;
        uVar15 = *(undefined8 *)(param_1 + 0xf8);
        iVar1 = *(int *)(*(long *)puVar6 + 0xe0);
        puVar3 = (undefined8 *)
                 Method_UnityEngine_XR_ARFoundation_ARTrackable<XRParticipant,_ARParticipant>_get_sessionRelativeData__
        ;
        goto joined_r0x024aebe8;
      }
    }
    uVar15 = *(undefined8 *)(param_1 + 0x120);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar11 = FUN_02681b9c(uVar15,0,0);
    if ((uVar11 & 1) != 0) {
      if (*(long *)(param_1 + 0x120) == 0) goto LAB_024af044;
      lVar13 = FUN_0268fd10(*(long *)(param_1 + 0x120),0);
      uVar15 = FUN_0268fd10(lVar16,0);
      if (lVar13 == 0) goto LAB_024af044;
      uVar11 = FUN_026a12fc(lVar13,uVar15,0);
      if ((uVar11 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x168) = 0;
        uVar15 = *(undefined8 *)(param_1 + 0xf8);
        iVar1 = *(int *)(*(long *)puVar6 + 0xe0);
        puVar3 = (undefined8 *)StringLiteral_2240;
        goto joined_r0x024aebe8;
      }
    }
  }
  if (*(char *)(param_1 + 0x168) == '\0') {
    FUN_0268ace8(lVar12,0,0);
    return;
  }
  if (((lVar16 != 0) && (lVar13 = FUN_0268fd4c(lVar16,0), lVar13 != 0)) &&
     (lVar13 = FUN_010e5800(lVar13,*(undefined8 *)
                                    Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass11_0_<DOShakeRotation>b__1__
                           ), lVar13 != 0)) {
    uVar17 = *(undefined8 *)(param_1 + 0x120);
    uVar15 = *(undefined8 *)(param_1 + 0x118);
    *(long *)(lVar13 + 0x30) = lVar16;
    *(undefined8 *)(lVar13 + 0x20) = uVar17;
    *(undefined8 *)(lVar13 + 0x18) = uVar15;
    plVar14 = (long *)FUN_0268fd10(lVar16,0);
    if ((plVar14 != (long *)0x0) && (*plVar14 != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c();
    }
    *(long **)(lVar13 + 0x28) = plVar14;
    puVar10 = StringLiteral_9851;
    puVar9 = StringLiteral_5881;
    puVar8 = Method_System_TimeZoneInfo_<>c_<TZif_ParsePosixDate>b__37_0__;
    puVar7 = Method_OVRControllerTest_<>c_<Start>b__4_26__;
    puVar6 = Method_System_Collections_Generic_List<ValueTuple<MethodInfo,_DebugMember>>_AddRange__;
    puVar4 = PTR_DAT_033eeba0;
    if (*(long *)(param_1 + 0xf8) != 0) {
      lVar13 = FUN_0269fe30(*(long *)(param_1 + 0xf8),0);
      lVar16 = 0;
      while( true ) {
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar11 = FUN_02681b9c(lVar13,0,0);
        if ((uVar11 & 1) == 0) break;
        if (lVar13 == 0) goto LAB_024af044;
        FUN_010c2c5c(lVar13,&local_68,*(undefined8 *)puVar7);
        lVar16 = local_68;
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar11 = FUN_02681b9c(lVar16,0,0);
        if ((uVar11 & 1) != 0) break;
        lVar13 = FUN_0269fe30(lVar13,0);
      }
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar13 = FUN_011477ec(lVar12,*(undefined8 *)puVar6);
      if (lVar13 != 0) {
        FUN_02859c00(lVar13,1,0);
        FUN_02859c80(lVar13,30000,0);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar11 = FUN_02681b9c(lVar16,0,0);
        if ((uVar11 & 1) == 0) {
          if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_011477ec(lVar12,*(undefined8 *)puVar10);
        }
        else {
          if ((lVar16 == 0) || (lVar16 = FUN_010c3320(lVar16,*(undefined8 *)puVar4), lVar16 == 0))
          goto LAB_024af044;
          uVar2 = *(uint *)(lVar16 + 0x18);
          if (0 < (int)uVar2) {
            uVar18 = 0;
            do {
              if (uVar2 <= uVar18) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              lVar13 = *(long *)(lVar16 + (long)(int)uVar18 * 8 + 0x20);
              if (lVar13 == 0) goto LAB_024af044;
              uVar15 = thunk_FUN_00d93c64(lVar13,0);
              uVar17 = FUN_0268a8e4(lVar12,uVar15,0);
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)puVar5);
              }
              uVar11 = FUN_0268b4e0(uVar17,0,0);
              if ((uVar11 & 1) != 0) {
                FUN_0268abe8(lVar12,uVar15,0);
              }
              uVar2 = *(uint *)(lVar16 + 0x18);
              uVar18 = uVar18 + 1;
            } while ((int)uVar18 < (int)uVar2);
          }
        }
        if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_011477ec(lVar12,*(undefined8 *)puVar8);
        FUN_0268ace8(lVar12,0,0);
        *(undefined1 *)(param_1 + 0x168) = 1;
        return;
      }
    }
  }
LAB_024af044:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


