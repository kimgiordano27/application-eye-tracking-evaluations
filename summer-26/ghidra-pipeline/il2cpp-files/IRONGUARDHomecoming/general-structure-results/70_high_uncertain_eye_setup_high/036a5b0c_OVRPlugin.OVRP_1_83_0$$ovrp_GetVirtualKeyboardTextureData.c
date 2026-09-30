/*
FUNCTION_NAME: OVRPlugin.OVRP_1_83_0$$ovrp_GetVirtualKeyboardTextureData
ENTRY_POINT: 036a5b0c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_83_0__ovrp_GetVirtualKeyboardTextureData(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  long *plVar5;
  long *unaff_x24;
  long *unaff_x25;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  do {
    if (*(char *)(unaff_x19 + 0x70) == '\0') {
      if (param_1 == 0) goto LAB_036a5ccc;
      uVar3 = FUN_04073358(param_1,0);
      if ((uVar3 & 1) != 0) {
        FUN_04073314(param_1,0,0);
      }
    }
    else {
      plVar5 = *(long **)(unaff_x19 + 0x28);
      if (plVar5 == (long *)0x0) {
LAB_036a5ccc:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar2 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x24) {
            puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 4) * 0x10 + 0x138);
            goto LAB_036a5b98;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238(plVar5,*unaff_x24,4);
LAB_036a5b98:
      (*(code *)*puVar1)(plVar5,unaff_x20 & 0xffffffff,0,puVar1[1]);
      if (param_1 == 0) goto LAB_036a5ccc;
      uVar3 = FUN_04073358(param_1,0);
      if ((uVar3 & 1) == 0) {
        FUN_04073314(param_1,1,0);
        if (*(char *)(unaff_x19 + 0x38) != '\0') goto LAB_036a5c2c;
        FUN_040c1540(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,unaff_x21,
                     0);
        FUN_040c1674(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                     in_stack_00000018,unaff_x21,0);
      }
      else if (*(char *)(unaff_x19 + 0x38) == '\0') {
        FUN_040c170c(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,unaff_x21,
                     0);
        FUN_040c17a4(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                     in_stack_00000018,unaff_x21,0);
      }
      else {
LAB_036a5c2c:
        lVar2 = FUN_04070398(unaff_x21,0);
        if (lVar2 == 0) goto LAB_036a5ccc;
        FUN_0407de3c(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,
                     uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                     in_stack_00000018,lVar2,0);
      }
    }
    do {
      unaff_x20 = unaff_x20 + 1;
      if (unaff_x20 == 0x13) {
        return;
      }
      lVar2 = *(long *)(unaff_x19 + 0x68);
      if (lVar2 == 0) goto LAB_036a5ccc;
      if (*(uint *)(lVar2 + 0x18) <= unaff_x20) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      unaff_x21 = *(long *)(lVar2 + unaff_x20 * 8 + 0x20);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar3 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                        (unaff_x21,0,0);
    } while ((uVar3 & 1) != 0);
    if (unaff_x21 == 0) goto LAB_036a5ccc;
    param_1 = FUN_040703d4(unaff_x21,0);
  } while( true );
}


