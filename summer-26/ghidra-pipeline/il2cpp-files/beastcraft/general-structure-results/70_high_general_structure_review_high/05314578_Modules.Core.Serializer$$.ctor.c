/*
FUNCTION_NAME: Modules.Core.Serializer$$.ctor
ENTRY_POINT: 05314578
PROGRAM: beastcraft-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x053146b8) */
/* WARNING: Removing unreachable block (ram,0x053146c4) */
/* WARNING: Removing unreachable block (ram,0x053147e8) */
/* WARNING: Removing unreachable block (ram,0x053147f8) */

undefined8 Modules_Core_Serializer___ctor(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong in_x9;
  int *piVar5;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x22;
  long *plVar6;
  long *unaff_x23;
  int unaff_w24;
  int unaff_w25;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  do {
    if (in_x9 != 0) {
      piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == param_3) {
          puVar2 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_053145b8;
        }
        in_x9 = in_x9 - 1;
        piVar5 = piVar5 + 4;
      } while (in_x9 != 0);
    }
    puVar2 = (undefined8 *)FUN_02e759c0(unaff_x23,param_3,0);
LAB_053145b8:
    (*(code *)*puVar2)(unaff_x29 + -0x40,unaff_x23,puVar2[1]);
    uVar8 = *(undefined8 *)(unaff_x29 + -0x38);
    uVar7 = *(undefined8 *)(unaff_x29 + -0x40);
    uVar10 = *(undefined8 *)(unaff_x29 + -0x28);
    uVar9 = *(undefined8 *)(unaff_x29 + -0x30);
    uVar12 = *(undefined8 *)(unaff_x29 + -0x18);
    uVar11 = *(undefined8 *)(unaff_x29 + -0x20);
    *(undefined8 *)(unaff_x29 + -0x38) = uVar8;
    *(undefined8 *)(unaff_x29 + -0x40) = uVar7;
    *(undefined8 *)(unaff_x29 + -0x28) = uVar10;
    *(undefined8 *)(unaff_x29 + -0x30) = uVar9;
    *(undefined8 *)(unaff_x29 + -0x18) = uVar12;
    *(undefined8 *)(unaff_x29 + -0x20) = uVar11;
    *(undefined8 *)(unaff_x29 + -0x78) = uVar8;
    *(undefined8 *)(unaff_x29 + -0x80) = uVar7;
    *(undefined8 *)(unaff_x29 + -0x68) = uVar10;
    *(undefined8 *)(unaff_x29 + -0x70) = uVar9;
    *(undefined8 *)(unaff_x29 + -0x58) = uVar12;
    *(undefined8 *)(unaff_x29 + -0x60) = uVar11;
    iVar1 = FUN_05313460();
    if (iVar1 < 0) {
      unaff_w24 = unaff_w24 + 1;
      if ((unaff_x20 & 1) == 0) goto LAB_053144e0;
LAB_05314638:
      plVar6 = *(long **)(unaff_x29 + -0x48);
      if (plVar6 == (long *)0x0) goto LAB_053146ac;
      lVar4 = *plVar6;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 == 0) goto LAB_05314684;
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      goto Modules_Core_StateBase__Dispose;
    }
    if (unaff_x22 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      goto LAB_053148e4;
    }
    uVar3 = FUN_058648fc();
    if ((uVar3 & 1) == 0) {
      FUN_05864880();
      unaff_w25 = unaff_w25 + 1;
    }
LAB_053144e0:
    plVar6 = *(long **)(unaff_x29 + -0x48);
    if (plVar6 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      goto LAB_053148e4;
    }
    lVar4 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_05314534;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_02e759c0(plVar6,*unaff_x27,0);
LAB_05314534:
    uVar3 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    if ((uVar3 & 1) == 0) goto LAB_05314638;
    unaff_x23 = *(long **)(unaff_x29 + -0x48);
    if (unaff_x23 == (long *)0x0) break;
    param_3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
    if ((*(ushort *)(param_3 + 0x135) & 1) == 0) {
      param_3 = FUN_02e7568c(param_3);
    }
    param_1 = *unaff_x23;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  } while( true );
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  goto LAB_053148e4;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar5 = piVar5 + 4;
    if (uVar3 == 0) break;
Modules_Core_StateBase__Dispose:
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06a2ef10) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_053146a0;
    }
  }
LAB_05314684:
  puVar2 = (undefined8 *)FUN_02e759c0(plVar6,*(long *)PTR_DAT_06a2ef10,0);
LAB_053146a0:
  (*(code *)*puVar2)(plVar6,puVar2[1]);
LAB_053146ac:
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return CONCAT44(unaff_w24,unaff_w25);
  }
LAB_053148e4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


