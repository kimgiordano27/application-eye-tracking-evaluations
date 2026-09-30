/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader$$ReadAsDateTime
ENTRY_POINT: 06714378
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_3;telemetry_or_network_hits_1
*/


void Newtonsoft_Json_JsonValidatingReader__ReadAsDateTime
               (long param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  uint unaff_w21;
  int unaff_w22;
  long unaff_x23;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  uStack0000000000000008 = param_4;
  uStack000000000000000c = param_3;
  if ((*(byte *)(unaff_x23 + 0x876) & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084a89f0);
    *(undefined1 *)(unaff_x23 + 0x876) = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03af1434(PTR_DAT_08491298);
    uVar7 = thunk_FUN_03ac74bc();
    uVar4 = thunk_FUN_03af1434(PTR_DAT_084912a0);
    uVar6 = thunk_FUN_03af1434(PTR_DAT_084a82b8);
    FUN_066b7574(uVar7,uVar4,uVar6,0);
  }
  else {
    if (unaff_w22 < 0) {
      thunk_FUN_03af1434(PTR_DAT_08491280);
      uVar7 = thunk_FUN_03ac74bc();
      puVar5 = PTR_DAT_084a0558;
    }
    else {
      if (-1 < (int)unaff_w21) {
        if (*(int *)(param_2 + 0x18) - unaff_w22 < (int)unaff_w21) {
          thunk_FUN_03af1434(PTR_DAT_08488490);
          uVar7 = thunk_FUN_03ac74bc();
          uVar4 = thunk_FUN_03af1434(PTR_DAT_084914a8);
          FUN_066b6070(uVar7,uVar4,0);
          goto LAB_06714650;
        }
        FUN_06712400(param_1);
        FUN_0671253c(param_1);
        iVar8 = *(int *)(param_1 + 0x44);
        if (iVar8 == 0) {
          FUN_06712e00(param_1);
          iVar8 = *(int *)(param_1 + 0x44);
        }
        if (((0x7fffffff < (long)((long)iVar8 + (ulong)unaff_w21)) ||
            (iVar1 = iVar8 + unaff_w21, 0x7fffffff < (long)((ulong)unaff_w21 + (long)iVar1))) ||
           (iVar2 = *(int *)(param_1 + 0x38), -1 < iVar2 + -0x40000000)) {
          uVar4 = FUN_03a8a9d0();
                    /* WARNING: Subroutine does not return */
          FUN_03a8a884(uVar4,*(undefined8 *)PTR_DAT_084a89f0);
        }
        if ((int)(iVar1 + unaff_w21) < iVar2 * 2) {
          FUN_0671410c(param_1,param_2,&stack0x0000000c,&stack0x00000008);
          if (*(int *)(param_1 + 0x38) <= *(int *)(param_1 + 0x44)) {
            plVar3 = *(long **)(param_1 + 0x28);
            if (plVar3 == (long *)0x0) goto LAB_06714668;
            (**(code **)(*plVar3 + 0x398))
                      (plVar3,*(undefined8 *)(param_1 + 0x30),0,*(int *)(param_1 + 0x44),
                       *(undefined8 *)(*plVar3 + 0x3a0));
            *(undefined4 *)(param_1 + 0x44) = 0;
            FUN_0671410c(param_1,param_2,&stack0x0000000c,&stack0x00000008);
          }
          return;
        }
        if (0 < iVar8) {
          if ((iVar1 < 0x14001) && (iVar1 <= iVar2 * 2)) {
            FUN_067125ac(param_1);
            FUN_0677df00(param_2,unaff_w22,*(undefined8 *)(param_1 + 0x30),
                         *(undefined4 *)(param_1 + 0x44),unaff_w21,0);
            plVar3 = *(long **)(param_1 + 0x28);
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x398))
                        (plVar3,*(undefined8 *)(param_1 + 0x30),0,iVar1,
                         *(undefined8 *)(*plVar3 + 0x3a0));
              *(undefined4 *)(param_1 + 0x44) = 0;
              return;
            }
            goto LAB_06714668;
          }
          plVar3 = *(long **)(param_1 + 0x28);
          if (plVar3 == (long *)0x0) goto LAB_06714668;
          (**(code **)(*plVar3 + 0x398))
                    (plVar3,*(undefined8 *)(param_1 + 0x30),0,iVar8,*(undefined8 *)(*plVar3 + 0x3a0)
                    );
          *(undefined4 *)(param_1 + 0x44) = 0;
        }
        plVar3 = *(long **)(param_1 + 0x28);
        if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x06714558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x398))
                    (plVar3,param_2,unaff_w22,unaff_w21,*(undefined8 *)(*plVar3 + 0x3a0));
          return;
        }
LAB_06714668:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      thunk_FUN_03af1434(PTR_DAT_08491280);
      uVar7 = thunk_FUN_03ac74bc();
      puVar5 = PTR_DAT_084912a8;
    }
    uVar4 = thunk_FUN_03af1434(puVar5);
    uVar6 = thunk_FUN_03af1434(PTR_DAT_08491498);
    System_Threading_CancellationToken__get_IsCancellationRequested(uVar7,uVar4,uVar6,0);
  }
LAB_06714650:
  uVar4 = thunk_FUN_03af1434(PTR_DAT_084a89f0);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar7,uVar4);
}


