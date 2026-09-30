/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$get_OnErrorCallbacks
ENTRY_POINT: 04f1dc9c
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


uint Newtonsoft_Json_Serialization_JsonContract__get_OnErrorCallbacks(undefined8 param_1)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  int *unaff_x19;
  long unaff_x25;
  long *unaff_x28;
  double dVar8;
  double dVar9;
  long *in_stack_00000080;
  int iStack0000000000000088;
  int iStack000000000000008c;
  byte in_stack_00000090;
  double in_stack_000000b8;
  
  uVar3 = FUN_04ed2fa0(param_1,0);
  if ((uVar3 >> 3 & 1) == 0) {
    if (*unaff_x19 < 100) {
      if (in_stack_00000080 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      iVar4 = (**(code **)(*in_stack_00000080 + 0x318))
                        (in_stack_00000080,*unaff_x19,*(undefined8 *)(*in_stack_00000080 + 800));
      *unaff_x19 = iVar4;
      goto LAB_04f1dcd0;
    }
    goto LAB_04f1dc54;
  }
LAB_04f1dcd0:
  if ((in_stack_00000090 & 1) == 0) {
    if (iStack000000000000008c == 1) {
      if (unaff_x19[3] < 0xc) goto LAB_04f1dc54;
    }
    else if ((iStack000000000000008c == 0) && (0xb < unaff_x19[3])) goto LAB_04f1dc54;
LAB_04f1dd54:
    if ((*unaff_x19 == -1) && (unaff_x19[1] == -1)) {
      bVar2 = unaff_x19[2] == -1;
    }
    else {
      bVar2 = false;
    }
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar6 = Newtonsoft_Json_Serialization_DefaultContractResolver_<>c__DisplayClass80_0__<CreateShouldSerializeTest>b__0
                      ();
    if ((uVar6 & 1) != 0) {
      if (bVar2) {
LAB_04f1ddcc:
        if (in_stack_00000080 == (long *)0x0) goto LAB_04f1df70;
        uVar6 = (**(code **)(*in_stack_00000080 + 0x2b8))
                          (in_stack_00000080,*unaff_x19,unaff_x19[1],unaff_x19[2],unaff_x19[3],
                           unaff_x19[4],unaff_x19[5],0);
        if ((uVar6 & 1) != 0) {
          dVar9 = *(double *)(unaff_x19 + 6);
          if (0.0 < dVar9) {
            if (*(int *)(*(long *)PTR_DAT_065c8d28 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            dVar9 = dVar9 * DAT_0137e770;
            dVar8 = modf(dVar9,&stack0x000000b8);
            if (0.0 <= dVar9) {
              if (dVar8 == 0.5) {
                dVar9 = 1.0;
                goto LAB_04f1de98;
              }
              dVar8 = (double)(long)(dVar9 + 0.5);
            }
            else if (dVar8 == -0.5) {
              dVar9 = -1.0;
LAB_04f1de98:
              dVar8 = in_stack_000000b8;
              if (((long)in_stack_000000b8 & 1U) != 0) {
                dVar8 = in_stack_000000b8 + dVar9;
              }
            }
            else {
              dVar8 = (double)(long)(dVar9 + -0.5);
            }
            if (*(int *)(*(long *)PTR_DAT_065c9598 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            lVar1 = -0x8000000000000000;
            if (dVar8 != INFINITY) {
              lVar1 = (long)dVar8;
            }
            uVar7 = FUN_04f104a0(unaff_x19 + 0xe,lVar1);
            *(undefined8 *)(unaff_x19 + 0xe) = uVar7;
          }
          iVar4 = iStack0000000000000088;
          if (iStack0000000000000088 != -1) {
            if (in_stack_00000080 == (long *)0x0) {
LAB_04f1df70:
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c7c();
            }
            iVar5 = (**(code **)(*in_stack_00000080 + 0x1f8))
                              (in_stack_00000080,*(undefined8 *)(unaff_x19 + 0xe),
                               *(undefined8 *)(*in_stack_00000080 + 0x200));
            if (iVar4 != iVar5) goto LAB_04f1df5c;
          }
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar3 = FUN_04f2355c(&stack0x00000020);
          goto LAB_04f1dc64;
        }
      }
      else {
        if (unaff_x25 == 0) goto LAB_04f1df70;
        uVar6 = FUN_04ed4478();
        if (((uVar6 & 1) == 0) || (uVar6 = FUN_04ed44a0(), (uVar6 & 1) != 0)) goto LAB_04f1ddcc;
      }
LAB_04f1df5c:
      FUN_04f290dc();
    }
  }
  else {
    if (iStack000000000000008c == -1) {
      iStack000000000000008c = 0;
      iVar4 = unaff_x19[3];
      if (iVar4 < 0xd) goto LAB_04f1dd4c;
    }
    else {
      iVar4 = unaff_x19[3];
      if (iVar4 < 0xd) {
        if (iStack000000000000008c != 0) {
          if (iVar4 != 0xc) {
            iVar4 = iVar4 + 0xc;
          }
          unaff_x19[3] = iVar4;
          goto LAB_04f1dd54;
        }
LAB_04f1dd4c:
        if (iVar4 == 0xc) {
          unaff_x19[3] = 0;
        }
        goto LAB_04f1dd54;
      }
    }
LAB_04f1dc54:
    FUN_04f2908c();
  }
  uVar3 = 0;
LAB_04f1dc64:
  return uVar3 & 1;
}


