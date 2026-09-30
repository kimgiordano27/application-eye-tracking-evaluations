/*
FUNCTION_NAME: OVRPlugin$$get_AsymmetricFovEnabled
ENTRY_POINT: 027f2108
PROGRAM: vrlegs-libil2cpp.so
SCORE: 116
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_12;validity_or_gating_hits_12;strong_foveation_hits_1;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x027f249c) */

byte OVRPlugin__get_AsymmetricFovEnabled(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *unaff_x19;
  undefined4 uStack000000000000000c;
  undefined4 uStack000000000000001c;
  undefined4 uStack000000000000002c;
  byte bStack0000000000000054;
  byte bStack000000000000008c;
  undefined4 uStack00000000000000ac;
  int iStack00000000000000e4;
  undefined4 uStack00000000000000ec;
  undefined4 uStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  undefined4 in_stack_000000f8;
  undefined4 uStack00000000000000fc;
  byte bStack0000000000000114;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000138;
  
  FUN_018748a8(unaff_x19[3]);
  uStack00000000000000ac = FUN_025ca734(unaff_x19[3],0);
  unaff_x19[1] = unaff_x19[0xe];
  if (unaff_x19[1] == 0) {
    iStack00000000000000e4 = 0;
    uStack00000000000000f4 = uStack00000000000000ac;
  }
  else {
    iStack00000000000000e4 = 5;
    in_stack_000000f8 = uStack00000000000000ac;
  }
  uStack00000000000000fc = uStack00000000000000ac;
  if (iStack00000000000000e4 == 0) {
    uStack00000000000000f0 = 0;
    uStack00000000000000ec = uStack00000000000000f4;
  }
  else {
                    /* try { // try from 027f2160 to 028f22db has its CatchHandler @ 027f2160
                       catch() { ... } // from try @ 027f2160 with catch @ 027f2160
                       catch() { ... } // from try @ 027f23bc with catch @ 027f2160
                       catch() { ... } // from try @ 027f2414 with catch @ 027f2160
                       catch() { ... } // from try @ 027f2470 with catch @ 027f2160 */
    if (iStack00000000000000e4 != 5) {
      return in_stack_00000138._7_1_;
    }
    *unaff_x19 = unaff_x19[0xe];
    FUN_018748a8(*unaff_x19);
    uStack00000000000000f0 = OVRPlugin__SetControllerLocalizedVibration(*unaff_x19);
    uStack00000000000000ec = in_stack_000000f8;
  }
  uVar2 = OVRPlugin__SetControllerLocalizedVibration(unaff_x19[0x12]);
  FUN_025bb268(uStack00000000000000ec,uStack00000000000000f0,uVar2,0);
  bStack000000000000008c = FUN_027e971c(unaff_x19[0x12]);
  bStack000000000000008c = bStack000000000000008c & 1;
  if (bStack000000000000008c == 0) {
    iStack00000000000000e4 = 0;
  }
  else {
    iStack00000000000000e4 = 7;
  }
  bStack0000000000000114 = bStack000000000000008c;
  if (iStack00000000000000e4 == 0) {
    if (in_stack_00000120._4_4_ == -1) {
      iStack00000000000000e4 = 0;
    }
    else {
      iStack00000000000000e4 = 8;
    }
    if (iStack00000000000000e4 == 0) {
      FUN_01876390(*(undefined8 *)PTR_DAT_03cc9e10);
      bVar1 = OVRManager__SetFoveatedRenderingLevel(&stack0x00000130,0);
      if ((bVar1 & 1) == 0) {
        iStack00000000000000e4 = 0;
      }
      else {
        iStack00000000000000e4 = 8;
      }
      if (iStack00000000000000e4 == 0) {
        bVar1 = FUN_027f2528(unaff_x19[0x12]);
        if ((bVar1 & 1) == 0) {
          iStack00000000000000e4 = 8;
        }
        else {
          iStack00000000000000e4 = 0;
        }
        if (iStack00000000000000e4 == 0) {
          bVar1 = FUN_027e971c(unaff_x19[0x12]);
          if ((bVar1 & 1) == 0) {
            iStack00000000000000e4 = 8;
          }
          else {
            iStack00000000000000e4 = 0;
          }
          if (iStack00000000000000e4 == 0) {
            bVar1 = 1;
            bStack0000000000000114 = 1;
            goto LAB_027f237c;
          }
        }
      }
    }
    if (iStack00000000000000e4 != 8) {
      return in_stack_00000138._7_1_;
    }
    bStack0000000000000114 = FUN_027ef264(unaff_x19[0x12],in_stack_00000120._4_4_,unaff_x19[0x13]);
    bStack0000000000000114 = bStack0000000000000114 & 1;
    bVar1 = bStack0000000000000114;
  }
  else {
    bVar1 = 0;
    if (iStack00000000000000e4 != 7) {
      return in_stack_00000138._7_1_;
    }
  }
LAB_027f237c:
  bStack0000000000000054 = FUN_025bb184(bVar1,0);
  bStack0000000000000054 = bStack0000000000000054 & 1;
  if (bStack0000000000000054 == 0) {
    iStack00000000000000e4 = 9;
  }
  else {
    iStack00000000000000e4 = 0;
  }
  if (iStack00000000000000e4 == 0) {
    FUN_01876390(*(undefined8 *)PTR_DAT_03cc0330);
    uVar3 = FUN_027f8e00(0);
    unaff_x19[0xd] = uVar3;
    if (unaff_x19[0xd] == 0) {
      iStack00000000000000e4 = 10;
    }
    else {
      iStack00000000000000e4 = 0;
    }
    if (iStack00000000000000e4 == 0) {
      lVar4 = unaff_x19[0xd];
      FUN_018748a8(lVar4);
      uVar3 = *(undefined8 *)(lVar4 + 0x28);
      FUN_018748a8(uVar3);
      uStack000000000000002c = FUN_025ca734(uVar3,0);
      uVar3 = unaff_x19[0xd];
      FUN_018748a8(uVar3);
      uStack000000000000001c = OVRPlugin__SetControllerLocalizedVibration(uVar3);
      uVar2 = OVRPlugin__SetControllerLocalizedVibration(unaff_x19[0x12]);
      FUN_025bb2ec(uStack000000000000002c,uStack000000000000001c,uVar2,0);
    }
    else {
      if (iStack00000000000000e4 != 10) {
        return in_stack_00000138._7_1_;
      }
      FUN_01876390(*(undefined8 *)PTR_DAT_03cc9e20);
      uVar3 = FUN_027f8db0(0);
      FUN_018748a8(uVar3);
      uStack000000000000000c = FUN_025ca734(uVar3,0);
      uVar2 = OVRPlugin__SetControllerLocalizedVibration(unaff_x19[0x12]);
      FUN_025bb2ec(uStack000000000000000c,0,uVar2,0);
    }
  }
  else if (iStack00000000000000e4 != 9) {
    return in_stack_00000138._7_1_;
  }
  return bStack0000000000000114 & 1;
}


