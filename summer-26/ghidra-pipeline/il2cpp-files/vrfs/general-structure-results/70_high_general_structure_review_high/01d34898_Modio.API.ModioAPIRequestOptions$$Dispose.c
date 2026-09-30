/*
FUNCTION_NAME: Modio.API.ModioAPIRequestOptions$$Dispose
ENTRY_POINT: 01d34898
PROGRAM: vrfs-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Modio_API_ModioAPIRequestOptions__Dispose(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  thunk_FUN_0159f088(*(undefined8 *)(param_1 + 0xa30));
  thunk_FUN_0159f088(PTR_DAT_06dd9ff0);
  *(undefined1 *)(unaff_x21 + 0x3b2) = 1;
  iVar4 = *(int *)(unaff_x19 + 0x20);
  if (iVar4 == 0) {
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x10),0);
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x18),0);
    *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_06de8a30 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    puVar3 = PTR_DAT_06dd9ff0;
    iVar4 = FUN_03f036b4(iVar4,0);
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xd8);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_015c2790(lVar7);
    }
    lVar7 = FUN_0160edfc(lVar7,iVar4);
    lVar5 = FUN_0160edfc(*(undefined8 *)puVar3,iVar4);
    iVar6 = *(int *)(unaff_x19 + 0x24);
    if (iVar6 < 1) {
      uVar9 = 0;
    }
    else {
      uVar10 = 0;
      uVar9 = 0;
      lVar11 = 0x20;
      do {
        lVar8 = *(long *)(unaff_x19 + 0x18);
        if (lVar8 == 0) {
LAB_01d34a84:
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar10) goto LAB_01d34a80;
        if (-1 < *(int *)(lVar8 + lVar11)) {
          puVar1 = (undefined8 *)(lVar8 + lVar11);
          uVar15 = *puVar1;
          uVar14 = puVar1[3];
          uVar13 = puVar1[2];
          if (lVar7 == 0) goto LAB_01d34a84;
          if (*(uint *)(lVar7 + 0x18) <= uVar9) {
LAB_01d34a80:
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
          lVar12 = (long)(int)uVar9;
          lVar8 = lVar7 + lVar12 * 0x20;
          *(undefined8 *)(lVar8 + 0x28) = puVar1[1];
          *(undefined8 *)(lVar8 + 0x20) = uVar15;
          *(undefined8 *)(lVar8 + 0x38) = uVar14;
          *(undefined8 *)(lVar8 + 0x30) = uVar13;
          thunk_FUN_01656ef8(lVar8 + 0x28,0);
          if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_01d34a80;
          if (lVar5 == 0) goto LAB_01d34a84;
          iVar6 = 0;
          if (iVar4 != 0) {
            iVar6 = *(int *)(lVar8 + 0x20) / iVar4;
          }
          uVar2 = *(int *)(lVar8 + 0x20) - iVar6 * iVar4;
          if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_01d34a80;
          lVar8 = lVar5 + (long)(int)uVar2 * 4;
          uVar9 = uVar9 + 1;
          *(int *)(lVar7 + lVar12 * 0x20 + 0x24) = *(int *)(lVar8 + 0x20) + -1;
          *(uint *)(lVar8 + 0x20) = uVar9;
          iVar6 = *(int *)(unaff_x19 + 0x24);
        }
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 0x20;
      } while ((long)uVar10 < (long)iVar6);
    }
    *(uint *)(unaff_x19 + 0x24) = uVar9;
    *(long *)(unaff_x19 + 0x18) = lVar7;
    thunk_FUN_01656ef8((long *)(unaff_x19 + 0x18),lVar7);
    *(long *)(unaff_x19 + 0x10) = lVar5;
    thunk_FUN_01656ef8((long *)(unaff_x19 + 0x10),lVar5);
    *(undefined4 *)(unaff_x19 + 0x28) = 0xffffffff;
  }
  return;
}


