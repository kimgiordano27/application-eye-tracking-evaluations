/*
FUNCTION_NAME: Unity.Services.Analytics.TransactionFailedEvent$$set_FailureReason
ENTRY_POINT: 08dec840
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


void Unity_Services_Analytics_TransactionFailedEvent__set_FailureReason(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  uint uVar5;
  long unaff_x23;
  long unaff_x24;
  undefined1 *__s;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *__dest;
  long unaff_x29;
  undefined1 auVar9 [16];
  
  lVar6 = *(long *)(unaff_x20 + 0x38);
  if (lVar6 != 0) {
    uVar1 = *(uint *)(lVar6 + 0x18);
    *unaff_x19 = unaff_x23;
    unaff_x19[1] = unaff_x24;
    if (uVar1 == 0) {
      memset((void *)0x0,0,0);
      __s = (undefined1 *)0x0;
    }
    else {
      __s = &stack0x00000000 + -((long)(int)uVar1 * 0xdc + 0xfU & 0xfffffffffffffff0);
      memset(__s,0,(long)(int)uVar1 * 0xdc);
      if ((int)uVar1 < 0) {
        FUN_07a5ec1c(0);
        lVar6 = *(long *)(unaff_x20 + 0x38);
        if (lVar6 == 0) goto Unity_Services_Analytics_AnalyticsContainer__get_AutoFlushPeriod;
      }
    }
    puVar2 = PTR_DAT_09fb2488;
    uVar8 = 0;
    uVar5 = 0;
    __dest = __s;
    do {
      if ((long)*(int *)(lVar6 + 0x18) <= (long)uVar8) {
        if (DAT_0a5322f5 == '\0') {
          FUN_04447ba8(PTR_DAT_09fb0b68);
          DAT_0a5322f5 = '\x01';
        }
        lVar6 = unaff_x19[1];
        if (((**(long **)(*(long *)PTR_DAT_09fb0b68 + 0xb8) != 0) &&
            (lVar7 = *(long *)(**(long **)(*(long *)PTR_DAT_09fb0b68 + 0xb8) + 0x40), lVar7 != 0))
           && (lVar3 = FUN_08dc81ec(lVar7,0), lVar6 != 0)) {
          uVar4 = *(undefined8 *)(lVar6 + 0x18);
          auVar9 = FUN_066da2cc(__s,(ulong)uVar1,*(undefined8 *)PTR_DAT_09fb2498);
          if (lVar3 != 0) {
            FUN_08deae1c(lVar3,uVar4,(undefined4 *)(unaff_x20 + 0x10),auVar9._0_8_,auVar9._8_8_,
                         unaff_x20 + 0x40);
            if (*(long *)(lVar7 + 0x28) != 0) {
              UnityEngine_ResourceManagement_ResourceProviders_AssetBundleProvider__Provide
                        (*(long *)(lVar7 + 0x28),*(undefined4 *)(unaff_x20 + 0x10),uVar5,0);
              if (*(long *)(*unaff_x19 + 0x28) != *(long *)(unaff_x29 + -0x10)) {
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
      FUN_05bbcd5c(unaff_x19 + 2,lVar6,uVar8 & 0xffffffff,*(undefined8 *)puVar2);
      memcpy(unaff_x19 + 0x1e,unaff_x19 + 2,0xdc);
      memcpy(__dest,unaff_x19 + 0x1e,0xdc);
      if (*(long *)(unaff_x20 + 0x38) == 0) break;
      FUN_05bbcd5c(unaff_x19 + 2,*(long *)(unaff_x20 + 0x38),uVar8 & 0xffffffff,
                   *(undefined8 *)puVar2);
      lVar6 = *(long *)(unaff_x20 + 0x38);
      uVar8 = uVar8 + 1;
      __dest = __dest + 0xdc;
      uVar5 = 1 << (ulong)(*(uint *)(unaff_x19 + 2) & 0x1f) | uVar5;
    } while (lVar6 != 0);
  }
Unity_Services_Analytics_AnalyticsContainer__get_AutoFlushPeriod:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


