/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonArrayContract$$get_CanDeserialize
ENTRY_POINT: 04ff9f04
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonArrayContract__get_CanDeserialize(void)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  long *unaff_x19;
  int *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x27;
  uint uVar11;
  ulong unaff_x28;
  ulong in_stack_00000008;
  
  do {
    unaff_x28 = unaff_x28 + 1;
    *unaff_x20 = *unaff_x20 + 1;
    uVar7 = *(uint *)(unaff_x19 + 1);
    if ((long)unaff_x28 < (long)(int)uVar7) goto LAB_04ff9ed4;
    do {
      do {
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar7 = unaff_w21 + 1;
        uVar4 = FUN_04e850f0();
        uVar11 = (uint)unaff_x28;
        if ((int)uVar4 < 0) {
          uVar4 = *(int *)(unaff_x22 + 0x10) - uVar7;
          if (uVar4 != 0 && (int)uVar7 <= *(int *)(unaff_x22 + 0x10)) {
            uVar2 = *(uint *)(unaff_x19 + 1);
            if ((int)(uVar2 - uVar4) < (int)uVar11) {
              return 0;
            }
            lVar8 = unaff_x19[3];
            lVar9 = *(long *)PTR_DAT_06656310;
            if ((uVar2 < uVar11) || (uVar2 - uVar11 < uVar4)) {
              FUN_05023354(0);
            }
            lVar10 = *unaff_x19;
            if ((*(ushort *)(*(long *)(lVar9 + 0x20) + 0x135) & 1) == 0) {
              FUN_02d8720c();
            }
            if (DAT_06a4e301 == '\0') {
              FUN_02d4dc40(PTR_DAT_0664e730);
              DAT_06a4e301 = '\x01';
            }
            if ((*(uint *)(unaff_x22 + 0x10) <= unaff_w21) ||
               (*(uint *)(unaff_x22 + 0x10) - uVar7 < uVar4)) {
              FUN_050233cc(0x18,0);
            }
            lVar9 = FUN_04e7d3e0();
            if (lVar8 == 0) {
LAB_04ffa0ac:
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            iVar5 = FUN_04f55384(lVar8,lVar10 + (long)(int)uVar11 * 2,uVar4,
                                 lVar9 + (long)(int)uVar7 * 2,uVar4,0);
            if (iVar5 != 0) {
              return 0;
            }
          }
          if ((in_stack_00000008 & 0x100000000) != 0) {
            uVar7 = *unaff_x20 + (int)unaff_x19[2];
            if ((int)uVar7 < (int)*(uint *)(unaff_x19 + 1)) {
              if (*(uint *)(unaff_x19 + 1) <= uVar7) goto LAB_04ffa0a8;
              uVar3 = *(undefined2 *)(*unaff_x19 + (long)(int)uVar7 * 2);
              if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              uVar6 = FUN_04f74864(uVar3,0);
              if ((uVar6 & 1) != 0) {
                return 0;
              }
            }
          }
          return 1;
        }
        uVar2 = uVar4 - uVar7;
        if ((int)(*(uint *)(unaff_x19 + 1) - uVar2) <= (int)uVar11) {
          return 0;
        }
        if (uVar4 == uVar7) {
          *unaff_x20 = *unaff_x20 + -1;
        }
        else {
          uVar1 = uVar2 + uVar11;
          if (*(uint *)(unaff_x19 + 1) <= uVar1) goto LAB_04ffa0a8;
          uVar3 = *(undefined2 *)(*unaff_x19 + (long)(int)uVar1 * 2);
          if (*(int *)(*(long *)(unaff_x27 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar6 = FUN_04f72380(uVar3,0);
          if ((uVar6 & 1) == 0) {
            return 0;
          }
          lVar9 = unaff_x19[3];
          lVar8 = *(long *)PTR_DAT_06656310;
          if ((*(uint *)(unaff_x19 + 1) < uVar11) || (*(uint *)(unaff_x19 + 1) - uVar11 < uVar2)) {
            FUN_05023354(0);
          }
          lVar10 = *unaff_x19;
          if ((*(ushort *)(*(long *)(lVar8 + 0x20) + 0x135) & 1) == 0) {
            FUN_02d8720c();
          }
          if (DAT_06a4e301 == '\0') {
            FUN_02d4dc40(PTR_DAT_0664e730);
            DAT_06a4e301 = '\x01';
          }
          if ((*(uint *)(unaff_x22 + 0x10) < uVar7) || (*(uint *)(unaff_x22 + 0x10) - uVar7 < uVar2)
             ) {
            FUN_050233cc(0x18,0);
          }
          lVar8 = FUN_04e7d3e0();
          if (lVar9 == 0) goto LAB_04ffa0ac;
          iVar5 = FUN_04f55384(lVar9,lVar10 + (long)(int)uVar11 * 2,uVar2,
                               lVar8 + (long)(int)uVar7 * 2,uVar2,0);
          if (iVar5 != 0) {
            return 0;
          }
          unaff_x28 = (ulong)(uVar1 + 1);
          unaff_x23 = (long *)PTR_DAT_06656308;
        }
        uVar7 = *(uint *)(unaff_x19 + 1);
        unaff_w21 = uVar4;
      } while ((int)uVar7 <= (int)unaff_x28);
      unaff_x28 = (ulong)(int)unaff_x28;
LAB_04ff9ed4:
      if (uVar7 <= (uint)unaff_x28) {
LAB_04ffa0a8:
                    /* WARNING: Subroutine does not return */
        FUN_02d4def0();
      }
      uVar3 = *(undefined2 *)(*unaff_x19 + unaff_x28 * 2);
      if (*(int *)(*(long *)(unaff_x27 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar6 = FUN_04f72380(uVar3,0);
    } while ((uVar6 & 1) == 0);
  } while( true );
}


