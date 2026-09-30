/*
FUNCTION_NAME: FUN_080ea5e4
ENTRY_POINT: 080ea5e4
PROGRAM: cac-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_11;ray_or_cast_sink_hits_4;strong_file_logging_hits_2
*/


undefined1  [16] FUN_080ea5e4(undefined4 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined8 local_f0 [2];
  undefined8 uStack_dc;
  undefined8 local_d0 [2];
  undefined8 uStack_bc;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_94;
  undefined8 local_8c;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  
  if ((DAT_096985d8 & 1) == 0) {
    FUN_03f13384(PTR_DAT_09111ac0);
    DAT_096985d8 = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  local_38 = 0;
  local_40 = 0;
  uStack_3c = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  local_58 = 0;
  local_60 = 0;
  uStack_5c = 0;
  if (*(char *)(param_2 + 0x38) == '\0') {
    iVar1 = *(int *)(param_2 + 0x10);
  }
  else {
    if (*(long *)(param_2 + 0x20) == 0) goto LAB_080ea818;
    iVar1 = UnityEngine_Physics__Raycast(*(long *)(param_2 + 0x20),0);
    *(int *)(param_2 + 0x10) = iVar1;
  }
  if (iVar1 == 0) {
    auVar6 = ZEXT416(*(uint *)(param_2 + 0x18));
  }
  else {
    if ((iVar1 == 1) || (*(char *)(param_2 + 0x14) == '\0')) {
      if (*(long *)(param_2 + 0x20) != 0) {
        auVar6 = FUN_0878688c(param_1,*(long *)(param_2 + 0x20),0);
        return auVar6;
      }
      goto LAB_080ea818;
    }
    if (*(char *)(param_2 + 0x38) != '\0') {
      plVar4 = (long *)(param_2 + 0x28);
      if (*plVar4 == 0) {
        lVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_09111ac0);
        FUN_0878770c(lVar2,0);
        *plVar4 = lVar2;
        thunk_FUN_03f86000(plVar4,lVar2);
      }
      if (*(long *)(param_2 + 0x20) == 0) goto LAB_080ea818;
      FUN_08786f60(&local_8c,*(long *)(param_2 + 0x20),*(int *)(param_2 + 0x10) + -1,0);
      uStack_48 = uStack_84;
      local_50 = local_8c;
      uStack_3c = (undefined4)uStack_78;
      local_38 = (undefined4)((ulong)uStack_78 >> 0x20);
      uStack_44 = uStack_80;
      local_40 = uStack_7c;
      fVar5 = (float)UnityEngine_Collider__ClosestPoint_Injected(&local_50,0);
      FUN_087864d4(fVar5 - *(float *)(param_2 + 0x1c),&local_50,0);
      if (*(long *)(param_2 + 0x20) == 0) goto LAB_080ea818;
      FUN_08786f60(&local_a8,*(long *)(param_2 + 0x20),0,0);
      uStack_68 = uStack_a0;
      local_70 = local_a8;
      uStack_5c = (undefined4)uStack_94;
      local_58 = (undefined4)((ulong)uStack_94 >> 0x20);
      uStack_64 = uStack_9c;
      local_60 = uStack_98;
      fVar5 = (float)UnityEngine_Collider__ClosestPoint_Injected(&local_70,0);
      FUN_087864d4(fVar5 + *(float *)(param_2 + 0x1c),&local_70,0);
      if (*(long *)(param_2 + 0x20) == 0) goto LAB_080ea818;
      lVar2 = *(long *)(param_2 + 0x28);
      uVar3 = FUN_08786938(*(long *)(param_2 + 0x20),0);
      if (lVar2 == 0) goto LAB_080ea818;
      FUN_08786ac4(lVar2,uVar3,0);
      if (*plVar4 == 0) goto LAB_080ea818;
      uStack_bc = CONCAT44(local_38,uStack_3c);
      local_d0[0] = local_50;
      FUN_08786cb4(*plVar4,local_d0,0);
      if (*plVar4 == 0) goto LAB_080ea818;
      uStack_dc = CONCAT44(local_58,uStack_5c);
      local_f0[0] = local_70;
      FUN_08786cb4(*plVar4,local_f0,0);
      *(undefined1 *)(param_2 + 0x38) = 0;
    }
    if (*(long *)(param_2 + 0x28) == 0) {
LAB_080ea818:
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    auVar6 = FUN_0878688c(param_1,*(long *)(param_2 + 0x28),0);
  }
  return auVar6;
}


