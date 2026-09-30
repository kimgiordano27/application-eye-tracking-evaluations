/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplMarkerEnd
ENTRY_POINT: 05161f94
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05162008) */

long OVRPlugin_OVRP_1_84_0__ovrp_QplMarkerEnd(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x20;
  long lVar8;
  long *unaff_x21;
  long unaff_x22;
  
  if (unaff_x21 != (long *)0x0) {
    lVar5 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0675f3d0) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05161ff0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_05161ff0:
    (*(code *)*puVar1)();
  }
  if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae0();
  }
  uVar2 = (**(code **)(*unaff_x20 + 0x298))();
  uVar6 = FUN_051621a0();
  if ((uVar6 & 1) != 0) {
    lVar8 = *unaff_x19;
    uVar3 = FUN_055323a4(*(undefined8 *)PTR_DAT_0676bca0,0);
    uVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06782488);
    FUN_0552a144(uVar4,uVar3,uVar2,0);
    lVar5 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06782490);
    FUN_0504920c(lVar5,0);
    *(undefined8 *)(lVar5 + 0x10) = uVar4;
    thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x10),uVar4);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_03aad168(lVar8,0,lVar5,*(undefined8 *)PTR_DAT_067823f8);
  }
  return *unaff_x19;
}


