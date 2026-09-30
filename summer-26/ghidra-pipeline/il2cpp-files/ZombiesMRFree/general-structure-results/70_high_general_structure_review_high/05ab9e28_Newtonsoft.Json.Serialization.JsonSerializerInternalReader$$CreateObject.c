/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateObject
ENTRY_POINT: 05ab9e28
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05ab9bd8) */

undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateObject(void)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar9 [16];
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
code_r0x05ab9e28:
  do {
    FUN_0597ff74();
    do {
      while( true ) {
        unaff_w23 = unaff_w23 + 1;
        iVar3 = (**(code **)(*unaff_x22 + 0x178))();
        if (iVar3 <= unaff_w23) {
          return 1;
        }
        plVar4 = (long *)(**(code **)(*unaff_x22 + 0x188))();
        if (plVar4 == (long *)0x0) goto LAB_05ab9e84;
        uVar5 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
        uVar6 = FUN_05a25488(uVar5,0,0);
        if ((uVar6 & 1) == 0) break;
        FUN_05b369cc(0);
        if (unaff_x21 == 0) goto LAB_05ab9e84;
        FUN_0597e018();
        FUN_0597e018();
        if (plVar4[8] == 0) {
          in_stack_00000010 = plVar4[3];
          thunk_FUN_0301043c(*unaff_x28,&stack0x00000010);
          in_stack_00000008._4_4_ =
               (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
          thunk_FUN_0301043c(*unaff_x29,(long)&stack0x00000008 + 4);
          goto code_r0x05ab9e28;
        }
        FUN_0597e018();
      }
      (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
      FUN_05ab9e88();
    } while (in_stack_00000028._4_1_ != '\0');
    iVar3 = (**(code **)(*plVar4 + 0x198))(plVar4,*(undefined8 *)(*plVar4 + 0x1a0));
    if (iVar3 == -1) {
      in_stack_00000010 = plVar4[3];
      thunk_FUN_0301043c(*unaff_x28,&stack0x00000010);
      in_stack_00000008._4_4_ =
           (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      thunk_FUN_0301043c(*unaff_x29,(long)&stack0x00000008 + 4);
      if (unaff_x21 == 0) goto LAB_05ab9e84;
      FUN_0597ff74();
      if ((int)plVar4[4] != 0xffffff) {
        in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,(int)plVar4[4]);
        thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f7a4f0,&stack0x00000010);
        goto LAB_05ab9cd8;
      }
    }
    else {
      uVar2 = (**(code **)(*plVar4 + 0x198))(plVar4,*(undefined8 *)(*plVar4 + 0x1a0));
      in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,uVar2);
      thunk_FUN_0301043c(*unaff_x29,&stack0x00000010);
      if (unaff_x21 == 0) goto LAB_05ab9e84;
LAB_05ab9cd8:
      FUN_0597f400();
    }
    lVar7 = FUN_05ab8fc4(plVar4);
    if (lVar7 == 0) goto LAB_05ab9e84;
    sVar1 = FUN_0596d0e4(lVar7,0,0);
    if (sVar1 == 0x3c) {
      plVar8 = (long *)(**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
      if (plVar8 == (long *)0x0) {
LAB_05ab9e84:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      plVar8 = (long *)(**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
      if (plVar8 == (long *)0x0) goto LAB_05ab9e84;
      auVar9 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
      _in_stack_00000018 = auVar9;
      uVar5 = thunk_FUN_05ae9514(&stack0x00000018,*(undefined8 *)PTR_DAT_06fa13b8,0);
      lVar7 = FUN_05ab9908();
      iVar3 = (**(code **)(*plVar4 + 0x198))(plVar4,*(undefined8 *)(*plVar4 + 0x1a0));
      if ((lVar7 == 0) || (iVar3 != -1)) {
        FUN_059693f4(*(undefined8 *)PTR_DAT_06fac4d0,uVar5,0);
      }
      else {
        FUN_059725f8(*(undefined8 *)PTR_DAT_06fac4f0,uVar5,lVar7,0);
      }
    }
    uVar2 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
    in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,uVar2);
    thunk_FUN_0301043c(*unaff_x29,&stack0x00000010);
  } while( true );
}


