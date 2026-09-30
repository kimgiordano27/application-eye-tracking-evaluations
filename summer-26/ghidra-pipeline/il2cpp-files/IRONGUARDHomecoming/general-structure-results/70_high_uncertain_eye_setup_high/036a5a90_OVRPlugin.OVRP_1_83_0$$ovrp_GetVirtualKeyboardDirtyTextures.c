/*
FUNCTION_NAME: OVRPlugin.OVRP_1_83_0$$ovrp_GetVirtualKeyboardDirtyTextures
ENTRY_POINT: 036a5a90
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_83_0__ovrp_GetVirtualKeyboardDirtyTextures(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int in_w9;
  int *piVar8;
  long unaff_x19;
  ulong uVar9;
  long *plVar10;
  long *unaff_x24;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  bVar2 = (**(code **)(param_1 + (long)(in_w9 + 1) * 0x10 + 0x138))();
  uVar9 = 0;
  *(byte *)(unaff_x19 + 0x70) = bVar2 & 1;
  do {
    lVar6 = *(long *)(unaff_x19 + 0x68);
    if (lVar6 == 0) goto LAB_036a5ccc;
    if (*(uint *)(lVar6 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar6 = *(long *)(lVar6 + uVar9 * 8 + 0x20);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                      (lVar6,0,0);
    if ((uVar3 & 1) == 0) {
      if (lVar6 == 0) goto LAB_036a5ccc;
      lVar4 = FUN_040703d4(lVar6,0);
      if (*(char *)(unaff_x19 + 0x70) == '\0') {
        if (lVar4 == 0) goto LAB_036a5ccc;
        uVar3 = FUN_04073358(lVar4,0);
        if ((uVar3 & 1) != 0) {
          FUN_04073314(lVar4,0,0);
        }
      }
      else {
        plVar10 = *(long **)(unaff_x19 + 0x28);
        if (plVar10 == (long *)0x0) goto LAB_036a5ccc;
        lVar7 = *plVar10;
        uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar3 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x24) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 4) * 0x10 + 0x138);
              goto LAB_036a5b98;
            }
            uVar3 = uVar3 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar10,*unaff_x24,4);
LAB_036a5b98:
        (*(code *)*puVar5)(plVar10,uVar9 & 0xffffffff,0,puVar5[1]);
        if (lVar4 == 0) goto LAB_036a5ccc;
        uVar3 = FUN_04073358(lVar4,0);
        if ((uVar3 & 1) == 0) {
          FUN_04073314(lVar4,1,0);
          if (*(char *)(unaff_x19 + 0x38) != '\0') goto LAB_036a5c2c;
          FUN_040c1540(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,lVar6,0)
          ;
          FUN_040c1674(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                       in_stack_00000018,lVar6,0);
        }
        else if (*(char *)(unaff_x19 + 0x38) == '\0') {
          FUN_040c170c(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,lVar6,0)
          ;
          FUN_040c17a4(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                       in_stack_00000018,lVar6,0);
        }
        else {
LAB_036a5c2c:
          lVar6 = FUN_04070398(lVar6,0);
          if (lVar6 == 0) {
LAB_036a5ccc:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_0407de3c(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,
                       uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                       in_stack_00000018,lVar6,0);
        }
      }
    }
    uVar9 = uVar9 + 1;
    if (uVar9 == 0x13) {
      return;
    }
  } while( true );
}


