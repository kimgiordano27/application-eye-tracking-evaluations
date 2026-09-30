/*
FUNCTION_NAME: Unity.VisualScripting.InvokeMember$$PostDeserializeRemapParameterNames
ENTRY_POINT: 068933a4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_InvokeMember__PostDeserializeRemapParameterNames(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  thunk_FUN_032e1da0();
  thunk_FUN_032e1da0(Method_System_Collections_Generic_List<KeyValuePair<int,_int>>_get_Item__);
  thunk_FUN_032e1da0(
                    Method_System_Collections_Generic_List<ValueTuple<VolumeParameter,_VolumeParameter>>_Add__
                    );
  thunk_FUN_032e1da0(Method_System_Collections_Generic_List<List<IntPoint>>_set_Capacity__);
  thunk_FUN_032e1da0(
                    Method_System_Collections_Generic_List<ValueTuple<VolumeParameter,_VolumeParameter>>_ToArray__
                    );
  *(undefined1 *)(unaff_x22 + 300) = 1;
  lVar3 = thunk_FUN_032a56a0(*unaff_x24);
  FUN_06893640();
  unaff_x19[7] = lVar3;
  thunk_FUN_0333a630(unaff_x19 + 7,lVar3);
  lVar3 = thunk_FUN_032a56a0(*unaff_x24);
  FUN_06893640();
  unaff_x19[8] = lVar3;
  thunk_FUN_0333a630(unaff_x19 + 8,lVar3);
  lVar3 = FUN_032d5d3c(*unaff_x23,5);
  unaff_x19[0xc] = lVar3;
  thunk_FUN_0333a630();
  FUN_059660a0();
  unaff_x19[4] = unaff_x21;
  thunk_FUN_0333a630();
  unaff_x19[6] = (long)unaff_x20;
  thunk_FUN_0333a630();
  (**(code **)(*unaff_x19 + 0x2b8))();
  puVar1 = Method_System_Collections_Generic_List<KeyValuePair<int,_int>>_Add__;
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar3 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)Method_System_Collections_Generic_List<KeyValuePair<int,_int>>_Add__) {
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 0xd) * 0x10 + 0x138);
        goto LAB_068934ec;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_032937ac();
LAB_068934ec:
  puVar2 = Method_System_Collections_Generic_List<KeyValuePair<int,_int>>_get_Item__;
  lVar3 = (*(code *)*puVar4)();
  unaff_x19[0x10] = lVar3;
  thunk_FUN_0333a630();
  lVar3 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 0xd) * 0x10 + 0x138);
        goto LAB_0689356c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_032937ac();
LAB_0689356c:
  lVar3 = (*(code *)*puVar4)();
  unaff_x19[0x11] = lVar3;
  thunk_FUN_0333a630();
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  lVar3 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 0xd) * 0x10 + 0x138);
        goto LAB_06893608;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_032937ac();
LAB_06893608:
  lVar3 = (*(code *)*puVar4)();
  unaff_x19[0x12] = lVar3;
  thunk_FUN_0333a630(unaff_x19 + 0x12,lVar3);
  return;
}


