/*
FUNCTION_NAME: OVRPlugin$$get_premultipliedAlphaLayersSupported
ENTRY_POINT: 05bbcf94
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_premultipliedAlphaLayersSupported(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  undefined4 *unaff_x20;
  undefined4 *unaff_x21;
  long *unaff_x23;
  undefined4 uVar6;
  
  lVar3 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bbcf6c with catch @ 05bbcfa4
                        */
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x23) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_05bbcfe4;
      }
                    /* try { // try from 05bbcfbc to 05cbcfd3 has its CatchHandler @ 05bbd054 */
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_031c0d08();
LAB_05bbcfe4:
  uVar4 = (*(code *)*puVar2)();
                    /* try { // try from 05bbcff0 to 05cbcff3 has its CatchHandler @ 05bbd050 */
  iVar1 = *(int *)(param_1 + 0x20);
                    /* try { // try from 05bbcff4 to 05cbd027 has its CatchHandler @ 05bbd068 */
  if ((uVar4 & 1) == 0) {
                    /* try { // try from 05bbd040 to 05cbd04f has its CatchHandler @ 05bbd054 */
    if (iVar1 == 3) {
      lVar3 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x23) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_05bbd1a8;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_031c0d08();
      goto LAB_05bbd1a8;
    }
    if (iVar1 != 2) {
      return;
    }
    lVar3 = *unaff_x19;
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bbcff0 with catch @ 05bbd050
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bbcfbc with catch @ 05bbd054
                       catch(type#1 @ 06cdc248) { ... } // from try @ 05bbd040 with catch @ 05bbd054
                        */
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
                    /* try { // try from 05bbd05c to 05cbd05f has its CatchHandler @ 05bbd0ac */
                    /* try { // try from 05bbd060 to 05cbd083 has its CatchHandler @ 05bbceb4 */
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_05bbd130;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_031c0d08();
LAB_05bbd130:
    uVar6 = (*(code *)*puVar2)();
    *unaff_x21 = uVar6;
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) goto LAB_05bbd180;
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
  }
  else {
    if (iVar1 == 0) {
      return;
    }
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_05bbd0dc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
                    /* try { // try from 05bbd028 to 05cbd03f has its CatchHandler @ 05bbceb4 */
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_031c0d08();
LAB_05bbd0dc:
    uVar6 = (*(code *)*puVar2)();
    *unaff_x21 = uVar6;
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) goto LAB_05bbd180;
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
  }
  puVar2 = (undefined8 *)FUN_031c0d08();
  unaff_x21 = unaff_x20;
LAB_05bbd1a8:
  uVar6 = (*(code *)*puVar2)();
  *unaff_x21 = uVar6;
  return;
LAB_05bbd180:
  puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
  unaff_x21 = unaff_x20;
  goto LAB_05bbd1a8;
}


