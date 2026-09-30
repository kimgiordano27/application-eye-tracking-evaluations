/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray
ENTRY_POINT: 01bc89c8
PROGRAM: vrfs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray
               (long param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long in_x10;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  long in_stack_00000030;
  
  do {
    *(int *)(unaff_x25 + 0x18) = (int)in_x10 + 1;
    plVar6 = (long *)(param_1 + in_x10 * 8 + 0x20);
    *plVar6 = unaff_x26;
    thunk_FUN_01656ef8(plVar6,unaff_x26);
    while( true ) {
      do {
        uVar3 = FUN_03e1bcc4(&stack0x00000020,*unaff_x28);
        if ((uVar3 & 1) == 0) {
          FUN_03e1bcc0(&stack0x00000020,*(undefined8 *)PTR_DAT_06dfd098);
          return;
        }
        if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        iVar1 = FUN_01bc919c();
        iVar2 = FUN_01bc919c();
      } while ((iVar1 == 0x37) || (iVar2 == 0x37));
      lVar4 = FUN_02679270();
      lVar5 = FUN_02679270();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      fVar7 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar4,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      fVar9 = param_3;
      fVar10 = param_4;
      fVar8 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar5,0);
      if (*(char *)(unaff_x29 + 0x140) == '\0') {
        thunk_FUN_0159f088();
        *(undefined1 *)(unaff_x29 + 0x140) = 1;
      }
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      unaff_x25 = *unaff_x21;
      unaff_x26 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e087c0);
      if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      fVar9 = param_3 - fVar9;
      param_4 = param_4 - fVar10;
      param_3 = param_4 * param_4;
      FUN_01bc92ac(SQRT(param_3 + (fVar7 - fVar8) * (fVar7 - fVar8) + fVar9 * fVar9),unaff_x26,iVar1
                   ,iVar2);
      if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      param_1 = *(long *)(unaff_x25 + 0x10);
      lVar4 = *unaff_x27;
      *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      in_x10 = (long)(int)*(uint *)(unaff_x25 + 0x18);
      if (*(uint *)(unaff_x25 + 0x18) < *(uint *)(param_1 + 0x18)) break;
      (**(code **)(*(long *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x58) + 8))
                (unaff_x25,unaff_x26);
    }
  } while( true );
}


