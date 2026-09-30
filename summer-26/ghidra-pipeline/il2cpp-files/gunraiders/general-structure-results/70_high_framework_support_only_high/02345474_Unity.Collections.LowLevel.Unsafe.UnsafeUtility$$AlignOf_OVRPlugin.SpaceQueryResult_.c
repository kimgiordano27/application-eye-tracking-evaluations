/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$AlignOf<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 02345474
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16]
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__AlignOf<OVRPlugin_SpaceQueryResult>(void)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  
  if (unaff_x19 != (long *)0x0) {
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_023453d0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01c72498();
LAB_023453d0:
    (*(code *)*puVar2)();
  }
  if (unaff_x20 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c01e80();
  }
  if ((unaff_w21 == 0xb) || (unaff_w21 == 0)) {
    unaff_x22 = 0;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = unaff_x22;
  return auVar1 << 0x40;
}


