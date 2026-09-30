/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader.<ParsePostValueAsync>d__4$$SetStateMachine
ENTRY_POINT: 04427614
PROGRAM: vrfs-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonTextReader_<ParsePostValueAsync>d__4__SetStateMachine(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  int iVar7;
  long *plVar8;
  
  iVar7 = 0;
  do {
    plVar8 = *(long **)(unaff_x21 + 0x10);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_015c2790(lVar3);
    }
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04427688;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_015c2a80(plVar8,lVar3,0);
LAB_04427688:
    (*(code *)*puVar1)(plVar8,iVar7,puVar1[1]);
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x132) & 1) ==
        0) {
      FUN_015c2790();
    }
    lVar3 = thunk_FUN_015d01b0();
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_015d0480(lVar3,*(undefined8 *)(*unaff_x22 + 0x40)), lVar4 == 0)) {
      uVar2 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
      FUN_0160ee7c(uVar2,0);
    }
    if (*(uint *)(unaff_x22 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    unaff_x22[(long)(int)unaff_w19 + 4] = lVar3;
    thunk_FUN_01656ef8(unaff_x22 + (long)(int)unaff_w19 + 4,lVar3);
    iVar7 = iVar7 + 1;
    unaff_w19 = unaff_w19 + 1;
    if (iVar7 == unaff_w23) {
      return;
    }
  } while( true );
}


