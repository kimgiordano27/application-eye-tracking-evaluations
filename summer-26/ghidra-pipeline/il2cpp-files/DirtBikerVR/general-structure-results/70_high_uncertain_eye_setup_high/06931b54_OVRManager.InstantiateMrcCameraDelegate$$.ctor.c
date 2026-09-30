/*
FUNCTION_NAME: OVRManager.InstantiateMrcCameraDelegate$$.ctor
ENTRY_POINT: 06931b54
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_InstantiateMrcCameraDelegate___ctor(undefined1 param_1 [16])

{
  char cVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar6;
  long *unaff_x21;
  long *unaff_x22;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  cVar1 = *(char *)(unaff_x20 + 0x710);
  *(long *)(unaff_x19 + 0x34) = param_1._8_8_;
  *(long *)(unaff_x19 + 0x2c) = param_1._0_8_;
                    /* try { // try from 06931b60 to 06a31c6b has its CatchHandler @ 069317dc */
  *(undefined8 *)(unaff_x19 + 0x3c) = in_stack_00000040;
  if (cVar1 == '\0') {
    FUN_03a8a718(PTR_DAT_0848c9e0);
    *(undefined1 *)(unaff_x20 + 0x710) = 1;
  }
  if ((**(long **)(*unaff_x22 + 0xb8) != 0) &&
     (lVar3 = *(long *)(**(long **)(*unaff_x22 + 0xb8) + 0x1c8), lVar3 != 0)) {
    bVar2 = FUN_070cb048(lVar3,0);
    cVar1 = *(char *)(unaff_x20 + 0x710);
    *(byte *)(unaff_x19 + 0xd0) = bVar2 & 1;
    if (cVar1 == '\0') {
      FUN_03a8a718(PTR_DAT_0848c9e0);
      *(undefined1 *)(unaff_x20 + 0x710) = 1;
    }
    if ((**(long **)(*unaff_x22 + 0xb8) != 0) &&
       (lVar3 = *(long *)(**(long **)(*unaff_x22 + 0xb8) + 0x1c8), lVar3 != 0)) {
      bVar2 = FUN_070cb1b8(lVar3,0);
      *(byte *)(unaff_x19 + 0xd1) = bVar2 & 1;
      if (*(long *)(unaff_x19 + 0x98) != 0) {
        uVar9 = 0;
        uVar8 = *(undefined4 *)(unaff_x19 + 0xd8);
        FUN_07c4a9d8(&stack0x00000018,*(undefined4 *)(unaff_x19 + 0xd4),*(long *)(unaff_x19 + 0x98),
                     0);
        *(undefined8 *)(unaff_x19 + 0x34) = in_stack_00000020;
        *(undefined8 *)(unaff_x19 + 0x2c) = in_stack_00000018;
        *(undefined8 *)(unaff_x19 + 0x3c) = in_stack_00000028;
        if ((*(char *)(unaff_x19 + 0xd0) != '\0') && (*(char *)(unaff_x19 + 0x28) == '\0')) {
          in_stack_00000038 = *(undefined8 *)(unaff_x19 + 0x34);
          in_stack_00000030 = *(undefined8 *)(unaff_x19 + 0x2c);
          in_stack_00000040 = *(undefined8 *)(unaff_x19 + 0x3c);
          if (*(int *)(*(long *)PTR_DAT_08486c50 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar4 = FUN_07d28f48(0x44160000);
          if ((uVar4 & 1) != 0) {
            lVar3 = FUN_07d2feec(unaff_x19 + 0x44,0);
            if (lVar3 != 0) {
              uVar5 = FUN_0447aad0(lVar3,*(undefined8 *)PTR_DAT_084872e8);
              puVar6 = (undefined8 *)(unaff_x19 + 0x20);
              *puVar6 = uVar5;
              thunk_FUN_03afed3c(puVar6,uVar5);
              uVar5 = *puVar6;
              if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar4 = FUN_07c9c218(uVar5,0,0);
              if ((uVar4 & 1) == 0) {
                *(undefined1 *)(unaff_x19 + 0x28) = 0;
                goto LAB_06931d20;
              }
              *(undefined1 *)(unaff_x19 + 0x28) = 1;
              if (*(long *)(unaff_x19 + 0x20) != 0) {
                lVar3 = FUN_07c98f88(*(long *)(unaff_x19 + 0x20),0);
                FUN_07d2fd90(unaff_x19 + 0x44,0);
                if (lVar3 != 0) {
                  uVar7 = FUN_07cadf5c(lVar3,0);
                  *(undefined4 *)(unaff_x19 + 0x70) = uVar7;
                  *(undefined4 *)(unaff_x19 + 0x74) = uVar8;
                  *(undefined4 *)(unaff_x19 + 0x78) = uVar9;
                  goto LAB_06931d20;
                }
              }
            }
            goto LAB_06931d40;
          }
        }
LAB_06931d20:
        if (*(char *)(unaff_x19 + 0xd1) != '\0') {
          *(undefined1 *)(unaff_x19 + 0x28) = 0;
        }
        return;
      }
    }
  }
LAB_06931d40:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


