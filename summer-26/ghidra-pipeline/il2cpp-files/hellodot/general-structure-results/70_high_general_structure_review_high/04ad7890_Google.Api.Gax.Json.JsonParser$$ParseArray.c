/*
FUNCTION_NAME: Google.Api.Gax.Json.JsonParser$$ParseArray
ENTRY_POINT: 04ad7890
PROGRAM: hellodot-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04ad7a44) */

void Google_Api_Gax_Json_JsonParser__ParseArray(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong in_x9;
  int *in_x10;
  int *piVar7;
  long in_x11;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x29;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  do {
    if (in_x11 == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_04ad78c0;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_04ad78c0:
        (*(code *)*puVar2)(unaff_x29 + -0x30);
        *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x29 + -0x28);
        *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x30);
        *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(unaff_x29 + -0x18);
        *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -0x20);
        *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0x28);
        *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -0x30);
        *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x29 + -0x18);
        *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x20);
        iVar1 = FUN_04ad7b00();
        if (-1 < iVar1) {
          if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          FUN_053c9c20();
        }
        lVar4 = *unaff_x23;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x24) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_04ad7848;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_04ad7848:
        uVar6 = (*(code *)*puVar2)();
        if ((uVar6 & 1) == 0) {
          if (unaff_x23 == (long *)0x0) goto code_r0x04ad7974;
          lVar4 = *unaff_x23;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 == 0) goto LAB_04ad7948;
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_04ad7930;
        }
        param_3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
        if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
          param_3 = FUN_02ce0978(param_3);
        }
        param_1 = *unaff_x23;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_04ad7930:
    if (*(long *)(piVar7 + -2) == *unaff_x25) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_04ad7964;
    }
  }
LAB_04ad7948:
  puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_04ad7964:
  (*(code *)*puVar2)();
code_r0x04ad7974:
  if (0 < (int)unaff_x21) {
    uVar6 = 0;
    lVar4 = 0x20;
    do {
      lVar5 = *(long *)(unaff_x20 + 0x18);
      if (lVar5 == 0) goto LAB_04ad7a34;
      if (*(uint *)(lVar5 + 0x18) <= uVar6) {
LAB_04ad7a38:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      if (-1 < *(int *)(lVar5 + lVar4)) {
        if (unaff_x22 == 0) {
LAB_04ad7a34:
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        uVar3 = FUN_053c9c9c();
        if ((uVar3 & 1) == 0) {
          lVar5 = *(long *)(unaff_x20 + 0x18);
          if (lVar5 == 0) goto LAB_04ad7a34;
          if (*(uint *)(lVar5 + 0x18) <= uVar6) goto LAB_04ad7a38;
          lVar5 = lVar5 + lVar4;
          uVar9 = *(undefined8 *)(lVar5 + 0x20);
          uVar8 = *(undefined8 *)(lVar5 + 0x18);
          uVar11 = *(undefined8 *)(lVar5 + 0x10);
          uVar10 = *(undefined8 *)(lVar5 + 8);
          *(undefined8 *)(unaff_x29 + -0x88) = uVar11;
          *(undefined8 *)(unaff_x29 + -0x90) = uVar10;
          *(undefined8 *)(unaff_x29 + -0x78) = uVar9;
          *(undefined8 *)(unaff_x29 + -0x80) = uVar8;
          *(undefined8 *)(unaff_x29 + -0x28) = uVar11;
          *(undefined8 *)(unaff_x29 + -0x30) = uVar10;
          *(undefined8 *)(unaff_x29 + -0x18) = uVar9;
          *(undefined8 *)(unaff_x29 + -0x20) = uVar8;
          FUN_04ad448c();
        }
      }
      uVar6 = uVar6 + 1;
      lVar4 = lVar4 + 0x28;
    } while (unaff_x21 != uVar6);
  }
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


