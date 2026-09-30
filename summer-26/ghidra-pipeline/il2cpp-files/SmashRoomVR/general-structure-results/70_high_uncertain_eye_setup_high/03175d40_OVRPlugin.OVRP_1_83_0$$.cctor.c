/*
FUNCTION_NAME: OVRPlugin.OVRP_1_83_0$$.cctor
ENTRY_POINT: 03175d40
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_83_0___cctor(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  ulong unaff_x20;
  long *plVar6;
  long *unaff_x24;
  long *unaff_x25;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
code_r0x03175d40:
  FUN_0391fb70(param_1,0,0);
LAB_03175e60:
  unaff_x20 = unaff_x20 + 1;
  if (unaff_x20 == 0x13) {
    return;
  }
  lVar3 = *(long *)(unaff_x19 + 0x68);
  if (lVar3 != 0) {
    if (*(uint *)(lVar3 + 0x18) <= unaff_x20) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    lVar3 = *(long *)(lVar3 + unaff_x20 * 8 + 0x20);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar1 = FUN_03922f24(lVar3,0,0);
    if ((uVar1 & 1) != 0) goto LAB_03175e60;
    if (lVar3 == 0) goto LAB_03175e94;
    param_1 = FUN_0391c2b8(lVar3,0);
    if (*(char *)(unaff_x19 + 0x70) == '\0') {
      if (param_1 == 0) goto LAB_03175e94;
      uVar1 = FUN_0391fbb4(param_1,0);
      if ((uVar1 & 1) != 0) goto code_r0x03175d40;
      goto LAB_03175e60;
    }
    plVar6 = *(long **)(unaff_x19 + 0x28);
    if (plVar6 == (long *)0x0) goto LAB_03175e94;
    lVar4 = *plVar6;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 4) * 0x10 + 0x138);
          goto LAB_03175d60;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ae9f78(plVar6,*unaff_x24,4);
LAB_03175d60:
    (*(code *)*puVar2)(plVar6,unaff_x20 & 0xffffffff,0,puVar2[1]);
    if (param_1 != 0) {
      uVar1 = FUN_0391fbb4(param_1,0);
      if ((uVar1 & 1) == 0) {
        FUN_0391fb70(param_1,1,0);
        if (*(char *)(unaff_x19 + 0x38) == '\0') {
          FUN_0395a910(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,lVar3,0)
          ;
          FUN_0395aa44(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                       in_stack_00000018,lVar3,0);
          goto LAB_03175e60;
        }
      }
      else if (*(char *)(unaff_x19 + 0x38) == '\0') {
        FUN_0395ac74(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,lVar3,0);
        FUN_0395ad0c(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                     in_stack_00000018,lVar3,0);
        goto LAB_03175e60;
      }
      lVar3 = FUN_0391c27c(lVar3,0);
      if (lVar3 != 0) {
        FUN_039297a8(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,
                     uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                     in_stack_00000018,lVar3,0);
        goto LAB_03175e60;
      }
    }
  }
LAB_03175e94:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


