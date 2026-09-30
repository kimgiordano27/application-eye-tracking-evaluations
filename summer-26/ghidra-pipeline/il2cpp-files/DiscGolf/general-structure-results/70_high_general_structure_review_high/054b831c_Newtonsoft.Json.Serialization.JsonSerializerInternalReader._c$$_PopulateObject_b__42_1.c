/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$<PopulateObject>b__42_1
ENTRY_POINT: 054b831c
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__<PopulateObject>b__42_1(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *unaff_x19;
  int unaff_w20;
  int unaff_w21;
  uint unaff_w22;
  undefined4 unaff_w23;
  byte unaff_w24;
  undefined8 *unaff_x25;
  long unaff_x26;
  long *plVar10;
  uint unaff_w27;
  uint uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  thunk_FUN_02df485c();
  FUN_0552d150();
  if (unaff_x26 == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar6 = thunk_FUN_02dd3144();
    uVar3 = thunk_FUN_02dfd288(PTR_DAT_06a0dcf8);
    FUN_0544bf54(uVar6,uVar3,0);
    goto LAB_054b8950;
  }
  if (*(int *)(unaff_x26 + 0x10) == 0) {
    thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
    uVar6 = thunk_FUN_02dd3144();
    puVar8 = PTR_DAT_06a21868;
LAB_054b87a4:
    uVar3 = thunk_FUN_02dfd288(puVar8);
    FUN_05452924(uVar6,uVar3,0);
  }
  else {
    *(byte *)((long)unaff_x19 + 0x57) = unaff_w24 & 1;
    puVar8 = PTR_DAT_06a0f540;
    if (unaff_w21 < 1) {
      thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
      uVar6 = thunk_FUN_02dd3144();
      uVar3 = thunk_FUN_02dfd288(PTR_DAT_06a0f708);
      puVar8 = PTR_DAT_06a1dd30;
    }
    else {
      if (unaff_w20 - 1U < 6) {
        if (unaff_w22 - 1 < 3) {
          if ((unaff_w27 & 0xffffffef) < 8) {
            if (*(int *)(*(long *)PTR_DAT_06a0f540 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            iVar2 = FUN_05372478();
            if (iVar2 == -1) {
              if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar3 = FUN_054b89b0();
              uVar4 = FUN_054a5e0c(uVar3,0);
              if ((uVar4 & 1) != 0) {
                uVar3 = thunk_FUN_02dfd288(PTR_DAT_06a18378);
                uVar3 = FUN_0534f230(uVar3,0);
                uVar6 = FUN_054b902c();
                uVar3 = FUN_0536388c(uVar3,uVar6,0);
                thunk_FUN_02dfd288(PTR_DAT_06a18330);
                uVar6 = thunk_FUN_02dd3144();
                FUN_05506a50(uVar6,uVar3,0);
FUN_054b88f4:
                uVar3 = thunk_FUN_02dfd288(PTR_DAT_06a218a8);
                    /* WARNING: Subroutine does not return */
                FUN_02d96724(uVar6,uVar3);
              }
              if ((unaff_w20 != 6) || ((unaff_w22 & 1) == 0)) {
                if ((1 < unaff_w22) || (unaff_w20 - 3U < 2)) {
                  FUN_05392b94(0);
                  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  lVar5 = FUN_054b90d4(uVar3);
                  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  if (0 < *(int *)(lVar5 + 0x10)) {
                    if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    uVar6 = FUN_054a7674(lVar5);
                    uVar4 = FUN_054a5e0c(uVar6,0);
                    if ((uVar4 & 1) == 0) {
                      uVar6 = thunk_FUN_02dfd288(PTR_DAT_06a218a0);
                      uVar6 = FUN_0534f230(uVar6,0);
                      if ((unaff_w24 & 1) == 0) {
                        lVar5 = thunk_FUN_02dfd288(PTR_DAT_06a0f540);
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                        }
                        lVar5 = FUN_054a7674(uVar3);
                      }
                      uVar3 = FUN_0536388c(uVar6,lVar5,0);
                      thunk_FUN_02dfd288(PTR_DAT_06a18310);
                      uVar6 = thunk_FUN_02dd3144();
                      FUN_0549afa4(uVar6,uVar3,0);
                      goto FUN_054b88f4;
                    }
                  }
                  puVar8 = PTR_DAT_06a18a98;
                  if ((unaff_w24 & 1) == 0) {
                    *unaff_x25 = uVar3;
                    LeanTween__value();
                  }
                  puVar1 = PTR_DAT_06a19928;
                  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  lVar5 = FUN_054b944c(uVar3,unaff_w20,unaff_w22,unaff_w27 & 0xffffffef,unaff_w23,
                                       (long)&stack0x00000008 + 4);
                  if (lVar5 != **(long **)(*(long *)puVar8 + 0xb8)) {
                    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a21838);
                    FUN_053699d0(lVar7,lVar5,0,0);
                    plVar10 = unaff_x19 + 7;
                    *plVar10 = lVar7;
                    LeanTween__value(plVar10,lVar7);
                    lVar5 = *(long *)puVar8;
                    lVar7 = *plVar10;
                    *(uint *)(unaff_x19 + 10) = unaff_w22;
                    iVar2 = *(int *)(lVar5 + 0xe4);
                    *(undefined1 *)((long)unaff_x19 + 0x54) = 1;
                    if (iVar2 == 0) {
                      thunk_FUN_02df485c();
                    }
                    iVar2 = FUN_054b9c74(lVar7,(long)&stack0x00000008 + 4);
                    *(bool *)((long)unaff_x19 + 0x56) = iVar2 == 1;
                    *(byte *)((long)unaff_x19 + 0x55) = iVar2 == 1 & (byte)((uint)unaff_w23 >> 0x1e)
                    ;
                    if (((unaff_w22 == 1) && (unaff_w21 == 0x1000)) && (iVar2 == 1)) {
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
                      lVar5 = (**(code **)(*unaff_x19 + 0x1f8))();
                    }
                    else {
                      lVar5 = 0;
                    }
                    unaff_x19[9] = lVar5;
                    return;
                  }
                  uVar3 = FUN_054b94e8();
                  thunk_FUN_02dfd288(PTR_DAT_06a18a98);
                  FUN_0297e1b4();
                  uVar6 = FUN_054b956c(uVar3,uStack000000000000000c);
                  goto LAB_054b8950;
                }
                uVar3 = thunk_FUN_02dfd288(PTR_DAT_06a21888);
                uVar3 = FUN_0534f230(uVar3,0);
                uStack0000000000000008 = unaff_w22;
                uVar6 = thunk_FUN_02dfd288(PTR_DAT_06a21890);
                uVar6 = thunk_FUN_02dd2d7c(uVar6,&stack0x00000008);
                uVar9 = thunk_FUN_02dfd288(PTR_DAT_06a21898);
                uVar9 = thunk_FUN_02dd2d7c(uVar9,&stack0x00000004);
                uVar3 = FUN_0536e0dc(uVar3,uVar6,uVar9,0);
                thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
                uVar6 = thunk_FUN_02dd3144();
                FUN_05452924(uVar6,uVar3,0);
                goto FUN_054b88f4;
              }
              thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
              uVar6 = thunk_FUN_02dd3144();
              puVar8 = PTR_DAT_06a21880;
            }
            else {
              thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
              uVar6 = thunk_FUN_02dd3144();
              puVar8 = PTR_DAT_06a21878;
            }
            goto LAB_054b87a4;
          }
          thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
          uVar6 = thunk_FUN_02dd3144();
          puVar8 = PTR_DAT_06a21870;
        }
        else {
          thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
          uVar6 = thunk_FUN_02dd3144();
          puVar8 = PTR_DAT_06a210b8;
        }
      }
      else {
        if ((unaff_w24 & 1) != 0) {
          thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
          uVar6 = thunk_FUN_02dd3144();
          uVar3 = thunk_FUN_02dfd288(PTR_DAT_06a1abe0);
          uVar9 = thunk_FUN_02dfd288(PTR_DAT_06a210c0);
          FUN_0544bfcc(uVar6,uVar3,uVar9,0);
          goto LAB_054b8950;
        }
        thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
        uVar6 = thunk_FUN_02dd3144();
        puVar8 = PTR_DAT_06a1abe0;
      }
      uVar3 = thunk_FUN_02dfd288(puVar8);
      puVar8 = PTR_DAT_06a210c0;
    }
    uVar9 = thunk_FUN_02dfd288(puVar8);
    FUN_0544f840(uVar6,uVar3,uVar9,0);
  }
LAB_054b8950:
  uVar3 = thunk_FUN_02dfd288(PTR_DAT_06a218a8);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar6,uVar3);
}


