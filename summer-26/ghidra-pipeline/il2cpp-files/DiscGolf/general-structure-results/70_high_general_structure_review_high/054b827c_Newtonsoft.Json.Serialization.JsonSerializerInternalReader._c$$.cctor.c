/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$.cctor
ENTRY_POINT: 054b827c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c___cctor
               (long *param_1,long param_2,int param_3,uint param_4,uint param_5,ulong param_6,
               byte param_7,undefined4 param_8,undefined8 param_9,uint param_10)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  long unaff_x28;
  undefined4 uStack000000000000000c;
  
  puVar1 = PTR_DAT_06a21830;
  puVar8 = PTR_DAT_06a19928;
                    /* try { // try from 054b828c to 055b828f has its CatchHandler @ 054b829c */
  uVar11 = param_6 & 0xffffffff;
                    /* catch() { ... } // from try @ 054b828c with catch @ 054b829c */
                    /* try { // try from 054b82a0 to 055b82a7 has its CatchHandler @ 054b82b0 */
                    /* try { // try from 054b82a8 to 055b82b3 has its CatchHandler @ 054b7f88 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 054b82a0 with catch @ 054b82b0
                        */
  if ((*(byte *)(unaff_x28 + 0xce9) & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a18a98);
    FUN_02d965b8(PTR_DAT_06a0f540);
    FUN_02d965b8(PTR_DAT_06a21838);
    FUN_02d965b8(PTR_DAT_06a19928);
    FUN_02d965b8(PTR_DAT_06a21830);
    *(undefined1 *)(unaff_x28 + 0xce9) = 1;
  }
  uStack000000000000000c = 0;
  plVar12 = param_1 + 6;
  *plVar12 = *(long *)puVar1;
  LeanTween__value(plVar12);
  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_0552d150(param_1,0);
  if (param_2 == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar10 = thunk_FUN_02dd3144();
    uVar7 = thunk_FUN_02dfd288(PTR_DAT_06a0dcf8);
    FUN_0544bf54(uVar10,uVar7,0);
    goto LAB_054b8950;
  }
  if (*(int *)(param_2 + 0x10) == 0) {
    thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
    uVar10 = thunk_FUN_02dd3144();
    puVar8 = PTR_DAT_06a21868;
LAB_054b87a4:
    uVar7 = thunk_FUN_02dfd288(puVar8);
    FUN_05452924(uVar10,uVar7,0);
  }
  else {
    *(byte *)((long)param_1 + 0x57) = param_7 & 1;
    puVar8 = PTR_DAT_06a0f540;
    if ((int)param_6 < 1) {
      thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
      uVar10 = thunk_FUN_02dd3144();
      uVar7 = thunk_FUN_02dfd288(PTR_DAT_06a0f708);
      puVar8 = PTR_DAT_06a1dd30;
    }
    else {
      if (param_3 - 1U < 6) {
        if (param_4 - 1 < 3) {
          if ((param_5 & 0xffffffef) < 8) {
            lVar4 = *(long *)PTR_DAT_06a0f540;
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar4 = *(long *)puVar8;
            }
            iVar3 = FUN_05372478(param_2,**(undefined8 **)(lVar4 + 0xb8),0);
            if (iVar3 == -1) {
              if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              lVar4 = FUN_054b89b0(param_2);
              uVar5 = FUN_054a5e0c(lVar4,0);
              if ((uVar5 & 1) != 0) {
                uVar7 = thunk_FUN_02dfd288(PTR_DAT_06a18378);
                uVar7 = FUN_0534f230(uVar7,0);
                uVar10 = FUN_054b902c(param_1,lVar4,0);
                uVar7 = FUN_0536388c(uVar7,uVar10,0);
                thunk_FUN_02dfd288(PTR_DAT_06a18330);
                uVar10 = thunk_FUN_02dd3144();
                FUN_05506a50(uVar10,uVar7,0);
FUN_054b88f4:
                uVar7 = thunk_FUN_02dfd288(PTR_DAT_06a218a8);
                    /* WARNING: Subroutine does not return */
                FUN_02d96724(uVar10,uVar7);
              }
              if ((param_3 != 6) || ((param_4 & 1) == 0)) {
                if ((1 < param_4) || (param_3 - 3U < 2)) {
                  FUN_05392b94(0);
                  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  lVar6 = FUN_054b90d4(lVar4);
                  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  if (0 < *(int *)(lVar6 + 0x10)) {
                    if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    uVar7 = FUN_054a7674(lVar6);
                    uVar5 = FUN_054a5e0c(uVar7,0);
                    if ((uVar5 & 1) == 0) {
                      uVar7 = thunk_FUN_02dfd288(PTR_DAT_06a218a0);
                      uVar7 = FUN_0534f230(uVar7,0);
                      if ((param_7 & 1) == 0) {
                        lVar6 = thunk_FUN_02dfd288(PTR_DAT_06a0f540);
                        if (*(int *)(lVar6 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                        }
                        lVar6 = FUN_054a7674(lVar4);
                      }
                      uVar7 = FUN_0536388c(uVar7,lVar6,0);
                      thunk_FUN_02dfd288(PTR_DAT_06a18310);
                      uVar10 = thunk_FUN_02dd3144();
                      FUN_0549afa4(uVar10,uVar7,0);
                      goto FUN_054b88f4;
                    }
                  }
                  puVar8 = PTR_DAT_06a18a98;
                  if ((param_7 & 1) == 0) {
                    *plVar12 = lVar4;
                    LeanTween__value(plVar12,lVar4);
                  }
                  puVar1 = PTR_DAT_06a19928;
                  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  lVar6 = FUN_054b944c(lVar4,param_3,param_4,param_5 & 0xffffffef,param_8,
                                       &stack0x0000000c);
                  if (lVar6 != **(long **)(*(long *)puVar8 + 0xb8)) {
                    lVar4 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a21838);
                    FUN_053699d0(lVar4,lVar6,0,0);
                    plVar12 = param_1 + 7;
                    *plVar12 = lVar4;
                    LeanTween__value(plVar12,lVar4);
                    lVar4 = *(long *)puVar8;
                    lVar6 = *plVar12;
                    *(uint *)(param_1 + 10) = param_4;
                    iVar3 = *(int *)(lVar4 + 0xe4);
                    *(undefined1 *)((long)param_1 + 0x54) = 1;
                    if (iVar3 == 0) {
                      thunk_FUN_02df485c();
                    }
                    iVar3 = FUN_054b9c74(lVar6,&stack0x0000000c);
                    *(bool *)((long)param_1 + 0x56) = iVar3 == 1;
                    *(byte *)((long)param_1 + 0x55) = iVar3 == 1 & (byte)((uint)param_8 >> 0x1e);
                    if (((param_4 == 1) && ((int)param_6 == 0x1000)) && (iVar3 == 1)) {
                      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      uVar11 = (**(code **)(*param_1 + 0x1e8))
                                         (param_1,*(undefined8 *)(*param_1 + 0x1f0));
                      if ((long)uVar11 < 0x1000) {
                        if ((long)uVar11 < 0x3e9) {
                          uVar11 = 1000;
                        }
                      }
                      else {
                        uVar11 = 0x1000;
                      }
                    }
                    FUN_054b9da8(param_1,uVar11 & 0xffffffff,0);
                    if (param_3 == 6) {
                      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      (**(code **)(*param_1 + 0x338))(param_1,0,2,*(undefined8 *)(*param_1 + 0x340))
                      ;
                      lVar4 = (**(code **)(*param_1 + 0x1f8))
                                        (param_1,*(undefined8 *)(*param_1 + 0x200));
                    }
                    else {
                      lVar4 = 0;
                    }
                    param_1[9] = lVar4;
                    return;
                  }
                  uVar7 = FUN_054b94e8(param_1,lVar4);
                  uVar2 = uStack000000000000000c;
                  thunk_FUN_02dfd288(PTR_DAT_06a18a98);
                  FUN_0297e1b4();
                  uVar10 = FUN_054b956c(uVar7,uVar2);
                  goto LAB_054b8950;
                }
                uVar7 = thunk_FUN_02dfd288(PTR_DAT_06a21888);
                uVar7 = FUN_0534f230(uVar7,0);
                param_10 = param_4;
                uVar10 = thunk_FUN_02dfd288(PTR_DAT_06a21890);
                uVar10 = thunk_FUN_02dd2d7c(uVar10,&param_10);
                param_9._4_4_ = param_3;
                uVar9 = thunk_FUN_02dfd288(PTR_DAT_06a21898);
                uVar9 = thunk_FUN_02dd2d7c(uVar9,(long)&param_9 + 4);
                uVar7 = FUN_0536e0dc(uVar7,uVar10,uVar9,0);
                thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
                uVar10 = thunk_FUN_02dd3144();
                FUN_05452924(uVar10,uVar7,0);
                goto FUN_054b88f4;
              }
              thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
              uVar10 = thunk_FUN_02dd3144();
              puVar8 = PTR_DAT_06a21880;
            }
            else {
              thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
              uVar10 = thunk_FUN_02dd3144();
              puVar8 = PTR_DAT_06a21878;
            }
            goto LAB_054b87a4;
          }
          thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
          uVar10 = thunk_FUN_02dd3144();
          puVar8 = PTR_DAT_06a21870;
        }
        else {
          thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
          uVar10 = thunk_FUN_02dd3144();
          puVar8 = PTR_DAT_06a210b8;
        }
      }
      else {
        if ((param_7 & 1) != 0) {
          thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
          uVar10 = thunk_FUN_02dd3144();
          uVar7 = thunk_FUN_02dfd288(PTR_DAT_06a1abe0);
          uVar9 = thunk_FUN_02dfd288(PTR_DAT_06a210c0);
          FUN_0544bfcc(uVar10,uVar7,uVar9,0);
          goto LAB_054b8950;
        }
        thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
        uVar10 = thunk_FUN_02dd3144();
        puVar8 = PTR_DAT_06a1abe0;
      }
      uVar7 = thunk_FUN_02dfd288(puVar8);
      puVar8 = PTR_DAT_06a210c0;
    }
    uVar9 = thunk_FUN_02dfd288(puVar8);
    FUN_0544f840(uVar10,uVar7,uVar9,0);
  }
LAB_054b8950:
  uVar7 = thunk_FUN_02dfd288(PTR_DAT_06a218a8);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar10,uVar7);
}


