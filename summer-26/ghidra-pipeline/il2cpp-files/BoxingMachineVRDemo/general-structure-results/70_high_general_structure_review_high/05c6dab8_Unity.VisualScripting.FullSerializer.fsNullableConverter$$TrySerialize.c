/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsNullableConverter$$TrySerialize
ENTRY_POINT: 05c6dab8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_fsNullableConverter__TrySerialize(void)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long *plVar8;
  long *unaff_x26;
  
  uVar2 = UnityEngine_Font__add_textureRebuilt();
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar2 = FUN_0606a004();
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_05c5d08c();
    if (unaff_x20 == 0) goto LAB_05c6dcf4;
    uVar4 = FUN_05c5d08c();
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*unaff_x26);
    }
    uVar2 = FUN_0606a004(uVar3,uVar4,0);
    if ((uVar2 & 1) != 0) {
      thunk_FUN_02dc61f4(PTR_DAT_0675e2e8);
      uVar3 = thunk_FUN_02d9d534();
      uVar4 = thunk_FUN_02dc61f4(Method_System_Collections_Generic_List<EntryProcessor>__ctor__);
      FUN_05007004(uVar3,uVar4,0);
      uVar4 = thunk_FUN_02dc61f4(Method_System_Collections_Generic_List<EntryProcessor>_Add__);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar3,uVar4);
    }
  }
  lVar5 = FUN_05c5d08c();
  plVar6 = *(long **)(unaff_x19 + 0x40);
  if (plVar6 == (long *)0x0) {
    plVar8 = (long *)0x0;
    plVar6 = (long *)0x0;
  }
  else {
    lVar7 = *plVar6;
    bVar1 = *(byte *)(*(long *)Method_System_Collections_Generic_List<BaseRaycaster>_get_Count__ +
                     0x130);
    if (*(byte *)(lVar7 + 0x130) < bVar1) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = plVar6;
      if (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_System_Collections_Generic_List<BaseRaycaster>_get_Count__) {
        plVar8 = (long *)0x0;
      }
    }
    bVar1 = *(byte *)(*(long *)Method_System_Collections_Generic_List<Column>_Remove__ + 0x130);
    if (*(byte *)(lVar7 + 0x130) < bVar1) {
      plVar6 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)Method_System_Collections_Generic_List<Column>_Remove__) {
      plVar6 = (long *)0x0;
    }
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar2 = FUN_0606a004(plVar8,0,0);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar2 = FUN_0606a004(plVar6,0,0);
    if ((uVar2 & 1) != 0) goto LAB_05c6dc28;
  }
  else {
LAB_05c6dc28:
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar2 = FUN_0606a004(plVar6,0,0);
    if ((uVar2 & 1) == 0) {
      if (plVar8 == (long *)0x0) goto LAB_05c6dcf4;
      FUN_05c5c1c0(plVar8);
    }
    else {
      if (plVar6 == (long *)0x0) goto LAB_05c6dcf4;
      FUN_05c5c0b8(plVar6);
    }
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar2 = UnityEngine_Font__add_textureRebuilt();
  if ((uVar2 & 1) == 0) {
    if (unaff_x20 != 0) {
      FUN_05c5e008();
      return;
    }
  }
  else {
    uVar3 = FUN_05c5d08c();
    *(undefined8 *)(unaff_x19 + 0x40) = uVar3;
    thunk_FUN_02dd37b4();
    if (lVar5 != 0) {
      FUN_05c5bfbc(lVar5);
      return;
    }
  }
LAB_05c6dcf4:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


