/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.Eyes$$get_rightEyePosition
ENTRY_POINT: 057adab0
PROGRAM: hellodot-libil2cpp.so
SCORE: 152
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x057ae044) */

void UnityEngine_InputSystem_XR_Eyes__get_rightEyePosition(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  undefined8 *unaff_x19;
  long unaff_x20;
  byte unaff_w21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 uVar18;
  long unaff_x26;
  undefined8 *unaff_x27;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(*(undefined8 *)(param_1 + 0x5e0));
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d08);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06628390);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06628230);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06628418);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06628240);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066283d0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06628410);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06628248);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066288d8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066283d8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066288e0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066288e8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066288f0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066288f8);
  *(undefined1 *)(unaff_x26 + 0x6c5) = 1;
  uVar8 = thunk_FUN_02cea894(*unaff_x27);
  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
            (uVar8,*unaff_x22);
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar8;
  lVar9 = thunk_FUN_02cea894(*unaff_x25);
  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
            (lVar9,*unaff_x24);
  if (unaff_x23 != (long *)0x0) {
    lVar12 = *unaff_x23;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_065dac88) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_057adbec;
        }
        uVar14 = uVar14 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)FUN_02ce0a7c();
LAB_057adbec:
    puVar3 = PTR_DAT_065c8a48;
    plVar11 = (long *)(*(code *)*puVar10)();
    puVar7 = PTR_DAT_06628390;
    puVar6 = PTR_DAT_06628230;
    puVar5 = PTR_DAT_065cb5e0;
    puVar4 = PTR_DAT_065c8d08;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    do {
      lVar12 = *plVar11;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_057adc74;
          }
          uVar14 = uVar14 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar14 != 0);
      }
      puVar10 = (undefined8 *)FUN_02ce0a7c(plVar11,*(long *)puVar4,0);
LAB_057adc74:
      uVar14 = (*(code *)*puVar10)(plVar11,puVar10[1]);
      if ((uVar14 & 1) == 0) {
        if (plVar11 == (long *)0x0) goto LAB_057ade0c;
        lVar12 = *plVar11;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 == 0) goto LAB_057adde4;
        piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_057addcc;
      }
      lVar12 = *plVar11;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_057adcd0;
          }
          uVar14 = uVar14 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar14 != 0);
      }
      puVar10 = (undefined8 *)FUN_02ce0a7c(plVar11,*(long *)puVar5,0);
LAB_057adcd0:
      lVar12 = (*(code *)*puVar10)(plVar11,puVar10[1]);
      if (lVar12 != 0) {
        if (*(long *)(unaff_x20 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar12 = FUN_057a361c();
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        uVar8 = *(undefined8 *)(lVar12 + 0x20);
        lVar13 = *(long *)(lVar9 + 0x10);
        lVar15 = *(long *)puVar6;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        uVar2 = *(uint *)(lVar9 + 0x18);
        if (uVar2 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
        }
        else {
          FUN_039683cc(lVar9,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        lVar13 = *(long *)(unaff_x20 + 0xa0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar15 = *(long *)(lVar13 + 0x10);
        lVar16 = *(long *)puVar7;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        uVar2 = *(uint *)(lVar13 + 0x18);
        if (uVar2 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar13 + 0x18) = uVar2 + 1;
          *(long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20) = lVar12;
        }
        else {
          FUN_039683cc(lVar13,lVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
      }
    } while( true );
  }
  goto LAB_057ae03c;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar17 = piVar17 + 4;
    if (uVar14 == 0) break;
LAB_057addcc:
    if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
      puVar10 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_057ade00;
    }
  }
LAB_057adde4:
  puVar10 = (undefined8 *)FUN_02ce0a7c(plVar11,*(long *)puVar3,0);
LAB_057ade00:
  (*(code *)*puVar10)(plVar11,puVar10[1]);
LAB_057ade0c:
  puVar3 = PTR_DAT_066288f0;
  if (((lVar9 != 0) && (*(long *)(unaff_x20 + 0x98) != 0)) &&
     (lVar12 = *(long *)(*(long *)(unaff_x20 + 0x98) + 0x10), lVar12 != 0)) {
    if (*(int *)(lVar9 + 0x18) == 0) {
      FUN_034fe69c(&stack0x00000060,lVar12,0,*(undefined8 *)PTR_DAT_066288f8,
                   *(undefined8 *)PTR_DAT_066288d8);
      in_stack_00000018 = in_stack_00000070;
      in_stack_00000008 = in_stack_00000060;
      in_stack_00000010 = in_stack_00000068;
LAB_057adffc:
      unaff_x19[2] = in_stack_00000018;
      unaff_x19[1] = in_stack_00000010;
      *unaff_x19 = in_stack_00000008;
      return;
    }
    uVar8 = *(undefined8 *)(lVar12 + 0x30);
    lVar12 = *(long *)PTR_DAT_066288f0;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar12 = *(long *)puVar3;
    }
    puVar4 = PTR_DAT_06628870;
    lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
    if (lVar13 == 0) {
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar12 = *(long *)puVar3;
      }
      uVar18 = **(undefined8 **)(lVar12 + 0xb8);
      lVar13 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06628878);
      FUN_04a5632c(lVar13,uVar18,*(undefined8 *)PTR_DAT_066288e8,0);
      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = lVar13;
    }
    plVar11 = (long *)FUN_033df7a8(uVar8,lVar13,*(undefined8 *)puVar4);
    if (plVar11 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06628588 + 0x130);
      if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06628588)
         ) {
        *(undefined1 *)((long)plVar11 + 0x1c) = 0;
      }
    }
    if ((*(long *)(unaff_x20 + 0x98) != 0) &&
       (lVar12 = *(long *)(*(long *)(unaff_x20 + 0x98) + 0x10), lVar12 != 0)) {
      FUN_034ff41c(&stack0x00000060,lVar12,lVar9,*(undefined8 *)PTR_DAT_066283d8);
      in_stack_00000050 = in_stack_00000070;
      in_stack_00000048 = in_stack_00000068;
      in_stack_00000040 = in_stack_00000060;
      *(undefined8 *)(unaff_x20 + 0xb8) = in_stack_00000070;
      *(undefined8 *)(unaff_x20 + 0xb0) = in_stack_00000068;
      *(undefined8 *)(unaff_x20 + 0xa8) = in_stack_00000060;
      *(byte *)(unaff_x20 + 0xd8) = unaff_w21 & 1;
      if (*(long *)(unaff_x20 + 0x98) != 0) {
        lVar9 = *(long *)(*(long *)(unaff_x20 + 0x98) + 0x10);
        in_stack_00000070 = *(undefined8 *)(unaff_x20 + 0xb8);
        in_stack_00000068 = *(undefined8 *)(unaff_x20 + 0xb0);
        in_stack_00000060 = *(undefined8 *)(unaff_x20 + 0xa8);
        FUN_0410ad0c(&stack0x00000008,&stack0x00000060,*(undefined8 *)PTR_DAT_065de370);
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        if (lVar9 != 0) {
          in_stack_00000068 = in_stack_00000010;
          in_stack_00000060 = in_stack_00000008;
          in_stack_00000070 = in_stack_00000018;
          FUN_035019f0(&stack0x00000008,lVar9);
          goto LAB_057adffc;
        }
      }
    }
  }
LAB_057ae03c:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


