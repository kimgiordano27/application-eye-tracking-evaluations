/*
FUNCTION_NAME: Unity.Services.Analytics.TransactionFailedEvent$$.ctor
ENTRY_POINT: 08dec7d4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_6
*/


void Unity_Services_Analytics_TransactionFailedEvent___ctor
               (undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  void *__s;
  long lVar7;
  ulong uVar8;
  void *__dest;
  long unaff_x29;
  undefined1 auVar9 [16];
  long in_stack_00000000;
  long in_stack_00000008;
  uint in_stack_00000010;
  
  lVar2 = tpidr_el0;
  *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(lVar2 + 0x28);
  if ((DAT_0a5323f1 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09fb2480);
    FUN_04447ba8(PTR_DAT_09fb2488);
    FUN_04447ba8(PTR_DAT_09fb2490);
    FUN_04447ba8(PTR_DAT_09fb2498);
    FUN_04447ba8(PTR_DAT_09fb23d0);
    DAT_0a5323f1 = 1;
  }
  if ((param_2 != 0) && (lVar7 = *(long *)(param_2 + 0x38), lVar7 != 0)) {
    uVar1 = *(uint *)(lVar7 + 0x18);
    in_stack_00000000 = lVar2;
    in_stack_00000008 = param_3;
    if (uVar1 == 0) {
      memset((void *)0x0,0,0);
      __s = (void *)0x0;
    }
    else {
      __s = (void *)((long)&stack0x00000000 - ((long)(int)uVar1 * 0xdc + 0xfU & 0xfffffffffffffff0))
      ;
      memset(__s,0,(long)(int)uVar1 * 0xdc);
      if ((int)uVar1 < 0) {
        FUN_07a5ec1c(0);
        lVar7 = *(long *)(param_2 + 0x38);
        if (lVar7 == 0) goto Unity_Services_Analytics_AnalyticsContainer__get_AutoFlushPeriod;
      }
    }
    puVar3 = PTR_DAT_09fb2488;
    uVar8 = 0;
    uVar6 = 0;
    __dest = __s;
    do {
      if ((long)*(int *)(lVar7 + 0x18) <= (long)uVar8) {
        if (DAT_0a5322f5 == '\0') {
          FUN_04447ba8(PTR_DAT_09fb0b68);
          DAT_0a5322f5 = '\x01';
        }
        lVar2 = in_stack_00000008;
        if (((**(long **)(*(long *)PTR_DAT_09fb0b68 + 0xb8) != 0) &&
            (lVar7 = *(long *)(**(long **)(*(long *)PTR_DAT_09fb0b68 + 0xb8) + 0x40), lVar7 != 0))
           && (lVar4 = FUN_08dc81ec(lVar7,0), lVar2 != 0)) {
          uVar5 = *(undefined8 *)(lVar2 + 0x18);
          auVar9 = FUN_066da2cc(__s,(ulong)uVar1,*(undefined8 *)PTR_DAT_09fb2498);
          if (lVar4 != 0) {
            FUN_08deae1c(lVar4,uVar5,(undefined4 *)(param_2 + 0x10),auVar9._0_8_,auVar9._8_8_,
                         param_2 + 0x40);
            if (*(long *)(lVar7 + 0x28) != 0) {
              UnityEngine_ResourceManagement_ResourceProviders_AssetBundleProvider__Provide
                        (*(long *)(lVar7 + 0x28),*(undefined4 *)(param_2 + 0x10),uVar6,0);
              if (*(long *)(in_stack_00000000 + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
              return;
            }
          }
        }
        break;
      }
      if (uVar1 == uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      FUN_05bbcd5c(&stack0x00000010,lVar7,uVar8 & 0xffffffff,*(undefined8 *)puVar3);
      memcpy(&stack0x000000f0,&stack0x00000010,0xdc);
      memcpy(__dest,&stack0x000000f0,0xdc);
      if (*(long *)(param_2 + 0x38) == 0) break;
      FUN_05bbcd5c(&stack0x00000010,*(long *)(param_2 + 0x38),uVar8 & 0xffffffff,
                   *(undefined8 *)puVar3);
      lVar7 = *(long *)(param_2 + 0x38);
      uVar8 = uVar8 + 1;
      __dest = (void *)((long)__dest + 0xdc);
      uVar6 = 1 << (ulong)(in_stack_00000010 & 0x1f) | uVar6;
    } while (lVar7 != 0);
  }
Unity_Services_Analytics_AnalyticsContainer__get_AutoFlushPeriod:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


