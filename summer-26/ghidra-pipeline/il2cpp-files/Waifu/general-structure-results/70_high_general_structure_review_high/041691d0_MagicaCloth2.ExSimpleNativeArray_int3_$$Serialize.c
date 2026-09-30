/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<int3>$$Serialize
ENTRY_POINT: 041691d0
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


long MagicaCloth2_ExSimpleNativeArray<int3>__Serialize(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long lVar9;
  long *unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  long unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  long unaff_x27;
  
  do {
    uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == param_3) {
          puVar4 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04169218;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_0338f71c(param_2,param_3,0);
LAB_04169218:
    (*(code *)*puVar4)(param_2,puVar4[1]);
    uVar7 = unaff_x25 & 1;
    unaff_x25 = 0;
    plVar1 = param_2;
    if (uVar7 == 0) {
      plVar1 = unaff_x21;
    }
    do {
      unaff_x21 = plVar1;
      unaff_w22 = unaff_w22 + 1;
      lVar6 = *unaff_x20;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)(unaff_x24 + 0xc70)) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0416914c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_0338f71c();
LAB_0416914c:
      iVar2 = (*(code *)*puVar4)();
      if (iVar2 <= unaff_w22) {
        lVar6 = **(long **)(unaff_x19 + 0x38);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0338f618(lVar6);
        }
        lVar6 = FUN_0339898c(unaff_x21,lVar6);
        lVar9 = **(long **)(unaff_x19 + 0x38);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_0338f618(lVar9);
        }
        if (lVar6 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = FUN_0339898c(lVar6,lVar9);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1fec(lVar6,lVar9);
          }
        }
        return lVar5;
      }
      lVar6 = *unaff_x20;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)(unaff_x26 + 0xa00)) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_041691ac;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_0338f71c();
LAB_041691ac:
      uVar3 = (*(code *)*puVar4)();
      param_2 = (long *)FUN_0339898c(uVar3,*(undefined8 *)(unaff_x27 + 0x390));
      plVar1 = unaff_x21;
    } while (param_2 == (long *)0x0);
    param_1 = *param_2;
    param_3 = *(long *)(unaff_x27 + 0x390);
  } while( true );
}


