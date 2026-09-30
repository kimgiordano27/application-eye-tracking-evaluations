/*
FUNCTION_NAME: FUN_05ee1748
ENTRY_POINT: 05ee1748
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05ee1748(long param_1,uint param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  
  if ((DAT_06b83d36 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_067860c8);
                    /* try { // try from 05ee178c to 05fe1797 has its CatchHandler @ 05ee27c4 */
    FUN_02d6084c(PTR_DAT_067860d0);
    FUN_02d6084c(PTR_DAT_067860d8);
    FUN_02d6084c(PTR_DAT_067860e0);
                    /* try { // try from 05ee17b0 to 05fe17b7 has its CatchHandler @ 05ee27d8 */
    FUN_02d6084c(PTR_DAT_067860e8);
    FUN_02d6084c(PTR_DAT_067860f0);
    FUN_02d6084c(PTR_DAT_067860f8);
    FUN_02d6084c(PTR_DAT_06786100);
    FUN_02d6084c(OVRPlugin_OVRP_1_46_0_TypeInfo);
    FUN_02d6084c(PTR_DAT_06767fc8);
    FUN_02d6084c(PTR_DAT_0675e1b8);
    DAT_06b83d36 = 1;
  }
  if (param_3 != 0) {
    uVar6 = *(undefined8 *)(param_3 + 0x50);
                    /* try { // try from 05ee180c to 05fe180f has its CatchHandler @ 05ee2714 */
    if ((param_2 & 1) != 0) {
      *(undefined1 *)(param_3 + 0xf8) = 1;
                    /* try { // try from 05ee1824 to 05fe185f has its CatchHandler @ 05ee2790 */
      if (DAT_06b7297d == '\0') {
        FUN_02d6084c(PTR_DAT_06762360);
        DAT_06b7297d = '\x01';
      }
      uVar10 = **(undefined8 **)(*(long *)PTR_DAT_06762360 + 0xb8);
      *(undefined1 *)(param_3 + 0x145) = 0;
      *(undefined8 *)(param_3 + 0x10c) = uVar10;
      *(undefined8 *)(param_3 + 0x114) = *(undefined8 *)(param_3 + 0x104);
      memcpy((void *)(param_3 + 0xa0),(void *)(param_3 + 0x50),0x50);
      thunk_FUN_02dd37b4((void *)(param_3 + 0xa0),0);
      *(undefined1 *)(param_3 + 0x144) = 1;
      puVar2 = PTR_DAT_06767fc8;
      if (*(int *)(*(long *)PTR_DAT_06767fc8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
                    /* try { // try from 05ee189c to 05fe18a7 has its CatchHandler @ 05ee27c0 */
      uVar10 = FUN_033c441c(uVar6,*(undefined8 *)OVRPlugin_OVRP_1_46_0_TypeInfo);
      puVar1 = PTR_DAT_0675e1b8;
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_05ee1ea8;
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x40);
                    /* try { // try from 05ee18c0 to 05fe18c7 has its CatchHandler @ 05ee27d4 */
      if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar3 = FUN_0606a004(uVar8,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_1 + 0x38) == 0) goto LAB_05ee1ea8;
        uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x40);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar3 = FUN_0606a004(uVar10,uVar8,0);
        if ((uVar3 & 1) != 0) {
          if (*(long *)(param_1 + 0x38) == 0) goto LAB_05ee1ea8;
                    /* try { // try from 05ee191c to 05fe191f has its CatchHandler @ 05ee2710 */
          FUN_0636a1c8(*(long *)(param_1 + 0x38),0,param_3,0);
        }
      }
      lVar5 = *(long *)(param_1 + 0xb8);
      if (lVar5 != 0) {
                    /* try { // try from 05ee1934 to 05fe196f has its CatchHandler @ 05ee278c */
        (**(code **)(lVar5 + 0x18))
                  (*(undefined8 *)(lVar5 + 0x40),uVar6,param_3,*(undefined8 *)(lVar5 + 0x28));
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      if (DAT_06b7c2c3 == '\0') {
        FUN_02d6084c(PTR_DAT_06767fc8);
        DAT_06b7c2c3 = '\x01';
      }
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *(long *)puVar2;
      }
                    /* try { // try from 05ee19ac to 05fe19b7 has its CatchHandler @ 05ee27bc */
      uVar10 = FUN_033c4160(uVar6,param_3,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18),
                            *(undefined8 *)PTR_DAT_067860d0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)puVar1);
      }
                    /* try { // try from 05ee19d0 to 05fe19d7 has its CatchHandler @ 05ee27d0 */
      uVar3 = UnityEngine_Font__add_textureRebuilt(uVar10,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar10 = FUN_033c441c(uVar6,*(undefined8 *)PTR_DAT_06786100);
      }
      fVar9 = (float)FUN_0607500c(0);
      uVar8 = *(undefined8 *)(param_3 + 0x30);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
                    /* try { // try from 05ee1a2c to 05fe1a2f has its CatchHandler @ 05ee270c */
      uVar3 = UnityEngine_Font__add_textureRebuilt(uVar10,uVar8,0);
                    /* try { // try from 05ee1a44 to 05fe1a7f has its CatchHandler @ 05ee2788 */
      if (((uVar3 & 1) == 0) || (*(float *)(param_1 + 0x58) <= fVar9 - *(float *)(param_3 + 0x134)))
      {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(param_3 + 0x138) + 1;
      }
      *(int *)(param_3 + 0x138) = iVar4;
      *(float *)(param_3 + 0x134) = fVar9;
      FUN_0636a964(param_3,uVar10,0);
      *(undefined8 *)(param_3 + 0x38) = uVar6;
      thunk_FUN_02dd37b4((undefined8 *)(param_3 + 0x38),uVar6);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar10 = FUN_033c441c(uVar6,*(undefined8 *)PTR_DAT_067860f8);
      *(undefined8 *)(param_3 + 0x40) = uVar10;
      thunk_FUN_02dd37b4((undefined8 *)(param_3 + 0x40),uVar10);
                    /* try { // try from 05ee1abc to 05fe1ac7 has its CatchHandler @ 05ee27b8 */
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar3 = FUN_0606a004(uVar10,0,0);
                    /* try { // try from 05ee1adc to 05fe1ae7 has its CatchHandler @ 05ee27cc */
      if ((uVar3 & 1) != 0) {
        lVar5 = *(long *)(param_1 + 0xd8);
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 0x18))
                    (*(undefined8 *)(lVar5 + 0x40),uVar10,param_3,*(undefined8 *)(lVar5 + 0x28));
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        if (DAT_06b7c2c4 == '\0') {
          FUN_02d6084c(PTR_DAT_06767fc8);
          DAT_06b7c2c4 = '\x01';
        }
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar5 = *(long *)puVar2;
        }
                    /* try { // try from 05ee1b5c to 05fe1b67 has its CatchHandler @ 05ee27b4 */
        FUN_033c3938(uVar10,param_3,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x30),
                     *(undefined8 *)PTR_DAT_067860e0);
      }
    }
    if ((param_2 >> 1 & 1) == 0) {
                    /* try { // try from 05ee1b7c to 05fe1b87 has its CatchHandler @ 05ee27c8 */
      return;
    }
    lVar5 = *(long *)(param_1 + 0xc0);
    uVar10 = *(undefined8 *)(param_3 + 0x28);
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x18))
                (*(undefined8 *)(lVar5 + 0x40),uVar10,param_3,*(undefined8 *)(lVar5 + 0x28));
    }
    puVar2 = PTR_DAT_06767fc8;
    if (*(int *)(*(long *)PTR_DAT_06767fc8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    if (DAT_06b7c2c5 == '\0') {
      FUN_02d6084c(PTR_DAT_06767fc8);
      DAT_06b7c2c5 = '\x01';
    }
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar2;
    }
                    /* try { // try from 05ee1bfc to 05fe1c07 has its CatchHandler @ 05ee27b0 */
    FUN_033c3938(uVar10,param_3,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x20),
                 *(undefined8 *)PTR_DAT_067860f0);
                    /* try { // try from 05ee1c1c to 05fe1c27 has its CatchHandler @ 05ee27c4 */
    uVar8 = FUN_033c441c(uVar6,*(undefined8 *)PTR_DAT_06786100);
    puVar1 = PTR_DAT_0675e1b8;
    uVar7 = *(undefined8 *)(param_3 + 0x40);
    if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675e1b8);
    }
    uVar3 = UnityEngine_Font__add_textureRebuilt(uVar10,uVar8,0);
    if (((uVar3 & 1) == 0) || (*(char *)(param_3 + 0xf8) == '\0')) {
      if (*(char *)(param_3 + 0x145) != '\0') {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar3 = FUN_0606a004(uVar7,0,0);
        if ((uVar3 & 1) != 0) {
          lVar5 = *(long *)(param_1 + 0xf8);
          if (lVar5 != 0) {
                    /* try { // try from 05ee1d3c to 05fe1d47 has its CatchHandler @ 05ee27a8 */
            (**(code **)(lVar5 + 0x18))
                      (*(undefined8 *)(lVar5 + 0x40),uVar6,param_3,*(undefined8 *)(lVar5 + 0x28));
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          if (DAT_06b7c2c7 == '\0') {
                    /* try { // try from 05ee1d5c to 05fe1d67 has its CatchHandler @ 05ee27bc */
            FUN_02d6084c(PTR_DAT_06767fc8);
            DAT_06b7c2c7 = '\x01';
          }
          lVar5 = *(long *)puVar2;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar5 = *(long *)puVar2;
          }
          FUN_033c4160(uVar6,param_3,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x50),
                       *(undefined8 *)PTR_DAT_067860c8);
        }
      }
    }
    else {
      lVar5 = *(long *)(param_1 + 200);
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 0x18))
                  (*(undefined8 *)(lVar5 + 0x40),uVar10,param_3,*(undefined8 *)(lVar5 + 0x28));
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
                    /* try { // try from 05ee1c9c to 05fe1ca7 has its CatchHandler @ 05ee27ac */
      if (DAT_06b7c2c6 == '\0') {
        FUN_02d6084c(PTR_DAT_06767fc8);
        DAT_06b7c2c6 = '\x01';
      }
                    /* try { // try from 05ee1cbc to 05fe1cc7 has its CatchHandler @ 05ee27c0 */
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *(long *)puVar2;
      }
      FUN_033c3938(uVar10,param_3,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x28),
                   *(undefined8 *)PTR_DAT_067860e8);
    }
    *(undefined1 *)(param_3 + 0xf8) = 0;
    FUN_0636a964(param_3,0,0);
    *(undefined8 *)(param_3 + 0x38) = 0;
    thunk_FUN_02dd37b4((undefined8 *)(param_3 + 0x38),0);
    if (*(char *)(param_3 + 0x145) != '\0') {
                    /* try { // try from 05ee1ddc to 05fe1de7 has its CatchHandler @ 05ee27a4 */
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar3 = FUN_0606a004(uVar7,0,0);
      if ((uVar3 & 1) != 0) {
        lVar5 = *(long *)(param_1 + 0xf0);
                    /* try { // try from 05ee1dfc to 05fe1e07 has its CatchHandler @ 05ee27b8 */
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 0x18))
                    (*(undefined8 *)(lVar5 + 0x40),uVar7,param_3,*(undefined8 *)(lVar5 + 0x28));
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        if (DAT_06b7c2c8 == '\0') {
          FUN_02d6084c(PTR_DAT_06767fc8);
          DAT_06b7c2c8 = '\x01';
        }
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar5 = *(long *)puVar2;
        }
        FUN_033c3938(uVar7,param_3,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x48),
                     *(undefined8 *)PTR_DAT_067860d8);
      }
    }
                    /* try { // try from 05ee1e7c to 05fe1e87 has its CatchHandler @ 05ee27a0 */
    *(undefined1 *)(param_3 + 0x145) = 0;
    *(undefined8 *)(param_3 + 0x40) = 0;
                    /* try { // try from 05ee1ea0 to 05fe1eaf has its CatchHandler @ 05ee27b4 */
    thunk_FUN_02dd37b4((undefined8 *)(param_3 + 0x40),0);
    return;
  }
LAB_05ee1ea8:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


