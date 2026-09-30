/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$Invoke_OnAfterDeserialize
ENTRY_POINT: 03a06cb0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


long * Unity_VisualScripting_FullSerializer_fsSerializer__Invoke_OnAfterDeserialize
                 (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x23;
  
  if (in_x9 != 0) {
    piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_03a06cf0;
      }
      in_x9 = in_x9 + -1;
      piVar7 = piVar7 + 4;
    } while (in_x9 != 0);
  }
  puVar2 = (undefined8 *)FUN_01dde8fc();
LAB_03a06cf0:
  iVar1 = (*(code *)*puVar2)();
  if (iVar1 == 1) {
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xe) * 0x10 + 0x138);
          goto LAB_03a06da4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01dde8fc();
LAB_03a06da4:
    unaff_x19 = (long *)(*(code *)*puVar2)();
  }
  else if (1 < iVar1) {
    thunk_FUN_01dd295c(StringLiteral_4413);
    uVar3 = thunk_FUN_01de27b8();
    uVar4 = thunk_FUN_01dd295c(PTR_DAT_04236d18);
    FUN_033a3c1c(uVar3,uVar4,0);
    uVar4 = thunk_FUN_01dd295c(PTR_DAT_04236d20);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar3,uVar4);
  }
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  lVar5 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x23) {
        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xf) * 0x10 + 0x138);
        goto LAB_03a06e0c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_01dde8fc(unaff_x19,*unaff_x23,0xf);
LAB_03a06e0c:
  (*(code *)*puVar2)(unaff_x19);
  return unaff_x19;
}


