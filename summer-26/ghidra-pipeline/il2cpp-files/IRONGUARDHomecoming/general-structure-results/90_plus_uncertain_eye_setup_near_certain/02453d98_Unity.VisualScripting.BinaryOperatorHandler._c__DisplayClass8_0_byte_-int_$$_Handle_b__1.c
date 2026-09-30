/*
FUNCTION_NAME: Unity.VisualScripting.BinaryOperatorHandler.<>c__DisplayClass8_0<byte,-int>$$<Handle>b__1
ENTRY_POINT: 02453d98
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_VisualScripting_BinaryOperatorHandler_<>c__DisplayClass8_0<byte,_int>__<Handle>b__1(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar6;
  
  if (*(long *)(unaff_x21 + 0x38) == 0) {
    FUN_01ecafa0();
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    plVar1 = (long *)FUN_04155a74(*(long *)(unaff_x20 + 0x18),unaff_w19,0);
    if (plVar1 != (long *)0x0) {
      lVar3 = *plVar1;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_02453e18;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_01ecb238(plVar1,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_02453e18:
      (*(code *)*puVar2)(plVar1,puVar2[1]);
    }
    plVar1 = (long *)FUN_02153c90(**(undefined8 **)(unaff_x21 + 0x38));
    if (plVar1 != (long *)0x0) {
      lVar3 = *plVar1;
      uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              *(long *)Method_System_Globalization_CultureInfo_get_CalendarType__) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_02453e90;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_01ecb238(plVar1,*(long *)
                                    Method_System_Globalization_CultureInfo_get_CalendarType__,0);
LAB_02453e90:
      (*(code *)*puVar2)(plVar1,uVar6,puVar2[1]);
      if (*(long *)(unaff_x20 + 0x18) != 0) {
        FUN_04155ba4(*(long *)(unaff_x20 + 0x18),unaff_w19,plVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


