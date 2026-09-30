/*
FUNCTION_NAME: System.Array$$IndexOfImpl<CharacterSubstitutor.CharReplacement>
ENTRY_POINT: 043975ec
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


void System_Array__IndexOfImpl<CharacterSubstitutor_CharReplacement>(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  int in_w9;
  long unaff_x19;
  undefined8 uVar7;
  long unaff_x21;
  undefined8 uVar8;
  long unaff_x22;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined8 in_stack_00000028;
  long in_stack_00000038;
  
  uVar7 = *param_1;
                    /* try { // try from 043975f0 to 044975ff has its CatchHandler @ 0439762c */
  if (in_w9 == 0) {
    thunk_FUN_03f6fea8();
  }
  uVar7 = FUN_074c4a14(uVar7,0);
                    /* try { // try from 04397608 to 04497613 has its CatchHandler @ 0439763c */
                    /* try { // try from 04397614 to 0449765f has its CatchHandler @ 0439749c */
  uVar4 = FUN_074c4a14(*(long *)(unaff_x22 + 0x18) + 0x20,0);
  uVar5 = FUN_074ce748(uVar7,uVar4,0);
  if ((uVar5 & 1) == 0) {
                    /* catch(type#1 @ 08b42af8) { ... } // from try @ 043975f0 with catch @ 0439762c
                        */
                    /* catch(type#1 @ 08b42af8) { ... } // from try @ 043975e0 with catch @ 04397630
                        */
                    /* catch(type#1 @ 08b42af8) { ... } // from try @ 043975b0 with catch @ 04397634
                        */
                    /* catch(type#1 @ 08b42af8) { ... } // from try @ 0439752c with catch @ 04397638
                        */
    uVar7 = **(undefined8 **)(unaff_x19 + 0x38);
                    /* catch(type#1 @ 08b42af8) { ... } // from try @ 04397608 with catch @ 0439763c
                        */
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
                    /* catch(type#1 @ 08b42af8) { ... } // from try @ 0439754c with catch @ 04397640
                        */
      thunk_FUN_03f6fea8();
    }
                    /* catch(type#1 @ 08b42af8) { ... } // from try @ 043974d8 with catch @ 04397644
                        */
                    /* catch(type#1 @ 08b42af8) { ... } // from try @ 043974f4 with catch @ 04397648
                       catch(type#1 @ 08b42af8) { ... } // from try @ 04397578 with catch @ 04397648
                        */
    uVar7 = FUN_074c4a14(uVar7,0);
    uVar4 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fea8,0);
    uVar5 = FUN_074ce748(uVar7,uVar4,0);
    if ((uVar5 & 1) != 0) goto LAB_043974e4;
    uVar7 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar7 = FUN_074c4a14(uVar7,0);
    uVar4 = FUN_074c4a14(*(long *)(unaff_x22 + 0x78) + 0x20,0);
    uVar5 = FUN_074ce748(uVar7,uVar4,0);
    if ((uVar5 & 1) == 0) {
      uVar7 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar7 = FUN_074c4a14(uVar7,0);
      uVar4 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe50,0);
      uVar5 = FUN_074ce748(uVar7,uVar4,0);
      if ((uVar5 & 1) != 0) goto LAB_0439773c;
      uVar7 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar7 = FUN_074c4a14(uVar7,0);
      uVar4 = FUN_074c4a14(*(long *)(unaff_x22 + 0x50) + 0x20,0);
      uVar5 = FUN_074ce748(uVar7,uVar4,0);
      if ((uVar5 & 1) == 0) {
        uVar7 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar7 = FUN_074c4a14(uVar7,0);
        uVar4 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe90,0);
        uVar5 = FUN_074ce748(uVar7,uVar4,0);
        if ((uVar5 & 1) != 0) goto LAB_043977f8;
        uVar7 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar7 = FUN_074c4a14(uVar7,0);
        uVar4 = FUN_074c4a14(*(long *)(unaff_x22 + 0x40) + 0x20,0);
        uVar5 = FUN_074ce748(uVar7,uVar4,0);
        if ((uVar5 & 1) == 0) {
          uVar7 = **(undefined8 **)(unaff_x19 + 0x38);
          if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar7 = FUN_074c4a14(uVar7,0);
          uVar4 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe70,0);
          uVar5 = FUN_074ce748(uVar7,uVar4,0);
          if ((uVar5 & 1) != 0) goto LAB_043978f4;
          uVar7 = **(undefined8 **)(unaff_x19 + 0x38);
          if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar7 = FUN_074c4a14(uVar7,0);
          uVar4 = FUN_074c4a14(*(long *)(unaff_x22 + 0x70) + 0x20,0);
          uVar5 = FUN_074ce748(uVar7,uVar4,0);
          if ((uVar5 & 1) == 0) {
            uVar7 = **(undefined8 **)(unaff_x19 + 0x38);
            if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            uVar7 = FUN_074c4a14(uVar7,0);
            uVar4 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911feb0,0);
            uVar5 = FUN_074ce748(uVar7,uVar4,0);
            if ((uVar5 & 1) != 0) goto LAB_043979d4;
            uVar7 = **(undefined8 **)(unaff_x19 + 0x38);
            if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            uVar7 = FUN_074c4a14(uVar7,0);
            uVar4 = FUN_074c4a14(*(long *)(unaff_x22 + 0x30) + 0x20,0);
            uVar5 = FUN_074ce748(uVar7,uVar4,0);
            if ((uVar5 & 1) == 0) {
              uVar7 = **(undefined8 **)(unaff_x19 + 0x38);
              if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_03f6fea8();
              }
              uVar7 = FUN_074c4a14(uVar7,0);
              uVar4 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe80,0);
              uVar5 = FUN_074ce748(uVar7,uVar4,0);
              if ((uVar5 & 1) == 0) {
                thunk_FUN_03f786f8(&DAT_092c7648);
                FUN_0395b070();
                uVar7 = FUN_0775d89c(0);
                uVar1 = FUN_07772d00(&stack0x00000010,0);
                in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar1);
                uVar4 = thunk_FUN_03f786f8(&DAT_092c43a0);
                uVar4 = thunk_FUN_03f4e2c4(uVar4,&stack0x00000028);
                uVar8 = **(undefined8 **)(unaff_x19 + 0x38);
                FUN_0395b070(*(undefined8 *)(PTR_DAT_0910b550 + 0xe0));
                uVar8 = FUN_074c4a14(uVar8,0);
                uVar7 = FUN_077594ec(uVar7,uVar4,uVar8,0);
                thunk_FUN_03f786f8(&DAT_092c3ef0);
                uVar4 = thunk_FUN_03f4e68c();
                auVar10 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer
                                    (uVar4,uVar7,0);
                if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f134f0(uVar4);
                }
                goto LAB_04397b84;
              }
            }
            uVar1 = FUN_077732ac(&stack0x00000010,0);
            uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
            in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar1);
          }
          else {
LAB_043979d4:
            in_stack_00000028 = FUN_07773660(&stack0x00000010,0);
            uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
          }
        }
        else {
LAB_043978f4:
          uVar2 = FUN_0777345c(&stack0x00000010,0);
          uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
          in_stack_00000028 = CONCAT62(in_stack_00000028._2_6_,uVar2);
        }
      }
      else {
LAB_043977f8:
        uVar9 = FUN_07773568(&stack0x00000010,0);
        uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
        in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar9);
      }
    }
    else {
LAB_0439773c:
      uVar9 = Sentry_Internal_Extensions_SentryJsonContext__get_Object(&stack0x00000010,0);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
      in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar9);
    }
    uVar7 = thunk_FUN_03f4e2c4(uVar7,&stack0x00000028);
    lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f4b260(lVar6);
    }
    puVar3 = (undefined8 *)FUN_03951c9c(uVar7,lVar6);
    uVar7 = *puVar3;
  }
  else {
LAB_043974e4:
    uVar1 = FUN_0777333c(&stack0x00000010,0);
    in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,uVar1);
    uVar7 = thunk_FUN_03f4e2c4(*(undefined8 *)(unaff_x22 + 0x18),&stack0x00000028);
    lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f4b260(lVar6);
    }
    puVar3 = (undefined8 *)FUN_03951c9c(uVar7,lVar6);
    uVar7 = *puVar3;
  }
  auVar10._8_8_ = puVar3[1];
  auVar10._0_8_ = uVar7;
  if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
    return;
  }
LAB_04397b84:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar10._0_8_,auVar10._8_8_);
}


