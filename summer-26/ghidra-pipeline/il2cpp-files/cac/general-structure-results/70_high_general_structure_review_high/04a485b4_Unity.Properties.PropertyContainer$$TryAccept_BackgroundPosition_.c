/*
FUNCTION_NAME: Unity.Properties.PropertyContainer$$TryAccept<BackgroundPosition>
ENTRY_POINT: 04a485b4
PROGRAM: cac-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Unity_Properties_PropertyContainer__TryAccept<BackgroundPosition>(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int in_w9;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar8;
  long unaff_x22;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000038;
  
  if (in_w9 == 0) {
    thunk_FUN_03f6fea8();
  }
  uVar3 = FUN_074c4a14();
  uVar4 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe60,0);
  uVar5 = FUN_074ce748(uVar3,uVar4,0);
  if ((uVar5 & 1) == 0) {
    uVar3 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar3 = FUN_074c4a14(uVar3,0);
    uVar4 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe18,0);
    uVar5 = FUN_074ce748(uVar3,uVar4,0);
    if ((uVar5 & 1) != 0) {
LAB_04a4854c:
      _in_stack_00000020 = FUN_077737d4(&stack0x00000010,0);
      uVar3 = DAT_092c0650;
      goto LAB_04a486dc;
    }
    uVar3 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar3 = FUN_074c4a14(uVar3,0);
    uVar4 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe38,0);
    uVar5 = FUN_074ce748(uVar3,uVar4,0);
    if ((uVar5 & 1) != 0) goto LAB_04a4854c;
    uVar3 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar3 = FUN_074c4a14(uVar3,0);
    uVar4 = FUN_074c4a14(*(long *)(unaff_x22 + 0x18) + 0x20,0);
    uVar5 = FUN_074ce748(uVar3,uVar4,0);
    if ((uVar5 & 1) != 0) {
LAB_04a48878:
      uVar1 = FUN_0777333c(&stack0x00000010,0);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
      in_stack_00000020 = CONCAT71(in_stack_00000020._1_7_,uVar1);
      goto LAB_04a486dc;
    }
    uVar3 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar3 = FUN_074c4a14(uVar3,0);
    uVar4 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fea8,0);
    uVar5 = FUN_074ce748(uVar3,uVar4,0);
    if ((uVar5 & 1) != 0) goto LAB_04a48878;
    uVar3 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar3 = FUN_074c4a14(uVar3,0);
    uVar4 = FUN_074c4a14(*(long *)(unaff_x22 + 0x78) + 0x20,0);
    uVar5 = FUN_074ce748(uVar3,uVar4,0);
    if ((uVar5 & 1) == 0) {
      uVar3 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar3 = FUN_074c4a14(uVar3,0);
      uVar4 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe50,0);
      uVar5 = FUN_074ce748(uVar3,uVar4,0);
      if ((uVar5 & 1) != 0) goto LAB_04a48934;
      uVar3 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar3 = FUN_074c4a14(uVar3,0);
      uVar4 = FUN_074c4a14(*(long *)(unaff_x22 + 0x50) + 0x20,0);
      uVar5 = FUN_074ce748(uVar3,uVar4,0);
      if ((uVar5 & 1) == 0) {
        uVar3 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar3 = FUN_074c4a14(uVar3,0);
        uVar4 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe90,0);
        uVar5 = FUN_074ce748(uVar3,uVar4,0);
        if ((uVar5 & 1) != 0) goto LAB_04a489f0;
        uVar3 = **(undefined8 **)(unaff_x19 + 0x38);
        if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar3 = FUN_074c4a14(uVar3,0);
        uVar4 = FUN_074c4a14(*(long *)(unaff_x22 + 0x40) + 0x20,0);
        uVar5 = FUN_074ce748(uVar3,uVar4,0);
        if ((uVar5 & 1) == 0) {
          uVar3 = **(undefined8 **)(unaff_x19 + 0x38);
          if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar3 = FUN_074c4a14(uVar3,0);
          uVar4 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe70,0);
          uVar5 = FUN_074ce748(uVar3,uVar4,0);
          if ((uVar5 & 1) != 0) goto LAB_04a48aec;
          uVar3 = **(undefined8 **)(unaff_x19 + 0x38);
          if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar3 = FUN_074c4a14(uVar3,0);
          uVar4 = FUN_074c4a14(*(long *)(unaff_x22 + 0x70) + 0x20,0);
          uVar5 = FUN_074ce748(uVar3,uVar4,0);
          if ((uVar5 & 1) == 0) {
            uVar3 = **(undefined8 **)(unaff_x19 + 0x38);
            if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            uVar3 = FUN_074c4a14(uVar3,0);
            uVar4 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911feb0,0);
            uVar5 = FUN_074ce748(uVar3,uVar4,0);
            if ((uVar5 & 1) != 0) goto LAB_04a48bcc;
            uVar3 = **(undefined8 **)(unaff_x19 + 0x38);
            if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            uVar3 = FUN_074c4a14(uVar3,0);
            uVar4 = FUN_074c4a14(*(long *)(unaff_x22 + 0x30) + 0x20,0);
            uVar5 = FUN_074ce748(uVar3,uVar4,0);
            if ((uVar5 & 1) == 0) {
              uVar3 = **(undefined8 **)(unaff_x19 + 0x38);
              if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_03f6fea8();
              }
              uVar3 = FUN_074c4a14(uVar3,0);
              uVar4 = FUN_074c4a14(*(undefined8 *)PTR_DAT_0911fe80,0);
              uVar5 = FUN_074ce748(uVar3,uVar4,0);
              if ((uVar5 & 1) == 0) {
                thunk_FUN_03f786f8(&DAT_092c7648);
                FUN_0395b070();
                uVar3 = FUN_0775d89c(0);
                uVar1 = FUN_07772d00(&stack0x00000010,0);
                in_stack_00000020 = CONCAT71(in_stack_00000020._1_7_,uVar1);
                uVar4 = thunk_FUN_03f786f8(&DAT_092c43a0);
                uVar4 = thunk_FUN_03f4e2c4(uVar4,&stack0x00000020);
                uVar8 = **(undefined8 **)(unaff_x19 + 0x38);
                FUN_0395b070(*(undefined8 *)(PTR_DAT_0910b550 + 0xe0));
                uVar8 = FUN_074c4a14(uVar8,0);
                uVar3 = FUN_077594ec(uVar3,uVar4,uVar8,0);
                thunk_FUN_03f786f8(&DAT_092c3ef0);
                uVar4 = thunk_FUN_03f4e68c();
                auVar10 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer
                                    (uVar4,uVar3,0);
                if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f134f0(uVar4);
                }
                goto LAB_04a48d7c;
              }
            }
            uVar1 = FUN_077732ac(&stack0x00000010,0);
            uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
            in_stack_00000020 = CONCAT71(in_stack_00000020._1_7_,uVar1);
          }
          else {
LAB_04a48bcc:
            in_stack_00000020 = FUN_07773660(&stack0x00000010,0);
            uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
          }
        }
        else {
LAB_04a48aec:
          uVar2 = FUN_0777345c(&stack0x00000010,0);
          uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
          in_stack_00000020 = CONCAT62(in_stack_00000020._2_6_,uVar2);
        }
      }
      else {
LAB_04a489f0:
        uVar9 = FUN_07773568(&stack0x00000010,0);
        uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
        in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,uVar9);
      }
    }
    else {
LAB_04a48934:
      uVar9 = Sentry_Internal_Extensions_SentryJsonContext__get_Object(&stack0x00000010,0);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
      in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,uVar9);
    }
    uVar3 = thunk_FUN_03f4e2c4(uVar3,&stack0x00000020);
    lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f4b260(lVar7);
    }
    puVar6 = (undefined8 *)FUN_03951c9c(uVar3,lVar7);
    uVar3 = *puVar6;
  }
  else {
    uVar2 = FUN_077733cc(&stack0x00000010,0);
    in_stack_00000020 = CONCAT62(in_stack_00000020._2_6_,uVar2);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
LAB_04a486dc:
    uVar3 = thunk_FUN_03f4e2c4(uVar3,&stack0x00000020);
    lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f4b260(lVar7);
    }
    puVar6 = (undefined8 *)FUN_03951c9c(uVar3,lVar7);
    uVar3 = *puVar6;
  }
  auVar10._8_8_ = puVar6[1];
  auVar10._0_8_ = uVar3;
  if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
    return;
  }
LAB_04a48d7c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar10._0_8_,auVar10._8_8_);
}


