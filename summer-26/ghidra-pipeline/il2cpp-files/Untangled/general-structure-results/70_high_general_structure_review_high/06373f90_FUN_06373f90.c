/*
FUNCTION_NAME: FUN_06373f90
ENTRY_POINT: 06373f90
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_6
*/


float FUN_06373f90(float param_1,undefined8 param_2,int param_3,long param_4,float *param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int local_54;
  long local_48;
  
  if ((DAT_071cd386 & 1) == 0) {
    FUN_02f07e70(Unity_VisualScripting_UnityOnSelectMessageListener_var);
    FUN_02f07e70(PlayFab_MultiplayerModels_SetMatchmakingQueueRequest_var);
    FUN_02f07e70(PTR_DAT_06d02708);
    FUN_02f07e70(PTR_DAT_06d02bc8);
    FUN_02f07e70(PTR_DAT_06d453a8);
    FUN_02f07e70(PTR_DAT_06d0da00);
    FUN_02f07e70(System_Runtime_Serialization_XmlObjectSerializerContext_var);
    FUN_02f07e70(System_Runtime_Serialization_XmlObjectSerializerReadContext_var);
    DAT_071cd386 = 1;
  }
  puVar3 = System_Runtime_Serialization_XmlObjectSerializerContext_var;
  puVar2 = PTR_DAT_06d02708;
  local_48 = 0;
  if (param_3 < 0) {
LAB_06374078:
    local_54 = param_3;
    uVar5 = thunk_FUN_02ef1438(*(undefined8 *)PTR_DAT_06d02bc8,&local_54);
    uVar5 = FUN_0545c378(*(undefined8 *)puVar3,uVar5,0);
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58(lVar6);
    }
    FUN_06694324(uVar5,0);
    if (DAT_071bb656 == '\0') {
      FUN_02f07e70(PTR_DAT_06d04690);
      DAT_071bb656 = '\x01';
    }
    return **(float **)(*(long *)PTR_DAT_06d04690 + 0xb8);
  }
  if (*(long *)(param_4 + 0x38) == 0) goto LAB_06374328;
  if (*(int *)(*(long *)(param_4 + 0x38) + 0x18) <= param_3) goto LAB_06374078;
  iVar4 = FUN_066f3c80(param_2,0);
  if (iVar4 == 1) {
    fVar10 = 2.0 / *param_5;
  }
  else {
    iVar4 = FUN_066f3c80(param_2,0);
    if (iVar4 == 0) {
      fVar10 = (float)FUN_066f3cb8(param_2,0);
      fVar10 = fVar10 * 0.5 * DAT_013f6ba4;
    }
    else {
      iVar4 = FUN_066f3c80(param_2,0);
      if (iVar4 != 2) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        FUN_06694324(*(undefined8 *)System_Runtime_Serialization_XmlObjectSerializerReadContext_var,
                     0);
        fVar10 = 0.0;
        goto LAB_06374218;
      }
      lVar6 = FUN_066f3bf4(param_2,0);
      if (lVar6 == 0) goto LAB_06374328;
      iVar4 = FUN_066a61dc(lVar6,0);
      if (*(int *)(*(long *)Unity_VisualScripting_UnityOnSelectMessageListener_var + 0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)Unity_VisualScripting_UnityOnSelectMessageListener_var);
      }
      iVar1 = -0x80000000;
      if (param_1 != INFINITY) {
        iVar1 = (int)param_1;
      }
      fVar10 = (float)FUN_063a06d0(iVar1,iVar4 == 2,0);
      fVar10 = (fVar10 + 90.0) * 0.5 * DAT_013f6ba4;
    }
    fVar10 = tanf(fVar10);
    fVar8 = (float)FUN_066f3cb0(param_2,0);
    fVar10 = fVar10 * fVar8;
  }
LAB_06374218:
  puVar2 = PTR_DAT_06d0da00;
  if (*(long *)(param_4 + 0x38) != 0) {
    fVar8 = (float)FUN_0407d834(*(long *)(param_4 + 0x38),param_3,*(undefined8 *)PTR_DAT_06d0da00);
    if (*(long *)(param_4 + 0x38) != 0) {
      fVar10 = (fVar10 / param_1) * -fVar8;
      FUN_0407d834(*(long *)(param_4 + 0x38),param_3,*(undefined8 *)puVar2);
      FUN_066f3c80(param_2,0);
      if (*(char *)(param_4 + 0x2c) == '\0') {
        return fVar10;
      }
      lVar6 = FUN_066f3bf4(param_2,0);
      if (lVar6 != 0) {
        iVar4 = FUN_066a61dc(lVar6,0);
        if (iVar4 != 2) {
          return fVar10;
        }
        lVar6 = FUN_066f3bf4(param_2,0);
        if (lVar6 != 0) {
          uVar7 = FUN_037f26f8(lVar6,&local_48,
                               *(undefined8 *)
                                PlayFab_MultiplayerModels_SetMatchmakingQueueRequest_var);
          fVar8 = 2.5;
          if ((uVar7 & 1) != 0) {
            if (local_48 == 0) goto LAB_06374328;
            fVar9 = 3.5;
            if (*(int *)(local_48 + 0x58) != 3) {
              fVar9 = 2.5;
            }
            fVar8 = 1.5;
            if (*(int *)(local_48 + 0x58) != 1) {
              fVar8 = fVar9;
            }
          }
          return fVar10 * fVar8;
        }
      }
    }
  }
LAB_06374328:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


