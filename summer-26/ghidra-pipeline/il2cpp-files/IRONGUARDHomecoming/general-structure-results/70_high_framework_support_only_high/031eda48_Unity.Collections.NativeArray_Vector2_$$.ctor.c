/*
FUNCTION_NAME: Unity.Collections.NativeArray<Vector2>$$.ctor
ENTRY_POINT: 031eda48
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x031edc28) */

void Unity_Collections_NativeArray<Vector2>___ctor(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined1 (*pauVar3) [16];
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x24;
  undefined1 auVar9 [16];
  
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  do {
    lVar4 = *unaff_x19;
                    /* try { // try from 031eda58 to 032edab3 has its CatchHandler @ 031ed8f4 */
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_031eda9c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_031eda9c:
    uVar7 = (*(code *)*puVar2)();
    if ((uVar7 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar4 = *unaff_x19;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 == 0) goto LAB_031edbd4;
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
                    /* try { // try from 031edab4 to 032edac3 has its CatchHandler @ 031edac4 */
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 031eda40 with catch @ 031edac4
                       catch() { ... } // from try @ 031edab4 with catch @ 031edac4 */
      lVar4 = FUN_01ecaf44(lVar4);
                    /* try { // try from 031edac8 to 032edacb has its CatchHandler @ 031edad4 */
    }
                    /* try { // try from 031edacc to 032edad7 has its CatchHandler @ 031ed8f4 */
    lVar5 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031edac8 with catch @ 031edad4
                        */
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_031edb14;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_031edb14:
    auVar9 = (*(code *)*puVar2)();
    lVar4 = *(long *)(unaff_x21 + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar6 = *(uint *)(unaff_x21 + 0x18);
    if (uVar6 == *(uint *)(lVar4 + 0x18)) {
      FUN_031ec31c();
      uVar6 = *(uint *)(unaff_x21 + 0x18);
      lVar4 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x18) = uVar6 + 1;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
    else {
      *(uint *)(unaff_x21 + 0x18) = uVar6 + 1;
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    pauVar3 = (undefined1 (*) [16])(lVar4 + (long)(int)uVar6 * 0x10 + 0x20);
    *pauVar3 = auVar9;
    thunk_FUN_01f51358(pauVar3,0);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *unaff_x24) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_031edbf0;
    }
  }
LAB_031edbd4:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_031edbf0:
  (*(code *)*puVar2)();
  return;
}


