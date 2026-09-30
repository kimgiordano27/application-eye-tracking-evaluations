/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.InstanceCache$$remove_OnCacheChangedForTypeEvent
ENTRY_POINT: 052c6080
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x052c61c8) */
/* WARNING: Removing unreachable block (ram,0x052c61b4) */

void Meta_XR_ImmersiveDebugger_Utils_InstanceCache__remove_OnCacheChangedForTypeEvent
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int unaff_w22;
  int unaff_w23;
  long lVar5;
  long unaff_x26;
  ulong unaff_x27;
  undefined8 *unaff_x28;
  ulong unaff_x29;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  do {
                    /* try { // try from 052c6080 to 053c60db has its CatchHandler @ 052c6080
                       catch() { ... } // from try @ 052c6080 with catch @ 052c6080
                       catch() { ... } // from try @ 052c6128 with catch @ 052c6080
                       catch() { ... } // from try @ 052c61b0 with catch @ 052c6080 */
    FUN_066d4bec(param_1,param_2,param_3,param_4,param_5,0);
    unaff_w23 = unaff_w23 + 1;
    if (unaff_w22 == unaff_w23) {
      do {
        unaff_x27 = unaff_x27 + 1;
        if (unaff_x27 == unaff_x29) {
          lVar2 = *unaff_x20;
          uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar3 == 0) goto LAB_052c60dc;
          piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          goto LAB_052c60c4;
        }
        lVar2 = *(long *)(unaff_x21 + 0x80);
        if ((lVar2 == 0) || (*(long *)(lVar2 + 0x18) == 0)) {
          FUN_052c35a0();
          lVar2 = *(long *)(unaff_x21 + 0x80);
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
        }
        if (*(uint *)(lVar2 + 0x18) <= unaff_x27) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        unaff_x26 = *(long *)(lVar2 + unaff_x27 * 8 + 0x20);
        unaff_w22 = (**(code **)(*unaff_x20 + 0x238))();
      } while (unaff_w22 < 1);
      if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      unaff_w23 = 0;
    }
    if (*(long *)(unaff_x26 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar2 = FUN_03fd09cc(*(long *)(unaff_x26 + 0x20),unaff_w23,*unaff_x28);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar5 = *(long *)(lVar2 + 0x10);
    uVar6 = (**(code **)(*unaff_x20 + 0x278))();
    uVar7 = (**(code **)(*unaff_x20 + 0x278))();
    uVar8 = (**(code **)(*unaff_x20 + 0x278))();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066d3f5c(uVar6,uVar7,uVar8,lVar5,0);
    param_5 = *(long *)(lVar2 + 0x10);
    param_1 = (**(code **)(*unaff_x20 + 0x278))();
    param_2 = (**(code **)(*unaff_x20 + 0x278))();
    param_3 = (**(code **)(*unaff_x20 + 0x278))();
    param_4 = (**(code **)(*unaff_x20 + 0x278))();
    if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
LAB_052c60c4:
    if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_06d01f60) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_052c60f8;
    }
  }
LAB_052c60dc:
                    /* try { // try from 052c60dc to 053c60e3 has its CatchHandler @ 052c6170 */
  puVar1 = (undefined8 *)FUN_02eea86c();
LAB_052c60f8:
                    /* try { // try from 052c60f8 to 053c6107 has its CatchHandler @ 052c616c */
  (*(code *)*puVar1)();
  if (unaff_x19 != (long *)0x0) {
    lVar2 = *unaff_x19;
                    /* try { // try from 052c6118 to 053c6127 has its CatchHandler @ 052c6168 */
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
                    /* try { // try from 052c6128 to 053c6187 has its CatchHandler @ 052c6080 */
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_06d01f60) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_052c6164;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02eea86c();
LAB_052c6164:
    (*(code *)*puVar1)();
  }
  return;
}


