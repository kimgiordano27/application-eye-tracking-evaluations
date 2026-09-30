/*
FUNCTION_NAME: Fusion.Photon.Realtime.CustomTypesUnity$$DeserializeVector3
ENTRY_POINT: 030f5eec
PROGRAM: beastcraft-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


long Fusion_Photon_Realtime_CustomTypesUnity__DeserializeVector3
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  uint unaff_w23;
  uint uVar13;
  ulong uVar14;
  uint unaff_w24;
  uint unaff_w26;
  uint unaff_w27;
  uint unaff_w28;
  uint uVar15;
  long in_stack_00000000;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  
  uVar4 = FUN_03046738(param_1,param_2,0);
  lVar8 = *in_stack_00000018;
  if (lVar8 != 0) {
    if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) != 0) {
      lVar8 = *(long *)(lVar8 + 0x28);
      if (lVar8 == 0) goto LAB_030f56f8;
      if (2 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar8 + 0x28) = uVar4;
        uVar5 = FUN_03046738();
        lVar8 = *in_stack_00000018;
        if (lVar8 == 0) goto LAB_030f56f8;
        if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) != 0) {
          lVar8 = *(long *)(lVar8 + 0x28);
          if (lVar8 == 0) goto LAB_030f56f8;
          if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) != 0) {
            lVar10 = 0;
            uVar12 = 1;
            *(uint *)(lVar8 + 0x2c) = uVar5;
            do {
              uVar15 = unaff_w28;
              uVar13 = unaff_w23;
              if (*(int *)(*(long *)PTR_DAT_06a37260 + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
              }
              uVar6 = FUN_030f5550(uVar5 >> 8 | uVar5 << 0x18);
              lVar8 = *in_stack_00000018;
              if (lVar8 == 0) goto LAB_030f56f8;
              iVar2 = (int)lVar10;
              if (*(uint *)(lVar8 + 0x18) <= iVar2 + 2U) goto LAB_030f61ec;
              lVar8 = *(long *)(lVar8 + lVar10 * 8 + 0x30);
              if (lVar8 == 0) goto LAB_030f56f8;
              uVar1 = *(uint *)(lVar8 + 0x18);
              if (uVar1 == 0) goto LAB_030f61ec;
              in_stack_00000010._4_4_ = in_stack_00000010._4_4_ ^ uVar12 ^ uVar6;
              *(uint *)(lVar8 + 0x20) = in_stack_00000010._4_4_;
              if (uVar1 == 1) goto LAB_030f61ec;
              unaff_w23 = in_stack_00000010._4_4_ ^ uVar13;
              *(uint *)(lVar8 + 0x24) = unaff_w23;
              if (uVar1 < 3) goto LAB_030f61ec;
              unaff_w24 = unaff_w23 ^ unaff_w24;
              *(uint *)(lVar8 + 0x28) = unaff_w24;
              if (uVar1 == 3) goto LAB_030f61ec;
              unaff_w28 = unaff_w24 ^ uVar15;
              *(uint *)(lVar8 + 0x2c) = unaff_w28;
              uVar6 = FUN_030f5550(unaff_w28);
              lVar8 = *in_stack_00000018;
              if (lVar8 == 0) goto LAB_030f56f8;
              if (*(uint *)(lVar8 + 0x18) <= iVar2 + 3U) goto LAB_030f61ec;
              lVar8 = *(long *)(lVar8 + lVar10 * 8 + 0x38);
              if (lVar8 == 0) goto LAB_030f56f8;
              uVar1 = *(uint *)(lVar8 + 0x18);
              if (uVar1 == 0) goto LAB_030f61ec;
              unaff_w26 = uVar6 ^ unaff_w26;
              *(uint *)(lVar8 + 0x20) = unaff_w26;
              if (uVar1 == 1) goto LAB_030f61ec;
              unaff_w27 = unaff_w26 ^ unaff_w27;
              *(uint *)(lVar8 + 0x24) = unaff_w27;
              if (uVar1 < 3) goto LAB_030f61ec;
              uVar4 = unaff_w27 ^ uVar4;
              *(uint *)(lVar8 + 0x28) = uVar4;
              if (uVar1 == 3) goto LAB_030f61ec;
              uVar12 = uVar12 << 1;
              uVar5 = uVar4 ^ uVar5;
              lVar10 = lVar10 + 2;
              *(uint *)(lVar8 + 0x2c) = uVar5;
            } while (iVar2 + 2U < 0xc);
            if (*(int *)(*(long *)PTR_DAT_06a37260 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar4 = FUN_030f5550(uVar5 >> 8 | uVar5 << 0x18);
            lVar8 = *in_stack_00000018;
            if (lVar8 == 0) goto LAB_030f56f8;
            if (0xe < *(uint *)(lVar8 + 0x18)) {
              lVar10 = *(long *)(lVar8 + 0x90);
              if (lVar10 == 0) goto LAB_030f56f8;
              uVar5 = *(uint *)(lVar10 + 0x18);
              if (uVar5 != 0) {
                *(uint *)(lVar10 + 0x20) = uVar12 ^ uVar4 ^ in_stack_00000010._4_4_;
                if (uVar5 != 1) {
                  uVar13 = uVar12 ^ uVar4 ^ uVar13;
                  *(uint *)(lVar10 + 0x24) = uVar13;
                  if ((2 < uVar5) && (*(uint *)(lVar10 + 0x28) = uVar13 ^ unaff_w24, uVar5 != 3)) {
                    *(uint *)(lVar10 + 0x2c) = uVar13 ^ uVar15;
                    puVar3 = PTR_DAT_06a37260;
                    if (((in_stack_00000008 & 0x100000000) == 0) &&
                       (1 < *(int *)(in_stack_00000000 + 0x18))) {
                      uVar11 = 1;
                      do {
                        lVar8 = *in_stack_00000018;
                        if (lVar8 == 0) goto LAB_030f56f8;
                        if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_030f61ec;
                        lVar8 = *(long *)(lVar8 + uVar11 * 8 + 0x20);
                        if (lVar8 == 0) goto LAB_030f56f8;
                        uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
                        uVar14 = 0;
                        do {
                          if (uVar9 <= uVar14) goto LAB_030f61ec;
                          uVar7 = *(undefined4 *)(lVar8 + 0x20 + uVar14 * 4);
                          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                            thunk_FUN_02e9a04c();
                          }
                          uVar7 = FUN_030f54b8(uVar7);
                          uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
                          if (uVar9 <= uVar14) goto LAB_030f61ec;
                          *(undefined4 *)(lVar8 + 0x20 + uVar14 * 4) = uVar7;
                          uVar14 = uVar14 + 1;
                        } while (uVar14 != 4);
                        uVar11 = uVar11 + 1;
                      } while ((int)uVar11 < *(int *)(in_stack_00000000 + 0x18));
                      lVar8 = *in_stack_00000018;
                    }
                    return lVar8;
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_030f61ec:
                    /* WARNING: Subroutine does not return */
    FUN_02e3cccc();
  }
LAB_030f56f8:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


