/*
FUNCTION_NAME: OVRPlugin.OVRP_1_83_0$$ovrp_GetVirtualKeyboardModelAnimationStates
ENTRY_POINT: 036a5a14
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_83_0__ovrp_GetVirtualKeyboardModelAnimationStates(ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x20;
  long *plVar11;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_29__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    *(undefined1 *)(unaff_x20 + 0xfad) = 1;
  }
  puVar2 = Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_29__;
  plVar11 = *(long **)(param_2 + 0x28);
  if (plVar11 != (long *)0x0) {
    lVar7 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_29__) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_036a5a9c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar11,*(long *)
                                   Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_29__
                          ,1);
LAB_036a5a9c:
    puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
    bVar3 = (*(code *)*puVar4)(plVar11,puVar4[1]);
    uVar9 = 0;
    *(byte *)(param_2 + 0x70) = bVar3 & 1;
    while (lVar7 = *(long *)(param_2 + 0x68), lVar7 != 0) {
      if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar7 = *(long *)(lVar7 + uVar9 * 8 + 0x20);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar5 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                        (lVar7,0,0);
      if ((uVar5 & 1) == 0) {
        if (lVar7 == 0) break;
        lVar6 = FUN_040703d4(lVar7,0);
        if (*(char *)(param_2 + 0x70) == '\0') {
          if (lVar6 == 0) break;
          uVar5 = FUN_04073358(lVar6,0);
          if ((uVar5 & 1) != 0) {
            FUN_04073314(lVar6,0,0);
          }
        }
        else {
          plVar11 = *(long **)(param_2 + 0x28);
          if (plVar11 == (long *)0x0) break;
          lVar8 = *plVar11;
          uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
                goto LAB_036a5b98;
              }
              uVar5 = uVar5 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar2,4);
LAB_036a5b98:
          (*(code *)*puVar4)(plVar11,uVar9 & 0xffffffff,0,puVar4[1]);
          if (lVar6 == 0) break;
          uVar5 = FUN_04073358(lVar6,0);
          if ((uVar5 & 1) == 0) {
            FUN_04073314(lVar6,1,0);
            if (*(char *)(param_2 + 0x38) != '\0') goto LAB_036a5c2c;
            FUN_040c1540(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,lVar7,
                         0);
            FUN_040c1674(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                         in_stack_00000018,lVar7,0);
          }
          else if (*(char *)(param_2 + 0x38) == '\0') {
            FUN_040c170c(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,lVar7,
                         0);
            FUN_040c17a4(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                         in_stack_00000018,lVar7,0);
          }
          else {
LAB_036a5c2c:
            lVar7 = FUN_04070398(lVar7,0);
            if (lVar7 == 0) break;
            FUN_0407de3c(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,
                         uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                         in_stack_00000018,lVar7,0);
          }
        }
      }
      uVar9 = uVar9 + 1;
      if (uVar9 == 0x13) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


