/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AlignCameraToAnchor$$RealignToAnchor
ENTRY_POINT: 052fe17c
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_AlignCameraToAnchor__RealignToAnchor(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long lVar7;
  long *unaff_x21;
  
  puVar1 = PTR_DAT_06d3e218;
  if (unaff_x19 != (long *)0x0) {
    lVar4 = *unaff_x19;
    lVar7 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 8);
                    /* try { // try from 052fe198 to 053fe1a7 has its CatchHandler @ 052fe2fc */
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06d3e218) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_052fe1e0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02eea86c();
LAB_052fe1e0:
    uVar3 = (*(code *)*puVar2)();
    if (lVar7 != 0) {
      uVar5 = FUN_04c74820(lVar7,uVar3,*(undefined8 *)PTR_DAT_06d3e210);
      if ((uVar5 & 1) != 0) {
        lVar4 = *unaff_x21;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar4 = *unaff_x21;
        }
        lVar7 = *unaff_x19;
        lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
        uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
              puVar2 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_052fe274;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_02eea86c();
LAB_052fe274:
        uVar3 = (*(code *)*puVar2)();
        if (lVar4 == 0) goto LAB_052fe2dc;
        FUN_04c75b28(lVar4,uVar3,*(undefined8 *)PTR_DAT_06d3e220);
        lVar4 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x28);
        if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x052fe2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40));
          return;
        }
      }
      return;
    }
  }
LAB_052fe2dc:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


