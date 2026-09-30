/*
FUNCTION_NAME: Unity.VisualScripting.InvokeMember.<>c$$<PostDeserializeRemapParameterNames>b__40_0
ENTRY_POINT: 06894f0c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_InvokeMember_<>c__<PostDeserializeRemapParameterNames>b__40_0
               (long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x22;
  long *plVar7;
  long *unaff_x24;
  
  uVar1 = (**(code **)(param_1 + 0x138))();
  plVar7 = (long *)unaff_x19[6];
  if (plVar7 == (long *)0x0) goto LAB_0689510c;
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x24) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x15) * 0x10 + 0x138);
        goto Unity_VisualScripting_MemberUnit__get_canDefine;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_032937ac(plVar7,*unaff_x24,0x15);
Unity_VisualScripting_MemberUnit__get_canDefine:
  (*(code *)*puVar3)(plVar7);
  if (unaff_x22 == 0) {
LAB_06895048:
    iVar2 = (**(code **)(*unaff_x19 + 0x3a8))();
    iVar2 = iVar2 + -1;
  }
  else {
    plVar7 = (long *)unaff_x19[6];
    if (plVar7 == (long *)0x0) goto LAB_0689510c;
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xe) * 0x10 + 0x138);
          goto LAB_06894fe8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_032937ac(plVar7,*unaff_x24,0xe);
LAB_06894fe8:
    iVar2 = (*(code *)*puVar3)(plVar7);
    if (iVar2 != 3) goto LAB_06895048;
    plVar7 = (long *)unaff_x19[6];
    if (plVar7 == (long *)0x0) goto LAB_0689510c;
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x15) * 0x10 + 0x138);
          goto LAB_06895074;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_032937ac(plVar7,*unaff_x24,0x15);
LAB_06895074:
    iVar2 = (*(code *)*puVar3)(plVar7);
  }
  plVar7 = (long *)unaff_x19[5];
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)
             Method_System_Collections_Generic_List<InternalType_172<InternalType_327,_InternalType_324>>__ctor__
           ) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
          goto LAB_068950e8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_032937ac(plVar7,*(long *)
                                  Method_System_Collections_Generic_List<InternalType_172<InternalType_327,_InternalType_324>>__ctor__
                          ,3);
LAB_068950e8:
                    /* WARNING: Could not recover jumptable at 0x06895108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar3)(plVar7,uVar1,iVar2,puVar3[1]);
    return;
  }
LAB_0689510c:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


