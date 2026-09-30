/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonArrayContract$$get_IsMultidimensionalArray
ENTRY_POINT: 04ff9eec
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonArrayContract__get_IsMultidimensionalArray(void)

{
  uint uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  int in_w9;
  long *unaff_x19;
  int *unaff_x20;
  uint unaff_w21;
  uint uVar7;
  long unaff_x22;
  long *unaff_x23;
  uint unaff_w24;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x27;
  uint uVar11;
  ulong unaff_x28;
  ulong in_stack_00000008;
  
  do {
    if (in_w9 == 0) {
      thunk_FUN_02dabd98();
    }
    uVar5 = FUN_04f72380(unaff_w24,0);
    uVar7 = unaff_w21;
    if ((uVar5 & 1) == 0) {
LAB_04ff9f20:
      do {
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar6 = uVar7 + 1;
        unaff_w21 = FUN_04e850f0();
        uVar11 = (uint)unaff_x28;
        if ((int)unaff_w21 < 0) {
          uVar3 = *(int *)(unaff_x22 + 0x10) - uVar6;
          if (uVar3 != 0 && (int)uVar6 <= *(int *)(unaff_x22 + 0x10)) {
            uVar1 = *(uint *)(unaff_x19 + 1);
            if ((int)(uVar1 - uVar3) < (int)uVar11) {
              return 0;
            }
            lVar8 = unaff_x19[3];
            lVar9 = *(long *)PTR_DAT_06656310;
            if ((uVar1 < uVar11) || (uVar1 - uVar11 < uVar3)) {
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
            if ((*(uint *)(unaff_x22 + 0x10) <= uVar7) ||
               (*(uint *)(unaff_x22 + 0x10) - uVar6 < uVar3)) {
              FUN_050233cc(0x18,0);
            }
            lVar9 = FUN_04e7d3e0();
            if (lVar8 == 0) goto LAB_04ffa0ac;
            iVar4 = FUN_04f55384(lVar8,lVar10 + (long)(int)uVar11 * 2,uVar3,
                                 lVar9 + (long)(int)uVar6 * 2,uVar3,0);
            if (iVar4 != 0) {
              return 0;
            }
          }
          if ((in_stack_00000008 & 0x100000000) != 0) {
            uVar7 = *unaff_x20 + (int)unaff_x19[2];
            if ((int)uVar7 < (int)*(uint *)(unaff_x19 + 1)) {
              if (*(uint *)(unaff_x19 + 1) <= uVar7) goto LAB_04ffa0a8;
              uVar2 = *(undefined2 *)(*unaff_x19 + (long)(int)uVar7 * 2);
              if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              uVar5 = FUN_04f74864(uVar2,0);
              if ((uVar5 & 1) != 0) {
                return 0;
              }
            }
          }
          return 1;
        }
        uVar7 = unaff_w21 - uVar6;
        if ((int)(*(uint *)(unaff_x19 + 1) - uVar7) <= (int)uVar11) {
          return 0;
        }
        if (unaff_w21 == uVar6) {
          *unaff_x20 = *unaff_x20 + -1;
        }
        else {
          uVar3 = uVar7 + uVar11;
          if (*(uint *)(unaff_x19 + 1) <= uVar3) goto LAB_04ffa0a8;
          uVar2 = *(undefined2 *)(*unaff_x19 + (long)(int)uVar3 * 2);
          if (*(int *)(*(long *)(unaff_x27 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar5 = FUN_04f72380(uVar2,0);
          if ((uVar5 & 1) == 0) {
            return 0;
          }
          lVar9 = unaff_x19[3];
          lVar8 = *(long *)PTR_DAT_06656310;
          if ((*(uint *)(unaff_x19 + 1) < uVar11) || (*(uint *)(unaff_x19 + 1) - uVar11 < uVar7)) {
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
          if ((*(uint *)(unaff_x22 + 0x10) < uVar6) || (*(uint *)(unaff_x22 + 0x10) - uVar6 < uVar7)
             ) {
            FUN_050233cc(0x18,0);
          }
          lVar8 = FUN_04e7d3e0();
          if (lVar9 == 0) {
LAB_04ffa0ac:
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          iVar4 = FUN_04f55384(lVar9,lVar10 + (long)(int)uVar11 * 2,uVar7,
                               lVar8 + (long)(int)uVar6 * 2,uVar7,0);
          if (iVar4 != 0) {
            return 0;
          }
          unaff_x28 = (ulong)(uVar3 + 1);
          unaff_x23 = (long *)PTR_DAT_06656308;
        }
        uVar6 = *(uint *)(unaff_x19 + 1);
        uVar7 = unaff_w21;
      } while ((int)uVar6 <= (int)unaff_x28);
      unaff_x28 = (ulong)(int)unaff_x28;
    }
    else {
      unaff_x28 = unaff_x28 + 1;
      *unaff_x20 = *unaff_x20 + 1;
      uVar6 = *(uint *)(unaff_x19 + 1);
      if ((long)(int)uVar6 <= (long)unaff_x28) goto LAB_04ff9f20;
    }
    if (uVar6 <= (uint)unaff_x28) {
LAB_04ffa0a8:
                    /* WARNING: Subroutine does not return */
      FUN_02d4def0();
    }
    in_w9 = *(int *)(*(long *)(unaff_x27 + 0x88) + 0xe4);
    unaff_w24 = (uint)*(ushort *)(*unaff_x19 + unaff_x28 * 2);
  } while( true );
}


