/*
FUNCTION_NAME: OVRPlugin$$SetExternalCameraProperties
ENTRY_POINT: 05bc2cbc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_4
*/


float OVRPlugin__SetExternalCameraProperties(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 *unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long *unaff_x23;
  float fVar6;
  float fVar7;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
                    /* try { // try from 05bc2cbc to 05cc3243 has its CatchHandler @ 05bc2cbc
                       catch() { ... } // from try @ 05bc2cbc with catch @ 05bc2cbc
                       catch() { ... } // from try @ 05bc3390 with catch @ 05bc2cbc
                       catch() { ... } // from try @ 05bc3444 with catch @ 05bc2cbc
                       catch() { ... } // from try @ 05bc3640 with catch @ 05bc2cbc
                       catch() { ... } // from try @ 05bc365c with catch @ 05bc2cbc
                       catch() { ... } // from try @ 05bc36b0 with catch @ 05bc2cbc
                       catch() { ... } // from try @ 05bc36dc with catch @ 05bc2cbc
                       catch() { ... } // from try @ 05bc371c with catch @ 05bc2cbc */
  if (unaff_x23 == (long *)0x0) goto LAB_05bc2ebc;
  lVar2 = *unaff_x23;
  uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07112228) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 4) * 0x10 + 0x138);
        goto LAB_05bc2d18;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_031c0d08();
LAB_05bc2d18:
  lVar2 = (*(code *)*puVar1)();
  *unaff_x19 = 0;
  uVar4 = FUN_05bc2ec0();
  fVar7 = 0.0;
  if ((uVar4 & 1) != 0) {
    if (unaff_x21 == (long *)0x0) goto LAB_05bc2ebc;
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07112248) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 8) * 0x10 + 0x138);
          goto OVRPlugin__SetMultimodalHandsControllersSupported;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_031c0d08();
OVRPlugin__SetMultimodalHandsControllersSupported:
    (*(code *)*puVar1)(&stack0x00000008);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    if (lVar2 == 0) goto LAB_05bc2ebc;
    fVar6 = (float)FUN_05be39d4(lVar2,&stack0x00000020,unaff_w20 & 1,0);
    if (0.0 < fVar6) {
      *unaff_x19 = 1;
      fVar7 = fVar6;
    }
  }
  uVar4 = FUN_05bc2f70();
  if ((uVar4 & 1) == 0) {
    return fVar7;
  }
  if (unaff_x21 != (long *)0x0) {
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07112248) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 9) * 0x10 + 0x138);
          goto LAB_05bc2e54;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_031c0d08();
LAB_05bc2e54:
    (*(code *)*puVar1)(&stack0x00000008);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    if (lVar2 != 0) {
      fVar6 = (float)FUN_05be3d74(lVar2,&stack0x00000020,unaff_w20 & 1,0);
      if (fVar6 <= fVar7) {
        return fVar7;
      }
      *unaff_x19 = 2;
      return fVar6;
    }
  }
LAB_05bc2ebc:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


