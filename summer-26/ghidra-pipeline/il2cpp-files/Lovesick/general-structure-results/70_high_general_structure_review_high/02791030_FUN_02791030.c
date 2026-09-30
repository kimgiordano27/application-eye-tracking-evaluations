/*
FUNCTION_NAME: FUN_02791030
ENTRY_POINT: 02791030
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined4 FUN_02791030(undefined8 param_1,long param_2,undefined8 param_3,long *param_4)

{
  byte bVar1;
  float fVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  long *plVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  long local_70;
  undefined8 local_68;
  
  local_70 = param_2;
  local_68 = param_3;
  if ((DAT_037886c2 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_5608);
    thunk_FUN_00d48444(Method_System_String_Insert__);
    thunk_FUN_00d48444(PTR_DAT_033ec208);
    thunk_FUN_00d48444(StringLiteral_484);
    thunk_FUN_00d48444(StringLiteral_411);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<Guid>_Remove__);
    thunk_FUN_00d48444(PTR_DAT_033f72c0);
    thunk_FUN_00d48444(SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<Vector3>__ctor__);
    thunk_FUN_00d48444(DG_Tweening_DOTweenModuleUI_<>c__DisplayClass38_0_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<Type,_Serializer>_Add__);
    thunk_FUN_00d48444(Meta_WitAi_Speech_VoiceTextEvent_TypeInfo);
    thunk_FUN_00d48444(Sirenix_Serialization_UnitySerializationUtility_<>c_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqshrun_high_n_s16__);
    DAT_037886c2 = 1;
  }
  puVar10 = StringLiteral_302;
  param_4[1] = 0;
  *param_4 = 0;
  param_4[3] = 0;
  param_4[2] = 0;
  iVar12 = FUN_02817624(&local_68,0);
  puVar11 = StringLiteral_411;
  puVar9 = Method_System_Collections_Generic_HashSet<Guid>_Remove__;
  puVar8 = Sirenix_Serialization_UnitySerializationUtility_<>c_TypeInfo;
  puVar7 = SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo;
  puVar6 = DG_Tweening_DOTweenModuleUI_<>c__DisplayClass38_0_TypeInfo;
  puVar5 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  puVar4 = PTR_DAT_033ec208;
  if (iVar12 < 7) {
    if (iVar12 != 5) {
      if (iVar12 == 6) {
        if (local_70 == 0) goto LAB_027916e0;
        plVar13 = (long *)FUN_028191e8(local_70,local_68,0);
        if (plVar13 == (long *)0x0) {
          param_4[1] = 0;
          *param_4 = 0;
          param_4[3] = 0;
          param_4[2] = 0;
        }
        else {
          plVar17 = plVar13;
          if (*plVar13 != *(long *)puVar7) {
            plVar17 = (long *)0x0;
          }
          *param_4 = (long)plVar17;
          plVar17 = plVar13;
          if (*plVar13 != *(long *)puVar11) {
            plVar17 = (long *)0x0;
          }
          param_4[1] = (long)plVar17;
          lVar16 = *(long *)puVar6;
          bVar1 = *(byte *)(lVar16 + 300);
          plVar17 = (long *)0x0;
          if ((bVar1 <= *(byte *)(*plVar13 + 300)) &&
             (plVar17 = plVar13,
             *(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != lVar16)) {
            plVar17 = (long *)0x0;
          }
          param_4[2] = (long)plVar17;
          lVar16 = *(long *)puVar4;
          bVar1 = *(byte *)(lVar16 + 300);
          if (*(byte *)(*plVar13 + 300) < bVar1) {
            plVar13 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != lVar16) {
            plVar13 = (long *)0x0;
          }
          param_4[3] = (long)plVar13;
        }
        uVar15 = FUN_0278edbc(param_4);
        if ((uVar15 & 1) == 0) {
          return 1;
        }
        iVar12 = *(int *)(*(long *)puVar10 + 0xe0);
        puVar3 = (undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqshrun_high_n_s16__;
joined_r0x0279148c:
        if (iVar12 == 0) {
          thunk_FUN_00d32864();
        }
        uVar14 = *puVar3;
        goto LAB_027916a4;
      }
      goto LAB_02791240;
    }
    if (local_70 == 0) goto LAB_027916e0;
    uVar14 = FUN_028190cc(local_70,local_68,0);
    uVar15 = FUN_015ff8a0(uVar14,0);
    puVar8 = StringLiteral_5608;
    puVar5 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
    if ((uVar15 & 1) == 0) {
      uVar18 = *(undefined8 *)StringLiteral_484;
      if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar18 = FUN_01780344(uVar18,0);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar8);
      }
      plVar13 = (long *)FUN_02771728(param_1,uVar14,uVar18,0);
      if (plVar13 == (long *)0x0) {
        plVar13 = (long *)0x0;
      }
      else if (*plVar13 != *(long *)puVar11) {
        plVar13 = (long *)0x0;
      }
      param_4[1] = (long)plVar13;
      uVar15 = FUN_0278edbc(param_4);
      if ((uVar15 & 1) != 0) {
        uVar18 = *(undefined8 *)PTR_DAT_033f72c0;
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar18 = FUN_01780344(uVar18,0);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        plVar13 = (long *)FUN_02771728(param_1,uVar14,uVar18,0);
        if (plVar13 == (long *)0x0) {
          plVar13 = (long *)0x0;
        }
        else if (*plVar13 != *(long *)puVar7) {
          plVar13 = (long *)0x0;
        }
        *param_4 = (long)plVar13;
      }
      uVar15 = FUN_0278edbc(param_4);
      if ((uVar15 & 1) != 0) {
        uVar18 = *(undefined8 *)Method_Obi_ObiNativeList<Vector3>__ctor__;
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar18 = FUN_01780344(uVar18,0);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        plVar13 = (long *)FUN_02771728(param_1,uVar14,uVar18,0);
        if (plVar13 == (long *)0x0) {
LAB_027915a0:
          plVar13 = (long *)0x0;
        }
        else {
          lVar16 = *(long *)puVar6;
          bVar1 = *(byte *)(lVar16 + 300);
          if (*(byte *)(*plVar13 + 300) < bVar1) goto LAB_027915a0;
          if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != lVar16) {
            plVar13 = (long *)0x0;
          }
        }
        param_4[2] = (long)plVar13;
      }
      uVar15 = FUN_0278edbc(param_4);
      if ((uVar15 & 1) != 0) {
        uVar18 = *(undefined8 *)Method_System_String_Insert__;
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar18 = FUN_01780344(uVar18,0);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        plVar13 = (long *)FUN_02771728(param_1,uVar14,uVar18,0);
        if (plVar13 == (long *)0x0) {
          param_4[3] = 0;
        }
        else {
          lVar16 = *(long *)puVar4;
          bVar1 = *(byte *)(lVar16 + 300);
          if (*(byte *)(*plVar13 + 300) < bVar1) {
            plVar13 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != lVar16) {
            plVar13 = (long *)0x0;
          }
          param_4[3] = (long)plVar13;
        }
      }
    }
    uVar15 = FUN_0278edbc(param_4);
    if ((uVar15 & 1) == 0) {
      return 1;
    }
    uVar14 = FUN_015f6780(*(undefined8 *)Meta_WitAi_Speech_VoiceTextEvent_TypeInfo,uVar14,0);
  }
  else {
    if (iVar12 == 0xc) {
      if (local_70 == 0) goto LAB_027916e0;
      auVar21 = FUN_028194f0(local_70,local_68,0);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar15 = FUN_0268b4e0(auVar21._0_8_,0,0);
      if ((uVar15 & 1) != 0) {
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar15 = FUN_0268b4e0(auVar21._8_8_,0,0);
        if ((uVar15 & 1) != 0) {
          iVar12 = *(int *)(*(long *)puVar10 + 0xe0);
          puVar3 = (undefined8 *)
                   Method_System_Collections_Generic_Dictionary<Type,_Serializer>_Add__;
          goto joined_r0x0279148c;
        }
      }
      *param_4 = auVar21._0_8_;
      fVar19 = fmodf((float)param_1,1.0);
      if (DAT_037757b6 == '\0') {
        thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
        DAT_037757b6 = '\x01';
      }
      fVar20 = **(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8) * 8.0;
      fVar2 = ABS(fVar19) * DAT_028aa898;
      if (ABS(fVar19) * DAT_028aa898 <= fVar20) {
        fVar2 = fVar20;
      }
      if (ABS(0.0 - fVar19) < fVar2) {
        return 1;
      }
      if (*param_4 != 0) {
        FUN_0267017c(*param_4,1,0);
        return 1;
      }
LAB_027916e0:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (iVar12 == 0xd) {
      return 0;
    }
LAB_02791240:
    local_78 = FUN_02817624(&local_68,0);
    local_88 = *(undefined8 *)puVar9;
    uStack_80 = 0xffffffffffffffff;
    uVar14 = FUN_017a7f78(&local_88,0);
    uVar14 = FUN_015f5b28(*(undefined8 *)puVar8,uVar14,0);
  }
  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar10);
  }
LAB_027916a4:
  FUN_02661754(uVar14,0);
  return 0;
}


