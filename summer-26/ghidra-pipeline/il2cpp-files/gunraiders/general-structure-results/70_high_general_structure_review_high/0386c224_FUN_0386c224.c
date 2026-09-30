/*
FUNCTION_NAME: FUN_0386c224
ENTRY_POINT: 0386c224
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_9;telemetry_or_network_hits_8
*/


void FUN_0386c224(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  if ((DAT_045393a0 & 1) == 0) {
    FUN_01c5d288(Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceQueryCompleteData>__
                );
    FUN_01c5d288(Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceQueryResultsData>__)
    ;
    DAT_045393a0 = 1;
  }
  puVar2 = Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceQueryResultsData>__;
  puVar1 = Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceQueryCompleteData>__;
  plVar4 = *(long **)(param_1 + 0x10);
  do {
    if (plVar4 == (long *)0x0) {
LAB_0386c3dc:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar5 = (**(code **)(*plVar4 + 0x328))(plVar4,*(undefined8 *)(*plVar4 + 0x330));
    if ((uVar5 & 1) == 0) {
      return;
    }
    plVar4 = *(long **)(param_1 + 0x10);
    if (plVar4 == (long *)0x0) goto LAB_0386c3dc;
    iVar3 = (**(code **)(*plVar4 + 0x198))(plVar4,*(undefined8 *)(*plVar4 + 0x1a0));
    if (iVar3 - 3U < 2) {
      lVar7 = *(long *)(param_1 + 0x28);
      uVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
      FUN_03804800(uVar6,param_1,*(undefined8 *)puVar2,0);
      if (lVar7 == 0) goto LAB_0386c3dc;
      FUN_03808b58(lVar7,uVar6,0);
    }
    else if (iVar3 - 0xdU < 2) {
      lVar7 = *(long *)(param_1 + 0x28);
      uVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
      FUN_03804800(uVar6,param_1,*(undefined8 *)puVar2,0);
      if (lVar7 == 0) goto LAB_0386c3dc;
      FUN_038094a0(lVar7,uVar6,0);
    }
    else if (iVar3 == 0xf) {
      if (*(long *)(param_1 + 0x28) != 0) {
        uVar6 = FUN_038096c8(*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0xa0),0);
        *(undefined8 *)(param_1 + 0x98) = uVar6;
        uVar6 = FUN_0386bed0(param_1);
        *(undefined8 *)(param_1 + 0xa8) = uVar6;
        if (*(long *)(param_1 + 0x98) == 0) {
          *(long *)(param_1 + 0x98) = param_1;
          return;
        }
        lVar7 = *(long *)(param_1 + 0xa0);
        if (lVar7 != 0) {
          if (*(char *)(lVar7 + 0x10) == '\0') {
            return;
          }
          lVar8 = *(long *)(param_1 + 0xb8);
          lVar7 = FUN_037f9128(lVar7,0);
          if (((lVar7 != 0) && (plVar4 = (long *)FUN_038042e0(lVar7,0), plVar4 != (long *)0x0)) &&
             (uVar6 = (**(code **)(*plVar4 + 0x468))
                                (plVar4,*(undefined8 *)(param_1 + 0x98),
                                 *(undefined8 *)(*plVar4 + 0x470)), lVar8 != 0)) {
            FUN_03868444(lVar8,uVar6,*(undefined8 *)(param_1 + 0xa8));
            return;
          }
        }
      }
      goto LAB_0386c3dc;
    }
    plVar4 = *(long **)(param_1 + 0x10);
  } while( true );
}


