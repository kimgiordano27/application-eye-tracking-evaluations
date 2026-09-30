/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_GetFaceState2
ENTRY_POINT: 02910cb8
PROGRAM: vrfs-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_92_0__ovrp_GetFaceState2(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x19 + 0xcdd) = 1;
  puVar1 = PTR_DAT_06da5688;
  plVar7 = (long *)(unaff_x20 + 0x18);
  if (*plVar7 == 0) {
    plVar2 = (long *)thunk_FUN_015d0480(*(undefined8 *)(unaff_x20 + 0x10),
                                        *(undefined8 *)PTR_DAT_06da5688);
    if (plVar2 == (long *)0x0) {
      lVar4 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e406b0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      FUN_02d76b34(lVar4,0);
      FUN_01600498(plVar7,lVar4,0);
    }
    else {
      lVar4 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar5 != 0) {
                    /* try { // try from 02910cfc to 02a10d5f has its CatchHandler @ 02910d60 */
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_02910d6c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_015c2a80(plVar2,*(long *)puVar1,2);
LAB_02910d6c:
      lVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      *plVar7 = lVar4;
      thunk_FUN_01656ef8(plVar7,lVar4);
    }
  }
  return *plVar7;
}


