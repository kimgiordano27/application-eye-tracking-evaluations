/*
FUNCTION_NAME: OVRPlugin.Media$$EncodeMrcFrame
ENTRY_POINT: 0280f678
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__EncodeMrcFrame(long param_1)

{
  undefined8 *puVar1;
  short sVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x19;
  undefined8 uVar9;
  uint uVar10;
  
  puVar3 = PTR_DAT_03cc02b0;
  uVar10 = *(uint *)(unaff_x19 + 0x8c);
  if (uVar10 < *(uint *)(param_1 + 0x18)) {
    do {
      sVar2 = *(short *)(param_1 + (long)(int)uVar10 * 2 + 0x20);
      if (sVar2 == 0) {
        if (*(uint *)(unaff_x19 + 0x88) != uVar10) {
LAB_0280f770:
          *(uint *)(unaff_x19 + 0x8c) = uVar10 + 1;
          goto LAB_0280f778;
        }
        iVar4 = OVRPassthroughLayer_InterpolatedColorLutHandler__get_LutTarget();
        if (iVar4 == 0) {
          thunk_FUN_01a6ca08(PTR_DAT_03cfe260);
          goto LAB_0280f844;
        }
      }
      else {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar5 = FUN_026b82c4(sVar2,0);
        if ((uVar5 & 1) == 0) {
          if (sVar2 == 10) {
            iVar4 = *(int *)(unaff_x19 + 0x8c) + 1;
            *(int *)(unaff_x19 + 0x90) = iVar4;
            *(int *)(unaff_x19 + 0x94) = *(int *)(unaff_x19 + 0x94) + 1;
            *(int *)(unaff_x19 + 0x8c) = iVar4;
LAB_0280f778:
            FUN_0282f654();
            puVar1 = (undefined8 *)(unaff_x19 + 0xb0);
            *(undefined8 *)(unaff_x19 + 0xb8) = 0;
            *(undefined8 *)(unaff_x19 + 0xb0) = 0;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar1,0);
            FUN_0282f680(puVar1,0);
            FUN_0280c5ec();
            lVar8 = *(long *)(unaff_x19 + 0x80);
            if (lVar8 == 0) goto LAB_0280f834;
            uVar10 = *(uint *)(unaff_x19 + 0x8c);
            if (*(uint *)(lVar8 + 0x18) <= uVar10) break;
            if (*(short *)(lVar8 + (long)(int)uVar10 * 2 + 0x20) == 0x28) {
              *(undefined4 *)(unaff_x19 + 0xa8) = 0;
              *(uint *)(unaff_x19 + 0x8c) = uVar10 + 1;
              *puVar1 = 0;
              *(undefined8 *)(unaff_x19 + 0xb8) = 0;
              FUN_02804374();
              return;
            }
            thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
            FUN_01876390();
            uVar6 = FUN_0271c480(0);
            uVar9 = *(undefined8 *)(unaff_x19 + 0x80);
            iVar4 = *(int *)(unaff_x19 + 0x8c);
            FUN_018748a8(uVar9);
            FUN_019a7458(uVar9,(long)iVar4);
            thunk_FUN_01a6ca08(PTR_DAT_03cc02b0);
            uVar9 = thunk_FUN_01a89a98();
            uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cfe278);
          }
          else {
            if (sVar2 == 0xd) {
              FUN_0280da6c();
              goto LAB_0280f778;
            }
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar5 = FUN_026b63d8(sVar2,0);
            if ((uVar5 & 1) != 0) {
              uVar10 = *(uint *)(unaff_x19 + 0x8c);
              goto LAB_0280f770;
            }
            if (sVar2 == 0x28) goto LAB_0280f778;
            thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
            FUN_01876390();
            uVar6 = FUN_0271c480(0);
            thunk_FUN_01a6ca08(PTR_DAT_03cc02b0);
            uVar9 = thunk_FUN_01a89a98();
            uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cfe278);
          }
          FUN_0282f8b0(uVar7,uVar6,uVar9,0);
LAB_0280f844:
          uVar6 = FUN_02803d2c();
          uVar9 = thunk_FUN_01a6ca08(PTR_DAT_03cfe268);
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar6,uVar9);
        }
        *(int *)(unaff_x19 + 0x8c) = *(int *)(unaff_x19 + 0x8c) + 1;
      }
      param_1 = *(long *)(unaff_x19 + 0x80);
      if (param_1 == 0) {
LAB_0280f834:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar10 = *(uint *)(unaff_x19 + 0x8c);
    } while (uVar10 < *(uint *)(param_1 + 0x18));
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


