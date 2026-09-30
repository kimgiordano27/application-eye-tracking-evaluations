/*
FUNCTION_NAME: FullSerializer.Internal.fsVersionManager$$VerifyUniqueVersionStrings
ENTRY_POINT: 044c12f0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long FullSerializer_Internal_fsVersionManager__VerifyUniqueVersionStrings(void)

{
  ulong uVar1;
  undefined1 in_CY;
  bool bVar2;
  int __fd;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  char *unaff_x19;
  ulong unaff_x21;
  ulong unaff_x22;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  
  do {
    uVar6 = unaff_x21;
    if (!(bool)in_CY) {
      lVar7 = *(long *)(unaff_x25 + 0xab8);
      *(undefined1 *)(lVar7 + unaff_x22) = 0;
      return lVar7;
    }
    do {
      while (*(ulong *)(unaff_x24 + 0xdb8) <= uVar6) {
        FUN_044be320(*(undefined8 *)(unaff_x25 + 0xab8));
        uVar4 = *(ulong *)(unaff_x24 + 0xdb8);
        if (uVar4 <= uVar6) {
          do {
            uVar1 = uVar4 << 1;
            uVar4 = uVar4 << 1;
          } while (uVar1 <= uVar6);
          *(ulong *)(unaff_x24 + 0xdb8) = uVar4;
        }
        uVar5 = FUN_044b51fc();
        *(undefined8 *)(unaff_x25 + 0xab8) = uVar5;
        uVar6 = FUN_044c1184();
        if (uVar6 == 0) {
          return 0;
        }
        if (*(long *)(unaff_x25 + 0xab8) == 0) {
          return 0;
        }
      }
      __fd = open(unaff_x19,0);
      if (__fd == -1) {
        return 0;
      }
      lVar7 = *(long *)(unaff_x24 + 0xdb8);
      unaff_x21 = 0;
      do {
        lVar3 = FUN_044c1108(__fd,*(undefined8 *)(unaff_x25 + 0xab8),lVar7 + -1);
        if (lVar3 < 1) {
          close(__fd);
          return 0;
        }
        lVar7 = *(long *)(unaff_x24 + 0xdb8);
        unaff_x21 = lVar3 + unaff_x21;
      } while (lVar3 == lVar7 + -1);
      close(__fd);
      if (uVar6 < unaff_x21) {
        (**(code **)(unaff_x26 + 0xaf0))();
      }
      bVar2 = unaff_x21 < uVar6;
      uVar6 = unaff_x21;
    } while (bVar2);
    in_CY = *(ulong *)(unaff_x24 + 0xdb8) <= unaff_x21;
    unaff_x22 = unaff_x21;
  } while( true );
}


