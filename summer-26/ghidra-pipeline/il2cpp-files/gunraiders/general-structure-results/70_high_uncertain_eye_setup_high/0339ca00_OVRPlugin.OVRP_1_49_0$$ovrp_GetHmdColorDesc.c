/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_GetHmdColorDesc
ENTRY_POINT: 0339ca00
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_GetHmdColorDesc(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  int *in_x10;
  int *piVar8;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long *plVar9;
  long *unaff_x26;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_0339ca20;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar2 = (undefined8 *)FUN_01c72498();
LAB_0339ca20:
  iVar1 = (*(code *)*puVar2)();
  if (3 < iVar1) {
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    plVar9 = *(long **)(unaff_x22 + 0x28);
    uVar3 = (**(code **)(*unaff_x19 + 0x1c8))();
    if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar4 = FUN_03295500(0);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    thunk_FUN_01c5d21c();
    uVar4 = FUN_033704d4(*(undefined8 *)
                          Method_System_Collections_Generic_HashSet<Interactable>_Remove__,uVar4);
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar5 = thunk_FUN_01c495e4();
    uVar3 = FUN_03358c64(uVar5,uVar3,uVar4,0);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_0339cb3c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01c72498(plVar9,*unaff_x26,1);
LAB_0339cb3c:
    (*(code *)*puVar2)(plVar9,4,uVar3,0,puVar2[1]);
  }
  if (*(long *)(unaff_x22 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  plVar9 = (long *)FUN_0335fda8(*(long *)(unaff_x22 + 0x20),0);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)Method_System_Collections_Generic_HashSet<Face>_Add__)
      {
        puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 3) * 0x10 + 0x138);
        goto LAB_0339cbc4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_01c72498(plVar9,*(long *)Method_System_Collections_Generic_HashSet<Face>_Add__,3);
LAB_0339cbc4:
  (*(code *)*puVar2)(plVar9);
  return;
}


