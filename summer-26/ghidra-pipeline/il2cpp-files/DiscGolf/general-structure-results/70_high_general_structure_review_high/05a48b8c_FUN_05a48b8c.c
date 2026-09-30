/*
FUNCTION_NAME: FUN_05a48b8c
ENTRY_POINT: 05a48b8c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_6;ray_or_cast_sink_hits_4;telemetry_or_network_hits_1
*/


void FUN_05a48b8c(long param_1,long *param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
  if ((DAT_06dc1a10 & 1) == 0) {
    FUN_02d965b8(UnityEngine_UIElements_InlineStyleAccessPropertyBag_PositionProperty_TypeInfo);
                    /* try { // try from 05a48bbc to 05b48bc7 has its CatchHandler @ 05a4966c */
    FUN_02d965b8(System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_TypeInfo);
                    /* try { // try from 05a48bc8 to 05b48bd7 has its CatchHandler @ 05a49668 */
    FUN_02d965b8(UnityEngine_InputSystem_HID_HID_HIDLayoutBuilder_<>c_TypeInfo);
    DAT_06dc1a10 = 1;
  }
  puVar3 = UnityEngine_UIElements_InlineStyleAccessPropertyBag_PositionProperty_TypeInfo;
                    /* try { // try from 05a48bdc to 05b48beb has its CatchHandler @ 05a49634 */
  if ((param_1 == 0) || (param_3 == 0)) {
LAB_05a48d44:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
                    /* try { // try from 05a48bf4 to 05b48bff has its CatchHandler @ 05a495a4 */
  FUN_05a51d94(param_3,*(undefined8 *)(param_1 + 0x10),param_2,0);
  plVar4 = (long *)thunk_FUN_02dd3048(param_2,*(undefined8 *)puVar3);
  if (plVar4 == (long *)0x0) {
    if (param_2 != (long *)0x0) {
                    /* try { // try from 05a48c64 to 05b48c83 has its CatchHandler @ 05a49610 */
      lVar8 = *param_2;
      bVar2 = *(byte *)(*(long *)
                         System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_TypeInfo
                       + 0x130);
                    /* try { // try from 05a48c88 to 05b48c9b has its CatchHandler @ 05a495d4 */
      if ((bVar2 <= *(byte *)(lVar8 + 0x130)) &&
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) ==
          *(long *)System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_TypeInfo
         )) {
        (**(code **)(lVar8 + 0x3f8))(param_2,param_3,*(undefined8 *)(lVar8 + 0x400));
        goto LAB_05a48d14;
      }
    }
    lVar8 = thunk_FUN_02dd3048(param_2,*(undefined8 *)
                                        UnityEngine_InputSystem_HID_HID_HIDLayoutBuilder_<>c_TypeInfo
                              );
    if (lVar8 == 0) {
      uVar6 = thunk_FUN_02dfd288(PTR_DAT_069fc180);
                    /* try { // try from 05a48d5c to 05b48d63 has its CatchHandler @ 05a495e4 */
      uVar6 = FUN_02d966a4(uVar6,1);
                    /* try { // try from 05a48d68 to 05b48d93 has its CatchHandler @ 05a49664 */
      FUN_02979e58(param_2);
      uVar7 = thunk_FUN_02da6564(param_2,0);
      uVar7 = FUN_05a15ff0(uVar7,0);
      FUN_02979e58(uVar6);
      FUN_0297c314(uVar6,uVar7);
      FUN_02978e90(uVar6,0,uVar7);
                    /* try { // try from 05a48dac to 05b48db3 has its CatchHandler @ 05a49594 */
      uVar7 = thunk_FUN_02dfd288(
                                Method_UnityEngine_XR_ARFoundation_ARTrackable<XRRaycast,_ARRaycast>__ctor__
                                );
                    /* try { // try from 05a48db4 to 05b48dc3 has its CatchHandler @ 05a4960c */
      FUN_05a4cd84(uVar7,uVar6,0);
      uVar6 = FUN_05a30660();
                    /* try { // try from 05a48dc4 to 05b48dcf has its CatchHandler @ 05a49608 */
      uVar6 = FUN_05a4c63c(uVar6,0);
      uVar7 = thunk_FUN_02dfd288(
                                Method_UnityEngine_XR_ARFoundation_ARTrackable<XRRaycast,_ARRaycast>_get_sessionRelativeData__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar6,uVar7);
    }
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (0 < (int)uVar1) {
      lVar9 = 0;
                    /* try { // try from 05a48cb8 to 05b48cbb has its CatchHandler @ 05a495e8 */
      do {
                    /* try { // try from 05a48cbc to 05b48ccb has its CatchHandler @ 05a4963c */
        if (uVar1 <= (uint)lVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        plVar4 = *(long **)(lVar8 + 0x20 + lVar9 * 8);
        if (plVar4 == (long *)0x0) goto LAB_05a48d44;
                    /* try { // try from 05a48ccc to 05b48cd7 has its CatchHandler @ 05a49644 */
        (**(code **)(*plVar4 + 0x3f8))(plVar4,param_3,*(undefined8 *)(*plVar4 + 0x400));
        uVar1 = *(uint *)(lVar8 + 0x18);
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < (int)uVar1);
    }
  }
  else {
    lVar9 = *plVar4;
    lVar8 = *(long *)puVar3;
                    /* try { // try from 05a48c1c to 05b48c1f has its CatchHandler @ 05a4957c */
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    /* try { // try from 05a48c20 to 05b48c2f has its CatchHandler @ 05a495bc */
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
                    /* try { // try from 05a48c34 to 05b48c3f has its CatchHandler @ 05a495b8 */
        if (*(long *)(piVar11 + -2) == lVar8) {
                    /* try { // try from 05a48cf4 to 05b48cf7 has its CatchHandler @ 05a49598 */
                    /* try { // try from 05a48cf8 to 05b48d07 has its CatchHandler @ 05a495f8 */
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_05a48d04;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_02dd004c(plVar4,lVar8,2);
                    /* try { // try from 05a48c50 to 05b48c63 has its CatchHandler @ 05a49614 */
LAB_05a48d04:
                    /* try { // try from 05a48d08 to 05b48d13 has its CatchHandler @ 05a49604 */
    (*(code *)*puVar5)(plVar4,param_3,puVar5[1]);
  }
LAB_05a48d14:
                    /* try { // try from 05a48d18 to 05b48d1f has its CatchHandler @ 05a49618 */
  FUN_05a51dc8(param_3,0);
  return;
}


