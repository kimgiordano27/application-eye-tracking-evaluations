/*
FUNCTION_NAME: Photon.Voice.Unity.WebRtcAudioDsp$$AdjustVoiceInfo
ENTRY_POINT: 034bd290
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_1
*/


undefined8 Photon_Voice_Unity_WebRtcAudioDsp__AdjustVoiceInfo(long *param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  int iVar25;
  undefined8 local_68;
  
  if ((DAT_04537378 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422fc88);
    FUN_01c5d288(PTR_DAT_04231128);
    FUN_01c5d288(Method_System_Collections_Generic_List<Timer>_get_Count__);
    FUN_01c5d288(PTR_DAT_0422f960);
    FUN_01c5d288(PTR_DAT_0422fae0);
    FUN_01c5d288(PTR_DAT_0422f9e8);
    FUN_01c5d288(PTR_DAT_0422fc80);
    FUN_01c5d288(PTR_DAT_04231178);
    FUN_01c5d288(Method_System_Collections_Generic_List<Timer>_get_Item__);
    FUN_01c5d288(Method_System_Collections_Generic_List<Timer>_set_Item__);
    FUN_01c5d288(Method_System_Collections_Generic_List<Timer>__ctor__);
    FUN_01c5d288(Method_System_Collections_Generic_List<Timer>_GetEnumerator__);
    FUN_01c5d288(PTR_DAT_04231458);
    FUN_01c5d288(Method_System_Collections_Generic_List<Toast>__ctor__);
    FUN_01c5d288(Method_System_Collections_Generic_List<Toast>_Add__);
    FUN_01c5d288(Method_System_Collections_Generic_List<Toast>_RemoveAt__);
    FUN_01c5d288(Method_System_Collections_Generic_List<Toast>_get_Count__);
    FUN_01c5d288(Method_System_Collections_Generic_List<Toast>_get_Item__);
    DAT_04537378 = 1;
  }
  puVar4 = PTR_DAT_0422fc80;
  local_68 = 0;
  if (param_1 == (long *)0x0) {
LAB_034bd9f0:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar7 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
  uVar8 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
  uVar9 = FUN_031532a8(param_2,0);
  if ((uVar9 & 1) == 0) {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar11 = FUN_03262708(param_2,0);
    uVar10 = Newtonsoft_Json_JsonSerializer__get_MetadataPropertyHandling(param_2,0);
    if (lVar11 == 0) goto LAB_034bd9f0;
    sVar6 = FUN_0314e438(lVar11,*(int *)(lVar11 + 0x10) + -1,0);
    if ((sVar6 != 0x2f) ||
       (sVar6 = FUN_0314e438(lVar11,*(int *)(lVar11 + 0x10) + -1,0), sVar6 != 0x5c)) {
      lVar11 = FUN_03146988(lVar11,*(undefined8 *)PTR_DAT_04231458,0);
    }
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_0422fc88 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar10 = FUN_03cfdd28(0);
    lVar11 = FUN_03146988(uVar10,*(undefined8 *)
                                  Method_System_Collections_Generic_List<Toast>_get_Count__,0);
    uVar10 = 0;
  }
  puVar5 = Method_System_Collections_Generic_List<Toast>__ctor__;
  uVar9 = FUN_031532a8(uVar10,0);
  if ((uVar9 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_0422f960 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    local_68 = FUN_032b3498(0);
    uVar10 = FUN_032b4488(&local_68,
                          *(undefined8 *)
                           Method_System_Collections_Generic_List<Timer>_GetEnumerator__,0);
    uVar10 = FUN_03152fb8(*(undefined8 *)Method_System_Collections_Generic_List<Timer>_set_Item__,
                          uVar10,*(undefined8 *)puVar5,0);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar12 = FUN_03267640(uVar10,0);
  uVar9 = thunk_FUN_03152714(uVar12,*(undefined8 *)puVar5,0);
  if (((uVar9 & 1) == 0) &&
     (uVar13 = thunk_FUN_03152714(uVar12,*(undefined8 *)
                                          Method_System_Collections_Generic_List<Timer>__ctor__,0),
     (uVar13 & 1) == 0)) {
    uVar10 = FUN_03146988(*(undefined8 *)Method_System_Collections_Generic_List<Toast>_Add__,uVar12,
                          0);
    if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fae0);
    }
  }
  else {
    FUN_03230680(lVar11,0);
    puVar4 = PTR_DAT_0422f9e8;
    lVar14 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04231178);
    FUN_03d2dd34(lVar14,uVar7 * 6,uVar8,3,0,0);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar13 = FUN_03d4dc54(lVar14,0,0);
    if ((uVar13 & 1) == 0) {
      lVar15 = FUN_01c5d2fc(*(undefined8 *)Method_System_Collections_Generic_List<Timer>_get_Count__
                            ,6);
      FUN_032032f0(lVar15,*(undefined8 *)Method_System_Collections_Generic_List<Timer>_get_Item__,0)
      ;
      if (lVar15 != 0) {
        if (0 < (int)*(ulong *)(lVar15 + 0x18)) {
          iVar25 = 0;
          uVar13 = 0;
          uVar19 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
          do {
            if (uVar19 <= uVar13) {
LAB_034bd898:
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4ac();
            }
            lVar16 = FUN_03d2f328(param_1,*(undefined4 *)(lVar15 + uVar13 * 4 + 0x20),0);
            if (lVar16 == 0) goto LAB_034bd9f0;
            lVar17 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04231128,*(undefined4 *)(lVar16 + 0x18));
            if (0 < (int)uVar8) {
              uVar21 = 0;
              uVar19 = 0;
              uVar20 = uVar7 * (uVar8 - 1);
              do {
                uVar22 = (ulong)uVar21;
                if (0 < (int)uVar7) {
                  lVar23 = uVar22 << 0x20;
                  uVar24 = (ulong)uVar7;
                  uVar2 = uVar20;
                  do {
                    if (*(uint *)(lVar16 + 0x18) <= uVar2) goto LAB_034bd898;
                    if (lVar17 == 0) goto LAB_034bd9f0;
                    if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_034bd898;
                    lVar1 = lVar16 + (long)(int)uVar2 * 0x10;
                    uVar12 = *(undefined8 *)(lVar1 + 0x20);
                    lVar3 = lVar17 + (lVar23 >> 0x1c);
                    lVar23 = lVar23 + 0x100000000;
                    uVar22 = uVar22 + 1;
                    uVar24 = uVar24 - 1;
                    uVar2 = uVar2 + 1;
                    *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
                    *(undefined8 *)(lVar3 + 0x20) = uVar12;
                  } while (uVar24 != 0);
                }
                uVar19 = uVar19 + 1;
                uVar21 = uVar21 + uVar7;
                uVar20 = uVar20 - uVar7;
              } while (uVar19 != uVar8);
            }
            if (lVar14 == 0) goto LAB_034bd9f0;
            FUN_03d2e19c(lVar14,iVar25,0,uVar7,uVar8,lVar17,0);
            uVar19 = (ulong)*(uint *)(lVar15 + 0x18);
            uVar13 = uVar13 + 1;
            iVar25 = iVar25 + uVar7;
          } while ((long)uVar13 < (long)(int)*(uint *)(lVar15 + 0x18));
        }
        if ((uVar9 & 1) == 0) {
          uVar12 = FUN_03d7b204(lVar14,0);
        }
        else {
          uVar12 = FUN_03d7b184(lVar14,0);
        }
        puVar4 = PTR_DAT_0422f9e8;
        uVar18 = FUN_03146988(lVar11,uVar10,0);
        FUN_032346d0(uVar18,uVar12,0);
        uVar10 = FUN_03152fb8(*(undefined8 *)
                               Method_System_Collections_Generic_List<Toast>_get_Item__,lVar11,
                              uVar10,0);
        if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_03d03d14(uVar10,0);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_03d4eac8(lVar14,0);
        return 1;
      }
      goto LAB_034bd9f0;
    }
    if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar10 = *(undefined8 *)Method_System_Collections_Generic_List<Toast>_RemoveAt__;
  }
  FUN_03d04168(uVar10,0);
  return 0;
}


