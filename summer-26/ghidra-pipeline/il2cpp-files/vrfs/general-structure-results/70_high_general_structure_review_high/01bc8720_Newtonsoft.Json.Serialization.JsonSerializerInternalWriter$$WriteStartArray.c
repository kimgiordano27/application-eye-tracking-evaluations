/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteStartArray
ENTRY_POINT: 01bc8720
PROGRAM: vrfs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteStartArray
               (undefined1 param_1 [16],float param_2,float param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *plVar13;
  long unaff_x22;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
  thunk_FUN_0159f088();
  thunk_FUN_0159f088(PTR_DAT_06e32f38);
  thunk_FUN_0159f088(PTR_DAT_06dc0838);
  thunk_FUN_0159f088(PTR_DAT_06d981e0);
  thunk_FUN_0159f088(PTR_DAT_06e33388);
  thunk_FUN_0159f088(PTR_DAT_06df73f8);
  thunk_FUN_0159f088(PTR_DAT_06dc4c30);
  thunk_FUN_0159f088(PTR_DAT_06db8e88);
  *(undefined1 *)(unaff_x22 + 0xd12) = 1;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000020 = 0;
  lVar7 = thunk_FUN_015d056c(*unaff_x21);
  puVar2 = PTR_DAT_06e52800;
  if (lVar7 != 0) {
    FUN_043c1bd8(lVar7,*(undefined8 *)PTR_DAT_06dc0838);
    FUN_043c2634(lVar7,*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)puVar2);
    FUN_043c2634(lVar7,*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)puVar2);
    if ((unaff_x19 != 0) && (lVar8 = FUN_051e5130(), puVar2 = PTR_DAT_06df73f8, lVar8 != 0)) {
      uVar14 = FUN_04f1cc5c(lVar8,0);
      *(undefined4 *)(unaff_x20 + 0x20) = uVar14;
      *(float *)(unaff_x20 + 0x24) = param_2;
      *(float *)(unaff_x20 + 0x28) = param_3;
      lVar8 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
      puVar4 = PTR_DAT_06e55960;
      puVar3 = PTR_DAT_06e32f38;
      puVar2 = PTR_DAT_06dfbef0;
      if (lVar8 != 0) {
        FUN_043c1bd8(lVar8,*(undefined8 *)PTR_DAT_06d981e0);
        plVar13 = (long *)(unaff_x20 + 0x30);
        *plVar13 = lVar8;
        thunk_FUN_01656ef8(plVar13,lVar8);
        FUN_043c2e98(&stack0x00000008,lVar7,*(undefined8 *)puVar3);
        puVar3 = PTR_DAT_06e1a840;
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        while( true ) {
          do {
            uVar9 = FUN_03e1bcc4(&stack0x00000020,*(undefined8 *)puVar2);
            if ((uVar9 & 1) == 0) {
              FUN_03e1bcc0(&stack0x00000020,*(undefined8 *)PTR_DAT_06dfd098);
              return;
            }
            if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0160eeb4();
            }
            iVar5 = FUN_01bc919c();
            iVar6 = FUN_01bc919c();
          } while ((iVar5 == 0x37) || (iVar6 == 0x37));
          lVar7 = FUN_02679270();
          lVar8 = FUN_02679270();
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          fVar15 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar7,0);
          if (lVar8 == 0) break;
          fVar17 = param_2;
          fVar18 = param_3;
          fVar16 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar8,0);
          if (DAT_0722a140 == '\0') {
            thunk_FUN_0159f088(puVar3);
            DAT_0722a140 = '\x01';
          }
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          lVar8 = *plVar13;
          lVar7 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e087c0);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          fVar17 = param_2 - fVar17;
          param_3 = param_3 - fVar18;
          param_2 = param_3 * param_3;
          FUN_01bc92ac(SQRT(param_2 + (fVar15 - fVar16) * (fVar15 - fVar16) + fVar17 * fVar17),lVar7
                       ,iVar5,iVar6);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          lVar11 = *(long *)(lVar8 + 0x10);
          lVar12 = *(long *)puVar4;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            plVar10 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
            *plVar10 = lVar7;
            thunk_FUN_01656ef8(plVar10,lVar7);
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x58) + 8))
                      (lVar8,lVar7);
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


