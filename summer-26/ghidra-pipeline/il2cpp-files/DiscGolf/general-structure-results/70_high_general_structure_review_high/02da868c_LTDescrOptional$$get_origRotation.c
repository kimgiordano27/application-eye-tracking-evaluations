/*
FUNCTION_NAME: LTDescrOptional$$get_origRotation
ENTRY_POINT: 02da868c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8
LTDescrOptional__get_origRotation(long param_1,long param_2,long param_3,uint param_4,int param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  byte bStack0000000000000018;
  undefined7 uStack0000000000000019;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 *in_stack_00000040;
  undefined8 *in_stack_00000058;
  undefined8 *in_stack_00000060;
  undefined8 in_stack_00000068;
  
  if ((*(byte *)(param_1 + 0xb) >> 5 & 1) != 0) {
    uVar3 = FUN_02dca078();
    goto LAB_02da8a48;
  }
  FUN_02da07fc();
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = SessionsManager__CreateSession(param_3);
  }
  if (((param_4 & 0xc) == 0) ||
     (lVar6 = *(long *)(param_2 + 0x10), (*(uint *)(lVar6 + 8) >> 0x1d & 1) != 0)) {
    lVar2 = FUN_02dd276c(DAT_06dcfea0,0);
  }
  else if (lVar2 == 0) {
    in_stack_00000030 = (undefined8 *)0x0;
    in_stack_00000038 = (undefined8 *)0x0;
    in_stack_00000040 = (undefined8 *)0x0;
    lVar6 = FUN_02df7dec(lVar6,1);
    FUN_02dac11c(&stack0x00000030,*(undefined2 *)(lVar6 + 0x122));
    FUN_02dac64c(lVar6,param_4,lVar6,&stack0x00000030);
    lVar2 = lVar6;
    if ((param_4 >> 1 & 1) == 0) {
      while (lVar2 = *(long *)(lVar2 + 0x58), lVar2 != 0) {
        FUN_02dac64c(lVar2,param_4,lVar6,&stack0x00000030);
      }
    }
    lVar2 = FUN_02dd276c(DAT_06dcfea0,(long)in_stack_00000038 - (long)in_stack_00000030 >> 4);
    if (in_stack_00000030 != in_stack_00000038) {
      iVar7 = 0;
      puVar5 = in_stack_00000030;
      do {
        uVar3 = FUN_02dd521c(puVar5[1],*puVar5);
        puVar1 = (undefined8 *)(lVar2 + 0x20 + (long)iVar7 * 8);
        *puVar1 = uVar3;
        thunk_FUN_02e0bc0c(puVar1);
        puVar5 = puVar5 + 2;
        iVar7 = iVar7 + 1;
      } while (puVar5 != in_stack_00000038);
    }
    if (in_stack_00000030 != (undefined8 *)0x0) {
      in_stack_00000038 = in_stack_00000030;
      puVar5 = in_stack_00000030;
      goto LAB_02da8a08;
    }
  }
  else {
    if (param_5 == 2) {
      FUN_02dcc9c4(&stack0x00000018,lVar2 + 0x14);
      if ((bStack0000000000000018 & 1) == 0) {
        in_stack_00000030 = (undefined8 *)CONCAT71(uStack0000000000000019,bStack0000000000000018);
        in_stack_00000038 = in_stack_00000020;
        in_stack_00000040 = in_stack_00000028;
      }
      else {
        FUN_02d9739c(&stack0x00000030,in_stack_00000028,in_stack_00000020);
      }
      in_stack_00000058 = (undefined8 *)0x0;
      in_stack_00000060 = (undefined8 *)0x0;
      in_stack_00000068 = 0;
      lVar6 = FUN_02df7dec(lVar6,1);
      FUN_02dac11c(&stack0x00000058,*(undefined2 *)(lVar6 + 0x122));
      FUN_02dac1b4(lVar6,param_4,&stack0x00000030,lVar6,&stack0x00000058);
      lVar2 = lVar6;
      if ((param_4 >> 1 & 1) == 0) {
        while (lVar2 = *(long *)(lVar2 + 0x58), lVar2 != 0) {
          FUN_02dac1b4(lVar2,param_4,&stack0x00000030,lVar6,&stack0x00000058);
        }
      }
      lVar2 = FUN_02dd276c(DAT_06dcfea0,(long)in_stack_00000060 - (long)in_stack_00000058 >> 4);
      if (in_stack_00000058 != in_stack_00000060) {
        iVar7 = 0;
        puVar5 = in_stack_00000058;
        do {
          uVar3 = FUN_02dd521c(puVar5[1],*puVar5);
          puVar1 = (undefined8 *)(lVar2 + 0x20 + (long)iVar7 * 8);
          *puVar1 = uVar3;
          thunk_FUN_02e0bc0c(puVar1);
          puVar5 = puVar5 + 2;
          iVar7 = iVar7 + 1;
        } while (puVar5 != in_stack_00000060);
      }
    }
    else {
      FUN_02dcc9c4(&stack0x00000018,lVar2 + 0x14);
      if ((bStack0000000000000018 & 1) == 0) {
        in_stack_00000030 = (undefined8 *)CONCAT71(uStack0000000000000019,bStack0000000000000018);
        in_stack_00000038 = in_stack_00000020;
        in_stack_00000040 = in_stack_00000028;
      }
      else {
        FUN_02d9739c(&stack0x00000030,in_stack_00000028,in_stack_00000020);
      }
      in_stack_00000058 = (undefined8 *)0x0;
      in_stack_00000060 = (undefined8 *)0x0;
      in_stack_00000068 = 0;
      lVar6 = FUN_02df7dec(lVar6,1);
      FUN_02dac11c(&stack0x00000058,*(undefined2 *)(lVar6 + 0x122));
      FUN_02dac448(lVar6,param_4,&stack0x00000030,lVar6,&stack0x00000058);
      lVar2 = lVar6;
      if ((param_4 >> 1 & 1) == 0) {
        while (lVar2 = *(long *)(lVar2 + 0x58), lVar2 != 0) {
          FUN_02dac448(lVar2,param_4,&stack0x00000030,lVar6,&stack0x00000058);
        }
      }
      lVar2 = FUN_02dd276c(DAT_06dcfea0,(long)in_stack_00000060 - (long)in_stack_00000058 >> 4);
      if (in_stack_00000058 != in_stack_00000060) {
        iVar7 = 0;
        puVar5 = in_stack_00000058;
        do {
          uVar3 = FUN_02dd521c(puVar5[1],*puVar5);
          puVar1 = (undefined8 *)(lVar2 + 0x20 + (long)iVar7 * 8);
          *puVar1 = uVar3;
          thunk_FUN_02e0bc0c(puVar1);
          puVar5 = puVar5 + 2;
          iVar7 = iVar7 + 1;
        } while (puVar5 != in_stack_00000060);
      }
    }
    if (in_stack_00000058 != (undefined8 *)0x0) {
      in_stack_00000060 = in_stack_00000058;
      operator_delete(in_stack_00000058);
    }
    if (((ulong)in_stack_00000030 & 1) != 0) {
      operator_delete(in_stack_00000040);
    }
    puVar5 = in_stack_00000028;
    if ((bStack0000000000000018 & 1) != 0) {
LAB_02da8a08:
      operator_delete(puVar5);
    }
  }
  for (lVar6 = 4; uVar4 = FUN_02dd24e4(lVar2), lVar6 - 4U < (uVar4 & 0xffffffff); lVar6 = lVar6 + 1)
  {
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + lVar6 * 8) + 0x18);
    puVar5 = (undefined8 *)FUN_02da07b0();
    *puVar5 = uVar3;
  }
  uVar3 = FUN_02dca020();
LAB_02da8a48:
  FUN_02d9f420();
  return uVar3;
}


