/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 019976f8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01997904) */

void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x20;
  long unaff_x21;
  undefined1 auVar10 [16];
  
  puVar3 = (undefined8 *)FUN_0122ea3c();
  puVar1 = PTR_DAT_027b1f00;
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar2 = PTR_DAT_027b1f18;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  do {
    lVar5 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
                    /* try { // try from 01997748 to 01a97757 has its CatchHandler @ 01997758 */
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 01997670 with catch @ 01997758
                       catch() { ... } // from try @ 019976a8 with catch @ 01997758
                       catch() { ... } // from try @ 019976d4 with catch @ 01997758
                       catch() { ... } // from try @ 01997748 with catch @ 01997758 */
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_01997784;
        }
                    /* try { // try from 0199775c to 01a9775f has its CatchHandler @ 01997768 */
        uVar8 = uVar8 - 1;
                    /* try { // try from 01997760 to 01a9776b has its CatchHandler @ 019975c4 */
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_0122ea3c(plVar4,*(long *)puVar2,0);
LAB_01997784:
    uVar8 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 == 0) goto LAB_019978b0;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0122e748(lVar5);
    }
    lVar6 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_019977fc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_0122ea3c(plVar4,lVar5,0);
LAB_019977fc:
    auVar10 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    lVar5 = *(long *)(unaff_x21 + 0x10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    uVar7 = *(uint *)(unaff_x21 + 0x18);
    if (uVar7 == *(uint *)(lVar5 + 0x18)) {
      FUN_01996158();
      uVar7 = *(uint *)(unaff_x21 + 0x18);
      lVar5 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x18) = uVar7 + 1;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
    }
    else {
      *(uint *)(unaff_x21 + 0x18) = uVar7 + 1;
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
    *(undefined1 (*) [16])(lVar5 + (long)(int)uVar7 * 0x10 + 0x20) = auVar10;
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_019978cc;
    }
  }
LAB_019978b0:
  puVar3 = (undefined8 *)FUN_0122ea3c(plVar4,*(long *)puVar1,0);
LAB_019978cc:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}


