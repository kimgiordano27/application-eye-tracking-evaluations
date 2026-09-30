/*
FUNCTION_NAME: Google.Apis.Upload.ResumableUpload.UploadBuffer.BufferViewStream$$FlushAsync
ENTRY_POINT: 04b2ef48
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x04b2f250) */
/* WARNING: Removing unreachable block (ram,0x04b2f300) */

void Google_Apis_Upload_ResumableUpload_UploadBuffer_BufferViewStream__FlushAsync
               (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  undefined4 unaff_w25;
  long unaff_x27;
  long unaff_x29;
  
  lVar4 = thunk_FUN_02cea894(param_1);
  FUN_053c9bf0(lVar4,param_2,unaff_w25,0);
  if (unaff_x23 != (long *)0x0) {
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02ce0978(lVar8);
    }
    lVar9 = *unaff_x23;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_04b2f074;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c();
LAB_04b2f074:
    puVar2 = PTR_DAT_065c8a48;
    plVar6 = (long *)(*(code *)*puVar5)();
    puVar3 = PTR_DAT_065c8d08;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    do {
      lVar8 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04b2f0e4;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_02ce0a7c(plVar6,*(long *)puVar3,0);
LAB_04b2f0e4:
      uVar10 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if ((uVar10 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto LAB_04b2f244;
        lVar4 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar10 == 0) goto LAB_04b2f21c;
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_04b2f204;
      }
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02ce0978(lVar8);
      }
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04b2f15c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_02ce0a7c(plVar6,lVar8,0);
LAB_04b2f15c:
      (*(code *)*puVar5)(plVar6,puVar5[1]);
      *(undefined4 *)(unaff_x29 + -0xc) = 0;
      uVar10 = FUN_04b2f3d4();
      iVar1 = *(int *)(unaff_x29 + -0xc);
      if ((uVar10 & 1) == 0) {
        if (iVar1 < (int)unaff_x21) {
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          uVar10 = FUN_053c9c9c(lVar4,iVar1,0);
          if ((uVar10 & 1) == 0) {
            if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c7c();
            }
            FUN_053c9c20();
          }
        }
      }
      else {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        FUN_053c9c20(lVar4,iVar1,0);
      }
    } while( true );
  }
LAB_04b2f2ec:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_04b2f204:
    if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
      puVar5 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_04b2f238;
    }
  }
LAB_04b2f21c:
  puVar5 = (undefined8 *)FUN_02ce0a7c(plVar6,*(long *)puVar2,0);
LAB_04b2f238:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_04b2f244:
  if (0 < (int)unaff_x21) {
    if (unaff_x22 == 0) goto LAB_04b2f2ec;
    uVar10 = 0;
    do {
      uVar7 = FUN_053c9c9c();
      if ((uVar7 & 1) != 0) {
        if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_04b2f2ec;
        if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        FUN_04b2b740();
      }
      uVar10 = uVar10 + 1;
    } while (unaff_x21 != uVar10);
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


