/*
FUNCTION_NAME: Google.Apis.Upload.ResumableUpload.UploadBuffer$$EnsureBlockAtPosition
ENTRY_POINT: 04b2e7c0
PROGRAM: hellodot-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x04b2ea98) */

void Google_Apis_Upload_ResumableUpload_UploadBuffer__EnsureBlockAtPosition(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
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
  long *unaff_x23;
  long unaff_x26;
  long unaff_x29;
  
  lVar4 = thunk_FUN_02cea894(**(undefined8 **)(param_1 + 0x6c0));
  FUN_053c9bb8();
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
          goto LAB_04b2e84c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c();
LAB_04b2e84c:
    puVar1 = PTR_DAT_065c8a48;
    plVar6 = (long *)(*(code *)*puVar5)();
    puVar2 = PTR_DAT_065c8d08;
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
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04b2e8bc;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_02ce0a7c(plVar6,*(long *)puVar2,0);
LAB_04b2e8bc:
      uVar10 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if ((uVar10 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto LAB_04b2e9d4;
        lVar8 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 == 0) goto LAB_04b2e9ac;
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_04b2e994;
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
            goto LAB_04b2e934;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_02ce0a7c(plVar6,lVar8,0);
LAB_04b2e934:
      (*(code *)*puVar5)(plVar6,puVar5[1]);
      iVar3 = FUN_04b2eb54();
      if (-1 < iVar3) {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        FUN_053c9c20(lVar4,iVar3,0);
      }
    } while( true );
  }
LAB_04b2ea88:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_04b2e994:
    if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_04b2e9c8;
    }
  }
LAB_04b2e9ac:
  puVar5 = (undefined8 *)FUN_02ce0a7c(plVar6,*(long *)puVar1,0);
LAB_04b2e9c8:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_04b2e9d4:
  if (0 < (int)unaff_x21) {
    uVar10 = 0;
    lVar8 = 0x20;
    do {
      lVar9 = *(long *)(unaff_x20 + 0x18);
      if (lVar9 == 0) goto LAB_04b2ea88;
      if (*(uint *)(lVar9 + 0x18) <= uVar10) {
LAB_04b2ea8c:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      if (-1 < *(int *)(lVar9 + lVar8)) {
        if (lVar4 == 0) goto LAB_04b2ea88;
        uVar7 = FUN_053c9c9c(lVar4,uVar10 & 0xffffffff,0);
        if ((uVar7 & 1) == 0) {
          if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_04b2ea88;
          if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar10) goto LAB_04b2ea8c;
          FUN_04b2b740();
        }
      }
      uVar10 = uVar10 + 1;
      lVar8 = lVar8 + 0xc;
    } while (unaff_x21 != uVar10);
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


