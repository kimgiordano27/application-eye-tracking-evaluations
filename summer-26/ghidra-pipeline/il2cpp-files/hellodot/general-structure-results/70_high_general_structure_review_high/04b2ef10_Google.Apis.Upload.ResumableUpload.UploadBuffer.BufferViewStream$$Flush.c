/*
FUNCTION_NAME: Google.Apis.Upload.ResumableUpload.UploadBuffer.BufferViewStream$$Flush
ENTRY_POINT: 04b2ef10
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

void Google_Apis_Upload_ResumableUpload_UploadBuffer_BufferViewStream__Flush(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x23;
  undefined4 unaff_w25;
  undefined8 *unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  
  uVar4 = FUN_02ce7ad4();
  lVar5 = thunk_FUN_02cea894(*unaff_x28);
  FUN_053c9bf0(lVar5,uVar4,unaff_w25,0);
  uVar4 = FUN_02ce7ad4(*unaff_x26,unaff_w25);
  lVar6 = thunk_FUN_02cea894(*unaff_x28);
  FUN_053c9bf0(lVar6,uVar4,unaff_w25,0);
  if (unaff_x23 != (long *)0x0) {
    lVar10 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02ce0978(lVar10);
    }
    lVar11 = *unaff_x23;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_04b2f074;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_02ce0a7c();
LAB_04b2f074:
    puVar2 = PTR_DAT_065c8a48;
    plVar8 = (long *)(*(code *)*puVar7)();
    puVar3 = PTR_DAT_065c8d08;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    do {
      lVar10 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_04b2f0e4;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar3,0);
LAB_04b2f0e4:
      uVar12 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      if ((uVar12 & 1) == 0) {
        if (plVar8 == (long *)0x0) goto LAB_04b2f244;
        lVar6 = *plVar8;
        uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar12 == 0) goto LAB_04b2f21c;
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_04b2f204;
      }
      lVar10 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02ce0978(lVar10);
      }
      lVar11 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_04b2f15c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_02ce0a7c(plVar8,lVar10,0);
LAB_04b2f15c:
      (*(code *)*puVar7)(plVar8,puVar7[1]);
      *(undefined4 *)(unaff_x29 + -0xc) = 0;
      uVar12 = FUN_04b2f3d4();
      iVar1 = *(int *)(unaff_x29 + -0xc);
      if ((uVar12 & 1) == 0) {
        if (iVar1 < (int)unaff_x21) {
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          uVar12 = FUN_053c9c9c(lVar6,iVar1,0);
          if ((uVar12 & 1) == 0) {
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c7c();
            }
            FUN_053c9c20(lVar5,iVar1,0);
          }
        }
      }
      else {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        FUN_053c9c20(lVar6,iVar1,0);
      }
    } while( true );
  }
LAB_04b2f2ec:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_04b2f204:
    if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
      puVar7 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_04b2f238;
    }
  }
LAB_04b2f21c:
  puVar7 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar2,0);
LAB_04b2f238:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
LAB_04b2f244:
  if (0 < (int)unaff_x21) {
    if (lVar5 == 0) goto LAB_04b2f2ec;
    uVar12 = 0;
    do {
      uVar9 = FUN_053c9c9c(lVar5,uVar12 & 0xffffffff,0);
      if ((uVar9 & 1) != 0) {
        if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_04b2f2ec;
        if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        FUN_04b2b740();
      }
      uVar12 = uVar12 + 1;
    } while (unaff_x21 != uVar12);
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


