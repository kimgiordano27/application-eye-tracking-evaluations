/*
FUNCTION_NAME: MagicaCloth2.CurveSerializeData$$SetValue
ENTRY_POINT: 05241214
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0524131c) */

undefined8 MagicaCloth2_CurveSerializeData__SetValue(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong in_x9;
  long in_x10;
  int *piVar5;
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
    piVar5 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar5 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_0524124c;
      }
      in_x9 = in_x9 - 1;
      piVar5 = piVar5 + 4;
    } while (in_x9 != 0);
    do {
      puVar2 = (undefined8 *)FUN_02eea86c();
LAB_0524124c:
      (*(code *)*puVar2)();
      iVar1 = FUN_05240350();
      if (iVar1 < 0) {
        unaff_w25 = unaff_w25 + 1;
        if ((unaff_x21 & 1) == 0) goto LAB_05241184;
LAB_052412b0:
        if (unaff_x20 == (long *)0x0) goto LAB_05241318;
        lVar4 = *unaff_x20;
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar3 == 0) goto LAB_052412f0;
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto MagicaCloth2_CurveSerializeData__ConvertFloatArray;
      }
      if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar3 = FUN_05b3a40c();
      if ((uVar3 & 1) == 0) {
        FUN_05b3a390();
        unaff_w28 = unaff_w28 + 1;
      }
LAB_05241184:
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar4 = *unaff_x20;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x27) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_052411d4;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_02eea86c();
LAB_052411d4:
      uVar3 = (*(code *)*puVar2)();
      if ((uVar3 & 1) == 0) goto LAB_052412b0;
      param_3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
        param_3 = FUN_02eea768(param_3);
      }
      param_1 = *unaff_x20;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar5 = piVar5 + 4;
    if (uVar3 == 0) break;
MagicaCloth2_CurveSerializeData__ConvertFloatArray:
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06d01f60) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_0524130c;
    }
  }
LAB_052412f0:
  puVar2 = (undefined8 *)FUN_02eea86c();
LAB_0524130c:
  (*(code *)*puVar2)();
LAB_05241318:
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return CONCAT44(unaff_w25,unaff_w28);
}


