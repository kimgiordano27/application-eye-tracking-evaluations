/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vcvts_s32_f32
ENTRY_POINT: 056df138
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

long Unity_Burst_Intrinsics_Arm_Neon__vcvts_s32_f32(long param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  char cStack000000000000006c;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  puVar4 = PTR_DAT_065c8840;
  if ((DAT_06a76f99 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06622fa0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06622fa8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06622fb0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8840);
    DAT_06a76f99 = 1;
  }
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar8 = *(long *)puVar4;
  }
  uVar13 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
  cStack000000000000006c = '\0';
  FUN_04f951b8(uVar13,&stack0x0000006c,0);
  in_stack_00000080 = param_2[2];
  in_stack_00000078 = param_2[1];
  in_stack_00000070 = *param_2;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  in_stack_00000058 = in_stack_00000078;
  in_stack_00000050 = in_stack_00000070;
  in_stack_00000060 = in_stack_00000080;
  lVar8 = FUN_056df5cc(&stack0x00000050);
  if ((lVar8 == 0) && ((param_3 & 1) != 0)) {
    lVar8 = *(long *)puVar4;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar8 = *(long *)puVar4;
    }
    if (**(int **)(lVar8 + 0xb8) == 0) {
      lVar8 = 0;
    }
    else {
      in_stack_00000080 = param_2[2];
      in_stack_00000078 = param_2[1];
      in_stack_00000070 = *param_2;
      uVar15 = *(undefined8 *)(param_1 + 0x40);
      uVar17 = *(undefined8 *)(param_1 + 0x38);
      uVar16 = *(undefined8 *)(param_1 + 0x30);
      uVar3 = *(undefined4 *)(param_1 + 0x48);
      uVar14 = *(undefined8 *)(param_1 + 0x50);
      uVar1 = *(undefined8 *)(param_1 + 0x58);
      uVar2 = *(undefined8 *)(param_1 + 0x60);
      lVar8 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06622fa0);
      uVar7 = in_stack_00000080;
      uVar6 = in_stack_00000078;
      uVar5 = in_stack_00000070;
      FUN_04f7383c(lVar8,0);
      *(undefined8 *)(lVar8 + 0x50) = uVar15;
      *(undefined4 *)(lVar8 + 0x58) = uVar3;
      *(undefined8 *)(lVar8 + 0x28) = uVar6;
      *(undefined8 *)(lVar8 + 0x20) = uVar5;
      *(undefined8 *)(lVar8 + 0x48) = uVar17;
      *(undefined8 *)(lVar8 + 0x40) = uVar16;
      *(undefined8 *)(lVar8 + 0x30) = uVar7;
      *(undefined8 *)(lVar8 + 0x38) = uVar2;
      *(undefined8 *)(lVar8 + 0x60) = uVar14;
      *(undefined8 *)(lVar8 + 0x68) = uVar1;
      lVar9 = *(long *)puVar4;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_02cd038c(lVar9);
        lVar9 = *(long *)puVar4;
      }
      lVar10 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
      if (lVar10 != 0) {
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_02cd038c(lVar9);
          lVar9 = *(long *)puVar4;
          lVar10 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
        }
        *(long *)(lVar10 + 0x10) = lVar8;
        *(long *)(lVar8 + 0x18) = lVar10;
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_02cd038c(lVar9);
        lVar9 = *(long *)puVar4;
      }
      lVar10 = *(long *)(lVar9 + 0xb8);
      *(long *)(lVar10 + 0x18) = lVar8;
      iVar12 = *(int *)(lVar10 + 0x10) + 1;
      *(int *)(lVar10 + 0x10) = iVar12;
      if (9 < iVar12) {
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_02cd038c(lVar9);
          lVar9 = *(long *)puVar4;
          lVar10 = *(long *)(lVar9 + 0xb8);
          iVar12 = *(int *)(lVar10 + 0x10);
        }
        if (iVar12 == 10) {
          FUN_056df808();
        }
        else {
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_02cd038c(lVar9);
            lVar10 = *(long *)(*(long *)puVar4 + 0xb8);
          }
          if (*(long *)(lVar10 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          in_stack_00000070 = *param_2;
          in_stack_00000078 = param_2[1];
          in_stack_00000080 = param_2[2];
          Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceQueryResult>___ctor
                    (*(long *)(lVar10 + 8),&stack0x00000070,lVar8,*(undefined8 *)PTR_DAT_06622fa8);
        }
      }
      lVar9 = *(long *)puVar4;
      iVar12 = *(int *)(lVar9 + 0xe0);
      if (iVar12 == 0) {
        thunk_FUN_02cd038c(lVar9);
        lVar9 = *(long *)puVar4;
        iVar12 = *(int *)(lVar9 + 0xe0);
      }
      piVar11 = *(int **)(lVar9 + 0xb8);
      if (*(long *)(piVar11 + 8) == 0) {
        if (iVar12 == 0) {
          thunk_FUN_02cd038c(lVar9);
          piVar11 = *(int **)(*(long *)puVar4 + 0xb8);
        }
        *(long *)(piVar11 + 8) = lVar8;
      }
      else {
        if (iVar12 == 0) {
          thunk_FUN_02cd038c(lVar9);
          lVar9 = *(long *)puVar4;
          piVar11 = *(int **)(lVar9 + 0xb8);
        }
        iVar12 = piVar11[4];
        if (*piVar11 < iVar12) {
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_02cd038c(lVar9);
            lVar9 = *(long *)puVar4;
            piVar11 = *(int **)(lVar9 + 0xb8);
            iVar12 = piVar11[4];
          }
          lVar10 = *(long *)(piVar11 + 8);
          if (iVar12 < 10) {
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c7c();
            }
          }
          else {
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_02cd038c(lVar9);
              piVar11 = *(int **)(*(long *)puVar4 + 0xb8);
            }
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c7c();
            }
            if (*(long *)(piVar11 + 2) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c7c();
            }
            in_stack_00000070 = *(undefined8 *)(lVar10 + 0x20);
            in_stack_00000078 = *(undefined8 *)(lVar10 + 0x28);
            in_stack_00000080 = *(undefined8 *)(lVar10 + 0x30);
            OVREnumerable_Enumerator<OVRSceneManager_Metrics>__get_Current
                      (*(long *)(piVar11 + 2),&stack0x00000070,*(undefined8 *)PTR_DAT_06622fb0);
          }
          lVar9 = *(long *)(lVar10 + 0x10);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          *(undefined8 *)(lVar9 + 0x18) = 0;
          lVar10 = *(long *)puVar4;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
            lVar10 = *(long *)puVar4;
          }
          lVar10 = *(long *)(lVar10 + 0xb8);
          *(long *)(lVar10 + 0x20) = lVar9;
          *(int *)(lVar10 + 0x10) = *(int *)(lVar10 + 0x10) + -1;
        }
      }
    }
  }
  if (cStack000000000000006c != '\0') {
    thunk_FUN_02c6fbb4(uVar13,0);
  }
  return lVar8;
}


