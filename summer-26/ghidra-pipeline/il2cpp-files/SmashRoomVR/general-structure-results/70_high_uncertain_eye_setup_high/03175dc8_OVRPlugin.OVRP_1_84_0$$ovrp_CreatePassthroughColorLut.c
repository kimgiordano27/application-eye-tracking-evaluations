/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_CreatePassthroughColorLut
ENTRY_POINT: 03175dc8
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


void OVRPlugin_OVRP_1_84_0__ovrp_CreatePassthroughColorLut(ulong param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  ulong unaff_x20;
  long *plVar8;
  long *unaff_x24;
  long *unaff_x25;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  ulong in_stack_00000010;
  uint in_stack_00000018;
  
  uVar2 = in_stack_00000010 >> 0x20;
  uVar1 = _uStack0000000000000008 >> 0x20;
code_r0x03175dc8:
  FUN_0395ad0c(param_1,param_2,unaff_d9,unaff_d8,param_3,0);
LAB_03175e60:
  do {
    unaff_x20 = unaff_x20 + 1;
    if (unaff_x20 == 0x13) {
      return;
    }
    lVar5 = *(long *)(unaff_x19 + 0x68);
    if (lVar5 == 0) goto LAB_03175e94;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x20) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    param_3 = *(long *)(lVar5 + unaff_x20 * 8 + 0x20);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_03922f24(param_3,0,0);
  } while ((uVar3 & 1) != 0);
  if (param_3 != 0) {
    lVar5 = FUN_0391c2b8(param_3,0);
    if (*(char *)(unaff_x19 + 0x70) == '\0') {
      if (lVar5 != 0) {
        uVar3 = FUN_0391fbb4(lVar5,0);
        if ((uVar3 & 1) != 0) {
          FUN_0391fb70(lVar5,0,0);
        }
        goto LAB_03175e60;
      }
    }
    else {
      plVar8 = *(long **)(unaff_x19 + 0x28);
      if (plVar8 != (long *)0x0) {
        lVar6 = *plVar8;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x24) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 4) * 0x10 + 0x138);
              goto LAB_03175d60;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ae9f78(plVar8,*unaff_x24,4);
LAB_03175d60:
        (*(code *)*puVar4)(plVar8,unaff_x20 & 0xffffffff,0,puVar4[1]);
        if (lVar5 != 0) {
          param_2 = in_stack_00000010 & 0xffffffff;
          unaff_d8 = (ulong)in_stack_00000018;
          uVar3 = FUN_0391fbb4(lVar5,0);
          if ((uVar3 & 1) == 0) {
            FUN_0391fb70(lVar5,1,0);
            if (*(char *)(unaff_x19 + 0x38) == '\0') {
              FUN_0395a910(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,
                           param_3,0);
              FUN_0395aa44(uVar1,param_2,uVar2,unaff_d8,param_3,0);
              goto LAB_03175e60;
            }
          }
          else if (*(char *)(unaff_x19 + 0x38) == '\0') goto code_r0x03175da4;
          lVar5 = FUN_0391c27c(param_3,0);
          if (lVar5 != 0) {
            FUN_039297a8(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,uVar1,
                         param_2,uVar2,unaff_d8,lVar5,0);
            goto LAB_03175e60;
          }
        }
      }
    }
  }
LAB_03175e94:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
code_r0x03175da4:
  FUN_0395ac74(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,param_3,0);
  param_1 = uVar1;
  unaff_d9 = uVar2;
  goto code_r0x03175dc8;
}


