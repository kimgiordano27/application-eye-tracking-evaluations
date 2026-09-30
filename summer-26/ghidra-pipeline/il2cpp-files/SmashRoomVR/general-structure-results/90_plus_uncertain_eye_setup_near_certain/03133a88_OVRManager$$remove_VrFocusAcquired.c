/*
FUNCTION_NAME: OVRManager$$remove_VrFocusAcquired
ENTRY_POINT: 03133a88
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_VrFocusAcquired(void)

{
  void *__dest;
  int iVar1;
  long lVar2;
  long unaff_x19;
  char *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long lVar3;
  long unaff_x25;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  ulong uVar14;
  ulong uVar15;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000010;
  
  thunk_FUN_0392a110();
  if (*(long *)(unaff_x21 + 0x70) != 0) {
    fVar7 = unaff_s14;
    uVar4 = FUN_038f13a0(*(long *)(unaff_x21 + 0x70),0);
    *(undefined4 *)(unaff_x19 + 0x104) = uVar4;
    *(float *)(unaff_x19 + 0x108) = fVar7;
    if (*(long *)(unaff_x21 + 0x38) != 0) {
      FUN_03b278e4();
      FUN_03133434(&stack0x00000080,*(undefined8 *)(unaff_x21 + 0x80));
      lVar3 = *(long *)(unaff_x23 + 0x10);
      memcpy(&stack0x00000030,&stack0x00000080,0x50);
      if (lVar3 != 0) {
        __dest = (void *)(lVar3 + 0x50);
        memcpy(__dest,&stack0x00000030,0x50);
        thunk_FUN_01b4f09c(__dest,0);
        lVar3 = *(long *)(unaff_x21 + 0x80);
        if (lVar3 != 0) {
          iVar1 = *(int *)(lVar3 + 0x18);
          *(undefined4 *)(lVar3 + 0x18) = 0;
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (0 < iVar1) {
            FUN_03062488(*(undefined8 *)(lVar3 + 0x10),0,iVar1,0);
          }
          if (*(long *)(unaff_x21 + 0x70) != 0) {
            lVar3 = FUN_0391c27c(*(long *)(unaff_x21 + 0x70),0);
            lVar2 = FUN_0391c27c();
            if (lVar2 != 0) {
              fVar5 = (float)FUN_03928d34(lVar2,0);
              fVar13 = unaff_s15;
              fVar10 = fVar7;
              lVar2 = FUN_0391c27c();
              if ((lVar2 != 0) && (fVar6 = (float)FUN_039291ac(lVar2,0), lVar3 != 0)) {
                uVar14 = (ulong)(uint)(unaff_s15 - fVar13);
                uVar11 = (ulong)(uint)(fVar7 - fVar10);
                FUN_03928dd4(fVar5 - fVar6,uVar11,uVar14,lVar3,0);
                if (*(long *)(unaff_x21 + 0x70) != 0) {
                  lVar3 = FUN_0391c27c(*(long *)(unaff_x21 + 0x70),0);
                  lVar2 = FUN_0391c27c();
                  if (lVar2 != 0) {
                    uVar8 = FUN_03928d34(lVar2,0);
                    uVar12 = uVar11;
                    uVar15 = uVar14;
                    lVar2 = FUN_0391c27c();
                    if ((lVar2 != 0) && (uVar9 = FUN_03929130(lVar2,0), lVar3 != 0)) {
                      thunk_FUN_0392a110(uVar8,uVar11,uVar14,uVar9,uVar12,uVar15,lVar3,0);
                      if (*(long *)(unaff_x21 + 0x70) != 0) {
                        fVar7 = (float)FUN_038f13a0(*(long *)(unaff_x21 + 0x70),0);
                        *(float *)(unaff_x19 + 0x104) = fVar7;
                        *(float *)(unaff_x19 + 0x108) = unaff_s14;
                        if (*unaff_x20 == '\0') {
                          uVar8 = CONCAT44(unaff_s14 - (float)((ulong)in_stack_00000010 >> 0x20),
                                           fVar7 - (float)in_stack_00000010);
                        }
                        else {
                          if (DAT_03fed2da == '\0') {
                            thunk_FUN_01ad9084(
                                              Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__
                                              );
                            DAT_03fed2da = '\x01';
                          }
                          uVar8 = **(undefined8 **)
                                    (*(long *)
                                      Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__
                                    + 0xb8);
                        }
                        *(undefined8 *)(unaff_x25 + 8) = uVar8;
                        *(undefined4 *)(unaff_x19 + 0x148) = 0;
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


