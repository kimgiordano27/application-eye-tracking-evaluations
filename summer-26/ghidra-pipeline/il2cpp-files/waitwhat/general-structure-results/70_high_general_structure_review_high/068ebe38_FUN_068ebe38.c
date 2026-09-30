/*
FUNCTION_NAME: FUN_068ebe38
ENTRY_POINT: 068ebe38
PROGRAM: waitwhat-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_4;telemetry_or_network_hits_3
*/


void FUN_068ebe38(undefined8 *param_1,undefined1 param_2 [16],float param_3,float param_4,
                 long *param_5,uint param_6,int param_7)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined4 local_90;
  float fStack_8c;
  float local_88;
  undefined8 local_84;
  float local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if ((DAT_0755933a & 1) == 0) {
    FUN_03188a78(UnityEngine_XR_OpenXR_OpenXRAnalytics_InitializeEvent_TypeInfo);
    FUN_03188a78(RoomDetails_ToolsItem_<>c__DisplayClass20_0_TypeInfo);
    FUN_03188a78(Internal_Cryptography_OidLookup_<>c_TypeInfo);
    DAT_0755933a = 1;
  }
  if (param_5 == (long *)0x0) {
    if (param_7 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar8 = 0;
    fVar10 = 0.0;
    param_4 = 0.0;
    param_3 = 0.0;
    uVar7 = 0;
  }
  else {
    lVar5 = *param_5;
    bVar1 = *(byte *)(lVar5 + 0x130);
    bVar2 = *(byte *)(*(long *)UnityEngine_XR_OpenXR_OpenXRAnalytics_InitializeEvent_TypeInfo +
                     0x130);
    if ((bVar1 < bVar2) ||
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)UnityEngine_XR_OpenXR_OpenXRAnalytics_InitializeEvent_TypeInfo)) {
      bVar2 = *(byte *)(*(long *)Internal_Cryptography_OidLookup_<>c_TypeInfo + 0x130);
      if ((bVar1 < bVar2) ||
         (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)Internal_Cryptography_OidLookup_<>c_TypeInfo)) {
        uVar8 = 0;
        uVar7 = 0;
        bVar2 = *(byte *)(*(long *)RoomDetails_ToolsItem_<>c__DisplayClass20_0_TypeInfo + 0x130);
        if (bVar1 < bVar2) {
          param_3 = 0.0;
          param_4 = 0.0;
          fVar10 = 0.0;
        }
        else {
          param_3 = 0.0;
          param_4 = 0.0;
          fVar10 = 0.0;
          if (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar2 * 8 + -8) ==
              *(long *)RoomDetails_ToolsItem_<>c__DisplayClass20_0_TypeInfo) {
            if (DAT_075457d6 == '\0') {
              FUN_03188a78(PTR_DAT_070c1a80);
              DAT_075457d6 = '\x01';
            }
            uVar4 = **(undefined8 **)(*(long *)PTR_DAT_070c1a80 + 0xb8);
            fVar9 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_070c1a80 + 0xb8) + 1);
            param_4 = (float)FUN_06a57638(param_5,0);
            param_4 = param_4 + param_4;
            param_3 = (float)FUN_06a577c0(param_5,0);
            iVar3 = FUN_06a57948(param_5,0);
            uVar8 = CONCAT44(param_4,param_3);
            fVar10 = param_4;
            if (iVar3 != 0) {
              if (iVar3 == 1) {
                uVar8 = NEON_rev64(uVar8,4);
              }
              else {
                uVar8 = uVar4;
                fVar10 = fVar9;
                if (iVar3 == 2) {
                  uVar8 = CONCAT44(param_4,param_4);
                  fVar10 = param_3;
                }
              }
            }
            uVar7 = FUN_06a57488(param_5,0);
            uVar8 = CONCAT44((float)((ulong)uVar8 >> 0x20) * 0.5,(float)uVar8 * 0.5);
            fVar10 = fVar10 * 0.5;
          }
        }
      }
      else {
        uVar7 = FUN_06a64d24(param_5,0);
        if (DAT_075457b6 == '\0') {
          FUN_03188a78(PTR_DAT_070c1a80);
          DAT_075457b6 = '\x01';
        }
        fVar9 = *(float *)(*(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8) + 0x14);
        uVar8 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8) + 0xc);
        fVar10 = (float)FUN_06a64e00(param_5,0);
        fVar10 = fVar10 + fVar10;
        uVar8 = CONCAT44((float)((ulong)uVar8 >> 0x20) * fVar10 * 0.5,(float)uVar8 * fVar10 * 0.5);
        fVar10 = fVar9 * fVar10 * 0.5;
      }
    }
    else {
      uVar7 = FUN_06a571fc(param_5,0);
      fVar9 = param_3;
      fVar10 = param_4;
      fVar6 = (float)FUN_06a572d8(param_5,0);
      fVar10 = fVar10 * 0.5;
      uVar8 = CONCAT44(fVar9 * 0.5,fVar6 * 0.5);
    }
    if (param_7 != 1) {
      uVar4 = FUN_069d3a80(param_5,0);
      local_90 = uVar7;
      fStack_8c = param_3;
      local_88 = param_4;
      local_84 = uVar8;
      local_7c = fVar10;
      FUN_068ed090(&local_78,&local_90,uVar4,param_6 & 1);
      param_1[1] = uStack_70;
      *param_1 = local_78;
      param_1[2] = local_68;
      return;
    }
  }
  *(undefined4 *)param_1 = uVar7;
  *(float *)((long)param_1 + 4) = param_3;
  *(float *)(param_1 + 1) = param_4;
  *(undefined8 *)((long)param_1 + 0xc) = uVar8;
  *(float *)((long)param_1 + 0x14) = fVar10;
  return;
}


