/*
FUNCTION_NAME: FUN_06ab4994
ENTRY_POINT: 06ab4994
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_6
*/


undefined8 FUN_06ab4994(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  float fVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  bool bVar12;
  int *piVar13;
  float fVar14;
  undefined1 auStack_110 [80];
  float local_c0 [20];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  
  if ((DAT_076e30f3 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727a8d8);
    thunk_FUN_032e1da0(
                      Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnAudioDeactivation__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<string[]>_Invoke__);
    thunk_FUN_032e1da0(
                      Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnAudioInputStateChange__
                      );
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    DAT_076e30f3 = 1;
  }
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_54 = 0;
  uStack_60 = 0;
  local_c0[0] = 0.0;
  FUN_06ab4814(param_1,&local_70,local_c0);
  lVar6 = FUN_06aa2510(param_1);
  puVar3 = PTR_DAT_072794f0;
  if (lVar6 == 0) goto LAB_06ab4d10;
  if (*(int *)(lVar6 + 0x18) < 1) {
LAB_06ab4af0:
    uVar5 = 0;
  }
  else {
    uVar7 = FUN_06c40c28(&local_70,0);
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar6);
    }
    uVar8 = FUN_06be9890(uVar7,0,0);
    if ((uVar8 & 1) == 0) goto LAB_06ab4af0;
    lVar6 = FUN_06aa2510(param_1);
    if ((lVar6 == 0) ||
       (plVar9 = (long *)FUN_041e29a8(lVar6,0,*(undefined8 *)
                                               Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnAudioInputStateChange__
                                     ), plVar9 == (long *)0x0)) goto LAB_06ab4d10;
    lVar6 = *plVar9;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0727a8d8) {
          puVar10 = (undefined8 *)(lVar6 + (long)(*piVar13 + 6) * 0x10 + 0x138);
          goto LAB_06ab4b08;
        }
        uVar8 = uVar8 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_032937ac(plVar9,*(long *)PTR_DAT_0727a8d8,6);
LAB_06ab4b08:
    lVar6 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    if (lVar6 == 0) goto LAB_06ab4d10;
    uVar7 = FUN_06be6b40(lVar6,0);
    lVar6 = FUN_06c40c28(&local_70,0);
    if (lVar6 == 0) goto LAB_06ab4d10;
    uVar11 = FUN_06be6b40(lVar6,0);
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar6);
    }
    uVar5 = FUN_06bece64(uVar7,uVar11,0);
    uVar5 = uVar5 & 1;
  }
  if (*(char *)(param_1 + 0x329) == '\0') {
LAB_06ab4bdc:
    bVar1 = false;
  }
  else {
    bVar1 = false;
    if ((uVar5 == 0) && (iVar2 = *(int *)(param_1 + 0x3cc), 0 < iVar2)) {
      if (iVar2 < *(int *)(param_1 + 0x3a0)) {
        bVar1 = true;
      }
      else {
        if (*(int *)(param_1 + 0x3a0) != iVar2) goto LAB_06ab4bdc;
        if (*(long *)(param_1 + 0x3a8) == 0) goto LAB_06ab4d10;
        FUN_040f8c9c(local_c0,*(long *)(param_1 + 0x3a8),0,
                     *(undefined8 *)Method_UnityEngine_Events_UnityEvent<string[]>_Invoke__);
        fVar4 = local_c0[0];
        fVar14 = (float)FUN_06c40b04(param_1 + 0x3fc,0);
        bVar1 = fVar14 < fVar4;
      }
    }
  }
  bVar12 = false;
  if (*(char *)(param_1 + 0x32a) != '\0') {
    if ((*(int *)(param_1 + 0x3d0) < 1) ||
       (uVar8 = FUN_06e1e34c(param_1 + 0x428,0), (uVar8 & 1) == 0)) {
LAB_06ab4c58:
      bVar12 = false;
    }
    else if (*(int *)(param_1 + 0x3d0) < *(int *)(param_1 + 0x3a0)) {
      bVar12 = true;
    }
    else {
      if (*(int *)(param_1 + 0x3a0) != *(int *)(param_1 + 0x3d0)) goto LAB_06ab4c58;
      if (*(long *)(param_1 + 0x3a8) == 0) goto LAB_06ab4d10;
      FUN_040f8c9c(local_c0,*(long *)(param_1 + 0x3a8),0,
                   *(undefined8 *)Method_UnityEngine_Events_UnityEvent<string[]>_Invoke__);
      bVar12 = *(float *)(param_1 + 0x438) < local_c0[0];
    }
  }
  if ((*(int *)(param_1 + 0x3b0) < 1) || (bVar12 || (bVar1 || *(int *)(param_1 + 0x3a0) < 1))) {
    uVar7 = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    param_2[9] = 0;
    param_2[8] = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    *param_3 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x3a8) == 0) {
LAB_06ab4d10:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    FUN_040f8c9c(auStack_110,*(long *)(param_1 + 0x3a8),0,
                 *(undefined8 *)Method_UnityEngine_Events_UnityEvent<string[]>_Invoke__);
    memcpy(local_c0,auStack_110,0x50);
    memcpy(param_2,local_c0,0x50);
    thunk_FUN_0333a630(param_2 + 1,0);
    uVar7 = 1;
    *param_3 = *(undefined4 *)(param_1 + 0x3a0);
  }
  return uVar7;
}


