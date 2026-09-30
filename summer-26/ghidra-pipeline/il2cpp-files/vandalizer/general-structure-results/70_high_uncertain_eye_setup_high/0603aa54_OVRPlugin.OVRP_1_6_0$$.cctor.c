/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$.cctor
ENTRY_POINT: 0603aa54
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_6_0___cctor(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long *unaff_x21;
  float fVar8;
  float fVar9;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  puVar1 = (undefined8 *)FUN_0322c1e8();
  uVar2 = (*(code *)*puVar1)();
  if (((uVar2 & 1) != 0) && (*(char *)(unaff_x19 + 0x38) == '\0')) {
    plVar7 = *(long **)(unaff_x19 + 0x28);
    if (plVar7 == (long *)0x0) goto LAB_0603acd4;
    lVar4 = *plVar7;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x21) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_0603aae4;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_0322c1e8(plVar7,*unaff_x21,4);
LAB_0603aae4:
    uVar2 = (*(code *)*puVar1)(plVar7);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        FUN_06e59c44(*(long *)(unaff_x19 + 0x30),1,0);
        if ((*(long *)(unaff_x19 + 0x30) != 0) &&
           (lVar4 = FUN_06e59884(*(long *)(unaff_x19 + 0x30),0), lVar4 != 0)) {
          FUN_06e6a69c(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,lVar4,0)
          ;
          if ((*(long *)(unaff_x19 + 0x30) != 0) &&
             (lVar4 = FUN_06e59884(*(long *)(unaff_x19 + 0x30),0), lVar4 != 0)) {
            FUN_06e6aafc(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                         in_stack_00000018,lVar4,0);
            if ((*(long *)(unaff_x19 + 0x30) != 0) &&
               (lVar4 = FUN_06e59884(*(long *)(unaff_x19 + 0x30),0), lVar4 != 0)) {
              uVar3 = thunk_FUN_06e6b484(lVar4,0);
              if (*(int *)(*(long *)PTR_DAT_0759b2a8 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                          (*(long *)PTR_DAT_0759b2a8);
              }
              uVar2 = FUN_06e587d8(uVar3,0,0);
              fVar8 = 1.0;
              if ((uVar2 & 1) != 0) {
                if (((*(long *)(unaff_x19 + 0x30) == 0) ||
                    (lVar4 = FUN_06e59884(*(long *)(unaff_x19 + 0x30),0), lVar4 == 0)) ||
                   (lVar4 = thunk_FUN_06e6b484(lVar4,0), lVar4 == 0)) goto LAB_0603acd4;
                fVar8 = (float)FUN_06e6e3cc(lVar4,0);
              }
              if (*(long *)(unaff_x19 + 0x30) != 0) {
                lVar4 = FUN_06e59884(*(long *)(unaff_x19 + 0x30),0);
                plVar7 = *(long **)(unaff_x19 + 0x28);
                if (plVar7 != (long *)0x0) {
                  lVar5 = *plVar7;
                  uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
                  if (uVar2 != 0) {
                    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar6 + -2) == *unaff_x21) {
                        puVar1 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                        goto LAB_0603ac68;
                      }
                      uVar2 = uVar2 - 1;
                      piVar6 = piVar6 + 4;
                    } while (uVar2 != 0);
                  }
                  puVar1 = (undefined8 *)FUN_0322c1e8(plVar7,*unaff_x21,1);
LAB_0603ac68:
                  fVar9 = (float)(*(code *)*puVar1)(plVar7,puVar1[1]);
                  if (DAT_07a3caf1 == '\0') {
                    FUN_031f20f4(PTR_DAT_0759b378);
                    DAT_07a3caf1 = '\x01';
                  }
                  if (lVar4 != 0) {
                    fVar9 = fVar9 / fVar8;
                    lVar5 = *(long *)(*(long *)PTR_DAT_0759b378 + 0xb8);
                    FUN_06e6b2fc(fVar9 * *(float *)(lVar5 + 0xc),fVar9 * *(float *)(lVar5 + 0x10),
                                 fVar9 * *(float *)(lVar5 + 0x14),lVar4,0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_0603acd4;
    }
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_06e59c44(*(long *)(unaff_x19 + 0x30),0,0);
    return;
  }
LAB_0603acd4:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


