/*
FUNCTION_NAME: System.Array$$IndexOf<PlayerLoopSystemInternal>
ENTRY_POINT: 0437fd58
PROGRAM: cac-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void System_Array__IndexOf<PlayerLoopSystemInternal>(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  long lVar6;
  int in_w9;
  long unaff_x19;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined4 uVar9;
  long in_stack_00000008;
  undefined8 in_stack_00000028;
  long in_stack_00000038;
  
  uVar7 = *param_1;
  if (in_w9 == 0) {
    thunk_FUN_03f6fea8();
  }
  uVar7 = FUN_074c4a14(uVar7,0);
  uVar3 = FUN_074c4a14(*(long *)(unaff_x22 + 0x78) + 0x20,0);
  uVar4 = FUN_074ce748(uVar7,uVar3,0);
  if ((uVar4 & 1) == 0) {
    uVar7 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar7 = FUN_074c4a14(uVar7,0);
    uVar3 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe50,0);
    uVar4 = FUN_074ce748(uVar7,uVar3,0);
    if ((uVar4 & 1) != 0) goto LAB_0437fdec;
    uVar7 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar7 = FUN_074c4a14(uVar7,0);
    uVar3 = FUN_074c4a14(*(long *)(unaff_x22 + 0x50) + 0x20,0);
    uVar4 = FUN_074ce748(uVar7,uVar3,0);
    if ((uVar4 & 1) == 0) {
      uVar7 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar7 = FUN_074c4a14(uVar7,0);
      uVar3 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe90,0);
      uVar4 = FUN_074ce748(uVar7,uVar3,0);
      if ((uVar4 & 1) != 0) goto LAB_0437fea8;
      uVar7 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar7 = FUN_074c4a14(uVar7,0);
      uVar3 = FUN_074c4a14(*(long *)(unaff_x22 + 0x40) + 0x20,0);
      uVar4 = FUN_074ce748(uVar7,uVar3,0);
      if ((uVar4 & 1) == 0) {
        uVar7 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar7 = FUN_074c4a14(uVar7,0);
        uVar3 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe70,0);
        uVar4 = FUN_074ce748(uVar7,uVar3,0);
        if ((uVar4 & 1) != 0) goto LAB_0437ffa0;
        uVar7 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar7 = FUN_074c4a14(uVar7,0);
        uVar3 = FUN_074c4a14(*(long *)(unaff_x22 + 0x70) + 0x20,0);
        uVar4 = FUN_074ce748(uVar7,uVar3,0);
        if ((uVar4 & 1) == 0) {
          uVar7 = **(undefined8 **)(unaff_x19 + 0x38);
          if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar7 = FUN_074c4a14(uVar7,0);
          uVar3 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911feb0,0);
          uVar4 = FUN_074ce748(uVar7,uVar3,0);
          if ((uVar4 & 1) != 0) goto LAB_04380080;
          uVar7 = **(undefined8 **)(unaff_x19 + 0x38);
          if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar7 = FUN_074c4a14(uVar7,0);
          uVar3 = FUN_074c4a14(*(long *)(unaff_x22 + 0x30) + 0x20,0);
          uVar4 = FUN_074ce748(uVar7,uVar3,0);
          if ((uVar4 & 1) == 0) {
            uVar7 = **(undefined8 **)(unaff_x19 + 0x38);
            if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            uVar7 = FUN_074c4a14(uVar7,0);
            uVar3 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe80,0);
            uVar4 = FUN_074ce748(uVar7,uVar3,0);
            if ((uVar4 & 1) == 0) {
              thunk_FUN_03f786f8(&DAT_092c7648);
              FUN_0395b070();
              uVar7 = FUN_0775d89c(0);
              uVar1 = FUN_07772d00(&stack0x00000010,0);
              in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar1);
              uVar3 = thunk_FUN_03f786f8(&DAT_092c43a0);
              uVar3 = thunk_FUN_03f4e2c4(uVar3,&stack0x00000028);
              uVar8 = **(undefined8 **)(unaff_x19 + 0x38);
              FUN_0395b070(*(undefined8 *)(PTR_DAT_0910b550 + 0xe0));
              uVar8 = FUN_074c4a14(uVar8,0);
              uVar7 = FUN_077594ec(uVar7,uVar3,uVar8,0);
              thunk_FUN_03f786f8(&DAT_092c3ef0);
              uVar3 = thunk_FUN_03f4e68c();
              uVar4 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer
                                (uVar3,uVar7,0);
              if (*(long *)(in_stack_00000008 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
                FUN_03f134f0(uVar3);
              }
              goto LAB_04380230;
            }
          }
          uVar1 = FUN_077732ac(&stack0x00000010,0);
          uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
          in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar1);
        }
        else {
LAB_04380080:
          in_stack_00000028 = FUN_07773660(&stack0x00000010,0);
          uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
        }
      }
      else {
LAB_0437ffa0:
        uVar2 = FUN_0777345c(&stack0x00000010,0);
        uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
        in_stack_00000028 = CONCAT62(in_stack_00000028._2_6_,uVar2);
      }
    }
    else {
LAB_0437fea8:
      uVar9 = FUN_07773568(&stack0x00000010,0);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
      in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar9);
    }
  }
  else {
LAB_0437fdec:
    uVar9 = Sentry_Internal_Extensions_SentryJsonContext__get_Object(&stack0x00000010,0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
    in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar9);
  }
  uVar7 = thunk_FUN_03f4e2c4(uVar7,&stack0x00000028);
  lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03f4b260(lVar6);
  }
  pcVar5 = (char *)FUN_03951c9c(uVar7,lVar6);
  uVar4 = (ulong)(*pcVar5 != '\0');
  if (*(long *)(in_stack_00000008 + 0x28) == in_stack_00000038) {
    return;
  }
LAB_04380230:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


