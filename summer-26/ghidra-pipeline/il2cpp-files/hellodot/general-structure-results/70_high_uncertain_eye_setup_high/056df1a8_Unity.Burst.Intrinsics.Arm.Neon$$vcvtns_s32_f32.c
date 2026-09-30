/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vcvtns_s32_f32
ENTRY_POINT: 056df1a8
PROGRAM: hellodot-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x056df520) */

long Unity_Burst_Intrinsics_Arm_Neon__vcvtns_s32_f32(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 *unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  undefined8 uVar13;
  long *unaff_x25;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  char cStack000000000000006c;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  uVar12 = *(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 8);
  cStack000000000000006c = '\0';
  FUN_04f951b8(uVar12,&stack0x0000006c,0);
  in_stack_00000080 = unaff_x21[2];
  in_stack_00000078 = unaff_x21[1];
  in_stack_00000070 = *unaff_x21;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  in_stack_00000058 = in_stack_00000078;
  in_stack_00000050 = in_stack_00000070;
  in_stack_00000060 = in_stack_00000080;
  lVar7 = FUN_056df5cc(&stack0x00000050);
  if ((lVar7 == 0) && ((unaff_x23 & 1) != 0)) {
    lVar7 = *unaff_x25;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar7 = *unaff_x25;
    }
    if (**(int **)(lVar7 + 0xb8) == 0) {
      lVar7 = 0;
    }
    else {
      in_stack_00000080 = unaff_x21[2];
      in_stack_00000078 = unaff_x21[1];
      in_stack_00000070 = *unaff_x21;
      uVar14 = *(undefined8 *)(unaff_x22 + 0x40);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x38);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x30);
      uVar3 = *(undefined4 *)(unaff_x22 + 0x48);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
      lVar7 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06622fa0);
      uVar6 = in_stack_00000080;
      uVar5 = in_stack_00000078;
      uVar4 = in_stack_00000070;
      FUN_04f7383c(lVar7,0);
      *(undefined8 *)(lVar7 + 0x50) = uVar14;
      *(undefined4 *)(lVar7 + 0x58) = uVar3;
      *(undefined8 *)(lVar7 + 0x28) = uVar5;
      *(undefined8 *)(lVar7 + 0x20) = uVar4;
      *(undefined8 *)(lVar7 + 0x48) = uVar16;
      *(undefined8 *)(lVar7 + 0x40) = uVar15;
      *(undefined8 *)(lVar7 + 0x30) = uVar6;
      *(undefined8 *)(lVar7 + 0x38) = uVar2;
      *(undefined8 *)(lVar7 + 0x60) = uVar13;
      *(undefined8 *)(lVar7 + 0x68) = uVar1;
      lVar8 = *unaff_x25;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_02cd038c(lVar8);
        lVar8 = *unaff_x25;
      }
      lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x18);
      if (lVar9 != 0) {
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_02cd038c(lVar8);
          lVar8 = *unaff_x25;
          lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x18);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
        }
        *(long *)(lVar9 + 0x10) = lVar7;
        *(long *)(lVar7 + 0x18) = lVar9;
      }
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_02cd038c(lVar8);
        lVar8 = *unaff_x25;
      }
      lVar9 = *(long *)(lVar8 + 0xb8);
      *(long *)(lVar9 + 0x18) = lVar7;
      iVar11 = *(int *)(lVar9 + 0x10) + 1;
      *(int *)(lVar9 + 0x10) = iVar11;
      if (9 < iVar11) {
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_02cd038c(lVar8);
          lVar8 = *unaff_x25;
          lVar9 = *(long *)(lVar8 + 0xb8);
          iVar11 = *(int *)(lVar9 + 0x10);
        }
        if (iVar11 == 10) {
          FUN_056df808();
        }
        else {
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_02cd038c(lVar8);
            lVar9 = *(long *)(*unaff_x25 + 0xb8);
          }
          if (*(long *)(lVar9 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          in_stack_00000070 = *unaff_x21;
          in_stack_00000078 = unaff_x21[1];
          in_stack_00000080 = unaff_x21[2];
          Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceQueryResult>___ctor
                    (*(long *)(lVar9 + 8),&stack0x00000070,lVar7,*(undefined8 *)PTR_DAT_06622fa8);
        }
      }
      lVar8 = *unaff_x25;
      iVar11 = *(int *)(lVar8 + 0xe0);
      if (iVar11 == 0) {
        thunk_FUN_02cd038c(lVar8);
        lVar8 = *unaff_x25;
        iVar11 = *(int *)(lVar8 + 0xe0);
      }
      piVar10 = *(int **)(lVar8 + 0xb8);
      if (*(long *)(piVar10 + 8) == 0) {
        if (iVar11 == 0) {
          thunk_FUN_02cd038c(lVar8);
          piVar10 = *(int **)(*unaff_x25 + 0xb8);
        }
        *(long *)(piVar10 + 8) = lVar7;
      }
      else {
        if (iVar11 == 0) {
          thunk_FUN_02cd038c(lVar8);
          lVar8 = *unaff_x25;
          piVar10 = *(int **)(lVar8 + 0xb8);
        }
        iVar11 = piVar10[4];
        if (*piVar10 < iVar11) {
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_02cd038c(lVar8);
            lVar8 = *unaff_x25;
            piVar10 = *(int **)(lVar8 + 0xb8);
            iVar11 = piVar10[4];
          }
          lVar9 = *(long *)(piVar10 + 8);
          if (iVar11 < 10) {
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c7c();
            }
          }
          else {
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_02cd038c(lVar8);
              piVar10 = *(int **)(*unaff_x25 + 0xb8);
            }
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c7c();
            }
            if (*(long *)(piVar10 + 2) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c7c();
            }
            in_stack_00000070 = *(undefined8 *)(lVar9 + 0x20);
            in_stack_00000078 = *(undefined8 *)(lVar9 + 0x28);
            in_stack_00000080 = *(undefined8 *)(lVar9 + 0x30);
            OVREnumerable_Enumerator<OVRSceneManager_Metrics>__get_Current
                      (*(long *)(piVar10 + 2),&stack0x00000070,*(undefined8 *)PTR_DAT_06622fb0);
          }
          lVar8 = *(long *)(lVar9 + 0x10);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          *(undefined8 *)(lVar8 + 0x18) = 0;
          lVar9 = *unaff_x25;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
            lVar9 = *unaff_x25;
          }
          lVar9 = *(long *)(lVar9 + 0xb8);
          *(long *)(lVar9 + 0x20) = lVar8;
          *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + -1;
        }
      }
    }
  }
  if (cStack000000000000006c != '\0') {
    thunk_FUN_02c6fbb4(uVar12,0);
  }
  return lVar7;
}


