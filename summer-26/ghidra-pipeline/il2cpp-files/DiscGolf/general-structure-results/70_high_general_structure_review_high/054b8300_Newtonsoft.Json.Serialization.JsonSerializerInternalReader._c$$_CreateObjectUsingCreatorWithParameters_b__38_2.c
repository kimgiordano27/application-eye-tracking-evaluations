/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$<CreateObjectUsingCreatorWithParameters>b__38_2
ENTRY_POINT: 054b8300
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__<CreateObjectUsingCreatorWithParameters>b__38_2
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long *unaff_x19;
  int unaff_w20;
  int unaff_w21;
  uint unaff_w22;
  undefined4 unaff_w23;
  byte unaff_w24;
  long unaff_x25;
  undefined8 *puVar11;
  long unaff_x26;
  long *plVar12;
  uint unaff_w27;
  long *unaff_x29;
  uint in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  uStack000000000000000c = 0;
  puVar11 = (undefined8 *)(unaff_x25 + 0x30);
  *puVar11 = param_2;
  LeanTween__value(puVar11);
  if (*(int *)(*unaff_x29 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_0552d150();
  if (unaff_x26 == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar7 = thunk_FUN_02dd3144();
    uVar4 = thunk_FUN_02dfd288(PTR_DAT_06a0dcf8);
    FUN_0544bf54(uVar7,uVar4,0);
    goto LAB_054b8950;
  }
  if (*(int *)(unaff_x26 + 0x10) == 0) {
    thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
    uVar7 = thunk_FUN_02dd3144();
    puVar9 = PTR_DAT_06a21868;
LAB_054b87a4:
    uVar4 = thunk_FUN_02dfd288(puVar9);
    FUN_05452924(uVar7,uVar4,0);
  }
  else {
    *(byte *)((long)unaff_x19 + 0x57) = unaff_w24 & 1;
    puVar9 = PTR_DAT_06a0f540;
    if (unaff_w21 < 1) {
      thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
      uVar7 = thunk_FUN_02dd3144();
      uVar4 = thunk_FUN_02dfd288(PTR_DAT_06a0f708);
      puVar9 = PTR_DAT_06a1dd30;
    }
    else {
      if (unaff_w20 - 1U < 6) {
        if (unaff_w22 - 1 < 3) {
          if ((unaff_w27 & 0xffffffef) < 8) {
            if (*(int *)(*(long *)PTR_DAT_06a0f540 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            iVar3 = FUN_05372478();
            if (iVar3 == -1) {
              if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar4 = FUN_054b89b0();
              uVar5 = FUN_054a5e0c(uVar4,0);
              if ((uVar5 & 1) != 0) {
                uVar4 = thunk_FUN_02dfd288(PTR_DAT_06a18378);
                uVar4 = FUN_0534f230(uVar4,0);
                uVar7 = FUN_054b902c();
                uVar4 = FUN_0536388c(uVar4,uVar7,0);
                thunk_FUN_02dfd288(PTR_DAT_06a18330);
                uVar7 = thunk_FUN_02dd3144();
                FUN_05506a50(uVar7,uVar4,0);
FUN_054b88f4:
                uVar4 = thunk_FUN_02dfd288(PTR_DAT_06a218a8);
                    /* WARNING: Subroutine does not return */
                FUN_02d96724(uVar7,uVar4);
              }
              if ((unaff_w20 != 6) || ((unaff_w22 & 1) == 0)) {
                if ((1 < unaff_w22) || (unaff_w20 - 3U < 2)) {
                  FUN_05392b94(0);
                  if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  lVar6 = FUN_054b90d4(uVar4);
                  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  if (0 < *(int *)(lVar6 + 0x10)) {
                    if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    uVar7 = FUN_054a7674(lVar6);
                    uVar5 = FUN_054a5e0c(uVar7,0);
                    if ((uVar5 & 1) == 0) {
                      uVar7 = thunk_FUN_02dfd288(PTR_DAT_06a218a0);
                      uVar7 = FUN_0534f230(uVar7,0);
                      if ((unaff_w24 & 1) == 0) {
                        lVar6 = thunk_FUN_02dfd288(PTR_DAT_06a0f540);
                        if (*(int *)(lVar6 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                        }
                        lVar6 = FUN_054a7674(uVar4);
                      }
                      uVar4 = FUN_0536388c(uVar7,lVar6,0);
                      thunk_FUN_02dfd288(PTR_DAT_06a18310);
                      uVar7 = thunk_FUN_02dd3144();
                      FUN_0549afa4(uVar7,uVar4,0);
                      goto FUN_054b88f4;
                    }
                  }
                  puVar9 = PTR_DAT_06a18a98;
                  if ((unaff_w24 & 1) == 0) {
                    *puVar11 = uVar4;
                    LeanTween__value(puVar11,uVar4);
                  }
                  puVar1 = PTR_DAT_06a19928;
                  if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  lVar6 = FUN_054b944c(uVar4,unaff_w20,unaff_w22,unaff_w27 & 0xffffffef,unaff_w23,
                                       &stack0x0000000c);
                  if (lVar6 != **(long **)(*(long *)puVar9 + 0xb8)) {
                    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a21838);
                    FUN_053699d0(lVar8,lVar6,0,0);
                    plVar12 = unaff_x19 + 7;
                    *plVar12 = lVar8;
                    LeanTween__value(plVar12,lVar8);
                    lVar6 = *(long *)puVar9;
                    lVar8 = *plVar12;
                    *(uint *)(unaff_x19 + 10) = unaff_w22;
                    iVar3 = *(int *)(lVar6 + 0xe4);
                    *(undefined1 *)((long)unaff_x19 + 0x54) = 1;
                    if (iVar3 == 0) {
                      thunk_FUN_02df485c();
                    }
                    iVar3 = FUN_054b9c74(lVar8,&stack0x0000000c);
                    *(bool *)((long)unaff_x19 + 0x56) = iVar3 == 1;
                    *(byte *)((long)unaff_x19 + 0x55) = iVar3 == 1 & (byte)((uint)unaff_w23 >> 0x1e)
                    ;
                    if (((unaff_w22 == 1) && (unaff_w21 == 0x1000)) && (iVar3 == 1)) {
                      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      (**(code **)(*unaff_x19 + 0x1e8))();
                    }
                    FUN_054b9da8();
                    if (unaff_w20 == 6) {
                      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      (**(code **)(*unaff_x19 + 0x338))();
                      lVar6 = (**(code **)(*unaff_x19 + 0x1f8))();
                    }
                    else {
                      lVar6 = 0;
                    }
                    unaff_x19[9] = lVar6;
                    return;
                  }
                  uVar4 = FUN_054b94e8();
                  uVar2 = uStack000000000000000c;
                  thunk_FUN_02dfd288(PTR_DAT_06a18a98);
                  FUN_0297e1b4();
                  uVar7 = FUN_054b956c(uVar4,uVar2);
                  goto LAB_054b8950;
                }
                uVar4 = thunk_FUN_02dfd288(PTR_DAT_06a21888);
                uVar4 = FUN_0534f230(uVar4,0);
                in_stack_00000008 = unaff_w22;
                uVar7 = thunk_FUN_02dfd288(PTR_DAT_06a21890);
                uVar7 = thunk_FUN_02dd2d7c(uVar7,&stack0x00000008);
                uVar10 = thunk_FUN_02dfd288(PTR_DAT_06a21898);
                uVar10 = thunk_FUN_02dd2d7c(uVar10,&stack0x00000004);
                uVar4 = FUN_0536e0dc(uVar4,uVar7,uVar10,0);
                thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
                uVar7 = thunk_FUN_02dd3144();
                FUN_05452924(uVar7,uVar4,0);
                goto FUN_054b88f4;
              }
              thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
              uVar7 = thunk_FUN_02dd3144();
              puVar9 = PTR_DAT_06a21880;
            }
            else {
              thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
              uVar7 = thunk_FUN_02dd3144();
              puVar9 = PTR_DAT_06a21878;
            }
            goto LAB_054b87a4;
          }
          thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
          uVar7 = thunk_FUN_02dd3144();
          puVar9 = PTR_DAT_06a21870;
        }
        else {
          thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
          uVar7 = thunk_FUN_02dd3144();
          puVar9 = PTR_DAT_06a210b8;
        }
      }
      else {
        if ((unaff_w24 & 1) != 0) {
          thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
          uVar7 = thunk_FUN_02dd3144();
          uVar4 = thunk_FUN_02dfd288(PTR_DAT_06a1abe0);
          uVar10 = thunk_FUN_02dfd288(PTR_DAT_06a210c0);
          FUN_0544bfcc(uVar7,uVar4,uVar10,0);
          goto LAB_054b8950;
        }
        thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
        uVar7 = thunk_FUN_02dd3144();
        puVar9 = PTR_DAT_06a1abe0;
      }
      uVar4 = thunk_FUN_02dfd288(puVar9);
      puVar9 = PTR_DAT_06a210c0;
    }
    uVar10 = thunk_FUN_02dfd288(puVar9);
    FUN_0544f840(uVar7,uVar4,uVar10,0);
  }
LAB_054b8950:
  uVar4 = thunk_FUN_02dfd288(PTR_DAT_06a218a8);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar7,uVar4);
}


