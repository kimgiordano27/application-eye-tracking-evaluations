/*
FUNCTION_NAME: Unity.VisualScripting.InvokeMember.<>c$$<PostDeserializeRemapParameterNames>b__40_1
ENTRY_POINT: 06894f34
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


void Unity_VisualScripting_InvokeMember_<>c__<PostDeserializeRemapParameterNames>b__40_1
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  undefined4 unaff_w21;
  long unaff_x22;
  long *plVar6;
  long *unaff_x24;
  
  uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)(*piVar5 + 0x15) * 0x10 + 0x138);
        goto Unity_VisualScripting_MemberUnit__get_canDefine;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_032937ac();
Unity_VisualScripting_MemberUnit__get_canDefine:
  (*(code *)*puVar2)();
  if (unaff_x22 == 0) {
LAB_06895048:
    iVar1 = (**(code **)(*unaff_x19 + 0x3a8))();
    iVar1 = iVar1 + -1;
  }
  else {
    plVar6 = (long *)unaff_x19[6];
    if (plVar6 == (long *)0x0) goto LAB_0689510c;
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xe) * 0x10 + 0x138);
          goto LAB_06894fe8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_032937ac(plVar6,*unaff_x24,0xe);
LAB_06894fe8:
    iVar1 = (*(code *)*puVar2)(plVar6);
    if (iVar1 != 3) goto LAB_06895048;
    plVar6 = (long *)unaff_x19[6];
    if (plVar6 == (long *)0x0) goto LAB_0689510c;
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x15) * 0x10 + 0x138);
          goto LAB_06895074;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_032937ac(plVar6,*unaff_x24,0x15);
LAB_06895074:
    iVar1 = (*(code *)*puVar2)(plVar6);
  }
  plVar6 = (long *)unaff_x19[5];
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)
             Method_System_Collections_Generic_List<InternalType_172<InternalType_327,_InternalType_324>>__ctor__
           ) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_068950e8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_032937ac(plVar6,*(long *)
                                  Method_System_Collections_Generic_List<InternalType_172<InternalType_327,_InternalType_324>>__ctor__
                          ,3);
LAB_068950e8:
                    /* WARNING: Could not recover jumptable at 0x06895108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(plVar6,unaff_w21,iVar1,puVar2[1]);
    return;
  }
LAB_0689510c:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


