/*
FUNCTION_NAME: Meta.WitAi.Events.UnityEventListeners.AudioEventListener$$.ctor
ENTRY_POINT: 0329f488
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0329f61c) */
/* WARNING: Removing unreachable block (ram,0x0329f6cc) */

void Meta_WitAi_Events_UnityEventListeners_AudioEventListener___ctor(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  long unaff_x29;
  
  while ((param_1 & 1) != 0) {
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x78);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44(lVar2);
    }
    lVar5 = *unaff_x22;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0329f3c8 with catch @ 0329f4b4
                       try { // try from 0329f4b4 to 0339f4cb has its CatchHandler @ 0329f380 */
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar2) {
          lVar2 = lVar5 + (long)*piVar7 * 0x10 + 0x138;
          goto LAB_0329f4f4;
        }
                    /* try { // try from 0329f4cc to 0339f4e3 has its CatchHandler @ 0329f550 */
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    lVar2 = FUN_01ecb238();
                    /* try { // try from 0329f4e4 to 0339f53f has its CatchHandler @ 0329f380 */
LAB_0329f4f4:
    *(undefined8 **)(unaff_x29 + -0x20) = unaff_x23;
    (**(code **)(*(long *)(lVar2 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar2 + 8) + 8));
    lVar2 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
    puVar4 = unaff_x23;
    if (-1 < *(int *)(*(long *)(lVar2 + 0x20) + 0x28)) {
      puVar4 = (undefined8 *)*unaff_x23;
    }
    puVar3 = *(undefined8 **)(lVar2 + 0x88);
    uVar1 = *puVar3;
    *(int *)(unaff_x29 + -0xc) = unaff_w20;
    *(undefined8 *)(unaff_x29 + -0x20) = unaff_x26;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
                    /* try { // try from 0329f540 to 0339f54f has its CatchHandler @ 0329f550 */
    (*(code *)puVar3[2])(uVar1);
    unaff_w20 = unaff_w20 + 1;
    lVar2 = *unaff_x22;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
                    /* catch() { ... } // from try @ 0329f4cc with catch @ 0329f550
                       catch() { ... } // from try @ 0329f540 with catch @ 0329f550 */
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x24) {
          puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0329f47c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_0329f47c:
    param_1 = (*(code *)*puVar4)();
  }
  if (unaff_x22 != (long *)0x0) {
    lVar2 = *unaff_x22;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0329f604;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_0329f604:
    (*(code *)*puVar4)();
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  if (*(long *)(unaff_x25 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


