/*
FUNCTION_NAME: OVRPlugin.OVRP_1_2_0$$ovrp_SetSystemVSyncCount
ENTRY_POINT: 03397c4c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_2_0__ovrp_SetSystemVSyncCount(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long in_x9;
  long *in_x10;
  int *piVar9;
  long lVar10;
  long unaff_x20;
  undefined8 uVar11;
  long unaff_x23;
  undefined *puVar8;
  
  if (in_x9 != 0) {
    piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *in_x10) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_03397c90;
      }
      in_x9 = in_x9 + -1;
      piVar9 = piVar9 + 4;
    } while (in_x9 != 0);
  }
  puVar2 = (undefined8 *)FUN_01c72498();
LAB_03397c90:
  iVar1 = (*(code *)*puVar2)();
  if (iVar1 < 1) {
    uVar3 = FUN_03390838();
    if ((uVar3 & 1) != 0) {
      FUN_03394994();
      lVar10 = *(long *)(unaff_x23 + 0x110);
      if (lVar10 == 0) {
        lVar10 = FUN_03390754();
      }
      lVar4 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
      if (lVar4 != 0) {
        if ((unaff_x20 != 0) && (lVar5 = thunk_FUN_01c495e4(), lVar5 == 0)) {
          uVar6 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar6,0);
        }
        if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        *(long *)(lVar4 + 0x20) = unaff_x20;
        if (lVar10 != 0) {
          uVar6 = (**(code **)(lVar10 + 0x18))
                            (*(undefined8 *)(lVar10 + 0x40),lVar4,*(undefined8 *)(lVar10 + 0x28));
          return uVar6;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar6 = FUN_03295500(0);
    FUN_019b2708();
    uVar11 = *(undefined8 *)(unaff_x23 + 0x60);
    puVar8 = Method_System_Collections_Generic_HashSet<ColliderZone>__ctor__;
  }
  else {
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar6 = FUN_03295500(0);
    FUN_019b2708();
    uVar11 = *(undefined8 *)(unaff_x23 + 0x60);
    puVar8 = Method_System_Collections_Generic_HashSet<byte>_Remove__;
  }
  uVar7 = thunk_FUN_01c273e8(puVar8);
  FUN_0336f2b8(uVar7,uVar6,uVar11,0);
  uVar6 = FUN_0335cdc4();
  uVar11 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<ColliderZone>_Add__);
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar6,uVar11);
}


