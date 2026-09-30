/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_CreateCustomCameraAnchor
ENTRY_POINT: 0339cd94
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_CreateCustomCameraAnchor(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  int *piVar8;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *plVar9;
  long *unaff_x26;
  
  if (in_x9 != 0) {
    piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x26) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0339cdd8;
      }
      in_x9 = in_x9 + -1;
      piVar8 = piVar8 + 4;
    } while (in_x9 != 0);
  }
  puVar2 = (undefined8 *)FUN_01c72498();
LAB_0339cdd8:
  iVar1 = (*(code *)*puVar2)();
  if (2 < iVar1) {
    if (unaff_x22 == (long *)0x0) goto LAB_0339cf30;
    plVar9 = *(long **)(unaff_x21 + 0x28);
    uVar3 = (**(code **)(*unaff_x22 + 0x1c8))();
    if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
    }
    uVar4 = FUN_03295500(0);
    if (unaff_x20 == 0) goto LAB_0339cf30;
    uVar4 = FUN_0336f2b8(*(undefined8 *)
                          Method_System_Collections_Generic_HashSet<InteractableTool>_GetEnumerator__
                         ,uVar4,*(undefined8 *)(unaff_x20 + 0x60),0);
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)
                          Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                        );
    }
    uVar5 = thunk_FUN_01c495e4();
    uVar3 = FUN_03358c64(uVar5,uVar3,uVar4,0);
    if (plVar9 == (long *)0x0) goto LAB_0339cf30;
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_0339cee8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01c72498(plVar9,*unaff_x26,1);
LAB_0339cee8:
    (*(code *)*puVar2)(plVar9,3,uVar3,0,puVar2[1]);
  }
  if ((*(long *)(unaff_x21 + 0x20) != 0) && (unaff_x20 != 0)) {
    FUN_0338ff78();
    return;
  }
LAB_0339cf30:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


