/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$RemoveLogEntry
ENTRY_POINT: 052cae98
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_Console__RemoveLogEntry
          (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  int in_w8;
  undefined4 *puVar5;
  long unaff_x19;
  long *unaff_x20;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (in_w8 == 0) {
                    /* try { // try from 052cae9c to 053caea7 has its CatchHandler @ 052cafe4 */
    thunk_FUN_02f12b58();
  }
                    /* try { // try from 052caea8 to 053cafc7 has its CatchHandler @ 052cabe0 */
  uVar2 = FUN_066cd30c();
  if ((uVar2 & 1) != 0) {
    if (unaff_x20 == (long *)0x0) goto LAB_052cb198;
    fVar8 = *(float *)(unaff_x20 + 0x28);
    if (*(float *)(unaff_x19 + 0x44) < fVar8) {
      if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_052cb198;
      uVar2 = FUN_0528dd08(*(long *)(unaff_x19 + 0x28),0);
      if ((uVar2 & 1) == 0) {
        if ((*(long *)(unaff_x19 + 0x28) == 0) ||
           (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0xa8), lVar3 == 0)) goto LAB_052cb198;
        fVar6 = (float)FUN_067413b4(lVar3,0);
        if (DAT_071babf8 == '\0') {
          FUN_02f07e70(PTR_DAT_06d03010);
          DAT_071babf8 = '\x01';
        }
        puVar1 = PTR_DAT_06d03010;
        if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        fVar9 = *(float *)(unaff_x20 + 0x27);
        param_3 = param_3 * param_3;
        if (fVar9 < SQRT(param_3 + fVar6 * fVar6 + fVar8 * fVar8)) {
          if ((*(long *)(unaff_x19 + 0x28) == 0) ||
             (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0xa8), lVar3 == 0)) goto LAB_052cb198;
          fVar8 = (float)FUN_067413b4(lVar3,0);
          param_3 = param_3 * DAT_013f6b68;
          fVar9 = fVar9 * DAT_013f6b68;
          FUN_06741454(fVar8 * DAT_013f6b68,lVar3,0);
        }
        fVar8 = (float)(**(code **)(*unaff_x20 + 600))();
        if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_052cb198;
        fVar6 = param_3;
        fVar10 = fVar9;
        fVar7 = (float)FUN_066d48c0(*(long *)(unaff_x19 + 0x38),0);
                    /* try { // try from 052cafc8 to 053cafcb has its CatchHandler @ 052cafe0 */
                    /* try { // try from 052cafcc to 053cafcf has its CatchHandler @ 052cafdc */
                    /* try { // try from 052cafd0 to 053cafff has its CatchHandler @ 052cabe0 */
        if (DAT_071babf8 == '\0') {
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 052cafcc with catch @ 052cafdc
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 052cafc8 with catch @ 052cafe0
                        */
          FUN_02f07e70(PTR_DAT_06d03010);
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 052cae9c with catch @ 052cafe4
                        */
          DAT_071babf8 = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        if (*(float *)((long)unaff_x20 + 0x144) <=
            SQRT((fVar9 - fVar10) * (fVar9 - fVar10) +
                 (fVar8 - fVar7) * (fVar8 - fVar7) + (param_3 - fVar6) * (param_3 - fVar6))) {
LAB_052cb14c:
          fVar6 = *(float *)(unaff_x19 + 0x44);
          fVar8 = (float)FUN_066d1758(0);
          *(float *)(unaff_x19 + 0x44) = fVar6 + fVar8;
          uVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d03818);
          FUN_066cf184(uVar4,0);
          *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
          thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x18),uVar4);
          *(undefined4 *)(unaff_x19 + 0x10) = 1;
          return 1;
        }
        if (unaff_x20[0x19] == 0) goto LAB_052cb198;
        uVar2 = FUN_052cb1ec(unaff_x20[0x19],*(undefined8 *)(unaff_x19 + 0x28),
                             *(undefined8 *)(unaff_x19 + 0x30));
        if ((uVar2 & 1) == 0) goto LAB_052cb14c;
        if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_052cb198;
        lVar3 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0xa8);
        if (DAT_071babf5 == '\0') {
          FUN_02f07e70(PTR_DAT_06d02c10);
          DAT_071babf5 = '\x01';
        }
        puVar1 = PTR_DAT_06d02c10;
        if (lVar3 == 0) goto LAB_052cb198;
        puVar5 = *(undefined4 **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
        FUN_0674158c(*puVar5,puVar5[1],puVar5[2],lVar3,0);
        if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_052cb198;
        lVar3 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0xa8);
        if (DAT_071babf5 == '\0') {
          FUN_02f07e70(PTR_DAT_06d02c10);
          DAT_071babf5 = '\x01';
        }
        if (lVar3 == 0) goto LAB_052cb198;
        puVar5 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
        FUN_06741454(*puVar5,puVar5[1],puVar5[2],lVar3,0);
        *(undefined1 *)(unaff_x19 + 0x40) = 1;
      }
    }
  }
  if (*(char *)(unaff_x19 + 0x40) == '\0') {
    if ((unaff_x20 == (long *)0x0) || (unaff_x20[0x19] == 0)) goto LAB_052cb198;
    FUN_052cb430(unaff_x20[0x19],*(undefined8 *)(unaff_x19 + 0x28));
    (**(code **)(*unaff_x20 + 0x328))();
  }
  else if (unaff_x20 == (long *)0x0) {
LAB_052cb198:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  unaff_x20[0x2b] = 0;
  thunk_FUN_02f411dc(unaff_x20 + 0x2b,0);
  return 0;
}


