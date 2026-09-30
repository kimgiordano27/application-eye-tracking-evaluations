/*
FUNCTION_NAME: FUN_03482534
ENTRY_POINT: 03482534
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


bool FUN_03482534(long *param_1,long *param_2,uint *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  undefined8 uVar15;
  bool bVar16;
  
  puVar3 = Method_System_Convert_ToUInt64__;
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if ((DAT_04832a9c & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Convert_ToUInt64__);
    thunk_FUN_01efb3a4(Method_Meta_WitAi_Events_SpeechEvents_SetEvent<VoiceServiceRequest>__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_BurstRuntime_GetUTF8LiteralPointer__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_04832a9c = 1;
  }
  puVar2 = Method_Unity_Burst_BurstRuntime_GetUTF8LiteralPointer__;
  *param_2 = 0;
  thunk_FUN_01f51358(param_2,0);
  *param_3 = 0;
  uVar15 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar7 = (long *)FUN_03579868(uVar15,0);
  puVar1 = Method_Meta_WitAi_Events_SpeechEvents_SetEvent<VoiceServiceRequest>__;
  lVar11 = *(long *)puVar2;
  if (plVar7 != (long *)0x0) {
    if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) != lVar11))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar7);
    }
  }
  bVar16 = true;
  plVar10 = param_1;
  while( true ) {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar11);
    }
    uVar8 = FUN_035964e8(plVar10,plVar7,0);
    if ((uVar8 & 1) == 0) {
      return bVar16;
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar8 = FUN_03594020(plVar10,0,0);
    if ((uVar8 & 1) != 0) {
      uVar15 = thunk_FUN_01efb3a4(Method_Meta_WitAi_Events_SpeechEvents_SetEvent<WitRequest>__);
      if (param_1 == (long *)0x0) {
        uVar12 = 0;
      }
      else {
        uVar12 = FUN_035841c4(param_1,0);
      }
      uVar15 = FUN_0340f2f0(uVar15,param_1,uVar12,0);
      thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
      uVar12 = thunk_FUN_01f117cc();
      FUN_0356adc8(uVar12,uVar15,0);
      uVar15 = thunk_FUN_01efb3a4(
                                 Method_Meta_WitAi_Events_SpeechEvents_SetEvent<WitRequestOptions>__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar12,uVar15);
    }
    if (plVar10 == (long *)0x0) break;
    uVar8 = FUN_03583944(plVar10,0);
    if ((uVar8 & 1) == 0) {
      lVar11 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
      if (bVar16) {
        bVar16 = 0 < (int)*param_3;
        if (0 < (int)*param_3) {
          uVar14 = 0;
          do {
            lVar13 = *param_2;
            if (lVar13 == 0) goto LAB_034828bc;
            if (*(uint *)(lVar13 + 0x18) <= uVar14) goto LAB_034828c0;
            plVar9 = *(long **)(lVar13 + (long)(int)uVar14 * 8 + 0x20);
            if (((plVar9 == (long *)0x0) ||
                (lVar13 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0)),
                lVar13 == 0)) || (lVar11 == 0)) goto LAB_034828bc;
            if (*(int *)(lVar13 + 0x10) == *(int *)(lVar11 + 0x10)) {
              sVar4 = FUN_03409f80(lVar13,0,0);
              sVar5 = FUN_03409f80(lVar11,0,0);
              if ((sVar4 == sVar5) &&
                 (uVar8 = thunk_FUN_0340e318(lVar11,lVar13,0), (uVar8 & 1) != 0)) break;
            }
            uVar14 = uVar14 + 1;
            bVar16 = (int)uVar14 < (int)*param_3;
          } while ((int)uVar14 < (int)*param_3);
        }
        bVar16 = (bool)(bVar16 ^ 1);
      }
      else {
        bVar16 = false;
      }
      plVar9 = (long *)*param_2;
      uVar14 = *param_3;
      if ((plVar9 == (long *)0x0) || (uVar14 == *(uint *)(plVar9 + 3))) {
        if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0)
        {
          thunk_FUN_01ee6d7c();
        }
        uVar6 = FUN_0356bc8c(uVar14 << 1,0xc,0);
        lVar11 = FUN_01f08890(*(undefined8 *)puVar1,uVar6);
        if (*param_2 != 0) {
          FUN_0358d498(*param_2,0,lVar11,0,*param_3,0);
        }
        *param_2 = lVar11;
        thunk_FUN_01f51358(param_2,lVar11);
        uVar14 = *param_3;
        plVar9 = (long *)*param_2;
        *param_3 = uVar14 + 1;
        if (plVar9 == (long *)0x0) break;
      }
      else {
        *param_3 = uVar14 + 1;
      }
      lVar11 = thunk_FUN_01f116d0(plVar10,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar11 == 0) {
        uVar15 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar15,0);
      }
      if (*(uint *)(plVar9 + 3) <= uVar14) {
LAB_034828c0:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar9[(long)(int)uVar14 + 4] = (long)plVar10;
      thunk_FUN_01f51358(plVar9 + (long)(int)uVar14 + 4,plVar10);
    }
    plVar10 = (long *)(**(code **)(*plVar10 + 0x888))(plVar10,*(undefined8 *)(*plVar10 + 0x890));
    lVar11 = *(long *)puVar2;
    if (plVar10 != (long *)0x0) {
      if ((*(byte *)(*plVar10 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) != lVar11
         )) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar10);
      }
    }
  }
LAB_034828bc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


