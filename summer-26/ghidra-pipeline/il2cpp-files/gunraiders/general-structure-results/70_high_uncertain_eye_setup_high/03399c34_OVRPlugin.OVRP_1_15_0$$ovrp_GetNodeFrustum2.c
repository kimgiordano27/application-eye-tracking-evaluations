/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetNodeFrustum2
ENTRY_POINT: 03399c34
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_15_0__ovrp_GetNodeFrustum2
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined1 *param_7)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x25;
  undefined *puVar5;
  
  if ((*(byte *)(unaff_x25 + 0x6cd) & 1) == 0) {
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<GameObject>_Add__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<GameObject>_GetEnumerator__);
    *(undefined1 *)(unaff_x25 + 0x6cd) = 1;
  }
  if (param_3 == 0) {
LAB_03399dbc:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if (*(long *)(param_3 + 0x100) == 0) {
    lVar3 = *(long *)(param_3 + 0x80);
    if (lVar3 == 0) {
      if (*(long *)(param_3 + 0x108) == 0) goto LAB_03399dc0;
LAB_03399d88:
      *param_7 = 1;
      uVar6 = *(undefined8 *)(param_3 + 0x108);
LAB_03399d94:
      FUN_0339d294(param_1,param_2,param_3,param_4,uVar6,param_6);
      return;
    }
    if (*(char *)(param_3 + 0x88) != '\0') {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_03399dbc;
      if ((*(int *)(*(long *)(param_1 + 0x20) + 0x30) != 1) && (*(long *)(param_3 + 0x108) != 0))
      goto LAB_03399d88;
    }
    lVar3 = (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28))
    ;
  }
  else {
    lVar3 = FUN_03392404(param_3);
    if (lVar3 == 0) goto LAB_03399dbc;
    iVar2 = FUN_027bd234(lVar3,*(undefined8 *)
                                Method_System_Collections_Generic_HashSet<GameObject>_GetEnumerator__
                        );
    if (0 < iVar2) {
      *param_7 = 1;
      uVar6 = *(undefined8 *)(param_3 + 0x100);
      goto LAB_03399d94;
    }
    lVar9 = *(long *)(param_3 + 0x100);
    lVar8 = *(long *)Method_System_Collections_Generic_HashSet<GameObject>_Add__;
    lVar3 = *(long *)(lVar8 + 0x38);
    if (lVar3 == 0) {
      FUN_01c723f0(lVar8);
      lVar3 = *(long *)(lVar8 + 0x38);
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01c72394();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar3 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01c72394();
    }
    if (lVar9 == 0) goto LAB_03399dbc;
    lVar3 = (**(code **)(lVar9 + 0x18))
                      (*(undefined8 *)(lVar9 + 0x40),**(undefined8 **)(lVar3 + 0xb8),
                       *(undefined8 *)(lVar9 + 0x28));
  }
  if (lVar3 != 0) {
    *param_7 = 0;
    return;
  }
LAB_03399dc0:
  cVar1 = *(char *)(param_3 + 0x2a);
  lVar3 = thunk_FUN_01c273e8(PTR_DAT_042305b0);
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar6 = FUN_03295500(0);
  uVar7 = *(undefined8 *)(param_3 + 0x60);
  puVar5 = Method_System_Collections_Generic_HashSet<Guid>_Add__;
  if (cVar1 == '\0') {
    puVar5 = Method_System_Collections_Generic_HashSet<Guid>__ctor__;
  }
  uVar4 = thunk_FUN_01c273e8(puVar5);
  uVar6 = FUN_0336f2b8(uVar4,uVar6,uVar7,0);
  uVar6 = FUN_0335cdc4(param_2,uVar6,0);
  uVar7 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<Guid>_Clear__);
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar6,uVar7);
}


