/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$ParsePostValue
ENTRY_POINT: 01713cf0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonTextReader__ParsePostValue(void)

{
  bool bVar1;
  short sVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  uint unaff_w19;
  short unaff_w20;
  long *unaff_x21;
  int unaff_w23;
  int iVar8;
  undefined4 unaff_w24;
  undefined4 unaff_w25;
  undefined8 unaff_x26;
  long lVar9;
  int in_stack_00000060;
  
  if (unaff_w19 < *(uint *)(unaff_x21 + 3)) {
    lVar9 = unaff_x21[(long)(int)unaff_w19 + 4];
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_5755);
    if (lVar4 == 0) {
LAB_01713e40:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_017b46ec(lVar4,0);
    *(undefined8 *)(lVar4 + 0x10) = unaff_x26;
    *(undefined4 *)(lVar4 + 0x18) = unaff_w25;
    *(undefined4 *)(lVar4 + 0x1c) = unaff_w24;
    lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x21 + 0x40));
    if (lVar5 == 0) {
LAB_01713e48:
      uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar7,0);
    }
    if (unaff_w19 < *(uint *)(unaff_x21 + 3)) {
      unaff_x21[(long)(int)unaff_w19 + 4] = lVar4;
LAB_01713d58:
      do {
        iVar8 = unaff_w23;
        unaff_w23 = iVar8 + 1;
        if (0xc6 < unaff_w23) {
          return;
        }
        unaff_w19 = unaff_w19 + in_stack_00000060;
        if (0xc6 < (int)unaff_w19) {
          unaff_w19 = unaff_w19 - 199;
        }
        if (*(uint *)(unaff_x21 + 3) <= unaff_w19) break;
        lVar4 = unaff_x21[(long)(int)unaff_w19 + 4];
        if (lVar4 == 0) {
          bVar1 = false;
        }
        else {
          plVar6 = (long *)FUN_0170e360();
          if (plVar6 == (long *)0x0) goto LAB_01713e40;
          plVar6 = (long *)(**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
          if ((*(long *)(lVar4 + 0x10) == 0) ||
             (uVar3 = FUN_015fa29c(*(long *)(lVar4 + 0x10),0,0), plVar6 == (long *)0x0))
          goto LAB_01713e40;
          sVar2 = (**(code **)(*plVar6 + 0x1a8))(plVar6,uVar3,*(undefined8 *)(*plVar6 + 0x1b0));
          if (sVar2 != unaff_w20) goto LAB_01713d58;
          bVar1 = true;
        }
        if ((lVar9 != 0) &&
           (lVar5 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*unaff_x21 + 0x40)), lVar5 == 0))
        goto LAB_01713e48;
        if (*(uint *)(unaff_x21 + 3) <= unaff_w19) break;
        unaff_x21[(long)(int)unaff_w19 + 4] = lVar9;
        unaff_w23 = iVar8 + 1;
        lVar9 = lVar4;
        if (!bVar1) {
          return;
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


