/*
FUNCTION_NAME: FUN_05e68018
ENTRY_POINT: 05e68018
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


void FUN_05e68018(long param_1,ulong param_2,long param_3,int param_4,byte param_5,byte param_6,
                 uint param_7,ulong param_8,byte param_9,undefined8 param_10,long param_11)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  ulong uVar11;
  undefined4 uVar12;
  ulong *puVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  byte bVar17;
  bool bVar18;
  ulong local_68;
  
  if ((DAT_066dc67f & 1) == 0) {
    FUN_02b3c81c(Method_OVRSpatialAnchor_UnboundAnchor_BindTo__);
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__0__
                );
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_14__);
    DAT_066dc67f = 1;
  }
  local_68 = 0;
  if (param_3 == 0) goto LAB_05e68588;
  if (((*(int *)(param_3 + 0x74) == param_4) && ((param_8 & 1) == 0)) && ((param_9 & 1) == 0)) {
    return;
  }
  *(int *)(param_3 + 0x74) = param_4;
  if ((param_6 & 1) == 0) {
    *(int *)(param_11 + 0xc) = *(int *)(param_11 + 0xc) + 1;
  }
  uVar4 = *(uint *)(param_3 + 0x70);
  iVar16 = *(int *)(param_3 + 0x9c);
  param_9 = param_5 | param_6 | param_9;
  if (((param_5 | param_6) & 1) == 0) {
    iVar10 = iVar16;
    if ((param_8 & 1) != 0) goto LAB_05e68124;
    bVar17 = 0;
    bVar7 = false;
    bVar8 = false;
    bVar18 = false;
    bVar1 = false;
    bVar5 = param_5;
    if ((param_9 & 1) != 0) goto LAB_05e6835c;
  }
  else {
    if (*(int *)(*(long *)
                  Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__0__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    iVar10 = FUN_05e6b044(param_1,param_3);
LAB_05e68124:
    local_68 = *(ulong *)(param_3 + 0x100);
    uVar11 = FUN_05e66d68();
    if (iVar10 == 3) {
      if ((uVar11 & 1) == 0) {
        if ((param_1 == 0) || (*(long *)(param_1 + 0x148) == 0)) goto LAB_05e68588;
        local_68 = FUN_05e7d33c(*(long *)(param_1 + 0x148),0);
        if (*(int *)(*(long *)Method_OVRSpatialAnchor_UnboundAnchor_BindTo__ + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)Method_OVRSpatialAnchor_UnboundAnchor_BindTo__);
        }
        uVar11 = FUN_05e7b76c(&local_68,0);
        puVar6 = Method_OVRPlugin_<>c_<_cctor>b__810_14__;
        if ((uVar11 & 1) == 0) {
          lVar15 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_14__;
          if (*(int *)(lVar15 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar15 = *(long *)puVar6;
          }
          iVar10 = 2;
          local_68 = *(ulong *)(*(long *)(lVar15 + 0xb8) + 0x110);
          goto LAB_05e68244;
        }
      }
      iVar10 = 3;
    }
    else {
      if ((uVar11 & 1) != 0) {
        if ((param_1 == 0) || (*(long *)(param_1 + 0x148) == 0)) goto LAB_05e68588;
        FUN_05e7d474(*(long *)(param_1 + 0x148),*(undefined8 *)(param_3 + 0x100),0);
      }
      puVar6 = Method_OVRPlugin_<>c_<_cctor>b__810_14__;
      if ((*(byte *)(param_3 + 0x68) & 1) == 0) {
        if ((param_2 == 0) || (iVar10 == 2)) {
          lVar15 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_14__;
          if (*(int *)(lVar15 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar15 = *(long *)puVar6;
          }
          puVar13 = (ulong *)(*(long *)(lVar15 + 0xb8) + 0x110);
        }
        else {
          puVar13 = (ulong *)(param_2 + 0x100);
        }
        local_68 = *puVar13 & 0xffffffffffffff;
      }
    }
LAB_05e68244:
    uVar11 = local_68;
    if (*(int *)(*(long *)Method_OVRSpatialAnchor_UnboundAnchor_BindTo__ + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    bVar9 = FUN_05e789c8(param_3 + 0x100,uVar11,0);
    bVar5 = *(byte *)(param_3 + 0x68);
    bVar17 = bVar9 ^ 1;
    if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05c45700((bVar5 & 1) == 0 | bVar9 & 1,0);
    bVar1 = iVar16 != iVar10;
    *(ulong *)(param_3 + 0x100) = local_68;
    if (iVar16 == iVar10) {
      bVar8 = false;
      bVar7 = false;
      bVar18 = bVar8;
LAB_05e68354:
      iVar16 = iVar10;
      bVar5 = bVar17 | param_5;
      if ((param_9 & 1) == 0) goto LAB_05e683f8;
LAB_05e6835c:
      if (param_2 == 0) {
        uVar14 = (uint)(iVar16 == 4);
      }
      else {
        uVar2 = *(uint *)(param_2 + 0xa0);
        uVar3 = *(uint *)(param_2 + 0xa4);
        param_2 = (ulong)uVar2;
        uVar14 = uVar3;
        if (iVar16 == 4) {
          uVar14 = uVar3 + 1;
          if ((int)uVar2 < (int)uVar3) {
            uVar2 = uVar2 + 1;
          }
          param_2 = (ulong)uVar2;
        }
      }
    }
    else {
      *(int *)(param_3 + 0x9c) = iVar10;
      bVar8 = iVar16 == 4 || iVar10 == 4;
      bVar7 = iVar16 == 2 || iVar10 == 2;
      bVar5 = param_9 | bVar8;
      if (iVar10 != 3) {
        param_9 = bVar5;
        if ((iVar16 != 3) ||
           (uVar11 = FUN_05e66d68(*(undefined8 *)(param_3 + 0x100)), bVar18 = bVar8,
           (uVar11 & 1) == 0)) {
          bVar1 = false;
          bVar18 = false;
        }
        goto LAB_05e68354;
      }
      bVar5 = bVar17 | param_5;
      if ((param_9 & 1) == 0 && iVar16 != 4) {
        bVar18 = false;
        bVar1 = true;
        goto LAB_05e683f8;
      }
      if (param_2 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(uint *)(param_2 + 0xa4);
        param_2 = (ulong)*(uint *)(param_2 + 0xa0);
      }
      bVar1 = true;
    }
    if (*(long *)(param_3 + 0x10) == 0) goto LAB_05e68588;
    uVar11 = FUN_05ded40c(*(long *)(param_3 + 0x10),0);
    uVar2 = (uint)param_2;
    if ((int)uVar14 < 7 && (uVar11 & 8) != 0) {
      uVar2 = uVar14;
    }
    if (*(uint *)(param_3 + 0xa4) == uVar14) {
      bVar18 = (bool)(*(uint *)(param_3 + 0xa0) != uVar2 | bVar8);
    }
    else {
      bVar18 = true;
    }
    *(uint *)(param_3 + 0xa0) = uVar2;
    *(uint *)(param_3 + 0xa4) = uVar14;
  }
LAB_05e683f8:
  uVar4 = (param_7 | uVar4 >> 5) & 1;
  bVar8 = uVar4 != 0;
  if ((bVar7 || (bVar18 != false || (bVar17 & 1) != 0)) && (uVar4 == 0)) {
    lVar15 = *(long *)(param_3 + 0x18);
    if (lVar15 == 0) goto LAB_05e68588;
    if (DAT_066dc68c == '\0') {
      FUN_02b3c81c(PTR_DAT_06312d90);
      DAT_066dc68c = '\x01';
    }
    uVar4 = *(uint *)(lVar15 + 0x88);
    if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05c45700(uVar4 >> 4 & 1,0);
    uVar12 = 0x30;
    if (bVar18 == false && (bVar17 & 1) == 0) {
      uVar12 = 0x10;
    }
    FUN_05e6d50c(lVar15 + 0x18,param_3,uVar12,4,0);
    bVar8 = true;
  }
  if (bVar1) {
    lVar15 = *(long *)(param_3 + 0x18);
    if (lVar15 == 0) {
LAB_05e68588:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (DAT_066dc68d == '\0') {
      FUN_02b3c81c(PTR_DAT_06312d90);
      DAT_066dc68d = '\x01';
    }
    uVar4 = *(uint *)(lVar15 + 0x88);
    if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05c45700(uVar4 >> 3 & 1,0);
    FUN_05e6d50c(lVar15 + 0x18,param_3,2,3,0);
  }
  puVar6 = 
  Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__0__
  ;
  if (bVar18 != false || (bVar5 & 1) != 0) {
    for (lVar15 = *(long *)(param_3 + 0x38); lVar15 != 0; lVar15 = *(long *)(lVar15 + 0x30)) {
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05e68018(param_1,param_3,lVar15,param_4,param_5 & 1,0,bVar8,bVar17 & 1,bVar18,param_10,
                   param_11);
    }
  }
  return;
}


