/*
FUNCTION_NAME: FUN_073cd02c
ENTRY_POINT: 073cd02c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_073cd02c(float param_1,undefined8 param_2,undefined4 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 param_7,long *param_8)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  float local_64;
  long *local_60;
  long *local_58;
  
  uVar8 = param_2;
  if ((DAT_0941e695 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08eb3460);
    FUN_03c8f898(PTR_DAT_08eb58a8);
    DAT_0941e695 = 1;
  }
  uVar11 = (undefined4)uVar8;
  local_60 = (long *)0x0;
  local_58 = (long *)0x0;
  local_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  local_64 = 0.0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_88 = 0;
  local_90 = 0;
  uStack_8c = 0;
  if (*param_8 == 0) goto LAB_073cd490;
  *(undefined1 *)(*param_8 + 0x10) = 0;
  if (*(long *)(param_4 + 0x18) == 0) goto LAB_073cd490;
  fVar9 = (float)FUN_085ecd7c(*(long *)(param_4 + 0x18),0);
  FUN_073cd494(param_1 / fVar9,*(undefined8 *)(param_4 + 0x10),&local_58,&local_60,&local_64);
  fVar9 = local_64;
  if (0.0 <= local_64) {
    if (1.0 < local_64) {
      if ((*(long *)(param_4 + 0x20) == 0) || (local_60 == (long *)0x0)) goto LAB_073cd490;
      (**(code **)(*local_60 + 0x1a8))
                (param_2,local_60,param_5,param_6,*(undefined8 *)(param_4 + 0x18),param_7,
                 *(long *)(param_4 + 0x20) + 0x18,*(undefined8 *)(*local_60 + 0x1b0));
      if ((*(long *)(param_4 + 0x20) == 0) ||
         (lVar3 = *(long *)(*(long *)(param_4 + 0x20) + 0x18), lVar3 == 0)) goto LAB_073cd490;
      FUN_0737f734(&local_c0,*(undefined8 *)(param_4 + 0x18),lVar3 + 0x20,0);
      plVar7 = local_58;
      puVar1 = PTR_DAT_08eb58a8;
      uStack_98 = uStack_b8;
      local_a0 = local_c0;
      uStack_8c = (undefined4)uStack_ac;
      local_88 = (undefined4)((ulong)uStack_ac >> 0x20);
      uStack_94 = uStack_b4;
      local_90 = uStack_b0;
      lVar3 = *(long *)PTR_DAT_08eb58a8;
      uVar8 = *(undefined8 *)(param_4 + 0x18);
      uVar11 = uStack_b4;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar3 = *(long *)puVar1;
      }
      if ((*(long *)(param_4 + 0x20) == 0) || (plVar7 == (long *)0x0)) goto LAB_073cd490;
      puVar4 = *(undefined4 **)(lVar3 + 0xb8);
      lVar6 = *plVar7;
      lVar3 = *(long *)(param_4 + 0x20) + 0x10;
      puVar2 = &local_a0;
      goto LAB_073cd244;
    }
    if ((*(long *)(param_4 + 0x20) == 0) || (local_58 == (long *)0x0)) goto LAB_073cd490;
    (**(code **)(*local_58 + 0x1a8))
              (param_2,local_58,param_5,param_6,*(undefined8 *)(param_4 + 0x18),param_7,
               *(long *)(param_4 + 0x20) + 0x10,*(undefined8 *)(*local_58 + 0x1b0));
    if ((*(long *)(param_4 + 0x20) == 0) || (local_60 == (long *)0x0)) goto LAB_073cd490;
    (**(code **)(*local_60 + 0x1a8))
              (param_2,local_60,param_5,param_6,*(undefined8 *)(param_4 + 0x18),param_7,
               *(long *)(param_4 + 0x20) + 0x18,*(undefined8 *)(*local_60 + 0x1b0));
  }
  else {
    if ((*(long *)(param_4 + 0x20) == 0) || (local_58 == (long *)0x0)) goto LAB_073cd490;
    (**(code **)(*local_58 + 0x1a8))
              (param_2,local_58,param_5,param_6,*(undefined8 *)(param_4 + 0x18),param_7,
               *(long *)(param_4 + 0x20) + 0x10,*(undefined8 *)(*local_58 + 0x1b0));
    if ((*(long *)(param_4 + 0x20) == 0) ||
       (lVar3 = *(long *)(*(long *)(param_4 + 0x20) + 0x10), lVar3 == 0)) goto LAB_073cd490;
    FUN_0737f734(&local_c0,*(undefined8 *)(param_4 + 0x18),lVar3 + 0x20,0);
    plVar7 = local_60;
    puVar1 = PTR_DAT_08eb58a8;
    uStack_78 = uStack_b8;
    local_80 = local_c0;
    uStack_6c = (undefined4)uStack_ac;
    uStack_68 = (undefined4)((ulong)uStack_ac >> 0x20);
    uStack_74 = uStack_b4;
    local_70 = uStack_b0;
    lVar3 = *(long *)PTR_DAT_08eb58a8;
    uVar8 = *(undefined8 *)(param_4 + 0x18);
    uVar11 = uStack_b4;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar3 = *(long *)puVar1;
    }
    if ((*(long *)(param_4 + 0x20) == 0) || (plVar7 == (long *)0x0)) goto LAB_073cd490;
    puVar4 = *(undefined4 **)(lVar3 + 0xb8);
    lVar6 = *plVar7;
    lVar3 = *(long *)(param_4 + 0x20) + 0x18;
    puVar2 = &local_80;
LAB_073cd244:
    (**(code **)(lVar6 + 0x1a8))
              (*puVar4,plVar7,puVar2,param_6,uVar8,param_7,lVar3,*(undefined8 *)(lVar6 + 0x1b0));
  }
  lVar3 = *(long *)(param_4 + 0x20);
  if ((lVar3 == 0) || (lVar6 = *(long *)(lVar3 + 0x10), lVar6 == 0)) goto LAB_073cd490;
  lVar3 = *(long *)(lVar3 + 0x18);
  if (*(char *)(lVar6 + 0x10) == '\0') {
    if (lVar3 == 0) goto LAB_073cd490;
    if (*(char *)(lVar3 + 0x10) != '\0') {
      lVar6 = *param_8;
      if (lVar6 == 0) goto LAB_073cd490;
      *(undefined1 *)(lVar6 + 0x10) = 1;
      if (*(long *)(lVar6 + 0x18) == 0) goto LAB_073cd490;
      FUN_073cd738(*(long *)(lVar6 + 0x18),*(undefined8 *)(lVar3 + 0x18),0);
      lVar3 = *param_8;
      if ((lVar3 == 0) || (*(long *)(param_4 + 0x20) == 0)) goto LAB_073cd490;
      lVar6 = *(long *)(*(long *)(param_4 + 0x20) + 0x18);
      goto joined_r0x073cd3cc;
    }
  }
  else {
    if (lVar3 == 0) goto LAB_073cd490;
    lVar5 = *param_8;
    if (*(char *)(lVar3 + 0x10) == '\0') {
      if (lVar5 == 0) goto LAB_073cd490;
      *(undefined1 *)(lVar5 + 0x10) = 1;
      if (*(long *)(lVar5 + 0x18) == 0) goto LAB_073cd490;
      FUN_073cd738(*(long *)(lVar5 + 0x18),*(undefined8 *)(lVar6 + 0x18),0);
      lVar3 = *param_8;
      if ((lVar3 == 0) || (*(long *)(param_4 + 0x20) == 0)) goto LAB_073cd490;
      lVar6 = *(long *)(*(long *)(param_4 + 0x20) + 0x10);
joined_r0x073cd3cc:
      if (lVar6 == 0) goto LAB_073cd490;
      FUN_0737f108(lVar3 + 0x20,lVar6 + 0x20,0);
    }
    else {
      if (lVar5 == 0) goto LAB_073cd490;
      *(undefined1 *)(lVar5 + 0x10) = 1;
      if (*(long *)(lVar5 + 0x18) == 0) goto LAB_073cd490;
      FUN_073cd738(*(long *)(lVar5 + 0x18),*(undefined8 *)(lVar6 + 0x18),0);
      lVar3 = *(long *)(param_4 + 0x20);
      if ((((lVar3 == 0) || (*(long *)(lVar3 + 0x10) == 0)) || (*(long *)(lVar3 + 0x18) == 0)) ||
         (*param_8 == 0)) goto LAB_073cd490;
      OVRManager__ReturnToLauncher
                (fVar9,*(long *)(lVar3 + 0x10) + 0x18,*(long *)(lVar3 + 0x18) + 0x18,*param_8 + 0x18
                );
      lVar3 = *(long *)(param_4 + 0x20);
      if (((lVar3 == 0) || (*(long *)(lVar3 + 0x10) == 0)) ||
         ((*(long *)(lVar3 + 0x18) == 0 || (*param_8 == 0)))) goto LAB_073cd490;
      FUN_0737f038(fVar9,*(long *)(lVar3 + 0x10) + 0x20,*(long *)(lVar3 + 0x18) + 0x20,
                   *param_8 + 0x20,0);
    }
  }
  lVar3 = *(long *)(param_4 + 0x20);
  if (((lVar3 != 0) && (lVar6 = *(long *)(lVar3 + 0x10), lVar6 != 0)) &&
     (lVar3 = *(long *)(lVar3 + 0x18), lVar3 != 0)) {
    lVar5 = *param_8;
    if (*(int *)(*(long *)PTR_DAT_08eb3460 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar10 = FUN_073cd9f0(fVar9,lVar6 + 0x3c,lVar3 + 0x3c);
    if (lVar5 != 0) {
      *(undefined4 *)(lVar5 + 0x3c) = uVar10;
      *(undefined4 *)(lVar5 + 0x40) = uVar11;
      *(undefined4 *)(lVar5 + 0x44) = param_3;
      return;
    }
  }
LAB_073cd490:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


