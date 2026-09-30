/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_get_session_media_state_string
ENTRY_POINT: 0810eb08
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_get_session_media_state_string
          (undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  
  (*(code *)*param_1)();
  if (unaff_x21 != 0) {
    uVar1 = FUN_06f73aa8();
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    lVar5 = *unaff_x20;
    uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar1 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_0810eb8c;
        }
        uVar1 = uVar1 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348();
LAB_0810eb8c:
    lVar5 = (*(code *)*puVar2)();
    lVar6 = *unaff_x19;
    uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar1 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_0810ebec;
        }
        uVar1 = uVar1 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348();
LAB_0810ebec:
    uVar3 = (*(code *)*puVar2)();
    if (lVar5 != 0) {
      uVar1 = FUN_06f73aa8(lVar5,uVar3,0);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      lVar5 = *unaff_x20;
      uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar1 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x22) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 8) * 0x10 + 0x138);
            goto LAB_0810ec74;
          }
          uVar1 = uVar1 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_03cf1348();
LAB_0810ec74:
      plVar4 = (long *)(*(code *)*puVar2)();
      lVar5 = *unaff_x19;
      uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar1 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x22) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 8) * 0x10 + 0x138);
            goto LAB_0810ecd4;
          }
          uVar1 = uVar1 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_03cf1348();
LAB_0810ecd4:
      uVar3 = (*(code *)*puVar2)();
      if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0810ed04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar4 + 0x9b8))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x9c0));
        return uVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


