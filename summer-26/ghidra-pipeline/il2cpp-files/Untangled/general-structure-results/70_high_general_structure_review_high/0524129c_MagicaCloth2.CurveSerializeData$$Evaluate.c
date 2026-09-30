/*
FUNCTION_NAME: MagicaCloth2.CurveSerializeData$$Evaluate
ENTRY_POINT: 0524129c
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0524131c) */

undefined8 MagicaCloth2_CurveSerializeData__Evaluate(void)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long unaff_x23;
  int unaff_w25;
  long unaff_x26;
  long *unaff_x27;
  int unaff_w28;
  long unaff_x29;
  
  do {
    FUN_05b3a390();
    unaff_w28 = unaff_w28 + 1;
LAB_05241184:
    do {
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar3 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x27) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_052411d4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_02eea86c();
LAB_052411d4:
      uVar5 = (*(code *)*puVar2)();
      if ((uVar5 & 1) == 0) {
LAB_052412b0:
        if (unaff_x20 == (long *)0x0) goto LAB_05241318;
        lVar3 = *unaff_x20;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 == 0) goto LAB_052412f0;
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto MagicaCloth2_CurveSerializeData__ConvertFloatArray;
      }
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02eea768(lVar3);
      }
      lVar4 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0524124c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_02eea86c();
LAB_0524124c:
      (*(code *)*puVar2)();
      iVar1 = FUN_05240350();
      if (iVar1 < 0) {
        unaff_w25 = unaff_w25 + 1;
        if ((unaff_x21 & 1) != 0) goto LAB_052412b0;
        goto LAB_05241184;
      }
      if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar5 = FUN_05b3a40c();
    } while ((uVar5 & 1) != 0);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
MagicaCloth2_CurveSerializeData__ConvertFloatArray:
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06d01f60) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_0524130c;
    }
  }
LAB_052412f0:
  puVar2 = (undefined8 *)FUN_02eea86c();
LAB_0524130c:
  (*(code *)*puVar2)();
LAB_05241318:
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return CONCAT44(unaff_w25,unaff_w28);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


