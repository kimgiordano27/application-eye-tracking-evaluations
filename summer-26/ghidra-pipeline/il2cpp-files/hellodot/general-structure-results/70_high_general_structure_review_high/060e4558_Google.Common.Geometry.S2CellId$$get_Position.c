/*
FUNCTION_NAME: Google.Common.Geometry.S2CellId$$get_Position
ENTRY_POINT: 060e4558
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Google_Common_Geometry_S2CellId__get_Position(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if ((DAT_06a82df2 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c48);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Peridot_Telemetry_BehaviorInterrupt_<>c_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Niantic_Peridot_Telemetry_BehaviorStart_<>c_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Niantic_Peridot_Api_BehaviorTreeConfig_<>c_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_HelloDot_Creature_BehaviorUtil_<>c__DisplayClass7_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e3d20);
    AkMIDIEventCallbackInfo__get_byProgramNum(Niantic_Peridot_Api_BehaviorConfig_<>c_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Runtime_Serialization_LongList_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e2c80);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_HelloDot_Creature_BehaviorUtil_<>c__DisplayClass8_0_TypeInfo);
    DAT_06a82df2 = 1;
  }
  puVar2 = System_Runtime_Serialization_LongList_TypeInfo;
  in_stack_00000018 = 0;
  if ((*(long *)(param_1 + 0x28) == 0) || (lVar10 = *(long *)(param_1 + 0x20), lVar10 == 0)) {
    return;
  }
  uVar14 = *(uint *)(lVar10 + 0x18);
  if (0 < (int)uVar14) {
    uVar11 = 0;
    do {
      if (uVar14 <= uVar11) goto Google_Common_Geometry_S2CellId__Equals;
      lVar12 = *(long *)(lVar10 + (long)(int)uVar11 * 8 + 0x20);
      if ((lVar12 == 0) || (lVar15 = *(long *)(lVar12 + 0x10), lVar15 == 0)) goto LAB_060e4a5c;
      uVar14 = *(uint *)(lVar15 + 0x18);
      if (0 < (int)uVar14) {
        uVar16 = 0;
        do {
          if (uVar14 <= uVar16) goto Google_Common_Geometry_S2CellId__Equals;
          lVar17 = *(long *)(lVar15 + (long)(int)uVar16 * 8 + 0x20);
          if (lVar17 == 0) goto LAB_060e4a5c;
          lVar5 = *(long *)puVar2;
          uVar9 = *(undefined8 *)(lVar17 + 0x10);
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
            lVar5 = *(long *)puVar2;
          }
          uVar6 = FUN_060e4dd8(uVar9,**(undefined8 **)(lVar5 + 0xb8));
          if ((uVar6 & 1) != 0) {
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            *(undefined1 *)(lVar17 + 0x28) = 1;
          }
          lVar5 = *(long *)(lVar17 + 0x20);
          if (lVar5 == 0) goto LAB_060e4a5c;
          if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
            uVar6 = 0;
            uVar7 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
            do {
              if (uVar7 <= uVar6) goto Google_Common_Geometry_S2CellId__Equals;
              uVar7 = FUN_0602cb2c(*(undefined8 *)(lVar5 + 0x20 + uVar6 * 8),0);
              if ((uVar7 & 1) != 0) {
                *(undefined1 *)(lVar17 + 0x29) = 1;
                break;
              }
              uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
              uVar6 = uVar6 + 1;
            } while ((long)uVar6 < (long)(int)*(uint *)(lVar5 + 0x18));
          }
          uVar14 = *(uint *)(lVar15 + 0x18);
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)uVar14);
      }
      uVar14 = *(uint *)(lVar10 + 0x18);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)uVar14);
  }
  lVar10 = *(long *)(param_1 + 0x28);
  if (lVar10 != 0) {
    uVar14 = *(uint *)(lVar10 + 0x18);
    if ((int)uVar14 < 1) {
LAB_060e4760:
      puVar2 = PTR_DAT_065e3d20;
      if (*(int *)(*(long *)PTR_DAT_065e3d20 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if (DAT_06a6d4d1 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e3d20);
        DAT_06a6d4d1 = '\x01';
      }
      lVar10 = *(long *)puVar2;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar10 = *(long *)puVar2;
      }
      puVar4 = Niantic_HelloDot_Creature_BehaviorUtil_<>c__DisplayClass7_0_TypeInfo;
      uVar9 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10);
      lVar10 = thunk_FUN_02cea894(*(undefined8 *)
                                   Niantic_HelloDot_Creature_BehaviorUtil_<>c__DisplayClass7_0_TypeInfo
                                 );
      puVar3 = Niantic_Peridot_Telemetry_BehaviorStart_<>c_TypeInfo;
      FUN_04678980(lVar10,uVar9,*(undefined8 *)Niantic_Peridot_Telemetry_BehaviorStart_<>c_TypeInfo)
      ;
      *(long *)(param_1 + 0x88) = lVar10;
      if (DAT_06a6d4d1 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e3d20);
        DAT_06a6d4d1 = '\x01';
      }
      lVar10 = *(long *)puVar2;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar10 = *(long *)puVar2;
      }
      uVar9 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10);
      lVar10 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
      FUN_04678980(lVar10,uVar9,*(undefined8 *)puVar3);
      *(long *)(param_1 + 0x78) = lVar10;
      if (DAT_06a6d4d1 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e3d20);
        DAT_06a6d4d1 = '\x01';
      }
      lVar10 = *(long *)puVar2;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar10 = *(long *)puVar2;
      }
      uVar9 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10);
      lVar10 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
      FUN_04678980(lVar10,uVar9,*(undefined8 *)puVar3);
      plVar13 = (long *)(param_1 + 0x80);
      *plVar13 = lVar10;
      puVar3 = Niantic_Peridot_Api_BehaviorTreeConfig_<>c_TypeInfo;
      puVar2 = Niantic_Peridot_Telemetry_BehaviorInterrupt_<>c_TypeInfo;
      lVar10 = *(long *)(param_1 + 0x28);
      if (lVar10 != 0) {
        lVar12 = 0;
        do {
          uVar14 = (uint)lVar12;
          if ((int)*(uint *)(lVar10 + 0x18) <= (int)uVar14) {
            return;
          }
          if (*(uint *)(lVar10 + 0x18) <= uVar14) {
Google_Common_Geometry_S2CellId__Equals:
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          lVar10 = *(long *)(lVar10 + lVar12 * 8 + 0x20);
          if ((lVar10 == 0) || (lVar15 = *(long *)(param_1 + 0x20), lVar15 == 0)) break;
          uVar11 = *(uint *)(lVar10 + 0x40);
          if ((int)uVar11 < (int)*(uint *)(lVar15 + 0x18)) {
            if (*(uint *)(lVar15 + 0x18) <= uVar11) goto Google_Common_Geometry_S2CellId__Equals;
            *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)(lVar15 + (long)(int)uVar11 * 8 + 0x20);
          }
          Google_Common_Geometry_S2Projections__XyzToFace(lVar10);
          lVar15 = *(long *)(lVar10 + 0x38);
          *(uint *)(lVar10 + 0x50) = uVar14;
          if (lVar15 == 0) break;
          if ((int)*(long *)(lVar15 + 0x18) == 0) goto Google_Common_Geometry_S2CellId__Equals;
          lVar15 = *(long *)(lVar15 + ((*(long *)(lVar15 + 0x18) << 0x20) + -0x100000000 >> 0x1d) +
                            0x20);
          if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x10), lVar15 == 0)) break;
          if (*(int *)(lVar15 + 0x18) == 0) goto Google_Common_Geometry_S2CellId__Equals;
          iVar1 = *(int *)(lVar15 + 0x28);
          if (iVar1 - 1U < 6) {
            lVar17 = *(long *)(lVar15 + 0x20);
            plVar8 = (long *)(param_1 + 0x88);
            lVar15 = lVar17;
            switch(iVar1) {
            default:
              plVar8 = plVar13;
              lVar15 = *(long *)PTR_DAT_065e2c80;
              if (lVar17 != 0) {
                lVar15 = lVar17;
              }
              break;
            case 3:
              break;
            case 4:
              plVar8 = plVar13;
              lVar15 = *(long *)PTR_DAT_065e2c80;
              break;
            case 5:
              goto switchD_060e4970_caseD_5;
            case 6:
              plVar8 = (long *)(param_1 + 0x78);
            }
            lVar17 = *plVar8;
            if (lVar17 != 0) {
              uVar6 = FUN_0467ad20(lVar17,lVar15,&stack0x00000018,*(undefined8 *)puVar2);
              if ((uVar6 & 1) != 0) {
                *(undefined8 *)(lVar10 + 0x48) = in_stack_00000018;
              }
              FUN_04679278(lVar17,lVar15,lVar10,*(undefined8 *)puVar3);
            }
          }
          else {
switchD_060e4970_caseD_5:
            in_stack_00000010._4_4_ = iVar1;
            uVar9 = thunk_FUN_02cea4e8(*(undefined8 *)
                                        Niantic_Peridot_Api_BehaviorConfig_<>c_TypeInfo,
                                       (long)&stack0x00000010 + 4);
            uVar9 = FUN_04db0cfc(*(undefined8 *)
                                  Niantic_HelloDot_Creature_BehaviorUtil_<>c__DisplayClass8_0_TypeInfo
                                 ,uVar9,0);
            if (*(int *)(*(long *)PTR_DAT_065c8c48 + 0xe0) == 0) {
              thunk_FUN_02cd038c(*(long *)PTR_DAT_065c8c48);
            }
            FUN_05eb31ec(uVar9,param_1,0);
          }
          lVar12 = lVar12 + 1;
          lVar10 = *(long *)(param_1 + 0x28);
          if (lVar10 == 0) break;
        } while( true );
      }
    }
    else {
      uVar11 = 0;
      do {
        if (*(uint *)(lVar10 + 0x18) <= uVar11) goto Google_Common_Geometry_S2CellId__Equals;
        if (*(long *)(lVar10 + (long)(int)uVar11 * 8 + 0x20) == 0) break;
        FUN_060e3518();
        uVar11 = uVar11 + 1;
        if (uVar14 == uVar11) goto LAB_060e4760;
        lVar10 = *(long *)(param_1 + 0x28);
      } while (lVar10 != 0);
    }
  }
LAB_060e4a5c:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


