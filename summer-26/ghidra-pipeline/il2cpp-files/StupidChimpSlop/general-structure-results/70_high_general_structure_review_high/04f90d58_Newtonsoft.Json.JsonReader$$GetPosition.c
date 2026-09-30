/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$GetPosition
ENTRY_POINT: 04f90d58
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void Newtonsoft_Json_JsonReader__GetPosition
               (undefined8 param_1,int *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  undefined8 uStack0000000000000008;
  
  puVar2 = PTR_DAT_06648138;
  uStack0000000000000008 = param_1;
  if ((DAT_06a4ec3d & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_06648138);
    FUN_02d4dc40(PTR_DAT_0664a480);
    FUN_02d4dc40(PTR_DAT_066573e8);
    DAT_06a4ec3d = 1;
  }
  puVar4 = PTR_DAT_066573e8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar6 = FUN_04fe2124(&stack0x00000008,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dabd98(lVar7);
    lVar7 = *(long *)puVar4;
  }
  puVar3 = PTR_DAT_0664a480;
  lVar7 = FUN_04fe2124(*(long *)(lVar7 + 0xb8) + 8,0);
  lVar6 = lVar6 - lVar7;
  uVar1 = (((int)(lVar6 / 864000000000) + (int)(lVar6 >> 0x3f)) -
          (SUB164(SEXT816(lVar6) * ZEXT816(0xa2e3ff1de20581e3),0xc) >> 0x1f)) / 0x163;
  do {
    uVar8 = uVar1;
    lVar6 = *(long *)puVar4;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar6 = *(long *)puVar4;
    }
    lVar6 = **(long **)(lVar6 + 0xb8);
    if (lVar6 == 0) goto LAB_04f9102c;
    uVar1 = uVar8 + 1;
    if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_04f91030;
    uVar10 = *(undefined8 *)(lVar6 + (long)(int)uVar1 * 0x10 + 0x28);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    iVar5 = FUN_04fe304c(&stack0x00000008,uVar10,0);
  } while (0 < iVar5);
  lVar6 = *(long *)puVar4;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar6 = *(long *)puVar4;
  }
  lVar6 = **(long **)(lVar6 + 0xb8);
  if (lVar6 != 0) {
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      uVar10 = *(undefined8 *)(lVar6 + (long)(int)uVar1 * 0x10 + 0x28);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      iVar5 = FUN_04fe304c(&stack0x00000008,uVar10,0);
      lVar6 = *(long *)puVar4;
      if (iVar5 != 0) {
        uVar1 = uVar8;
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar6 = *(long *)puVar4;
      }
      lVar6 = **(long **)(lVar6 + 0xb8);
      if (lVar6 == 0) goto LAB_04f9102c;
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        uVar10 = *(undefined8 *)(lVar6 + (long)(int)uVar1 * 0x10 + 0x28);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        FUN_04fe4a78(&stack0x00000008,uVar10,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dabd98(*(long *)puVar3);
        }
        dVar11 = (double)FUN_05019fbc();
        lVar6 = **(long **)(*(long *)puVar4 + 0xb8);
        if (lVar6 == 0) goto LAB_04f9102c;
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          uVar8 = *(uint *)(lVar6 + (long)(int)uVar1 * 0x10 + 0x20);
          dVar12 = (double)((uVar8 & 1) + 0x1d);
          iVar5 = 1;
          if (dVar12 <= dVar11) {
            do {
              uVar8 = (int)uVar8 >> 1;
              dVar11 = dVar11 - dVar12;
              iVar5 = iVar5 + 1;
              dVar12 = (double)((uVar8 & 1) + 0x1d);
            } while (dVar12 <= dVar11);
          }
          iVar9 = -0x7fffffff;
          if (dVar11 != INFINITY) {
            iVar9 = (int)dVar11 + 1;
          }
          *param_4 = iVar9;
          *param_3 = iVar5;
          *param_2 = uVar1 + 0x526;
          return;
        }
      }
    }
LAB_04f91030:
                    /* WARNING: Subroutine does not return */
    FUN_02d4def0();
  }
LAB_04f9102c:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


