/*
FUNCTION_NAME: OVRPlugin.OVRP_1_83_0$$ovrp_SetVirtualKeyboardModelVisibility
ENTRY_POINT: 036a5b90
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_83_0__ovrp_SetVirtualKeyboardModelVisibility(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  int in_w9;
  int *piVar4;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
code_r0x036a5b90:
  puVar1 = (undefined8 *)(param_1 + (long)in_w9 * 0x10 + 0x138);
  do {
    (*(code *)*puVar1)(unaff_x23,unaff_x20 & 0xffffffff,0,puVar1[1]);
    if (unaff_x22 == 0) goto LAB_036a5ccc;
    uVar2 = FUN_04073358(unaff_x22,0);
    if ((uVar2 & 1) == 0) {
      FUN_04073314(unaff_x22,1,0);
      if (*(char *)(unaff_x19 + 0x38) != '\0') goto LAB_036a5c2c;
      FUN_040c1540(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,unaff_x21,0)
      ;
      FUN_040c1674(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                   in_stack_00000018,unaff_x21,0);
    }
    else if (*(char *)(unaff_x19 + 0x38) == '\0') {
      FUN_040c170c(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,unaff_x21,0)
      ;
      FUN_040c17a4(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                   in_stack_00000018,unaff_x21,0);
    }
    else {
LAB_036a5c2c:
      lVar3 = FUN_04070398(unaff_x21,0);
      if (lVar3 == 0) goto LAB_036a5ccc;
      FUN_0407de3c(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,
                   uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                   in_stack_00000018,lVar3,0);
    }
    while( true ) {
      do {
        unaff_x20 = unaff_x20 + 1;
        if (unaff_x20 == 0x13) {
          return;
        }
        lVar3 = *(long *)(unaff_x19 + 0x68);
        if (lVar3 == 0) goto LAB_036a5ccc;
        if (*(uint *)(lVar3 + 0x18) <= unaff_x20) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        unaff_x21 = *(long *)(lVar3 + unaff_x20 * 8 + 0x20);
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar2 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                          (unaff_x21,0,0);
      } while ((uVar2 & 1) != 0);
      if (unaff_x21 == 0) goto LAB_036a5ccc;
      unaff_x22 = FUN_040703d4(unaff_x21,0);
      if (*(char *)(unaff_x19 + 0x70) != '\0') break;
      if (unaff_x22 == 0) goto LAB_036a5ccc;
      uVar2 = FUN_04073358(unaff_x22,0);
      if ((uVar2 & 1) != 0) {
        FUN_04073314(unaff_x22,0,0);
      }
    }
    unaff_x23 = *(long **)(unaff_x19 + 0x28);
    if (unaff_x23 == (long *)0x0) {
LAB_036a5ccc:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    param_1 = *unaff_x23;
    uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar2 != 0) {
      piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x24) {
          in_w9 = *piVar4 + 4;
          goto code_r0x036a5b90;
        }
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238(unaff_x23,*unaff_x24,4);
  } while( true );
}


