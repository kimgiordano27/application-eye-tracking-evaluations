/*
FUNCTION_NAME: FUN_0386ad84
ENTRY_POINT: 0386ad84
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_12;telemetry_or_network_hits_18
*/


void FUN_0386ad84(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  if ((DAT_045393a1 & 1) == 0) {
    FUN_01c5d288(Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceQueryCompleteData>__
                );
    FUN_01c5d288(Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceShareResultData>__);
    FUN_01c5d288(Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceQueryResultsData>__)
    ;
    DAT_045393a1 = 1;
  }
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    lVar6 = **(long **)(param_1 + 0x10);
    bVar1 = *(byte *)(*(long *)
                       Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceShareResultData>__
                     + 0x130);
    if ((bVar1 <= *(byte *)(lVar6 + 0x130)) &&
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceShareResultData>__))
    {
      return;
    }
  }
  if (*(long *)(param_1 + 0xa0) == 0) goto LAB_0386aff0;
  uVar3 = FUN_037f9144(*(long *)(param_1 + 0xa0),0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  uVar4 = FUN_0386bf60(param_1);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  if (*(long *)(param_1 + 0xa0) == 0) goto LAB_0386aff0;
  uVar3 = FUN_037f9178(*(long *)(param_1 + 0xa0),0);
  if ((uVar3 & 1) == 0) {
LAB_0386ae4c:
    plVar5 = *(long **)(param_1 + 0x10);
    if (plVar5 == (long *)0x0) goto LAB_0386aff0;
    uVar3 = (**(code **)(*plVar5 + 0x328))(plVar5,*(undefined8 *)(*plVar5 + 0x330));
    if ((uVar3 & 1) != 0) {
      plVar5 = *(long **)(param_1 + 0x10);
      if (plVar5 == (long *)0x0) goto LAB_0386aff0;
      iVar2 = (**(code **)(*plVar5 + 0x198))(plVar5,*(undefined8 *)(*plVar5 + 0x1a0));
      if (iVar2 - 3U < 2) {
        lVar6 = *(long *)(param_1 + 0x28);
        uVar4 = thunk_FUN_01c496e0(*(undefined8 *)
                                    Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceQueryCompleteData>__
                                  );
        FUN_03804800(uVar4,param_1,
                     *(undefined8 *)
                      Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceQueryResultsData>__
                     ,0);
        if (lVar6 == 0) goto LAB_0386aff0;
        FUN_03808b58(lVar6,uVar4,0);
      }
      else if (iVar2 - 0xdU < 2) {
        lVar6 = *(long *)(param_1 + 0x28);
        uVar4 = thunk_FUN_01c496e0(*(undefined8 *)
                                    Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceQueryCompleteData>__
                                  );
        FUN_03804800(uVar4,param_1,
                     *(undefined8 *)
                      Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceQueryResultsData>__
                     ,0);
        if (lVar6 == 0) goto LAB_0386aff0;
        FUN_038094a0(lVar6,uVar4,0);
      }
      else if (iVar2 == 0xf) {
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_0386aff0;
        uVar4 = FUN_038096c8(*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0xa0),0);
        *(undefined8 *)(param_1 + 0x98) = uVar4;
        uVar4 = FUN_0386bed0(param_1);
        lVar6 = *(long *)(param_1 + 0xa0);
        *(undefined8 *)(param_1 + 0xa8) = uVar4;
        if (lVar6 == 0) goto LAB_0386aff0;
        if (*(char *)(lVar6 + 0x10) != '\0') {
          lVar7 = *(long *)(param_1 + 0xb8);
          lVar6 = FUN_037f9128(lVar6,0);
          if (((lVar6 == 0) || (plVar5 = (long *)FUN_038042e0(lVar6,0), plVar5 == (long *)0x0)) ||
             (uVar4 = (**(code **)(*plVar5 + 0x468))
                                (plVar5,*(undefined8 *)(param_1 + 0x98),
                                 *(undefined8 *)(*plVar5 + 0x470)), lVar7 == 0)) goto LAB_0386aff0;
          FUN_03868444(lVar7,uVar4,*(undefined8 *)(param_1 + 0xa8));
        }
      }
    }
  }
  else {
    if (*(long *)(param_1 + 0xa0) == 0) goto LAB_0386aff0;
    if (*(char *)(*(long *)(param_1 + 0xa0) + 0x11) != '\0') goto LAB_0386ae4c;
    FUN_0386c224(param_1);
  }
  plVar5 = *(long **)(param_1 + 0xb8);
  if (plVar5 != (long *)0x0) {
    *(undefined4 *)(plVar5 + 7) = 3;
    plVar5[10] = 0xffffffff;
    (**(code **)(*plVar5 + 0x328))(plVar5,*(undefined8 *)(*plVar5 + 0x330));
    *(undefined1 *)(param_1 + 0x5a) = 1;
    return;
  }
LAB_0386aff0:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


