/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$Invoke_OnBeforeDeserialize
ENTRY_POINT: 0687eea0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


long * Unity_VisualScripting_FullSerializer_fsSerializer__Invoke_OnBeforeDeserialize
                 (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long in_x9;
  int *in_x10;
  int *piVar8;
  long *unaff_x19;
  long *unaff_x23;
  
  do {
    in_x9 = in_x9 + -1;
    piVar8 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_032937ac();
      goto LAB_0687eecc;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar8;
  } while (*plVar1 != param_3);
  puVar3 = (undefined8 *)(param_1 + (long)(*piVar8 + 9) * 0x10 + 0x138);
LAB_0687eecc:
  uVar4 = (*(code *)*puVar3)();
  if ((uVar4 & 1) != 0) {
    lVar7 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x23) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0687ef28;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_032937ac();
LAB_0687ef28:
    iVar2 = (*(code *)*puVar3)();
    if (iVar2 == 1) {
      lVar7 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x23) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_0687efdc;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_032937ac();
LAB_0687efdc:
      unaff_x19 = (long *)(*(code *)*puVar3)();
    }
    else if (1 < iVar2) {
      thunk_FUN_032e1da0(PTR_DAT_0727ddd0);
      uVar5 = thunk_FUN_032a56a0();
      uVar6 = thunk_FUN_032e1da0(
                                Method_System_Collections_Generic_List<KeyValuePair<PropertyName,_object>>__ctor__
                                );
      FUN_05932744(uVar5,uVar6,0);
      uVar6 = thunk_FUN_032e1da0(
                                Method_System_Collections_Generic_List<KeyValuePair<PropertyName,_object>>_Add__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar5,uVar6);
    }
  }
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar7 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar4 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x23) {
        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar8 + 0xf) * 0x10 + 0x138);
        goto LAB_0687f044;
      }
      uVar4 = uVar4 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)FUN_032937ac(unaff_x19,*unaff_x23,0xf);
LAB_0687f044:
  (*(code *)*puVar3)(unaff_x19);
  return unaff_x19;
}


