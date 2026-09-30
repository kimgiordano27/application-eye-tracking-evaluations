/*
FUNCTION_NAME: RootMotion.FinalIK.FBIKChain$$GetDirToBendPoint
ENTRY_POINT: 02992010
PROGRAM: vrlegs-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_12;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_12
*/


/* WARNING: Removing unreachable block (ram,0x02991ecc) */
/* WARNING: Removing unreachable block (ram,0x02991f34) */
/* WARNING: Removing unreachable block (ram,0x029922b0) */
/* WARNING: Removing unreachable block (ram,0x02991e18) */
/* WARNING: Removing unreachable block (ram,0x029921f0) */

bool RootMotion_FinalIK_FBIKChain__GetDirToBendPoint(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  bool bVar6;
  int unaff_w21;
  undefined8 uVar7;
  long lVar8;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000010;
  char cStack0000000000000018;
  char cStack000000000000001c;
  undefined8 in_stack_00000020;
  
  if (param_2 != 1) {
    if (cStack000000000000001c != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000000,0);
    }
    if (param_2 != 1) {
      if (in_stack_00000020._4_1_ != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0();
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b3fef0(param_1);
    }
    plVar5 = (long *)__cxa_begin_catch(param_1);
    lVar8 = *plVar5;
    __cxa_end_catch();
LAB_02991e84:
    bVar6 = false;
LAB_02991e88:
    if (in_stack_00000020._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    if (lVar8 == 0) {
      return bVar6;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar8);
  }
  plVar5 = (long *)__cxa_begin_catch(param_1);
  lVar8 = *plVar5;
  __cxa_end_catch();
  if (cStack000000000000001c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000000,0);
  }
  if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar8);
  }
  if (*(char *)(unaff_x20 + 0x40) == '\x03') {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (0 < *(int *)(*(long *)(unaff_x20 + 0x10) + 0x78)) {
      if (*(long *)(unaff_x20 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(*(long *)(unaff_x20 + 0x128) + 0x18) == 0) {
        if (*(long *)(unaff_x20 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        iVar1 = FUN_02f0ce18(*(long *)(unaff_x20 + 0xc0),0);
        if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(int *)(*(long *)(unaff_x20 + 0x10) + 0x78) < iVar1 - *(int *)(unaff_x20 + 0xcc)) {
          iVar1 = FUN_02990364();
          if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          iVar2 = FUN_0299ebac(*(long *)(unaff_x20 + 0x10),0);
          if (iVar1 <= iVar2) {
            if (*(long *)(unaff_x20 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            lVar8 = FUN_0298d380();
            FUN_0298d54c();
            if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            uVar3 = FUN_0299ec14(*(long *)(unaff_x20 + 0x10),0);
            if ((uVar3 & 1) != 0) {
              if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              lVar4 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0xa8);
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              FUN_029bf178(lVar4,*(undefined4 *)(lVar8 + 0x54),0);
            }
          }
        }
      }
    }
  }
  iVar1 = thunk_FUN_01aa519c(unaff_x20 + 0x130,1,1,0);
  if (iVar1 == 1) {
    FUN_029922d8();
  }
  uVar7 = *(undefined8 *)(unaff_x20 + 0x188);
  cStack0000000000000018 = '\0';
  FUN_027e0bd8(uVar7,&stack0x00000018,0);
  lVar8 = *(long *)(unaff_x20 + 0x188);
  if (lVar8 != 0) {
    uVar3 = 0;
    do {
      if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar3) {
        if (cStack0000000000000018 != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
        }
        if (*(char *)(unaff_x20 + 0x150) == '\0') {
          lVar8 = 0;
          goto LAB_02991e84;
        }
        if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar3 = FUN_0299ec14(*(long *)(unaff_x20 + 0x10),0);
        if ((uVar3 & 1) != 0) {
          if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar8 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0xa8);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          *(int *)(lVar8 + 0x24) = *(int *)(lVar8 + 0x24) + 1;
          *(uint *)(lVar8 + 0x28) = *(int *)(lVar8 + 0x28) + (uint)*(byte *)(unaff_x20 + 0x150);
        }
        FUN_029910c8();
        lVar8 = 0;
        bVar6 = 0 < unaff_w21;
        goto LAB_02991e88;
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar8 = *(long *)(lVar8 + uVar3 * 8 + 0x20);
      in_stack_00000010._4_1_ = '\0';
      FUN_027e0bd8(lVar8,(long)&stack0x00000010 + 4,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      iVar1 = FUN_0299295c();
      iVar2 = FUN_0299295c();
      unaff_w21 = iVar2 + iVar1 + unaff_w21;
      if (in_stack_00000010._4_1_ != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(lVar8,0);
      }
      lVar8 = *(long *)(unaff_x20 + 0x188);
      uVar3 = uVar3 + 1;
    } while (lVar8 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


