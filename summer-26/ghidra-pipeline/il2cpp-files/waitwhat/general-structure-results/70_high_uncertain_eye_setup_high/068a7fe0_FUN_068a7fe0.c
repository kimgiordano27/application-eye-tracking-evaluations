/*
FUNCTION_NAME: FUN_068a7fe0
ENTRY_POINT: 068a7fe0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


uint FUN_068a7fe0(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,undefined4 param_4,
                 long *param_5,long *param_6,float *param_7)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uStack_ec;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  float local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  float local_88;
  ulong local_80;
  undefined8 local_78;
  ulong local_70;
  float local_68;
  
  puVar2 = PTR_DAT_070f13a0;
  if ((DAT_075590cb & 1) == 0) {
    FUN_03188a78(UnityEngine_UI_Dropdown_<DelayedDestroyDropdownList>d__75_TypeInfo);
    FUN_03188a78(PTR_DAT_070c1b68);
    FUN_03188a78(PTR_DAT_070f13a0);
    FUN_03188a78(OVRPlugin_LayerLayout_TypeInfo);
    DAT_075590cb = 1;
  }
  local_68 = 0.0;
  local_78 = 0;
  local_70 = 0;
  local_80 = 0;
  local_88 = 0.0;
  local_98 = 0;
  local_90 = 0;
  local_a0 = 0;
  local_a8 = 0.0;
  local_b8 = 0;
  local_b0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  puVar2 = PTR_DAT_070c1b68;
  FUN_069e53e4(&uStack_ec,0);
  *(undefined8 *)(param_7 + 5) = uStack_d8;
  *(ulong *)(param_7 + 3) = CONCAT44(uStack_dc,local_e0);
  *(ulong *)(param_7 + 2) = CONCAT44(local_e0,uStack_e4);
  *(undefined8 *)param_7 = uStack_ec;
  if (param_5 == (long *)0x0) {
LAB_068a80d4:
    param_5 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0x130);
    if (*(byte *)(*param_5 + 0x130) < bVar1) goto LAB_068a80d4;
    if (*(long *)(*(long *)(*param_5 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVRPlugin_LayerLayout_TypeInfo) {
      param_5 = (long *)0x0;
    }
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  fVar17 = (float)uStack_ec;
  uVar3 = FUN_069d8404(param_5,0,0);
  if ((uVar3 & 1) != 0) goto LAB_068a8328;
  if (param_6 != (long *)0x0) {
    lVar7 = *param_6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)UnityEngine_UI_Dropdown_<DelayedDestroyDropdownList>d__75_TypeInfo) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 7) * 0x10 + 0x138);
          goto LAB_068a8174;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_031c0d08(param_6,*(long *)
                                   UnityEngine_UI_Dropdown_<DelayedDestroyDropdownList>d__75_TypeInfo
                          ,7);
LAB_068a8174:
    lVar7 = (*(code *)*puVar4)(param_6,param_5,puVar4[1]);
    if (param_5 != (long *)0x0) {
      lVar5 = FUN_069d3a80(param_5,0);
      lVar6 = (**(code **)(*param_5 + 0x5a8))(param_5,param_6,*(undefined8 *)(*param_5 + 0x5b0));
      if ((lVar5 != 0) && (fVar10 = (float)FUN_069e6fbc(lVar5,0), lVar6 != 0)) {
        fVar16 = param_3;
        fVar15 = fVar17;
        fVar11 = (float)FUN_069e6fbc(lVar6,0);
        fVar17 = fVar17 - fVar15;
        param_3 = param_3 - fVar16;
        if (*(char *)((long)param_5 + 0x1dc) == '\0') {
          if (lVar7 != 0) {
            fVar14 = (float)FUN_069e6fbc(lVar7,0);
            *param_7 = (fVar10 - fVar11) + fVar14;
            param_7[1] = fVar17 + fVar15;
            param_7[2] = param_3 + fVar16;
            goto LAB_068a8328;
          }
        }
        else {
          uVar12 = FUN_069e8900(fVar10 - fVar11,lVar6,0);
          if (lVar7 != 0) {
            fVar10 = param_3;
            fVar16 = fVar17;
            FUN_069e6fbc(lVar7,0);
            uVar13 = FUN_065b2eec(0);
            local_90 = CONCAT44(fVar16,uVar13);
            local_88 = fVar10;
            FUN_069e5200(lVar7,0);
            uVar13 = FUN_065b582c(0);
            local_a0 = CONCAT44(fVar16,uVar13);
            local_98 = CONCAT44(param_4,fVar10);
            uVar12 = FUN_065b2eec(uVar12,0);
            local_b0 = CONCAT44(fVar17,uVar12);
            local_a8 = param_3;
            FUN_069e5200(lVar5,0);
            uVar12 = FUN_065b582c(0);
            local_c0 = CONCAT44(fVar17,uVar12);
            local_b8 = CONCAT44(param_4,param_3);
            FUN_069e5200(lVar6,0);
            uVar12 = FUN_065b582c(0);
            local_d0 = CONCAT44(fVar17,uVar12);
            local_c8 = CONCAT44(param_4,param_3);
            FUN_068a85ac(&local_90,&local_a0,&local_b0,&local_c0,&local_d0,&local_70,&local_80);
            fVar16 = (float)(local_70 >> 0x20);
            fVar17 = local_68;
            fVar10 = (float)FUN_065b2ee8(local_70 & 0xffffffff,0);
            param_7[2] = fVar17;
            *param_7 = fVar10;
            param_7[1] = fVar16;
            fVar10 = (float)(local_80 >> 0x20);
            fVar17 = (float)FUN_065b5828(local_80 & 0xffffffff,0);
            param_7[3] = fVar17;
            param_7[4] = fVar10;
            param_7[5] = (float)local_78;
            param_7[6] = local_78._4_4_;
LAB_068a8328:
            return (uVar3 ^ 0xffffffff) & 1;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


