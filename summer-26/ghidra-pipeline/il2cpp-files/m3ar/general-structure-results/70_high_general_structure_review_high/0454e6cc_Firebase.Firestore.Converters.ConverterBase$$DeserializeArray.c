/*
FUNCTION_NAME: Firebase.Firestore.Converters.ConverterBase$$DeserializeArray
ENTRY_POINT: 0454e6cc
PROGRAM: m3ar-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Firebase_Firestore_Converters_ConverterBase__DeserializeArray(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int in_w8;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulong uVar11;
  long unaff_x19;
  ulong unaff_x20;
  double dVar12;
  
  if (in_w8 == 1) {
    FUN_04571e64(0,0x3ff0000000000000,param_1,unaff_x19 + 0x60,unaff_x19 + 0x40,0);
    if ((unaff_x20 & 1) != 0) {
      FUN_0454e9bc();
    }
LAB_0454e944:
    lVar5 = *(long *)(unaff_x19 + 0x38);
    if (lVar5 != 0) {
      *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)(unaff_x19 + 0x54);
      iVar3 = FUN_0456d3ec(lVar5,0);
      *(bool *)(unaff_x19 + 0x49) = 0 < iVar3;
      if ((*(long *)(unaff_x19 + 0x30) != 0) &&
         (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x10), lVar5 != 0)) {
        uVar10 = (uint)*(ulong *)(lVar5 + 0x18);
        if (0 < (int)uVar10) {
          uVar7 = (ulong)(uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU));
          uVar11 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
          puVar9 = (undefined1 *)(lVar5 + 0x20);
          do {
            if (uVar11 == 0) {
LAB_0454e9b8:
                    /* WARNING: Subroutine does not return */
              FUN_04031894();
            }
            uVar7 = uVar7 - 1;
            uVar11 = uVar11 - 1;
            *puVar9 = 0;
            puVar9 = puVar9 + 0x4c;
          } while (uVar7 != 0);
        }
        return;
      }
    }
  }
  else if (*(long *)(unaff_x19 + 0x40) != 0) {
    if (*(long *)(*(long *)(unaff_x19 + 0x40) + 0x18) != 0) {
      uVar4 = FUN_040316d0(*(undefined8 *)PTR_DAT_08f84010,0);
      *(undefined8 *)(unaff_x19 + 0x40) = uVar4;
    }
    lVar5 = *(long *)(unaff_x19 + 0x60);
    if ((lVar5 != 0) && (*(long *)(unaff_x19 + 0x30) != 0)) {
      iVar3 = FUN_04570138(*(long *)(unaff_x19 + 0x30),0);
      if (iVar3 == *(int *)(lVar5 + 0x18)) {
LAB_0454e748:
        lVar5 = *(long *)(unaff_x19 + 0x38);
        if (((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) &&
           (lVar6 = *(long *)(unaff_x19 + 0x60), lVar6 != 0)) {
          if (*(int *)(*(long *)(lVar5 + 0x10) + 0x18) != *(int *)(lVar6 + 0x18)) {
            uVar4 = FUN_040316d0(*(undefined8 *)PTR_DAT_08f84018);
            lVar6 = *(long *)(unaff_x19 + 0x60);
            *(undefined8 *)(lVar5 + 0x10) = uVar4;
            if (lVar6 == 0) goto LAB_0454e910;
          }
          uVar7 = 0;
          lVar5 = 0x20;
          while (iVar3 = (int)*(undefined8 *)(lVar6 + 0x18), (long)uVar7 < (long)iVar3) {
            dVar12 = (double)(int)uVar7 / (double)(iVar3 + -1);
            uVar11 = FUN_04550b80(dVar12);
            if ((uVar11 & 1) != 0) {
              lVar6 = *(long *)(unaff_x19 + 0x60);
              if ((lVar6 == 0) || (*(long *)(unaff_x19 + 0x30) == 0)) goto LAB_0454e910;
              if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_0454e9b8;
              FUN_045713ec(dVar12,*(long *)(unaff_x19 + 0x30),lVar6 + lVar5,0);
              if (((*(long *)(unaff_x19 + 0x38) == 0) ||
                  (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10), lVar6 == 0)) ||
                 (lVar8 = *(long *)(unaff_x19 + 0x60), lVar8 == 0)) goto LAB_0454e910;
              if ((*(uint *)(lVar6 + 0x18) <= uVar7) || (*(uint *)(lVar8 + 0x18) <= uVar7))
              goto LAB_0454e9b8;
              FUN_0456db58(lVar6 + lVar5,lVar8 + lVar5,0);
              if (((unaff_x20 & 1) != 0) && (*(int *)(unaff_x19 + 0x50) == 1)) {
                if ((*(long *)(unaff_x19 + 0x38) == 0) ||
                   (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10), lVar6 == 0))
                goto LAB_0454e910;
                if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_0454e9b8;
                FUN_045507dc();
              }
            }
            lVar6 = *(long *)(unaff_x19 + 0x60);
            uVar7 = uVar7 + 1;
            lVar5 = lVar5 + 0x40;
            if (lVar6 == 0) goto LAB_0454e910;
          }
          if ((2 < iVar3) && (*(int *)(unaff_x19 + 0x54) == 2)) {
            FUN_04550dd0();
            goto LAB_0454e944;
          }
          lVar5 = *(long *)(unaff_x19 + 0x38);
          if ((lVar5 != 0) && (*(long *)(lVar5 + 0x18) != 0)) {
            if (*(long *)(*(long *)(lVar5 + 0x18) + 0x18) != 0) {
              uVar4 = FUN_040316d0(*(undefined8 *)PTR_DAT_08f68538,0);
              *(undefined8 *)(lVar5 + 0x18) = uVar4;
            }
            goto LAB_0454e944;
          }
        }
      }
      else if (*(long *)(unaff_x19 + 0x30) != 0) {
        uVar2 = FUN_04570138(*(long *)(unaff_x19 + 0x30),0);
        lVar5 = FUN_040316d0(*(undefined8 *)PTR_DAT_08f84018,uVar2);
        *(long *)(unaff_x19 + 0x60) = lVar5;
        if (lVar5 != 0) {
          uVar7 = 0;
          lVar6 = 0x20;
          do {
            if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar7) goto LAB_0454e748;
            if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_0454e9b8;
            puVar1 = (undefined8 *)(lVar5 + lVar6);
            lVar6 = lVar6 + 0x40;
            uVar7 = uVar7 + 1;
            puVar1[1] = 0;
            *puVar1 = 0;
            puVar1[3] = 0;
            puVar1[2] = 0;
            puVar1[5] = 0;
            puVar1[4] = 0;
            puVar1[7] = 0;
            puVar1[6] = 0;
            lVar5 = *(long *)(unaff_x19 + 0x60);
          } while (lVar5 != 0);
        }
      }
    }
  }
LAB_0454e910:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


