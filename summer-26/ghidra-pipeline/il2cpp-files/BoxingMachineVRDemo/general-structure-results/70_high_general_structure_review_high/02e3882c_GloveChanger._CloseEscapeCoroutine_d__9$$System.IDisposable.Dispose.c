/*
FUNCTION_NAME: GloveChanger.<CloseEscapeCoroutine>d__9$$System.IDisposable.Dispose
ENTRY_POINT: 02e3882c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void GloveChanger_<CloseEscapeCoroutine>d__9__System_IDisposable_Dispose(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  undefined4 in_w9;
  char *pcVar5;
  long *unaff_x19;
  void *pvVar6;
  undefined8 *puVar7;
  
  switch(in_w9) {
  case 0x56:
    pvVar6 = (void *)unaff_x19[0x266];
    *unaff_x19 = param_1 + 2;
    lVar3 = *(long *)((long)pvVar6 + 8);
    puVar1 = pvVar6;
    if (0xfef < lVar3 + 0x20U) {
      puVar1 = malloc(0x1000);
      if (puVar1 == (void *)0x0) {
LAB_02e39c78:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar3 = 0;
      *puVar1 = pvVar6;
      puVar1[1] = 0;
      unaff_x19[0x266] = (long)puVar1;
    }
    pcVar5 = "operator/=";
    *(long *)((long)puVar1 + 8) = lVar3 + 0x20;
    puVar1 = (undefined8 *)((long)puVar1 + lVar3 + 0x10);
    *puVar1 = &PTR_EffectManager__PlayEffect_0675ab70;
    pcVar4 = "";
    break;
  default:
    goto code_r0x02e39c50;
  case 0x61:
    pvVar6 = (void *)unaff_x19[0x266];
    *unaff_x19 = param_1 + 2;
    lVar3 = *(long *)((long)pvVar6 + 8);
    puVar1 = pvVar6;
    if (0xfef < lVar3 + 0x20U) {
      puVar1 = malloc(0x1000);
      if (puVar1 == (void *)0x0) goto LAB_02e39c78;
      lVar3 = 0;
      *puVar1 = pvVar6;
      puVar1[1] = 0;
      unaff_x19[0x266] = (long)puVar1;
    }
    pcVar5 = "operator delete[]";
    *(long *)((long)puVar1 + 8) = lVar3 + 0x20;
    puVar1 = (undefined8 *)((long)puVar1 + lVar3 + 0x10);
    *puVar1 = &PTR_EffectManager__PlayEffect_0675ab70;
    pcVar4 = "";
    break;
  case 0x65:
    puVar7 = (undefined8 *)unaff_x19[0x266];
    *unaff_x19 = param_1 + 2;
    lVar3 = puVar7[1];
    puVar1 = puVar7;
    if (0xfef < lVar3 + 0x20U) {
      puVar1 = malloc(0x1000);
      if (puVar1 == (void *)0x0) goto LAB_02e39c78;
      lVar3 = 0;
      *puVar1 = puVar7;
      puVar1[1] = 0;
      unaff_x19[0x266] = (long)puVar1;
    }
    lVar2 = (long)puVar1 + lVar3;
    pcVar5 = "operator*";
    goto FUN_02e39a34;
  case 0x6c:
    pvVar6 = (void *)unaff_x19[0x266];
    *unaff_x19 = param_1 + 2;
    lVar3 = *(long *)((long)pvVar6 + 8);
    puVar1 = pvVar6;
    if (0xfef < lVar3 + 0x20U) {
      puVar1 = malloc(0x1000);
      if (puVar1 == (void *)0x0) goto LAB_02e39c78;
      lVar3 = 0;
      *puVar1 = pvVar6;
      puVar1[1] = 0;
      unaff_x19[0x266] = (long)puVar1;
    }
    pcVar5 = "operator delete";
    *(long *)((long)puVar1 + 8) = lVar3 + 0x20;
    puVar1 = (undefined8 *)((long)puVar1 + lVar3 + 0x10);
    *puVar1 = &PTR_EffectManager__PlayEffect_0675ab70;
    pcVar4 = "";
    break;
  case 0x76:
    puVar7 = (undefined8 *)unaff_x19[0x266];
    *unaff_x19 = param_1 + 2;
    lVar3 = puVar7[1];
    puVar1 = puVar7;
    if (0xfef < lVar3 + 0x20U) {
      puVar1 = malloc(0x1000);
      if (puVar1 == (undefined8 *)0x0) goto LAB_02e39c78;
      lVar3 = 0;
      *puVar1 = puVar7;
      puVar1[1] = 0;
      unaff_x19[0x266] = (long)puVar1;
    }
    lVar2 = (long)puVar1 + lVar3;
    pcVar5 = "operator/";
FUN_02e39a34:
    puVar1[1] = lVar3 + 0x20;
    puVar1 = (undefined8 *)(lVar2 + 0x10);
    *puVar1 = &PTR_EffectManager__PlayEffect_0675ab70;
    pcVar4 = pcVar5 + 9;
  }
  *(undefined4 *)(puVar1 + 1) = 0x1010107;
  puVar1[2] = pcVar5;
  puVar1[3] = pcVar4;
code_r0x02e39c50:
  return;
}


