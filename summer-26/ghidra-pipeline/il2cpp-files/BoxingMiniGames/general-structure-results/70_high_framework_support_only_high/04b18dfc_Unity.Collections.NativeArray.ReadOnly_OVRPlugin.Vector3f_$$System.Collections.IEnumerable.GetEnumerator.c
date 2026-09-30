/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector3f>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 04b18dfc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector3f>__System_Collections_IEnumerable_GetEnumerator
               (long param_1,undefined8 param_2)

{
  long *plVar1;
  void *pvVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  void *unaff_x19;
  long unaff_x20;
  long lVar7;
  undefined8 *unaff_x22;
  size_t unaff_x23;
  long unaff_x25;
  long lVar8;
  long unaff_x29;
  
                    /* try { // try from 04b18e04 to 04c18e13 has its CatchHandler @ 04b18e54 */
  plVar1 = (long *)thunk_FUN_036a1ed0(param_2,*(long *)(param_1 + 0x80) + 0xe0);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  if (*plVar1 == 0) {
    pvVar2 = unaff_x19;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x20) + 0x28)) {
      pvVar2 = (void *)(unaff_x29 + -0x20);
    }
    memcpy(unaff_x22,pvVar2,unaff_x23);
    uVar4 = FUN_03642bb8(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x20));
    if ((uVar4 & 1) != 0) {
      plVar1 = (long *)thunk_FUN_036a1ed0();
      lVar7 = *(long *)(unaff_x20 + 0x20);
      lVar8 = *plVar1;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x20) + 0x28)) {
        unaff_x19 = (void *)(unaff_x29 + -0x20);
      }
      pvVar2 = memcpy(unaff_x22,unaff_x19,unaff_x23);
      if (lVar8 == 0) goto LAB_04b18fec;
      lVar7 = *(long *)(lVar7 + 0xc0);
      puVar5 = *(undefined8 **)(lVar7 + 0x40);
      uVar3 = *puVar5;
      if (-1 < *(int *)(*(long *)(lVar7 + 0x20) + 0x28)) {
        unaff_x22 = (undefined8 *)*unaff_x22;
      }
      pcVar6 = (code *)puVar5[2];
      *(undefined8 **)(unaff_x29 + -0x10) = unaff_x22;
      (*pcVar6)(uVar3,puVar5,lVar8,unaff_x29 + -0x10,unaff_x29 + -0x18);
      if (*(char *)(unaff_x29 + -0x18) != '\0') {
        lVar7 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
        lVar8 = *(long *)(lVar7 + 0x20);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_0367c9fc(lVar8);
          lVar7 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
        }
        FUN_036436fc(lVar8,*(undefined8 *)(lVar7 + 0x30));
        goto LAB_04b18e8c;
      }
    }
    pvVar2 = (void *)**(undefined8 **)(*(long *)(PTR_DAT_079f4610 + 0x90) + 0xb8);
  }
  else {
                    /* try { // try from 04b18e20 to 04c18e3b has its CatchHandler @ 04b18e58 */
    plVar1 = (long *)thunk_FUN_036a1ed0();
    lVar7 = *(long *)(unaff_x20 + 0x20);
    lVar8 = *plVar1;
                    /* try { // try from 04b18e3c to 04c18e6f has its CatchHandler @ 04b18da8 */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 04b18de4 with catch @ 04b18e50
                        */
    if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x20) + 0x28)) {
      unaff_x19 = (void *)(unaff_x29 + -0x20);
    }
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 04b18e04 with catch @ 04b18e54
                        */
    pvVar2 = memcpy(unaff_x22,unaff_x19,unaff_x23);
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 04b18e20 with catch @ 04b18e58
                        */
    if (lVar8 == 0) {
LAB_04b18fec:
      if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      goto LAB_04b19000;
    }
    lVar7 = *(long *)(lVar7 + 0xc0);
    puVar5 = *(undefined8 **)(lVar7 + 0x28);
    uVar3 = *puVar5;
    if (-1 < *(int *)(*(long *)(lVar7 + 0x20) + 0x28)) {
                    /* try { // try from 04b18e70 to 04c18e87 has its CatchHandler @ 04b18f20 */
      unaff_x22 = (undefined8 *)*unaff_x22;
    }
    pcVar6 = (code *)puVar5[2];
    *(undefined8 **)(unaff_x29 + -0x18) = unaff_x22;
    (*pcVar6)(uVar3,puVar5,lVar8,unaff_x29 + -0x18,unaff_x29 + -0x10);
LAB_04b18e8c:
    pvVar2 = *(void **)(unaff_x29 + -0x10);
  }
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_04b19000:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pvVar2);
}


